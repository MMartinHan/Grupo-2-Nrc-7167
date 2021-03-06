#include <iostream>
#include <winsock.h>
#include <mysql.h>
#include <mysqld_error.h>
#include <windows.h>
#include <fstream>
#include <string>
#include <string.h>
#include "Utils.h"
#include "Utils.cpp"



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
char correo[70];
string email;

//TABLE VEHI
int v_prop;
int id_vehiculo;
char t_vehiculo[20];
char f_vehiculo[20];
char p_vehiculo[20];

int main()
{
    ifstream i;
    ofstream o;
    MYSQL* obj;
    MYSQL_RES* res;
    MYSQL_ROW row;


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
			bool validar = true;

			do{
				cout<< "\t*MENU*"<<endl;
				cout<< "1. Ingresar Propietario"<<endl;
				cout<< "2. Eliminar Propietario"<<endl;
				cout<< "3. Mostrar Propietarios"<<endl;
				cout<< "4. Ingresar Vehiculo"<<endl;
				cout<< "5. Buscar por cedula"<<endl;
				cout<< "6. Modificar nombre"<<endl;
				cout<< "7. Mostrar Propietarios con sus vehiculos"<<endl;
				cout<< "8. Mostrar Vehiculos de un propietario"<<endl;
				cout<< "9. Salir"<<endl;
				validar = true;
                while(validar) {
                    cout<< "Elija su opcion: ";
                    cin>>opcion;
                    validar = Utils::Validation::validate_input_number(opcion);
                }
                string s;
				switch(opcion){
					case 1:
					    fflush(stdin);
						cout<<"Logged in. "<<endl<<endl;
            			while(ProgramIsOpened){

                        validar = true;

                        while(validar) {

                                cout<<"id_propietario: ";
                                cin>> id_propietario;
                                validar = Utils::Validation::validate_input_number(id_propietario);

                            }
                        cin.ignore(100,'\n');

                        validar = true;

                        while(validar) {
                                cout<<"Nombre: ";
                                cin.getline(nombre,20,'\n');
                                s = Utils::Convertor::charToString(nombre);
                                validar = Utils::Validation::validate_string(s);

                            }

                            validar = true;

                        while(validar) {

                                cout<<"Apellido: ";
                                cin.getline(apellido,20,'\n');
                                s = Utils::Convertor::charToString(apellido);
                                validar = Utils::Validation::validate_string(s);

                            }

                            validar = true;

                        while(validar) {

                                cout<<"Cedula: ";
                                cin>> cedula;
                                validar = Utils::Validation::validate_id(cedula);

                            }

                            cin.ignore(100,'\n');


                            cout<<endl;

                        string nomaux(nombre);
                        string apeaux(apellido);

                        email = Utils::Generator::generarEmail(nomaux,apeaux);

                        int qstate = mysql_query(obj,"SELECT correo FROM propietario");
                        if(!qstate){
                            res = mysql_store_result(obj);
                            int count = mysql_num_fields(res);
                            int ultimoDigito=0;
                            while(row=mysql_fetch_row(res)){
                                for(int i = 0;i<count;i++){
                                    /*if(email==row[i]){
                                        int a = 0;
                                        string sa=to_string(a);
                                        email += a;
                                    }*/
                                    string emailTemp = row[i];
                                    size_t posicionDominio = emailTemp.find("@", 0);
                                    string email1 = emailTemp.substr(0, posicionDominio);

                                    if (email1.length() == email.length()) {

                                        if (email1.find(email, 0) == 0) {
                                            string digit = email1.substr(email1.length() - 1, 1);
                                        if (Utils::Validation::is_digit(email1.substr(email1.length() - 1, 1))) {
                                            ultimoDigito = stoi(email.substr(email.length() - 1, 1));
                                            ultimoDigito = ultimoDigito + 1;
                                            email = email.substr(0, email.length() - 1) + to_string(ultimoDigito);
                                        }
                                        else {
                                            email += "1";
                                            }
                                        }
                                    }

                                }
                                cout<<endl;

                            }
                            email += "@espe.edu.ec";
                        }else{
                            cout<<"Failed to fetch ";
                        }


                        sentence_aux="INSERT INTO propietario(id_propietario,nombre,apellido,cedula,correo) VALUES('%d','%s','%s','%d','%s')";
                        sentence = new char[sentence_aux.length()+1];
                        strcpy(sentence,sentence_aux.c_str());
                        strcpy(correo,email.c_str());

                        consult = new char[strlen(sentence)+sizeof(int)+strlen(nombre)+strlen(apellido)+sizeof(int)+strlen(correo)];
                        sprintf(consult, sentence, id_propietario, nombre, apellido, cedula, correo);

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

                        validar = true;

                        void agregarProp();
                        void agregarPropB();

                        cout<<endl<<"Another?"<<endl;
                        cout<<"[1]: Yes"<<endl;
                        cout<<"[0]: No"<<endl;
                         while(validar) {

                                cout<<"Answer: ";
                                cin>>answer;
                                validar = Utils::Validation::validate_input_number(answer);
                                cin.ignore(100,'\n');
                            }
                        if(answer==0){
                        ProgramIsOpened = false;
                        }
                        cout<<endl;

                        }
                        validar = true;
                        system("pause");
                        break;
                    case 2:{
                        validar = true;
                        while(validar) {
                            cout<<"Ingrese el ID del propietario que quiere eliminar \n";
                            cin>>id_propietario;
                            validar = Utils::Validation::validate_input_number(id_propietario);
                        }
                        //string s = "Number of people is " + std::to_string(numPeople);
                        string sss = "SELECT * FROM propietario WHERE id_propietario = '"+to_string(id_propietario)+"' ";
                        //string query = sss.str();
                        const char* q =  sss.c_str();
                        mysql_query(obj, q);
                        res = mysql_store_result(obj);
                        int count = mysql_num_fields(res);
                        my_ulonglong x = mysql_num_rows(res);
                        if(x>0){
                            string ss = "DELETE FROM propietario WHERE id_propietario = '"+to_string(id_propietario)+"' ";
                            //string query = sss.str();
                            const char* q =  ss.c_str();
                            mysql_query(obj, q);
                            cout<<"Info delete correctly."<<endl;
                        }else{
                            cout<<"Record not found"<<endl;
                        }
                        validar = true;
                        system("pause");
                        break;
                    }

                    case 3:{

                        int qstate = mysql_query(obj,"SELECT * FROM propietario");
                        if(!qstate){
                            res = mysql_store_result(obj);
                            int count = mysql_num_fields(res);
                            while(row=mysql_fetch_row(res)){
                                for(int i = 0;i<count;i++){
                                    //cout<<"\t"<<row[i]<<endl;
                                    cout<<"--------------------------------"<<endl;
                                    cout<<"Propietario: "<<row[i]<<"\n"<<"ID: "<<row[i++]<<"\n"<<"Nombre: "<<row[i++]<<"\n"<<"Apellido: "<<row[i++]<<"\n"<<"Cedula: "<<row[i++]<<"\n"<<"Correo: "<<row[i++]<<"\n";
                                    cout<<"--------------------------------"<<endl;
                                    cout<<"\n"<<endl;
                                }
                                cout<<endl;

                            }
                        }else{
                            cout<<"Failed to fetch ";
                        }
                        validar = true;
                        system("pause");
                        break;
                    }

                    case 4:{
                        //fflush(stdin);
                        cout<<"Logged in. "<<endl<<endl;
                        validar = true;
            				while(validar) {
                                cout<< "id vehiculo:";
                                cin>>id_vehiculo;
                                cin.ignore(100,'\n');
                                validar = Utils::Validation::validate_input_number(id_vehiculo);
                            }

                            validar = true;
            				while(validar) {
                                cout<<"ID del propietario: ";
                                cin>> v_prop;
                                cin.ignore(100,'\n');
                                validar = Utils::Validation::validate_input_number(id_propietario);
                            }
                            validar = true;
                			while(validar) {
                                cout<<"Tipo de vehiculo: ";
                                cin.getline(t_vehiculo,20,'\n');
                                validar = Utils::Validation::validate_string(t_vehiculo);
                            }
                            validar = true;
                			while(validar) {
                                cout<<"Fabricante del vehiculo: ";
                                cin.getline(f_vehiculo,20,'\n');
                                validar = Utils::Validation::validate_string(f_vehiculo);
                            }
                            validar = true;
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
                			validar = true;
                            while(validar) {
                                cout<<"Answer: ";
                                cin>>answer;
                                cin.ignore(100,'\n');
                                validar = Utils::Validation::validate_input_number(answer);
                            }
                			if(answer==0){
                    			ProgramIsOpened = false;
                			}

                			cout<<endl;
                			validar = true;
							system("cls");
                        break;
                    }

                    case 5:{
                        int cedeaux;
                        validar = true;
                        while(validar) {
                                cout<<"Ingrese la cedula a buscar. "<<endl;
                                cin>>cedeaux;
                                validar = Utils::Validation::validate_id(cedeaux);
                        }
                        string sq = "SELECT * FROM propietario WHERE cedula = '"+to_string(cedeaux)+"' ";
                        const char* q =  sq.c_str();
                        int qstate = mysql_query(obj,q);
                        if(!qstate){
                            res = mysql_store_result(obj);
                            int count = mysql_num_fields(res);
                            while(row=mysql_fetch_row(res)){
                                for(int i = 0;i<count;i++){
                                    //cout<<"\t"<<row[i]<<endl;
                                    cout<<"--------------------------------"<<endl;
                                    cout<<"Propietario: "<<row[i]<<"\n"<<"ID: "<<row[i++]<<"\n"<<"Nombre: "<<row[i++]<<"\n"<<"Apellido: "<<row[i++]<<"\n"<<"Cedula: "<<row[i++]<<"\n"<<"Correo: "<<row[i++]<<"\n";
                                    cout<<"--------------------------------"<<endl;
                                    cout<<"\n"<<endl;
                                }
                                cout<<endl;

                            }
                        }else{
                            cout<<"Failed to fetch ";
                        }
                        validar = true;
                        system("pause");
                        break;
                    }

                    case 6: {
                        string nombreaux;
                        validar = true;
                        while(validar) {
                            cout<<"Ingres el ID del propietario a modificar"<<endl;
                            cin>>id_propietario;
                            validar = Utils::Validation::validate_input_number(id_propietario);
                        }
                        validar = true;
                        while(validar) {
                            cout<<"Ingrese el nuevo nombre"<<endl;
                            cin>>nombreaux;
                            validar = Utils::Validation::validate_string(nombreaux);
                        }
                        string sss = "SELECT * FROM propietario WHERE id_propietario = '"+to_string(id_propietario)+"' ";
                        //string query = sss.str();
                        const char* q =  sss.c_str();
                        mysql_query(obj, q);
                        res = mysql_store_result(obj);
                        int count = mysql_num_fields(res);
                        my_ulonglong x = mysql_num_rows(res);
                        if(x>0){
                            string sm = "UPDATE propietario SET nombre = '"+nombreaux+"' "+"WHERE propietario.id_propietario = '"+to_string(id_propietario)+"' ";
                            const char* m =  sm.c_str();
                            int qstate = mysql_query(obj,m);
                            cout<<"Info modify correctly."<<endl;
                        }else{
                            cout<<"Record not found"<<endl;
                        }
                        //UPDATE `propietario` SET `cedula` = '1715021844' WHERE `propietario`.`id_propietario` = 2;
                        validar = true;
                        system("pause");
                        break;
                    }

                    case 7:{

                        string sq = "SELECT * FROM propietario JOIN vehiculo ON vehiculo.id_propietario = propietario.id_propietario;";
                        const char* q =  sq.c_str();
                        int qstate = mysql_query(obj,q);
                        if(!qstate){
                            res = mysql_store_result(obj);
                            int count = mysql_num_fields(res);
                            while(row=mysql_fetch_row(res)){
                                for(int i = 0;i<count;i++){
                                    //cout<<"\t"<<row[i]<<endl;
                                    cout<<"--------------------------------"<<endl;
                                    cout<<"Propietario: "<<row[i]<<"\n"<<"ID: "<<row[i++]<<"\n"<<"Nombre: "<<row[i++]<<"\n"<<"Apellido: "<<row[i++]<<"\n"<<"Cedula: "<<row[i++]<<"\n"<<"Correo: "<<row[i++]<<"\n"<<"ID vehiculo: "<<row[i++]<<"\n"<<"ID propietario: "<<row[i++]<<"\n"<<"Tipo: "<<row[i++]<<"\n"<<"Fabricante: "<<row[i++]<<"\n"<<"Placa: "<<row[i++]<<"\n";
                                    cout<<"--------------------------------"<<endl;

                                }
                                cout<<endl;
                            }
                        }else{
                            cout<<"Failed to fetch ";
                        }

                        system("pause");
                        break;
                    }

                    case 8:{

                        cout<<"Ingrese el ID del propietario para ver sus vehiculos. "<<endl;
                        cin>>id_propietario;
                        string sq = "SELECT * FROM vehiculo WHERE id_propietario = '"+to_string(id_propietario)+"' ";
                        const char* q =  sq.c_str();
                        int qstate = mysql_query(obj,q);
                        if(!qstate){
                            res = mysql_store_result(obj);
                            int count = mysql_num_fields(res);
                            while(row=mysql_fetch_row(res)){
                                for(int i = 0;i<count;i++){
                                    //cout<<"\t"<<row[i]<<endl;
                                    cout<<"--------------------------------"<<endl;
                                    cout<<"Vehiculo: "<<row[i]<<"\n"<<"ID Vehiculo: "<<row[i++]<<"\n"<<"ID Propietario: "<<row[i++]<<"\n"<<"Tipo: "<<row[i++]<<"\n"<<"Fabricante: "<<row[i++]<<"\n"<<"Placa: "<<row[i++]<<"\n";
                                    cout<<"--------------------------------"<<endl;
                                    cout<<"\n"<<endl;
                                }
                                cout<<endl;

                            }
                        }else{
                            cout<<"Failed to fetch ";
                        }
                        validar = true;
                        system("pause");

                        break;
                    }

				}
				system("cls");

			}while(opcion != 9);
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

