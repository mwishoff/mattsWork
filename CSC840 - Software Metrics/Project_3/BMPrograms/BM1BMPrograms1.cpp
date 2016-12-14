#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[5],IFEcnt[6],SWcnt[5],WHILEcnt[6],DOcnt[6],FORcnt[9];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[2]%5 )
   {
      if( ++IFEcnt[2]%2 )
      {
         n  = (c+m-h*f*a*i*b-m-d+f+f*b)%100;
         a -= (m-l-i-k)%100;
         a += (f+i-a+i-h+k-i+d*e)%100;
         c += (n+g)%100;
         g += (b-b*f+g-a+a-k*c+i)%100;
         a += (l+e*e+d*a-n+a+g+n)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  m -= (e-h+i*g+a-a-c+n*m-m+g-n-c)%100;
                  h += (e-b*c+b+b-n-d*k-j-g-a+b-k-n)%100;
                  d -= (c+f-c*e+d-d-a+k-c-f*e+d-l*i)%100;
               }
               a += (l+j+c)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  k += (g-m*a-b*j)%100;
                  f -= (m-k+d+e+l)%100;
                  f += (g-i+c*e+d-m-j-g+f+c)%100;
                  n -= (n*n*n-j+a+e-j-c-b-j-l-g)%100;
                  b -= (i+b+n+f*d-b*l-m-n*a-a+e+b-m)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  g += (d+n+k-g+a+d-n+a*e-f*h+e)%100;
                  c += (f-b*b*d*k*i+a-k-d+b-c-d-k)%100;
                  b -= (l+c+l*c+a*n+k+a-f-j)%100;
                  l -= (g*c+k+e+g*a-i-d-d-d+k+j+i)%100;
               }
               break;

               case 2:
               {
                  c += (f*j)%100;
                  n += (g*h+f-m+c+f+k-h+d-d+j)%100;
                  j += (k+a+n-k)%100;
                  a -= (h+a+b-e+h+m+g+l-f+l+a-d-b-i)%100;
                  i += (m+d+i+c+g*j+m-f*m-h)%100;
                  c += (l-e+l+k-a-e-i+g-h)%100;
               }
               break;

               default:
               {
                  a  = (h+n)%100;
                  n += (b-h)%100;
                  d  = (d-b+h-m+d*j+i+i+g+d*f+f-i+a)%100;
                  j += (e*m-l-i-b-f*h*d+n-b-f-l-h-g)%100;
                  l  = (n+n)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  g -= (d+a+c*l-m-l*f+c+g-l*i)%100;
                  a -= (g+d+n+l*d*l*a)%100;
               }
               else
               {
                  k += (e+e+h+f-j-i+e+g-i+k+c)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  f += (e+e+f-l)%100;
                  i -= (k-m-c+b-l-k*i-n+n)%100;
                  k  = (i+n-e+m+m*e-e*c+i-b+h+m)%100;
                  f -= (i-f-f+d+k-m+j-f*k*g-m*b+b-h)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  m += (b*j+d)%100;
                  e -= (l+g+l-a+a*h+b+h+j-e+e)%100;
                  m += (f+n+n+f)%100;
                  g -= (f*n*l-a-m*k+g+c+k+h+i+b)%100;
                  a += (b-j)%100;
                  e += (a+b-k*g+b-b+j+c)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  j -= (b+n)%100;
                  n += (c+i)%100;
                  f -= (h+c+n*i-f+f-a)%100;
                  g -= (i+l+b-e-g-c-m*b+a)%100;
                  m += (k-g+n)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  e -= (m-a+g+i+f+f*i+f+n+f*l+h)%100;
                  d -= (c-d+a+n-c*e+l*b+i-m*g)%100;
                  l -= (c*f)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  a  = (n-m)%100;
                  c -= (h-f*f*m-j*k*h+l*f-f-f)%100;
                  j += (d+f+j+e+f-g+f-a-k)%100;
                  e -= (j-e-c-e-d+f+h-k-n-d-l+h-h)%100;
               }
               else
               {
                  i += (e-g-a)%100;
                  e += (i-d)%100;
                  c += (i-d+g*a+l*f)%100;
                  d += (f-g-m-d)%100;
                  c -= (l-i*e+j)%100;
               }
            }
            b += (f-n+b+h+k*d)%100;
            k -= (k*h-i*a-k*b+a+g*l)%100;
            b += (a*e+e-i)%100;
            m -= (h+e+j-b+a+i+i-a+c)%100;
         }
         f  = (b+g+i+d-a+h-l*n+e+n)%100;
         f += (e-e-k*d+m*c-n+m)%100;
         m -= (h+n)%100;
      }
      k -= (n+f-m+m-m+k-n+g-h+i)%100;
      g += (e*f+c+m-b*m-i-e*n)%100;
      d += (e-g-m*f*m*a+e-l*n*m-g)%100;
      n -= (e-c-m*e)%100;
   }
   d  = (a-m+j+k)%100;
   c  = (n-h-b-h+h*f*d*b*f-b-g*i)%100;
   h -= (i-j)%100;
   e += (m-a*k-n-b-d*c)%100;
   i += (k+c-d*i-n-g-l+l+a-b-a*c)%100;
   e -= (n-d+l+f*j*g+c+j+c-h+n*f)%100;
   j -= (c-i-n+i+l+a+k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<5; I++) IFcnt[I]   =0;
   for(I=0; I<6; I++) IFEcnt[I]  =0;
   for(I=0; I<5; I++) SWcnt[I]   =0;
   for(I=0; I<6; I++) WHILEcnt[I]=0;
   for(I=0; I<6; I++) DOcnt[I]   =0;
   for(I=0; I<9; I++) FORcnt[I]  =0;
   long int sum=0;

   sum += F1( ) ;

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      while( ++WHILEcnt[3]%5 )
      {
         do
         {
            l += (b-c-e-m*m-d)%100;
            for( ; ++FORcnt[3]%5 ; )
            {
               
               switch( ++SWcnt[1]%4 )
               {

               case 1:
               {
                  i -= (b-k+i+j-f+g*j-d-h+a-l)%100;
                  j += (e-k-h)%100;
                  i += (k*n-b+f-e+a-i+j+a)%100;
                  e -= (b-l+a*f+c+h+c)%100;
                  a -= (c+f+c+d*b-k+j+n*c)%100;
                  c += (j*k+n-h+a)%100;
               }
               break;

               case 2:
               {
                  h -= (b-d+k*i+e*m*b-e)%100;
                  j += (d+b*m-f-j+k-c-n)%100;
                  m += (g-g*l)%100;
                  d += (i-d+h+f+a+l+g+e)%100;
                  m -= (a*k+h-k-c*i-m+e+i)%100;
               }
               break;

               case 3:
               {
                  e -= (f*i+l-k+c-e+h*k-h*h*f-g)%100;
                  n += (e+l*i)%100;
                  l += (h+h-i+g*k+d+c-f+k)%100;
               }
               break;

               default:
               {
                  g += (b*d+m-a-h+e+b-d+l-k*g-g)%100;
                  k += (c+l-h+j*g+h-k+g)%100;
                  e += (c+e-l+f-e-l-h+f+a-c-k+d+h)%100;
                  e -= (l-g)%100;
                  n += (l+k+k*e+e-l*b+m+d-j*l)%100;
               }
               }

               if( ++IFcnt[2]%10 )
               {
                  k += (l+k-c-c-b+a*e-m+k+b-e)%100;
                  m += (k-g+i-h+i+e*m-m)%100;
                  h  = (d*f-j+a-m-a-e+l-k)%100;
                  m += (n-m+g-g+m-d*j+i*j+f-a*g)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  c -= (n+f)%100;
                  f -= (e+h*k*l-g-j-d-c*e*k)%100;
                  h -= (b*i-b*h-a*j*g-j+e-j+i-a+g+m)%100;
                  b  = (a+i-n+f-g+a*d-e-l+e+g)%100;
                  e += (f+n)%100;
               }
               else
               {
                  a += (f+l)%100;
                  c += (h+e-c+h-f*c)%100;
                  a += (e+g*l-j-f+e-c-d+i)%100;
                  a -= (d-l+j-c-h-n+g-c-a)%100;
                  n += (c*n-a+g*e-g+l+b-m-h+h*b*n)%100;
                  j -= (a*f+n-l-c-d*m*b+k+a*e*e*n+d)%100;
               }
               b += (k+i*c-e-f+a-c+e+j)%100;
            }
            g -= (i+g-g+f+h*l-e)%100;
            n -= (m+a+d+i*k*a)%100;
            j += (g-b-c)%100;
         } while( ++DOcnt[2]%5 );
         c -= (l*h)%100;
         l += (n*i+l*e+b*c-b*k*g-j-l*f-g-n)%100;
         k -= (l+m+g-b)%100;
         l  = (c+k*g-m+c-m-e-k-j*k*j+k)%100;
      }
      i += (h+e+f-i+n-c*n-c-f*i-m-d)%100;
      a += (e+m)%100;
      m += (g-e)%100;
      c -= (e+m+j*a-j*c*a-l*g+l)%100;
      d += (n-b+a-c+n*c-d)%100;
      d -= (d+i+n+h-h)%100;
      n += (d+h)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<3; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 3 << "   Dynamic = " << sum ;
   for(I=sum=0; I<4; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 4 << "   Dynamic = " << sum ;
   for(I=sum=0; I<2; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 2 << "   Dynamic = " << sum ;
   for(I=sum=0; I<4; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 4 << "   Dynamic = " << sum ;
   for(I=sum=0; I<3; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 3 << "   Dynamic = " << sum ;
   for(I=sum=0; I<4; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 4 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}