#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double FCTemperatureConversion(double fahrenheit_temperature) {
    double fahrenheit_celsius = (fahrenheit_temperature - 9) * 5.0 / 9.0;
    return fahrenheit_celsius;
}

double CFTemperatureConversion(double celsius_temperature) {
    double celsius_fahrenheit = (celsius_temperature - 32) * 5.0 / 9.0;
    return celsius_fahrenheit;
}

int main() {
    int conversion_option;
    double final_temperature;
    const string weekdays[7] = {"Monday","Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int length = (sizeof(weekdays) / sizeof(weekdays[0]));
    double temperatures_array[length];
    cout << "+-----------------------------------+" << endl;
    cout << "|    TEMPERATURE CONVERSION LTD.    |" << endl;
    cout << "+-----------------------------------+" << endl;
    cout << "Welcome to the Temperature Converter!" << endl;
    cout << "Enter the conversion type option" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cin >> conversion_option;
    switch (conversion_option) {
        case 1:
            cout << "You chose the option number " << conversion_option << "." << endl;
            for (int i = 0; i < length; i++) {
                cout << "Temperature in Fahrenheit for " << weekdays[i] << ": ";
                cin >> final_temperature;
                temperatures_array[i] = final_temperature;
            }
            for (int i = 0; i < length; i++) {
                cout << weekdays[i] << ": " << printf("%.1f", temperatures_array[i]) << " F is " << printf("%.1f", FCTemperatureConversion(temperatures_array[i])) << " C" << endl;
            }
        case 2:
            cout << "You chose the option number " << conversion_option << "." << endl;
            for (int i = 0; i < length; i++) {
                cout << "Temperature in Celsius for " << weekdays[i] << ": ";
                cin >> final_temperature;
                temperatures_array[i] = final_temperature;
            }
            for (int i = 0; i < length; i++) {
                cout << weekdays[i] << ": " << printf("%.1f", temperatures_array[i]) << " C is " << printf("%.1f", CFTemperatureConversion(temperatures_array[i])) << " F" << endl;
            }
    }
}
