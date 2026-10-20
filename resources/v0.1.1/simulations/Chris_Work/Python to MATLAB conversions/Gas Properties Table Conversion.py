
import numpy as np
from scipy.io import savemat
from CoolProp.CoolProp import PropsSI

fluid = "Nitrogen"

import numpy as np

# Temperature vector in Kelvin
T_vec = np.array([
    450.0, 500.0, 550.0, 588.15,
    600.0, 650.0, 700.0
], dtype=float)

# Pressure vector in MPa
P_vec = np.array([
    0.101325,
    0.5,
    1.0,
    5.0,
    10.0,
    12.0,
    14.0,
    15.0,
    16.0,
    18.0,
    20.0
], dtype=float)


# Tables indexed by temperature (rows), pressure (columns)
shape = (len(T_vec), len(P_vec))

rho = np.zeros(shape)
s = np.zeros(shape)
h = np.zeros(shape)
cp = np.zeros(shape)
mu = np.zeros(shape)
k = np.zeros(shape)
bulk = np.zeros(shape)
beta = np.zeros(shape)

for i, T in enumerate(T_vec):
    for j, P_MPa in enumerate(P_vec):
        P = P_MPa * 1e6

        rho[i, j] = PropsSI("Dmass", "T", T, "P", P, fluid)
        s[i, j] = PropsSI("Smass", "T", T, "P", P, fluid) / 1000
        h[i, j] = PropsSI("Hmass", "T", T, "P", P, fluid) / 1000
        cp[i, j] = PropsSI("Cpmass", "T", T, "P", P, fluid) / 1000

        mu[i, j] = PropsSI("VISCOSITY", "T", T, "P", P, fluid) * 1e6
        k[i, j] = PropsSI("CONDUCTIVITY", "T", T, "P", P, fluid) * 1000

        kappa = PropsSI(
            "ISOTHERMAL_COMPRESSIBILITY",
            "T", T, "P", P, fluid
        )
        bulk[i, j] = 1 / kappa / 1e6

        beta[i, j] = PropsSI(
            "ISOBARIC_EXPANSION_COEFFICIENT",
            "T", T, "P", P, fluid
        )

savemat("Nitrogen_Pressurizer_Properties.mat", {
    "T_N2": T_vec,
    "P_N2": P_vec,
    "rho_N2": rho,
    "s_N2": s,
    "h_N2": h,
    "cp_N2": cp,
    "mu_N2": mu,
    "k_N2": k,
    "bulk_N2": bulk,
    "beta_N2": beta
})

print("Nitrogen property tables generated.")
 