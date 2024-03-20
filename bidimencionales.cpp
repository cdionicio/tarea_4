#include <iostream>
using namespace std;
main () {
	//arreglos bidimensionales matriz tabla
	
	
	int fil=0, col=0;
	cout<<"ingrese filas:";
	cin>>fil;
	cout<<"ingrese columnas:";
	cin>>col;
	int matriz[fil][col];
	cout<<"------------ingresar---------"<<endl;
	for(int i=0;i<fil;i++){
		for(int ii=0;ii<col;ii++){
			cout<<i<<","<<ii<<":";
			cin>>matriz[i][ii];
			cout<<i<<","<<ii<<":"<<matriz[i][ii]<<endl;
		}
	 cout<<"----------"	<<endl;
	}
	
	}
	
	
	
	
	/*
	int matriz[2][3]={{10,20,30},{40,50,60}};
	cout<<<<matriz[0][0] <<endl;
	cout<<matriz[0] [1]<<endl;
	cout<<matriz[0] [2]<<endl;
	cout<<matriz[1] [0]<<endl;
	cout<<matriz[1] [1]<<endl;
	cout<<matriz[1] [2]<<endl;
	*/

	
	
	/*
	
	system("pause");
	*/
