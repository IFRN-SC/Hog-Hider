#define MOTOR_ESQ OUT_C 
#define MOTOR_DIR OUT_A
#define MOTOR_DIR_ESQ OUT_AC
#include "sensordecorjv.h"

void paraGirarEsquerda(){
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);

		OnFwd(MOTOR_DIR,80);
//		Wait(4000);
		OnRev(MOTOR_ESQ,85);
		Wait (1250);	
		while(!pretoDir() && !pretoEsq()){			
			OnRev(MOTOR_DIR_ESQ,50);	
		}
}




void paraFrente(){
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);
		OnFwd(MOTOR_DIR_ESQ,75);
		Wait (1420);
}


void girarDireita(){
		OnFwd(MOTOR_DIR,-80);
		OnRev(MOTOR_ESQ,-75);
		Wait (1250);
}


void paraFrente2(){
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);
		OnFwd(MOTOR_DIR_ESQ,75);
		Wait (2500);
}


void paraGirarDireita(){
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);
		OnFwd(MOTOR_DIR,-80);
		OnRev(MOTOR_ESQ,-75);
		Wait (1100);
}

void paraFrente3(){
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);	
		while(!pretoDir() && !pretoEsq()){			
		OnFwd(MOTOR_DIR_ESQ,50);
	}
}

void girarEsquerdaPara(){
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);
		OnFwd(MOTOR_DIR_ESQ,50);
		Wait(300);
		OnFwd(MOTOR_DIR,80);
		OnRev(MOTOR_ESQ,75);
		Wait (1200);
		OnFwd(MOTOR_DIR_ESQ,0);
		Wait (700);
}


void desviarObstaculo(){		
paraGirarEsquerda();
paraFrente();
girarDireita();
paraFrente2();
paraGirarDireita();
paraFrente3();
girarEsquerdaPara();
} 
