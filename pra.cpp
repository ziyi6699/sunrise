//1.结构体排序
/*#include <iostream>    
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
const int n = 300;

struct stu {
	int id;
	char name;
	int chinese_grade;
	int math_grade;
}a[n];

bool cmp(stu a, stu b) {
	if (a.chinese_grade > b.chinese_grade) {
		return 1;
	}
	else if (a.chinese_grade < b.chinese_grade) {
		return 0;
	}
	else {
		if (a.math_grade > b.math_grade) {
			return 1;
		}
		else {
			return 0;
		}
	}
}

int main() {
	int N = 0;
	cout << "input student num" << endl;
	cin >> N;
	if (N > 300) {
		printf("input N too mach");
		return 0;
	}
	for (int i = 1; i <= N; i++) {
		cout << "input the " <<  i  <<" student imfo" << endl;
		cout << "input id:" ;
		cin >> a[i].id;
		cout << "input name:"  ;
		cin >> a[i].name;
		cout << "input chinese grade:"  ;
		cin >> a[i].chinese_grade;
		if (a[i].chinese_grade < 0 || a[i].chinese_grade>100) {
			cout << "grade error" << endl;
			return 0;
		}
		cout << "input math grade:" ;
		cin >> a[i].math_grade;
		if (a[i].math_grade < 0 || a[i].math_grade>100) {
			cout << "grade error" << endl;
			return 0;
		}
	}	
	sort(a + 1, a + N + 1, cmp);
	for (int i = 1; i <= N; i++) {
		cout << "no." << i << "\nid:" << a[i].id << " name:" << a[i].name << " chinese grade:" << a[i].chinese_grade
			<< " math grade:" << a[i].math_grade << endl;
	}
	return 0;
}*/

//2.定义多个圆
#include<iostream>
#include<iomanip>
using namespace std;
const double pi = 3.1415;

class circel {
private:
	double radius;
public:
	circel() : radius(0) {}
	circel(double rads) : radius(rads) {}
	circel(double rads);
	double calcArea();
	double calcPerimeter();
	double getrads();
};
circel::circel(double rads) {
	radius = rads;
}
double circel::calcArea() {
	return pi * radius * radius;
}
double circel::calcPerimeter() {
	return 2 * pi * radius;
}
double circel::getrads() {
	return radius;
}

int main() {
	circel c[] = { 1,2,3 };
	cout << "圆的计算结果：" << endl;
	for (int i = 0; i <3; i++) {
		cout<<"第"<<
	}

}



