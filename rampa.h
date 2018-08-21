void rampa(){	

	if ( pretoDir() && brancoEsq())	{
		OnFwd(MOTOR_ESQ, 90);
		OnFwd(MOTOR_DIR,-80);	
			
			
		}

	else if ( pretoEsq() && brancoDir()) {
		OnFwd(MOTOR_DIR,90);
		OnFwd(MOTOR_ESQ,-80);
			
		}

	else if ( brancoDir() && brancoEsq() ) {		
		OnFwd(MOTOR_DIR_ESQ,70);
			
		}

}
