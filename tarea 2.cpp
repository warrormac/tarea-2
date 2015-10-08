//1.- factorial

#include <iostream>
#include <string>


int a;
int b;
int factorial;

int main (void)
{
    std::cout << "Ingrese su numero ";
    std::cin >> a;
    factorial=1;
    for (b=1 ; b<=a ; b++)
    {
         factorial=b*factorial;
    }

    std::cout << "el resultado de su numero es  " <<factorial;

    return 0;
}

//2.-bubble sort --------------------------------------------------------------------------------------------------------------

#include <iostream>

int main()
{
  int array[400000], n, c, d, swap;

  printf("ingrese sus elementos\n");
  std::cin>>n;

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1])
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  std::cout<<"su lista ordenada\n";

  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);

  return 0;
}
  //3.- verdad o falso-------------------------------------------------------------------------------------------------------------
#include <iostream>

int main()
{
    int matr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    if (**matr==1)
    {
        std::cout<<"a es cierto\n";
    }
    if (**matr!=1)
    {
        std::cout<<"a no es cierto\n";
    }
    if (*(*(matr+1)+2)==7)
    {
        std::cout<<"b es cierto\n";
    }
    if (*(*(matr+1)+2)!=7)
    {
        std::cout<<"b no es cierto\n";
    }
    if (*(matr[2]+3)==12)
    {
        std::cout<<"c es cierto\n";
    }
    if (*(matr[2]+3)!=12)
    {
        std::cout<<"c no es cierto\n";
    }
    if ((*(matr+2))[2]!=11)
    {
        std::cout<<"d es cierto\n";
    }
    if ((*(matr+2))[2]==11)
    {
        std::cout<<"d no es cierto\n";
    }
     if (*((*matr)+1)!=5)
    {
        std::cout<<"e es cierto\n";
    }
    if (*((*matr)+1)==5)
    {
        std::cout<<"e no es cierto\n";
    }

    return 0;
}

//4.- hasta el espacio-------------------------------------------------------------------------------------------------------------------------
#include <iostream>

int main()
{
   int b=0;
   char ptr ;
   char arr[10]={'h','o','l','a',' ','m','u','n','d','o'};
   char a=' ';
   for (int c=0;c<10;c++)
   {
       ptr=a;
       if (ptr==arr[c])
       {
           while (b!=7)
           {
               arr[c]=ptr;
               c++;
               b++;


           }

            c++;
       }
   }
   std::cout<<arr;
   return 0;
}
//5.- eleccion -------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int a=0;
    int b=0;
    char arR[10];
    char arr[10]={'h','o','l','a',' ','m','u','n','d','o'};
    std::cout<<"ingrese opcion:\n";
    std::cout<<" 1 para copiar el contenido de una cadena a otra\n";
    std::cout<<" 2 para juntar dos cadenas\n";
    std::cout<<" 3 devolver la longitud de una cadena\n";
    std::cout<<"4 para comparar si dos cadenas son iguales\n";
    std::cin>>a;
    if (a==1)
    {
        char arR[10];
        while (b!=11)
        {
            arR[b]=arr[b];
            b++;
        }
        std::cout<<arR;
    }
    if (a==2)
    {
        char arR[10];
        while (b!=11)
        {
            arR[b]=arr[b];
            b++;
        }
        std::cout<<arR;
        std::cout<<arr;
    }
    if (a==3)
    {
        for (int z=0;z<11;z++)
        {
            std::cout<<"amanio de la lista es de     ";
            std::cout<<z;
            std::cout<<"  \n";
        }

    }
     if (a==4)
    {
        char arR[10];
        while (b!=11)
        {
            arR[b]=arr[b];
            b++;
            for (int z=0;z<11;<++)
            {
                if (arR[b]!=arr[b])
                {
                    std::cout<<"no es igual\n";
                }
            }
        }
    }
}
