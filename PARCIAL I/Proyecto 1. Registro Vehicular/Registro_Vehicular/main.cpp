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
        }else{
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
                cout<<"[2]: No"<<endl;
                cout<<"Answer: ";
                cin>>answer;
                cin.ignore(100,'\n');
                if(answer==0){
                    ProgramIsOpened = false;
                }
                cout<<endl;

            //hasta aqui
            }
        }
    }
    cout<<"BYE!!"<<endl;



    return 0;
}
