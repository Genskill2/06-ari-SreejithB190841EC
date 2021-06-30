#include<cs50.h>

string ari(string s)
{
  int nw=0,nc=0,ns=0,i; string a;
  for(i=0;s[i]!='\0';i++)
  {
    if(isalnum(s[i]))
      nc++;
    else if(s[i]==' ') 
      nw++;
   if(s[i]=='.'||s[i]=='?'||s[i]=='!')
      ns++;
   }
   float sc=(4.71*nc/nw)+(0.5*nw/ns)-21.43;
   nw=(int)sc;
   if((sc-nw)!=0)
       nw++;
   if(nw==1)
     a="Kindergarten";
   else if(nw==2)
     a="First/Second Grade";
   else if(nw==3)
     a="Third Grade";
   else if(nw==4)
     a="Fourth Grade";
    else if(nw==5)
     a="Fifth Grade";
    else if(nw==6)
     a="Sixth Grade";
    else if(nw==7)
     a="Seventh Grade";
    else if(nw==8)
     a="Eight Grade";
    else if(nw==9)
     a="Ninth Grade";
     else if(nw==10)
     a="Tenth Grade";
    else if(nw==11)
     a="Eleventh Grade";
    else if(nw==12)
     a="Twelfth Grade";
    else if(nw==13)
     a="College student";
    else if(nw==14)
     a="Professor";
   return a;
  }
