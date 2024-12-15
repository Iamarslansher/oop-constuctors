#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

class Student{
private:
    string name, section;
    int roll_no, engMarks, mathMarks, ictMarks, fopMarks, istMarks,phyMarks; double percentage;
public:

// Default Constructor
 Student(){
    name = "";
    section = "";
    roll_no = 0;
    engMarks = 0;
    mathMarks = 0;
    phyMarks = 0;
    ictMarks = 0;
    fopMarks = 0;
    istMarks = 0;
    percentage = 0;

};


// Constructor Single Parameter
 Student(string userName){
    name = userName;
    cout<<"Wellcome "<<userName<<": ";
}

// Constructor Double Parameter
Student(int rollNo, string userSection){
    roll_no = rollNo;
    section = userSection;
    cout<<"Wellcome "<<name<<": ";
    cout<<"Roll no: "<<roll_no<<": ";
    cout<<"Section: "<<section<<": ";
}

// Constructor Multiple Parameter
Student(int eng_Marks, int math_Marks, int phy_Marks, int ict_Marks, int fop_Marks, int ist_Marks ){
    engMarks = eng_Marks;
    mathMarks = math_Marks;
    phyMarks = phy_Marks;
    ictMarks = ict_Marks;
    fopMarks = fop_Marks;
    istMarks = ist_Marks;

    cout<<"Wellcome "<<name<<": ";
    cout<<"Roll no: "<<roll_no<<": ";
    cout<<"Section: "<<section<<": ";
    cout<<"Marks: ";
    cout<<"English: "<<engMarks;
    cout<<"Maths: "<<phyMarks;
    cout<<"ICT: "<<ictMarks;
    cout<<"FOP: "<<fopMarks;
    cout<<"IST: "<<istMarks;
    cout<<endl;
}

// Constructor All details Parameter
Student(
    string userName, int rollNo, string userSection, int eng_Marks, int math_Marks, int phy_Marks, int ict_Marks, int fop_Marks, int ist_Marks
){
    name = userName;
    roll_no = rollNo;
    section = userSection;
    engMarks = eng_Marks;
    mathMarks = math_Marks;
    phyMarks = phy_Marks;
    ictMarks = ict_Marks;
    fopMarks = fop_Marks;
    istMarks = ist_Marks;
}   

// Calculate Percentage function
 double cal_percentage() {
        return (engMarks + mathMarks + phyMarks + ictMarks + fopMarks + istMarks) / 6.0;
    }

// Calculate Grade function
 string cal_grade() {
         percentage = cal_percentage();
        if (percentage >= 90)
            return "A+";
        else if (percentage >= 80)
            return "A";
        else if (percentage >= 70)
            return "B";
        else if (percentage >= 60)
            return "C";
        else if (percentage >= 50)
            return "D";
        else
            return "F";
    }



    //  Display Function
 void display() {
        cout << left << setw(15) << "Field" << setw(20) << "Details" << endl;
        cout << string(35, '-') << endl; // Separator line
        cout << left << setw(15) << "Name" << setw(20) << name << endl;
        cout << left << setw(15) << "Roll No" << setw(20) << roll_no << endl;
        cout << left << setw(15) << "Section" << setw(20) << section << endl;
        cout << left << setw(15) << "Marks" 
             << "English: " << engMarks << ", Math: " << mathMarks 
             << ", Physics: " << phyMarks << ", ICT: " << ictMarks 
             << ", FOP: " << fopMarks << ", IST: " << istMarks << endl;
        cout << left << setw(15) << "Percentage" << setw(20) << fixed << setprecision(2) << cal_percentage() << "%" << endl;
        cout << left << setw(15) << "Grade" << setw(20) << cal_grade() << endl;
    }


};

int main()
{

//   Student s1;
//   s1.display();

//   Student s2("Arsalan Sher");
//   s2.display();

//   Student s3(5,"C");
//   s3.display();

//   Student s4(50,60,70,80,90,77);
//   s4.display();

  Student s5("Ali", 5, "C", 50, 60, 70, 80, 90, 77);
  s5.display();


    return 0;
}
