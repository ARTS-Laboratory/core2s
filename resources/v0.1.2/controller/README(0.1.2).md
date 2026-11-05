# Controller Code

* The LabVIEW Controller code
* **LabVIEW\_SMR\_V1:**
* 
* First iteration of the LabVIEW for the thermal loop, completed 6/24/26.
* 
* Only goals of this was to confirm that values are being read from the heat exchanger, all 7 pressure transducers, and all 8 thermocouples.
* 
* Problems to fix:
* 
* Incorrect flow meter value (around 0.2 GPM too high)
* 
* Incorrect P4 measurement, as well as possibly others incorrect as well
* 
* Temp. And Pressure graphs not reading history of each different sensor, instead combining them into one function
* 
* No labels on the array of outputs
* 
* To be added in future iterations:
* 
* proportional valve showing and PID control established
* 
* Possibly flow meter in main loop wired to show readings as well (will need to investigate further to see about buying a new one or if able to wire to current)
* 
* &#x20;
* 
* **LabVIEW\_SMR\_V2:**
* 
* Focused on fixing problems from first iteration:
* 
* Pressure not reading correctly (deep dive into P4 wiring still required, possibly not a LabVIEW problem)
* 
* Graphs fixed
* 
* Compensator attempted to be added to fix incorrect flowmeter output, although needs to be fine tuned (possibly with a function?)
* 
* Arrays fixed so that labels for data points are visible







**LabVIEW\_SMR\_V3:**



Focused on fixing problems from second iteration:

Pressure reading for P4 fixed

Temperature and Pressure readings split into:

&#x09;Main loop (loop excluding heat exchanger) average pressure/temp, heat exchanger average pressure/temp, and overall (loop + heat exch.)

&#x09;average pressure/temp



Still a problem with flowmeter not being calibrated correctly, will need to be fixed in future iterations

For now, looks like flowmeter is only data reading that is incorrect.



Future iterations: adding proportional valve and working through control for it

&#x09;		adding a storage system, where the data is stored directly into a file for future use.





**LabVIEW\_SMR\_V4:**



First iteration with rudimentary Proportional Valve control attempted

control DOES NOT WORK!



**LabVIEW\_SMR\_V4.5:**



Second iteration with Proportional Valve control attempted. still does not work, but diagnosed the physical controller as the problem



**LabVIEW\_SMR\_V5:**



No proportional valve added, only attempted to create a data storage system, throwing data into 3 different .csv 's: one for temp, one for pressure, one for heat exchanger flow.

Broke everything, does not work, currently in progress.



**LabVIEW\_SMR\_V6:**



Complete data acquisition and automatic file storage

Data is stored into SMR\_Logs folder on local computer in c004. If using a different computer, file path on the front panel must be changed to your specific location.



**LabVIEW\_SMR\_V6.5:**



Changed V6 so that there is now one file path name instead of three. all data is now saved into the GitHub folder data -> 001 -> run\_\[data of test]. Paired with Python, python will also insert plots of the data directly into this run folder.



**LabVIEW\_SMR\_V6.75:**



Changed V6.5 so that warning lights are added: 3 different red lights showing if max pressure was reached, max temp was reached, or max voltage was reached (respectively). All have controllable thresholds via the front panel.

Added a steady state indicator, with a controllable threshold. Green light turns on when steady state is reached, which is calculated via (deg C/min).
To be added in next version: voltage readings via new cDAQ NI 9229.



**LabVIEW\_SMR\_V7:**



First version with working (manual) proportional valve control. Although rudimentary, valve can be controlled via "P-Valve Command Voltage) from 0-10V.

For next iteration:

&#x09;add emergency shut off (if temp reaches \_\_, open p-valve all the way, etc.)

&#x09;add PID control for p-valve

&#x09;add voltage reading (when cables acquired)



**LabVIEW\_SMR\_V7.1:**



Rudimentary PID control for P-valve established. On/Off switch to determine whether manual or PID control takes over p-valve voltage.

Next iteration:

&#x09;tune PID and limit the p-valve (flow meter only goes to 5GPM, need to limit how far the valve opens)



**LabVIEW\_SMR\_V7.2:**



Nothing with valve changed.

Steady state indicator fully upgraded; works like this:

&#x09;When running, system waits 5 minutes for system to heat up

&#x09;After 5 minutes, the system calculates the maximum dT/dt in that 5 minute window

&#x09;Maximum dT/dt is multiplied by 0.01 (1%)

&#x09;1% of the maximum dT/dt is considered to be the steady state threshold

&#x09;Loop continues to run, data continues to collect. When \[current dT/dt] < \[steady state threshold], system is considered to be in steady state.



**LabVIEW\_SMR\_V7.3:**



Revamped front panel to make it easier to interpret data as system is running. Also better grouping of indicators.



**LabVIEW\_SMR\_V7.5:**



Added indicator for voltage across rod. DO NOT TRUST THE POWER SUPPLY READINGS, ONLY LABVIEWS: PSU indicates higher voltage than what is physically going across rod; resistance and general voltage drop results in about 1-1.5V lost to the rod.



**LabVIEW\_SMR\_V7.6:**



Changed file path to upload to 0.1.2/Data/002

\-> don't think that this worked actually



**LabVIEW\_SMR\_V7.61:**



Fixed the HX flow meter readings so that it is much more accurate and smoother readings.

Fixed the Raw Voltage readings from the NI 9201. Somewhere along the way, the display began getting the calculated P values, rather than the raw voltages from the NI Card



**LabVIEW\_SMR\_V7.7:**



Added Main Loop flow rate readings to front panel. Made it so that the LabVIEW now also saves the voltage over time, so we can see any voltage drops that happen and their affects on the temperature.



**LabVIEW\_SMR\_V8:**



The data acquisition for thermocouples was physically updated, adding a new cDAQ entirely. **This LabVIEW version is now the** **ONLY ONE THAT WILL WORK.** It must be tested later to ensure that the thermocouples are correct (that the T7 reading is actually the T7 location, etc).



**LabVIEW\_SMR\_V8.1:**



Model updated to reflect the new flow meter that was attached to the city water loop.



**LabVIEW\_SMR\_V8.2:**



Current through rod added via hall effect current sensor (up to 150A for now). With voltage and current, power is now calculated directly on LabVIEW
Both current and power added to the CSV for "voltage", which now is named "power"



**LabVIEW\_SMR\_V8.3:**

Control to Honeywell linear actuated valve on heat exchanger output flow added. Basic PID control added, although need to look into creating multiple PID's or "gain scheduling" to make the PID response better.

PID goal: to have a set flow rate through the heat exchanger that the valve will adjust itself to stay at.

**LabVIEW\_SMR\_V9: CURRENT BEST MODEL**

Room temperature readings added via thermocouple and copper block. Room temp is recorded in the Temperature CSV in the final column as "Room Temp (deg C). 

