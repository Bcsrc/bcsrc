#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in1,    ir1,            sensorLineFollower)
#pragma config(Sensor, in2,    ir2,            sensorLineFollower)
#pragma config(Sensor, in3,    ir3,            sensorLineFollower)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_3,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Motor,  port2,           motorA,        tmotorVex393, PIDControl, encoder, encoderPort, I2C_1, 1000)
#pragma config(Motor,  port3,           motorB,        tmotorVex393, PIDControl, encoder, encoderPort, I2C_2, 1000)
#pragma config(Motor,  port4,           motorC,        tmotorVex393, PIDControl, encoder, encoderPort, I2C_3, 1000)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//



task main()
{//display
	//int d ;
	//int speed ;
	//bLCDBacklight = true;
	//robotType(none);
	////string mainBattery ;

	//while(nLCDButtons == 0) {}


	////motor[motorA] = 50 ;
	////	wait1Msec(1000);
	////motor[motorA] = 0 ;
	////	wait1Msec(1000);

	////motor[motorB] = 50 ;
	////	wait1Msec(1000);
	////motor[motorB] = 0 ;
	////	wait1Msec(1000);

	////motor[motorC] = 50 ;
	////	wait1Msec(1000);
	////motor[motorC] = 0 ;
	////	wait1Msec(1000);

	//nMotorEncoder[motorA] = 0;	//Set the encoder so that it starts counting at 0
	//nMotorEncoder[motorB] = 0;	//Set the encoder so that it starts counting at 0
	//nMotorEncoder[motorC] = 0;	//Set the encoder so that it starts counting at 0


	//	speed = 80 ;

	// //distX(true) ;
	//	driveX(speed) ;
	//  wait1Msec(500);
	//	stopAll() ;
	//	wait1Msec(500);

	//  driveY(speed) ;
	//  wait1Msec(500);
	//	stopAll() ;
	//	wait1Msec(500);

	//	driveX(-speed) ;
	//  wait1Msec(500);
	//	stopAll() ;
	//	wait1Msec(500);

	//  driveY(-speed) ;
	//  wait1Msec(500);
	//	stopAll() ;
	//	wait1Msec(500);


		//d = distX(false);
		//displayLCDNumber(0, 0, d) ;
			bLCDBacklight = false;
	while (true)
	{
		clearLCDLine(0);
		displayLCDNumber(0, 0, SensorValue[in1]) ;
				wait1Msec(500);
	}

		//startMotor(port3, 30);

		//		wait1Msec(200);							//Robot waits for 2000 milliseconds before executing program
		//	stopMotor(port3);		//Motor on port2 is run at power level 80

		//			startMotor(port4, 30);

		//		wait1Msec(200);							//Robot waits for 2000 milliseconds before executing program
		//	stopMotor(port4);		//Motor on port2 is run at power level 80

		//displayLCDString(0, 0, "Encoder: ");
		//sprintf(mainBattery, "%d", nMotorEncoder[motorA]); //Build the value to be displayed
		//displayNextLCDString(mainBattery);



}
