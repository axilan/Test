#include <iostream>
#include <fstream>
using namespace std;
//Series of crucial functions and variables to Todo file;
class Funkcje{
public:
//To add line of text to To Do file;
void Add_File();

//Change task description, name or finish date;
void Edit_Task();

//Change status in task from active to finish or delete it completely;
void Finish_Task();

//delete task from file;
void Deleate_Task();

//Show all not finished tasks;
void Show_Tasks();

//As name says;
bool Check_file();
};
