string ari(string a)
{
  int nw=0,nc=0,ns=0,i;
  for(i=0;s[i]!='\0';i++)
  {
   if(s[i]==' ') 
      nw++;
   if(s[i]=='.'||s[i]=='?'||s[i]=='!')
      ns++;
   }
   nc=i-nw;
   float sc=(4.71*nc/nw)+(0.5*nw/ns)-21.43;
   nw=(int)sc;
   if((sc-nw)!=0)
       nw++;
   string s[]={"fgg","Kindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade","Eight Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth Grade","College student","Professor"};
   return s[nw];
  }
