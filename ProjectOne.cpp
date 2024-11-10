#include<iostream>
#include<string>

using namespace std ;





struct StPersonalInfo
{
string Gender;
string relationship ;

};



struct Stcontact
{
string Phone ;
string Gmail ;
StPersonalInfo Personal ;
};


struct StWork
{
string type_work;
string Place_work;
string salary ;
Stcontact contact;

};



struct StPersonal 
{
string FullName ;
string Age ;
string country; 
string city ;
StWork work ;
};



void Read_Info(StPersonal &Info)
{
cout << "What's your name  \n " ;
cin.ignore(1, '\n') ;
getline(cin, Info.FullName );

cout << "how old are you ? " << endl;
cin>>Info.Age ;


cout << "Where are you from ? \n " ;
cin.ignore(1, '\n');
getline(cin, Info.country);

cout << "what's your work ? " << endl;
getline(cin, Info.work.type_work);

cout << "what's your salary ? \n ";
cin>>Info.work.salary;

cout << "what's place your work " << endl;
cin>>Info.work.Place_work;

cout << "what's your number Phone " << endl;
cin>>Info.work.contact.Phone ;

cout << "what's your addres gmail \n " << endl;
cin.ignore(1, '\n') ;
getline(cin, Info.work.contact.Gmail ) ;

cout << "male or female ? \n " ;
cin>>Info.work.contact.Personal.Gender ;

cout << "what's your type relation ? " << endl;
cin>> Info.work.contact.Personal.relationship ;

}


// this is the print part (output) .


void PrintInfo(StPersonal &Info)

{

cout << "name : " << Info.FullName << endl;
cout << "age : " << Info.Age << endl;
cout << "country : " << Info.country << endl;
// cout << "city : " << PirsonOne.city << endl;
cout << "gender : " << Info.work.contact.Personal.Gender << endl;
cout << "relation : " << Info.work.contact.Personal.relationship << endl;
cout << "the work : " << Info.work.type_work << endl;
cout << "salary : " << Info.work.salary << endl;
cout << "Place work : " << Info.work.Place_work << endl;
cout << "number Phone : " << Info.work.contact.Phone << endl;
cout << "Gmail address " << Info.work.contact.Gmail << endl;
cout << "the character of number in your name is " <<Info.FullName.length() << endl;

}
int main()
{
    StPersonal Person1 ;
    Read_Info(Person1) ;
    PrintInfo(Person1) ;

    StPersonal Person2 ;
    Read_Info(Person2) ;
    PrintInfo(Person2) ;

    return 0;
}