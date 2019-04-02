#include "types.h"
#include "user.h"
#include "date.h"
int main(int argc, char *argv[])
{
  struct rtcdate r;
  
 

 date(&r);
  // Tu codigo para imprimir la fecha
 printf(1,"La hora es: %d : %d : %d del %d / %d / %d \n", r.hour, r.minute, r.second, r.day, r.month, r.year);

  exit();
}

