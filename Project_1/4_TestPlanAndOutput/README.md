## 1.1 HIGH LEVEL TEST PLAN
|Test ID|	Description|	Input|	Expected output|	Actual Output|
|-------|------------|-------|-----------------|---------------|
|HLTP_01|	Car Lock	| User input button press	onced |Car locked|	Car locked|
|HLTP_02|Car Unlock	| User input button presses twiced|	Car unlocked |	Car unlocked|
|HLTP_03|Alarm activation| User input button presses trice|	Alarm activated| Alarm activated|
|HLTP_04|Alarm deactivation|	User input button presses	trice |Alarm deactivated|	Alarm deactivated|
|HLTP_05|Approach Light| User input button presses four times|	Approch light turned On|	Approach light turned On|

## 1.2 LOW LEVEL TEST PLAN
|Test ID|	Description|	Input	|Expected output|	Actual Output|	Status|
|-------|------------|--------|---------------|--------------|--------|
|LLTP_01| check for BTN_Pressed Enable|	 User Button Presses once|	All LEDs turned on|	All LEDs turned on|	✅|
|LLTP_02|	Check for BTN_Pressed disable| User Button Presses twice|	All LEDs turned off|		All LEDs turned off|	✅|
|LLTP_03|	Check for BTN_Pressed Enable| User Button Presses thrice	|LED is on with clockwise rotation|LED is on clockwise rotation|	✅|
|LLTP_04	|Check for BTN_Pressed disable	|User Button Presses thrice	|LED is On with anticlockwise rotation	|LED is on with anticlockwise rotation	|✅|

|Test ID|	Description|	Input	|Expected output|	Actual Output|	Status|
|-------|------------|--------|---------------|--------------|--------|
|LLTP_01|	check for BTN_Pressed Enable|	Button pressed once|Locked|	Locked|	✅|	
|LLTP_02	|Check for BTN_Pressed disable|Button pressed twice|	Un-locked|Un-locked	|	✅|
|LLTP_03	|check for BTN_Pressed Enable|Button pressed thrice|	Alarm activated|	Alarm activated|	✅|
|LLTP_04| check for BTN_Pressed Enable|Button pressed thrice|	Alarm deactivated|	Alarm deactivated|	✅|
|LLTP_05	|Check for BTN_Pressed disable|Button pressed four times|Approach light turned on|	Approach light turned on	|	✅|
