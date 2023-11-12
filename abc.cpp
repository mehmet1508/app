#include <iostream>

int main() {
    // Print the body of the plane
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Print the wings of the plane
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << " ";
        }

        for (int j = 0; j < 6 - i; ++j) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}


//#include <iostream>
//#include<iomanip>
//using namespace std;
//enum Direction {NORTH, SOUTH,WEST,EAST};
//int main()
//{
//	Direction direction;
//	int selection;
//	cin >> selection;
//
//	direction = static_cast<Direction>(selection);
//	switch (direction) {
//	case NORTH: cout << "NORTH"; break;
//	case SOUTH: cout << "SOUTH"; break;
//	case WEST: cout << "WEST"; break;
//	case EAST: cout << "EAST"; break;
//	default: cout << "Fatih GRIMES AND KEREM SEXX SEND THIS MESSAGE TO YUSUF OKUR" <<setw(43) << "THE WORLD FUCKED UP"; break;
//	}
//   
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}




















//#include <iostream>
//using namespace std;
//
//struct Trapezoid{
//	double base1;
//	double base2;
//	double height;
//
//};
//int main()
//{
//	Trapezoid myTra;
//	cout << "enter base1 of the trapezoid:" << "\n";
//	cin >> myTra.base1;
//	cout << "enter base2 of the trapezoid:" << "\n";
//	cin >> myTra.base2;
//	cout << "enter height of the trapezoid:" << "\n";
//	cin >> myTra.height;
//	double area = (myTra.base1 + myTra.base2) * myTra.height / 2;
//	cout << "area of the trapezoid :" << "\n";
//	cout << area;
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}































//#include <iostream>
//using namespace std;
//
//
//// define an enum data type
//enum enumDepartment { SOFTWARE , COMPUTER, INFORMATICS = 5 };
//
//struct Date {
//	int day;
//	int month;
//	int year;
//};
//
//struct student {
//	string name;
//	string surName;
//	int number;
//	Date birthDate;
//	enumDepartment dept;
//};
//
//
//int main()
//{
//
//	student student1 = { "Ali", "YILMAZ", 1 ,{1,1,2000},COMPUTER };
//
//	//student student2;
//
//	cout << "STUDENT NAME...................... : " << student1.name;
//	cout << "\nSTUDENT SURNAME................... : " << student1.surName;
//	cout << "\nSTUDENT NUMBER.................... : " << student1.number;
//	cout << "\nSTUDENT BIRTHDATE................. : " << student1.birthDate.day << "/" << student1.birthDate.month << "/" << student1.birthDate.year;
//	cout << "\nSTUDENT DEPARTMENT................ : ";
//
//	switch (student1.dept)
//	{
//	case SOFTWARE:cout << SOFTWARE ; break;
//	case COMPUTER:cout << COMPUTER; break;
//	case INFORMATICS:cout << "INFORMATICS ENGINEERING"; break;
//	default:cout << "ERROR..."; break;
//	}
//
//
//}






























//#include <iostream>
//
//using namespace std;
//
//typedef int number;
//number x, y;			// x and y are integer data type
//
//
//struct measure {
//	number meter;
//	number cm;
//};
//
//int main()
//{
//
//
//
//	measure width = { 2,40 };
//
//
//	measure height;
//	cout << "Enter Height (meter):";
//	cin >> height.meter;
//
//	cout << "Enter Height (cm):";
//	cin >> height.cm;
//
//	measure circumference;
//	circumference.meter = 2 * (width.meter + height.meter);
//	circumference.cm = 2 * (width.cm + height.cm);
//
//	if (circumference.cm >= 100)
//	{
//		int add = circumference.cm / 100;
//		int remain = circumference.cm % 100;
//
//		circumference.cm = remain;
//		circumference.meter += add;
//	}
//
//	cout << "Width         : " << width.meter << " m " << width.cm << " cm" << endl;
//	cout << "Height  	   : " << height.meter << " m " << height.cm << " cm" << endl;
//	cout << "Circumference : " << circumference.meter << " m " << circumference.cm << " cm" << endl;
//
//	cout << sizeof(int) << endl;
//	cout << sizeof(measure) << endl;
//
//	
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//typedef int number;
//number x, y; // x and y are integer data types
//
//struct measure {
//    number meter;
//    number cm;
//};
//
//int main() {
//    measure width = { 2, 40 };
//
//    measure height;
//    cout << "Enter Height (meter): ";
//    if (!(cin >> height.meter)) {
//        cerr << "Invalid input. Exiting." << endl;
//        return 1; // Return an error code
//    }
//
//    cout << "Enter Height (cm): ";
//    if (!(cin >> height.cm)) {
//        cerr << "Invalid input. Exiting." << endl;
//        return 1; // Return an error code
//    }
//
//    measure circumference;
//    circumference.meter = 2 * (width.meter + height.meter);
//    circumference.cm = 2 * (width.cm + height.cm);
//
//    if (circumference.cm >= 100) {
//        int add = circumference.cm / 100;
//        int remain = circumference.cm % 100;
//
//        circumference.cm = remain;
//        circumference.meter += add;
//    }
//
//    cout << "Width         : " << width.meter << "m " << width.cm << "cm" << endl;
//    cout << "Height        : " << height.meter << "m " << height.cm << "cm" << endl;
//    cout << "Circumference : " << circumference.meter << "m " << circumference.cm << "cm" << endl;
//
//    cout << "Size of int    : " << sizeof(int) << " bytes" << endl;
//    cout << "Size of measure: " << sizeof(measure) << " bytes" << endl;
//
//    return 0;






















//#include <iostream>
//using namespace std;
//
//struct structTime {
//	int hour;
//	int minute;
//};
//
//struct structCalendar {
//	int year;
//	int month;
//	int day;
//	structTime time;            // nested struct
//};
//
//
//int main()
//{
//	structCalendar calendar;
//
//	cout << "YEAR - MONTH - DAY - HOUR - MINUTE" << "\n";
//	/*cin >> calendar.year >> calendar.month >> calendar.day;
//	cin >> calendar.time.hour >> calendar.time.minute;*/
//	calendar = { 2020, 12, 7, {14, 0} };
//	cout << calendar.day <<"." << calendar.month <<"." << calendar.year << '\t'
//		<< calendar.time.hour << ':' << calendar.time.minute;
//
//	// assigning initial value to a nested struct variable
//	
//
//	return 0;
//}




































//#include <iostream>
//#include<iomanip>
//using namespace std;
//
//struct bacteria {
//	double type1;
//	double type2;
//};
//int main() {
//	bacteria bac;
//	bac.type1 = 100.00;
//	bac.type2 = 120.00;
//	cout << "HOUR" <<setw(22)<< "TYPE1" <<setw(22)<< "TYPE2" << "\n";
//	cout << "--------------------------------------------------" << endl;
//	cout <<"0"<<setw(24)<< fixed << setprecision(2) << bac.type1 << setw(24)<< fixed << setprecision(2) << bac.type2 << "\n";
//
//	for (int i = 1; i <=24; i++) {
//		 
//		bac.type1 += bac.type1 * 0.5;
//		bac.type2 += bac.type2 * 1.1;
//
//		cout << i << setw(24) << fixed << setprecision(2) << bac.type1 << setw(24) << fixed << setprecision(2)  << bac.type2 << endl; 
//
//	}
//
//
//
//
//}











//#include <iostream>
// 
// 
//#include <iomanip>
//
//using namespace std;
//
//struct complexNumber
//{
//	double real;
//	double imaginary;
//};
//
//int main()
//{
//	complexNumber number1, number2, result;
//	number1.real = 44.426423423;
//	number1.imaginary = 48;
//
//	cout << "Enter second number's real and imaginary parts : ";
//	cin >> number2.real >> number2.imaginary;
//
//	result.real = number1.real + number2.real;
//	result.imaginary = number1.imaginary + number2.imaginary;
//
//	cout << fixed << setprecision(2) << result.real
//		<< "+" << fixed << setprecision(2) << result.imaginary << " i" << endl;
//
//	//cout << fixed <<setprecision(1)<<result.real
//	//     << '+' << setw(5) << right << result.imaginary << 'i' << endl;
//
//	return 0;
//}