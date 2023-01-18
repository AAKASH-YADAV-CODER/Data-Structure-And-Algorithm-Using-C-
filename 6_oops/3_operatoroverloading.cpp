#include <iostream>
using namespace std;
class complex
{
private:
    int real, image;

public:
    complex(int r = 0, int i = 0)
    {
        int real = r;
        int image = i;
    }
    complex operator+(complex const &obj)
    {
        complex res;
        res.real = real + obj.real;
        res.image = image + obj.image;
        return res;
    }
    void display()
    {
        cout << real << "+ i" << image << endl;
    }
};
int main()
{
    complex c1(12, 7);
    complex c2(6, 7);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}
// #include<iostream>
// using namespace std;

// class Complex {
// private:
// 	int real, imag;
// public:
// 	Complex(int r = 0, int i = 0) {real = r; imag = i;}

// 	// This is automatically called when '+' is used with
// 	// between two Complex objects
// 	Complex operator + (Complex const &obj) {
// 		Complex res;
// 		res.real = real + obj.real;
// 		res.imag = imag + obj.imag;
// 		return res;
// 	}
// 	void print() { cout << real << " + i" << imag << '\n'; }
// };

// int main()
// {
// 	Complex c1(10, 5), c2(2, 4);
// 	Complex c3 = c1 + c2;
// 	c3.print();
// }
