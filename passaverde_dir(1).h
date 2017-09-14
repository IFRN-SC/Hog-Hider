void verde_Dir(){
	OnFwd(MOTOR_DIR_ESQ,0);
	Wait (700);
	while (brancoEsq() && verdeDir()){
		OnFwd(MOTOR_DIR_ESQ,60);
	}
	OnFwd(MOTOR_DIR_ESQ,60);
	Wait (600);
	OnFwd(MOTOR_DIR,-80);
	OnRev(MOTOR_ESQ,-75);
	Wait (1050);		
}

void verde_Esq(){
	OnFwd(MOTOR_DIR_ESQ,0);
	Wait (700);
	while (verdeEsq() && brancoDir()){
		OnFwd(MOTOR_DIR_ESQ,60);
	}
	OnFwd(MOTOR_DIR_ESQ,60);
	Wait (700);
	OnFwd(MOTOR_DIR,80);
	OnRev(MOTOR_ESQ,75);
	Wait (1000);		
}


