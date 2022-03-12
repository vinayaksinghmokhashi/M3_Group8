## About Code
|code quality| Code Grade Codiga | Code Score Codiga
|------------|----------------|-------------------|
|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/131382834c4544179992d340ef423bd3)](https://www.codacy.com/gh/vinayaksinghmokhashi/M3_Group8/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=vinayaksinghmokhashi/M3_Group8&amp;utm_campaign=Badge_Grade)|![svg](https://user-images.githubusercontent.com/46382398/158003126-9b30a04d-4a98-4a68-b70b-c6b16eabb3c9.svg)|![svg](https://user-images.githubusercontent.com/46382398/158003135-ce91165f-3236-4a1c-80f1-85eb90e9622c.svg) |



## 1.1 Introduction
Remote keyless entry (RKE) is an electronic access system that can be controlled from a distance. RKEs, which are typically used to remotely lock or unlock doors, require the end user to initiate an action that will cause a physical or software key fob to transmit a radio signal to a receiver that controls an electronic lock. Typically, the action is to press a button on a physical fob or mobile app.

## 1.2 Abstract
Remote Keyless Entry (RKE) systems are the successors to the traditional method of opening car doors by inserting physical keys. Keys with RKE-capabilities allow key-holders to remotely lock and unlock car doors, start or stop engines, or turn on and off anti-theft alarms.

## 1.3 Description
Remote keyless entry(R.K.E): This system aims to achive the goal of Locking the car, Unlocking the car, Alarm activation/deactivation and Light Focus if anyone approaches it. There are particular led signaling for particular functionalities. Lets consider if we press a button 1 time all the LED will be turned on which means the car is locked,If one presses the button twice all LEDs will turn off indicating the car is unlocked, if one presses the button thrice it'll activate or deactivate the alarm system and if one presses the button four times it indicates a persons approach by focusing light and so on.

## 2. 5 W's and 1 H
![ptoject1](https://user-images.githubusercontent.com/98843684/157908184-842ca417-1321-42af-ac82-954a64158f3b.png)

## 3. SWOAT Analyzes
![SWOT Analysis Template Cycle](https://user-images.githubusercontent.com/98843684/157908266-f0917d7f-196c-4f08-bfd4-8b8bd24dc0f3.png)

## 4. Requirements

### 4.1 High level requirements

| Test ID | Description | Category | 
|---------|-------------|----------|
|HLR_01|System shall be having a feature of locking|Technical|
|HLR_02|System shall be having a feature of unlocking |Technical|
|HLR_03|System shall be having a feature of alarm activation/deactivation|Technical|
|HLR_04|System shall be having a feature of approach light|Technical|

### 4.2 Low level requirements

| Test ID | Description |HLR ID | Category | 
|---------|-------------|-------|----------|
|LLR_01 | Pressing a particular button shall switch on the all LED's at a same time|HLR_01|Functional|
|LLR_02|Pressing a button twice shall turn LED's on in clockwise manner|HLR_03|Functional|
|LLR_03|Pressing a particular button shall switch off the LED'sat a same time |HLR_02|Functional|
|LLR_04|Pressing a button twice shall turn LED's on in Green -> Orange -> Red -> Blue fashion|HLR_03| Functional|
|LLR_05|Pressing a button four times shall turn LED's on in clockwise manner|HLR_04|Functional|
|LLR_06|Pressing a button twice shall turn LED's on in Green -> Orange -> Red -> Blue fashion|HLR_04|Functional|
