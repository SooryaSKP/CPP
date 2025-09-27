#include<iostream>
#include<string>
using namespace std;

// struct camera
// {
// 	int front;
// 	int rear;
// };

// struct phone
// {
// 	string Name;
// 	int RAM;
// 	int ROM;
// 	string processor;
// 	camera camera;
// 	double price;
// };

// int main()
// {
// 	phone moto;

// 	moto.Name = "moto123";
// 	moto.processor = "Snapdragon";
// 	moto.price = 4500;
// 	moto.camera.front = 13;
// 	moto.camera.rear = 16;
// 	moto.RAM = 4;
// 	moto.ROM = 32;


// 	cout << "Name " << moto.Name;
// 	cout << endl << "Processor " << moto.processor;
// 	cout << endl << "Price " << moto.price;
// 	cout << endl << "Camera front" << moto.camera.front;
// 	cout << endl << "camera rear " << moto.camera.rear;
// 	cout << endl << "RAM " << moto.RAM;
// 	cout << endl << "ROM " << moto.ROM;

// 	return 0;

// }

// we can also assing the struct this type
// struct person
// {
// 	string name;
// 	int age;
// 	float height;
// 	float weight;
// 	double salary;
// };

// int main()
// {
// 	cout<< sizeof(person);
// 	return 0;

// }

// struct MyStruct {
// 	string name;
// 	int age;
// 	float height;
// 	float weight;
// 	double salary;

// };

// int main() {
//     // Get the size of the struct type
//     cout<< sizeof(MyStruct);

//     // Get the size of a struct variable

//     return 0;
// }

// struct camera
// {
// 	int front;
// 	int rear;
// };

struct student
{
	string Name;
	short int rollno;
	float mark;
};

int main()
{
	student moto;

	moto.Name = "aaa";
	moto.rollno = 01;
	moto.mark = 50;


	cout << "Name: " << moto.Name<<endl;
	cout << "Rollno: " << moto.rollno<<endl;
	cout << "Mark: " << moto.mark<<endl;


	return 0;
}
