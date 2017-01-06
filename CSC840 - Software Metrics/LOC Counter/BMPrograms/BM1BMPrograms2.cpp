#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[9],IFEcnt[12],SWcnt[6],WHILEcnt[12],DOcnt[12],FORcnt[19];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         c += (l+e-j-d*f+b-k+b-l)%100;
         k  = (i+h-j*a-j-c)%100;
         l -= (c-l*a-d*c+a*n+a-c+c-m)%100;
         f -= (k*d-g-n+e*n+d*b+a+a)%100;
         f -= (f+i+j+j*k+e-l)%100;
         c  = (b+g+j+c+i+g+k+g+h-c*f+m-h*e)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  b += (e-d+g-c+g+k-m-k-g+i)%100;
                  f -= (d+c-i*l-a*i-n-k*d+c-f*d+a+h)%100;
                  k -= (e+h)%100;
               }
               j -= (d-f)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  e += (c*j-j*h*n+m+j+n-g*n-m-c-g+g)%100;
                  a -= (k+f+n*n)%100;
                  a += (i-f+g-j-g*d-d*m-h*f-f)%100;
                  c += (i-d-e+a+g-k+a+a-b+h+e+m-j+d)%100;
                  b -= (d+a-m+b-l-c-g)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  a -= (b+a+a-d-g-h-l)%100;
                  h += (e+k+i+n+e+m-f+e+n)%100;
                  l -= (l+k-c-m-j+c-k*l+f-b)%100;
                  f += (k+k+n-b-h-f-e-e-c+g+l)%100;
               }
               break;

               case 2:
               {
                  g  = (j*a+j*h*j-c+d+m*f*h)%100;
                  f += (k-h-a+g*h-i+i-m)%100;
                  d += (b-m-d+b)%100;
                  l -= (l+g)%100;
                  e += (n*d+a*d*f+m+n)%100;
                  j  = (g-a+j-d+i-h)%100;
               }
               break;

               default:
               {
                  b += (b+m)%100;
                  l -= (k+g-g)%100;
                  f += (c*f)%100;
                  f += (h-l-d-a)%100;
                  i -= (m+f+m-c)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  m -= (c+d*m-f-a*n+a-g+b+d+n*i+f*h)%100;
                  n -= (m+d+f-j)%100;
               }
               else
               {
                  n += (f-j)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  h -= (b+d)%100;
                  f += (g*b+n+n+a*n-b+a-e-g+g+d-b)%100;
                  h += (m+g)%100;
                  g  = (m*i*i-g*a)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  l -= (a+f+c+i*m-e-i*l+g*i)%100;
                  d += (i+l-n-c+b-f-h+e)%100;
                  m += (f+c+k+b-h+e-n*b*g)%100;
                  h += (d-i+e*h*d+f-m+c)%100;
                  g -= (a+c-e*n*m*l)%100;
                  i -= (h+h-k+j+j+c+d)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  h += (k-c-d*a+m-m-c+i+m*i)%100;
                  g  = (f+j-b+k)%100;
                  c += (f*b+c+h+m-c)%100;
                  m -= (e*e)%100;
                  g -= (m+j+b-l-g-e-c)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  c += (a-f*m+a+b*c+l-h+c-h+c-a-d)%100;
                  n -= (b*g+g-d-h*n+l*e+k-h*f-h*d+a)%100;
                  b += (e*n-c-k)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  a += (e-i+a)%100;
                  j += (e+l-i+g+h-j-b+g)%100;
                  d += (a+f-k)%100;
                  h -= (i+k*a+j+e+f-f-d)%100;
               }
               else
               {
                  j -= (j+f)%100;
                  k += (i*a-g+g-n-e)%100;
                  i -= (k+e+a-k-a-m*e-i-i+b+d*m-e)%100;
                  b -= (b-k-d+b+k+c-i*k+g)%100;
                  m -= (b*b)%100;
               }
            }
            h -= (b+m-g-l-m+g+c-e+b+g+m)%100;
            m -= (m-e-b-c-g+h+f-l+n+l*j-m+k*f)%100;
            a += (e+d+i-j+l*d+l+h+c+h)%100;
            h += (j-f-b-k-b-i+b-h+b+n-f+m-k)%100;
         }
         f += (g-j)%100;
         c += (h-l*k*a+c*g+k+j+c*f-f+f)%100;
         l -= (d*d+m+e)%100;
      }
      l -= (e*l+b-j-f-a)%100;
      d -= (c-n-e-k*c*c-i-d*m+a-j+f-g)%100;
      g += (f+e+l+e-n*n*a)%100;
      e -= (g-k+b+i-g)%100;
   }
   l -= (b+i+j*d-k-i*h+h+b)%100;
   b -= (l+h-e-a+i+b+c-f-e+k+f)%100;
   j  = (g+e+m-a-m+h-f+c+l-i+e-l-d)%100;
   c += (m+b-h-i*g+d*g+j-c*b*j+a*j-f)%100;
   a -= (l-b+h+g*l-j+a+b+f-j-n+m+l)%100;
   g -= (e*e-l*e+b-a-n*n-h-l+i+c+j)%100;
   c -= (g-l-h-b+j-g-d-e+e+a-j+j+e+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F2(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[4]%5 )
   {
      do
      {
         m -= (f*g+a*d+b-f*e)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%4 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  n += (c*j-m-k-a-d*a-g+n-m-j-l-m-n)%100;
                  e  = (f-c+d)%100;
                  b -= (a*i*d*g+n+k*a*m-g+d-i+k)%100;
                  h  = (b+d-m*g+j-a+f-h+n-a+i)%100;
                  d -= (n-c-j)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  b -= (f-g+k*f+h+j*c)%100;
                  l += (l-m+c+k-l-n+k-e)%100;
                  l  = (d+k-b+g+d-d-l-l*i-b+k-j)%100;
                  b += (d-f)%100;
                  c += (k+a+d-a+j*b-b*j*d*k-m+i-d-a)%100;
               }
               else
               {
                  f += (j-l+g+n-c+l*e+i*i-g-h-i)%100;
                  k -= (d-h+e+l*c)%100;
                  c  = (k*k+g+g+l-c)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  d += (n+i+d)%100;
                  m  = (j+h+i+l-d+k-j)%100;
                  g -= (l*j)%100;
                  c += (n-g-j+h-k-a-k+d-l-b)%100;
               }
               do
               {
                  m += (n*m-c+m)%100;
                  j += (g*h+g+f-c*c*j*g*l-c-i+c)%100;
                  c += (d+e+h-g+g*m)%100;
                  e += (h*a+m-m*g-b+i+e+b+k-g-l-d)%100;
                  k -= (k+n+g-g-n-e+e*n)%100;
                  e += (h+g*i-j-l-d-j-n+e+d*n-b)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  g -= (c-b-f*f+g-c+f+f-b-k*k+e+m*c)%100;
                  e -= (k+j*j+k+b+f+h-d-l+g+n-h-c-a)%100;
                  b -= (e-f-c-f*k+e+b)%100;
                  b += (j-g+g-l*d-e)%100;
                  f += (j+f+f+a-b-l+f-h-f-c-c)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  k += (n+d-i-f+l*c)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  n -= (c+e+k-i-g+k+b-l)%100;
                  m -= (n-g)%100;
                  e -= (k*f-c*d+c*g*l+n)%100;
                  m += (k+a-h-g+k+m+n*f+e*d+k+g*m)%100;
               }
               else
               {
                  a -= (m+j*c-d-l-m-g+l-n-j*b)%100;
                  a  = (i+m*e-m-j-i-g+e*m-f+d-j)%100;
                  n += (g-j+a-b+f+d*i+h)%100;
                  e  = (a-d-h)%100;
                  d -= (g-h-j+l*j)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  f -= (g+l+l-e+c-i-n+e-l-l-i+d+g)%100;
                  m -= (j+l-f-g+i+k+h-k)%100;
                  l -= (g+m)%100;
                  g -= (l-h-j-g-a)%100;
                  g += (m*l-h+b-k-n+j+e-e+i-i-c+m*c)%100;
                  h  = (i+n)%100;
               }
            }
            break;

            case 3:
            {
               do
               {
                  j += (k+d-k*g+n-l*f)%100;
                  a -= (k+f+e*b+f+b+i+i+b-n)%100;
                  g += (g-c)%100;
               } while( ++DOcnt[4]%5 );
               b  = (g-c-n-l*c-h+n+a+l+h+e-c+i)%100;
               k -= (e+j-j*e*m-h-j-h*i+c+d)%100;
               j -= (n-d-b-k+h*h-c-h+i+a+i+k+h+g)%100;
               e += (d-h+c-j-h-b*c+e-g-l-m-h)%100;
            }
            break;

            default:
            {
               i += (l-d)%100;
               h -= (d-c+c+c+a+i+i)%100;
               f  = (k+c)%100;
               i -= (h*c+c-k)%100;
               e += (n+k-f*i-c+d-b+m+f*l-k)%100;
            }
            }

            e -= (h*e)%100;
            a  = (e-d-h*a+b+h-m)%100;
            i -= (g*n+g+f-l-a*e-e-m+f*i)%100;
         }
         d -= (c*b+e+a-k+i*i+d*e)%100;
         a += (e-b-m+h*h+c-b)%100;
         a -= (a*d-a+l)%100;
      } while( ++DOcnt[2]%5 );
      j -= (f*h+d-f+e-m+a+l)%100;
      m += (m*m+k+l*i+g-g+k+m+j+g+h*e)%100;
      m  = (f-e*g+l)%100;
      d -= (e-n)%100;
   }
   j -= (f*h*g-a+n-g-e+d+i+d+h*h*j*b)%100;
   e  = (g-m+a*c+d+i+c+e-a-d)%100;
   a -= (i*l-b*k*m+g*g+a*e+j-g+e+n)%100;
   n += (d+k*l)%100;
   d -= (f*m+f-j+i+k*c+c-l+h*g-e-d+g)%100;
   a -= (j+i-k+h+h+e+i+n*h*c*d+g)%100;
   l += (i+e+h*n+l+e+f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[4]%10 )
   {
      a -= (e+m+l*j*e)%100;
      for( ; ++FORcnt[10]%5 ; )
      {
         
         switch( ++SWcnt[2]%4 )
         {

         case 1:
         {
            if( ++IFEcnt[6]%2 )
            {
               if( ++IFEcnt[5]%2 )
               {
                  f += (e-b)%100;
                  j -= (k+a-l*j+c-l-n)%100;
                  d += (i*h-j*n*i-g+i)%100;
                  l += (i-c+h+n-e-g+i*b+h*c+l-c+d-d)%100;
                  m += (d+d*b-f+g-h-l*e*b-g-m+h)%100;
               }
               else
               {
                  j -= (d-c*j+i+h*f*h+m-a+b+h-n+l*f)%100;
                  f -= (g+e+c-i-c-i-n+i-f)%100;
                  a -= (e-a-i*l-c+b-a-j+h+f-b*j)%100;
                  h -= (f+e*c-n-e+i+c+j+g-a+j+e)%100;
                  b  = (e-j+d-b*e-c+h*e+e*f+k-m*m)%100;
                  g -= (j-b-h*j-a+n-f+e*c-b+a+a)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  h += (f*l*j-f-n*m*l+k-c*e*i-l)%100;
               }
               do
               {
                  g += (b*h-c)%100;
                  l += (b-i-c*n*b+n+f*f*g+i)%100;
               } while( ++DOcnt[6]%5 );
               e += (m+f-m-k+k-e-m+m*b-d-h*b*g)%100;
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  j -= (j+n)%100;
                  f -= (b-e)%100;
                  l -= (e*k)%100;
                  j -= (e+j*n*n)%100;
               }
               do
               {
                  l += (i+e+n-m+e*c-j+f+b+h+i-a-c)%100;
                  d += (h*f)%100;
                  g -= (h+a+k-a+n+g-e+a+k-e)%100;
                  f -= (e+e-i)%100;
                  b += (d+n-l*j-g-d-g+m+c+d-l-h+a)%100;
                  m += (k+j*m+n-e*l)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  k += (m+j-k*e-f-g+f+i-n+h)%100;
                  b  = (l+f+d*a-g+j-a+j+g+b-f)%100;
                  n -= (d-l+n+j+g+g-g*b+f)%100;
                  f += (m-f-g+i-g)%100;
                  i -= (i-m*j-c-k)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  g -= (f+d+b-g+c*n)%100;
                  k += (m+d-k*d-b+i*g-d-k-e-d+h)%100;
                  b += (c-e*m+l-l*l-d+c*m*g-h-a)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  g  = (f+i-c-a+h*j+i+a-k+b+d*g*g)%100;
                  i += (f+c*j-c-f*m)%100;
                  c -= (h+k+e)%100;
                  k += (a-j-b+c+e*h+n+l)%100;
                  b -= (m-k*a+m+k+a-d+b-b*j+d*d+b)%100;
               }
            }
            for( ; ++FORcnt[9]%5 ; )
            {
               
               switch( ++SWcnt[3]%3 )
               {

               case 1:
               {
                  h -= (a+e)%100;
                  j += (b-l-n-g*e+b+d-d-h+i*j+m*b*b)%100;
                  a -= (g+l-j+a*a+n+a*h)%100;
                  a += (d-c-j-b-h-i+a-f-g-k+g+c+i)%100;
               }
               break;

               case 2:
               {
                  f  = (l+j+k-j-j+n-e-k*g*d*m-d+b)%100;
                  i -= (g+e*c+a-c+i-n+g+m+j)%100;
                  l -= (h+j-m*l-j*k+g)%100;
                  j -= (i+m+e-j+h*m-f*a+d*m+g-h+m-n)%100;
                  h -= (b-g+h+m+i-j-d-m-b)%100;
                  j -= (m-h+k+h-l)%100;
               }
               break;

               default:
               {
                  a -= (f+i)%100;
                  i -= (b+e*b+d+n+b*e-d-a-f)%100;
                  d -= (g+e*m*h-l-b+k-b*e+n*e-h)%100;
                  c += (b-c-l-m+d-l+d+a*e)%100;
                  d += (f*k-h+b-c)%100;
               }
               }

               b -= (e+f-b-i-n-f*k*b-d)%100;
               e += (i*f-f-j+m+k+m+n+h*f+a-j)%100;
               j += (j*i-l+i*c+m+j-i)%100;
               h += (f*c+b+e-i+h-j-i*a)%100;
            }
            k += (h+j+n*g)%100;
            j -= (m-b-h+c+j-m+b+c+h-k+k+d-d+d)%100;
            i -= (a*c)%100;
         }
         break;

         case 2:
         {
            j += (h-k*f+f-n+j-d+d-i+e+e+g+l-b)%100;
            i += (n*j+l)%100;
            j += (m-d+j)%100;
         }
         break;

         default:
         {
            c -= (e*d*d*b*k+n*h)%100;
            e -= (d+j+k)%100;
            m -= (d+b+d)%100;
            k += (f+b+g+n*c*c-a-m)%100;
            k  = (j-e*j+i+a-j)%100;
         }
         }

         f -= (d-c-h+h+b-k-d+a)%100;
         h -= (e+m-i*n*h+m+k)%100;
         k  = (c-g+e-n*l-a-g+n+j*e)%100;
         l  = (k-j-g*d-d+m-g-k-m+g-j)%100;
         n -= (l*j-m+a)%100;
      }
      d -= (k-c)%100;
      m -= (b+j-k-d)%100;
   }
   k -= (j+m-j*e-n+e+g*k*d*d)%100;
   g += (i-k-a-h)%100;
   h -= (b+b)%100;
   h += (e-d*l*n-a-j)%100;
   e += (j+h+j)%100;
   d += (l*l)%100;
   h += (h+k+m-j*h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<9; I++) IFcnt[I]   =0;
   for(I=0; I<12; I++) IFEcnt[I]  =0;
   for(I=0; I<6; I++) SWcnt[I]   =0;
   for(I=0; I<12; I++) WHILEcnt[I]=0;
   for(I=0; I<12; I++) DOcnt[I]   =0;
   for(I=0; I<19; I++) FORcnt[I]  =0;
   long int sum=0;

   sum += F1( ) ;
   sum += F2( ) ;
   sum += F3( ) ;

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      if( ++IFcnt[5]%10 )
      {
         if( ++IFEcnt[7]%2 )
         {
            n  = (c-a*e*h-b+a+b+c*f)%100;
            l += (i+b*n-g*i-b-h+l-m+k+a+c)%100;
            d += (d-c)%100;
            e -= (n-j*i+n+a+d)%100;
            e += (f+n-h+a-e-c-b-l+j)%100;
         }
         else
         {
            while( ++WHILEcnt[7]%5 )
            {
               do
               {
                  j -= (l+i-c-h-d+h+h+l+i)%100;
                  m += (j-a-g+c-f-e+l+j+h*k-h-l)%100;
                  e += (c*g*j*g*h+g+n*g+j)%100;
                  a -= (n-i-j)%100;
                  j += (d-j)%100;
               } while( ++DOcnt[7]%5 );
               for( ; ++FORcnt[11]%5 ; )
               {
                  e -= (a-m-g-l)%100;
                  n -= (f+h*m*b)%100;
                  e += (a+m)%100;
                  g += (a*b-m+n+b-j-d)%100;
               }
               for( ; ++FORcnt[12]%5 ; )
               {
                  a += (e*h-g)%100;
                  a  = (n-b+d+d-h+a*b-j+m+l*b+m+j)%100;
                  n += (d*i-k-e-g-e-h)%100;
                  n -= (c+c)%100;
                  k += (j-l*e*m-e+n)%100;
                  m += (h*l*e-j+d+k+a)%100;
               }
               f += (d-e+e-b-g*c+b+h-a+e)%100;
               c += (j+b-b+i-e-j-c-g-f-c+f-m)%100;
            }
            h += (d+f*f+k*c+g+k-c-n-g*h)%100;
            m -= (g-d)%100;
            b -= (m-h*f)%100;
            g -= (l-h+h-d+e-m-m+h+m+j+d*j*d*g)%100;
            j -= (d-h-e-g-b)%100;
         }
         f -= (j+e)%100;
         m -= (c+n+d+l+k-l*m*k-g-n)%100;
         j += (m+n+l-g+a+d*b)%100;
      }
      a += (h+b*c+j+n-l-n+a-f-j-n)%100;
      d -= (a*k)%100;
      m -= (m+n+j-n-k-b-n*h)%100;
      f += (h-e+c+m*i+i+n+f+j*f-k+b)%100;
      b -= (m-n-b-b-b+k)%100;
      n += (k+k*d+e*k+f+a+c+i*h-b+i+m)%100;
      i += (j+c-n)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<6; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 6 << "   Dynamic = " << sum ;
   for(I=sum=0; I<8; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 8 << "   Dynamic = " << sum ;
   for(I=sum=0; I<4; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 4 << "   Dynamic = " << sum ;
   for(I=sum=0; I<8; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 8 << "   Dynamic = " << sum ;
   for(I=sum=0; I<8; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 8 << "   Dynamic = " << sum ;
   for(I=sum=0; I<13; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 13 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}