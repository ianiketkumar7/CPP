#include<iostream>
#include<fstream>

using namespace std;
int main(){

/* Creating a file and entered the data in it. */
    // ofstream onfile;
    // onfile.open("/Users/samreshkumar/Desktop/file.txt");
    // onfile << "Hey\nJust Started learning File Handling\nKudos to you.";
    // cout << "File created succesfully\nData has been written in the file." << endl;
    // onfile.close();


/* copy and paste data from one file to another */

    // ofstream onfile;
    // onfile.open("/Users/samreshkumar/Desktop/file2.txt");

    // ifstream infile; char str;
    // infile.open("/Users/samreshkumar/Desktop/file.txt");

    // while(infile.get(str)){
    //     onfile.put(str);                                    
    // }
    // cout << "File copied with no ERRORs." << endl;
    // onfile.close();


/* getline used to print whole string rather than printing a word, infile is obj of
ifstream and str is variable of string type in which the extracted data from file is stored. */

    // while(getline(infile, str)){
    //     cout << str << endl;
    // }


  //  infile.close();


/* Deletion of the file */

int value = remove("/Users/samreshkumar/Desktop/file2.txt");
if(value == 0){
    cout << "File has been deleted." << endl;
}
else{
    cout << "File not deleted." << endl;  
}
}