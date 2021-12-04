#include <iostream>
#include <winsock.h>
#include <mysql.h>
#include <mysqld_error.h>
#include <windows.h>


using namespace std;

char HOST[]="localhost";
char USER[]="root";
char PASS[]="";

int main()
{
    MYSQL* obj;
    MYSQL_RES* res;
    MYSQL_ROW row;

    int id_propietario;
    char nombre[20];
    char apellido[20];
    int cedula=0;

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
				cout<< "\t*MENU*"<<endl;
				cout<< "1. Ingresar Propietario"<<endl;
				cout<< "2. Eliminar Propietario"<<endl;
				cout<< "3. Mostrar Propietarios"<<endl;
				cout<< "4. Mostrar por Cedula"<<endl;
				cout<< "5. Salir"<<endl;
				cout<< "Elija su opcion: ";
				cin>>opcion;
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

                        }
                        system("pause");
                        break;
                    case 2:
                        cout<<"Ingrese el ID del propietario que quiere eliminar \n";
                        cin>>id_propietario;
                        sentence_aux="DELETE FROM propietario WHERE id_propietario='id_propietario'";
                        sentence = new char[sentence_aux.length()+1];
                        strcpy(sentence,sentence_aux.c_str());

                        consult = new char[strlen(sentence)+sizeof(int)];
                        sprintf(consult, sentence, id_propietario);

                        if(mysql_ping(obj)){
                            cout<<"ERROR: Imposible to connect. "<< endl;
                            cout<< mysql_error(obj)<<endl;

                        }

                        if(mysql_query(obj,consult)){
                            cout<< "Error: "<< mysql_error(obj)<<endl;
                            rewind(stdin);
                            getchar();

                        }else{
                            cout<<"Info delete correctly."<<endl;

                        }
                        mysql_store_result(obj);
                        system("pause");
                        break;

                    case 3:{

                        int qstate = mysql_query(obj,"SELECT * FROM propietario");
                        if(!qstate){
                            res = mysql_store_result(obj);
                            int count = mysql_num_fields(res);
                            while(row=mysql_fetch_row(res)){
                                for(int i = 0;i<count;i++){
                                    //cout<<"\t"<<row[i]<<endl;
                                    cout<<"--------------------------------"<<endl;
                                    cout<<"Propietario: "<<row[i]<<"\n"<<"ID: "<<row[i++]<<"\n"<<"Nombre: "<<row[i++]<<"\n"<<"Apellido: "<<row[i++]<<"\n"<<"Cedula: "<<row[i++]<<"\n";
                                    cout<<"--------------------------------"<<endl;
                                    cout<<"\n"<<endl;
                                }
                                cout<<endl;

                            }
                        }else{
                            cout<<"Failed to fetch ";
                        }
                        system("pause");
                        break;
                    }



                    case 4:{
                        int cedulaaux;
                        cout<<"Igrese la cedula a buscar"<<endl;
                        cin>>cedulaaux;
                        int qstate = mysql_query(obj,"SELECT nombre, apellido, direccion, edad FROM amigos WHERE cedula='cedulaaux'");
                        cout<< qstate<<endl;
                        if(!qstate){
                            res = mysql_store_result(obj);
                            int count = mysql_num_fields(res);
                            while(row=mysql_fetch_row(res)){
                                for(int i = 0;i<count;i++){
                                    //cout<<"\t"<<row[i]<<endl;
                                    cout<<"--------------------------------"<<endl;
                                    cout<<"Propietario: "<<row[i]<<"\n"<<"ID: "<<row[i++]<<"\n"<<"Nombre: "<<row[i++]<<"\n"<<"Apellido: "<<row[i++]<<"\n"<<"Cedula: "<<row[i++]<<"\n";
                                    cout<<"--------------------------------"<<endl;
                                    cout<<"\n"<<endl;
                                }
                                cout<<endl;

                            }
                        }else{
                            cout<<"Failed to fetch ";
                        }
                        system("pause");
                        break;
                    }





				}
				system("cls");

			}while(opcion != 5);
        }
    }
    cout<<"BYE!!"<<endl;



    return 0;
}
