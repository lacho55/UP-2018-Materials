#include <iostream>
using namespace std;
int main()
{
    // По условие числата са най-много 100.
    const int MAX_N = 100;
    
    // Нека да си направим един масив, където ще сържим числата, и една променлива n, която ще показва реалния брой числа.
    int arr[MAX_N], n;
    
    //Да прочетем броя числа
    cin>>n;
    
    // Да запазим числата в arr
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    // Ще обиколим масива и когато сме на четна позиция ще принтираме числото
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}
