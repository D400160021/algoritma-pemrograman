#include <cstdlib>
#include <iostream>
#include <math.h>


using namespace std;
class Akar {
friend ostream& operator<<(ostream&, Akar&);
    friend istream& operator >> (istream&, Akar&);

public:
     Akar ();
     int disk(){ return B*B-4*A*C; }
     float akar1() { return (-B+sqrt(disk ()))/(2*A);
     }     
     float akar2() { return (-B-sqrt(disk ()))/(2*A);
     }
     void hitung_Akar ();
     void cetak_disk () { cout << " diskriminan = " << disk () << endl; }
     void cetak_Akar(){
          cout<<"x1 = "<<akar1 ()<<endl;
          cout << " x1 =" << akar2 () << endl;
     }
  private:
          int A,B,C ; // input.
          float x1,x2 ; // akar 1 dan akar 2.
};
          ostream& operator << (ostream& out, Akar& keluaran) {
           keluaran.cetak_disk ();
           if (keluaran.disk () >=0) keluaran.cetak_Akar();
           else cout << "akar imajiner ";
               return out ;
  }
          istream& operator >> (istream& in, Akar& masukkan) {
           cout << "kooefisien pangkal 2 : " ; in >> masukkan.A ;
           cout << "kooefisien pangkal 1 : " ; in >> masukkan.B ;
           cout << "kooefisien pangkal 0 : " ; in >> masukkan.C ;
          return in ;
     }
          Akar :: Akar () {
           cout << " menghitung akar persamaan kuadrat\n" ;
           
    }
      void Akar :: hitung_Akar () {
        if ( A==0) {
             cout << " bukan persamaan kuadrat.\n " ;
             cout << " Harga akar = " << -C/B; }
             else {
        if (disk ()> 0) {
           x1 = akar1 ();
           x2 = akar2 ();
        }
         else if (disk() == 0) {
           x1 = akar1 ();
           x2 = x1 ;
       }
      }
    }

int main(int argc, char *argv[])
{
         Akar kasus ;
         cin >> kasus ;
         kasus.hitung_Akar ();
         cout << kasus;
              
    system("PAUSE");
    return EXIT_SUCCESS;
}
