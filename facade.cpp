#include<iostream>
using namespace std;

class Cpu
{
    public:
        void startCpu(){
            cout<<"CPU started"<<endl;
        }
        void stopCpu()
        {
            cout<<"CPU Stoped"<<endl;
        }
};
class Ram 
{
    public:
        void LoadMemory()
        {
            cout<<"Loading Data in The Memory"<<endl;
        }
};
class HardDrive
{
    public:
        void LoadDataToRam()
        {
            cout<<"sending Data to Ram....\n ";
        }
};

class ComputerSystemFacad
{
    Cpu* cpu ;
    Ram* ram;
    HardDrive* hd;
    public:
    ComputerSystemFacad(Cpu* c,Ram* r,HardDrive* h)
    {
        this->cpu=c;
        this->ram = r;
        this->hd =h;
    }
    void startComputerSystem()
    {
        cout<<"starting computer System\n";
        cpu->startCpu();
        ram->LoadMemory();
        hd->LoadDataToRam();
    }
    void shurtDownComputerSystem()
    {
        cout<<"shuting Down"<<endl;
        cpu->startCpu();
        
    }
};

class Client
{
    public:
        Client()
        {   
            ComputerSystemFacad cs = ComputerSystemFacad(new Cpu,new Ram, new HardDrive );
            cs.startComputerSystem();
            cs.shurtDownComputerSystem();
        }

};
int main()
{
    Client c;
    return 0;
}