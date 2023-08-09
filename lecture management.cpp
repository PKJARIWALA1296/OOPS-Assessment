//Create a lecture management System.
#include<iostream>
#include<string.h>
using namespace std;
class Lecture{
	public:
		string LecName,Subject,Course;
		string LecContact;
		Lecture(string x,string y,string z,string a){ //Paramererize Constructor.
				LecName=x;
				Subject=y;
				Course=z;
				LecContact=a;
		}	
		void display(){
			cout<<"Name of Lecturer : "<<LecName<<endl;
			cout<<"Name of the Subject : "<<Subject<<endl;
			cout<<"Name of course : "<<Course<<endl;
		   	cout<<"Number of Lecturer : "<<LecContact<<endl;
		   	cout<<endl;
		}
};
int main(){
			cout<<"----------------Lecturer 1-------------------"<<endl;
			Lecture obj("Kajal","C/C++","Flutter","9773450866");
			obj.display();
			cout<<"----------------Lecturer 2-------------------"<<endl;
			Lecture obj1("Krunal","Data","Flutter","9896750866");
			obj1.display();
			cout<<"----------------Lecturer 3-------------------"<<endl;
			Lecture obj2("Megha","HTML/CSS","Flutter","9457505866");
			obj2.display();
			cout<<"----------------Lecturer 4-------------------"<<endl;
			Lecture obj3("Dhiren","Kotlin","Flutter","8856658965");
			obj3.display();
			cout<<"----------------Lecturer 5-------------------"<<endl;
			Lecture obj4("Pratik","NodeJS","Fullstack","6356985526");
			obj4.display();
	return 0;
}
