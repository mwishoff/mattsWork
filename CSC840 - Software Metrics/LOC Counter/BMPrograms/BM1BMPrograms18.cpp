#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[86],IFEcnt[115],SWcnt[57],WHILEcnt[115],DOcnt[115],FORcnt[172];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[1]%2 )
      {
         a -= (i-b-e)%100;
         d -= (e+e*m+j-f+j-f)%100;
         h -= (b-c+c*j)%100;
         j += (i*d+i-m-n-c)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  b -= (i+e*c-l+e+e+h+g)%100;
                  d  = (g-f+f+b+h*a+m*a+f+n-d)%100;
                  e -= (m+h+n+n*g)%100;
               }
               g += (d-b+c+e-g+m*k+i-j+f+a*h)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  k -= (f+l+j+a-j-n)%100;
                  e -= (n+c-a*k+e)%100;
                  f -= (l+g+h+b)%100;
                  b  = (d-l-l-b+k)%100;
                  m -= (n+n+j-b+e*d+e*m+g+i)%100;
               }
               
               switch( ++SWcnt[0]%4 )
               {

               case 1:
               {
                  e += (m-j+g-c+n*f+i+g)%100;
                  c  = (n*n*a+e-i-k*i+a)%100;
                  a -= (f-i-j)%100;
                  c -= (n-j+c+k*g-n*h+f-n)%100;
               }
               break;

               case 2:
               {
                  i  = (b-h-d+k-g+d-e-j+l-m+c)%100;
                  f -= (e*i-m-k)%100;
                  e -= (g-k-c-i+j-l*k-f*d+k+k)%100;
                  m  = (g*b+j*l*n-h-n)%100;
                  i -= (l*j+l*l-e+j+k-n)%100;
                  j -= (b*m)%100;
               }
               break;

               case 3:
               {
                  g -= (k*i)%100;
                  h  = (h-g-h+d-m-l+c)%100;
                  n += (b-l*b*i+b-a+i*h-m+f)%100;
                  a  = (g+g+j+a+f*g-a-k*g*j-i)%100;
                  f -= (b-l-b+l)%100;
               }
               break;

               default:
               {
                  k += (f-i+m+l+d)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  g -= (j-l+n*l-c-m*i+h-f+a)%100;
                  h -= (n*m)%100;
                  k -= (k-j-h*d-c-d-f+e)%100;
                  a += (n+e-e-b+l-j+e)%100;
                  j  = (b-b+l)%100;
               }
               else
               {
                  f += (j+n+a*n-k*g*j-b-f-l)%100;
                  i += (n-b+e)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  g -= (n*k+f*j+j+l+c-j+g+a+g-e*m-h)%100;
                  k -= (b+b+i)%100;
                  h -= (n+g)%100;
                  l += (c+e+i+d+h+f*e+b+n+e-i)%100;
                  c += (f+c*j)%100;
                  h += (m-b+d-h+k)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  a += (n-g*e-c-k)%100;
                  i += (c+j)%100;
                  n -= (g+i+d-j-j+g*a-f-g-m-j-l)%100;
                  f += (l+c)%100;
                  m -= (i-m)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  d -= (i*d)%100;
                  n  = (c-g-i*m-k+j)%100;
                  a -= (e*i*a-a+k-h*b-c+i+c)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  n += (e+a+i*e)%100;
                  d -= (d*g-b-l-g*e+l-j-l+c-c-f-g)%100;
                  c  = (l+i*k+c+k-e+g+f+j-h-h)%100;
                  e  = (a-n-j-h+j*e+d+c*l-a*g+k-m+m)%100;
                  a -= (l-g+f+n-m)%100;
               }
            }
            d -= (f+g+g-b+c+k)%100;
            k += (n-d)%100;
            f += (d+k*l+a+i-m-n*d)%100;
            n -= (j+l+k+l)%100;
         }
         n -= (g+a+j-g+f*l-d+j)%100;
         b -= (m+f-c+m+e+i-k)%100;
         e -= (l+l+b+n-j-k+h+d)%100;
      }
      b -= (b-m-l+n+a+h+e)%100;
      c -= (d-c-b-b+l)%100;
      j += (a*b-a-b+k)%100;
      h += (k+n+h+g-f-a*j+e-m+b-i-n)%100;
   }
   f += (l+g*n*i+c)%100;
   h += (f-i*m+a+d)%100;
   f -= (k-c+a-k+a*j*d-i+b)%100;
   c += (k+f+f-g+e-n+k)%100;
   d += (j*j-k+b-e+m+c*h+f+a+k-c-n+h)%100;
   i -= (d-h+i*n)%100;
   i += (k-c+h-b+i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F2(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[4]%2 )
   {
      d -= (j-i-e-e+k-j)%100;
      f -= (m-d-c-l+f+m-g-m*j+g-b+j-b)%100;
      n += (l+m)%100;
   }
   else
   {
      while( ++WHILEcnt[4]%5 )
      {
         do
         {
            f  = (j+g-k-a-i+a-h*j+e-b)%100;
            for( ; ++FORcnt[4]%5 ; )
            {
               
               switch( ++SWcnt[1]%3 )
               {

               case 1:
               {
                  h += (k-k+h+i+k+m+b+l+f*k+c)%100;
                  n += (g-f+n*m*c-d-l+b*a+i)%100;
                  g += (k*c-g-k*d*h-n-c-l)%100;
                  c += (d+e+i+a-c-b+e+d*c+l-b*i)%100;
                  d += (h-e-j+d+n-n-b+c+d-j)%100;
                  c += (f+b)%100;
               }
               break;

               case 2:
               {
                  e -= (e-a+h+g*n+c-d-m-c-h+m)%100;
                  i -= (k+j+m-h+k-b*g+m+e)%100;
                  d += (b-h-l*c)%100;
                  d  = (i-k-m*k*h)%100;
                  g -= (g*b+f*e+m*n-i+m)%100;
               }
               break;

               default:
               {
                  a -= (k*n-g-e-c+g+h-c+n+c-j+c*a)%100;
                  f += (d*c-b-h+e-g+e-j-n)%100;
                  e -= (l*f+d*i+n+m+c+h*i+k*f*a-i+h)%100;
               }
               }

               if( ++IFcnt[2]%10 )
               {
                  d -= (l+c*h*d+b+c+d*e)%100;
                  f += (b*g-j*e-a+k-i)%100;
                  f += (m*e*c)%100;
                  m -= (i+l)%100;
                  d -= (d*d-h-a+j)%100;
               }
               if( ++IFEcnt[2]%2 )
               {
                  i += (c-m+m-c+d+g*e+m*a-j*j-d)%100;
                  d -= (l*k*g+f+g+d-d+i)%100;
                  b += (e*h+n-k*d+f)%100;
                  g += (a*c+d+f*j+c-n*j-c+a*l+j)%100;
                  h  = (e*g+h-h*f-l*h-n-a-b-b*f)%100;
                  k -= (i-l-l-f+f)%100;
               }
               else
               {
                  f += (n+k-e-a-h-h)%100;
                  i += (i-a+m)%100;
                  f += (g+g-g*a+c*g)%100;
                  b += (d-m+f*f+i)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  m += (c+j-j*d+b)%100;
                  d -= (k+j-m-i)%100;
                  k += (l-a*l+h-i-g)%100;
                  e -= (f-c)%100;
                  h += (j*a*j+m-b-h+h+d)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[5]%5 ; )
               {
                  b -= (d+a-b-i-m)%100;
                  g += (j+g+d+b+i-g+l-h*a)%100;
               }
            } while( ++DOcnt[3]%5 );
            for( ; ++FORcnt[6]%5 ; )
            {
               if( ++IFEcnt[3]%2 )
               {
                  b -= (c+l)%100;
                  n -= (g-m-k*a-l+l+i)%100;
                  c -= (k*h*j-a-i-g)%100;
                  h -= (c*e-m)%100;
                  m += (e+n-i*c-m-k-h-g+j*c+b-c-j)%100;
                  n += (b+h+f-a+b+i-m-b*g)%100;
               }
               else
               {
                  e -= (f+i-c-h-c-a*m+c-e)%100;
                  b -= (d-l+c-i)%100;
                  k -= (l-g*n*l+d+j)%100;
                  f  = (l*i+f+e-a-n)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  b += (l+b)%100;
                  n += (f*h-h+c+m+b-g*b+a*b-l-e-g-a)%100;
                  h += (e*a*c-k-e*l+m*d-a)%100;
                  j += (b-d)%100;
                  c += (f+k+l+j*j-d+m+c+n*j)%100;
               }
               c += (k+j)%100;
               f += (f+j+k+i+m+a+a*a+f-h+b)%100;
               h += (l+b*i-h-m-h-d+f*c+n+b*h)%100;
            }
            h -= (g+j-f+j-e+d)%100;
         } while( ++DOcnt[2]%5 );
         n -= (c-e*d-g)%100;
         d += (a+c)%100;
         k -= (j-n+b+k-e+k+n+d-j+a)%100;
         g += (n-a+n-n)%100;
      }
      k -= (i+e-g+g)%100;
      j += (l-n+j+h-b*i+m-d-e*c-i)%100;
      c -= (k-b-e*a-b-e-l-d+l+j+j+d*j)%100;
      i -= (e+b*h+b+d-g)%100;
      i  = (e*n*f+i)%100;
   }
   b += (e*n*g)%100;
   g += (l*g*l+m-m-i-e-n+i+e+i*c-d-a)%100;
   n -= (b*a*b-i)%100;
   i += (k+b+l+n+b+k)%100;
   k -= (f-b+n+b*i+g+n+d-n+h-m-j+l)%100;
   g += (l-b-g*j+j+a-i-f-h+f-e*j*h-l)%100;
   i -= (i-m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      if( ++IFcnt[4]%10 )
      {
         b -= (e*c*f-l+n+e+f+e-m+c+b+l-n)%100;
         for( ; ++FORcnt[10]%5 ; )
         {
            
            switch( ++SWcnt[2]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[5]%2 )
               {
                  n  = (k+k-f-j+h*j+n+c+h+h)%100;
                  e += (c+h-n+e+f-d*h*m*i)%100;
                  b += (b-i)%100;
                  d -= (a*f*e-j)%100;
               }
               else
               {
                  d += (f-l-d+f-g+n*a-b-c+i-a*k-c)%100;
                  h += (d-n+j*n+j-h-m-n+l*l)%100;
                  l -= (l*g+m-g)%100;
                  k -= (g-h-l-l-b*f+d-i-j*h+b+l-l)%100;
                  b += (i*a-h+a*f*m)%100;
               }
               while( ++WHILEcnt[5]%5 )
               {
                  e -= (j*d)%100;
                  c += (i+a-k-f+l-b-c*g+k-l-c+a*i+l)%100;
                  h -= (g-e+f)%100;
                  n -= (c*k+j+j-n+g+l*c+c*k*e*c*k)%100;
                  f -= (e*c+i+k+m*b+c)%100;
                  k += (g-k*a+k-f-e+g+b+l+b+l*f*g-e)%100;
               }
               do
               {
                  l -= (j+l+f-f*n-g+j+i-k+m+a*j-c-b)%100;
                  n += (d+b-c-n+n-j*j+k-h+e+c-h+c+i)%100;
                  h += (l-i)%100;
                  m += (h-j+m*g+c*a-f-h-b+h)%100;
                  k -= (l+g-h*g)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  f -= (c+i-h-i-l-f*a)%100;
                  k += (k-c+m+c)%100;
                  e  = (c-c-b)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  i -= (e-f-e)%100;
                  j += (k*b+k-d-k*f+i-f-n-b+l-l*e)%100;
                  e += (d-c+f-c+m+h-a)%100;
                  b += (i+f+g-j+d+f-m+l+d-i+g-i*b-n)%100;
                  e += (n-d)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[8]%5 ; )
               {
                  j -= (i+k+a+l*c*j+j*g*l+k-f*b)%100;
                  m += (m+h-f+c-g-i-m+b-a+g*e+c+b)%100;
                  l -= (l+a)%100;
                  k  = (d+l)%100;
                  i -= (l-e+b+h)%100;
                  b += (m-f-k+a-c*n)%100;
               }
               if( ++IFEcnt[6]%2 )
               {
                  f += (i+h-c-g-e+a)%100;
               }
               else
               {
                  l += (a-k)%100;
                  c  = (k*i*f+i+i-h-f+a)%100;
                  f -= (b*a-b-f-a+h-h-m+b+h-c)%100;
                  n += (n*n-a+h+b+g)%100;
                  m -= (h-m+e+k-c)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  g += (e*d+d+e)%100;
                  l += (m*c+l-d-d+c-m-n-e+d+g+k-j)%100;
               }
               do
               {
                  b += (b+c+f+j)%100;
                  e -= (f+n-c+d-g-g*j-e*e+l*f)%100;
                  m  = (h+c*g+a+i-j-j+k-l-l+g)%100;
                  e += (d-e)%100;
                  e -= (e+j-a*j-c-h*f)%100;
               } while( ++DOcnt[6]%5 );
            }
            break;

            default:
            {
               k += (j-b+e+a-h-b+f)%100;
               for( ; ++FORcnt[9]%5 ; )
               {
                  l  = (j*h+n-d+c-e-a)%100;
                  f -= (g+c+h+f-n+i-i)%100;
                  i -= (l-k-e+e-b-g-b-g*l-m-a-h-a)%100;
                  e -= (i+i*b*i-k*l)%100;
                  g += (m-c*c*n)%100;
                  h -= (a-a+a+n*k-c*h*n+i+a)%100;
               }
               l -= (i+l+f+k*d)%100;
               h += (e*b+g-f*m-f+b+j-j+g+k+d*i+n)%100;
            }
            }

            e += (j+b)%100;
            j -= (b-n-k+d-f*m-g+i-j-i+h)%100;
            d  = (j+d-j+e-h*b+i+e-m+l+n)%100;
            a  = (l-k-e*e)%100;
            k += (c-i+a-l+d-h-l+d*h+f+c)%100;
         }
         a  = (a+m-a+k-a+d-b-h+g+k*l+e+k)%100;
         b -= (h+b+e)%100;
      }
      l -= (n+g-e-d+e-i)%100;
      h -= (i-l-b+e+h*f+a*g*m)%100;
      f += (f-l-l+m+k*n*n*a)%100;
      m += (n-c)%100;
   } while( ++DOcnt[4]%5 );
   d += (n*b-h-k*c-a-a-e*i*j)%100;
   m += (e+j-h+j*h+a)%100;
   d -= (b*m-f-i-e*g-e*m+m)%100;
   d -= (m+d+b-e)%100;
   i -= (f-i*k-j-g+c+b+d+b-c)%100;
   b += (m+k-h-n*b-j*d+n)%100;
   m -= (d-f*a+d+d-g-n+l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F4(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[3]%3 )
   {

   case 1:
   {
      if( ++IFcnt[6]%10 )
      {
         if( ++IFEcnt[8]%2 )
         {
            k -= (m-b*n+e*k)%100;
            a  = (j+l+l+e+j+b-b+f)%100;
         }
         else
         {
            while( ++WHILEcnt[7]%5 )
            {
               do
               {
                  m -= (l+f+l-a*d-f*h+c+m+c-e-d)%100;
                  b -= (i+k)%100;
                  l += (k+h+i*d*b*b-j+k-h)%100;
                  k += (b-i+m)%100;
                  l -= (f*g*i*j)%100;
                  f  = (b+j-i-h+b+b-a-j+k+k)%100;
               } while( ++DOcnt[7]%5 );
               for( ; ++FORcnt[11]%5 ; )
               {
                  i += (a+c+k*j*e*h+d+c-k+j+k-m+j-c)%100;
                  e -= (m+e-d+b+c+f*d-i)%100;
                  h += (g-d*h+b-f)%100;
                  m += (j*e-c-g+k*i-h-b-c)%100;
                  l -= (n+c+b+a)%100;
               }
               for( ; ++FORcnt[12]%5 ; )
               {
                  j += (l*j-g+d-h+a+e*l)%100;
                  n += (j+l+j-n-j+e*b-j+l-f*d*i)%100;
                  k -= (f-m-j+g+b+k-l*f-f-i)%100;
                  h += (h*a+c*e+i*n+b+n+a+h)%100;
                  c += (f-a)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  l += (g*l+l-a-a*b-g*f+b+d-b)%100;
                  e += (d-l+i*l+i-c*a-j*a-g-n+e-i-m)%100;
                  d += (c*i+g+h-a+i-c)%100;
                  e  = (b-g-e-j+k+c-c+a-l)%100;
                  j += (a-a*j-m+c+g)%100;
                  l += (f-c*d+j-e-b*k+e-b-f+g-i)%100;
               }
               else
               {
                  e += (a-j*j*a-n-h+m-c)%100;
                  e  = (f*g+j-m+g*a-l-e-a)%100;
                  g  = (a+i+m*h-i-h+j-g)%100;
                  d -= (j-g+i)%100;
               }
            }
            while( ++WHILEcnt[8]%5 )
            {
               do
               {
                  m -= (b+j+f-c)%100;
                  c += (h*l+d*a+e-d-e*b-g+f+h+d-b)%100;
                  f -= (d-b-g-g-f-d-d)%100;
               } while( ++DOcnt[8]%5 );
               if( ++IFcnt[5]%10 )
               {
                  d += (j+l-n*l-b-h*j+m)%100;
                  k += (e+b-m+g+g*n*b-a+g-a+e+k)%100;
                  b -= (g+a+j-f-k+j-a-g*c)%100;
                  c += (f-n)%100;
                  a += (g-c-h+k*k-i+c-k*j+b-i+f+g-d)%100;
               }
               h  = (c+i+a+b+n+i+j-h-h*h-m+j+j)%100;
               for( ; ++FORcnt[13]%5 ; )
               {
                  f -= (c+c-h*g-l+j+a)%100;
                  a  = (j+d-k-c+n+h*c+a)%100;
                  c += (i-k+b-l+k*h-f*j+g)%100;
                  m  = (e+n-c-i-f+g+k+h+f+a+c-b+f-m)%100;
               }
               
               switch( ++SWcnt[4]%3 )
               {

               case 1:
               {
                  k += (n+i+k+l)%100;
                  m -= (n+f-k+c+j-i+f)%100;
                  n  = (k*d+c+a+i-m-k+g-l-j+c+a)%100;
                  b += (m+b)%100;
                  i -= (l+c*g+f+e*b+j-l-b-f+j-j*j)%100;
                  j -= (l*d-f+n)%100;
               }
               break;

               case 2:
               {
                  a -= (d*d)%100;
                  e += (g+g*h-k-f+b*n*n-h)%100;
                  g += (e-k-d+a-d*h+a+a-h-a-d)%100;
                  n  = (a-j-j+b)%100;
                  g -= (c-f-j-m*e)%100;
               }
               break;

               default:
               {
                  k += (a-j)%100;
               }
               }

            }
            m += (g+i+a-d*j-n)%100;
            j += (f*i)%100;
            d += (a+a-f-m+l+k+m-a*f+l)%100;
         }
         g -= (f+j+l-e)%100;
         g -= (m*c+g-k*l-j)%100;
      }
      j -= (b+e-d+a+m-f-d+h+a-d-b*i-i)%100;
      g  = (m+c+a+d-n-k+f-f)%100;
      i += (d+j+e*l+d+g-b+d-i-k+a+h)%100;
      g -= (g*k-h*c-d+j*i-n-k*j+h*k-h*f)%100;
   }
   break;

   case 2:
   {
      l += (b-c+b)%100;
      k += (d+a*k-l+k-n*i+k-j+l)%100;
      e += (m+f+i+b-c-i+n-e+c)%100;
      l -= (i-l+l*i+d-e+g)%100;
      f += (m-d*f-g+m+n*k+l*a)%100;
   }
   break;

   default:
   {
      e -= (k-m-b+m-l+l-f+e+k*k*c+i)%100;
      i -= (f-d+c+j+g-b+b-a-g+a*i-n)%100;
      j += (m-m-d+i*c-b-n-b-b-n)%100;
      k -= (h+c*l-f*n+m+e-b*c+k-l+k-k)%100;
   }
   }

   e  = (g-a-i-e-m+b*k-e)%100;
   j -= (f+k)%100;
   m -= (b-d+f+c+h+l-l+b-k*f+g*k)%100;
   f -= (b+h+l+c+e+f)%100;
   d -= (h+f+e+g-h+j+l-f+m+j*f-e+a-b)%100;
   m += (a+d)%100;
   c += (g-h+d+d+e-c-n*e*b-n*j-j+m-j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[10]%2 )
   {
      a -= (f*a-a+j)%100;
      d += (c-n+c-a+f+a+b+b+a*m)%100;
      b  = (f*n-m)%100;
      m += (h+l)%100;
      n  = (a+b+d-j*e-a-h+m+c*c*d-l)%100;
   }
   else
   {
      while( ++WHILEcnt[10]%5 )
      {
         do
         {
            for( ; ++FORcnt[15]%5 ; )
            {
               if( ++IFcnt[7]%10 )
               {
                  g -= (c+d-k*c*g+d-d-d+b+m-b-b)%100;
                  j -= (l+e-b)%100;
                  b -= (k+f+k*b+a+l)%100;
                  d -= (m-h-a+a-i+h)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  c -= (n+b+l)%100;
                  l -= (a+i*g-m+e)%100;
                  f += (b*d+k+b-b-f-g+c+f-c+b+b)%100;
                  m -= (m-e-a+m-e-m*c+f-j-b+b+n-a*i)%100;
                  a += (c-b*d+m-l-l-b*d*h+n-k)%100;
                  c  = (k+c-f-h*f+l*c*a+h)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  l += (g+f)%100;
                  n -= (h-m+l-a-f+g*j+i*c-a*m-f*b-i)%100;
                  g += (c+e+a-j+f+l)%100;
                  j -= (j+h+n)%100;
                  a  = (g+g+i-g+m)%100;
               }
               else
               {
                  e -= (j+f-i+e*l*i-f-g+c*d+d-f+m-m)%100;
                  d -= (m+n*l-d+e+d+a+i*f+d-h)%100;
                  c -= (g-l-g+h)%100;
                  c += (i*j+f+h*b+a-d+g-m)%100;
                  k -= (i-i)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  j -= (c+f+i*n+j+d+k-j*k-e)%100;
                  g -= (b-b-e+j-k-f-l*g-i)%100;
                  i -= (c-l)%100;
                  k  = (k*a+m+n+g-k-d-j-d+h+h-d-k-e)%100;
               }
               do
               {
                  i += (g-e*h-d-e-c-k*n-c+l+j-f)%100;
                  l -= (h+g-j-b+e-b-k)%100;
                  i += (i+m-b*j-l+c-j-k+e+i)%100;
                  e += (j+i+a-n*f+m-n-l)%100;
                  e -= (h+d+l+f-k+c-j*j*k+f*f-h-b-d)%100;
                  h += (m+j)%100;
               } while( ++DOcnt[10]%5 );
            }
            a  = (c+f+i*a*c+h+e-n)%100;
            for( ; ++FORcnt[16]%5 ; )
            {
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  l -= (e-c+a+n+c*n)%100;
                  l  = (l-a+d+d+k+l-m*m*j*i-h+i+m-f)%100;
                  g += (a+b*m-k-c+g)%100;
               }
               break;

               case 2:
               {
                  k += (b-d-k-g-g*j-a+j-k-f+l*l-a+m)%100;
                  n -= (f-d)%100;
                  n += (n-b+i*h)%100;
                  f -= (m-n)%100;
                  j += (l+d*k-k-d-m-g-a*m+c)%100;
               }
               break;

               default:
               {
                  n += (i+h-m+l+m*l+i-e*g-f)%100;
                  d -= (e+d*a+m-c+g-b-h+k+a)%100;
                  b += (m*e-e)%100;
                  c -= (e-l*f-n*l*c+b*c+a*k+n+b+b)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  h += (e+h+d*i*d-k-j)%100;
                  g += (j-j+a+j+d)%100;
                  l  = (k+d+n+h+g-k+f*k*j+m-d-e)%100;
                  d += (c+a*i-i-n)%100;
                  a += (k-f*c-g+m-i-k+f+d-e*d)%100;
                  g += (f-b-f*d-n-k+c+i)%100;
               }
               g += (c-a)%100;
               m += (c-a)%100;
               j += (e+n-c+g+d+b+i)%100;
            }
         } while( ++DOcnt[9]%5 );
         d -= (c-i+n+n-k-l)%100;
         e -= (c+m-f-c-k+m+b*l)%100;
         a -= (k+g+m+d+f+i+j-b+a*n)%100;
         b -= (f*m+i-b+e-b+l+i-g-n-i-b*h*b)%100;
      }
      b += (f+i*e*j+b*i-d+g+i+l+k)%100;
      k -= (k+c)%100;
      g -= (n-m+j+h*d-m-m-m+i+n)%100;
      f -= (c*e)%100;
      b -= (n+l+j)%100;
   }
   a  = (j+j)%100;
   f -= (l+h-e+k*b-f+m-a-k)%100;
   i -= (d-h*m+g+k*e+f+b-e-f-i-j+j+c)%100;
   e += (b-c+m+b+n*i*f-d-k*m+e+k+k)%100;
   j += (m-g)%100;
   n -= (n-i*c+f-d-d)%100;
   n += (b+f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F6(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[13]%2 )
   {
      d -= (a-e)%100;
      b += (f-c-m+f*g+j-e*d*a+g-k-g)%100;
      l += (l-k)%100;
      k -= (c-m+i-d*l*c+c+i-g+j)%100;
      l -= (e-d*k-i-m+b)%100;
   }
   else
   {
      while( ++WHILEcnt[12]%5 )
      {
         do
         {
            for( ; ++FORcnt[18]%5 ; )
            {
               for( ; ++FORcnt[17]%5 ; )
               {
                  j += (a*a)%100;
                  i -= (g*f-l*a)%100;
                  c -= (d*b-k-m)%100;
                  e += (c+j)%100;
                  c += (d-h-c*a+k-f-j+j-j-c+g-i)%100;
                  b += (m-i)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  h += (b+g-j*e+d-a+k+e-g-a)%100;
                  h += (n+f+c+b-i-a)%100;
                  l -= (c+m+g*m*g+m+g+a-b-c+j-g)%100;
               }
               else
               {
                  a += (i+e)%100;
                  g  = (i+b)%100;
                  m += (d+j*a-m+i-e-k)%100;
                  k -= (i*h*d-h-h-h+k-d+f+k+i)%100;
                  c  = (f*a*c*m+l-m-e+a-h-a+g-l*c)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  n -= (m*e-m+j)%100;
                  c -= (h-c*l-b-d+g+j-c)%100;
                  k += (c+h+d*c-j+m*l+l)%100;
                  n += (b-i-j-b+f)%100;
                  m -= (e-n*a*d+j-f*h)%100;
               }
               do
               {
                  d += (a+a)%100;
                  a += (d-e-m-f+k*k-j+e)%100;
                  g -= (j-h-b-a-l-b+d-g+c+k+g+b+g+l)%100;
                  f  = (g-e+b+l+n*j+n-j+b+l+n*m)%100;
               } while( ++DOcnt[12]%5 );
            }
            if( ++IFcnt[9]%10 )
            {
               m += (e*m*a+j+e-k-k+a-l+j-g-c-b+j)%100;
               for( ; ++FORcnt[19]%5 ; )
               {
                  d += (l-f+n+h*k+a*d+n)%100;
                  e -= (k+h-a+j-n+n-l+l-l+a*f*b)%100;
                  c -= (n+j)%100;
                  e  = (m-l-c*e*d-m+m+h)%100;
                  c += (a-l-c-i+m+e)%100;
               }
               
               switch( ++SWcnt[6]%3 )
               {

               case 1:
               {
                  e += (n-b)%100;
                  f -= (d-k*d+h-l+g*d-i)%100;
                  d += (g*g+e+d+g+h-b+c-e+b+b*n)%100;
                  l -= (l-d-b+n-l-n-g+m-n*i-n+k+l)%100;
                  j  = (k*j-m+m)%100;
               }
               break;

               case 2:
               {
                  a -= (k-k+n-c*n*d-i)%100;
                  j -= (m*g*k+l)%100;
                  f += (h*m*c+g+f+f+d+g*g+j-j)%100;
                  g -= (a+m)%100;
               }
               break;

               default:
               {
                  g += (j*h*c)%100;
                  j += (g+n+h+l+e-a*e+f-c*m+f+l*d-f)%100;
                  f -= (l+e*g*i*k-d*e-f-a)%100;
                  l += (i*g*d-l*k-n*k*b+h*k)%100;
                  b += (b-e*g-a)%100;
                  m += (n+a+l-m+k)%100;
               }
               }

               if( ++IFEcnt[12]%2 )
               {
                  j  = (m-g-n-k+f-e-e-k*h)%100;
                  c += (e+j-g+f-f-k)%100;
                  g -= (g-j)%100;
               }
               else
               {
                  h += (j-i-e-c+g-f+b+k-g)%100;
                  j -= (c+d-i-l+a-f+h-f)%100;
                  n -= (l-i-g*b+i*e-f+b-a*k-j-k-d)%100;
                  m += (a+a+i)%100;
                  l  = (j+m*h-k+b-l-e*i*g+j)%100;
               }
               a -= (d-e)%100;
               j  = (a-n+i+i-k+d-c+l)%100;
            }
            n += (c+n-g*m)%100;
            g -= (h+b-c+h+e+b+e-l)%100;
            f += (n+c-c+b*h)%100;
         } while( ++DOcnt[11]%5 );
         e += (k-j*c-j-e-f-b)%100;
      }
   }
   g  = (g-i+b-e-g+j+a+f)%100;
   e -= (i-d-f*j-l+i+j-i-b-d*j-e-f+a)%100;
   n  = (c-b-d)%100;
   j += (e-k+c+i*n)%100;
   k += (g-i-e-e)%100;
   c  = (d-m+g+f+a*h+k+d)%100;
   i -= (b+f-e+b+j*l-j-j-i*j-i-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F7(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[15]%5 )
   {
      do
      {
         for( ; ++FORcnt[22]%5 ; )
         {
            if( ++IFcnt[10]%10 )
            {
               for( ; ++FORcnt[20]%5 ; )
               {
                  i += (m-b+b-l)%100;
                  j -= (l+g+h-b-j+i-g)%100;
               }
            }
            if( ++IFEcnt[15]%2 )
            {
               if( ++IFcnt[11]%10 )
               {
                  f -= (m*i-e*i+k+n+i+m-i-c+i+d)%100;
                  c += (k+e-j+b+j*g-a)%100;
                  e += (h*e-a+c*i+i+k-a)%100;
                  l -= (i+i-j+c-j+a+b+g-a-b)%100;
                  i += (g-m-c+c*e+g+n*k-c-n*e*g)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  d += (m+l)%100;
                  b -= (b-f+f*n+i+g+h-j+a+n+m-g)%100;
                  n -= (h+l+m+m-m+n+f+c+e*b+d)%100;
                  k += (g-k-e-m-g-i)%100;
               }
               else
               {
                  n += (m-n-k*j-l-h-c+j+h+a-f-j-k-h)%100;
                  e += (h-h-d-h-m+n-f)%100;
                  a -= (b-l-j+d-g+m-j-g*e+c+c*b)%100;
                  n -= (f-n)%100;
                  d  = (c-f*g-h-i+i+b*n)%100;
               }
               while( ++WHILEcnt[14]%5 )
               {
                  d += (h*j-m-g-h-b+n-k*f-m+g)%100;
                  d += (b-e-g)%100;
                  l -= (l-e-j-c-i-a-a)%100;
                  h -= (l*d*a-k-h+j)%100;
                  g += (m+j-e*h*f-h+k)%100;
                  k -= (d+m)%100;
               }
               do
               {
                  e -= (k-h+f+b*h-b-n)%100;
                  j += (d-a+g)%100;
                  n += (e*m-l+l-m+l-m+b+g+e*h)%100;
                  l += (m*j+j-c*e-f-k*a+j)%100;
                  f += (m+h+e-j+h)%100;
               } while( ++DOcnt[15]%5 );
               n -= (c+b*c+j*g+j+g-k-d+b+g-b*i+h)%100;
               m  = (n+g*h+h-j-b-l*k-d+f+e)%100;
            }
            else
            {
               while( ++WHILEcnt[13]%5 )
               {
                  b -= (k+k*g*n-g+b+d-g*d+n+m)%100;
                  g -= (l*d+e+i*f+h-m+a*d+j-n+e-k+g)%100;
                  f  = (c-f+f-f+k*h+n+j+n)%100;
                  m  = (n+f)%100;
               }
               do
               {
                  e -= (e-b*c+g)%100;
                  e -= (e*i*g-j-k+a-e-d-b-n)%100;
                  m  = (g+c+i)%100;
                  h -= (e+f-d-i-g)%100;
                  e += (b-d+l*k+l-j-k-k-m)%100;
                  a -= (k*d+k-k+n-l-j)%100;
               } while( ++DOcnt[14]%5 );
               l -= (d-d-h-n-j+n+l+e+a-c+m)%100;
               for( ; ++FORcnt[21]%5 ; )
               {
                  h  = (i+k)%100;
                  g  = (k-j-n+m*d-j-f+m+l*m+m-b)%100;
                  c -= (d*j+d+d+k+h-d-l+d+k)%100;
                  k += (a+i*d-l+e*f-n)%100;
                  f += (b+b)%100;
               }
               
               switch( ++SWcnt[7]%3 )
               {

               case 1:
               {
                  c -= (e*b-j-l+e*d-i+c-i+g+h+i-h)%100;
                  f -= (j+f-c-g-n-n-j-b+k+a-h*d)%100;
                  g -= (f-j+d-j-g*c+h+k+e+d-a-c)%100;
               }
               break;

               case 2:
               {
                  n -= (b+k)%100;
                  e += (k+f*a+c-b*l+a+i+m-h-f-i*g+j)%100;
                  f -= (l+d-j-n-m-j-g+g)%100;
                  l += (e+j-j-d+j+b+c*e-d)%100;
                  d -= (d-j+n+n+n+f-m*n-f)%100;
               }
               break;

               default:
               {
                  k += (f*a-b*f-l*c*c-g*l-l*i+f*j+b)%100;
                  k  = (l*c*a+b-j-g-l+b+j+h-k)%100;
                  m -= (j*m-i)%100;
                  c += (f+l+j+n+m+e*f*h-i-n+m-k+g)%100;
               }
               }

            }
            h += (i-g+k+g+n)%100;
            i += (m-k*c+n+j)%100;
            n += (l-g+n)%100;
         }
         m -= (a+i-h-d*e+d*k+d-k+n+h-b-m-g)%100;
         i += (m+b+a*n-i*g+b+d*c*j)%100;
         i += (k+e+i)%100;
         h  = (g+f+h*k-k*e-k*m)%100;
         d -= (b-l-g-j-m+i-n+h-j+n)%100;
      } while( ++DOcnt[13]%5 );
      a += (b+d)%100;
      c -= (e+l+d+f-k*b*m-b+b+c*b+n)%100;
      g -= (d+m*c+n*e-n-l+g-g*g-c+j-l-a)%100;
   }
   f += (n+a-l-j+f-k-m+i+a)%100;
   i -= (b-k)%100;
   n += (c-m*k+e+j*h)%100;
   i  = (f-e-h*g+f+h-d)%100;
   f += (d+c*h-f*h+l+h+d-n+j*f-n)%100;
   b -= (i-d*d)%100;
   j  = (e+k-h-j+j*e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F8(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[27]%5 ; )
   {
      for( ; ++FORcnt[26]%5 ; )
      {
         if( ++IFEcnt[17]%2 )
         {
            j -= (h+e-d+b-j+b+k+d-i*d-l-h-h)%100;
            l += (l-b)%100;
            f += (l+h-e+n+e*c*a-e-m+h+i-k+h-h)%100;
            f += (i+n+j*f+c+c+m+c-k+b-j-e)%100;
         }
         else
         {
            while( ++WHILEcnt[16]%5 )
            {
               do
               {
                  i += (h+m+j-d-a+b+k)%100;
                  f += (g+k-m+f+i+b+e)%100;
                  e -= (b*j+e-h+e-e-l)%100;
                  h -= (f+g+d+j-i*h-i)%100;
                  g += (h+c-m*c-f+e)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  b -= (i-l-l*b+e*b-c*b+n-f)%100;
               }
               f -= (c*i-i)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  g -= (g+d+n+k+k*l*a-f)%100;
                  a -= (h-c*j+i*f*e+g+e+n+k-g-h)%100;
               }
               
               switch( ++SWcnt[8]%3 )
               {

               case 1:
               {
                  n += (i+e*g+k-m+c+k+l+g*i-a+l)%100;
                  b -= (k-f+l+c+i+m*j+n-e+m+g+k-g)%100;
                  l += (h-b*h*c-m-g-h*i+h+n*h)%100;
                  j -= (m+a*i+j*f*k-h+j+c*k+k-a-g-g)%100;
                  i += (e-k+n-f*m*j-f-c+n-l*f+m*n*f)%100;
               }
               break;

               case 2:
               {
                  n -= (b+b+j-c-f+d-k-l+j-c-b)%100;
                  m += (c+i-j-l-i-g-f+i*b*a+n)%100;
                  a += (c+a-g-h-a-a-a-g-e*f*d+b)%100;
                  n  = (a+d+k-h-d+i*a+i*j+n)%100;
               }
               break;

               default:
               {
                  m  = (l+k+g-k*n+d+e+g)%100;
                  a -= (e+a-g-e+e-n+b+l)%100;
                  m -= (b-c-n-b*g+b+h+h)%100;
                  l += (d+h+b*l+k-i+h-d)%100;
                  n += (m-h)%100;
                  k -= (d+j+f*c+n-f+c-f*n-c+f)%100;
               }
               }

               if( ++IFEcnt[16]%2 )
               {
                  j -= (b*k)%100;
                  f += (a-f)%100;
                  l -= (l+j-h-i-m*l-m+d-i+m-c*e+e+j)%100;
               }
               else
               {
                  c += (n-l+b-g*k)%100;
                  j  = (g*d-i-n-d-d+f-b-n-f)%100;
                  f += (i*h*f-e-m)%100;
                  g += (l+i*h+b)%100;
                  l += (m+a-k-f-i-k+c)%100;
               }
            }
            while( ++WHILEcnt[17]%5 )
            {
               do
               {
                  m -= (j+h-l-a+n+h)%100;
                  a -= (j+c*i+d*k-m+m-d+g+k-h-a)%100;
                  f -= (b+g)%100;
                  d += (b+g+h-j-d+k-e*j*c+g*k*i+j)%100;
               } while( ++DOcnt[17]%5 );
               for( ; ++FORcnt[24]%5 ; )
               {
                  a -= (h+l*b+i-e+l+e+d-c*m*i*n+g*e)%100;
                  f += (i-d+e-e*m+g-m+f*m+i)%100;
                  c -= (n-g+g+c+k*d-i-a*e*l-c)%100;
                  i -= (c*g+f)%100;
                  b -= (i+g-d*h-a-e-k-m)%100;
                  b += (m+l-m)%100;
               }
               if( ++IFcnt[13]%10 )
               {
                  n -= (i-f)%100;
                  e -= (c-e*h+e*k-b+n*k+h+c)%100;
                  n += (k+e-a*d*m-e)%100;
                  j -= (b*g-m-k+n-f*j+h+j+j+l)%100;
                  k -= (j-a-j-i-f+m-n+m-n-m*m-a-d)%100;
               }
               for( ; ++FORcnt[25]%5 ; )
               {
                  l -= (a+g-f*f+e-d*m-m+f)%100;
                  i -= (c-j*b+i-j*e+b*h-b-k+b)%100;
                  j -= (l-j-g-f-h*j-f*l+b+e+d-f-c)%100;
                  e -= (m*d-n+k-n-a-k-g*b+d-c-b*m)%100;
                  a -= (m+n-a-h-g*g-f*l)%100;
               }
               m  = (b-n-g-i+m*k)%100;
            }
            i -= (j*i-c+h-a*c+b+c-n*m*d-l*n)%100;
            l -= (g*j*i-e+j)%100;
         }
         k += (j+m-a-h-e-b-e+d*g-a+f*d)%100;
         b -= (e-d-f-m-d+m*k*b+b+f)%100;
         i -= (e*e+f-n-d+g*j-f-d-a*m*d-g*i)%100;
         e -= (m+c+k+b-f+n+g+c+h-j+j-n)%100;
      }
      f += (l-b)%100;
      b += (e-h)%100;
   }
   h -= (f+k-n*c-b+m+h+i-d+j+n)%100;
   j -= (b+f+m+a-c+j+g+m*l)%100;
   m -= (j+j)%100;
   f  = (a-l+j+f-m-h+a-f)%100;
   i -= (i*l-e+k+e-g-h*g+h+k+b)%100;
   a -= (c-m+m*f-c+f*a+h-n-j+j-e*l*i)%100;
   g -= (j+e*a+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[20]%2 )
   {
      k -= (e+j*n+l+i+k-m+d+j)%100;
      m -= (e+b)%100;
      h += (c-j)%100;
      k -= (c-k+j+a-c)%100;
      i -= (m-a-a-j+m)%100;
   }
   else
   {
      while( ++WHILEcnt[20]%5 )
      {
         do
         {
            c += (n+n-c+h*a+c-b-h+g-g-h*k)%100;
            for( ; ++FORcnt[28]%5 ; )
            {
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  b -= (e*i-a-k+f-c*h+f+b*f+j*a-j-n)%100;
                  d -= (a+l-g)%100;
                  l -= (k-a*h-k+k-c+c-g-b)%100;
                  b += (e-l-m*k-g)%100;
               }
               break;

               case 2:
               {
                  a -= (d+a-m+k+a-j-e+k-f+b+k+d*f)%100;
                  m += (i-j+j-e+g+c+h*j-f)%100;
                  g -= (e+j)%100;
                  b -= (b+f-k+i-d-j)%100;
                  d += (b-f-k+m-b+e-d+n*f+l)%100;
                  c -= (h+f-i-b+i-g-n+h+g)%100;
               }
               break;

               default:
               {
                  i -= (e-n+b+b-j+c+d+l+n)%100;
                  d -= (l+g-j-b*a+n-i*c+d*h-b*k)%100;
                  e -= (j-j+k-n*n-a+e-e+k-j+g+n)%100;
                  k -= (g-h+g*d)%100;
                  b -= (j*k-i+j-k+a-d+a-e-d)%100;
               }
               }

               if( ++IFcnt[14]%10 )
               {
                  i -= (g+g-a-d+c+c-n)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  i += (i-h)%100;
                  j += (f-a+j)%100;
                  l -= (h-l*b+d-g+m*j+j*e)%100;
                  f -= (d*c+b+a-h)%100;
                  l += (b-c+a-g+e+k-n-g-d)%100;
               }
               else
               {
                  m -= (b*c+b+a+k*d+h-c-l-d)%100;
                  h += (b+f+g+n-d+l-j*e+d+i+a*c-j+g)%100;
               }
               while( ++WHILEcnt[18]%5 )
               {
                  a -= (g*d-j)%100;
                  d -= (n+f*e+d+k-j-b-h-a+m)%100;
                  a -= (g+g-f+a+b-m)%100;
                  d -= (i+m+d+j+m)%100;
               }
               do
               {
                  f += (e-a*d*f-d+e-k-c*b+f+m+n)%100;
                  l += (m-k+n-d*e-n-a*m*k)%100;
                  b += (k*e)%100;
                  e  = (d*d+d-h*k+f-h-j)%100;
                  a += (c+b-j+f*k*j-n)%100;
                  l += (g+b-m-m+b)%100;
               } while( ++DOcnt[19]%5 );
            }
            for( ; ++FORcnt[30]%5 ; )
            {
               for( ; ++FORcnt[29]%5 ; )
               {
                  n -= (i+c+i*f-i*k+h-j-a+k*f)%100;
                  d -= (n*h*b*e+n-h)%100;
                  d -= (d+a-l+g-f)%100;
               }
               if( ++IFEcnt[19]%2 )
               {
                  d += (l+k-m)%100;
                  j += (k+l-j*d*n-b)%100;
                  c += (l+i)%100;
                  n -= (k-k+g+n*f*f+f-n+g*j+e-j)%100;
               }
               else
               {
                  d -= (b-h-m)%100;
                  n += (j+e-i+m+a*d*l-i+b-a*h-d+n)%100;
                  j += (i-k-f+l-m*m-n*j-c+m)%100;
                  d -= (g+j+f-g-i+c-b-h+k+e+e+c)%100;
                  h += (a-m)%100;
               }
               while( ++WHILEcnt[19]%5 )
               {
                  n += (k+e-e*h+g*n+g+k-h+h+i)%100;
                  n  = (e-n+c+k*m-e-e+b-f*j+n+e*i*d)%100;
                  e  = (l+f)%100;
                  l -= (j+f-f-a+c+b*h+b+g+k+f-d+i+a)%100;
                  k += (g+b-j+e*e+m)%100;
                  l += (e*f+f)%100;
               }
               a -= (g-h*a+h+k-f)%100;
               m += (c*g-e*b+j-b-f)%100;
            }
         } while( ++DOcnt[18]%5 );
         j += (b+g-g+a*k-c)%100;
         d += (k+k+a+g-d+c*h)%100;
         b += (j+a+c)%100;
         j += (h+d)%100;
      }
      n += (c*e*k+g-e+c+k+m*k)%100;
      d += (n-l*a+a*a-m+g-g-j-m+i)%100;
      n += (b-b)%100;
      i -= (k-d-k+m*b-a+c-j+f+e-h+c*k-h)%100;
      m += (a+c-n+d+g+e-e+f)%100;
   }
   b  = (m+g*h+j+i+h+k*i+f-n+g+b)%100;
   m -= (j+d+d-m+k-j+f+c*j)%100;
   b -= (m*n+h-j-n+d*g+j+i*b)%100;
   l += (j-b-h+l+a+d+i*b-n-f)%100;
   i += (n-a+i+n-g)%100;
   j -= (d-i+i*l+f+f+e-a)%100;
   g += (n-b+k-g+c+c+f+m-k-m-l+a-l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F10(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      if( ++IFcnt[16]%10 )
      {
         n += (d-c)%100;
         for( ; ++FORcnt[33]%5 ; )
         {
            
            switch( ++SWcnt[10]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[21]%2 )
               {
                  d -= (e+e-d*a*i)%100;
                  d -= (m+g+b*j-f+a+k*k)%100;
                  d += (n-f)%100;
                  m -= (j*d*c*c+g+k+f-c*h*b*n)%100;
                  c  = (b-i-n-a+h)%100;
               }
               else
               {
                  m += (f+c-l+d*l*e*h-a+h-n)%100;
                  a -= (i*h-d-g-j-b*m+f+d-b-a)%100;
                  g -= (k-b+g+i-e*e*d*j+b+f)%100;
               }
               while( ++WHILEcnt[21]%5 )
               {
                  j -= (f+f+d*c+g+m-c+n+j+k-k)%100;
                  j -= (c+a-d-h-k+m-c-b*i*n-c-f-g)%100;
                  k += (k-k-c-b+f-m+b-e+m-c+l)%100;
                  l += (b-m+i-b-l-j-h+j*n-a+c-b-f)%100;
               }
               do
               {
                  c -= (d-h+k*f-b+a*b)%100;
                  n -= (g-i-e+e-m*d+h+f+n+f-j)%100;
                  e += (e*m)%100;
                  f  = (i+k)%100;
                  l += (m+c-k)%100;
                  c -= (i-a-b-c-f-f-n+g+c-h-m+n-d+c)%100;
               } while( ++DOcnt[21]%5 );
               for( ; ++FORcnt[31]%5 ; )
               {
                  m += (n+m+g+n*l-c+i*l-j+m-m-f-b)%100;
                  a -= (m*k)%100;
                  a += (i*n+n-d-c*d+n+f+l)%100;
                  b -= (n+l+d-c+k*a-c-l)%100;
                  l -= (a*b-c*l)%100;
               }
               if( ++IFcnt[15]%10 )
               {
                  c += (j+e+a-d*a)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[32]%5 ; )
               {
                  a -= (h-h-k+l-i+k-i+c-e)%100;
                  i += (d+l-f+j*l-b+i-i-k)%100;
                  b  = (k+k+i-f+h-e-m)%100;
                  j -= (m*i+f*b-m)%100;
                  m -= (f-g+b*h)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  f -= (f*c)%100;
                  c -= (a+l*k*k*e+g*m-k)%100;
                  l -= (l*i*a-d-l-c-d+j+b+b-i)%100;
                  e += (n-n-k+d+e-b-g*a+e)%100;
                  f -= (n+i+e+g)%100;
                  l += (i+i*i-a+a*e-j)%100;
               }
               else
               {
                  j -= (f-l)%100;
                  h -= (i+d-f-n+m+m*g*j*i+n+m-n)%100;
                  g -= (k-e-n+m-k-c+i)%100;
                  n -= (a+m+h-e+m*f+f+e-d*i)%100;
               }
            }
            break;

            case 3:
            {
               while( ++WHILEcnt[22]%5 )
               {
                  n += (c+j+b+i-m+i-h-k)%100;
                  i  = (b-d*n)%100;
                  m -= (e*a-g+l-g-g+l-i-f*l+c-e-n+f)%100;
               }
               do
               {
                  j -= (a-b+k-k*i-c-a+j-d-m-c-i+l*h)%100;
                  n += (l*a-l*h)%100;
                  h -= (f+i-a+d-i-a*f*b-n-f+g-a)%100;
                  n -= (e*h+a-f+b*a-k+b+n-c*b-d+e)%100;
                  b -= (a*f+a-f-n)%100;
               } while( ++DOcnt[22]%5 );
               l -= (m+n+l*j+n*g-m-c+e+f-g*i*f)%100;
               f += (e*g+k-l+e*g-g*m+f+l-g+n+c)%100;
               b += (g-g+h*e-m-i*c+g-c)%100;
            }
            break;

            default:
            {
               k -= (i+c*c+e)%100;
               g += (f+l-d+m+e+l*n)%100;
               j  = (h+c+a*g+j+j-a+l-l*f-b*j*d*k)%100;
               l += (d+d*i)%100;
            }
            }

            a -= (g-m-h+i+c-d+g+n+m+d-h+g)%100;
            d  = (h*i-n+g*a-b+l+c-a+d*m+i-n)%100;
            e -= (i*f+n-m+n)%100;
            g += (i+k+i+i*a+h-m-k-d-e-f)%100;
            a += (d+f)%100;
         }
         a -= (c-h+h-c+c)%100;
         h -= (l+m)%100;
      }
      d  = (n*i-n-j*n*c+j-n+n*a*c-l-d-g)%100;
      c  = (e-g*b-k*m+l+e-j+c*j-a-d)%100;
      e += (f-c+n-c)%100;
      c += (c-j+e-j-n+l+l)%100;
   } while( ++DOcnt[20]%5 );
   e += (d-a-j*a)%100;
   n -= (n+c+c*n-d)%100;
   a -= (c*l-l-i+j*n+g*g*m-i*d+n)%100;
   b -= (e+d+j-f+j-a+b)%100;
   n -= (f-j)%100;
   c  = (l+f-m*l-a*l+e+k-i)%100;
   a += (f+m-n*a+c-e-d*f-j-m+d+k+b*c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F11(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[37]%5 ; )
   {
      
      switch( ++SWcnt[11]%4 )
      {

      case 1:
      {
         if( ++IFcnt[18]%10 )
         {
            if( ++IFEcnt[24]%2 )
            {
               if( ++IFEcnt[23]%2 )
               {
                  d -= (l-c)%100;
                  c -= (b-a+l-e-g)%100;
                  j -= (m-k-c-d+e-h+n+f+a+b*h+m)%100;
                  d -= (k+i*e-k-g-b-e+k*i-c-f)%100;
                  k  = (h+b)%100;
               }
               else
               {
                  a += (a-e+d-a+m+c)%100;
                  g -= (d-l+e+l+m+a+e-b-d-k-b+d+h+j)%100;
                  l -= (n-g*i-l*e-j*n*a*b-n-n*d-h-n)%100;
                  c += (g+f-b+n+d*f-f-g+l+e+a)%100;
                  n  = (a+n-a+e+l*c+c-n-m-k-e*m)%100;
                  c += (h+f+d*l-m-k-k+j+g-f+i-j*j+a)%100;
               }
               while( ++WHILEcnt[24]%5 )
               {
                  l -= (d+d)%100;
               }
               do
               {
                  h += (l*n+b-a+c+a+i*m+g)%100;
                  i -= (e+j+k-b-m-n)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[17]%10 )
               {
                  e -= (f+f+l-k+m+k+j*n-g+k)%100;
                  l += (d*g+c+a-n-a-i-h-l-a-n-a-g)%100;
                  i += (d+d+g*g-a+j*m-m+f*n+n)%100;
                  d -= (b-g+f-c+n+f)%100;
                  i += (m-e-a)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[23]%5 )
               {
                  e -= (l-m-n+b*j-j-h-m-j+d+b+n-k)%100;
                  a  = (e-e*e*i+j-d-i+e+l+e-i-k)%100;
                  i -= (c-l+l-c+g-g+d)%100;
                  i += (k+k-i+b+f)%100;
                  h -= (a+b*a+n+m+b-k-m*k+d+k*m+n-i)%100;
                  k -= (c*c*e*g+b-b+g-i*j-f)%100;
               }
               do
               {
                  h += (g+d-i-e-n+m+e-b+l+j*e)%100;
                  m -= (d+m-e-j)%100;
                  g += (e*i*j-j*d+k)%100;
                  b += (j+k+f-a-d+b-j-e+c)%100;
                  h -= (l+c+j-h*h+d-b*k+k-n)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  n += (j-g+h+c-b*h+g)%100;
                  h  = (j+i-c+f-l+n+b+m)%100;
                  e += (i-j+j)%100;
               }
               for( ; ++FORcnt[35]%5 ; )
               {
                  n -= (m*d+b*i+n+k+f+d+k*l-g)%100;
                  j -= (g+j+m+f+d+m+m-e-j+c-i)%100;
                  f += (d+l)%100;
                  c -= (l*m+m+j-d-j+n+n-f-d)%100;
                  b += (l+c)%100;
               }
            }
            i -= (b+f*m-a+j)%100;
            for( ; ++FORcnt[36]%5 ; )
            {
               
               switch( ++SWcnt[12]%3 )
               {

               case 1:
               {
                  i  = (i-e)%100;
                  e -= (m-a+a-k-a-n+f*g)%100;
                  j -= (k*a-c)%100;
                  d -= (j*f*f-d)%100;
                  g += (e*e+k*k-d+c*g+d-g-b-k*g*b)%100;
                  b -= (l-i-i-i-m+h+n-n+b-h+i+n-e)%100;
               }
               break;

               case 2:
               {
                  l -= (n*m*e-b-b*n+i-l+e-e)%100;
                  e  = (f-c+m+a+n-i*m*a+e-b-m+h+i)%100;
                  c += (j-f-f+f*c)%100;
                  l += (l+f+k+n-e*j)%100;
                  i -= (e+e+a)%100;
               }
               break;

               default:
               {
                  l += (k-n+n-a+c)%100;
                  i += (g-n+e+a+d-e+l+i-l*e*c+a-l)%100;
                  g += (a+n*e-l-m-n-i*l+k)%100;
               }
               }

               g -= (a+k*m)%100;
               g -= (g*f+e+e+a*b*l)%100;
               f += (h+l-m*e+b-l*j+f-i-i)%100;
            }
            b += (d+g)%100;
            n  = (k-b-j+k-b-e-k+c)%100;
         }
         d -= (d-j*g+b+g+c+b-e-l)%100;
         n  = (g+a-c+l)%100;
         l += (g+c-f+l+a-f*k+b+l*n-b-f)%100;
         i += (f+h+l-b*e-c+k-c*j-f)%100;
      }
      break;

      case 2:
      {
         e -= (i+f)%100;
         f -= (l-n)%100;
         h += (e-l)%100;
         h -= (b*g+m-l-k*h-b-e*e*d+b*a+f)%100;
         n += (e+c+k-j*g+c+e-a+a-l+h*g+j)%100;
      }
      break;

      default:
      {
         h += (i*n-d+k-i*f-c+f-f+f+c-b-m*m)%100;
         h  = (d*k+c-m)%100;
         j += (j-l*j+d-a+h+h+h*g+j*e)%100;
         e += (g-m*m+a+k)%100;
      }
      }

      l -= (n-a*f*i+a+i+b+f-m-e)%100;
      c += (g+i)%100;
      i += (h+l+c-b)%100;
      h -= (e+b)%100;
      a  = (i+n)%100;
   }
   g -= (n+b*h+i-i+h*g)%100;
   l  = (f*g)%100;
   n += (e-l)%100;
   n += (l+g+d-a+g+d+a-e-d-k-f-a+c-d)%100;
   j -= (b-c*d+e-g-m-h+d-m-d+b*m)%100;
   l -= (l-m)%100;
   c  = (j+b+f*i+n-g+f-i-c-n-e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[26]%2 )
   {
      b  = (g*l*b+f-f+l+h+d-d+n-n+b-l)%100;
      i += (m+g*l-c+d*n-j-f)%100;
      f += (c-j-d*i-a*m-b+m)%100;
      g -= (n*f*l-m+j+d*n*d+b+n)%100;
      k -= (n-e+m+k+i+j+i*m-f)%100;
      a += (c-f-a+e-n*f-d*n-n+h-m)%100;
   }
   else
   {
      while( ++WHILEcnt[26]%5 )
      {
         do
         {
            for( ; ++FORcnt[39]%5 ; )
            {
               if( ++IFcnt[19]%10 )
               {
                  m += (e-i-a-d-j*f-d+e-f+l*b-n)%100;
                  e -= (i-c*i+f*g*d-c-k-a*b-a)%100;
                  h += (l*k)%100;
                  m  = (l-a+a+c-c*k*c+e-i-h-m+n-f*a)%100;
                  d -= (j+d+g)%100;
                  c -= (f-k+d+b-b*i+f*g-e-e)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  m -= (m+b-i-k-d+a+g+c*b*e+h-c+f-h)%100;
                  i -= (b+j-d-d-f+k*a-k+b)%100;
                  h -= (n-m*g+f-g*e)%100;
                  j -= (g+j*b+c+a)%100;
                  c -= (g+h-j+i+j+g-g-n+f*f-n*b-m)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  k -= (b-d-c)%100;
                  d += (m-k-m*h*b*c)%100;
                  k += (a-g-g-a*k+b+d+j+k*k-b)%100;
                  n += (g-h*b-a-n+m*j+k+b)%100;
                  g += (d+j-k+d*j*i-i-i+g+n+i+n)%100;
               }
               else
               {
                  i -= (j*i+l)%100;
                  n -= (h+a+a+m+i*l+m+m+a*h*m)%100;
                  i -= (f-a*l+j-j+b+f+g-e+j)%100;
               }
               while( ++WHILEcnt[25]%5 )
               {
                  e -= (l-n)%100;
                  l -= (e-l)%100;
                  i -= (j+b-a*a+c*l-c-a+a-a+d+b)%100;
                  b += (n+d)%100;
               }
            }
            do
            {
               c += (l+a+i-a-m)%100;
               for( ; ++FORcnt[40]%5 ; )
               {
                  f += (l-b+g)%100;
                  l -= (h-j*b-e-i+a-m+j)%100;
                  c -= (l*f)%100;
                  b += (n*h+m+j*j+j*h+h-j-n-n*i)%100;
                  n += (j+j+b+j+l+i+l-i)%100;
               }
               
               switch( ++SWcnt[13]%4 )
               {

               case 1:
               {
                  g -= (j-k+b*g+d+n*n+n+d+k)%100;
               }
               break;

               case 2:
               {
                  m  = (a+c)%100;
                  b -= (e+g-a)%100;
               }
               break;

               case 3:
               {
                  d -= (k-g-b-i-b+j+e+b*j-c+e+k+m-c)%100;
                  l -= (m-g-k+n+a-i-n+c*n)%100;
                  f -= (m-l-g*j-j-b+b-a+j*l-n-m+l)%100;
                  j -= (e-m+b*n-c+l-m-c*a*b)%100;
                  l  = (n-f+k+l+k+l*d)%100;
               }
               break;

               default:
               {
                  n -= (g+n*f+n)%100;
                  c += (a-i-i+e)%100;
                  e -= (e+f-i+e)%100;
                  n += (n*g*l-i+e+h)%100;
               }
               }

               a += (h+d+g)%100;
               b -= (a+j)%100;
               e -= (g+n-f-h-m*l-d+c*j+d+n-j)%100;
            } while( ++DOcnt[26]%5 );
            n += (i-j-b-b-a+n+n-l+m*l)%100;
            n += (e+m+i-g-b+m+j-f-e-m-m-h+k)%100;
            n -= (b+i-n*h*j-e-g)%100;
         } while( ++DOcnt[25]%5 );
         d -= (e-n*g-m+l*a*f-d)%100;
         a += (h*a+n-k-n+m+f)%100;
         m -= (b*h*c+j-e+m+c-j+h+h*n)%100;
         n  = (f*c*j)%100;
      }
      j -= (h*l*e-d)%100;
      g -= (l+g-n)%100;
      g -= (j-e-l+k+i-k-i*b-i-f-b-j-k)%100;
      f -= (a+m+n+g-d-f-l-l*e)%100;
      l += (d-m+g-i*k-f*d+b*a)%100;
   }
   e += (m+b+n-h-g+m+a-m-n-k-f-l-g-i)%100;
   f += (j-e)%100;
   m += (l+n+b-h+n-c-h+h+g*n-d+n-l)%100;
   f -= (n*l-i-e*k*i+k-n*m+e)%100;
   j -= (a-a*c+b-e-n-b)%100;
   m -= (j-e-e)%100;
   m += (l+f+h-e-j+k+l*k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F13(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[21]%10 )
   {
      if( ++IFEcnt[28]%2 )
      {
         j += (c-f-g+b*i*l-c+d-f*i+h+b+k*l)%100;
      }
      else
      {
         while( ++WHILEcnt[28]%5 )
         {
            do
            {
               for( ; ++FORcnt[41]%5 ; )
               {
                  k -= (a+k*e+c-n-i)%100;
                  l += (d-h-k+c+n-b*g-n-f)%100;
                  d += (d-n+g-j+e+b+i)%100;
                  m += (n-n)%100;
                  d -= (l+a*f*i-l*i)%100;
                  g -= (j+b)%100;
               }
               for( ; ++FORcnt[42]%5 ; )
               {
                  f -= (f*g-i-j+a+h+n+g*b)%100;
                  k -= (m-k-k)%100;
                  f -= (b+c-d+j+i+e-e*j+n-g+b)%100;
                  l += (f*j*i-n-j-l+e)%100;
                  g -= (b*a-d-j+h-n+d-m-f)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  a -= (f-d+e)%100;
                  k += (b*m+j-k-a*h+l+m+i+d*c-d)%100;
                  g += (j+a*d-k-n+l+i-e+n)%100;
                  m  = (j+d-k-f-f-c)%100;
               }
               else
               {
                  c -= (f-i+m+n-m+c-b-h)%100;
                  m -= (c+j+h*j*k+f-b)%100;
                  m += (j-g)%100;
                  i  = (c-c+e-e*m+i-e-h+g-e+j+h*a)%100;
                  j += (b+h*h+d-h+c-a+h+f-h+g-c*k+m)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  g += (f*e)%100;
                  i += (k+i)%100;
                  h += (c+a-n+d+n-j+l)%100;
                  l  = (c-g-j-d-l-b-l-j+i)%100;
                  g += (c-k-n*e-f+h+j+m)%100;
                  a += (g+d+l-e+m+f*b-f-e*f-h+e*b)%100;
               }
            } while( ++DOcnt[27]%5 );
            do
            {
               if( ++IFcnt[20]%10 )
               {
                  i += (a*g-e+n*e-i+i-a-h+l-c+k-b)%100;
                  e -= (e+n)%100;
                  h += (n*f+g-h*l+c-k+a+c+j-a*a)%100;
               }
               m += (c-h*b+e-d*j)%100;
               for( ; ++FORcnt[43]%5 ; )
               {
                  h -= (d*n-c+i-b+c-l-e)%100;
                  e += (c-h-a)%100;
                  c += (g-c+h+f+f)%100;
                  e -= (b-k-d+l-i+g-h-l+e+h-g)%100;
                  c += (j-i-d+a*m+i-i+a-m-c-j+c+c)%100;
               }
               
               switch( ++SWcnt[14]%3 )
               {

               case 1:
               {
                  c -= (g*m+f-h*j-b-m+m+l-h)%100;
                  h -= (j-e+e+a-a+j-b*d-n-e)%100;
                  k += (e*h-n-a+l)%100;
                  d += (b+g)%100;
               }
               break;

               case 2:
               {
                  b -= (i+i-n)%100;
                  m += (n-a-f-g-h-j+f-e+h*n)%100;
                  i += (f-d-f*j+g+k-i+g-c-k+f+g*l)%100;
                  c -= (i+g)%100;
                  n  = (j-g-i+k*m-l-m+i)%100;
                  n += (k-j+e*f+j-k+h-g+f+g-c)%100;
               }
               break;

               default:
               {
                  g += (e*h+i+i-a*i-k)%100;
                  j -= (e-c-g-b-n-h+e+b)%100;
                  g -= (k+f+h-e+j)%100;
                  h += (d*a)%100;
                  k -= (a+i*m+j+n)%100;
               }
               }

               n -= (n-i+g+g+n-m+n+b+h-d+i-j)%100;
            } while( ++DOcnt[28]%5 );
            j -= (n+n+e-b*c+i-k*c*k+d-f-e-e+g)%100;
            l -= (g*c)%100;
            f -= (g*g-d+d+a+h)%100;
         }
         j -= (j+g+c+j-b*i-m-a)%100;
         l += (g*j-i*a+b+i*e+i)%100;
      }
      k -= (b-n+n+b-h-l-c+b+k*b)%100;
      b += (e*m+j+l*i-b+h*i-c)%100;
      a  = (h+d+j+n-a*j+d-b-a-i-k)%100;
      h -= (k+k-i*m+l*m*f*i-j-j-j-f+g-k)%100;
   }
   d += (m*n-k-f+d*h-c*d-i+h-k-e-g)%100;
   l -= (b-m-a+h+j)%100;
   j  = (l-e-j*m-f-n)%100;
   i += (j-j-e+a+b-d-k+j*m+h)%100;
   k  = (e-m+a+k*m)%100;
   h -= (k-l*h*l*n*h)%100;
   b -= (f-i*j-d+f+i-d-l+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[31]%2 )
   {
      f -= (l-h+c-k-i+n)%100;
      h += (k*m)%100;
      h += (k+e*l*h+m-c*e-m-i)%100;
      g  = (h+g*m-i+a-e*l)%100;
      m -= (l+e*a*l-m+d)%100;
      f -= (i*f-l*n+e-l-k*g-a*f-i*l)%100;
   }
   else
   {
      while( ++WHILEcnt[30]%5 )
      {
         do
         {
            for( ; ++FORcnt[45]%5 ; )
            {
               if( ++IFcnt[22]%10 )
               {
                  m += (c-l*m)%100;
                  n += (f-c+e+i-c*k+h+l-c-d-j-g*c)%100;
                  j -= (e-k+g-g+b-b+b-l)%100;
                  b -= (n-m-e+c-i+n+i-i-j-l+e+a-b*i)%100;
                  m += (g-k+m*k+h+i-a*e-e+e+h)%100;
               }
               for( ; ++FORcnt[44]%5 ; )
               {
                  c -= (a*k-f*i+a*i)%100;
                  h -= (h*h*d*j*h*l-k+k-m)%100;
                  l += (c+i+m+d+j-l-f*i-h-b+i+m+a)%100;
               }
               if( ++IFEcnt[29]%2 )
               {
                  j -= (c+h-l+f-b*a*k)%100;
                  i  = (c-k-h*m+f-j-d+m*n-c*d)%100;
                  m += (m+l-e-d+k+k+h-i-e+d+l-f-f)%100;
                  g += (f-h-d-f*h+l*e*k+k)%100;
               }
               else
               {
                  c -= (n-e+h*k-a*n-k*a+f-n-g-f+d)%100;
                  n -= (l+n-f+m-n+b-k-c*k-a+h-h*k)%100;
                  j += (a+c)%100;
                  a += (m+d)%100;
                  d -= (k+h)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  k += (m-k-d+l-h)%100;
                  b += (m*h-f+i+c-d-k+m-g+g*g+j)%100;
                  c -= (l+n-j-b+m-h)%100;
                  b -= (e-n-k*h-a-h-f)%100;
                  k += (a+d*l+d*f-k-n-j-b+m-c*h-l+e)%100;
                  e += (i-d-a+c-e+m-j*n-d*c+e)%100;
               }
               do
               {
                  i += (d*d*j-d+c*l+c+g)%100;
                  e += (e+g+d-h-d)%100;
                  n -= (k+d-e-d+g)%100;
                  a += (a+g)%100;
                  k -= (l-h-a*n+k)%100;
               } while( ++DOcnt[30]%5 );
               e += (f*a-d*b-g-l*l*a)%100;
            }
            for( ; ++FORcnt[46]%5 ; )
            {
               
               switch( ++SWcnt[15]%3 )
               {

               case 1:
               {
                  c += (l+j-a-h)%100;
                  e += (l-a+n+i-e)%100;
                  c += (j+b+h+a-k*e*l+k+h+j+f)%100;
                  j -= (d*f*m+d-j+n-g*e-n+d)%100;
               }
               break;

               case 2:
               {
                  j -= (i-b-j+c+b+a-a-e-d-d+j-a)%100;
                  c -= (i-m-a+i-k)%100;
                  l -= (k+e*b+m+g*b+d+a-i)%100;
                  h -= (b+n+e+g+k*n-m*c-b+i-k-b-m*j)%100;
                  f -= (c-f-n)%100;
                  c -= (a-d*a+c)%100;
               }
               break;

               default:
               {
                  b -= (n-c-n)%100;
                  d += (h+d*c+g)%100;
                  f  = (c+h+k*b)%100;
                  n -= (l+h*a)%100;
                  n -= (c+g-c)%100;
               }
               }

               if( ++IFcnt[23]%10 )
               {
                  j += (f-j-c+g+i-e*i+i*c-k-g*m)%100;
                  c += (n+c-n+n-l*c+i-j)%100;
                  f += (j-b-a+f-c+g-e*m+f)%100;
               }
               if( ++IFEcnt[30]%2 )
               {
                  d -= (i*a-m-l-d-e+i*e)%100;
                  k  = (b+a-d*a-h-d-h+a)%100;
                  j -= (c+b*c-n)%100;
                  a -= (j-h-c+d-j*a*e-l+h+l)%100;
               }
               else
               {
                  c += (g-d)%100;
                  a -= (l-n+k-e+g-n+h+n+j*b+j*k+d+g)%100;
                  i -= (c-g+j-h-c+l+e)%100;
                  j += (l*g+k+k*a*m)%100;
                  f += (b*a+a)%100;
               }
               n -= (h+j-l-k)%100;
               e -= (e+m+k*b-n+j+a)%100;
            }
            f  = (g*b-e-n+j-m-e+g+k-m+k+g*d+h)%100;
            i += (m+e-j-i-j-d+b-g+l*d-f)%100;
         } while( ++DOcnt[29]%5 );
         c += (g+m)%100;
         j += (i*j+i-h+g)%100;
         l += (a+b+j+l+k-h+d+g*h)%100;
         g += (c-a-b)%100;
      }
      c += (k+n-h+f+n+a)%100;
   }
   e -= (b+e-j+l+n-k*e-j-g+e-n*g)%100;
   h -= (l-i+a-i-g-k*d*j+a+b+h-n-n-j)%100;
   c += (d-e)%100;
   i += (d+l+h-i+b-e+f+h-h+g+h)%100;
   h -= (e-c)%100;
   d -= (k+h+l+k+g-b+d-l*h-l-f*k-j)%100;
   d += (m*n*c-e-a-f+g-d+n+h+d-i-d+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F15(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[33]%5 )
   {
      do
      {
         for( ; ++FORcnt[49]%5 ; )
         {
            for( ; ++FORcnt[47]%5 ; )
            {
               if( ++IFEcnt[32]%2 )
               {
                  i -= (e-a*l+m*l-b-d+d-d-e*g)%100;
                  c += (e+k+k+c-h*h+m+i*f*i*e+j)%100;
                  l += (e-k)%100;
                  h  = (d*j+d-n*k+n+f-m+b)%100;
                  k -= (d-b+k*i-a-a+c*a*l+e-n)%100;
                  n -= (k*j+m-i+g*m*b+h+n+g+m+e)%100;
               }
               else
               {
                  k += (m*d-c+k*j*i-k)%100;
                  g += (n-d)%100;
                  a -= (c-a-l-a+h+d+l)%100;
                  k += (n*n*m*k)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  e += (a+f-i+e+b*m-d+g+h-d)%100;
                  g  = (l-b-i-j*m*f*f-j+g-d-c)%100;
                  e -= (k-d+g+a+g-n-a*e*k-n-m-k-b)%100;
                  j += (e+i+a)%100;
                  c -= (f+k-g+g+l-c)%100;
               }
               do
               {
                  n += (n+a+n)%100;
                  m -= (b+c+f+f)%100;
                  l += (m-m-i-k-n+f-i+l-a-d)%100;
               } while( ++DOcnt[32]%5 );
               if( ++IFcnt[24]%10 )
               {
                  g += (e*d+l+e-a-b+n+i)%100;
                  j  = (m+b+d*e-i+h+k-g+m-g+k+a-g+a)%100;
                  f += (l*f-a-g)%100;
                  f -= (b*a+n-j+i-e+g*c+i*c-m-n+n)%100;
                  m -= (l+j-e+n*k*f-g-k-b-m-j)%100;
               }
               a -= (n+c+l)%100;
            }
            for( ; ++FORcnt[48]%5 ; )
            {
               
               switch( ++SWcnt[16]%3 )
               {

               case 1:
               {
                  k += (i*d-g+c*c-f*b+a-e+j+f+n)%100;
                  h -= (h-g-k-m*a-n+f+e*l)%100;
                  f += (d-j-f+e-c+n+f*e-f+b*k)%100;
                  a += (b+d+h-h+k*a+f)%100;
                  c += (i-b-d+g-b)%100;
                  k -= (m*i-a-e+j+n-g+f-g)%100;
               }
               break;

               case 2:
               {
                  f -= (n*f-m-f-e+e-b)%100;
                  h  = (k*g+i-j*c*e)%100;
                  b += (i+h*c*h+h-i-n+i-j+e+d+k)%100;
                  k += (n+n+i+d+e+m*c+l)%100;
                  d += (m+n-d-a-i)%100;
               }
               break;

               default:
               {
                  g -= (c+c-m+d+m*k+f+f-a-i)%100;
                  c += (f*b+m+g-a+c-l-i-e*a)%100;
                  m -= (n+i+h-h*a+k-d+c-h+a+f-m)%100;
                  d += (l-a+h+i+c-a)%100;
                  j -= (c+h-f+a+c-m-g+g+i-j-l-n)%100;
               }
               }

               if( ++IFEcnt[33]%2 )
               {
                  l -= (m*d*j*f-l*d-g-a+h*l)%100;
                  l -= (e+k*n-a-h*b*d)%100;
                  m -= (m+a-l-f-m+j+m-k)%100;
                  n += (n+i)%100;
                  f -= (m*g-n)%100;
                  g -= (h*i)%100;
               }
               else
               {
                  d -= (l-g*g+k-k+d*i-g+d+g)%100;
                  a  = (h*i+j+a+f-h*c+e+m+m)%100;
                  l  = (i-f-b*m-i*d+k+d-n+a-a-h)%100;
                  e += (g+m+d+m+f*d*h-a-g+a+c)%100;
               }
               while( ++WHILEcnt[32]%5 )
               {
                  d -= (k+m-a+g-g+n-c*j+f*m+c*h)%100;
                  e  = (k*n+j-b*m-k-f-h-e-n-g*b-i*k)%100;
                  e -= (f-i*d-f+g*d+i*h+g-k*d+l)%100;
                  k -= (m*g+l)%100;
                  h -= (k-h+g+h+k)%100;
               }
               a -= (f+l*a-l-e*b+m)%100;
            }
         }
      } while( ++DOcnt[31]%5 );
      d += (m-j-n*b+j-j-b+a-a+h+l)%100;
      d += (j*m+k)%100;
      i += (d-f+c*g-i+g*l+b-k*f-j+m-i)%100;
      f += (b+d+b+c)%100;
   }
   b -= (f+m*e*j-h-b+c*i-g*b+h)%100;
   l  = (j+m+e*j-d-k)%100;
   m -= (l+n+l*a-b)%100;
   f += (g+b+h-a+l*c-b+i-l*j)%100;
   c  = (e-d+f+a-j-b-f-f+h-i-f)%100;
   e -= (h*k+d-c*n*b*d-e-h+k-e)%100;
   c -= (c-f-e*f*e-j*g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F16(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[52]%5 ; )
      {
         if( ++IFcnt[26]%10 )
         {
            for( ; ++FORcnt[51]%5 ; )
            {
               if( ++IFEcnt[34]%2 )
               {
                  c -= (d+a)%100;
               }
               else
               {
                  k -= (a+e+g-f+f+h)%100;
                  d += (n+n*e-e-b*g+d)%100;
                  e += (d+m-j-c*a+g*l+c+f+l+c+a-e)%100;
                  l += (g-n-m*e-i+l)%100;
                  k -= (h*m)%100;
               }
               while( ++WHILEcnt[34]%5 )
               {
                  n += (j+a+a*a-a-l+n-j+e-a)%100;
                  j  = (g-k+i-l)%100;
               }
               do
               {
                  g -= (h+a)%100;
                  e += (c+g*f-h*m+l-l+k)%100;
                  f -= (i-l*h+b-a-f-d-h+e-d-k+f)%100;
                  a -= (h+a)%100;
                  d += (h+h-a-a-k+i+b+n+k+m-a*h)%100;
               } while( ++DOcnt[34]%5 );
               d += (l+f*k-h+k+l-f-f+e*l-f+i+j)%100;
               for( ; ++FORcnt[50]%5 ; )
               {
                  l += (l-b*m-h*k-k*e-n*h)%100;
                  i -= (m+i-b+f-l-g)%100;
                  h -= (i+n+h)%100;
                  b -= (i+c+i+n-m-b)%100;
               }
               
               switch( ++SWcnt[17]%4 )
               {

               case 1:
               {
                  l -= (m-d+l+n*f*b*e)%100;
                  n -= (c*l*n+n-e*i-h-d-k-n+h)%100;
                  j += (f+f-l+h-h-f+n+m+m-d-k-m)%100;
                  i -= (c*n+f+k-g+d-a-g-n+n-a)%100;
                  a -= (j-l+e-j+c-i+h)%100;
                  m += (n+b)%100;
               }
               break;

               case 2:
               {
                  d -= (e+c+i*n+b-d-b+m-e+h-b+f-d)%100;
                  d += (h-d+d*f*b-h-j)%100;
                  j += (a+n-e*b*d-b+a+b-c)%100;
                  l -= (h*f-j-l-l-a*i-g*n-l+m)%100;
                  m  = (n-h*k-c+c+j)%100;
               }
               break;

               case 3:
               {
                  d -= (b-a-c+n+l-b*k-l+f-c)%100;
                  m += (b-k+i*l-j+f*h+a+i-i)%100;
                  m -= (i+e-l)%100;
               }
               break;

               default:
               {
                  k += (a-k+c+m-e-c+g+f-g)%100;
                  a += (i+n-e-i-n+e+m+e-l+d-e)%100;
                  m += (e-b*n+m)%100;
                  n -= (c+k+b+f-f+i)%100;
                  a -= (f+g-k*j+f*h-a+g*m+g+e)%100;
               }
               }

            }
            if( ++IFcnt[25]%10 )
            {
               if( ++IFEcnt[35]%2 )
               {
                  d += (h+i-e+l*h+c*e-d-n+h+c)%100;
                  n  = (b+e+n+l*l+m+c)%100;
                  a -= (a+d+a+g)%100;
                  f += (n*m-a+h-n+e+l+l)%100;
                  g += (c-d*b-a*a-b+n*k+a*b-k-d)%100;
               }
               else
               {
                  g += (g*d*l)%100;
                  f -= (i+c-c-a*j+d+g-h+l+f)%100;
                  n -= (b*l-k-a+a+i-k-c)%100;
                  l += (h-i*g+f+n-e)%100;
                  m += (a+n+e+a-k+b)%100;
                  l -= (n-j*f+c+h*f-a*b+a*i-l-a+m*i)%100;
               }
               while( ++WHILEcnt[35]%5 )
               {
                  b += (n+j-k*n+m-g+h-a+d-c+e)%100;
                  e += (h-l-e+e*g*h+i-d*m)%100;
                  g += (j-c+h-d-g*f+d-h-a-f-e)%100;
                  b -= (g-j-d+n+d+k-h)%100;
                  a += (l*k-d+n*i)%100;
               }
               do
               {
                  d += (i+k*n*m*d+a-g+n+k+g)%100;
                  g  = (n-d+i*g-d+h)%100;
                  a -= (k-f*b+h-g-l)%100;
                  i -= (m*b)%100;
               } while( ++DOcnt[35]%5 );
               l += (l-g+i*e+l+h-k-a-f+h+j+b+h+m)%100;
            }
            f -= (l-m-i+k*i*a)%100;
            i += (e-b-l+a+j+g-g*k+m-n*b+d)%100;
         }
         b += (f-e-m-d-b-d*k-l+j-l)%100;
         d -= (n*n)%100;
         k -= (f*b-m-c+e+i)%100;
         g += (j-h-j+c+a+d-j-c*c+g)%100;
      }
      n -= (e+k-i-d-d-n+m+k-a*i+c)%100;
      n += (l*l-n-i-n+f+k-n-c-i-d+j)%100;
   } while( ++DOcnt[33]%5 );
   d += (e+f-m-m-j+j+h-f+k-h-b+f)%100;
   l += (i-b-i+l-b)%100;
   f -= (m-b+m+m+e+d-c+c-f+l+f+b-j)%100;
   d += (h-k*g-n-a+f+c+d)%100;
   g -= (m+e-b-d-i-k)%100;
   g -= (f+l+i+m+i-b-k-l*d+d*m+k-j)%100;
   b += (e-m*b-e+j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F17(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[57]%5 ; )
   {
      for( ; ++FORcnt[56]%5 ; )
      {
         if( ++IFEcnt[38]%2 )
         {
            c -= (d+g*m+h+h+k-n+n+k+j+c+h*h+f)%100;
            h += (d-i-c+h+f-i+k)%100;
            c  = (b-f-b-l)%100;
            h += (d+a-m-g+f-m*b+a+a)%100;
         }
         else
         {
            while( ++WHILEcnt[36]%5 )
            {
               do
               {
                  m -= (j-c-h-l+k-c+j+n-i+b+f)%100;
                  i += (b+n+a+n+f+h*h*l+b*n)%100;
                  j += (d-f*e-d+l+f-i-g-d-b+j*j)%100;
                  a -= (k*m)%100;
               } while( ++DOcnt[36]%5 );
               if( ++IFcnt[27]%10 )
               {
                  e += (n+e)%100;
                  l -= (b+c+d+l-e*l)%100;
                  i  = (l+b+d)%100;
                  m += (f-n)%100;
                  b += (b*j*l-a)%100;
                  g += (m+a+a)%100;
               }
               n += (f+c-d*k+h+h*l-b)%100;
               for( ; ++FORcnt[53]%5 ; )
               {
                  c -= (d-l-a-m-f-a-g+i*i)%100;
                  b += (i*l+n*c*k-m+n+n)%100;
                  k += (g+i*d-c+m-m-b-c*k)%100;
                  c -= (n+d+c+b)%100;
                  c  = (i-h-h+g+d)%100;
               }
               
               switch( ++SWcnt[18]%3 )
               {

               case 1:
               {
                  f += (l-f-g+c+h+l-e+c*f+j-l-c-n+d)%100;
               }
               break;

               case 2:
               {
                  c -= (a-h*b+b-m-c+i-c+d-i*d*k-f)%100;
                  d -= (i-d-f-f-i+n-j+b*k*i-c)%100;
               }
               break;

               default:
               {
                  b += (c-d-n+l-d*h+i+i-c+b-a-f)%100;
                  i -= (j-h+l-e*k+f-k+d-b+c*m-c-d-c)%100;
                  f -= (e-a+k-d+d)%100;
                  i -= (f-i+g-l-a+m+k)%100;
                  b -= (b+i+k*i-n-h-f)%100;
               }
               }

            }
            if( ++IFEcnt[37]%2 )
            {
               for( ; ++FORcnt[55]%5 ; )
               {
                  e -= (k-e-n)%100;
                  h += (h-m)%100;
                  a -= (h*c)%100;
                  l -= (e+b-g*j-j*m+d*l-l*k-m*b+a*g)%100;
                  l -= (g*h)%100;
                  g  = (n*e-i+n+n-h+g-n*i)%100;
               }
               if( ++IFEcnt[36]%2 )
               {
                  j += (g-e)%100;
                  d += (a+c)%100;
                  h += (i-e-f+f+k+h+f+d+c-l+i*l)%100;
                  n += (b+c-n-k+i*h*k+d)%100;
                  i += (e-b+b+f-k+l-b*d*n)%100;
               }
               else
               {
                  d -= (l+k+m-f)%100;
                  j  = (f+g)%100;
                  m -= (d+i*d-b*h-c*c-a+k+d-a-f+f*d)%100;
                  k -= (i*j+l+h+d+g-j*i-h+g-c+k-e)%100;
                  f -= (h+n*m-h-g-n+d+c*i-l)%100;
               }
               e += (d-n+b-a*n-l+c-g-l-e-a-j+d+c)%100;
               l += (a-c+d-j-n+j)%100;
            }
            else
            {
               while( ++WHILEcnt[37]%5 )
               {
                  g += (e-m)%100;
                  j -= (n-c+c*k+n+l-k-j+i+m*j-d*i+l)%100;
                  g += (l-n+b+d-k)%100;
                  c -= (i-a)%100;
                  i += (g*i*n+d-m+h*m+a+i)%100;
                  g += (k+b-f)%100;
               }
               do
               {
                  b += (d*e-f)%100;
                  b -= (j+b+h+a)%100;
                  g -= (f*d)%100;
                  k -= (d*c-m-j-m)%100;
                  m += (e+n+c+m-i+m*i)%100;
               } while( ++DOcnt[37]%5 );
               for( ; ++FORcnt[54]%5 ; )
               {
                  d -= (b+m+n-b-n+i+e+j*c-d-e+n)%100;
                  h -= (m+h+m*k+j+c-i)%100;
                  a += (j+h)%100;
               }
               if( ++IFcnt[28]%10 )
               {
                  h += (e-j-d-n-l+e-i*f*h)%100;
                  h += (e-k)%100;
                  c += (n+l+g+j-j+d)%100;
                  d -= (m+n-c-g*j*i-n-a+k+c)%100;
                  e -= (k-c)%100;
               }
            }
            b -= (g-n*n-j+c*d)%100;
         }
         f  = (b+c)%100;
         n  = (h-h-c+m+l*j-d)%100;
         e += (j+f-b+a-n*d*l*i)%100;
         h -= (i+i*d-c+a+c+a)%100;
      }
      a += (k*m+g+m*e-e+f*m+j)%100;
      e -= (a*k-k*e+g+k-e+n)%100;
      e -= (d-d)%100;
      f += (b+g)%100;
      f  = (d+b-c*k)%100;
   }
   b += (c-a-d+d-k+j+e+f-b*f-i*c-a)%100;
   e += (e*g-g-i+b+d-e-c+m-m+c+a)%100;
   n += (f-f+a+m+c*b*i*k)%100;
   m += (i-g)%100;
   f -= (j+b+g+n-i+b+b+h*c-m-a*d)%100;
   g += (i*e*d*b-n+h+a-l+m+j)%100;
   m += (n*e*l+h-d+g*j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F18(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[40]%5 )
   {
      do
      {
         f += (a-c*h*j+a+f-j+i)%100;
         for( ; ++FORcnt[60]%5 ; )
         {
            
            switch( ++SWcnt[19]%3 )
            {

            case 1:
            {
               if( ++IFcnt[29]%10 )
               {
                  b += (m-e-b-n+l*f+h-d*b-h+b*k)%100;
                  d  = (e*k*g*n+k+d+m+j*f*e+b*j-n*n)%100;
                  n -= (g*k-c-e-h+a-a*m+h+i)%100;
                  n -= (n+f-m-b-d-a+a-f+m-g*g-i+i+b)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  a -= (a+j-a+e)%100;
                  h += (h+h*b+l+a)%100;
                  e -= (j-f-e*l*l+g)%100;
                  n -= (g-k*m+d)%100;
                  k -= (k+b-b-g+a-l*j+g-l-g*j)%100;
               }
               else
               {
                  k -= (j*g*l-m+b-c)%100;
                  d += (h*a+c+m*n)%100;
                  m += (k-f-g-d+m)%100;
                  n  = (g-b+j+i+m-f-d+l*d)%100;
                  j += (k-k)%100;
                  e += (d-c-h*a+l-h-i-i)%100;
               }
               while( ++WHILEcnt[38]%5 )
               {
                  l -= (b+f+k+b+m-m+m)%100;
               }
               do
               {
                  k -= (n-k)%100;
                  k  = (b-a-j-h-k*l-d-b)%100;
               } while( ++DOcnt[39]%5 );
               for( ; ++FORcnt[58]%5 ; )
               {
                  e -= (h+k)%100;
                  f += (f*m+j-e+g*g-n*m-f)%100;
                  h -= (h+c)%100;
                  j -= (a+m+f+e*d)%100;
                  e += (j+n*j-j)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[59]%5 ; )
               {
                  a -= (l-h+l)%100;
                  d -= (k*f+b+d+f*b)%100;
                  c  = (h+k-a-h+l-n+l+m*b+h-i+f-a)%100;
                  m += (j-n-f)%100;
                  m += (d+e+f-n+l*g)%100;
                  l -= (k-m-i+m)%100;
               }
               if( ++IFEcnt[40]%2 )
               {
                  b  = (g-f*d+i-e)%100;
                  h -= (g+f+l+c*d+h-k+m-g-k)%100;
                  g += (b*h+n-i+j-d-c+f+h*f*m+k+c-g)%100;
               }
               else
               {
                  n  = (k-b)%100;
                  i -= (h+f+c+d-l+m-m+i+n-h+j-l*g)%100;
                  a += (m+h+k-b-i-j)%100;
                  m -= (e+i+g+e+g-l+f*d+a-a-k+c)%100;
                  g -= (l-l-e+n+e-e-b+l+g+j+d+c+n+g)%100;
               }
               while( ++WHILEcnt[39]%5 )
               {
                  h -= (m-c+c+h)%100;
                  e += (k*n*m)%100;
                  j += (e+e-i-b*l-l-j-n-g+n-g+h+f)%100;
                  b += (e*m*i-b+d*g+a+a)%100;
                  h += (a-c*k*a+n+b-e-l*h+h+l-j+k)%100;
               }
               do
               {
                  b += (g+i*i-a)%100;
                  h += (g+i+e*m-c+e-d+f*j*g*d)%100;
                  n += (c-g+e+c*h+g*j+m-i-m-g)%100;
                  a -= (k*j+a+f+b+e+i*b-n*k-f)%100;
               } while( ++DOcnt[40]%5 );
            }
            break;

            default:
            {
               l += (f*k-h-l-a+m-b-h)%100;
               a += (d+f*m*g)%100;
               j += (b-m-c-f-i-b+g+c-d*c-k-k-c+e)%100;
               n -= (j-f-k+a*c+i-g*f+i-h)%100;
               a -= (b-m-b-j*n+h-i*m)%100;
               m -= (n-l+l+e+c-c+n+f-g+a)%100;
            }
            }

            a += (e+e-e+a+c+n+h+d-n-n-i)%100;
            a -= (i+j*j*a*e+a+f+c+j-h+f+l)%100;
         }
         h -= (h-a-l*n+e-f+a+a-g+d-i-j*d)%100;
         a += (m+h*g*m*e-d+m)%100;
         i  = (e-e*g-k*m*d-n-k-a)%100;
      } while( ++DOcnt[38]%5 );
      g  = (a-a-i+k+i*g+l+a-l*b)%100;
      f -= (d-d+c*m+k-e+j+m*m)%100;
      j -= (h+g+e*d)%100;
      k += (f+f+n+d+j*l+n+i-e+c+b)%100;
      j -= (f*n-a+i+h-e-a-b-n-b-b-l-g-f)%100;
   }
   c += (k-a+m-b-m-e-a-j-g)%100;
   m += (j*a+c+b+m+j-f*i-j+n-b-e)%100;
   i += (g*f*n-l)%100;
   d += (e-k+c+d*a)%100;
   h -= (f-l+n-g+g)%100;
   i += (m*f-g-k+h)%100;
   d += (n-m+e+l+b+k-g-a+i+k+b+e-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F19(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[31]%10 )
   {
      l -= (e+i-a*f-a*e-n-e*g-b+k+i)%100;
      for( ; ++FORcnt[64]%5 ; )
      {
         
         switch( ++SWcnt[20]%4 )
         {

         case 1:
         {
            if( ++IFEcnt[42]%2 )
            {
               while( ++WHILEcnt[42]%5 )
               {
                  j += (d*f+i-j*m-j*l-g+e-f-n+n*h)%100;
                  c -= (j+a*c-i*e-a*g-h+j-b-k-m-c)%100;
                  l += (m-j*j+d+c-m)%100;
                  f -= (k+b-l*h-d)%100;
                  f -= (m+n*m-f-n-e+g-h+b*j)%100;
               }
               do
               {
                  h  = (g-n)%100;
                  b  = (l-f*c-j)%100;
                  a += (h*n+g*j-f+j-h*f+i-e+g)%100;
                  l += (m+c+k-m*k)%100;
               } while( ++DOcnt[42]%5 );
            }
            else
            {
               while( ++WHILEcnt[41]%5 )
               {
                  l += (l-h-d+a*d*l*e+g-m*d*k)%100;
                  n += (c+c-b-a-g+a-k-c-d-i-n+d+b)%100;
                  f += (i*d*d*e*m-a+b+j-a)%100;
                  b  = (e-c)%100;
                  d += (i*l+b)%100;
               }
               do
               {
                  h -= (i+a-j-a+b-b+e-c+h)%100;
                  c += (g*l)%100;
                  e  = (c*j-b-m+a)%100;
               } while( ++DOcnt[41]%5 );
               for( ; ++FORcnt[61]%5 ; )
               {
                  g -= (b-f+n+k-e-k-n+n-n+g*n)%100;
                  d += (i-a+h*l+j-k+g-d)%100;
                  a -= (k*k-n+h*h-e-f-m-n-m+j-i-f*b)%100;
                  h -= (b+l)%100;
                  n -= (k-e*b*d-l-l-a-d-a)%100;
               }
               if( ++IFcnt[30]%10 )
               {
                  l -= (m+i)%100;
                  h -= (g+f*h-h-m+g+h+c-h-f+k)%100;
                  g += (i+g-j-a+n+i+b-g*h+g-d-e*g+g)%100;
                  c -= (n+m+k+n-b*m*a-k-n+c*d*f-h)%100;
               }
               for( ; ++FORcnt[62]%5 ; )
               {
                  m += (m+n*m-l-d)%100;
                  e += (e-n-a-i+f*c-c-b+g-e*l*i+l-e)%100;
                  c += (n*k-m-l)%100;
                  f += (l-e+d+h*k+l-k-b-l)%100;
                  e += (j+e*a-l+d-j+g-d-e*h-b)%100;
                  b += (g-c+k)%100;
               }
               if( ++IFEcnt[41]%2 )
               {
                  i -= (n*l-d*a+a*a-m*f)%100;
               }
               else
               {
                  b -= (k*l+j+m*n-l-l+m-n+c)%100;
                  b += (i-c)%100;
                  l -= (j+l)%100;
                  j += (h*h*b-h+k-g-h+a-g+m*k)%100;
                  f += (a*j+a+n)%100;
               }
            }
            a -= (m-e*g+m)%100;
            for( ; ++FORcnt[63]%5 ; )
            {
               
               switch( ++SWcnt[21]%3 )
               {

               case 1:
               {
                  j -= (l*m+n+d-e*l*k*c+i-d+m)%100;
                  i += (c*e-i)%100;
                  h += (c*b+m*i-m+b+n-n-e*k*k-n+m)%100;
                  g -= (l+c-n-a+b+j-g-i)%100;
                  f -= (j-a-g+m*j-n-g+c*a+g*m)%100;
               }
               break;

               case 2:
               {
                  c += (n-l+f+f-l-c-n-j)%100;
                  a  = (b*l-e-f+d*l*d-h+m-c+g-f+i)%100;
                  h += (l*e)%100;
               }
               break;

               default:
               {
                  c  = (k*n*i*d+d*a)%100;
                  m  = (h-e*n*e+d*f+b-j*h-j-l-e+h+g)%100;
                  c += (c-k*f+e-c+k-m+n-b*l-l+g)%100;
                  l += (e+k+e*b-j-l+l-k)%100;
                  c -= (n*c-j+d*c)%100;
               }
               }

               l -= (d-h-l+l+e*a*n+i+h-a+n)%100;
               a += (n+f+l+m-m-b-l)%100;
               n -= (h+e+b-d-a)%100;
               m += (l*a-d+k*d-d*l+a-d+f)%100;
               c -= (n+i+a-d*a+l+h+b)%100;
            }
            b -= (b-k*c-i-f+c-j+l-j)%100;
         }
         break;

         case 2:
         {
            d += (h*g+k+k)%100;
            j  = (b*i+n-k-d+f)%100;
            a += (c+k+l+i-h+k*d+j*l-i*f+n+a)%100;
            d += (a-n-j*f+l+g-l-c+i)%100;
         }
         break;

         default:
         {
            h  = (g-d-c+k+c*i*a-i)%100;
            l += (l-i+n+m+f+d*m)%100;
            e -= (n+h*n-f+m+k)%100;
            d += (f-h)%100;
            h -= (d+j+k-i-i-m-k+l)%100;
            e -= (j-k+d-d*n-b+h+n-e-f+g+k-d-f)%100;
         }
         }

         a -= (i+d+n)%100;
         d += (f*h+a*m*k+e+d-b*l-m*d)%100;
         d -= (a-a+a+f+k+l-d+d+k-i-g*a)%100;
         h += (g-i-f-d-a+h+m-g-j)%100;
      }
      l += (j-i-f+n-a)%100;
      i += (d-m)%100;
      c += (j*n-a+a*n+b-h-b+d-c+l)%100;
   }
   f += (a+a)%100;
   e -= (j+e+l-f-l+e-a-e+a+c*a+a)%100;
   i += (k*f+h-a-c)%100;
   l += (k-f*b+d-c+j)%100;
   k -= (m+e-g*i*g-d+h*b-f)%100;
   g -= (c-i+l*i-i-l-e*a)%100;
   a -= (k-j+h*l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F20(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[33]%10 )
   {
      if( ++IFEcnt[44]%2 )
      {
         g += (d+l+g-d-g+d)%100;
         i -= (m-d+j*l+b*d)%100;
         a -= (a+m+h+h-e-m*f*m+g)%100;
      }
      else
      {
         while( ++WHILEcnt[44]%5 )
         {
            do
            {
               for( ; ++FORcnt[65]%5 ; )
               {
                  i += (a+j-m-e*e-i-k+b-b)%100;
                  l += (i+i+d-b*g-a*c*g+m*f*c-f+i)%100;
                  g -= (h-l)%100;
                  e -= (f+f-e*g-b*j-d+h+c-m)%100;
                  b  = (n-h+f+l-h)%100;
               }
               for( ; ++FORcnt[66]%5 ; )
               {
                  i += (a+b-j-n-k-i-e-i-i+i-j-j*c+k)%100;
                  m  = (h*b-g*j-a-m+d-j*m+d*k+e+m)%100;
                  l -= (i-a-g-h+c*d)%100;
               }
               if( ++IFEcnt[43]%2 )
               {
                  c += (d+h)%100;
                  b += (g+n-j*i*f)%100;
                  l += (n*e-l-j)%100;
                  m += (e+l)%100;
               }
               else
               {
                  n += (g+g-k+h+e-m-c+h+d-b-c+e)%100;
                  k += (l*g+d+g*e*c+j+j)%100;
                  d += (j+i)%100;
                  d -= (h+h+k+g-n)%100;
                  g -= (c-a+m+a+d+i+h-k*g)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  e -= (f-f+l+b*n-j-j+k+i-c-m)%100;
                  j += (n-n-k+e)%100;
                  c -= (a-a+b*h+f)%100;
                  l -= (d-n+f*b+l+d-n+j-f*k*l*n*e)%100;
                  d += (l*a*c-l*k)%100;
                  f += (j-n+c)%100;
               }
               do
               {
                  n  = (d+k+l)%100;
                  l -= (a*b+h-l*m*b-d)%100;
                  j += (n*c*g+d-k-g+e-d)%100;
                  h -= (f+k-g-l-m-j+d-a+n-h+j-k-i*m)%100;
                  a -= (a+j*k)%100;
               } while( ++DOcnt[44]%5 );
               if( ++IFcnt[32]%10 )
               {
                  e  = (a*i*l-j*c-d+k-f-i-j)%100;
               }
            } while( ++DOcnt[43]%5 );
            d += (l+k+h*a+c-m*n+k-m-n+b-c)%100;
            for( ; ++FORcnt[67]%5 ; )
            {
               
               switch( ++SWcnt[22]%4 )
               {

               case 1:
               {
                  j -= (n*a-g+h+k-h-h-c+l-b+l-e)%100;
                  i += (m+a*a+i+j-j+n-l-g-j+n+d-e)%100;
                  f += (c*n-d+e*h*n+g*d)%100;
                  i += (m+c+i-l*j*c+c-h-n+m)%100;
                  b += (j-j+a)%100;
               }
               break;

               case 2:
               {
                  f -= (h-e+l-i+i+k+d+g+m)%100;
                  l += (c+n-g*k+m-c+m-b*d-a)%100;
                  j -= (a-n)%100;
                  j += (b+b*g+e+l-j)%100;
               }
               break;

               case 3:
               {
                  h -= (k+c*b-l+g+c+b+j+m-n-k)%100;
                  l += (l+k-n)%100;
                  m -= (e+i+m-d+d-l-k)%100;
                  d += (l-c*n*b-c+c-g*g-j-l-d)%100;
                  i -= (i-m*l)%100;
                  e -= (b+d+e+k)%100;
               }
               break;

               default:
               {
                  k += (m+k-k-d-n+n+f*g-m-e)%100;
                  n  = (f-e-h-a-g+i-h-d+a-j-g*f)%100;
                  i  = (i-i)%100;
                  k += (e+c*f-a+i-j*c)%100;
                  g += (c-k)%100;
               }
               }

               l -= (l-k*b*e)%100;
            }
            l -= (d-c*d-a+j-g-d-d*b)%100;
         }
         d += (b*i+d-a-m+h-i+g*h*d-a)%100;
         h -= (n+l)%100;
         b += (f-m-a-k-c-h-i+f)%100;
         d += (m-a+m-k+l+n+m+k-d-g-e*i)%100;
      }
      g -= (k+e-l*d+n)%100;
      m += (h*c)%100;
      e -= (i*c-j*m-f+a)%100;
      k += (f*j)%100;
   }
   a -= (f-c-g-m-i-j-e-c*f+j*m+l+j+i)%100;
   e += (l-f*g*a*g)%100;
   k -= (k-n-j+e-l-h*b-b+i+f)%100;
   i += (l-n*a-a*m-j*g-a+j+f)%100;
   j += (m*a+n+e-e-b+i+j*g-b+f-f)%100;
   h += (m-l)%100;
   f += (e-f+m+k+b+h-j+i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F21(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[46]%2 )
   {
      a += (c+a+b+i-b+a+i+e+e-m-i+b-a-m)%100;
      k -= (j+d-l+k+a-d)%100;
      a -= (b-c)%100;
      b += (m-c+e*d+j+j+c-j*b-h+m+k-e+e)%100;
   }
   else
   {
      while( ++WHILEcnt[46]%5 )
      {
         do
         {
            for( ; ++FORcnt[69]%5 ; )
            {
               if( ++IFcnt[34]%10 )
               {
                  g += (f-m*m*f*h-i*k-j*a)%100;
                  c += (a*i-l+a*g+c*i+c+g*g*g-l+g+h)%100;
                  a += (a-h*d)%100;
                  g += (f-h-k*n*h-n+f+b+i-f)%100;
                  e -= (b+e)%100;
               }
               for( ; ++FORcnt[68]%5 ; )
               {
                  k -= (m+h+m-g+c-d-n+i-c-b+g+m)%100;
                  l -= (c+i+j+j+n+l*e-l-k-m-l)%100;
                  c -= (k*i+l)%100;
                  l += (j+d-l)%100;
               }
               if( ++IFEcnt[45]%2 )
               {
                  d -= (e-m+c+c-m-g+a*d-h+b+f)%100;
                  f += (k-a-j*a*d-c*f+k)%100;
                  k -= (l+k-h-n+f*d+b+d*e-g+i-a*g)%100;
                  n -= (a*m+i-g*c-l-g)%100;
                  e -= (h+b+d+n)%100;
               }
               else
               {
                  m += (f-j+k-i-i-h*k*g+k-a)%100;
                  f += (k-a-b+i-g+a*e*c-f+k-j-e+f)%100;
                  a -= (a+m)%100;
                  n += (g+c-n-f+a-f+g*l+m-m+a+a-j)%100;
                  m  = (f*g+j+l+e*d-e-f+l-h-g-h)%100;
                  m += (j+h*l-i)%100;
               }
               while( ++WHILEcnt[45]%5 )
               {
                  f -= (m-j+l+f+f-k+j+k+h+i+b)%100;
                  b  = (j*l+e+e)%100;
                  h += (i+k-g*k-b-g-e+m+f+h-k)%100;
               }
               do
               {
                  a -= (a+k-g+h+h-n*l*b+a+h-k+l)%100;
                  h -= (h+h-e*i-m)%100;
                  d += (k-k-c+d+a-d*k+k*f*j*e-h+f+b)%100;
                  f  = (n*h-n-l+k-a-c+g-j+n+i+a)%100;
                  a += (d+j)%100;
               } while( ++DOcnt[46]%5 );
            }
            j -= (j-m*b-m+f-i-l-h+e-i)%100;
            for( ; ++FORcnt[70]%5 ; )
            {
               
               switch( ++SWcnt[23]%4 )
               {

               case 1:
               {
                  m  = (a-i+f*j+k+n*j+i+g+b)%100;
                  n += (k-g+c-b*k-d)%100;
                  h += (d-h-h*c-e-h*f-a+j+g+e)%100;
                  l -= (f+j*g-l+k-d+f*g+d+n*k)%100;
                  m -= (h+a)%100;
                  d += (h-n+d+d+m-c+e+c+h-j+m-n)%100;
               }
               break;

               case 2:
               {
                  e -= (d*f-e)%100;
                  i -= (n-e-l+d+e-a-i-e-d+g+j)%100;
                  n += (i-i-d+e-g-a-i)%100;
                  f -= (b-g*f+n-h*e*f-b+j-e)%100;
                  m -= (d-d-b)%100;
               }
               break;

               case 3:
               {
                  g += (d*d-n-k-h+n+l-g+b-a-m)%100;
               }
               break;

               default:
               {
                  k  = (n-n-e-a+m-f-j-f+i*l)%100;
                  c += (m*n)%100;
               }
               }

               if( ++IFcnt[35]%10 )
               {
                  e += (j-k*c+m+f+l*i-g)%100;
                  e -= (d*e)%100;
                  d -= (i+m-i*c-m)%100;
                  f -= (j-g-c+b+k+d+a+j+n*e+j+f-n*c)%100;
                  c -= (e-m*m-j-k*f-e+a-m-g*a-n)%100;
               }
               k -= (k-a+e+h+d-k+k-c+n+l)%100;
               c += (a+m-j*c+m-e+n+c*i*c-n)%100;
            }
            i -= (a*h)%100;
            a -= (i-h+l+c-d+i+h)%100;
            d += (f*i-g+f+a)%100;
         } while( ++DOcnt[45]%5 );
         m += (d+e-e+b+i+f+b-n)%100;
         g -= (d*h+k+c+m+i-f+k)%100;
         d -= (m-i-e-e-g*g+c-i+h)%100;
      }
      f += (l-e*f-b)%100;
      i += (b*j-l+l-j+d-k+f+j-m)%100;
      e += (l+n-j+j-h+i*a-h-a+b*f*g)%100;
      d -= (k+j*g*f-i*g+d+d)%100;
   }
   g += (k-i-k)%100;
   g -= (b*c*i+b*e+h*b+n-f+f*l*a)%100;
   i += (k*k+i)%100;
   m += (j+e-l-e-a+a)%100;
   n += (l*i)%100;
   k -= (g-e-k)%100;
   f += (e-d-f+c-a-b-j-k-b+j-n+n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F22(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[48]%2 )
   {
      g += (h-g*e+g+g*n-e*i+d*n+b)%100;
      e -= (c+c-f+c+b-e*m-g+g+n-c-g*b)%100;
      k += (c-m*k*d*a-m+c-b)%100;
      l  = (h-j-n+b-d+h+f)%100;
      f += (l+d)%100;
   }
   else
   {
      while( ++WHILEcnt[48]%5 )
      {
         do
         {
            for( ; ++FORcnt[72]%5 ; )
            {
               for( ; ++FORcnt[71]%5 ; )
               {
                  m += (h-k*j-a-g*l*h)%100;
                  l -= (m-n-c+e)%100;
                  d -= (h+l+f*a*h*i*d+n-g-c*j-c)%100;
                  h += (i+e*f+a-h)%100;
               }
               if( ++IFEcnt[47]%2 )
               {
                  c += (e*j+i*b+d*d+a-d*e-l*b*n*k)%100;
                  f += (n-k-a-n+n+k+j)%100;
                  e -= (c-i+b+f-g-i-a*d)%100;
                  h  = (k-m-d*b-a+j)%100;
                  i  = (h+k+f*a-d*n-g-i-m-b)%100;
               }
               else
               {
                  j -= (a*j+h-n+c+b*j-d+j-f+m*n)%100;
                  b -= (c+j-b-e+i-h-i-l-e-n-c*g*i*c)%100;
                  h += (f*c-g-m+f-h*h+i-k)%100;
                  h -= (l-k+j*i*k*a)%100;
                  b += (g+k+m-d-c)%100;
                  e -= (f-j*c*e*m+i*a*k-n-n+c-m+b)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  b += (h+k*j+i*a+f+d*c+n)%100;
                  d -= (n+f+k-b*b+i-c+j*c)%100;
                  l += (l-k*n-e+l+l*g)%100;
                  k -= (i-m-g+j+d*a+m-k*i+d-a-d*a)%100;
                  c -= (c*n*h+n-g+g+a-b-l+c+j-g*c*e)%100;
               }
               do
               {
                  n  = (j-a-l*n)%100;
                  l -= (e-h-j-b-c)%100;
                  g += (k+k)%100;
                  n -= (h+m+h+j-k*k-a*b-b-c+l*l+j*e)%100;
               } while( ++DOcnt[48]%5 );
               if( ++IFcnt[36]%10 )
               {
                  i -= (i+a*e*c+f-g*k*c*b)%100;
                  g -= (n-b)%100;
                  f -= (f-k-n*a-c-b+b)%100;
                  e  = (b*i-h-d+j*f+h-a-j-k*i-k*b)%100;
                  i += (c-k+d*l-n-k*b-e)%100;
                  m += (c*h*g+f+n+h-j)%100;
               }
            }
            b -= (f-j-k)%100;
            for( ; ++FORcnt[73]%5 ; )
            {
               
               switch( ++SWcnt[24]%4 )
               {

               case 1:
               {
                  h -= (h-g)%100;
                  b += (l-d-m+g+n+d+f*k-i+a)%100;
                  i += (c*l+n*g+i+l-k+b)%100;
               }
               break;

               case 2:
               {
                  d += (j-g*l)%100;
                  e -= (j+l-h+e-f)%100;
                  g += (n+a-g-k*c+n-l-h-g+k*g)%100;
                  e += (g-c-l+h+h+f)%100;
                  b  = (f+e+n-b*c+k+n*i)%100;
               }
               break;

               case 3:
               {
                  b -= (i-d-g*j+b*k+n+i-b*l-a)%100;
                  c -= (g-e-e+f)%100;
                  d -= (e*g+f+c)%100;
                  e -= (k-m-m+i+a-k-g+g-h)%100;
               }
               break;

               default:
               {
                  a -= (n*k*n-l+i+d*i+n+a-h-a-k+l+l)%100;
                  d -= (c-k+f+c-b-l*m+c)%100;
                  l += (f*l+h+i+b-a+m-g*k*j-a*h+k)%100;
                  c += (l+h*g-c-d-h+g*e+c)%100;
                  d += (a+b*g)%100;
                  l += (m*k-n-m-h*e+b-k*a+i-k+n-h-i)%100;
               }
               }

               h += (d+i+b-j-l*k*h-f+m)%100;
               m -= (l-e+l-i+b+g)%100;
               j -= (d-m-b-f-n-l+e+m*e-c*d+d)%100;
               f -= (e+c)%100;
            }
         } while( ++DOcnt[47]%5 );
         j += (a*k*b+d-h-e-k+b+j+l)%100;
         c += (l+e)%100;
         g += (b*g*b-k-k+f-g+d)%100;
         g += (k+l-e-i-k+d+d+g*d-a)%100;
      }
      m += (i+m+g+c+g+h)%100;
      e += (h*m-g*e-g*g)%100;
      b += (k+n-g-d)%100;
      a -= (e-d+c+k*m-e+l-e*g-b-e+d+e)%100;
      e += (i+b-k+d-f+e-a)%100;
   }
   f -= (a-n+k*g+n-f*c+c+e*j*l)%100;
   d -= (h*f*c-k+f-k+a-g-l)%100;
   m -= (c-a)%100;
   d  = (f*h+h*i)%100;
   i -= (c+n-k-b-n-f-m-k)%100;
   j -= (m-m-l-h-m*g*i-b*f+i-j+c-c)%100;
   f += (j*n+d+l+f+n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F23(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[51]%2 )
   {
      k += (n-i+a-d+i-m-h)%100;
      h -= (i+a-k-m-k+g)%100;
      c += (n+j-g+f+k-b-k-j*n*n)%100;
      d += (e*a-e*e*g+e+b)%100;
   }
   else
   {
      while( ++WHILEcnt[50]%5 )
      {
         do
         {
            for( ; ++FORcnt[75]%5 ; )
            {
               if( ++IFcnt[37]%10 )
               {
                  d -= (m-i-j-f)%100;
                  a -= (l*n+m*n+i+b+l-j-g-i+m*c-e-n)%100;
                  k -= (i*i+l+b)%100;
                  b  = (c-b+n*m+k-n-m-i-i+j)%100;
                  n += (m*i-c+h-j+k*g*i-d*i-e+l+g+m)%100;
                  g += (g-l-j+m-d-m+c*i-e-a-g-c)%100;
               }
               for( ; ++FORcnt[74]%5 ; )
               {
                  k += (k+c*n)%100;
                  m += (i-d-j-m-m+e*g+l-g+i)%100;
                  c += (b*l)%100;
                  d -= (e-i-i-m+h+f)%100;
                  k  = (g+e+e*a-l+h-b-j)%100;
               }
               if( ++IFEcnt[49]%2 )
               {
                  l -= (e+h*j-h-h-k+j-k-g-g+a*h+l)%100;
                  c -= (b+g-d+e+b-l-a+h*n-b)%100;
                  j -= (k+l)%100;
                  i  = (f+g)%100;
                  c -= (c+m+d+h)%100;
               }
               else
               {
                  i -= (k+h)%100;
                  d -= (d+c-e-l+f-k+l*d-l*c-i*h*e+e)%100;
                  a += (a*i+k-g+k*i)%100;
               }
               while( ++WHILEcnt[49]%5 )
               {
                  g -= (k+h)%100;
                  d += (b*j*k-l*l*g-d*l-k*i-c*l)%100;
                  g -= (e-b+a*j-i+d*e+c-e)%100;
                  m -= (a+l-n*a+g-e*n)%100;
               }
            }
            do
            {
               l -= (l+n-d+n-j*d-f)%100;
               for( ; ++FORcnt[76]%5 ; )
               {
                  b -= (a*m-d-n-n)%100;
                  h -= (k+m-c-d)%100;
                  l += (g-m-c)%100;
                  b += (g-h+b-n-l*d-d+j*g+l)%100;
                  b  = (l*i*f-g-g-c-f-l-l+l*h*b-f)%100;
               }
               
               switch( ++SWcnt[25]%3 )
               {

               case 1:
               {
                  i -= (d+j+f-m+l+j-n+d-j-n)%100;
                  g -= (i-d-m+j-g)%100;
                  h += (h*k+j-g+m*l*k-a*k*g-i+j*j+g)%100;
                  m += (j+n*c+e+k)%100;
                  g -= (i+i)%100;
               }
               break;

               case 2:
               {
                  i -= (g+i)%100;
                  e += (e+i+h+e+d-m+a+k+k-c)%100;
                  h += (f*b*g*e*k-g*a+a*n+a-d+j-g)%100;
                  m += (k+k*d+i+b+m*d+h-k*c+g-b*f)%100;
               }
               break;

               default:
               {
                  e += (i-b-l+g+g-e)%100;
                  j -= (f-l+k+c+c)%100;
                  k -= (g*g+e)%100;
                  i -= (k*h+h+m-l-d)%100;
                  k  = (c-h*f+n-d+m+g*c-k)%100;
                  i -= (d-a-e-g+a+h)%100;
               }
               }

               if( ++IFcnt[38]%10 )
               {
                  n += (j*c-m)%100;
                  j -= (c+k+j-m+k+f-h)%100;
                  j  = (e-a-j-g-e-d+i-a*n+j)%100;
                  e -= (d+a+h*c+m*n*l*l-b+f*d+h-i)%100;
                  a += (i-a)%100;
               }
               if( ++IFEcnt[50]%2 )
               {
                  f += (a-g+j+l-n+j+h-m*a+n*e*g-d)%100;
                  n += (i*f)%100;
                  m += (h-f+j*b+k*a-g+j+c-n-m-e-c)%100;
                  f += (d+d-l-b-i-a*b+g+a+j)%100;
                  a += (a+i*i*m-c)%100;
               }
               else
               {
                  h -= (f+b-h+j)%100;
                  c -= (e-d+b-e+b)%100;
                  j -= (e+f+l*l*d-n+e)%100;
               }
               j += (f*b*g+f-b+l+k-g*d+h+m-l)%100;
            } while( ++DOcnt[50]%5 );
            c -= (n-e+e+h-e-g-f*n-m-h+f-j)%100;
            c -= (f-h+c*g+f+l-a-e+l)%100;
            k += (i-c+g-f-a)%100;
         } while( ++DOcnt[49]%5 );
         b += (e-m-i*d-c-f+d*m-d-h-j-g-h+i)%100;
      }
   }
   i += (h-k+l+l-f+l*b+l*f*k+a+e-f)%100;
   g += (h-k-k+a-l-a-g-n+f*c)%100;
   h -= (k+i*b-j-m-a+k+a*l)%100;
   i += (i+h+e)%100;
   l += (a-i+d+j-d-k+m-f+n*m)%100;
   c += (k+a*h-m-k-e+e-m)%100;
   m -= (f+j+k*j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F24(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[53]%5 )
   {
      do
      {
         for( ; ++FORcnt[78]%5 ; )
         {
            for( ; ++FORcnt[77]%5 ; )
            {
               if( ++IFEcnt[52]%2 )
               {
                  g += (m-e+h+k-b+k-m-f+f-c+i+a*c)%100;
                  b -= (l*a)%100;
                  c -= (n-c)%100;
                  g += (g+f-l+g+i*k+a-e-j-b+a)%100;
               }
               else
               {
                  d += (k+f-l+i-a)%100;
                  j += (e+j+i+j+n+d+n+g)%100;
                  e -= (f-g-c-c*g*e+d-f-m+b+i)%100;
                  i += (b+c+m)%100;
                  e += (n+i-g)%100;
               }
               while( ++WHILEcnt[51]%5 )
               {
                  n += (h*c+g+m+i+i)%100;
                  b -= (i*a-n+g-a-l+e+h-i)%100;
                  j -= (e*g+b-d*k+e+h+i+j)%100;
                  a -= (f+a+a+f*j+l*f)%100;
                  c -= (e*l)%100;
                  k += (c+i*c-g)%100;
               }
            }
         }
         do
         {
            if( ++IFcnt[39]%10 )
            {
               c -= (i-l+n-c-m-d)%100;
               for( ; ++FORcnt[79]%5 ; )
               {
                  b += (c-a+e-b*l+m+j+n-b+n-e-c)%100;
                  b -= (j-k*h-c+e-k*h+d)%100;
                  j += (b*j+m*j*i+k-m+m+m+j*k-a)%100;
                  c += (l-k+l-d+g*d+j-n+a-b)%100;
                  a += (k-g+l-h*b-g+j+e)%100;
               }
               
               switch( ++SWcnt[26]%3 )
               {

               case 1:
               {
                  f += (f+c+c+h-m-n*n+m+n)%100;
                  g  = (g+l-j-c-k*m+a+a*h-k)%100;
                  a -= (k-h)%100;
                  d -= (b+b-i-j-b-i-b+c+f)%100;
               }
               break;

               case 2:
               {
                  j += (e-d-d-j*b-h-h+k-g*l+m+h+i-j)%100;
                  l += (f+i-m)%100;
                  l -= (d*b-d+e-a)%100;
                  f += (a+k-e*h)%100;
                  n += (j+a*j+j-b)%100;
                  i -= (i-h)%100;
               }
               break;

               default:
               {
                  j -= (b+a*j)%100;
                  d -= (k+e+b*i-c+f*l+b)%100;
                  l -= (e+h-m+j*j*j*d*n)%100;
                  b -= (j-e*n-i-l)%100;
                  i -= (m+d*j+k+c-l+g+h+g+d)%100;
               }
               }

            }
            if( ++IFEcnt[53]%2 )
            {
               a += (h+d-h+a+h+d*h-h+n+f-l+l+d-d)%100;
               m -= (d+b)%100;
               k -= (b*b+j*f-a-k+n*d)%100;
            }
            else
            {
               while( ++WHILEcnt[52]%5 )
               {
                  h -= (g+c+g-h+b*c*j*l-c-i-k*b-g)%100;
                  i -= (j-c)%100;
                  e += (e+m)%100;
                  k  = (m+n+e-f*a-a)%100;
               }
               do
               {
                  m -= (i+n)%100;
                  g -= (n-j)%100;
                  e  = (a-a+l+j-a+i-b-b+c)%100;
                  f -= (l+k+a+d*i+j-k+h*c-l)%100;
                  l -= (l+g-n-n+h*a+h-n-a-e)%100;
                  j -= (g*h)%100;
               } while( ++DOcnt[53]%5 );
               for( ; ++FORcnt[80]%5 ; )
               {
                  e -= (l-m-a*c*f*e+f-i)%100;
                  a += (k-f*g-e+e+h+m-j-b)%100;
                  n += (l*k+e+f)%100;
                  n += (k-n)%100;
                  m -= (b-c)%100;
               }
               f += (g-e+i-j+h-k+l+h-n)%100;
               a -= (g+k-k+k-a+g-g-i)%100;
            }
            b -= (m+b-l*e-j+a+h-k)%100;
            l -= (a-k+a-k+n+g+l+k+e)%100;
            i += (h+d+g+c-m+m-i+b)%100;
         } while( ++DOcnt[52]%5 );
         e += (i+i+f-l*n)%100;
         c -= (a+e+n*n)%100;
         a -= (c-h-h-b+d*g)%100;
      } while( ++DOcnt[51]%5 );
      l -= (g*n+k*k-f-i+g+g+m-i-d-e)%100;
      j  = (n+d*f-i+a-g-c*e-k+d)%100;
      f += (h-f-l*l-e-k-c*k-k)%100;
      f += (c+e-g+k+m-i-g-j+i+k-e+l+a)%100;
      f -= (i+l)%100;
   }
   g -= (d+h+g*b-i+i-l+e*k-k)%100;
   m += (b-e)%100;
   a += (a+b-c*a-i+m+h)%100;
   b -= (j+b)%100;
   e += (e+f+c-e-m*b+e+k+d-b+b*e)%100;
   a += (l*d+n*i*d+l+l-a*c+g-h)%100;
   k -= (f+k*i-f*d+j-c+c+a+h-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F25(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[41]%10 )
   {
      for( ; ++FORcnt[84]%5 ; )
      {
         if( ++IFEcnt[55]%2 )
         {
            l += (c*k-k)%100;
            n -= (j+j-g-n)%100;
            f -= (l-m+b+h+d+n+e-a-n-n+n+e)%100;
            d += (b*k+a-d-j+l+e-a+j+m*j-k)%100;
            j += (c-b+m+h+n*l-l*f*g-i-k-c-a-c)%100;
            j  = (c+f+j*a*l+c-d+d-k-e*m)%100;
         }
         else
         {
            while( ++WHILEcnt[54]%5 )
            {
               do
               {
                  m += (f-f*j+l-j-i+l-h-a*e-f)%100;
               } while( ++DOcnt[54]%5 );
               i += (f*j*c+b*k-k+a+h+f+c)%100;
               for( ; ++FORcnt[81]%5 ; )
               {
                  n -= (h-d)%100;
                  e -= (e-n+c*m*l+k-d-g-m)%100;
               }
               
               switch( ++SWcnt[27]%4 )
               {

               case 1:
               {
                  f -= (l*h)%100;
                  n += (l-d+b+j-g*b+m*n*l+c+h)%100;
                  a += (c-f-g+e-h+m+n*l+e+n+h+a-h-k)%100;
                  i += (c-k*c-c-g*a-a+b)%100;
                  e  = (n-b*i+e*i-c+l+d+e+a-g+k-j)%100;
               }
               break;

               case 2:
               {
                  l += (e+d*h-b+h-f-a-m-j-m*l*e)%100;
                  k += (b-h+l-a-e)%100;
                  h += (g+a*m+e*a-d-a+n*m*c+h-m*g)%100;
                  g -= (d+i*e-f-i+d)%100;
               }
               break;

               case 3:
               {
                  c  = (f*l-e-l-k+d-c-h+d+m)%100;
                  g += (c*n+k-h-a+m-d-m+k-e-l-g)%100;
                  i -= (e-i*b-e+k+b+k-j)%100;
                  j -= (k-e+e-d+a-h*n-j-m-d-i+j)%100;
                  l += (n*m+d-h-k-a-f+m-h+a)%100;
                  d -= (d+n-g+b+l*k*j-d-j+l+c+n+b)%100;
               }
               break;

               default:
               {
                  e += (c-h+m+a+m-k+i+f-b*f+d-b*g+h)%100;
                  j -= (g+h*g*k-i-k-l*b+n+n-l-m*e)%100;
                  h -= (c*m+g+j)%100;
                  h -= (n*l+n+a+g*k+f-i-n-j+n*d+g)%100;
                  i += (c+f*b-e+a)%100;
               }
               }

               if( ++IFcnt[40]%10 )
               {
                  i -= (l-e-l+e-h)%100;
                  n -= (b+i*j+h+l-c+e-j-k+j+m)%100;
                  b += (h+l*a+e)%100;
               }
            }
            if( ++IFEcnt[54]%2 )
            {
               j -= (d-c+i-n-j*n+g)%100;
               e  = (c+m)%100;
               g -= (h+m-m+h+e*k+h-g+d)%100;
               c -= (j+h*d-i)%100;
            }
            else
            {
               while( ++WHILEcnt[55]%5 )
               {
                  h -= (b-a*h-m-n)%100;
                  g += (h-c-b-c-a+h-c-m+e)%100;
                  h -= (l+e-b+a+g*n+m-d+f)%100;
                  j  = (d*j+l+e-l-g-i+m)%100;
               }
               do
               {
                  i += (c+a+e-a)%100;
                  f -= (a+a)%100;
                  e += (k+n-a+j-h-k-n)%100;
                  b -= (h*j+h*l+i)%100;
                  g += (h+d+i+m*a+l-n-e-m+h*a+j+l)%100;
                  a  = (b-d-m+k-k)%100;
               } while( ++DOcnt[55]%5 );
               for( ; ++FORcnt[82]%5 ; )
               {
                  g += (a+b*b+i-d-b-c)%100;
                  d += (d*g*f*j+h-h+i-i+h-i*e)%100;
                  m += (k*m-i-f-b-a+i)%100;
                  c += (a+n-l+i+l*f-b*a+a)%100;
                  i  = (k-k*a+m+e-h-k+b+n-j)%100;
               }
               for( ; ++FORcnt[83]%5 ; )
               {
                  a -= (j+g)%100;
                  j -= (d-k-b-a-f-i+k*c)%100;
                  d -= (b+j)%100;
                  f -= (l+e)%100;
                  c -= (d-g+n*d*m+a+e+k-e-a-d+n+n-j)%100;
               }
               b -= (f+l-e+a-k-j+f+g-m+l+j-d+e+d)%100;
            }
            d -= (i-a*b-d+a*d+k*j-m)%100;
            g -= (n+g+b+i*n+b-m-d-k+g-k-c)%100;
            a += (e-m-m+j)%100;
            d += (e+h-j-h-f+l-m+h*k+d+i-m-k*c)%100;
         }
         n -= (n*c+l-h-b)%100;
         m += (h+i+h-g)%100;
         m += (c*h+d*h-i*l+e+h-f+m-c+g+j-i)%100;
      }
      n += (l+e+c+n-j-l-k+l*e-g-n+a+n*m)%100;
      j += (l+a+a+b+h+g-g+h*k-b+k+b*b+d)%100;
      j += (l+j+e-n+a+c*a+k+k*c+m-b)%100;
      k -= (b-l-e-i)%100;
   }
   n -= (g*d)%100;
   f += (c+c)%100;
   h  = (a-f)%100;
   b -= (m-f+h-b)%100;
   a -= (d+j+l+e*i-j+k*a-k+m*h)%100;
   j += (l+n-l+l+k+h)%100;
   n += (i+f-i*i-e+f-n+j+c*j-l-b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F26(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[58]%2 )
   {
      l += (f-a+j-n+d-d+n*a+f)%100;
      b += (l+n-n*g-m-g+c-k-l+d-m)%100;
      l -= (b+e-g-n)%100;
      h += (e-g*e-j*g)%100;
      m -= (g*b-j+c+h)%100;
   }
   else
   {
      while( ++WHILEcnt[57]%5 )
      {
         do
         {
            if( ++IFcnt[42]%10 )
            {
               e -= (c-e+j+h)%100;
               for( ; ++FORcnt[85]%5 ; )
               {
                  e += (k+l+l+a*g-h-n+f-h-c)%100;
                  h += (l*g-e+m*e*m-l*f-i-b-d+e+b)%100;
                  i += (h+j+b-k-m+b*g+j-i-b-e)%100;
                  i -= (d-l-n-i+g+a-f)%100;
                  h += (k*m-k+f+j+i*a+g+g-j*g-k)%100;
                  g += (a-e+a-j+a+k-h)%100;
               }
               
               switch( ++SWcnt[28]%3 )
               {

               case 1:
               {
                  i -= (n+j*k+f-j-j+d-j*d*j+e-l-f)%100;
                  e -= (l-d*c+c-b*g)%100;
                  c  = (h-l*b-n-g)%100;
                  h += (h-e*h+g)%100;
                  b -= (g-h-i-k-n-d*j-f*h)%100;
               }
               break;

               case 2:
               {
                  l  = (i+i-m-k-d+e-k+c)%100;
               }
               break;

               default:
               {
                  f += (n+e-d-f-j)%100;
                  i += (l-f+k-m-f+e-l+l*e-a)%100;
               }
               }

               if( ++IFEcnt[56]%2 )
               {
                  g += (h-e)%100;
                  g += (c-i-n*j*f-n+i*l-d-m+n)%100;
                  c -= (f+i-f*d*h*k*l+e+a*f+j+e)%100;
                  c  = (c*i+n-h+f-d-b+j-d)%100;
               }
               else
               {
                  l -= (d-e-n+g)%100;
                  n -= (m-f-c+f*b-f*g*b*m-d-f+i-n)%100;
                  b -= (l+i-g-b-n*n+n-f)%100;
                  n += (i*g-k-m+f+l-j)%100;
                  h  = (d-d-m*h-d-m*l+g+h-b)%100;
               }
            }
            while( ++WHILEcnt[56]%5 )
            {
               do
               {
                  i -= (a-b+l*g+m)%100;
                  b += (a-m-j-b-a*j+c*i-k)%100;
                  h -= (i-n*m*l*m)%100;
                  i += (l-k+m-g+f+j+m-a)%100;
                  k -= (b+j+m+a-f+i-d+d+j+d-e-f*n-c)%100;
               } while( ++DOcnt[57]%5 );
               for( ; ++FORcnt[86]%5 ; )
               {
                  i -= (c+c-c+k-j)%100;
                  i -= (j*i-j*j-b-m+b+c*f+i-a-l-k)%100;
                  a += (m+h+k+h+a)%100;
               }
               if( ++IFcnt[43]%10 )
               {
                  e -= (l+c+b-e-e+g-d-i)%100;
                  h  = (c-n-e+n-g+e-c+b-d)%100;
                  a -= (k-f+f+j-j+b+h*b+c-i-c+n+b)%100;
                  f += (h*b-a)%100;
                  f -= (f*n+k+a*i-l*a-f-i)%100;
               }
               for( ; ++FORcnt[87]%5 ; )
               {
                  m -= (h+m+g-l-e-e+l+b+c-a-l)%100;
                  b -= (b+d*b+l-m+m*b+j+j-a-n)%100;
                  g -= (g-l-m*a-b-l-b+k+b+g*n+b-c-m)%100;
                  e += (b-a)%100;
               }
               if( ++IFEcnt[57]%2 )
               {
                  l -= (b+d-d-b+a-d+e-i*m+d+g+h+b-d)%100;
                  h -= (l*m+n+d*b-i)%100;
                  d += (m+m+i+k+b+f-c)%100;
                  m += (f+l*e-i*n-a+h+i-m-n+h+m)%100;
                  k += (h*b+f-a-k-e+j*h+j-h-g*l)%100;
               }
               else
               {
                  g -= (m+d)%100;
                  b += (f+k+m-c+e+n*f-b-c*e+i-a+d*m)%100;
                  c += (g-a)%100;
                  b -= (l+e-n+n-k+l)%100;
                  g  = (m*h-f*d+d*i+m-j-d-g+k+d+f+j)%100;
                  e  = (c-k*n+j+g+d-m+c+h+g*m-b-m)%100;
               }
               m += (k-a-d*n+d+h+h+c)%100;
            }
            a  = (j*m-b*c-e-e+f+a-n-m+g*h)%100;
            b += (e+e)%100;
            g += (h+g+i*j-j)%100;
         } while( ++DOcnt[56]%5 );
         h  = (e*a+f+j+d)%100;
         m += (j-b-d-j*a-c+a-b-f)%100;
      }
      n -= (n*e-g)%100;
      e -= (f+m+n-i+b*k*g-m-e-d-i)%100;
      g -= (m-n-j-f-h)%100;
      g += (i+f*i-e-g-b+l)%100;
   }
   h -= (g*a+l*b+l)%100;
   m -= (l-j+k-c+d-b-j+c-g+n*n+i-b+g)%100;
   l += (h*f-n+i)%100;
   g += (k*d-e+b-g+j*k+g-h)%100;
   j += (c-a+c+l+j)%100;
   i += (b+f-j+m-b*m*i-d+n)%100;
   l -= (j-k-b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F27(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[60]%5 )
   {
      do
      {
         m  = (h*f-e-f*a+f*f+h+h)%100;
         for( ; ++FORcnt[90]%5 ; )
         {
            
            switch( ++SWcnt[29]%3 )
            {

            case 1:
            {
               if( ++IFcnt[44]%10 )
               {
                  h -= (d+n-d)%100;
                  a += (d*n+b+k)%100;
                  a += (h+b-g*l+a-f+c+c+d+b-k*d+m+i)%100;
                  k += (j+m-n-l*b*i+d)%100;
                  i += (m+c)%100;
               }
               if( ++IFEcnt[59]%2 )
               {
                  a += (n-c*j-b*h+c+b)%100;
                  h -= (j+a-b)%100;
                  a += (e+k-l+f+c+e+i-j+f+n*f+c)%100;
                  h += (c-f)%100;
                  i += (k+c*e*n*e-c-g-e*d*l-h*a+a)%100;
                  d -= (l*d-l+e*f*j)%100;
               }
               else
               {
                  g += (l-b+k*a*h+l+i+b)%100;
                  a += (e+d+b-c+c+i-i+k+f+k+d)%100;
                  d += (c+b)%100;
                  j  = (m+i+j+h+h)%100;
               }
               while( ++WHILEcnt[58]%5 )
               {
                  g -= (j+d-a-b+a*k*i)%100;
                  e -= (i*g+l-h+n+i+l-n*h+i)%100;
                  d -= (e-a)%100;
                  f += (f*g+f-l*l+b*l-k*k-b-e-j-h)%100;
                  b -= (d+j+i-g*e+l*n-j-a-a-b+k*m)%100;
               }
            }
            break;

            case 2:
            {
               do
               {
                  n -= (k*d)%100;
                  c += (i*k)%100;
               } while( ++DOcnt[59]%5 );
            }
            break;

            default:
            {
               for( ; ++FORcnt[88]%5 ; )
               {
                  g += (i-b)%100;
                  n -= (d-h)%100;
                  f += (i+h*e+j-d-i)%100;
                  g  = (b-f+e+l-h+i+l-l+b+a-e+m*e+d)%100;
               }
               for( ; ++FORcnt[89]%5 ; )
               {
                  m += (l+b-h*l-f+k+a-e-c-g)%100;
                  j += (g+b-k+e-m*e+d-b*c+b-i-h-e)%100;
                  f += (d+i-g+k-g+n+n*e*n+e-j+i-k)%100;
                  k -= (i-d+b)%100;
                  f -= (l+c+a+n)%100;
                  i -= (d-e)%100;
               }
               if( ++IFEcnt[60]%2 )
               {
                  l  = (j*h-g*d-h+h+m)%100;
                  m += (n-g)%100;
                  d  = (c*b)%100;
               }
               else
               {
                  m += (c*d*e*g+e+c)%100;
                  l -= (f-a-n+h+b-l)%100;
                  k += (m-g-l-d*a-f-a+h+n)%100;
                  g  = (d-m-g+b-l+a+a+m-m)%100;
                  h  = (a-f-i-k)%100;
               }
               while( ++WHILEcnt[59]%5 )
               {
                  l -= (e*a-f+g+i-h-n)%100;
                  k -= (g+j-k+i-d-b*f*f-a+b+h-h+k-j)%100;
                  g += (i-g-m+f-j*b*c-f+b*m*b+f)%100;
                  k -= (l+a*m*c-e+c)%100;
                  l += (l-k*n+g-c+k+d*m-a+g-j*k-i-a)%100;
               }
               do
               {
                  m -= (l+k+i*n)%100;
                  k -= (g-h+n+f*i+c+n+b+c*i-e+g+a)%100;
                  a  = (c*h+n+i+h+m-h+g)%100;
                  i += (g+k*j-c*h+g-c+b-i*a+i)%100;
               } while( ++DOcnt[60]%5 );
            }
            }

            i -= (l-m+n-i-b)%100;
            m -= (k*d+c+n*c*g-c*f*c*a*h-d-f+m)%100;
            c  = (b+i+e-j)%100;
            a += (a-e-c+h+m-g+g-a)%100;
         }
         h -= (f+d*a-j-d-n*a+n-m-c*m+b+a-j)%100;
         n -= (l-a+k+c*e+m+m)%100;
         n += (c+i)%100;
         g  = (l-j-h-k*d+l+m+k+j*i-e)%100;
      } while( ++DOcnt[58]%5 );
      m += (e-l-d-h-c+l-n-b-h+m)%100;
      j -= (m-e*h+g+n*g*e-d-k+b-j+j+j*g)%100;
      c -= (m+n+j*b)%100;
   }
   n += (g+j+i+b+a-h)%100;
   e  = (k+a*n+d+c*f-d*b+n*b+n)%100;
   f -= (f-e*a-c-k-e-f-e-b+m)%100;
   k -= (c+h-g+g+b-n+a*d+d*k+f)%100;
   i += (d*a*j+l+l*d-n-n-g-k+f+b+a)%100;
   h -= (n*m*b-i-m-k*h+e+k+n+n-i+b-d)%100;
   i += (d+c+f+b-d+g-k+e-j*d-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F28(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[46]%10 )
   {
      n += (d-k)%100;
      for( ; ++FORcnt[94]%5 ; )
      {
         
         switch( ++SWcnt[30]%3 )
         {

         case 1:
         {
            if( ++IFEcnt[62]%2 )
            {
               for( ; ++FORcnt[92]%5 ; )
               {
                  k -= (a-d+g)%100;
                  l += (k+f*j-l-c*e+h+j)%100;
                  a += (l*h-g-a-g-b+f)%100;
                  e += (i-i-n+j-d+h-e-k*i+i*m+c)%100;
                  i += (n*d+d-a-j+b-m+e*m-c+f-l-j)%100;
                  d += (h*h*b+k+n)%100;
               }
               if( ++IFEcnt[61]%2 )
               {
                  l += (n-f-c)%100;
               }
               else
               {
                  c -= (k-d+l*i+f-b-l)%100;
                  n += (g+g+g+f+h+b)%100;
                  k -= (a+b-f+b-m+j-e-b-a+f+f-e)%100;
                  d -= (g-a-l+b-h+h*j-l-i+e+g-l+e)%100;
                  n -= (n+h)%100;
               }
               while( ++WHILEcnt[62]%5 )
               {
                  e  = (j*m+c+m-a+m+h*b+f-m+n-k-k-m)%100;
                  n += (b-k*d-c-m*j+e+e*g-g+d*h)%100;
               }
               do
               {
                  k  = (d*k+a)%100;
                  g += (d*k*m+l+m+l+i+h)%100;
                  k += (k+c-j+e-l)%100;
                  a += (k+a+l+a-h-l*c-h-e+l)%100;
                  f -= (i-l-k-d*d+d+f+k+n*h+j+g+n+e)%100;
               } while( ++DOcnt[62]%5 );
            }
            else
            {
               while( ++WHILEcnt[61]%5 )
               {
                  h -= (h+g-n-a+l-n+n*a+c+m+h*f-e)%100;
                  c += (c+l-n*g*m+d-j+i+j+b)%100;
                  n -= (l-a+h-e-m-e-m-m-e-c*a+g-j+n)%100;
                  l += (k-e+e*i+k+d)%100;
                  j += (f+g-k*f)%100;
                  e -= (i+n-f+n+i-d-l+a-l*f-b*i)%100;
               }
               do
               {
                  a -= (h+b)%100;
                  c += (l-g-e+d-d-f)%100;
                  f += (d-a)%100;
                  c += (b+l+a-n-k+a*a+d-l+c-j*b*g*f)%100;
                  c += (l+m+c+a*b-h-m+l)%100;
               } while( ++DOcnt[61]%5 );
               for( ; ++FORcnt[91]%5 ; )
               {
                  c -= (n+j+d*f+m+d-h*c*e+f+c+a+a+m)%100;
                  d  = (n+i+j-k+b-n-e+m-f-h-k+e)%100;
                  e += (i+a-l*c-a-m+n+m*e-f-j+i+g)%100;
               }
               if( ++IFcnt[45]%10 )
               {
                  d += (n+n-n*d*e-m+m+i)%100;
                  a += (d+m*i-c*e-b+b+b-n+d)%100;
                  d += (k+j+i+k+n*k)%100;
                  g += (d-g)%100;
                  b += (b+d+a*e+k-k*j*a-b+c*e-b)%100;
               }
            }
            j += (m*d-i*k+f+a-c)%100;
            for( ; ++FORcnt[93]%5 ; )
            {
               
               switch( ++SWcnt[31]%3 )
               {

               case 1:
               {
                  j  = (n-h-d+b+m)%100;
                  n -= (e+j)%100;
                  a -= (f+i+f+n+f-k*j)%100;
                  m -= (l-c-d+h*g-j-k+l-m-e)%100;
                  j -= (j*l-m+b)%100;
                  j -= (a-a+l*c-f+d*k+h+i+f-l-b*m)%100;
               }
               break;

               case 2:
               {
                  g -= (k*c+l-l)%100;
                  i += (j-j-j-j)%100;
                  l += (h-e-k+b*e+m*a-j)%100;
                  d -= (n+b-a+h-l-g)%100;
                  c += (a+m-j*h-e+g+n+h)%100;
               }
               break;

               default:
               {
                  i += (n-k*m)%100;
                  c -= (k+k*d-d)%100;
                  h -= (c-n*j)%100;
               }
               }

               e -= (d+e)%100;
               c -= (g-a*f-j+g-m)%100;
               l += (f+k-c-f+i)%100;
            }
            f -= (g-d+i+n*n-e+a+k-h+f-d-h-a*n)%100;
            b += (b-c)%100;
         }
         break;

         case 2:
         {
            l += (h*l-g-l-g+n*c*h)%100;
            c += (j*m-n*c+d-i-d+k*m+a-h)%100;
            c -= (l-b)%100;
            e -= (d+j+g-i-b*a-i+g-j+f-e)%100;
            e -= (d+h-c-g*b+l-i-e+j*d+i+l-b)%100;
         }
         break;

         default:
         {
            h += (f-c*n*d+d*a)%100;
            m += (i-g+l-l+l*m*k-c+a)%100;
            j -= (e+h-h+h+f)%100;
            m += (i*i+a*l*l)%100;
         }
         }

         i += (j-k+l*f+c*n*j*a)%100;
         e -= (l-i-k-k+b*e-a-n+d+e-f)%100;
         e += (h*h+l+e-m+m-j*a)%100;
         d -= (n-i-k*i-b+f-b+d+k+l-n)%100;
      }
      b += (i-f*m*b*m-f+a-d+g)%100;
      h += (k+j+k+g+d-b+h+f+a+b-e*m-j)%100;
      k += (b*j-h+m+l-d*h-g*b*m+g)%100;
      a -= (e+j-b*i*h-a*l-j)%100;
   }
   g += (c-f-b-i-a-b-g)%100;
   d -= (m+b+e-i+a*d)%100;
   l += (g-g*e+b-b+g+m+h+k-b-g-a)%100;
   c += (l-j+g-h-h-a+f+l+h+i+j-a-h)%100;
   e -= (k+m-n-a*b-n*e+f+b-m*b+b*g+c)%100;
   c -= (i+j+b+m+e+f+j-l*l+g*g-l+l)%100;
   a += (i+g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F29(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[48]%10 )
   {
      if( ++IFEcnt[64]%2 )
      {
         f += (k+j+l+l+a-j-h+a+a)%100;
         l -= (c-e+e*a+e-k*f+f*j)%100;
         k += (d-h+a-l-l+c+d-g-l-b-d+j-a+j)%100;
         n -= (k+i-g+l+g+g*k+l-n-k)%100;
         g -= (i*l+d-a+m*i*a+g)%100;
         b += (n+l-k-m+h-d-i+g-e)%100;
      }
      else
      {
         while( ++WHILEcnt[64]%5 )
         {
            do
            {
               for( ; ++FORcnt[95]%5 ; )
               {
                  n  = (i-n-j+m+m*m+c*c-h+j)%100;
                  l -= (h+e+i*a*f)%100;
                  g += (d-i)%100;
                  g += (c-e)%100;
                  n += (j+b+a-j-d-i+b)%100;
                  n += (n-k)%100;
               }
               for( ; ++FORcnt[96]%5 ; )
               {
                  e += (c-f-e+e*n+i-g+j)%100;
                  k -= (g+e-k+h-f*h*h+c*g)%100;
                  i  = (j+b+c*h+l*d+l-f-h)%100;
                  g += (h+l-m*f-d-i+l*a-g+i-l+a)%100;
                  h -= (b+e+g)%100;
               }
               if( ++IFEcnt[63]%2 )
               {
                  e  = (g*h-g-b+i-k+h-h+f)%100;
                  d -= (f-e+h*c+n*i*c*n+a+f)%100;
                  e += (c+m-d+b+b-c-k-e-a+m+b+c-k*j)%100;
                  k += (b+j*a*b-c-l-i-m)%100;
                  h  = (a-b-a-a-d+b-l+m)%100;
               }
               else
               {
                  m += (l-c+m-d-a*h+i*f-a*m)%100;
                  k += (h+a*c)%100;
                  j  = (e+l-m-j+c*k-n-n)%100;
               }
               while( ++WHILEcnt[63]%5 )
               {
                  h -= (l+i*d-h+l+e*n+n-d-a)%100;
                  e += (n-b)%100;
                  m -= (k+i-k+i*g-a*j+b+n-k*d)%100;
                  f += (i-f-d-n*a+a-h)%100;
               }
            } while( ++DOcnt[63]%5 );
            do
            {
               if( ++IFcnt[47]%10 )
               {
                  m -= (j+b+j-l-f-h+g)%100;
                  b -= (j+e-j-c+a)%100;
                  k += (c-j+m-m-c-h*a-g+j-n-j-j)%100;
                  a  = (i*n)%100;
                  h += (g-j)%100;
               }
               k += (a*a+h-a*j-d-c-e-f-b+b+d-h*b)%100;
               for( ; ++FORcnt[97]%5 ; )
               {
                  n -= (f+a+i+d-f-h+c*g-b*e-m*g)%100;
               }
               
               switch( ++SWcnt[32]%3 )
               {

               case 1:
               {
                  g -= (l-n*g*e*n-n*e*k*l+j)%100;
                  a += (e-n-i-g-m-g+f-n+n-n)%100;
               }
               break;

               case 2:
               {
                  k += (f*h+n-a+c)%100;
                  f -= (c+b+h+g+g*a+c)%100;
                  j -= (c-c+j+b+j)%100;
                  k -= (b-k+c-a*b+b+i+n-a*k+e+g-f)%100;
                  b -= (g-j+i-f+i)%100;
               }
               break;

               default:
               {
                  g -= (l*f-g+i*h-a-b-e+h)%100;
                  d += (l+l)%100;
                  g += (k+l+h-i)%100;
                  d += (d-k-b*g)%100;
               }
               }

               c -= (c*f)%100;
               h -= (j+c-n+a-b-n+k)%100;
            } while( ++DOcnt[64]%5 );
            l += (f+a*k-m-h+d+f-i-a-h*j+h-j*g)%100;
            e -= (h-c+c-i)%100;
            g += (h-i-k+e+k*h*n)%100;
         }
         k += (c-a-f+h+g-h*g)%100;
         h += (f*k-i+h*m+e-c+e-e)%100;
         b += (b*j)%100;
         i += (j-l*k)%100;
      }
      a -= (g-k+k+b+d)%100;
      e += (d-a+l+d+g+n)%100;
      l -= (g+e+m-f+c+f-l+l)%100;
      e -= (k+c+d+n*g-f-j)%100;
      e += (e-d-g-c+h+f+l+e+f)%100;
   }
   l -= (b*g+b+h*n)%100;
   h  = (b+f)%100;
   c += (e*l-a)%100;
   m -= (l+m-k+c-i+n-g*l-k+h-b+m)%100;
   c += (b-f-m-f*n-f+h+d-c)%100;
   h -= (n+b+k-n-a-f*e+d+e+b*i*g)%100;
   h -= (g+c+j*d*e-l+n-e-c-j-m*a-k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F30(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[66]%2 )
   {
      d += (k*f)%100;
   }
   else
   {
      while( ++WHILEcnt[66]%5 )
      {
         do
         {
            for( ; ++FORcnt[99]%5 ; )
            {
               if( ++IFcnt[49]%10 )
               {
                  c += (i-n-l*d-g-i+d-d-c+d-f-i+k)%100;
                  g -= (f-f*j-b-b+l+d+e*n*j)%100;
                  k += (j+a*a+l+m*g*i-b+c*m-l+c)%100;
                  k += (h+j)%100;
                  d += (l+j+a*e-l-d)%100;
                  c += (d+m-m-n)%100;
               }
               for( ; ++FORcnt[98]%5 ; )
               {
                  f -= (f+f)%100;
                  a += (m+e*l+h+a)%100;
                  d -= (d+b+d*g+c-g)%100;
                  l += (g-b+b-b)%100;
                  d -= (k-d+h+b-k+j-g+b+h+d+k-j-h)%100;
               }
               if( ++IFEcnt[65]%2 )
               {
                  g += (n-e-e-e-g+i-l-m-k-l+d*l)%100;
                  l += (n+c-g+l*i-m-i)%100;
                  h += (k+k)%100;
                  a -= (f+h-n+i-c-f-b*f*k*h+d)%100;
               }
               else
               {
                  n += (c+e*f-b+f)%100;
                  e -= (g+i-c+a+a+i-j+m-i-h+i*e)%100;
                  e -= (i-h+l*f+d+l-d)%100;
                  a += (a-b-l+g+f)%100;
                  e -= (f+e+i+d-n+j-d+d+a+a+l+k)%100;
               }
               while( ++WHILEcnt[65]%5 )
               {
                  d -= (a+a+c)%100;
                  m += (h-a+n-d+c*f-e*c+h+b+m+k+k*g)%100;
                  m -= (l*n-d-m*a+m-h+e+l-i*k+h-g)%100;
                  f -= (m+i+g*m-h-n-d+b+h*b+g-e*h)%100;
                  g -= (b-f)%100;
                  b -= (m-a-l-a+a-d+d*e+h+b+j-c+m)%100;
               }
            }
            do
            {
               j += (d-a+d-m-f+k*h+d*c-m+m+i+g*k)%100;
               for( ; ++FORcnt[100]%5 ; )
               {
                  m -= (d+a+m+k+i+g-l*k)%100;
                  f -= (k*d-b+k+m+k-j-f*j)%100;
                  m -= (n+f*n-n+a+n*j*l-a+h+h)%100;
               }
               
               switch( ++SWcnt[33]%3 )
               {

               case 1:
               {
                  h  = (d-i+n+k+i-m+e-l-k-d)%100;
                  e += (f-l+d-f*i)%100;
                  m  = (a*e*a+j-g-e+c*j*l+h-n)%100;
                  g += (g+l+f-f-j*f+i*h*a+f-f*f+c)%100;
                  n -= (e-b+e+h+d+n*b*k-e*j)%100;
               }
               break;

               case 2:
               {
                  e += (d+c*e-g*f-f)%100;
                  k += (f+l-a-j-a*i-j*i+k)%100;
                  g -= (f+n*g)%100;
                  c -= (a*j*h+e-b-a+e-d+j)%100;
               }
               break;

               default:
               {
                  e += (l-i+i+i-i-k+e+e*l-k-e+k-k)%100;
                  h += (l+g)%100;
                  j -= (l*f+a*j+b-f*l*j*k-b*h-n-m)%100;
                  f  = (h+c*e+e+g+d-l-d)%100;
                  c += (n+l-j+d-g*g+k*k+h+j+j+c+i)%100;
                  f -= (e*c-k-j-h-j+b+j+m-f+l-j)%100;
               }
               }

               if( ++IFcnt[50]%10 )
               {
                  e += (b+a-j-h)%100;
                  b -= (m-m-f+l+f*c-f-f)%100;
                  a -= (h-e+d-j*j+l+c)%100;
                  k += (h-j*e+m-b-n+i+d)%100;
                  g += (m-m-d+c-f-d+b)%100;
               }
               c -= (f-m)%100;
            } while( ++DOcnt[66]%5 );
            e  = (e+g-m-g+h-b*b)%100;
            i -= (l-f+e-d*l-g+m-d-b*k+l+m-d+e)%100;
            h -= (c-d-d)%100;
         } while( ++DOcnt[65]%5 );
         h -= (j+m*d-d)%100;
         i += (f+m+b-n-l+m)%100;
      }
      l -= (f*d-k+d+h-b*n*i-m-d*n-j+i+h)%100;
      b += (n*b*g-d+b*k-e-l-k*b-a*m)%100;
      a -= (a*a-k*m-n+a+e)%100;
      h -= (n-k+h+n-h)%100;
   }
   b  = (n+g)%100;
   b += (b-f-c+f+i*c+i*a+b*f-c+m*d)%100;
   e += (g-f-c+f+i+i+i+d-j)%100;
   h  = (a-g-n+c-h*f*l)%100;
   b -= (j*c*k+e-a)%100;
   m -= (j+e-i+n-a-j*h+m+k+h)%100;
   e += (m+h*i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F31(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[69]%2 )
   {
      g -= (n*h+j*e*m*a*l)%100;
      a -= (k-n-g-k-f)%100;
      m += (d-j-e+n+g-g+l)%100;
      j -= (k+m*g-e*d-b)%100;
      e += (b+h*c*j-h-e-b+d*n)%100;
      l -= (d+l*g*n+l+n-e-h-d-g-e)%100;
   }
   else
   {
      while( ++WHILEcnt[69]%5 )
      {
         do
         {
            for( ; ++FORcnt[102]%5 ; )
            {
               for( ; ++FORcnt[101]%5 ; )
               {
                  b += (c+l)%100;
                  b += (l-j-k+j+j-l-b*i+a+f-l*c-g+l)%100;
                  a += (c+b)%100;
                  j += (n-h*c+b-i+n+m)%100;
                  b += (d*b-b-i-c+i+a)%100;
               }
               if( ++IFEcnt[67]%2 )
               {
                  f += (j+k+e-b+f+n-i)%100;
                  e -= (m-f-k+h*i)%100;
                  f -= (i-m*c+e+e*f)%100;
                  c += (c+l)%100;
                  j -= (c+k*i-k)%100;
               }
               else
               {
                  d -= (c+a+g*l-e-m*h-a)%100;
                  f -= (k+k+j-l+j-m)%100;
                  c -= (m+n-e-d)%100;
               }
               while( ++WHILEcnt[67]%5 )
               {
                  b -= (a-k+f+j)%100;
                  i -= (f*e*b*j+h-e+m*g+n+i-b-h+d)%100;
                  m -= (i-a-g+c*i+n-a-f+i)%100;
                  b -= (j+d-h+h+i-a)%100;
               }
               do
               {
                  a -= (m+m-f-d+l+b-d)%100;
                  l  = (e-f)%100;
                  k -= (h-c+n-l+a-d+m-k-c+b+f-c-j)%100;
                  l += (h+i-b+m+e-l+l+d+b-e-g*i-l)%100;
                  i += (h*j)%100;
                  g += (k+l+f+a*e+c-n+m-b-l)%100;
               } while( ++DOcnt[68]%5 );
               if( ++IFcnt[51]%10 )
               {
                  l += (e+j+n+e*d-m-b+e-a*a*l+e)%100;
                  n += (i-m+i+d+i*h+h)%100;
                  e -= (h-n*i-j-a+i+h*j-l+k+h-i-j+i)%100;
                  k -= (e*b+l-g-c-m+m*b+l-e)%100;
                  c -= (i+m*f-h*h+m*f+d-l+l-l-b)%100;
               }
               l += (k+f-b+g*k)%100;
            }
            for( ; ++FORcnt[103]%5 ; )
            {
               
               switch( ++SWcnt[34]%3 )
               {

               case 1:
               {
                  c += (i+h+b-f-a)%100;
                  c += (d-m)%100;
                  n -= (g+k)%100;
                  g += (c-b-j-m-m*n*b-j-b-i-l)%100;
               }
               break;

               case 2:
               {
                  l += (a*c-j+e+c-m-j+c)%100;
                  h -= (f-e)%100;
                  j += (d+d-d*n-e+l)%100;
                  m += (h+k-j+h-m-f-k*j*k-f+c-d+j)%100;
                  d += (g+a+g+k*k+a-h+c-l*f+n-c*j)%100;
                  e -= (i+c*n+a+a+c+k+i*m-j*n+j)%100;
               }
               break;

               default:
               {
                  h += (h+f-f*f*e+g+l*d-c)%100;
                  m -= (l-c-f+c*k-m-i+k)%100;
                  b -= (e-l)%100;
                  e -= (h+i)%100;
                  k -= (h+i+l-h+h*f*l*k-n)%100;
               }
               }

               if( ++IFEcnt[68]%2 )
               {
                  a += (g+i*c)%100;
                  e += (m+j)%100;
                  n += (k+e-h+e+g-f-n-m+e+g+m*f-d)%100;
                  n += (e+j-b*f*b-k)%100;
                  h -= (b*l+b*f-c*f+n-h-n)%100;
               }
               else
               {
                  d += (h+m+b+h+l+n-n+h-k+j+b-e)%100;
                  m += (a-b+j*k-g*j)%100;
                  f += (k-n*j+m*a)%100;
               }
               while( ++WHILEcnt[68]%5 )
               {
                  a += (m-l+j*e*k+k-f+n+m-g-g+m+g)%100;
                  l += (g+l+j+d-f*k+d)%100;
                  d += (i-m-f*i-g*f*g)%100;
                  a -= (d-b-h+a*g+m+d-m)%100;
               }
               d -= (l-e*k*a*c)%100;
               j += (b*k*f+i-g+e-i*l-e*f*f+m*c-k)%100;
            }
            j  = (b+l+l+f+a)%100;
            b -= (b-b*i-c+i+d+j+g-f+h+g)%100;
         } while( ++DOcnt[67]%5 );
         k += (g+d)%100;
         m -= (m-l*h-k*b)%100;
         h += (j-c+c-b+c-j*l)%100;
         n += (i-i-k+l-d-n+b-h+f*e-a+d+n)%100;
      }
      l += (k+f)%100;
   }
   f += (a-b-d-l+f*f)%100;
   a  = (f-g*l-k+i)%100;
   j  = (l-f-c*i+k+d-g+f-i-c)%100;
   l += (k+m+b-n-h+n-i-f-g*f+l)%100;
   g += (k-k-l+e+g+e)%100;
   c -= (b-n-l+f-l-b+e+m*h*g-h*j-c)%100;
   m  = (i*f*l+a+i+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F32(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[107]%5 ; )
      {
         if( ++IFcnt[53]%10 )
         {
            for( ; ++FORcnt[105]%5 ; )
            {
               if( ++IFEcnt[70]%2 )
               {
                  i -= (k+f-b-f*b+b*i+e)%100;
                  j -= (f+b+k-k-d+j+j-g-d+f)%100;
                  a += (f-a-n-l+e+n+c-a+g)%100;
                  j += (h*k)%100;
                  g += (m-m-l-g*e-f*n+d-g-m)%100;
                  g -= (l-n-f+i*l)%100;
               }
               else
               {
                  l += (n+k+b+m)%100;
                  c -= (h-a-f-c+b+h-a+h-l+l+k-e)%100;
                  h -= (n-i-f+l+f*g-n)%100;
                  f -= (l*f)%100;
               }
               while( ++WHILEcnt[70]%5 )
               {
                  n  = (j+c-j-b*c+h-i-l-f+a+m*a)%100;
                  m -= (e-h+g*g-j-k)%100;
                  h += (b+d+n)%100;
                  f -= (j+d+f*h+h+e*e+k+g-m)%100;
                  b += (c-d-d-d-f-m-j)%100;
               }
               do
               {
                  h += (h-a-j-e+d+b+b*k+n+n+h*n+a-k)%100;
                  n += (f*g+k-i-h-e-h-l+a-l)%100;
                  a -= (i+g+l*e)%100;
               } while( ++DOcnt[70]%5 );
               g -= (j-g-e+g+g-k-g+d*j*g-g+m+g+d)%100;
               for( ; ++FORcnt[104]%5 ; )
               {
                  g += (j-n*a-n+i+g)%100;
                  d -= (d+i*c*l+j*l-f+c-j+g+a-k+j+l)%100;
                  m -= (a+b+c+l*f-b-l+c+i)%100;
                  e += (n-d+n-g)%100;
                  h  = (e*g)%100;
               }
            }
            
            switch( ++SWcnt[35]%4 )
            {

            case 1:
            {
               if( ++IFcnt[52]%10 )
               {
                  h -= (k+c)%100;
                  j += (b*l+j-h-g+d+c+g*f*b+b+i*k-k)%100;
                  j -= (c+b+n-m-h+a-l-l+m-e-d+m)%100;
                  b  = (l-b+g-h+e-d*e+n+i-d*e+c)%100;
                  f  = (j-i+k+j+h-e)%100;
                  f += (f-m+d-n+k-j-a*i*n*m+m*a-e)%100;
               }
               if( ++IFEcnt[71]%2 )
               {
                  i -= (i-k+d-a*a+e+e-b+i+m*f*i)%100;
                  j += (e+c-c+b+h-n-a+e-m-b+h)%100;
                  j += (b+h)%100;
                  k -= (d*h)%100;
                  a -= (l*g-c+i*h-h-b)%100;
               }
               else
               {
                  l += (d*b-j-a+c*j+f+h-e)%100;
                  m -= (e-m*i-n-a+i*e-d*e)%100;
                  k += (b+a-f+m-j-a-m-k+b+l*a+g+d+a)%100;
                  e += (e+i*n)%100;
                  l -= (e-f-k)%100;
               }
               while( ++WHILEcnt[71]%5 )
               {
                  g += (m*d)%100;
                  i += (f-a+f-i-d*l)%100;
                  a -= (i-h*j-n-i+j*e+l*j*l*e)%100;
                  a += (j-n+m+j*e*l+j-k)%100;
               }
               do
               {
                  f += (a-m-c-k-h+e-j-k-b)%100;
                  k  = (f*b-h)%100;
                  k -= (m+f*c-m+l+f+m)%100;
                  c += (b*e*n-i-d-d+a+h+c+e+c+h)%100;
                  h -= (l*n-a+d+j-j*a-b*d+e+h-k)%100;
                  m += (a-h-b-n+f+i+d+d-n*l+f-b*i)%100;
               } while( ++DOcnt[71]%5 );
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[106]%5 ; )
               {
                  a += (n+a*j*a-h-d+c*c+a)%100;
                  j -= (d*f*g+i-g)%100;
                  c += (j-l-m*n+d-k-l-c+j-l-m-f)%100;
               }
               g  = (n*k)%100;
               d -= (d-m*b-d-m+e+l+b)%100;
               c -= (f+k*b)%100;
               j += (c+m-i*k-b+a-f*e+b-e-k)%100;
            }
            break;

            case 3:
            {
               k += (g+n-a-f-d+k*k)%100;
               c -= (k*m+k+k+i+n-f*i-j-g+j)%100;
               k += (d-a-h+a*f+k-l-n-e-b-n)%100;
               h  = (m+d+e+i*e*b)%100;
               k += (i-a*g)%100;
            }
            break;

            default:
            {
               e += (e+l+l+e-a*g+n-c*g)%100;
               a -= (g+d)%100;
               d -= (n*c+h-g+j-e+l-b+f-j)%100;
               k  = (j*j+b-d+j-h*l-g-f+d)%100;
            }
            }

         }
      }
      f -= (n+k+k+b+m+l*i+a+n-n+h-a)%100;
      d -= (m-j-d*f+n-a-m*f-b*d-j-l*j)%100;
      f += (e+b-d+d+n-c*h*f-d*i+b-j*g)%100;
      c -= (f*f-h*l+n+m+e+n*l)%100;
   } while( ++DOcnt[69]%5 );
   l += (f+c*m+k-g+h-k-d-m*h-i+l+n)%100;
   a -= (c+l-b+i-h-f+f-d)%100;
   d -= (e*c+n-f-n*f*b+d*n)%100;
   g -= (g-g-k+e*n-a+j-c-f)%100;
   k  = (j+k*b+e-c-b+e-a+m)%100;
   l += (h-h+c+h-b*c*k-j*m+k+c*b)%100;
   f += (n+m+e-d+k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F33(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[111]%5 ; )
   {
      if( ++IFEcnt[74]%2 )
      {
         g += (e-n)%100;
         j += (m+b+m+c+k-n-k-n)%100;
         d -= (e-j+m*b*e+n*d+a*e-l)%100;
         n += (j*n-b*b+e+g+l+n)%100;
         c += (c+d+m-m-k)%100;
      }
      else
      {
         while( ++WHILEcnt[72]%5 )
         {
            do
            {
               if( ++IFcnt[54]%10 )
               {
                  i -= (g-j-i-a*j-l-g-d)%100;
                  k += (c+f+b+d+b)%100;
                  c += (f+a-m+g)%100;
                  k -= (n*a-d)%100;
                  g -= (k-m-m-i+c+g-d-h-k-i*k)%100;
               }
               n -= (c+m-n+f+f-h*i+h-l+d*h)%100;
            } while( ++DOcnt[72]%5 );
         }
         for( ; ++FORcnt[110]%5 ; )
         {
            
            switch( ++SWcnt[36]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[72]%2 )
               {
                  n -= (j*g*j-d+i+m*j+a+g*n+n*f)%100;
                  f -= (m-g-g*l+m+c+k*l-c+a+b)%100;
                  g += (a+e+m*d-e+i+d*g*b)%100;
               }
               else
               {
                  d -= (c+h-e-m-e-b+a+n+d-i*k*f)%100;
                  a -= (l-j+f+c+l-k+k+a-b+b*d-j-h*f)%100;
                  d -= (c*c-b+l+h-a+c-i)%100;
                  h += (e*l)%100;
                  k += (h+e+a-a-c)%100;
               }
               while( ++WHILEcnt[73]%5 )
               {
                  a += (b+k+n+i*h+d-a-g*l)%100;
                  h += (e-g+k*e+f*d-m-i+a+d*c)%100;
                  c += (f+f+h*c-l)%100;
                  a += (g*i-g+c+c-j)%100;
                  b  = (h+l+m-l+m*c-l-i)%100;
               }
               do
               {
                  j += (k+m-b+a+a+f-i)%100;
                  l += (h-k-k-m-f*g+h+f*f-j*b)%100;
                  a -= (h+a)%100;
                  a += (n-a-g+c+k)%100;
               } while( ++DOcnt[73]%5 );
               for( ; ++FORcnt[108]%5 ; )
               {
                  l -= (k+h-e-e-n+d*i-d+f+g*h-n+g*m)%100;
                  m -= (n-h-c+k+c)%100;
                  a -= (j+j*d*n*k-m*m-f+k-b+k)%100;
                  l += (i+d+l*g-n+g-m-j-n-k*m-b-i)%100;
                  l  = (e+j-d-f-h-g+j-j-n)%100;
                  c -= (c-c*f-i)%100;
               }
               if( ++IFcnt[55]%10 )
               {
                  l -= (g*e-e-i-e+i+c)%100;
                  i -= (h+i-c-d-l-j+d-d+m+e+n-b+n+g)%100;
                  n -= (a+c+a+l-f-n-k*c+b-k-a*j+e-l)%100;
                  i += (j-i+g*m)%100;
                  h += (h-c+a*h-c)%100;
               }
               for( ; ++FORcnt[109]%5 ; )
               {
                  c -= (i+h-i-n-i-j)%100;
                  h += (l+m+c*g-l+f-b+c+i+c+m*j*h+l)%100;
                  j += (f-a-k-a*n*a-n-k-a-g)%100;
                  k += (a+e+a*n+j*g-n-i+h-e)%100;
                  b -= (c-f-j-j+c-l-a*l-f)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[73]%2 )
               {
                  m += (i+d+g-e+d)%100;
                  f -= (b-j-k*b+f+d*a)%100;
                  f  = (f*h+j*k*b+d*h+b)%100;
                  f -= (h*a)%100;
                  b -= (f-d+h-m-g+i-j+d-a*j*n-g-n+j)%100;
               }
               else
               {
                  j += (j-h*m+a+a-a-i-b-f)%100;
                  m += (e*k+c+k+e*c*b*a-m)%100;
                  j -= (i*b+n*n+i+k+k)%100;
                  d += (m+b+a+h)%100;
                  f -= (c+e-k+k+a-m)%100;
                  d -= (g*m-j*b*m+j+d-d*f-n-f*l-m)%100;
               }
               f -= (e+h-e+g*j+d-h+i-h-n*j-g+c+i)%100;
               m -= (h*c+g)%100;
               j += (g+i-m+n-l)%100;
            }
            break;

            default:
            {
               l  = (g-l+h-a-d-d-j-j+j+e*n-a)%100;
               i += (n+d+h-i*j)%100;
               b -= (b+a-f-m-m-a-i*d*c)%100;
            }
            }

            k += (e*l-m+h+m-n)%100;
            k -= (e+k-n*n-l-m*a*h)%100;
            b -= (f-n*i-a-a)%100;
         }
         f -= (m*g-c+c-l-h-j+f)%100;
         h  = (j-k-c+d+e+d+a*g-g*a+d*g)%100;
         f -= (e*c)%100;
      }
      c += (d+n+j-k*h-l+b-f)%100;
      h += (g+k*m*i-g-j+k*b*d-i-c)%100;
      k -= (c+n)%100;
      h -= (i-k)%100;
      e -= (h+h+f+i*m+c*j)%100;
   }
   b += (i+i+g-m*j+d*j+e*l)%100;
   n -= (n-e+j)%100;
   g -= (a+j+d+l+n-m+n+b-n-a-g*d*f+f)%100;
   n -= (d+n+i-c)%100;
   e -= (k-k-l-j+i)%100;
   b += (c-g+b-k-f-g-j*e+i)%100;
   n += (k+c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F34(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[76]%5 )
   {
      do
      {
         c -= (c-e)%100;
         for( ; ++FORcnt[114]%5 ; )
         {
            
            switch( ++SWcnt[37]%3 )
            {

            case 1:
            {
               if( ++IFcnt[56]%10 )
               {
                  n -= (a-n*e+d+a+n-i+i+m*m-i-e*g)%100;
                  l -= (l-g)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[75]%2 )
               {
                  i -= (g-f)%100;
                  f -= (n-g*k+k*h+g-m+b-g)%100;
                  b  = (h-l+n-i-b+h-f+g*c)%100;
                  k += (l+m-c-b-d-e*g+l+d-k-g+a-m+k)%100;
                  j += (h*l)%100;
                  d -= (a-k)%100;
               }
               else
               {
                  h  = (i-m*b-a-l*e)%100;
                  a += (a-f-n*j*b+c-j*a-m-b+m)%100;
                  g += (k+k)%100;
                  e += (l+k+n-b-d+h*j)%100;
               }
               while( ++WHILEcnt[74]%5 )
               {
                  e -= (e+c-d*e-j*k+d*b)%100;
                  i += (i*j*j+j*g*m)%100;
                  i -= (d*g)%100;
                  j  = (h-n+l+h*f-l-e+b-n*k)%100;
                  b += (m+k+j+c)%100;
               }
               do
               {
                  j -= (f*c-g-n)%100;
                  d -= (c*f)%100;
                  j += (l+f-h+d+k)%100;
               } while( ++DOcnt[75]%5 );
               for( ; ++FORcnt[112]%5 ; )
               {
                  a += (k+b-h+n+c)%100;
                  m -= (i-f+b-d+b*b-l-j*n-k+h)%100;
                  e -= (d+e+c-b*f-h+b-b+j*m)%100;
                  m -= (c+l+c*d-i*h*n-l+i-b+b+l+h+m)%100;
                  m += (n-e*m*b+h-i+l+a+f)%100;
               }
               for( ; ++FORcnt[113]%5 ; )
               {
                  m += (g+a*k*j+f+g)%100;
                  d -= (k-k+m+g+m+e+h-e-e-m-j*m)%100;
                  h += (k-f-k+b+f+c-b)%100;
                  l -= (e-k)%100;
               }
            }
            break;

            default:
            {
               if( ++IFEcnt[76]%2 )
               {
                  i -= (k-j+g-b+m*e-d-a)%100;
                  b -= (f*f-j+i+b-c+d+a*h+f*m+a)%100;
                  n += (c-a-n-h*d+h)%100;
                  m += (n-m-a-n-l+i+l-i-g+d*m)%100;
                  a += (j*a*j+g-e+f-k+n+b+d+g-g*a-g)%100;
               }
               else
               {
                  a += (h+d*j-g-n-c-b*e*f-b+a*f)%100;
                  b -= (k*f-e+d+c+h-d*h-k-l-d)%100;
                  l += (k-e+h*l-i-l+j-c+k-f+f-d)%100;
                  e -= (b+b-j-j+n+j*h*n*a+g*k+e)%100;
                  c += (f*m+i+d+i*j+i*h)%100;
               }
               while( ++WHILEcnt[75]%5 )
               {
                  l  = (l+c)%100;
                  f += (a+d+d-e-c+h-l)%100;
                  c -= (l*i)%100;
                  e -= (j-h)%100;
               }
               b -= (a+i-m*j-e*a+c-g*i-m)%100;
               g += (g-a-b+c+i*c-l)%100;
               f += (e-l+d+l+e-i+m-a+m*b-l)%100;
               g += (k-g*k+l)%100;
            }
            }

            d -= (m-g+g-e-l)%100;
            n += (i*c-c-i*e+c)%100;
            d += (n-a-k-i+b+g-f*i+e-f)%100;
            c += (d-n+c)%100;
         }
         l += (c+d*l+b*e-l)%100;
         f -= (k+b*j-i-g*c*i+i-g+e-h-n*j+c)%100;
         i  = (k-a*f*j-e+c)%100;
         g -= (g-g-g-b-k+h-a-l*g*m)%100;
      } while( ++DOcnt[74]%5 );
      g += (a*k*f+d+k+m+f+c+n+b+i)%100;
      b -= (h*l*a*m-h)%100;
      i += (l-h+c*n-j*k+i-l-g-k*n+i+i+b)%100;
   }
   k -= (k-h+f+k+i+e+n-d+a*a+c*k-j)%100;
   j += (g+a-g+i+j+j-m-l-m-d+e-m)%100;
   d += (n-g*d+a-e*d*i-g*c-k+l-c+k+a)%100;
   f += (f*j-h*h-e+a)%100;
   d -= (n-g+g*e+a+b-a*j*n+i*f+h)%100;
   a += (f+d)%100;
   k -= (m*k*g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F35(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      if( ++IFcnt[58]%10 )
      {
         h -= (e-d+b-m+a-d+c-d+a+e+j+e-k)%100;
         for( ; ++FORcnt[118]%5 ; )
         {
            
            switch( ++SWcnt[38]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[77]%2 )
               {
                  e += (i-j-l-e-k+b-f+f*l-i*e*k-j)%100;
                  f += (g*j*f-k+f+d-m-d+d)%100;
                  k  = (a-m)%100;
                  k -= (l+g*m-j-l+l)%100;
                  j -= (d+b+b-g-a*a+i*e)%100;
                  g += (h*j*g*b*l+h)%100;
               }
               else
               {
                  e -= (h+c+g+h+l)%100;
                  d += (m-d*m*a-i-k*e)%100;
                  c  = (c+h)%100;
                  h += (b+l*k-b-f-f+d+f-f*b+k+m+l*b)%100;
               }
               while( ++WHILEcnt[77]%5 )
               {
                  j += (m+f)%100;
                  h += (d+m-m+f+e-l*g-h)%100;
                  d -= (a*c*b-i*i+m+l+e-k)%100;
                  d -= (g+n-j-j+n)%100;
                  m  = (n*g+j-b*f*m*c*d-n-m-j-l-g)%100;
               }
               do
               {
                  h += (a+b-f-c*l-k+m*m+a+l+c-i+h)%100;
               } while( ++DOcnt[77]%5 );
               for( ; ++FORcnt[115]%5 ; )
               {
                  b -= (m+l-c+d+g)%100;
                  h  = (f+c-f+c-b*b*g)%100;
               }
               if( ++IFcnt[57]%10 )
               {
                  l -= (j+d-l+c+n-a-m*g-e+a+g+f)%100;
                  f -= (f-n+i+c+l+m-j*f)%100;
                  m -= (c+n+e-i+g-b*j+d*l*b-f+k*a+f)%100;
                  e += (k+b*f)%100;
                  a -= (h+a*h)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[116]%5 ; )
               {
                  d -= (b+e-e-k+c-l+i-h+a+c)%100;
                  g -= (g-g-e-m-j*i+b*i)%100;
                  m -= (m+k-e-c+n+k*g*j-n+n)%100;
                  i  = (c*k-f-l-j-e-a+a+f-e+g*g)%100;
                  n += (m-n)%100;
                  a -= (d-f+d-g+i)%100;
               }
               if( ++IFEcnt[78]%2 )
               {
                  k += (c-m-j-m)%100;
                  d -= (l-b-h+a-i+i+e*e-l+b*b-i)%100;
                  j  = (h*c)%100;
               }
               else
               {
                  f  = (c-e+k-d+l*g+i-j-a)%100;
                  j += (b+h+l)%100;
                  b -= (m-e)%100;
                  c += (a*e-f+g+k-e)%100;
                  m -= (h*c+c-k+b-a+l-i-d)%100;
               }
               while( ++WHILEcnt[78]%5 )
               {
                  c += (m+c*l-k-a-f*e-a+j+d+i-f*b)%100;
                  g += (n-d-f*c*g-j+a*k*n-a)%100;
                  e += (b-h+k*g-c-n-a-l-i-b-c-f+e)%100;
                  d -= (h-m+i+f*h+i+d+a*i+m+l*f)%100;
                  h -= (d-h)%100;
               }
               do
               {
                  d += (n+n*k)%100;
                  g -= (d-j+m-m*m+f-j)%100;
                  h -= (a+m)%100;
                  m -= (g+c+e-c-n)%100;
               } while( ++DOcnt[78]%5 );
            }
            break;

            case 3:
            {
               i += (d-d*h-a-i-a*n+m+b+k+c-j)%100;
               for( ; ++FORcnt[117]%5 ; )
               {
                  i -= (b-e+a+g-l-d+i*l-a*n+e+h)%100;
                  m += (b+a)%100;
                  l -= (l*i*a+m+h-g*c*m*f-j-f*j)%100;
                  h -= (j-d-h*k+i-k+g*k)%100;
                  m += (e+i+f+n*n-d*k)%100;
               }
               j += (k+g-n+h-l+f-l*h)%100;
               f += (i-a+k-h-b+b-d+c+n-h-f+k*j-l)%100;
               e += (a+h*b+j+f+h-h+f+k+h)%100;
               e += (e+c+j+g*j+k-c-f)%100;
            }
            break;

            default:
            {
               n += (g-a)%100;
               m += (a-i-k*e*j+c)%100;
               g += (f*j-c-g-f-n)%100;
               i += (e*i+j)%100;
               f -= (h-n-g-e*b-j*a-f*l+d)%100;
            }
            }

            a -= (a-f+c-b-k*h)%100;
            d += (e+f-i+n*b-f*b-l+n+d)%100;
         }
         i -= (l*g)%100;
         n -= (a-n)%100;
         l -= (b+k+i+h-f)%100;
      }
      d += (m+c+a-l-a-h+l+k-g-k-f-h)%100;
      f  = (i+g+h+b-a*l-f+n-b-b)%100;
      b -= (m-h-n-m)%100;
      c -= (i+c+k*g*j+d+b-c-k+l)%100;
      b -= (d+k+d-a-b-d-n)%100;
   } while( ++DOcnt[76]%5 );
   l -= (e+k+c*i+l)%100;
   h -= (h-l+h-a*i-b-b+n)%100;
   j += (f-m)%100;
   h += (c+f*h-k*f*g+m+l+l*e-d)%100;
   e += (f+g-e-g+k-c)%100;
   a += (i*g+i)%100;
   d += (l+i+k-j*d-i+f-h+n*b-j-f-k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<86; I++) IFcnt[I]   =0;
   for(I=0; I<115; I++) IFEcnt[I]  =0;
   for(I=0; I<57; I++) SWcnt[I]   =0;
   for(I=0; I<115; I++) WHILEcnt[I]=0;
   for(I=0; I<115; I++) DOcnt[I]   =0;
   for(I=0; I<172; I++) FORcnt[I]  =0;
   long int sum=0;

   sum += F1( ) ;
   sum += F2( ) ;
   sum += F3( ) ;
   sum += F4( ) ;
   sum += F5( ) ;
   sum += F6( ) ;
   sum += F7( ) ;
   sum += F8( ) ;
   sum += F9( ) ;
   sum += F10( ) ;
   sum += F11( ) ;
   sum += F12( ) ;
   sum += F13( ) ;
   sum += F14( ) ;
   sum += F15( ) ;
   sum += F16( ) ;
   sum += F17( ) ;
   sum += F18( ) ;
   sum += F19( ) ;
   sum += F20( ) ;
   sum += F21( ) ;
   sum += F22( ) ;
   sum += F23( ) ;
   sum += F24( ) ;
   sum += F25( ) ;
   sum += F26( ) ;
   sum += F27( ) ;
   sum += F28( ) ;
   sum += F29( ) ;
   sum += F30( ) ;
   sum += F31( ) ;
   sum += F32( ) ;
   sum += F33( ) ;
   sum += F34( ) ;
   sum += F35( ) ;

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      g  = (l-c*c-n+d+e+b)%100;
      n -= (g+n+k*n-b)%100;
      m -= (m-a+k-e-c)%100;
      m += (j*i-l)%100;
      b  = (f-m-a)%100;
      c += (m+d+a)%100;
      d  = (e*i-f+j+c)%100;
      e += (a*e+d-b-l-n+n+g*e*m+l)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<59; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 59 << "   Dynamic = " << sum ;
   for(I=sum=0; I<79; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 79 << "   Dynamic = " << sum ;
   for(I=sum=0; I<39; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 39 << "   Dynamic = " << sum ;
   for(I=sum=0; I<79; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 79 << "   Dynamic = " << sum ;
   for(I=sum=0; I<79; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 79 << "   Dynamic = " << sum ;
   for(I=sum=0; I<119; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 119 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}