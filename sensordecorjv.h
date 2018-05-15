#ifndef SENSOR_DE_COR_JV
#define SENSOR_DE_COR_JV
#define SENSOR_ESQ S1
#define SENSOR_DIR S2

#define MEDIA_PRAT_BRAN_DIR 199000
#define MEDIA_PRAT_BRAN_ESQ 179000
#define MEDIA_PRET_VERDE_DIR 100
#define MEDIA_PRET_VERDE_ESQ 100
#define MEDIA_PRET_VERDE_DIR_S 0.50
#define MEDIA_PRET_VERDE_ESQ_S 0.45

struct RGB{
	int r;
	int g;
	int b;
};
struct HSV{
	int h;
	float s;
	int v;
};


RGB LerSensorCor(int porta){
	RGB valRetorno;
	valRetorno.r = ColorSensorValue(porta, INPUT_RED);
	valRetorno.g = ColorSensorValue(porta, INPUT_GREEN);
	valRetorno.b = ColorSensorValue(porta, INPUT_BLUE);

	
	return valRetorno;
}
int calculeMaximo( int valRed_Copia, int valGreen_Copia, int valBlue_Copia){
    int maximo; 
    if(valGreen_Copia >= valRed_Copia && valGreen_Copia >= valBlue_Copia){
    		maximo = valGreen_Copia;
    }else if(valRed_Copia >= valGreen_Copia && valRed_Copia >= valBlue_Copia){
    		maximo = valRed_Copia;
    }else if(valBlue_Copia >= valGreen_Copia && valBlue_Copia >= valRed_Copia){
    		maximo = valBlue_Copia;
    }
    return maximo;
}

int calculeMinimo(int valRed_Copia, int valGreen_Copia,  int valBlue_Copia){
		int minimo;
		if(valGreen_Copia <= valRed_Copia && valGreen_Copia <= valBlue_Copia){
		  	minimo = valGreen_Copia;
		}else if(valRed_Copia <= valGreen_Copia && valRed_Copia <= valBlue_Copia){
		  	minimo = valRed_Copia;
		}else if(valBlue_Copia <= valGreen_Copia && valBlue_Copia <= valRed_Copia){
		  	minimo = valBlue_Copia;
		}
		return minimo;
}
HSV RGB_HSV(RGB val_RGB){
		
		float maximo = calculeMaximo(val_RGB.r,val_RGB.g, val_RGB.b);

		int minimo = calculeMinimo(val_RGB.r,val_RGB.g, val_RGB.b);

		HSV valRetorno;
		if(maximo == val_RGB.r && val_RGB.g >= val_RGB.b){
			valRetorno.h =  60 * (val_RGB.g - val_RGB.b)/ (maximo - minimo)  ; 
		}else if(maximo == val_RGB.r && val_RGB.g < val_RGB.b){
			valRetorno.h =  60 * (val_RGB.g - val_RGB.b)/(maximo - minimo) + 360;
		}else if(maximo == val_RGB.g){
			valRetorno.h =  60 * (val_RGB.b - val_RGB.r)/(maximo - minimo) + 120;
		}else if(maximo == val_RGB.b){
			valRetorno.h =  60 * (val_RGB.r - val_RGB.g)/(maximo - minimo) + 240;
		}
  			valRetorno.s =  (maximo - minimo) / maximo;
  			valRetorno.v = maximo;
			return valRetorno;

}
HSV SensorDir(){
		HSV valHSV;
		RGB val_RGB = LerSensorCor(SENSOR_DIR);		
		valHSV = RGB_HSV(val_RGB);
	
		return valHSV;
}
HSV SensorEsq(){
		HSV valHSV;
		RGB val_RGB = LerSensorCor(SENSOR_ESQ);
		valHSV = RGB_HSV(val_RGB);		
		return valHSV;
}
bool pretoDir() {
	HSV valHSV = SensorDir();
	return (valHSV.v < MEDIA_PRET_VERDE_DIR && valHSV.s < MEDIA_PRET_VERDE_DIR_S);

}	
bool pretoEsq() {
	HSV valHSV = SensorEsq();
	return (valHSV.v < MEDIA_PRET_VERDE_ESQ && valHSV.s < MEDIA_PRET_VERDE_ESQ_S);
}
bool verdeDir(){
HSV valHSV = SensorDir();
return (valHSV.v < MEDIA_PRET_VERDE_DIR && valHSV.s > MEDIA_PRET_VERDE_DIR_S);
}
bool verdeEsq(){
HSV valHSV = SensorEsq();
return (valHSV.v < MEDIA_PRET_VERDE_ESQ && valHSV.s > MEDIA_PRET_VERDE_ESQ_S);
}

bool brancoDir() {
	HSV valHSV = SensorDir();
	
	return (valHSV.v < MEDIA_PRAT_BRAN_DIR && valHSV.v > MEDIA_PRET_VERDE_DIR);
}
bool brancoEsq() {
	HSV valHSV = SensorEsq();
	return (valHSV.v < MEDIA_PRAT_BRAN_ESQ && valHSV.v > MEDIA_PRET_VERDE_ESQ); 
}

bool prateadoDir() {
	HSV valHSV = SensorDir();
	return (valHSV.v > MEDIA_PRAT_BRAN_DIR); 
}
bool prateadoEsq() {
	HSV valHSV = SensorEsq();
	return (valHSV.v > MEDIA_PRAT_BRAN_ESQ); 
}
#endif
