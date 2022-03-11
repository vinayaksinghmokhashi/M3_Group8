## 1.1 HIGH LEVEL TEST PLAN
|Test ID|	Description|	Input|	Expected output|	Actual Output|
|-------|------------|-------|-----------------|---------------|
|HLTP_01|Display the window status	| User input button press	onced |Window status|	Window status|
|HLTP_02|Display the alarm Status	| User input button presses twiced|	Alarm status	|	Alarm status	|
|HLTP_03|Display car battery Information| User input button presses trice|	Battery status| Battery status|
|HLTP_04|Display the door status of car| User input button presses four times|	Door status|	Door status|

## 1.2 LOW LEVEL TEST PLAN
|Test ID|	Description|	Input	|Expected output|	Actual Output|	Status|
|-------|------------|--------|---------------|--------------|--------|
|LLTP_01| check for BTN_Pressed Enable|	 User Button Presses once|	All LEDs turned on|	All LEDs turned on|	✅|
|LLTP_02|	Check for BTN_Pressed disable| User Button Presses twice|	All LEDs turned off|		All LEDs turned off|	✅|
|LLTP_03|	Check for BTN_Pressed Enable| User Button Presses thrice	|LED is on with clockwise rotation|LED is on clockwise rotation|	✅|
|LLTP_04	|Check for BTN_Pressed disable	|User Button Presses thrice	|LED is On with anticlockwise rotation	|LED is on with anticlockwise rotation	|✅|

|Test ID|	Description|	Input	|Expected output|	Actual Output|	Status|
|-------|------------|--------|---------------|--------------|--------|
|LLTP_01|	check for BTN_Pressed Enable|	Button pressed once|Window status|	Window status|	✅|	
|LLTP_02	|Check for BTN_Pressed disable|Button pressed twice|	Alarm status|Alarm status	|	✅|
|LLTP_03	|check for BTN_Pressed Enable|Button pressed thrice|	Battery status|Battery status|	✅|
|LLTP_05	|Check for BTN_Pressed disable|Button pressed four times|Door status|	Door status	|	✅|
