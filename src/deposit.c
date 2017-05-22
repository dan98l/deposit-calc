#include <stdio.h>

int getProcent(int srok, int srok_max){
      int procent;
      if(srok>=0 && srok<=30){
              procent = -10;
      }else if(srok>=31 && srok<=120){
              procent = 2;
      }else if(srok>=121 && srok<=240){
              procent = 6;
      }else if(srok>=241 && srok<=srok_max){
              procent = 12;
      }else{
          procent = 0;
      }
       	return procent;

}

float calcStoimost(float vklad, int procent, int srok){
	float stoimost = ((vklad/100)*procent)*srok+vklad;
	return stoimost;
}


void calcTest(int srok, int srok_max, int srok_min, float vklad, float min_vklad){
	printf("%d %d %d %f %f /n",srok,srok_max,srok_min,vklad,min_vklad);
        if(srok<=srok_max && srok>=srok_min && vklad>=min_vklad){
                int procent;
		procent = getProcent(srok, srok_max);
                float fullstoimost;
                fullstoimost = calcStoimost(vklad, procent, srok);
		printf("В конце срока вы получите: %f /n", fullstoimost);
        }else{
		printf("Вы ввели недопустимые данные /n");
        }
}
