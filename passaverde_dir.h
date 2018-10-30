void verde_Dir(){
	OnFwd(MOTOR_DIR_ESQ,0);
	Wait (7000);
	
}

void verde_Esq(){
	while (!pretoEsq() && !pretoDir()){
		OnFwd(MOTOR_DIR_ESQ,30);
	}
	OnFwd(MOTOR_DIR,80);
	OnRev(MOTOR_ESQ,75);
	Wait (1000);
	OnFwd(MOTOR_DIR_ESQ,30);
	Wait (300);		
}
void sla(){
	OnFwd(MOTOR_DIR_ESQ,0);
	Wait (7000);
	
}


