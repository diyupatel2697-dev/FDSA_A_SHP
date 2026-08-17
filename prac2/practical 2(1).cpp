#include<iostream>
#include<vector>
#include<string>
using namespace std;

// Recursive function 
int Guard(vector<string> &VEHICLENO, string VN, int index, int size)
{
    // whenever all vehicle check return 0
    if(index == size)
        return 0;

    // if Vehicle number found then return 1
    if(VEHICLENO[index] == VN)
    {
        cout << "FOUND!" << endl;
        return 1;
    }

    // function call for next vehicle
    return Guard(VEHICLENO, VN, index + 1, size);
}

int main()
{
    int no;
    string vn;
    int found = 0;

    cout << "Enter how many Vehicles: ";
    cin >> no;

    //clear input buffer
    cin.ignore();

    // Vector because vs code no support whihtout vector
    vector<string> Vehicleno(no);

    cout << "Enter Vehicle numbers:" << endl;

    for(int i = 0; i < no; i++)
    {
        cout << i + 1 << ". ";
        getline(cin, Vehicleno[i]);
    }

    cout << "Enter Vehicle number you want to find: ";
    getline(cin, vn);

    cout << "\nITERATIVE:" << endl;

    // Iterative method 
    for(int i = 0; i < no; i++)
    {
        if(Vehicleno[i] == vn)
        {
            found = 1;
            cout << "FOUND!" << endl;
            break;
        }
    }

    if(found == 0)
    {
        cout << "NOT FOUND!" << endl;
    }

    cout << "\nRECURSIVE:" << endl;

    // Recursive method call
    int s = Guard(Vehicleno, vn, 0, no);

    if(s == 0)
    {
        cout << "NOT FOUND!" << endl;
    }

}

