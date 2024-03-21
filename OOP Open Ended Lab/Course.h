#pragma once
class Course
{
    private:
    int courseCode;
    string courseName;
    public:
        Teacher teacher;
    vector<Student>studentEnrolled;

    void addStudent(Student student) {
		studentEnrolled.push_back(student);
    };
    void removeStudent(Student student) {
        for (auto rem = studentEnrolled.begin(); rem != studentEnrolled.end(); ++rem)
        {
            if (rem->getstudentname() == student.getstudentname()) {
                studentEnrolled.erase(rem);
                return;
            }
    }
		cout << "Student not found" << endl;
    };
};