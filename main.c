#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i;
   struct birthDate
   {
       int day;
       int month;
       int year;
   };

   struct person_data
   {
       char name[40];
       int lenght;
       struct birthDate date; // struct birthDate tipinde yeni bir degisken yaptým. Adi Date.
                            // person_data nin içinde tanimladi.
   };

   struct person_data person[3] = {"Christopher", 172, {17, 5, 1997},
                                   "Felix", 170, {15,9,2001},
                                   "Hyunjin", 179,{20,3,2001}
                                   };
   // struct person_data tipinde person adinda bir dizi tanimladim ve icine 3 eleman koydum.


   for(i=0; i<3; i++)
   {
       printf("record No: %d\n", (i+1));
       printf("Name: %s\n", person[i].name); //person dizisindeki i. kisinin name bilgisi
       printf("Lenght: %d\n", person[i].lenght);//person dizisindeki i. kisinin lenght bilgisi
       printf("Birth Date: %d/%d/%d\n\n", person[i].date.day, //person dizisindeki i. kisinin date'in icindeki day bilgisi
                                          person[i].date.month,//person dizisindeki i. kisinin date'in icindeki month bilgisi
                                          person[i].date.year); //person dizisindeki i. kisinin date'in icindeki year bilgisi

    }
   return 0;
}
