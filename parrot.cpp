#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>


using namespace std;


class Parrot {
    private:
    //attributes
        vector <string> fraza;
    public:
    // Constructor
        Parrot ()
        {
            fraza.push_back("Ala ma kota");
        }
        Parrot (string mak)
        {
            fraza.push_back(mak);//z2
        }
        ~Parrot(){}
    // Method to display car information
        void say()//z1
        {
            cout<<"\n"<<fraza[0]<<"\n";
        }
        void say(string zdanie)//z3
        {
            cout<<"\n"<<zdanie<<"\n";
        }
        void say(string zdanie, int N)//z4
        {
            if(N=-5)//z5
            {
                fraza.push_back(zdanie);
                cout<<"\n"<<fraza[rand()%fraza.size()]<<"\n";
            }
            else
            {
                for (int i=0; i<N; i++)
                {
                    cout<<"\n"<<zdanie<<"\n";
                }
            }
        }
        void teach(string nowa)//
        {
            fraza.push_back(nowa);
        }
        void say(int N)//z5
        {
            if(N=-5)
            {
                cout<<"\n"<<fraza[rand()%fraza.size()]<<"\n";
            }
            for (int i=0; i<N; i++)
            {
                cout<<"\n"<<fraza[0]<<"\n";
            }
        }

};

int main()
{
    srand(time(NULL));
    Parrot papuga1;
    Parrot papuga2("Mia Luna Tearmoon");
    Parrot papuga3("Mia Luna Tearmoon");
    papuga1.say();
    papuga2.say();
    papuga1.say();
    papuga3.say("Mia Adenauer");
    papuga3.say("Philia Adenauer", 3);
    papuga3.teach("Mia Adenauer");
    papuga3.teach("Mia Luna Tearmoon");
    cout<<"\n";
    papuga3.say("Philia Adenauer", -5);
    papuga3.say(-5);
    papuga1.say(-5);
    return 0;
}

