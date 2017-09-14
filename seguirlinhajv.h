#define MOTOR_ESQ OUT_C 
#define MOTOR_DIR OUT_A
#define MOTOR_DIR_ESQ OUT_AC
#include "sensordecorjv.h"
#include "passaverde_dir.h"
#include "preto_preto.h"

void seguirLinha(){
		if ( pretoDir() && brancoEsq())	{
			OnFwd(MOTOR_ESQ, 90);
			OnFwd(MOTOR_DIR,-80);
			//Wait(100);
			/*OnFwd(MOTOR_DIR_ESQ,0);
			Wait (600);
			OnFwd(MOTOR_DIR_ESQ,60);
			Wait (400);
			if (brancoDir() && brancoEsq()){
			OnFwd(MOTOR_DIR,-80);
			OnRev(MOTOR_ESQ,-80);
			Wait (1000);
			}
			else {
			OnFwd(MOTOR_DIR_ESQ,45);
			}
			*/
			
			
		}
		else if ( pretoEsq() && brancoDir()) {
			OnFwd(MOTOR_DIR,90);
			OnFwd(MOTOR_ESQ,-80);
			
		}
		else if ( brancoDir() && brancoEsq() ) {		
			OnFwd(MOTOR_DIR_ESQ,30);
			
		}
else if ( pretoEsq() && pretoDir()) {
			preto_preto();			
		}
	else if (brancoEsq() && verdeDir()) {
		verde_Dir();	
		}
		else if (verdeEsq() && brancoDir()) {
		verde_Esq();
		}
//else if (pretoEsq() && verdeDir()) {
//			OnFwd(MOTOR_ESQ, 55);
		//	OnFwd(MOTOR_DIR,-40);
		//}

//else if (pretoDir() && verdeEsq()) {
				//OnFwd(MOTOR_DIR,55);
				//OnFwd(MOTOR_ESQ,-40);
		//}
/*else if (pretoEsq() && pretoDir()) {
			OnFwd(MOTOR_DIR_ESQ,0); 
			TextOut(10,20,"SOU VACILAO");
		}

else if (verdeEsq() && verdeDir()) {
			OnFwd(MOTOR_DIR_ESQ,0); 
			TextOut(10,20,"VERDE ESQ, VERDE DIR");
		}
else if (verdeEsq() && brancoDir()) {
			OnFwd(MOTOR_DIR_ESQ,0); 
			TextOut(10,20,"VERDE ESQ, BRANCO DIR");
			HSV valHSV = SensorEsq();		
			TextOut(30,40,"S");
			NumOut(30,30,valHSV.s);
			Wait (2000);
			ResetScreen();
		}
else if (prateadoEsq() && prateadoDir()) {
			OnFwd(MOTOR_DIR_ESQ,0); 
			TextOut(10,20,"PRATEADO ESQ, PRATEADO DIR");
		}
else if (brancoEsq() && prateadoDir()) {
			OnFwd(MOTOR_DIR_ESQ,0); 
			TextOut(10,20,"BRANCO ESQ, PREATEADO DIR");
		}
else if (prateadoEsq() && brancoDir()) {
			OnFwd(MOTOR_DIR_ESQ,0); 
			TextOut(10,20,"PRATEADO ESQ, BRANCO DIR");
		}
else if (verdeEsq() && prateadoDir()) {
			OnFwd(MOTOR_DIR_ESQ,0); 
			TextOut(10,20,"VERDE ESQ, PRATEADO DIR");
		}
else if (prateadoEsq() && verdeDir()) {
			OnFwd(MOTOR_DIR_ESQ,0); 
			TextOut(10,20,"PRATEADO ESQ, VERDE DIR");
		}
else if (pretoEsq() && prateadoDir()) {
			OnFwd(MOTOR_DIR_ESQ,0); 
			TextOut(10,20,"PRETO ESQ, PRATEADO DIR");
		}
else if (prateadoEsq() && pretoDir()) {
			OnFwd(MOTOR_DIR_ESQ,0); 
			TextOut(10,20,"PRATEADO ESQ, PRETO DIR");
		}
*/

		
}

