#include <iostream>
using namespace std;

int main()
{
    int stud_num;

    cout << "Please enter student number. ";
    cin >> stud_num;

    for (int k = 1; k <= stud_num; k++)
    {
        int subjects_no;
        float credit_hour_sum, gpa_sum, cgpa;
        credit_hour_sum = 0;
        gpa_sum = 0;
        string subjects[] = {"", "", "", "", "", "", "", "", "", "", "", "", "", ""};

        cout << "enter number of subjects for student " << k << " ";
        cin >> subjects_no;

        for (int i; i < subjects_no; i++)
        {
            string temp_subj;
            cout << "Enter subject " << i + 1 << " ";
            cin >> temp_subj;
            subjects[i] = temp_subj;
        }
        float gpas[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        for (int x = 0; x < subjects_no; x++)
        {
            float mark;
            float cd, gpa;
            string grade_letter;
            cd = 0;
            gpa = 0;

            cout
                << "Enter mark for " << subjects[x] << " ";
            cin >> mark;
            cout << "Enter credit hour for " << subjects[x] << " ";
            cin >> cd;

            if (cin.fail() || mark < 0 || mark > 100)
            {
                cout << "This mark is invalid! " << endl;
                exit(0);
            }
            if (mark >= 90)
            {
                grade_letter = "A+";
                gpa = 4;
            }
            else if (mark >= 85)
            {
                grade_letter = "A";
                gpa = 4;
            }
            else if (mark >= 80)
            {
                grade_letter = "A-";
                gpa = 3.75;
            }
            else if (mark >= 75)
            {
                grade_letter = "B+";
                gpa = 3.5;
            }
            else if (mark >= 70)
            {
                grade_letter = "B";
                gpa = 3.0;
            }
            else if (mark >= 65)
            {
                grade_letter = "B-";
                gpa = 2.75;
            }
            else if (mark >= 60)
            {
                grade_letter = "C+";
                gpa = 2.5;
            }
            else if (mark >= 50)
            {
                grade_letter = "C";
                gpa = 2.0;
            }
            else if (mark >= 45)
            {
                grade_letter = "C-";
                gpa = 1.75;
            }
            else if (mark >= 40)
            {
                grade_letter = "D";
                gpa = 1.0;
            }
            else if (mark < 40)
            {
                grade_letter = "F";
                gpa = 0;
            }
            gpa_sum += (gpa * cd);
            credit_hour_sum += cd;
            cout
                << "Student " << k << "'s" << "grade for " << subjects[x] << " is " << grade_letter << endl;
        }
        cgpa = gpa_sum / credit_hour_sum;
        cout << "Student " << k << "'s" << " cgpa is " << cgpa << endl;
    }
    return 0;
}
