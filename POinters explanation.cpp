//this code to describe the pointers in C++ ,
#include <iostream>
using namespace std;
int val = 5;
	float x = 3.14;
	void *p = NULL;
	typedef int oo;
	int *fun(int *p){ //this function is to get pointer or the address of the var 
		*p += 1;      //this is called "call by reference
		return p;     //here there is aestric before fun name because it will return pointer	
	}
	int q;

int main(){
	/*
	p = &x;
	float *i = static_cast<float*>	(p); //to get value if pointer p which is static
	cout << i << endl;   //address of the variable x pointed by the pointer i
	cout << *&i << endl;   //address of the variable x pointed by the pointer i
	cout << &x << endl;   //address of the variable x pointed by the pointer i
	cout << *i << endl;   //value of the variable x pointed by the pointer i */
	//---------------------------------------------------------------------------------
	/* char arr[3] = { 49, 50, 51 };
	for (oo l = 0; l < 3;l++)
		cout << *( arr +l) << endl;
	char *pp ; // &arr[0];
	pp = arr;
	for (oo l = 0; l < 3; l++)
		cout << *(pp++) << endl;*/
	//------------------------------------------------------------------------------------
	cout << q << endl;
	cout << *(fun(&q))<< endl;




















	system("pause");
	return 0;

}