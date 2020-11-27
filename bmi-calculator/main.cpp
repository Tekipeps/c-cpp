#include <iostream>
#include <string>
using namespace std;

enum Weight {
    kg = 1,
    pounds
};

double calculateBmi(double weight, double height, Weight type) {
    double bmi = 0.0;
    if (type == kg) {
        bmi = weight / (height * height);
    }
    else if (type == pounds) {
        bmi = (weight * 703) / (height * height);
    }
    return bmi;
}

void printBmiMessage(double bmi) {
    if (bmi < 18.5) {
        cout << "You are underweight with BMI of " << bmi << endl;
    }
    else if (bmi <= 24.9) {
        cout << "You are normal weight with a BMI of " << bmi << endl;
    }
    else if (bmi <= 29.9) {
        cout << "You are overweight with a BMI of " << bmi << endl;
    }
    else {
        cout << "You are Obese with a BMI of " << bmi << endl;
    }
}

int main() {
    int choice = 0;
    cout << "Calculate BMI in kg or pounds?\n1: kg \n2: pounds\n";
    cin >> choice;
    if (choice == kg) {
        double weight, height = 0;
        cout << "Enter your weight in kg: "; cin >> weight;
        cout << "Enter your height in meters: "; cin >> height;
        printBmiMessage(calculateBmi(weight, height, kg));
    }
    else if (choice == pounds) {
        double weight, height = 0;
        cout << "Enter your weight in pounds: "; cin >> weight;
        cout << "Enter your height in inches: "; cin >> height;
        printBmiMessage(calculateBmi(weight, height, pounds));
    }
    else {
        cout << "Invalid choice\n";
    }
    return 0;
}