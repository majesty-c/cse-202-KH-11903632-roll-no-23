# include <iostream>
#include <fstream>
using namespace std;

int chok=0;
int res[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};

class  hms
{public:


void doctor();
void insert();
void read();
void deletbyid();
void search();
void docor();
void insult();
void rea();
void tapping();
void ead();

};

void hms :: doctor()
{
 ifstream file;
file.open("doctors.txt");
int id,q;
int loss;
string srchfname;
string srchlname;
int srchid;
string fname;
string lname;
string city;
int grade;
int n=0;
cout<<"                          ID's of Doctors are such as   1,2,3,.....25   "<<endl;

cout<<"                      ****************   Doctor  appointment  module  **************** "<<endl<<endl;
cout<<"                      ****************************************************************"<<endl;
cout<<"                      *  if you want to search by doctor's id please enter 1         *"<<endl;
cout<<"                      *  if you want to search by doctor's name pleas enter 2        *"<<endl;
cout<<"                      *  if you want to search by doctor's speciality pleas enter 3  *"<<endl;
cout<<"                      *****************************************************************"<<endl<<endl;
int chk;
cin>>chk;
if(chk==1){
    
cout<<"pleas enter the desired id"<<endl;
cin>>srchid;
while(file>>id>>fname>>lname>>city>>grade){
if (id==srchid){
    cout<<"found"<<endl;
cout<<"id: "<<id<<endl<<" name :  "<<fname<<endl<<" speciality :  "<<lname<<endl<<" availble day : "<<city<<endl<<" availblity: "<<grade<<endl;
n=1;
loss=grade;
break;
}
}
if (n==0){
cout<<"not found"<<endl;
}
}
else if (chk==2){
  
cout<<"pleas enter the desired name"<<endl;
cin>>srchfname;
while(file>>id>>fname>>lname>>city>>grade){
if (fname==srchfname){
    cout<<"found"<<endl;
cout<<"id: "<<id<<endl<<" name:  "<<fname<<endl<<" speciality:  "<<lname<<endl<<" availble day : "<<city<<endl<<" availblity: "<<grade<<endl;
n=1;
loss=grade;
break;
}
}
if (n==0){
cout<<"not found"<<endl;
}
}

else if (chk==3){
   
cout<<"pleas enter the desired name"<<endl;
cin>>srchlname;
while(file>>id>>fname>>lname>>city>>grade){
if (lname==srchlname){
    cout<<"found"<<endl;
cout<<"id: "<<id<<endl<<" name :  "<<fname<<endl<<" speciality:  "<<lname<<endl<<" availble day : "<<city<<endl<<" availblity : "<<grade<<endl;
n=1;
loss=grade;
break;
}
}
if (n==0){
cout<<"not found"<<endl;
}}
else {
cout<<"incorrect choice"<<endl;
}

int d;
int m[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
cout<<"please enter the selected Doctor's  ID to check availblity"<<endl;
cin>>d;
if (d==1)
{
    cout<<"\nthe doctor is not availble at this day"<<endl;
}
else
{
    cout<<"doctor is availble at this date"<<endl;
    cout<<"if you want to book apointment press 1 else 0 to cancel"<<endl;
    cin>>d;
    if (d=1)
        {
          cout<<"your appointment has been booked"<<endl;
          cout<<"And your ID will be :"<<q;
          q++;
        }
    else
        {
          cout<<"you canceled the booking"<<endl;
        }

}
file.close();
}



void hms ::  insert (){

ofstream file;
int id;
string fname;
string lname;
string city;
int grade;
    cout<<" Pleas enter patient id number, patient name , desease , city , bill"<<endl;
    cin>>id>>fname>>lname>>city>>grade;
    ifstream file2;
    file2.open("project.txt");
    int id1;
string fname1;
string lname1;
string city1;
int grade1;
int flage=0;

    while(file2>>id1>>fname1>>lname1>>city1>>grade1){
        if(id==id1){
        flage=1;
        break;
        }
    }
    if(flage==0 && id >0){
         ifstream file3;
    file3.open("project.txt");
    int id2;
string fname2;
string lname2;
string city2;
int grade2;
int idarray[10000];
string fnamearray[10000];
string lnamearray[10000];
string cityarray[10000];
int gradearray[10000];
int chk=0;
int n=0;
   for (int i=0;i<10000;i++){
    if (file3>>id2>>fname2>>lname2>>city2>>grade2){
        if (id2>id && chk==0){
chk=1;
n=i;
idarray[i]=id2;
fnamearray[i]=fname2;
lnamearray[i]=lname2;
cityarray[i]=city2;
gradearray[i]=grade2;
        }

        else {
idarray[i]=id2;
fnamearray[i]=fname2;
lnamearray[i]=lname2;
cityarray[i]=city2;
gradearray[i]=grade2;
        }
}
}
file.open("project.txt",ios::app);
for (int j=0;j<10000;j++){
      if (idarray[j]==0){
    break;
    }
    if (chk==1 && j==n){
     file<<endl<<id<<"           "<<fname<<"           "<<lname<<"         "<<city<<"         "<<grade;
    file<<endl<<idarray[j]<<"           "<<fnamearray[j]<<"           "<<lnamearray[j]<<"         "<<cityarray[j]<<"         "<<gradearray[j];
    }
    else{
 file<<endl<<idarray[j]<<"           "<<fnamearray[j]<<"           "<<lnamearray[j]<<"         "<<cityarray[j]<<"         "<<gradearray[j];
    }
}
if (chk==0){
    file<<endl<<id<<"           "<<fname<<"           "<<lname<<"         "<<city<<"         "<<grade;
}
    }
else if (flage==1){
cout<<"there is allready patient with this ID"<<endl;
}
file.close();
}


void hms ::  read(){
ifstream file;
file.open("project.txt");
int id;
string fname;
string lname;
string city;
int grade;
while(file>>id>>fname>>lname>>city>>grade){
cout<<"id:   "<<id<<"   patient name    :  "<<fname<<"    desease:    "<<lname<<"    city  :   "<<city<<"   bill   :  "<<grade<<endl;
}
file.close();
}



void hms ::  deletbyid()
{
ifstream file;
file.open("project.txt");
int idarray[10000];
string fnamearray[10000];
string lnamearray[10000];
string cityarray[10000];
int gradearray[10000];
int id;
string fname;
string lname;
string city;
int grade;
for (int i=0;i<10000;i++){
    if (file>>id>>fname>>lname>>city>>grade){
idarray[i]=id;
fnamearray[i]=fname;
lnamearray[i]=lname;
cityarray[i]=city;
gradearray[i]=grade;
}
}
ofstream myfile;
int delid;
cout<<"Pleas enter the patient id you want to delete data"<<endl;
cin>>delid;
myfile.open("project.txt",ios::trunc);
for (int j=0;j<10000;j++){
    if (idarray[j]==0){
    break;
    }
  else if(idarray[j]!= delid){
   myfile<<endl<<idarray[j]<<"           "<<fnamearray[j]<<"           "<<lnamearray[j]<<"         "<<cityarray[j]<<"         "<<gradearray[j];
}
}
file.close();
}

void hms ::  search(){
ifstream file;
file.open("project.txt");
int id;
string fname;
string lname;
string city;
int grade;
int n=0;
cout<<"if you want to search by patient id please enter 1"<<endl;
cout<<"if you want to search by patient name please enter 2"<<endl;
int chk;
cin>>chk;
if(chk==1){
    int srchid;
cout<<"pleas enter the desired id"<<endl;
cin>>srchid;
while(file>>id>>fname>>lname>>city>>grade){
if (id==srchid){
    cout<<"found"<<endl;
cout<<"id: "<<id<<" fname:  "<<fname<<" lname:  "<<lname<<" city: "<<city<<" grade: "<<grade<<endl;
n=1;
break;
}
}
if (n==0){
cout<<"not found"<<endl;
}
}
else if (chk==2){
  string srchfname;
cout<<"pleas enter the desired name"<<endl;
cin>>srchfname;
while(file>>id>>fname>>lname>>city>>grade){
if (fname==srchfname){
    cout<<"found"<<endl;
cout<<"id: "<<id<<" fname:  "<<fname<<" lname:  "<<lname<<" city: "<<city<<" grade: "<<grade<<endl;
n=1;
break;
}
}
if (n==0){
cout<<"not found"<<endl;
}
}
else {
cout<<"incorrect choice"<<endl;
}
file.close();
}













void hms ::  docor(){
ifstream file;
file.open("staff.txt");
int id;
string fname;
string lname;
string city;
int grade;
int n=0;
cout<<"if you want to search by id pleas press 1"<<endl;
int chk;
cin>>chk;
if(chk==1){
    int srchid;
cout<<"pleas enter the desired id"<<endl;
cin>>srchid;
while(file>>id>>fname>>lname>>city>>grade){
if (id==srchid){
    cout<<"found"<<endl;
cout<<"id: "<<id<<endl<<" name:  "<<fname<<endl<<" occupation:  "<<lname<<endl<<" workdays : "<<city<<endl<<" building no. : "<<grade<<endl;
n=1;
break;
}
}
if (n==0){
cout<<"not found"<<endl;
}
}
else {

cout<<"incorrect choice"<<endl;
}
file.close();}


void hms ::  insult()
{
ofstream file;
int id;
string fname;
string lname;
string city;
int grade;
    cout<<"Pleas enter   staff id number, first-name , occupatin , working-days , building number "<<endl;
    cin>>id>>fname>>lname>>city>>grade;
    ifstream file2;
    file2.open("project.txt");
    int id1;
string fname1;
string lname1;
string city1;
int grade1;
int flage=0;

    while(file2>>id1>>fname1>>lname1>>city1>>grade1){
        if(id==id1){
        flage=1;
        break;
        }
    }
    if(flage==0 && id >0){
         ifstream file3;
    file3.open("project.txt");
    int id2;
string fname2;
string lname2;
string city2;
int grade2;
int idarray[10000];
string fnamearray[10000];
string lnamearray[10000];
string cityarray[10000];
int gradearray[10000];
int chk=0;
int n=0;
   for (int i=0;i<10000;i++){
    if (file3>>id2>>fname2>>lname2>>city2>>grade2){
        if (id2>id && chk==0){
chk=1;
n=i;
idarray[i]=id2;
fnamearray[i]=fname2;
lnamearray[i]=lname2;
cityarray[i]=city2;
gradearray[i]=grade2;
        }

        else {
idarray[i]=id2;
fnamearray[i]=fname2;
lnamearray[i]=lname2;
cityarray[i]=city2;
gradearray[i]=grade2;
        }
}
}
file.open("staff.txt",ios::trunc);
for (int j=0;j<10000;j++){
      if (idarray[j]==0){
    break;
    }
    if (chk==1 && j==n){
     file<<endl<<id<<"           "<<fname<<"           "<<lname<<"         "<<city<<"         "<<grade;
    file<<endl<<idarray[j]<<"           "<<fnamearray[j]<<"           "<<lnamearray[j]<<"         "<<cityarray[j]<<"         "<<gradearray[j];
    }
    else{
 file<<endl<<idarray[j]<<"           "<<fnamearray[j]<<"           "<<lnamearray[j]<<"         "<<cityarray[j]<<"         "<<gradearray[j];
    }
}
if (chk==0){
    file<<endl<<id<<"           "<<fname<<"           "<<lname<<"         "<<city<<"         "<<grade;
}
    }
file.close();}



void hms ::  rea(){
ifstream file;
file.open("project.txt");
int id;
string fname;
string lname;
string city;
int grade;
while(file>>id>>fname>>lname>>city>>grade){
cout<<"id: "<<id<<" name:  "<<fname<<"  occupatin:  "<<lname<<" working-days: "<<city<<" building no  : "<<grade<<endl;
}
file.close();
}


int ID[30];

void hms ::  tapping()
{int i;
for(i=1;i<30;i++)
 {
 	int l;
	if(res[i]==0)
	{cout<<"the room no.  "<<i<<"  is availble"<<endl;
    cout<<"to reserve the room enter 1 "<<endl;
    int l; 
    res[i]=l;
    cout<<"enter your ID"<<endl;
 	cin>>ID[i];
    cout<<"you room is reserved"<<endl;
    }
    break;
 }
}

void hms:: ead()
{
ifstream file;
file.open("lab.txt");
int id;
string fname;
string lname;
string city;
int grade;
while(file>>id>>fname>>lname>>city>>grade){
cout<<"  room no: "<<id<<endl<<"  type:  "<<fname<<endl<<" equiment availblity :  "<<lname<<endl<<" expiry-days: "<<city<<endl<<"no of vantilators : "<<grade<<endl;
}
file.close();
}





int main()
{  hms obj;
	int mago;
cout<<"                      **** Welcome to hospital management system Project ****     "<<endl<<endl;
cout<<"                      *******************************************************"<<endl;
cout<<"                      * Doctor appointment module                         1 *"<<endl;
cout<<"                      * Patient profile and admission module              2 *"<<endl;
cout<<"                      * room reservation                                  3 *"<<endl;
cout<<"                      * Labs, Wards and Operation theatres information    4 *"<<endl;
cout<<"                      * for Staff management                              5 *"<<endl;
cout<<"                      *******************************************************"<<endl<<endl;
cin>>mago;

if(mago==1){
 char y='y';
   while (y=='y'){
 obj.doctor();
 cout<<"do you want to enter module again (y:n) ?"<<endl;
 cin>>y;
    }
}
else if(mago==2)
{
cout<<"                      ******** Patient profile and admission module  ******** "<<endl<<endl;
cout<<"                      *******************************************************"<<endl;
cout<<"                      * If you want to admit new patient please enter     1 *"<<endl;
cout<<"                      * If you want to read all patient list enter        2 *"<<endl;
cout<<"                      * IF you want to delete patient data permamentaly : 3 *"<<endl;
cout<<"                      * If you want to search patient by ID enter         4 *"<<endl;
cout<<"                      *******************************************************"<<endl<<endl;
cin>>chok;
if(chok==1)
{
    char y='y';
   while (y=='y'){
 obj.insert();
 cout<<"do you want to insert data again (y:n) ?"<<endl;
 cin>>y;
    }
}
else if(chok==2)
{
    char y='y';
   while (y=='y'){
obj.read();
 cout<<"do you want to read data again (y:n) ?"<<endl;
 cin>>y;
    }

}
else if (chok==3)
{
    char y='y';
   while (y=='y'){
  obj.deletbyid();
 cout<<"do you want to delete data again (y:n) ?"<<endl;
 cin>>y;
    }
}

else if(chok==4)
{
    char y='y';
   while (y=='y'){
  obj.search();
 cout<<"do you want to search an ID again (y:n) ?"<<endl;
 cin>>y;
    }
    }
 else{
    cout<<"you entered an invalid choice";
    }
}

else if(mago==3){
 
 char y='y';
   while (y=='y'){obj.tapping();

 cout<<"do you want to search again (y:n) ?"<<endl;
 cin>>y;
    }
}
else if(mago==4){
 char y='y';
   while (y=='y')
   {
obj.ead();
 

 cout<<"do you want to search again (y:n) ?"<<endl;
 cin>>y;
    }
}

else if(mago==5)
{
 char y='y';

cout<<"                      ******** Welcome to Staff management module    ******** "<<endl<<endl;
cout<<"                      *******************************************************"<<endl;
cout<<"                      *   If you want to search over all staff and house      1 *"<<endl;
cout<<"                      *   If you want to admit new staff members              2 *"<<endl;
cout<<"                      *   If you want to read all staff information           3 *"<<endl;
cout<<"                      *******************************************************"<<endl<<endl;
cin>>chok;
if(chok==1)
{
	    char y='y';
   while (y=='y'){
 obj.docor();
 cout<<"do you want to search data again (y:n) ?"<<endl;
 cin>>y;
    }
}
else if(chok==2)
{
    char y='y';
   while (y=='y'){
obj.insult();
 cout<<"do you want to add new members again (y:n) ?"<<endl;
 cin>>y;
    }

}
else if(chok==3)
{   
obj.rea();
}


   while (y=='y')
   {
 cout<<"do you want to enter module again (y:n) ?"<<endl;
 cin>>y;
    }
}
else {
cout<<"sorry pleas enter correcr choice"<<endl;
}

cout<<endl<<"                      ********          By Nikhil Singh    ********     "<<endl<<endl;
    return 0;


}