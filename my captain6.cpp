//C++ program to read time in HH:MM:SS format and convert into total seconds using class.
#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void gettime(void);
        void convertintoseconds(void);
        void displaytime(void);
};
void Time::gettime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";          cin >> hh;
    cout << "Minutes? ";          cin >> mm;
    cout << "Seconds? ";          cin >> ss;
}
void Time::convertintoseconds(void)
{
    seconds = hh*3600 + mm*60 + ss;
};
void Time::displaytime(void)
{
    cout << "The time is = " << setw(2) << setfill('0') << hh << ":"
                             << setw(2) << setfill('0') << mm << ":"
                             << setw(2) << setfill('0') << ss << endl;
    cout << "Time in total seconds: " << seconds;
};
int main()
{
    Time T; //creating objects
    T.gettime();
    T.convertintoseconds();
    T.displaytime();
    return 0;
}
