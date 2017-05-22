#include <iostream>

using namespace std;

int main(){
	int srok_max=365;
	int srok_min=0;
	int min_vklad=1000;
	int srok,vklad;	

	cout<<"Введите срок, на который берете кредит:"<<endl;
	cin>>srok;
	cout<<"Введите сумму кредита:"<<endl;
	cin>>vklad;

	if(srok<=srok_max && srok>=srok_min && vklad>=min_vklad){
		int procent;
		if(srok>=0 && srok<=30){
			procent = -10;
		}else if(srok>=31 && srok<=120){
			procent = 2;
		}else if(srok>=121 && srok<=240){
			procent = 6;
		}else if(srok>=241 && srok<=srok_max){
			procent = 12;
		}
		float fullstoimost;
		fullstoimost = ((vklad/100)*procent)*srok+vklad;
		cout<<"В конце срока ("<<srok<<") Вы получите: "<<fullstoimost<<endl;
	}else{
		cout<<"Вы ввели недопустимые данные."<<endl;
	}
}
