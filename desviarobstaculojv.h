#define MOTOR_ESQ OUT_C 
#define MOTOR_DIR OUT_A
#define MOTOR_DIR_ESQ OUT_AC

void desviarObstaculo(){

		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);
		OnFwd(MOTOR_DIR,80);
//		Wait(4000);
		OnRev(MOTOR_ESQ,75);
		Wait (1043);
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);
		OnFwd(MOTOR_DIR_ESQ,75);
		Wait (1500);
		OnFwd(MOTOR_DIR,-80);
		OnRev(MOTOR_ESQ,-75);
		Wait (1043);
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);
		OnFwd(MOTOR_DIR_ESQ,75);
		Wait (2000);
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);
		OnFwd(MOTOR_DIR,-80);
		OnRev(MOTOR_ESQ,-75);
		Wait (1043);
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);	
		OnFwd(MOTOR_DIR_ESQ,75);
		Wait (1000);
		OnFwd(MOTOR_DIR,80);
		OnRev(MOTOR_ESQ,75);
		Wait (1043);
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);
}

