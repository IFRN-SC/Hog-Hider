#define MOTOR_ESQ OUT_C 
#define MOTOR_DIR OUT_A
#define MOTOR_DIR_ESQ OUT_AC

void desviarObstaculo(){

		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);

		OnFwd(MOTOR_DIR,80);
//		Wait(4000);
		OnRev(MOTOR_ESQ,85);
		Wait (1250);
		
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);
		OnFwd(MOTOR_DIR_ESQ,75);
		Wait (1550);
		
		OnFwd(MOTOR_DIR,-80);
		OnRev(MOTOR_ESQ,-75);
		Wait (1250);
		
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);
		OnFwd(MOTOR_DIR_ESQ,75);
		Wait (2450);
		
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);
		OnFwd(MOTOR_DIR,-80);
		OnRev(MOTOR_ESQ,-75);
		Wait (1050);
		
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);	
		OnFwd(MOTOR_DIR_ESQ,75);
		Wait (1400);
		
		OnFwd(MOTOR_DIR,80);
		OnRev(MOTOR_ESQ,75);
		Wait (1350);
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);
}

