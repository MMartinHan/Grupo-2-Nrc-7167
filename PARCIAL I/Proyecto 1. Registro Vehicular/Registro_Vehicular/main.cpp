#include <iostream>
#include <winsock.h>
#include <mysql.h>
#include <mysqld_error.h>
#include <windows.h>
#include <fstream>


using namespace std;

void agregarProp();
void agregarVehi();

void agregarPropB();
void agregarVehiB();


char HOST[]="localhost";
char USER[]="root";
char PASS[]="";


//TABLE PROP
int id_propietario;
char nombre[20];
char apellido[20];
int cedula=0;
	
//TABLE VEHI
int v_prop;
int id_vehiculo;
char t_vehiculo[20];
char f_vehiculo[20];
char p_vehiculo[20];

int main()
{
    MYSQL* obj;

	//PROGRAM OPTIONS
    boolean ProgramIsOpened=true;
    int answer;

    char* consult;
    char* sentence;
    string sentence_aux;

//-------------------------------------------
//Conection
    if(!(obj=mysql_init(0))){
        cout<<"ERROR: MySQL object could not be created"<<endl;

    }else{
        if(!mysql_real_connect(obj,HOST,USER,PASS,"registro_vehicular",0,NULL,0)){
            cout<<"ERROR: Some database info is wrong or do not exist. "<<endl;
            cout<<mysql_error(obj)<<endl;
        }
		else{
			int opcion, answer;
			
			do{
				//--------------------------
				cout<<"\t\t\t\t\tUNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE \t\t\t"<<endl;
				cout<<"\t\t\t\t\t\t ESTRUCTURA DE DATOS \t\t\t"<<endl;
				cout<< "\t\t\t\t\t BIENVENIDO AL SISTEMA VEHICULAR \t\t\t"<<endl;
				cout<<endl;
				cout<<"\t\t\t\t\t-------------------------------"<<endl;		
				cout<<"\t\t\t\t\t|1 -> INGRESO DE PROPIETARIO  |"<<endl;
				cout<<"\t\t\t\t\t|2 -> INGRESO DE VEHICULO     |"<<endl;
				cout<<"\t\t\t\t\t|3 -> MOSTRAR PROPIETARIOS    |"<<endl;
				cout<<"\t\t\t\t\t|4 -> MOSTRAR PROPIETARIOS    |"<<endl;				
				cout<<"\t\t\t\t\t|5 -> SALIR                   |"<<endl;
				cout<<"\t\t\t\t\t-------------------------------"<<endl;
				
				cout<< "Elija su opcion: ";
				cin>>opcion;
				
				//______________________________
				
				switch(opcion){
					case 1:
						cout<<"Logged in. "<<endl<<endl;
            			while(ProgramIsOpened){
                		cout<<"id_propietario: ";
                		cin>> id_propietario;
                		cin.ignore(100,'\n');

                		cout<<"Nombre: ";
                		cin.getline(nombre,20,'\n');

                		cout<<"Apellido: ";
                		cin.getline(apellido,20,'\n');

                		cout<<"Cedula: ";
                		cin>> cedula;
                		cin.ignore(100,'\n');
                		cout<<endl;
                		
                		agregarProp();
                		agregarPropB();

                		sentence_aux="INSERT INTO propietario(id_propietario,nombre,apellido,cedula) VALUES('%d','%s','%s','%d')";
                		sentence = new char[sentence_aux.length()+1];
                		strcpy(sentence,sentence_aux.c_str());

                		consult = new char[strlen(sentence)+sizeof(int)+strlen(nombre)+strlen(apellido)+sizeof(int)];
                		sprintf(consult, sentence, id_propietario, nombre, apellido, cedula);

                		if(mysql_ping(obj)){
                    		cout<<"ERROR: Imposible to connect. "<< endl;
                    		cout<< mysql_error(obj)<<endl;
						}

                		if(mysql_query(obj,consult)){
                    		cout<< "Error: "<< mysql_error(obj)<<endl;
                    		rewind(stdin);
                    		getchar();

                		}else{
                    		cout<<"Info added correctly."<<endl;

                		}
                		mysql_store_result(obj);

                		cout<<endl<<"Another?"<<endl;
                		cout<<"[1]: Yes"<<endl;
                		cout<<"[0]: No"<<endl;
                		cout<<"Answer: ";
                		cin>>answer;
                		cin.ignore(100,'\n');
                		if(answer==0){
                    	ProgramIsOpened = false;
                		}
                		cout<<endl;
                		system("cls");

            //hasta aqui
            			}
						break;
					case 2:
						//----
						cout<<"Logged in. "<<endl<<endl;
            			while(ProgramIsOpened){
            				cout<< "id vehiculo:";
            				cin>>id_vehiculo;
            				cin.ignore(100,'\n');
            				cout<<"ID del propietario: ";
                			cin>> v_prop;
                			cin.ignore(100,'\n');
                			cout<<"Tipo de vehiculo: ";
                			cin.getline(t_vehiculo,20,'\n');
                			cout<<"Fabricante del vehiculo: ";
                			cin.getline(f_vehiculo,20,'\n');
                			cout<<"Placa del Vehiculo: ";
                			cin.getline(p_vehiculo,20,'\n');
                			
                			agregarVehi();
                			agregarVehiB();
                			
                			sentence_aux="INSERT INTO vehiculo(id_vehiculo,id_propietario,tipo,fabricante,placa) VALUES('%d','%d','%s','%s','%s')";
                			sentence = new char[sentence_aux.length()+1];
                			strcpy(sentence,sentence_aux.c_str());

                			consult = new char[strlen(sentence)+sizeof(int)+sizeof(int)+strlen(t_vehiculo)+strlen(f_vehiculo)+strlen(p_vehiculo)];
                			sprintf(consult, sentence, id_vehiculo , v_prop, t_vehiculo, f_vehiculo, p_vehiculo);
                			if(mysql_ping(obj)){
                    			cout<<"ERROR: Imposible to connect. "<< endl;
                    			cout<< mysql_error(obj)<<endl;
							}

                			if(mysql_query(obj,consult)){
                    			cout<< "Error: "<< mysql_error(obj)<<endl;
                    			rewind(stdin);
                    			getchar();

                			}else{
                    			cout<<"Info added correctly."<<endl;

                			}
                			mysql_store_result(obj);
                			cout<<endl<<"Another?"<<endl;
                			cout<<"[1]: Yes"<<endl;
                			cout<<"[0]: No"<<endl;
                			cout<<"Answer: ";
                			cin>>answer;
                			cin.ignore(100,'\n');
                			if(answer==0){
                    			ProgramIsOpened = false;
                			}
                			
                			cout<<endl;
                			
							}
							system("cls");
						
						//----
						break;
					case 3:
						//---
						break;
						//----
				}
					
			}while(opcion != 5);
        }
    }
    cout<<"BYE!!"<<endl;



    return 0;
}

void agregarProp(){
	ofstream archivo;
	
	archivo.open("Archivo_Propietarios.txt", ios::app);
	
	//validacion
	if(archivo.fail()){
		cout<< "No se pudo abrir el archivo"<<endl;
		exit(1);
	}
	
	archivo<< "\nid_prop: "<<id_propietario<<endl;
	archivo<< "Nombre: "<<nombre<<endl;
	archivo<< "Apellido: "<<apellido<<endl;
	archivo<< "Cedula: "<<cedula<<endl<<endl;
	
	archivo.close(); //cerramos nuestro archivo
}

void agregarVehi(){
	ofstream archivo;
	
	archivo.open("Archivo_Vehiculos.txt", ios::app);
	
	//validacion
	if(archivo.fail()){
		cout<< "No se pudo abrir el archivo"<<endl;
		exit(1);
	}
	
	archivo<< "\nid propietario: "<<v_prop<<endl;
	archivo<< "id vehiculo: "<<id_vehiculo<<endl;
	archivo<< "Tipo: "<<t_vehiculo<<endl;
	archivo<< "Fabricante: "<<f_vehiculo<<endl;
	archivo<< "Placa: "<<p_vehiculo<<endl;
	
	archivo.close(); //cerramos nuestro archivo
	
}

void agregarPropB(){
	ofstream archivoB;
	
	archivoB.open("Archivo_Propietarios.dat", ios::app | ios::binary);
	
	if(archivoB.fail()){
		cout<< "no se pudo abrir el archivo"<<endl;
		exit(1);
	}
	
	archivoB.write((char *) &id_propietario, sizeof(int));
	archivoB.write((char *) &nombre, strlen(nombre));
	archivoB.write((char *) &apellido, strlen(apellido));
	archivoB.write((char *) &cedula, sizeof(int));
	
	archivoB.close();
	
}

void agregarVehiB(){
	
	ofstream archivoB;
	
	archivoB.open("Archivo_Vehiculos.dat", ios::app | ios::binary);
	
	if(archivoB.fail()){
		cout<< "no se pudo abrir el archivo"<<endl;
		exit(1);
	}
	
	archivoB.write((char *) &v_prop, sizeof(int));
	archivoB.write((char *) &id_vehiculo, sizeof(int));
	archivoB.write((char *) &t_vehiculo, strlen(t_vehiculo));
	archivoB.write((char *) &f_vehiculo, strlen(f_vehiculo));
	archivoB.write((char *) &p_vehiculo, strlen(p_vehiculo));
	
	archivoB.close();
	
}









