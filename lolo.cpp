#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include <windows.h>
using namespace std;
using std::ifstream;
using std::ofstream;

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);}

main(){
	
int le,n1,n2,n3,pro,cual,i,suma;
string nomb,n;
cout<<" Buenos dias  ";
gotoxy(3,3);
cout<<" (1) ingresar estudiante y notas  ";
gotoxy(4,6);
cout<<" (2) calcular promedio ";
gotoxy(5,9);
cout<<" (3) salir de la aplicacion ";
gotoxy(5,12);	
cout<<"Donde quiere entrar :";
cin>>le;
if(le==1){
		cout<<"cuantos estudiantes son:";
cin>>cual;
for (i=0; i<cual; i++)
    {
        
	cout<<"\n\n Ingresar nombre y notas  \n";
		ofstream lola("loco.txt", ios::app);
		cout<<"nombre:";
		cin>>n;
		cout<<"nota 1:";
		cin>>n1;
		cout<<"nota 2:";
		cin>>n2;
		cout<<"nota 3: ";
		cin>>n3;
		lola<<n;
		lola<<" ";
		lola<<n1;
		lola<<" ";
		lola<<n2;
		lola<<" ";
		lola<<n3;
		lola<<" ";
		lola<<"\n";
		lola.close();
	}}
if(le==2)
	{
		ifstream lola("loco.txt");
		while(!lola.eof()){
		lola>>n>>n1>>n2>>n3;
		suma=n1+n2+n3;
		pro=suma/3;
		
	cout<<"\n el promedio es"<<pro;
	    cout<<" \n El nombre es: "<<n<<" #1nota: "<<n1<<" #2nota: "<<n2<<" #3la cantidad es: "<<n3<<"\n";	
	
	if(pro>=3)
{
	cout<<"\t ud gano";
}else{
		cout<<"\t ud perdio";

}

}}

	
	

	
	





}



