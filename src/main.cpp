#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> markVector;
    markVector = {0, 1, 2, 3, 4, 5};
    int size = markVector.size();
    cout << "Size : " << size << endl; 

    markVector.erase(markVector.begin()); 
    // {1, 2, 3, 4, 5}
    cout << "First Erase : " << markVector[0] << endl;

    markVector.erase(markVector.begin()+1, markVector.begin()+2);
    // แปลว่าลบตัวที่ 2 จนถึงตัวที่ 2 
    // begin ตัวแรกใน function erase คือ index + 1
    // begin ตัวที่สองใน function erase คือ index
    // {1, 3, 4, 5}
    cout << "Second Erase : " << markVector[0] << " " << markVector[1] << endl;

    markVector.erase(markVector.begin(), markVector.begin()+2);
    // {4, 5}
    cout << "Third Erase : " << markVector[0] << " " << markVector[1] << endl;

    return 0;
}