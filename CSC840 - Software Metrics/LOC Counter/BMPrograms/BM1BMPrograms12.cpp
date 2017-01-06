#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[57],IFEcnt[76],SWcnt[38],WHILEcnt[76],DOcnt[76],FORcnt[115];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[1]%2 )
      {
         f -= (c+d+i*h+k-d-h+h*b-b*j+m+f)%100;
         l  = (n*a-a+n-e)%100;
         e -= (m+l-m-n-g)%100;
         l += (j+f+e+l+h*c)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  i -= (n+h-e*d+f+d-g*b*i)%100;
                  d -= (f-k)%100;
                  l -= (k+a-c)%100;
               }
               n += (g*i+k+j)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  b += (g+c+i-m-n-k*g+c+j+c)%100;
                  g += (c+h-k+k+m)%100;
                  l -= (j-i+j+f-n+n+h+j+g-b*f-k)%100;
                  h += (c-a-j*d+k+d+a+f-m-f-k+d*g)%100;
                  m -= (g+h+m+b-a-j*j+e+k+b*l*f-a+g)%100;
               }
               
               switch( ++SWcnt[0]%4 )
               {

               case 1:
               {
                  b -= (e*i)%100;
                  f -= (b-b*j*d-l+c-a-b*l+e*n*l)%100;
                  c += (b*g-a*l*j+h+f+k-i-l*n)%100;
                  b += (b*m-e)%100;
               }
               break;

               case 2:
               {
                  b += (a-a-f*l-n+e)%100;
                  b += (k-d+d+j*e-i+d-l+a-a-g)%100;
                  f += (k-a*k*e+l*l*d-d-a+d+g+l)%100;
                  b -= (b-d-f+g-a)%100;
                  d -= (d+b+a*l+m*e-b+m-d-m*n+g+m)%100;
                  i  = (l-e)%100;
               }
               break;

               case 3:
               {
                  k += (a*n-i-a+d)%100;
                  b -= (h*k)%100;
                  i -= (a+g+a-l-m+n)%100;
                  f -= (m+a+m-i-h+d*b-c-b+f+f-d-f)%100;
                  j  = (j+l-k+j*k-g-e*l-d+a+n-a+m)%100;
               }
               break;

               default:
               {
                  i += (j+l-k)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  l += (a-g-h)%100;
                  f += (b*f+j+k+k-i+l)%100;
                  k += (m+k-d+j*d+l-c-g+g-b-i-b+l)%100;
                  i -= (b+a*i*m-m+g+b+g-a*d-j)%100;
                  h += (h*n)%100;
               }
               else
               {
                  i += (l-k)%100;
                  k += (k+g+k-g*n-e+a+b+k*d*j+f*e)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  b += (j-i-n+f-j-b)%100;
                  m  = (d-d-l-i+c+j)%100;
                  j -= (k+i-l+f)%100;
                  i  = (d+c+h*n+b+c-d*c-f*b+h)%100;
                  c -= (c+e)%100;
                  n -= (g*b+h-l-f*h-d*i-b+e+c)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  e -= (j*c)%100;
                  f  = (i+c+d-j*l*e*f+k+e+k)%100;
                  f -= (b-e-j*e+b-l+d*n+h)%100;
                  k += (j*n+a+m-b)%100;
                  i -= (n-j*k+n*n-b+e+g-g+e+f+i+h)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  h -= (i+k-d*c+g+h-b-k*e*j+g+j)%100;
                  b -= (e-m)%100;
                  n -= (g-d-k-j*l-f*g-m)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  l += (b-a)%100;
                  n -= (i+b+h+i+l+e)%100;
                  g -= (i-f)%100;
                  l -= (m+h*h-j-k-k-b+l+l*n+b+k+l-n)%100;
                  h -= (m-i-h+j-j)%100;
               }
            }
            b  = (f-e*c-k+m*d-e+f*c)%100;
            b -= (i*k+f-h-d+n+k+g)%100;
            b += (g*e-i*h-h)%100;
            e  = (e+i+d+e-d-n-j-b+e+g*e+e-n+e)%100;
         }
         i  = (k*g-i-c+h-n-k-j-e+b*f-h-k+n)%100;
         n  = (m-i*k+h*c+c)%100;
         g += (c*a*h*c+n)%100;
      }
      l -= (a*e)%100;
      f -= (m*m*h-n+k*d*k)%100;
      f += (g+l+g+h+d-d-n-i+i-g)%100;
      l -= (m+d)%100;
   }
   m += (h+d-a*d-i-e+i-m)%100;
   e  = (c-n+l-d)%100;
   f += (k+m+f+n*a-d-e)%100;
   c += (b-n+d-h)%100;
   h += (b-b+g-i+l-c+f*n*f+d*d+b-a+h)%100;
   f -= (n-i-g)%100;
   i += (j-i+d*j+i+l*a+i+l+c*c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F2(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[4]%2 )
   {
      j += (g+m+g*i-f)%100;
      m += (h+m-c-c+a)%100;
      f -= (j-k-f+c-i-f+i)%100;
      d += (c+e*d-l-j)%100;
      f  = (d-f+d+k)%100;
   }
   else
   {
      while( ++WHILEcnt[4]%5 )
      {
         do
         {
            d -= (d-l)%100;
            for( ; ++FORcnt[4]%5 ; )
            {
               
               switch( ++SWcnt[1]%4 )
               {

               case 1:
               {
                  d += (e+a*b+a+i+b-c+k+h+a)%100;
                  h += (e*l)%100;
                  i += (n+i*h*n*n-l)%100;
                  n += (c+b)%100;
                  b -= (m-m+m-n+b+g)%100;
                  i -= (c+n*g-e-b-g-f)%100;
               }
               break;

               case 2:
               {
                  a += (d-j-k-f+b+b)%100;
                  h  = (b-a-n+g-j*k+k)%100;
                  c -= (g*a-a-a*b+e-l)%100;
                  h -= (i+g*a-d-f+h+a-m)%100;
                  n -= (j-b+j-b+g-m)%100;
               }
               break;

               case 3:
               {
                  n -= (k+g)%100;
                  k += (l+n+j-d+j-k+a-j-g)%100;
                  j -= (a-m+b+b-g*h-j)%100;
               }
               break;

               default:
               {
                  f += (n-b-j*j+k-l-m+n+e+k+g*i-m)%100;
                  a  = (j+n-l*n*n-c+g-j-g-l*m-c+c)%100;
                  c -= (m*k+e-f+i+f-g-a*e-e+n+h-g)%100;
                  h -= (i+b*h-l+h+e-h)%100;
                  i -= (b+i+l-f+e+a-k)%100;
               }
               }

               if( ++IFcnt[2]%10 )
               {
                  b += (i+k)%100;
                  b -= (j+k+l-f+n-i+i*e+k*j-h-i+i+g)%100;
                  e -= (e-n-i+b+e*i+l-c+d+c*g)%100;
                  c += (i-c+m-n+e-e+c-m)%100;
               }
               if( ++IFEcnt[2]%2 )
               {
                  c += (l-g-f+h-l+l*g-c*a*b+m)%100;
                  j -= (g-j-a-h-e-n-a+l-f-j)%100;
                  g  = (d-j*d+f-j-l+j+g-f+l)%100;
                  m -= (j+i+m+f+g)%100;
                  i += (b-m+m-i*n-k-b+b-l-j+k)%100;
               }
               else
               {
                  m += (j+c-l+m*f+h+m-a-k+c+h+n)%100;
                  g += (i*g+l+k-n-g)%100;
                  d += (a+j*h)%100;
                  i -= (e+b*j-h-c+a-c)%100;
                  m += (f-n+h+h-j+n*g)%100;
                  n -= (i*a*d)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  b  = (d-k-n-b+k)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[5]%5 ; )
               {
                  f += (k+i-m-i+a+h)%100;
                  h += (f*b*k+k+j*e-a-d+g-g*n+a)%100;
                  b += (j+b-e-i-b-e+f-b+b)%100;
                  l -= (n+l)%100;
                  l  = (f+f+a*i-e+i*n+n-g-m)%100;
               }
               for( ; ++FORcnt[6]%5 ; )
               {
                  m += (l-f*g+g-i-l-l+l-f+k*j*h-g+h)%100;
                  k  = (e+i+g+b+i-h*n)%100;
                  a += (l+m*e+n*g+m+a+n-a)%100;
                  h -= (i+m+g-c+d*k+c*d-n-m)%100;
               }
            } while( ++DOcnt[3]%5 );
            if( ++IFEcnt[3]%2 )
            {
               a += (g-j*g-b-f+l-f-a*l-e+b*j-k-b)%100;
               g -= (c*c-l-h-n+b+h*e-c+h+b+g)%100;
               c  = (g*e+m+f*e-d)%100;
            }
            else
            {
               while( ++WHILEcnt[3]%5 )
               {
                  l += (j+j+d+e+a+j-a-d-k*l+h*e+b)%100;
                  b += (j-i)%100;
                  a -= (c+m)%100;
                  i -= (b-g+f-a-f-d+b)%100;
                  k -= (n-b-a-n+k*n)%100;
               }
               e -= (b-c-i+a+c*b-g+c-i)%100;
               j -= (f-n+a+l-f+a-m+f+d+h)%100;
               b += (b-i)%100;
               c += (c-j*j*m*m-g)%100;
               k  = (k+d+l*h*l)%100;
            }
            c += (i*g-h)%100;
         } while( ++DOcnt[2]%5 );
         a -= (m+i+m+h+i-m-b-i)%100;
         f += (a-l+n+d-n+e-d)%100;
         c -= (h*l+j+a+d+k-n+h-m*d+k-h)%100;
         c += (g*e+g-d-c+l+c+k*a-i+m-c+b)%100;
      }
      e += (g*b-b-c-j+i*d-c-i+g-j)%100;
      n += (k-d+m-h-d+n)%100;
      g  = (m-c-h+b-e+j+h-n-b+n*b-e+k+l)%100;
      g -= (g+b-n-h+i*f*h+b-e+b-c-e-j-j)%100;
      l += (l-g*i+g-f-b+b+a+n+d-e)%100;
   }
   a -= (n+m)%100;
   b -= (e+i*h+n-a-b-b+g-a)%100;
   e -= (m-a*l-i+j+a*d-j)%100;
   l -= (e-j+j-m)%100;
   j += (k-g+f+g-l+m-j+i-j)%100;
   n -= (l+l+b)%100;
   j -= (k-a-f+e*k*b-m-i+l-b-g+l)%100;
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
         f -= (i-e)%100;
         for( ; ++FORcnt[9]%5 ; )
         {
            
            switch( ++SWcnt[2]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[5]%2 )
               {
                  c += (h+i-g-h+b-f+l+l-a+h+f+k)%100;
                  f  = (j*e+n-a*k-j-d*h-m+i+k-i)%100;
                  h -= (l+f)%100;
                  e -= (k-d-k*f-n*h-k+m+k*k-a)%100;
                  m -= (b*d+j-a-h+g+h*i+c-a-h+l-n*e)%100;
                  j -= (j+j)%100;
               }
               else
               {
                  b += (h+e+j*m)%100;
                  n -= (j*h)%100;
                  d -= (b*d*d+d-e+d+i-m-l-c+i+a+h*e)%100;
                  k += (e+e)%100;
               }
               while( ++WHILEcnt[5]%5 )
               {
                  i -= (d*c+c*l-l+d+e-f-e-e*m)%100;
                  k += (m+a+d-m+m)%100;
                  j += (i+d)%100;
                  b += (e+h-h+m*c*a-k*f-k-h+a-a+m+l)%100;
                  c += (f+l-m)%100;
               }
               do
               {
                  a -= (f*a+a-f*k-b-b-e-m)%100;
                  d  = (b-c+h-f+l*k+b+b-e+c*i+h-n*a)%100;
                  c -= (n+a+a*i)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  c += (b-j-k*a+i+d*l*h)%100;
                  b -= (k+d+g+e+b+c+a)%100;
                  l += (f+j)%100;
                  c += (n-f-i-d-m+k-k*f*i-f+d)%100;
                  c += (h+d-j+b+m+i+e-m-g*e+g)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  d += (a+j-k-d+l*g-n+b+i-j-n*j+f+f)%100;
                  e += (b*j*j*m+d+e+a*g+g-h)%100;
                  c -= (i+g-e+h*e+j-k*h+a+b-e-i-j)%100;
                  d += (f-g+a-m-a*a*d+l*a-i+l*c-j+l)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[8]%5 ; )
               {
                  d += (b+h-c+d+i-i+n+i+c-a-c+h+e-k)%100;
                  b -= (a+g-n-m*g-h+e*g*j+g-b+k*e+n)%100;
                  e += (g-d*f*d*m-g)%100;
                  l -= (l-b-k+l+a)%100;
                  i += (f-a-a-n)%100;
               }
               if( ++IFEcnt[6]%2 )
               {
                  b  = (l+m-n*b-b+k-g-e*n-m)%100;
                  e += (g+c-b-m*c*j*i-i-a+a)%100;
               }
               else
               {
                  j -= (l+g+e+g+n*j-n*e)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  b -= (n-b*l-i-k-k+n-m-j+l-m+f-a+k)%100;
                  i -= (j-h-n+a*g+b-d-e)%100;
                  e -= (a+j+m*m-e*d+h-j*f+l+n-g)%100;
                  j -= (i*b+i-b-n+m-l-l)%100;
                  i += (f-a+c-l*m)%100;
               }
               do
               {
                  f -= (e*c+k*k-m-f-l*d*i-n)%100;
                  g -= (n+g-d+f+c*n+d*m-g)%100;
                  m += (l-a-n*g*h)%100;
                  g  = (e-c-a-d-c+g+n+g-b-g*d-a+b)%100;
               } while( ++DOcnt[6]%5 );
               f += (d*a-i-i-e-k-n-j*e)%100;
               h += (e-d-b)%100;
            }
            break;

            default:
            {
               a  = (b-i+d-b+e+m-h-g+m+e*h+l*a)%100;
               l -= (d-g)%100;
               n += (f+a+g+m)%100;
               g += (h-m)%100;
               l -= (i-b+n-l)%100;
               i -= (k*n+h-l+g-a)%100;
            }
            }

            i -= (a+h*j-l-e)%100;
            j -= (m+j-e+c-i+j+e-n)%100;
            i  = (a-h-f*l)%100;
            j -= (d+g+l+l)%100;
         }
         h -= (k-j-a+b-f+j-g-d+b-a+a-g)%100;
         b += (f-i-h-a-m+g-m-g-g)%100;
         n += (b*m*j-c+m-f-i-j+a-n-l)%100;
         f -= (j+n*b+n+b+b-c-m+l)%100;
      }
      c -= (a+b+e-e*l*b-b*f*l-l-m-b+h-h)%100;
      g += (b-n-c*n-n*m-n)%100;
      j -= (a+m*h+f+c+a*f*j)%100;
   } while( ++DOcnt[4]%5 );
   i += (l*j+b)%100;
   j += (c-g+m+i)%100;
   c += (e+d-f*l)%100;
   e -= (b+l+l)%100;
   l += (f-f-i+e-b+e+g*c*h+e)%100;
   g -= (j-l)%100;
   c -= (a-m+b+b-j+f*j+a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F4(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[13]%5 ; )
   {
      
      switch( ++SWcnt[3]%3 )
      {

      case 1:
      {
         if( ++IFcnt[6]%10 )
         {
            if( ++IFEcnt[8]%2 )
            {
               if( ++IFEcnt[7]%2 )
               {
                  j -= (n+l-e+f+k+m+m-a)%100;
                  c += (m-d-i+g-h-l-d+m-b*h+a-i-c)%100;
                  b += (j+k-n-b-e-n*f-c+j-f-g)%100;
               }
               else
               {
                  k += (k-h-j)%100;
                  j -= (f+g+n*k-f)%100;
                  a += (b+c)%100;
                  c -= (i-e-n-k+k+k-g-i)%100;
                  k  = (a+f-i-i)%100;
               }
               while( ++WHILEcnt[8]%5 )
               {
                  j  = (l-k+g-h-g*l+h-j)%100;
                  f  = (i+a*k*n-j+g-j+f-c-a-k+d-c-m)%100;
                  a += (j+d+g)%100;
                  f -= (k+c-k*c-a)%100;
                  i += (a-g)%100;
               }
               do
               {
                  k -= (e-e+k+h*i*h)%100;
                  l -= (b-a-l)%100;
                  j -= (m-d+k-a+e+c)%100;
                  m -= (n+b-j+c-b*d)%100;
               } while( ++DOcnt[8]%5 );
               if( ++IFcnt[5]%10 )
               {
                  d  = (c-j)%100;
                  l += (n-h+m-l+h*e+d+l)%100;
                  b -= (j-i)%100;
                  h -= (d-b-l+i*c*b-f-g+d+i)%100;
                  f -= (a-i-c*c-i*m+c+b)%100;
                  l -= (e-f*d*h*i-e+f)%100;
               }
               i += (f*g-j+a-n)%100;
               for( ; ++FORcnt[12]%5 ; )
               {
                  k += (a+f+a+f*l-a-m*e+j*i)%100;
                  f += (k+a-l*h*g-b-c-l)%100;
                  f += (e*k)%100;
                  k -= (k-c-b+l+e+d+c)%100;
                  l -= (g-e+m+m+a)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[7]%5 )
               {
                  f -= (m+c+n-k-n+j+f+c-a-n*a-a*b)%100;
                  g -= (i-j+c-a+a-c-d)%100;
                  f -= (j+g+i-k+c-k+n+c+j-j)%100;
                  d += (e*i+e-j+h-n-m)%100;
                  f  = (d-f+m*f-m-l+a+a+c-e-h-m-i)%100;
                  e += (l+e-c-a+l+j+f-m-j*i+j-e-l)%100;
               }
               do
               {
                  l += (j*g*g-g+k*e)%100;
                  e += (c+n+i-d+n*n+j-n-k+e)%100;
                  d -= (a*d-d*n+i+c-g*k+i-i)%100;
                  l -= (b-g)%100;
                  i += (b+l-i-c)%100;
               } while( ++DOcnt[7]%5 );
               for( ; ++FORcnt[10]%5 ; )
               {
                  h += (j+k+a-e+j*n+n-n-f)%100;
                  g += (k-m*j+c)%100;
                  f -= (m-a+a*a-c)%100;
                  c -= (e*j-a)%100;
                  c += (e-e*a+h)%100;
               }
               for( ; ++FORcnt[11]%5 ; )
               {
                  j += (d-n-j+i-m+l-b-f*k)%100;
                  c += (a*f)%100;
                  n += (l+m-g-d*m)%100;
                  j += (e+h*j-j)%100;
               }
            }
            h -= (f+i+f+m-j*b-m+b+b-f+j)%100;
            i += (d+j)%100;
            d -= (f+g-l-i+n-i-i+g)%100;
            g += (m+i*d*m-l+b)%100;
         }
         h += (a+k)%100;
         c -= (k*d+f-j*j-n+j+b+b*k-k+c-d-l)%100;
      }
      break;

      case 2:
      {
         n -= (d+i+f-g*n-d)%100;
      }
      break;

      default:
      {
         n += (c+h)%100;
         b += (h*f-k+k*m+h-n+n*c*i*d-i-f-n)%100;
      }
      }

      c += (c-f-d-h+e+f+d*j*a)%100;
      e -= (c*l*f-d+k*g-m+b-d)%100;
      f += (c-j*g+h-g-h-j+g)%100;
      h -= (i-h-f+m-f+l-a-h)%100;
   }
   c -= (m+d)%100;
   k += (h-g)%100;
   n -= (f-e-c-g*g*j*c-l-a+b-n)%100;
   k += (h-l+l)%100;
   e += (j+c-k*f)%100;
   d -= (g+i+b+k+i+a+m*a)%100;
   b += (l+a-j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[4]%3 )
   {

   case 1:
   {
      if( ++IFEcnt[11]%2 )
      {
         h += (h+j)%100;
      }
      else
      {
         while( ++WHILEcnt[10]%5 )
         {
            do
            {
               for( ; ++FORcnt[14]%5 ; )
               {
                  l -= (n+l+j+l*d)%100;
                  l -= (d-i-b-n-l-m+g)%100;
                  a  = (n*b+h*i+k-m-d+k+m-n+l+k-j+k)%100;
               }
               if( ++IFcnt[7]%10 )
               {
                  g  = (m+f-k+k+c+f)%100;
                  h += (j-h*m+b)%100;
                  k  = (h*m)%100;
                  l -= (c+l*n-g*i-b-d-k+e+n-e+d)%100;
                  e -= (i+m*b+d+l+d-f-l-k+l+d)%100;
               }
               for( ; ++FORcnt[15]%5 ; )
               {
                  e -= (k+b+m+b+d)%100;
                  f += (n+m+l+d+b*i-l+d+b+n-b)%100;
                  k -= (j-d-a+i+n*h*d)%100;
                  b -= (c+c+b+i-f-d-c+a-l+b*l+m-k+d)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  d -= (l-c*b*k*a-a*f+n+m-j+j-g-j)%100;
                  l -= (d*d-a+n*b+f)%100;
                  i += (k-h+f+f+g*k-j+k-i)%100;
                  f -= (k+k+k+a*e-k+i-j+k-c-j-n+h)%100;
                  e -= (i-k-k-m-c)%100;
               }
               else
               {
                  l -= (b+h-d-d+f-d+e*h-k-e)%100;
                  a += (l-a-i+g+n+i-c-i-n*f-g)%100;
                  h += (g-e*k-l+f*d-l-d-m-i-k+i-h)%100;
                  n -= (j-g+l+a+i+d+c+l+d-m+h)%100;
                  n -= (f+i*d*n+m+n-i+i-h+c-j)%100;
                  l -= (j*g+m-c-c+j*g+i*f+l-n-d+n-l)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  k += (b-a*m-k-e-e+e+c-b*h+k+f-d)%100;
                  a += (e+d+b+e*k)%100;
                  e  = (d*d)%100;
                  f += (m*m-f+a*l+h+j+i-h)%100;
                  f -= (f*i)%100;
               }
            } while( ++DOcnt[9]%5 );
            do
            {
               h -= (f-a+k-c+g-f-c-h-i-i)%100;
               for( ; ++FORcnt[16]%5 ; )
               {
                  h += (n+h*h+b+f)%100;
                  e  = (f+a+c-f-f)%100;
                  i -= (d+l-i*f+k-f)%100;
                  b -= (e+j)%100;
                  k -= (l-f+f+l+a+l)%100;
                  d  = (j+e*m*i-a-c+g-c+j+i+m)%100;
               }
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  h += (j-f+l+c-a-h)%100;
                  k -= (l*h)%100;
                  k -= (l*f-d+d-b*g+h-j-e*c+g)%100;
                  n += (k+k-d+c+f+k+i+a+g-h)%100;
                  i -= (h-n-g*b+d+m+n+a-a-m*e-i*e)%100;
               }
               break;

               case 2:
               {
                  m += (a-f-f-e)%100;
                  f -= (a+k*c+l+f*c-n)%100;
                  f -= (i+i+a+n-d-c+c+b*b-c-j+a+m)%100;
               }
               break;

               default:
               {
                  a -= (c-c+i-g-l)%100;
                  f += (f-d)%100;
                  j -= (b-n*d-e-c-e-d-n*f)%100;
                  h += (h*n+f-b+n)%100;
                  i += (i*d)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  j += (j-f)%100;
                  c -= (i*l-h-h*l)%100;
                  l  = (g+k-c+g*b+k+a)%100;
                  e -= (i-k+m+j-n*f+f+d+g*d*h+n-a)%100;
               }
            } while( ++DOcnt[10]%5 );
            if( ++IFEcnt[10]%2 )
            {
               l -= (n-e+l-n+m+l+h+l-c)%100;
               f -= (h-i-n*d-l*l*a-f*m+a+h)%100;
               m -= (j+b*m-h-e*i+b*i*c-l)%100;
               g += (h*e-i+g-i*h+h-k-b+c)%100;
               k  = (g*i*l+n-b)%100;
            }
            else
            {
               j -= (n*g)%100;
               e += (b-c)%100;
               e -= (f*a-k*h-l*b-i-d)%100;
               f -= (b+j+d+g-d+a-k)%100;
               d  = (d-g*k)%100;
               g -= (h-h*c-k-d-f-e+b+i*g*l*h+l)%100;
            }
            g -= (k-i+d+d+j+g-m+e)%100;
            f -= (m+m-k)%100;
            h += (c-k+d+c+n+l+e-f-e+i-m)%100;
         }
         d += (a-j-b+n)%100;
         a += (a+e-i-b*j-d*k*e)%100;
         e += (k+l+i-f)%100;
      }
      c += (g+i-g-e+m-j+f*l-a+a-d+f)%100;
      n  = (g+k)%100;
      f  = (e-j+k*l)%100;
      a -= (a*f+e+i*j+b+c-j+a*f+m-f)%100;
   }
   break;

   case 2:
   {
      d -= (j-n+d*j-f+i-b+h)%100;
      k += (k+l+a+i*g*g*b+c+g-m+c-e-n)%100;
   }
   break;

   default:
   {
      g -= (b-a-k+n*c*d)%100;
      n += (c-k-e-m*i)%100;
      k  = (f+c-n-i*j+h+l*m+j*c+i-n*m)%100;
      b += (n*a*f+m-j+g*b)%100;
      j -= (i-c-b+d+c-h+a+e+d+j)%100;
   }
   }

   f  = (g*l-i+m+i+m+g+e-e*k-n-g-g+l)%100;
   c += (h+n-l*f+i*d+f+c-l-h)%100;
   g += (a-b+h-m+n+b+n)%100;
   l  = (n-i*d+n+g-k-n*n-i-n*c+g-g-m)%100;
   c -= (m-m-h+n-d-g+f+d-j)%100;
   n -= (i-h+j-j-e-h)%100;
   f -= (n+g-i-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F6(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[12]%5 )
   {
      do
      {
         for( ; ++FORcnt[19]%5 ; )
         {
            for( ; ++FORcnt[17]%5 ; )
            {
               if( ++IFEcnt[12]%2 )
               {
                  m -= (d-j-f)%100;
                  f -= (l+d*k-d*d-b-d)%100;
                  d += (j*j-g*b*h+g+g*m*g)%100;
                  h -= (e-b-a*i)%100;
               }
               else
               {
                  g -= (n-b+j+k+k-n*m+l+g+h+d*b+m+b)%100;
                  g += (d-g-b+b-j-j*a+f)%100;
                  i -= (g+d)%100;
                  j += (g+f+b+i*k-k+m+k-m*h+h-e*n)%100;
                  l  = (n-j-j-i+j-e-a*h-k-c+f)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  n -= (k-g-d*k-m-a+e*i*l-m*i)%100;
                  b += (l-a+n+n+b-c-c+j+k+j*i+d)%100;
                  m += (f+i*k-m)%100;
                  d -= (g+l-h*e-c-n-e)%100;
                  m -= (j-k+e-f-n-e+i)%100;
                  d += (h+a+h-d*b+i-l)%100;
               }
               do
               {
                  b -= (c-c+h+m+a*d+i-l*j-a-c*l*c)%100;
                  e  = (j-k*h+b-a-d+l+c+b+b)%100;
                  a  = (n-f*h+g-b+b+a-a+m-l)%100;
                  e -= (h+a-m+c-b+k*b+j-n)%100;
                  d += (a+f-a-j)%100;
               } while( ++DOcnt[12]%5 );
            }
            if( ++IFcnt[9]%10 )
            {
               h -= (c+e*h-d-i*j+d)%100;
               for( ; ++FORcnt[18]%5 ; )
               {
                  h  = (i+d)%100;
                  n -= (e+i-g-e+g+f-h-m-c+k-a-e-l)%100;
                  b -= (b+b*k)%100;
                  h += (j-j+f*c-k+k-n)%100;
               }
               
               switch( ++SWcnt[6]%3 )
               {

               case 1:
               {
                  b += (b*k*b-f*e)%100;
                  j -= (e+h)%100;
                  c -= (m*a+e-n)%100;
                  d -= (m-a*m-e-e*n+c+a+c-d)%100;
                  k -= (a-j+h-l-k+b-e-h+f-m+j-b+d)%100;
                  g -= (a*n+l-h-g+a+e-h+i+h)%100;
               }
               break;

               case 2:
               {
                  h -= (a+e*d-l+f*g+j-d*j+e*g)%100;
                  k += (c+b*f)%100;
                  n += (d+l*b*e-c+i*a-e+i*d+b+l+e)%100;
                  n -= (m-k-d+b-k+e-c*n-g)%100;
                  b += (a-c*f*d+h+j+c*h+a)%100;
               }
               break;

               default:
               {
                  k += (i*l-n+m-g)%100;
                  e += (i+i+i-n-f-i*h+m)%100;
                  e += (i*h*a*g-n+c-l+k+k-f*l+i)%100;
               }
               }

               if( ++IFEcnt[13]%2 )
               {
                  b  = (f*j-h)%100;
                  g += (f*e+n-e-m*c*m+m-d)%100;
                  m += (b+e+e+l+i-m*k+k-n-b+j)%100;
                  k += (m+k)%100;
               }
               else
               {
                  a += (d+i+c*m+e+n+m-h)%100;
                  c += (e+k+h)%100;
                  k += (e-n*b+e-h+n+f-g+a+d-k-f+c)%100;
                  l += (b-d+b+m-n-j-m)%100;
                  c += (n*k-b*e*b)%100;
               }
               k += (j-b-a-e-e-c+g*d-i+d*n-e)%100;
            }
            h += (e+j-l*c*k-k)%100;
            h  = (i-c-c-b-c+h+i-i+i)%100;
            f -= (j+g+f)%100;
         }
         i += (a-d-i-e+f+n*n*b+a-k-f-n+c*a)%100;
         c += (k*d+e-i*i+a)%100;
         f -= (i-n+n-l-g+f+f-h-m-b+l*c-h)%100;
         n -= (c-g)%100;
         l += (i*l*k)%100;
      } while( ++DOcnt[11]%5 );
      l += (e+i)%100;
      g  = (j-e-n-k-h)%100;
      g -= (f-g+g)%100;
   }
   l += (a-k)%100;
   e += (k-e-h+f-c*l*i)%100;
   j += (i+h*h-b-e-j*i-j*a-n+b-b-i)%100;
   h += (c-i-d+a-j+d)%100;
   j += (h-i-e*g+i*d+l-g-a)%100;
   l -= (e-h-b+b*h)%100;
   i  = (j*c)%100;
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
         for( ; ++FORcnt[21]%5 ; )
         {
            if( ++IFcnt[10]%10 )
            {
               for( ; ++FORcnt[20]%5 ; )
               {
                  n += (b-a+f+n+k+j+n+j+e*d-n-h)%100;
                  m += (e-i-n+m-f+e-a+e+k-c-d+h-a-c)%100;
                  h += (g*f-k*b-g-m-g-c+i-f+c+m+c)%100;
                  m -= (a*m+a-m+e-g-c-j)%100;
                  l += (c*g+a)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  m += (h*k*b+a+e*m-c-a+e+e*h)%100;
                  m += (i+i-a-g+m-f+d-h-m-h-m+e-m)%100;
                  g -= (c*m-l-c*i*l+m-b-j)%100;
                  n += (l+m-f+h-b*k-c-c+m*b-n-c+l+e)%100;
                  l -= (l+f)%100;
                  j -= (e*j-n-h-g-j*d-j+f+a+b)%100;
               }
               else
               {
                  f -= (e-c+m-f)%100;
                  j  = (k+i*i*j+c-h*c+e-h*c-g+k)%100;
                  d += (i+g*d-i+g)%100;
                  g -= (l*b)%100;
               }
            }
         }
         while( ++WHILEcnt[14]%5 )
         {
            do
            {
               j -= (a-i+j*h)%100;
               for( ; ++FORcnt[22]%5 ; )
               {
                  n -= (f*k*l+e-a*m+h+d)%100;
                  g -= (g+j+k-a*b*k-a)%100;
                  f  = (i+e)%100;
                  n += (n+k-m*d-g-a-m)%100;
                  h -= (d*f*e-f-a+d-a-a-k-h+c-n-i)%100;
               }
               
               switch( ++SWcnt[7]%3 )
               {

               case 1:
               {
                  l -= (l+d*n*f*d*a*m)%100;
                  i  = (m*d+c+k-d-m-f*c+g-l)%100;
                  k -= (c*h-a*d-i*n+b*k+b-d-f)%100;
                  b -= (k+m-a*d-i-k-m-k+l+i-i)%100;
               }
               break;

               case 2:
               {
                  a += (d*j+f-a-b+m-m+l+f-g)%100;
                  b -= (n+i)%100;
                  m  = (j+l+f*a+k+a+k-g*b-a*k+c-h)%100;
                  a -= (a-m+l*f+b*a)%100;
                  n  = (n+f+g)%100;
                  h += (k-i-m-e-l+a+g-i+d+h)%100;
               }
               break;

               default:
               {
                  k  = (b+c+b*l+d-b*n*k+n+i-c)%100;
                  f -= (g+b)%100;
                  f += (m-h)%100;
                  i += (j+f*b-g+c-g*n+e-a*n)%100;
                  k += (e*b)%100;
               }
               }

            } while( ++DOcnt[14]%5 );
            if( ++IFcnt[11]%10 )
            {
               if( ++IFEcnt[15]%2 )
               {
                  b += (l-b*j*h-g-n*j+c*h-j)%100;
                  k -= (f+e+n-b)%100;
                  h += (j*a+e+a+c-h-f-m)%100;
                  c += (e-d+j)%100;
                  f -= (m-b)%100;
                  d += (c+n-a+k*n+k-f-l-h-n*a+l)%100;
               }
               else
               {
                  d += (k-m)%100;
                  k += (i*j)%100;
                  d -= (c+m-k+g-c+c+d+e+k*k-c+c*c)%100;
                  i += (k+e+i+a+k*h+n+g)%100;
               }
               while( ++WHILEcnt[13]%5 )
               {
                  d += (f-a+e*b+f-n+l+h-n-m)%100;
                  f += (f-l)%100;
                  a += (f+c+m*k+i)%100;
                  m += (a+d+h+f+j*a-m+f-h-h*c)%100;
                  m -= (g*m*g+a-i+k-i*a+m-i+d)%100;
               }
               d += (j+n+i-k*b-a+f)%100;
               j -= (f+i-i-f-i)%100;
               n += (h+c)%100;
            }
            m += (g+e*m+k*d-i-e-n)%100;
            f += (h-c-j-n-f-l-l+n)%100;
            f -= (j+g+a+b+i-a+l*l*j*g+i)%100;
         }
         m -= (j-k*m*c-j-c)%100;
         j -= (n*a*d+f+j-d-h+d-i+j-m+a)%100;
         a += (g+m+n+l+k-d*c-i*n-f)%100;
      } while( ++DOcnt[13]%5 );
      g -= (i*d+b+f+n*d-d*f-c-a)%100;
      h  = (k*a+d-h-f)%100;
      m -= (j+n+f+h+j)%100;
      h -= (n-g+h+a*h+h+b-i+l-d*a)%100;
      i += (l*f-g-e-d-k*a)%100;
   }
   a += (i-n+m*e+n-b-e*i-a-m)%100;
   b += (c*j-d+d+b+j-k+n)%100;
   a += (e*h*m*e+f-m)%100;
   g -= (e-a)%100;
   g  = (i+e*c+a-m+f-l-h*g*j-m)%100;
   k += (n*f-c-d+d*c*l*n+n)%100;
   n += (n-a+c+d-m-i-m+n+g-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F8(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[26]%5 ; )
      {
         for( ; ++FORcnt[25]%5 ; )
         {
            if( ++IFEcnt[17]%2 )
            {
               if( ++IFEcnt[16]%2 )
               {
                  n  = (i*k-d-j-f+c-m+g+k+b*n)%100;
                  f -= (g-i*g*l*l+f+j+b-i+m*a)%100;
                  e += (l-l*a+a)%100;
                  e -= (m+n*m-l-m-m-c+m+e)%100;
               }
               else
               {
                  b += (d*j-k*i*c+c)%100;
                  c -= (c-j+d)%100;
                  j += (a+m+a-j*c+k-g+e-f-i)%100;
                  l -= (a*g)%100;
                  c -= (c+f+a)%100;
               }
               while( ++WHILEcnt[17]%5 )
               {
                  k += (m-h-d+j-a-h*m+i-m-k*c+j-n*f)%100;
                  j += (i+i+h-a*l-m+k*m-g+k)%100;
                  f += (a-b*i*b+a-e+j*e+n)%100;
                  c += (i-f)%100;
                  f -= (d+k-k+l*b)%100;
                  a -= (n*g-k+n-b*h*c+i+m*g+f*i*i)%100;
               }
               do
               {
                  a -= (i+c-d-f+d*d-d+d-d+e+j-i-k)%100;
                  d -= (l-d-j+n)%100;
                  i += (c*i-h+b-k-b*b*j+l+n-c+k)%100;
                  b -= (g-n+i)%100;
                  g  = (l-d+h*j)%100;
               } while( ++DOcnt[17]%5 );
            }
            else
            {
               while( ++WHILEcnt[16]%5 )
               {
                  d -= (b-f)%100;
                  g -= (b-n)%100;
                  f += (b*b-h-k*n*d-i*h-i-d+c)%100;
                  e -= (f-b+l+g+j+l+b+j)%100;
                  e  = (l+b-b-j)%100;
               }
               do
               {
                  b -= (k+e*i)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  j += (k+k-i+m-n-a)%100;
                  l -= (c*l)%100;
               }
               l += (m-d-a+d*h-l-g+h-i-b-m*b+k-k)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  d -= (b+k-g)%100;
                  j += (e*d-d-l+m-c+e*g*b+l+e+h)%100;
                  h += (n+b+j+e)%100;
                  d  = (f*i*e+a*b+b*c+a+g+e*c+a+m)%100;
                  e += (d+e-l+k*e*m-j)%100;
               }
               
               switch( ++SWcnt[8]%3 )
               {

               case 1:
               {
                  e -= (d-m-e*k-j-d+f+n-k+d)%100;
                  l -= (a-m*l*e+f-d-c+f+l-n)%100;
                  h += (a-f*j+g+h-m-j+n*n+i-g-j)%100;
                  m  = (m-l-m+c-n+g+g+g+n+i-c-e+b+l)%100;
               }
               break;

               case 2:
               {
                  d += (f-e-i*g-c)%100;
                  k -= (f-d+b-h-e-i+i*h)%100;
                  c -= (a-g+c-b-b-j+l+c+l)%100;
                  c -= (h-n*l*a-j-d-a-g+b)%100;
                  f -= (l-h*l*a+f+f+d+n-f+b-k+c+a)%100;
                  d -= (f+b-m)%100;
               }
               break;

               default:
               {
                  l += (l-h-j+j)%100;
                  l -= (j+i-a+b-a*l+c+g-m-d+m-a)%100;
                  e += (l+f+c+e-h)%100;
                  e += (e+f-e-j+e*l+e+b)%100;
                  a  = (b+j+m+i+n+j+b+l-b)%100;
               }
               }

            }
            for( ; ++FORcnt[24]%5 ; )
            {
               f -= (h+l)%100;
               g += (b-e*c*g+h+d*b)%100;
               l += (f+g+g+h-n*i+n-h)%100;
               l += (c-e)%100;
               n += (d-g+j+l*i*l+b*i-c)%100;
            }
            c += (l-k*k+j-d+k-j)%100;
            d -= (n-g*g+k+f-n-n-i*b*g+g)%100;
         }
         h += (m+g-m-k)%100;
         c -= (g+b+j*j+f-l+h*j-j-l)%100;
         h -= (d-c)%100;
         a += (j-c*k-k)%100;
      }
      c += (a-d-c)%100;
      n -= (e+c-f+n-e*a-g-d)%100;
   } while( ++DOcnt[15]%5 );
   g -= (g-l)%100;
   d += (h+n+h)%100;
   b += (h+h-f*j)%100;
   i -= (b+n-c+d-d*j-h-b-l-g+i+n)%100;
   n += (i*h+m*m*f-i-b)%100;
   n -= (g*b-k-e)%100;
   i -= (f+f+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[14]%10 )
   {
      for( ; ++FORcnt[30]%5 ; )
      {
         if( ++IFEcnt[20]%2 )
         {
            b += (l*d-a+n*i-l-h*l-k-c+g*l-g)%100;
            g += (b+h-g)%100;
            k += (k+g-m+i-l+l+e-j*m+g-k*d)%100;
            n -= (e+a-b*i-a)%100;
            e -= (k+j-f+i-d-h*b-h-l)%100;
         }
         else
         {
            while( ++WHILEcnt[18]%5 )
            {
               do
               {
                  c -= (d*f-e-i+m)%100;
                  f += (k-l-m+k*n+k*k-c+a+c-n*g)%100;
                  g += (k+l+k+n+h+c-a-f-d)%100;
                  b -= (b+b*h-i*k-j*a+a+m-m)%100;
                  k += (m-l+d-c+n+h+d-n-j+j*j+f-a)%100;
               } while( ++DOcnt[18]%5 );
               g += (k*n*e*e)%100;
               for( ; ++FORcnt[27]%5 ; )
               {
                  d -= (i-d-a-c*n*b-h)%100;
                  g += (k-g+f-m-g-m)%100;
                  h += (m-d-b-k*n+c-h+k-d+d-h+f+e)%100;
                  m  = (b+f+j+m*g-a+d-k)%100;
               }
            }
            
            switch( ++SWcnt[9]%3 )
            {

            case 1:
            {
               if( ++IFcnt[13]%10 )
               {
                  j -= (i-k-d-j-n-g+h-j*a+i-l-a)%100;
                  g += (a-k+j-j+d-l)%100;
                  e  = (h+k-j-g)%100;
                  f -= (f*l+n-h+e)%100;
                  m += (j*l+l-l*j)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  d += (e*g+m-g+g+j)%100;
                  h += (b+j-e-k-i-a-c*d+m-f*f-e)%100;
               }
               else
               {
                  m -= (j*c+c+j*b)%100;
               }
               while( ++WHILEcnt[19]%5 )
               {
                  e -= (b+h-a+a)%100;
                  m -= (i+c+c+h+m-g-b-a+d*a)%100;
                  j += (n-e-i+c-c+c-j+c+c-m-c-e)%100;
                  g -= (h+j-e*b-f-h+e-f+e-g+i-j+i*h)%100;
                  b += (k-m+d+d-h)%100;
               }
               do
               {
                  l += (d+e-j-k-l+j)%100;
                  l -= (k-c+g+m+k*c-e*i)%100;
                  c += (j+l+c+a-i+k+f*b+d-k-d)%100;
                  a += (l*n-e-h-k+f*f*b-k)%100;
               } while( ++DOcnt[19]%5 );
               for( ; ++FORcnt[28]%5 ; )
               {
                  h -= (f*f-c+e+h+l-f+k+j+g-d)%100;
                  l -= (i-m)%100;
                  i -= (a-c+l-f-d-i-a+m+m-c)%100;
                  e += (h+f+l+e+a-d*j)%100;
                  a -= (d-i-h-c-c)%100;
                  i += (b-n+a+g)%100;
               }
               for( ; ++FORcnt[29]%5 ; )
               {
                  n += (h+k-f+m+j+e+m-e)%100;
                  b += (d+m-l-c-k+a-b)%100;
                  c += (g+g-a-g+g-j+h+d-e+n)%100;
                  h  = (f-e)%100;
                  l  = (j+n+b*c+m+j)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[19]%2 )
               {
                  g -= (n-n+m+i-c-n)%100;
                  l += (n-m-c-h-m)%100;
                  h -= (a+l+a+k*d*a*g)%100;
                  d += (f*h)%100;
               }
               else
               {
                  b -= (n+d+b-n+e-c)%100;
                  m += (b-i+g+i+l+f*k-k)%100;
                  k += (f+c-d+d+m+g-d*b)%100;
                  d += (c-m-j+e+h*a)%100;
                  m += (j-n-d+e*m+e-d*a-g-a*a-l*c-m)%100;
               }
               while( ++WHILEcnt[20]%5 )
               {
                  h += (j-k-d)%100;
                  j  = (k+c*j+b)%100;
                  n -= (l-e+n*f+h)%100;
                  n += (c*l*b+k-c)%100;
                  h -= (h-b-h+g-c*a*m-k-c)%100;
                  e -= (g+i+k+n*j-n-k)%100;
               }
               f -= (h+c)%100;
            }
            break;

            default:
            {
               a += (c+m-n)%100;
               m  = (n+k+f-h-j-j)%100;
               a += (d+b*c-j*d+i+j-k+k*l+g+b-b+a)%100;
               f -= (c+n+j-b-a*e-k)%100;
               f -= (n-h-i-b-h-i-a*a-d+f+i)%100;
            }
            }

            f -= (h*m*g+n+l+k-l+f)%100;
            b += (b-n-c-m*f)%100;
            n += (l+j+f+d-k-f-b-n+j)%100;
         }
         i  = (m-f-i-e-e+h-j+c+b*j+h-k+e+d)%100;
         j += (d+c-i-d+a*m-l-c+a)%100;
         f -= (h-c+n+k+f+f+g)%100;
         g -= (g+j+l*n-f+n-j*j+l-c)%100;
         b += (g-l+f+f)%100;
      }
      b -= (j+c-l+h)%100;
      g  = (n+n+j*n*a-i-b)%100;
      d += (g-k-d+f-j+b+l)%100;
   }
   d -= (i+c+b*c-h*a+c)%100;
   d += (n-m+e)%100;
   m -= (m+l+c-h*m+h-f-c+m*c)%100;
   f -= (m+d)%100;
   k += (d+c*m)%100;
   j  = (e*i-m+k+a-j-k)%100;
   b += (h-c)%100;
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
         i += (c+e*c-a+j+e-c+f)%100;
         for( ; ++FORcnt[33]%5 ; )
         {
            
            switch( ++SWcnt[10]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[21]%2 )
               {
                  k += (f*e+i+h)%100;
                  h -= (i+h+l+b-k-b+j*a+g-g*c+k)%100;
                  d  = (j-j+c+j)%100;
                  e += (f-j*g-e-f-n-i+d+h+i+l-d+c)%100;
               }
               else
               {
                  n -= (m+d-i-i+j+i-n-h-n*e*i+g)%100;
                  l -= (h*a*m-e-h+h*i+j)%100;
                  e += (e-j-h*k-i*e+e)%100;
                  k += (a-e+k-j-m-f+i+j+j)%100;
                  j -= (g*j-a-g*i-j-h*f)%100;
               }
               while( ++WHILEcnt[21]%5 )
               {
                  j -= (n-h+b*l-e)%100;
                  f -= (c-k-d*g-a+e*f)%100;
                  h -= (m-e-m+a-l*h+m+k+k-l*d)%100;
                  e -= (g-n+a-i-j-g-m-k-e*a-d-m)%100;
                  c -= (c*m+h-f*h-e*m+j*d+b+a+b)%100;
                  h -= (g-f+b-l-c)%100;
               }
               do
               {
                  b += (b-m+g+h+j-h+b-a)%100;
                  j -= (c-h+m+d-f*f+k-j+c+e-k*a)%100;
                  g += (d+j-h+e+d-d-l*b-f)%100;
                  b -= (h+b-h*j+n+i*d*a-m+k+b-a-l)%100;
                  k -= (g+g+h-e+j-i-h+d-e+l+l)%100;
               } while( ++DOcnt[21]%5 );
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[31]%5 ; )
               {
                  e -= (j*l*f+g-k-d+b-m+e)%100;
                  g += (n*h+j-m)%100;
               }
            }
            break;

            default:
            {
               if( ++IFcnt[15]%10 )
               {
                  n -= (f*l*d-f)%100;
                  b += (d-b-n-b)%100;
                  i += (i-b-j-h*l)%100;
                  m += (m+j*n-c-n*e+d*c-g-g-c+n+e)%100;
               }
               for( ; ++FORcnt[32]%5 ; )
               {
                  l -= (d+l-h*k)%100;
                  e += (n+f*j*g+j+l)%100;
                  l -= (b*j-k+n*k)%100;
                  n -= (k-d)%100;
                  c -= (f*c+c-m*n-a)%100;
                  m += (c+e+d+l+a+l+g)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  i -= (c-e*d-i*j)%100;
                  k -= (l+a+h+c*c-c-a)%100;
                  m += (k-f*l-b-g+h*c+k-i-c+c+l)%100;
               }
               else
               {
                  d += (j-a*h*d+d)%100;
                  a  = (d*e+c+j)%100;
                  f += (m-j*h)%100;
                  h -= (e-d+l+i)%100;
                  n  = (i+i+i-g*n*k-l*f+e)%100;
               }
               while( ++WHILEcnt[22]%5 )
               {
                  h += (b*i-d*e*c)%100;
                  n -= (a+n+g-a-m)%100;
                  f += (c*g+m+k-i*g+h-m)%100;
                  g += (a+c*h-h-c+j-b-e-n+b*c+l)%100;
                  m -= (f*m)%100;
               }
               f += (f*i*h+l+c-l*d-k)%100;
            }
            }

            g += (e+i*b-g+c)%100;
            n -= (j*d-h-a+a)%100;
            c += (n-a+k-c+f)%100;
            m -= (i+c-k)%100;
         }
         d -= (k+g+e+l+e+e+d-e+d-g*e+g+h)%100;
         b -= (n-a+m+f+a*m+c*j-f+l+l)%100;
         c += (a-i+j-m+m+f+a-h+a+f*k+c-d)%100;
         m -= (f+m*j*l*n)%100;
      }
      f -= (d+c-a+h*a-k-j*g)%100;
      b -= (c+a-m+l-a)%100;
      n -= (h-h+f-c*e*n-n+a+g-e)%100;
   } while( ++DOcnt[20]%5 );
   h += (n-a-m+h-b+k-b*g)%100;
   i += (k+h)%100;
   m  = (d+k+d+i+i-d+k*i-m)%100;
   m -= (l+h)%100;
   i += (i-k-n-l-e+b+k+n+j)%100;
   g -= (j+f*c*c*k+b-l-i*j+c+h-g*h+e)%100;
   e -= (d-f*n+m+i-g-g*f-n+m*d*d+j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F11(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      h += (h+c*a*a-d*n)%100;
      for( ; ++FORcnt[37]%5 ; )
      {
         
         switch( ++SWcnt[11]%3 )
         {

         case 1:
         {
            if( ++IFcnt[17]%10 )
            {
               if( ++IFEcnt[23]%2 )
               {
                  e += (g-k+d+b-h-h-d-a+f+n-h+m)%100;
                  i += (j-m-j+k+n+f+n+n)%100;
                  j += (f-j-b)%100;
                  c += (k-f-l+m+i-d-h+f-k)%100;
                  b  = (g+h-l+e*b*l)%100;
                  b -= (g-e+m)%100;
               }
               else
               {
                  f -= (g-c+c-a-g+g-g+j-i)%100;
                  e += (e*f-m+f+k*h-c+e*l-n-h-l-e)%100;
                  k += (l+k)%100;
                  f -= (h-d*a-h-k-f+n*a-h)%100;
               }
               while( ++WHILEcnt[23]%5 )
               {
                  i += (a+e-c*m+l-c-g-g-f+h-f)%100;
                  l -= (n+a-l)%100;
                  f += (b+e*c)%100;
                  h -= (i*a-c)%100;
                  k -= (d+i-l*k-e+i-g+g+a-j+g-g)%100;
               }
               do
               {
                  k += (f+b)%100;
                  e += (n-f-g-n*j-m+j+d-j)%100;
                  i -= (b*k-m+l*a+b-a-c*k*e-a)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  m += (f*c*c-g-b+d-f+m-h)%100;
                  g += (k+b*g+g)%100;
                  m -= (g-k+d+e-i*j-m+c+l*f+a+f+e)%100;
                  i += (c*c+k*d*k-d+g*c+m)%100;
                  c -= (j*m-l-c-f+g)%100;
               }
               for( ; ++FORcnt[35]%5 ; )
               {
                  m  = (e*m-i)%100;
                  e += (c-a-m*i+m+l+j-a-g-c+c)%100;
                  e -= (k-k)%100;
                  i -= (e-b+g+e+d+m-n*f*m-h+h-n)%100;
               }
            }
            if( ++IFEcnt[24]%2 )
            {
               k -= (m-i+e+b-l+b-f)%100;
               c += (m*f*h*m*h)%100;
               m  = (f*e*k+e-m-g*n-c-a*f-h-m)%100;
            }
            else
            {
               while( ++WHILEcnt[24]%5 )
               {
                  d += (k+a*k*d-c-n*h-g)%100;
                  f += (c-e+c-a-g+f*m-a-l+d)%100;
                  e -= (d-j-j+e+b+f-k-k+h+d-i*f)%100;
                  n -= (n+n-b-d-h-m)%100;
                  l -= (h+g-k+h)%100;
               }
               do
               {
                  m -= (g-n+a)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[18]%10 )
               {
                  m  = (h-a+m-g+b+f+h-f)%100;
                  d -= (n+d*m)%100;
               }
               d += (b+l)%100;
               for( ; ++FORcnt[36]%5 ; )
               {
                  g -= (g+i+j)%100;
                  k -= (a-i+l+k+j+k-h+n-h+i+g+c)%100;
                  e += (k+l-h+n-d-e)%100;
                  f -= (k*n+i-j+m*h+n-b+m-h-l+n-k*j)%100;
                  f += (i-c)%100;
               }
               
               switch( ++SWcnt[12]%3 )
               {

               case 1:
               {
                  g -= (j+k+j*k+a-h*n+a+d-g+d*i)%100;
                  l -= (f*f+n+a+g*h-b-m+d-i)%100;
                  f += (h+j-k*h*g)%100;
                  n -= (d+l+d-i*c-a-k+e+f-n+l-l-n-l)%100;
               }
               break;

               case 2:
               {
                  c -= (e*l*d-g+j+f+e)%100;
                  c += (i+g+k-m*f-m*i+l-k-d-h*a+m)%100;
                  l += (b-c*b+e*l*n)%100;
                  a += (n*l-i+g+b*f)%100;
                  e -= (m-n)%100;
                  k += (e-b+i*d+d+e*d*j+m*i-c)%100;
               }
               break;

               default:
               {
                  c  = (g-c+b+k+f-j-n+k-m-d*a+f*d-i)%100;
                  d -= (e-g-b*n+b+m)%100;
                  j += (l*b-c+g*g-n+l+e+g-c-j-d-a+d)%100;
                  k += (e+n+g+b*a-k-n-b-m+g-c-d+n+e)%100;
                  c -= (n-j+l+a-i+e-c-d-e+e)%100;
               }
               }

            }
            k -= (g+m-j+b-l*g+a-h*j+b)%100;
            c += (j+m)%100;
            a += (h+m+d)%100;
         }
         break;

         case 2:
         {
            b += (i+j-i-k-c-m-g-n-b-f*e*m)%100;
            j += (c*d)%100;
            h -= (k-j+c+j-l+m*k+m-d+b)%100;
            k -= (d-j+a+n+h+b-e-m*l)%100;
            e -= (c-i-n*g)%100;
         }
         break;

         default:
         {
            c -= (m+l-g+m+m*m-i-j+n)%100;
            f += (k-h)%100;
            f -= (k+b-h-d*n+e-a+a+k-e*j*k)%100;
            g -= (l-h+g-b+a-d*d+g-c+e+f*n-h)%100;
         }
         }

         m  = (m-l+n+l-m*f)%100;
         g += (b-d+b+c+b-h-k+e+l*l-e)%100;
         a += (c+g+i+n+e*a*g+g+a+m-j+b+b)%100;
         c += (g-b-i-b-g+h+m)%100;
         i += (m-h-d)%100;
      }
      i -= (n*c+g-i+c+g+m-e+e-f*e-k)%100;
      e -= (j-n-c*f+a+i*m*h+e)%100;
   } while( ++DOcnt[22]%5 );
   f += (g-f-j+f-h+g)%100;
   d -= (e*l-j-g-m*k-g-n)%100;
   m += (n+k-l)%100;
   k += (b-n*m-c-n+i*a)%100;
   n -= (m-e*j-j-g+c+k*j-c)%100;
   e -= (d+e+j-j+a*b+c+n+h+g+n*d+e)%100;
   h += (f-f+g+k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[26]%2 )
   {
      h += (b-f-h-n-f-d)%100;
      h += (h+a+a-l-h-b+e)%100;
      i -= (k-d+c-d-j*f+n+e*l+g+a*j)%100;
      n -= (b-k-g-a*b+n-f-n+d)%100;
      f -= (h+j*n+c+f*g+h+f)%100;
      c += (d-c-e+i-g-d)%100;
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
                  l -= (i-h+c-f+g+f+d)%100;
                  i -= (g-c+d+n+k+k)%100;
                  d += (l-h-n*c-a*e+m-g)%100;
                  m += (c-h)%100;
                  i -= (n-m+b-g-m*l*e)%100;
                  n += (a-n+l-d+g+h-h*g*k+a+f-d+i-k)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  c -= (f+l+e*i-e*a+h*m*i+n-g-d+d)%100;
                  l -= (e+g)%100;
                  j += (g+a)%100;
                  k -= (c*f-h-m+j-n-c-n-c+k-h)%100;
                  k -= (g+c*k-b-j*h*e+a-i-l*c+m)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  g += (c-j+m-k-e+j-g+g+e)%100;
                  l += (m+j-n*d*f-f+b-n*k)%100;
                  e += (a-d+g-g-g-d-m+a*g*k-i+j-j+a)%100;
                  c  = (i-e-h)%100;
                  f += (h+a-k+e*a+k-b+e-c+h+e)%100;
               }
               else
               {
                  k += (g*k*m+c+d+g+f*g+h+g)%100;
                  l += (b*m+f*a-l+l-e+c+e)%100;
                  a -= (c+c-d-i-j*c+g-g+a-e-a)%100;
               }
               while( ++WHILEcnt[25]%5 )
               {
                  h -= (j+m)%100;
                  f += (n-j+i*h*l*h-e-h+m-n+f)%100;
                  i -= (j+i)%100;
                  k -= (i-e+c-c-k*h-d+c)%100;
               }
            }
            do
            {
               j -= (b*f*a*j+n+f)%100;
               for( ; ++FORcnt[40]%5 ; )
               {
                  j += (e+c)%100;
                  k -= (b-a+k*g)%100;
                  d -= (a-n-i-g-d)%100;
                  a += (d+b-d+d-k+d-l+m-a*a-k*h*d+a)%100;
                  c += (n-j-g+c+a-l+h+n*k-i-k*i+j+i)%100;
               }
               
               switch( ++SWcnt[13]%3 )
               {

               case 1:
               {
                  k += (b+j+c-d)%100;
               }
               break;

               case 2:
               {
                  b -= (c+n+n+c+f-f+h+k-b-d-c+m-i+c)%100;
                  c -= (a-m-h+i+c-m+k)%100;
               }
               break;

               default:
               {
                  g += (c+g-h+f*a)%100;
                  h -= (m+e*g+i-c-j*e+n-b*d)%100;
                  h  = (c-m+m-f-h-k+i+h-b-n+i-d*e)%100;
                  d -= (d-d*k+g-e*h*b)%100;
                  h -= (l-n+l)%100;
               }
               }

               if( ++IFcnt[20]%10 )
               {
                  i  = (f+g+j-f-f-a-a-c-g-h+n*c*c-c)%100;
                  i -= (l-i-b+l)%100;
                  e -= (l*f-i-k)%100;
                  m  = (n+l+c-i+g+k*f-n*h+a-e-d-k-f)%100;
               }
               e -= (g+j+l-c+k+f+c+b*e-e-h)%100;
               m += (e+b-i-d+m*f-a)%100;
            } while( ++DOcnt[26]%5 );
            e += (m-h)%100;
            d += (c*f-e-g-a*j)%100;
            g += (h+e+b-l)%100;
         } while( ++DOcnt[25]%5 );
         c += (d-f+l-e*a-i+l)%100;
         d -= (m-j+i-n+f+b-j-c-i*m*h*i)%100;
         j  = (d*i)%100;
         g -= (c*f+n-l+f)%100;
      }
      c += (i+i+f-g+g-n*j)%100;
      f -= (h+m-b-e-b-j+h*l+f-e+e+e)%100;
      m += (h+n-b*j-e)%100;
      c += (h*j*a-m-g*b-c-d*g*l+l+l+d)%100;
      k += (h-a+f)%100;
   }
   c += (a+b-a-b-k*m*l*d+g+f*n-b)%100;
   f += (e+g-n*n)%100;
   f -= (n*f-c+m-j*d+n*h+e-k)%100;
   i -= (h-b)%100;
   m += (h+d+n-a+b)%100;
   b -= (b+e+a*m+c-c-f+e)%100;
   g -= (e-a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F13(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[28]%2 )
   {
      n -= (d-j+j*b-e-g-c+h)%100;
   }
   else
   {
      while( ++WHILEcnt[28]%5 )
      {
         do
         {
            for( ; ++FORcnt[42]%5 ; )
            {
               for( ; ++FORcnt[41]%5 ; )
               {
                  i += (n-h*k-n+c-f-i+b+j-m-c-b+l*d)%100;
                  a += (g*k+j-e-n)%100;
                  m -= (b*c)%100;
                  j -= (n-j*m+n-c*d+g)%100;
                  a += (m-c-n*d)%100;
                  j += (l-b*h+k)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  e -= (l-a-c+l-i)%100;
                  n += (j+d-l+j*c+k-b-l+f)%100;
                  c  = (h*m-e+h-g)%100;
                  l -= (l-c)%100;
                  d += (b+l+n+m)%100;
               }
               else
               {
                  d  = (i+m+h*f+a+n+k-j*i+e)%100;
                  l -= (a*j-n)%100;
                  n += (b+h-k+b*l-m+b-j+i)%100;
                  f -= (d*n)%100;
                  e -= (e-d)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  e -= (n+d)%100;
                  d += (b+j*i)%100;
                  n  = (f+a*l-n+e+g+n-b+k+n-i)%100;
                  a -= (k+a+e)%100;
               }
               do
               {
                  e  = (e+b*i-i+g-a-g-l+f-b*m)%100;
                  j += (k+l*d+a+m-d*k+j*h-i-c)%100;
                  j -= (f+l-a-i*h-d+i+e-k-e)%100;
                  a += (b-h+g)%100;
                  f += (c-f+n+m+m+l)%100;
                  f -= (l+c+i-n-i-d+d+b+n+a)%100;
               } while( ++DOcnt[28]%5 );
            }
            if( ++IFcnt[21]%10 )
            {
               g -= (k+n*c+h*n-m+l+h+f*e*b-e+l)%100;
               for( ; ++FORcnt[43]%5 ; )
               {
                  h += (b-a-l+m)%100;
                  l -= (d+m+g*d-h+m+g-j+j+h+d)%100;
                  k += (h-l+e*j-j-c-n-a)%100;
               }
               
               switch( ++SWcnt[14]%4 )
               {

               case 1:
               {
                  k  = (m+g-b-b+m+j-j-e+m+m-k+j)%100;
                  i  = (g+c)%100;
                  a += (c+g+h+e+c-f+e)%100;
                  a += (k-l+c+m-n*h+g-m-h+m+k*h)%100;
                  k -= (a*d-l-a+j+a-b+e*f*f+j+g)%100;
               }
               break;

               case 2:
               {
                  e += (b-c)%100;
                  m += (f+h+f+i-c+i+d*m-l+a-a-j-h)%100;
                  k  = (a-j-n-e*i+i)%100;
                  d -= (b+c-a-a-i*i-n-a+a-n-j*g+e)%100;
               }
               break;

               case 3:
               {
                  h += (d+b)%100;
                  k -= (l-m*n*g*l-c*a-c-c)%100;
                  n -= (j-l+n*n-e-e*b+g*k)%100;
                  b += (a-d*e-a*d-n+c+a+f*m-l-c)%100;
                  g -= (e-n+j-n*k+d+a+f+l)%100;
                  l += (d-h-a-m+l-l-c+f-d-n-h)%100;
               }
               break;

               default:
               {
                  c += (g*a-n-m*a)%100;
                  m  = (n+l+e+k-c+l+l*k+h+f)%100;
                  l -= (g-c+h*j-l-k+b*j+d-e-i)%100;
                  b -= (a-g-k-j+l+a+h-i-m+j+i)%100;
                  k += (i-k+g)%100;
               }
               }

               b += (b+f-a-c+d)%100;
               j -= (h+f+c+d)%100;
            }
            m  = (e+k)%100;
            h -= (f-m+d*k+b+a)%100;
            l += (l*l-f+e-k-j+k*d)%100;
         } while( ++DOcnt[27]%5 );
         j += (e+i+a+g+i*b-c-i+d+k+h+m-e-h)%100;
         e += (k+m)%100;
      }
      e += (i*j-l+a-e-g+b*b*d*c*j)%100;
      f -= (c+a+c+i-n+n+m)%100;
      n += (l-g-e*f-n-n+k+n)%100;
      i += (d-f*k+c+a-i-e-i*a)%100;
   }
   g -= (f*h*a)%100;
   j += (n-c-i*b)%100;
   h -= (d+e+k+f+k+j)%100;
   f += (d+b+e-e-k*f)%100;
   j += (h+h+j-c*k+d-j+h+b-c-k)%100;
   i -= (h-n)%100;
   l -= (h*m+l+g*d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[31]%2 )
   {
      k += (i+k-k+j+e-g-l-a)%100;
      c -= (n-n)%100;
      k -= (l-f*c-e+n*b+f)%100;
      m -= (a-c-l+f*k+i-h*a+e-a+m-m-m)%100;
      h += (g*j+j-d-n+b-f-c-a)%100;
      g += (k+n+a*c+n+d-l)%100;
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
                  d += (l-g+d-i-g)%100;
                  d -= (l+b+f+l-d+f*a*b-c*n-f+i)%100;
                  k += (l+e+k-c*i*n-j-d-b*n)%100;
                  b += (d-h)%100;
                  b += (h+l-e-c+b+a+i+a-i-k*h*i+i+h)%100;
               }
               for( ; ++FORcnt[44]%5 ; )
               {
                  i += (f*j+h-n+l+f+h-m+c-e-k-b)%100;
                  j -= (n-h-c+l+i+b+i*g-c+h)%100;
                  e -= (l*l-n-j+i+c-h-m)%100;
               }
               if( ++IFEcnt[29]%2 )
               {
                  c -= (m-i-n)%100;
                  l -= (j-f+b-f-g*h+d-a)%100;
                  m -= (h+g)%100;
                  f -= (g-e)%100;
               }
               else
               {
                  h += (e-d-n+a-j+j*e)%100;
                  k += (g-c-a-l*l-a-d+e-k-b*n-n+j+h)%100;
                  h -= (j*j-f*k-b)%100;
                  c -= (j+h+c*b+f-c*m+j)%100;
                  i += (b+j+l)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  n  = (a-k*f+n+c-k-k+a-a)%100;
                  j -= (g+j+m-m-b)%100;
                  n -= (c*b-j-c+d-h*f-h)%100;
                  i += (b+b+j+n*n+l+b+e*i*m+k+d)%100;
                  c -= (n*a)%100;
                  n  = (g+j-f+i-n+l+i+g+g+e-c)%100;
               }
               do
               {
                  j += (l-m)%100;
                  h -= (f-n-n*i+h-g-g-j+m)%100;
                  m += (f+e+c-h*n-b*c*d*e+g-k+e)%100;
                  e -= (a-f-d+j)%100;
                  m += (e-l-h-j-d*a+f)%100;
               } while( ++DOcnt[30]%5 );
               i -= (i-i*n*e*a+n-k-h*m-f+d-l)%100;
            }
            for( ; ++FORcnt[46]%5 ; )
            {
               
               switch( ++SWcnt[15]%3 )
               {

               case 1:
               {
                  m -= (c+c)%100;
                  j -= (l*i+g-h-d+h*b+j+f+g+k-g+k)%100;
                  e -= (l*n-j*b-c-l-b-h+m+h-h-j*a-f)%100;
                  k  = (a-i-a+j+a-d-d-l+h-c)%100;
               }
               break;

               case 2:
               {
                  g += (e*n-f+c-g+m*f-k*e-b)%100;
                  c += (i*j-e-d-m-g*e+b+n-g)%100;
                  l += (i+e-m+b*m-f-n+h+n*k+l+m*j)%100;
                  a -= (i-e-g+n)%100;
                  k += (a+i-g-b-a+i+g-n+l)%100;
                  b -= (m*g)%100;
               }
               break;

               default:
               {
                  c -= (j-j*k-d*i+e)%100;
                  e += (m-m-b+e+l+e-n)%100;
                  f -= (e+c+d-m+b-m+m+e+i+n+a-h)%100;
                  a += (g+a*j-i-g+a-d)%100;
                  k -= (d-l-c*g*k+i+i*f*g*j+j*a)%100;
               }
               }

               if( ++IFcnt[23]%10 )
               {
                  g -= (b+m+k+e+c-l+f)%100;
                  b -= (f-l+k+f-h)%100;
                  i  = (m+j-j)%100;
               }
               if( ++IFEcnt[30]%2 )
               {
                  e -= (d*f+f-i*d-c+d+l+k-e+c-l)%100;
                  l -= (n-j+d-l-k*c+h+f+b+c+a)%100;
                  m += (b-m-m)%100;
                  n += (c+k-g+i+g-h-m+b+k*n+i)%100;
               }
               else
               {
                  m += (c-k*n-i*d-g+f)%100;
                  i -= (j*m-g-m+j*j+j+n+n*h+i)%100;
                  k += (e+d+k-b-e*k+d*d*g-a)%100;
                  i  = (d+l-b-l+f*j+g+m+h*n-l+i-a*h)%100;
                  n += (m-l-e*l)%100;
               }
               d -= (i-l+j-d*m+k+c)%100;
               j -= (i+h+h-c-k+e+a+e+g*h+k+c-h)%100;
            }
            k  = (m-i-e+k-m-j)%100;
            m -= (j-n-a-g+h+h+e+a)%100;
         } while( ++DOcnt[29]%5 );
         b -= (f+l*j-n-h+a*e)%100;
         n -= (c-i-d+m+e-i)%100;
         n -= (b+e+b*e+g*a+c+d-a-g*h-m)%100;
         i += (m+d-j-d-k+h*d+j-h-b-f-m*k*h)%100;
      }
      a += (j+d*i-n+g-e)%100;
   }
   c += (m-f+h*j-c-h*m+b)%100;
   c += (b-c*m-d+j-h+b-c+i-l+e+f)%100;
   j -= (i*d*m-h-j-j-a-c+i*g-l*f-g+i)%100;
   c -= (b-b-g*i+h+e*i+b+j-g)%100;
   l -= (a*j-j*j-e*b+j+c+f*f-m+g)%100;
   f += (h+e-d*l-h+h+b)%100;
   h  = (k+a+e-m-n*m+k-e*a+h*b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F15(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[32]%5 )
   {
      do
      {
         for( ; ++FORcnt[49]%5 ; )
         {
            for( ; ++FORcnt[47]%5 ; )
            {
               if( ++IFEcnt[32]%2 )
               {
                  m -= (g+d-g+k+h-k+a)%100;
                  k -= (i+n+k-h-m)%100;
                  i += (a+h+h-i+b*j-l)%100;
                  d += (c+f)%100;
                  j  = (i+n+j+n-g+n+k-e*k-b)%100;
                  e += (e+g-i+h)%100;
               }
               else
               {
                  e += (m*g+b+h-h-i*c-a*k+f-h)%100;
                  g += (h-b+a-d*d-i+g+d+h+d+j-l)%100;
                  e -= (g-c-j-l-a+l+f-d)%100;
                  g += (j+i+k*e-e*g-h+b)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  j += (g-l-b+d*j*l)%100;
                  l -= (l-n-m)%100;
                  j -= (j+f+n+h+k-k+c-i*k)%100;
                  n -= (b*k-c-e+i+b-g-d)%100;
                  b += (j*j)%100;
               }
               do
               {
                  i += (n+e-j-g-b)%100;
                  g -= (g-c+k+m+k-j+a+a-g-l)%100;
                  m -= (m+c-n+b-a-d-i+b+h*a-i)%100;
               } while( ++DOcnt[32]%5 );
               if( ++IFcnt[24]%10 )
               {
                  k += (e+e+l+i+d+l-k-k+c+d)%100;
                  a += (d*m+c+h+k+i*f-c*g-g+l*b+m*a)%100;
                  a  = (a-l-k+m+c*l)%100;
                  d  = (l-m-j+b-j+e*h+i-m*c)%100;
                  l += (k*l-c)%100;
               }
               c += (l-d*m+f*a-b-a-d)%100;
            }
            for( ; ++FORcnt[48]%5 ; )
            {
               
               switch( ++SWcnt[16]%4 )
               {

               case 1:
               {
                  h -= (m+j-f+b*k-n+l+l-m-a-b*c)%100;
                  g += (j-f+g+n*k-d+a-n-f)%100;
                  i -= (m-e*a-g+m*k+c-m+a-n+n-j)%100;
                  f -= (m+b-f-j-m+m+a*e-a+n-g-a)%100;
                  f  = (j-l+d-k)%100;
                  j -= (m+e+k-b+h-k)%100;
               }
               break;

               case 2:
               {
                  e -= (d-g-d-i-k-j+m*n)%100;
                  n += (a+e-a+d-d+k+a+m*a*l+m+k+d)%100;
                  f += (e-f*b-f*m+h-e+c+g*n+n+f)%100;
                  b  = (e*m+c-g-a-g-i)%100;
                  n += (e*g+c-f)%100;
               }
               break;

               case 3:
               {
                  b -= (j*f*a)%100;
                  b += (f+n+n+b*d+l)%100;
                  j  = (g-l+h+g+c+i*h+a-d)%100;
                  d -= (c+h*h*d-m*e-c*i+d-n)%100;
                  d -= (g*c+i+h+l-b+b-a-n+i-m)%100;
               }
               break;

               default:
               {
                  e += (c*f+g*f+f+a+i*b+i*n-g*k)%100;
                  b -= (a+f+i+l+e*i-b+j+m-j+e-c*d+i)%100;
                  l  = (g*g+c+f+d-e+b+k-e*h+k-c)%100;
                  l  = (a-m+h-e-c)%100;
               }
               }

               if( ++IFEcnt[33]%2 )
               {
                  h -= (k-i-c+j+g+g+f)%100;
                  e += (e-m+m+j+e+h+h-g+i+f*n+h+b)%100;
                  h -= (c-d-l-d)%100;
                  c  = (k+d-j+i*e)%100;
                  a -= (n+i-n-c+m-j+m+g+k+k-g+d-h)%100;
               }
               else
               {
                  h += (n-h+g-f)%100;
                  l -= (l-l*a+l+m*g-i+h+i-e-j*m)%100;
                  c += (d-c-c-l*e-b-i-e+k*m-i-e-b)%100;
                  f -= (j-i-a*j)%100;
                  a += (e-h-i*e+a+a-k-d+a+i*d-b)%100;
                  a += (d-h-e-l-h+b-c+k-j*g)%100;
               }
               n -= (n-k+l-g)%100;
               c += (g-a*f)%100;
            }
         }
      } while( ++DOcnt[31]%5 );
      g += (e*l-n*k-j-h+g-e)%100;
      j -= (f-b+a*j+e-c-g*g+e-c-h)%100;
      n -= (c-n*l+e-i+d)%100;
      m += (l+i+l-f+i*j+f-m*c)%100;
   }
   i -= (a-a-l+n+b)%100;
   m += (l*l-k*d+b-l-e-g-h-e+j)%100;
   d += (l*e-n*b+g*n-k+b+c)%100;
   m -= (g-g-b*c)%100;
   j -= (d+f-b+f-h+c+e+c-e-l*m+i)%100;
   g -= (b*g*g*a-j+m-c+c-g)%100;
   e += (a*h*i+g*b*i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F16(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[35]%5 )
   {
      do
      {
         for( ; ++FORcnt[54]%5 ; )
         {
            if( ++IFcnt[25]%10 )
            {
               for( ; ++FORcnt[50]%5 ; )
               {
                  d  = (n-i*j*d+c+g+m-l-i-g-f+i-i+k)%100;
                  h  = (i+k+k-b-a-a+k*j)%100;
                  h += (e+c+c-k+c)%100;
                  a -= (l-c-i-k*n-l*g+j+b-h*j-k-b-n)%100;
                  g  = (n-h*j-c+a-g*k*f+l+f)%100;
               }
               if( ++IFEcnt[34]%2 )
               {
                  j  = (n+f-i+k+n+d+m+d*n+c-f)%100;
                  j -= (k*f-d-h-h+i*b-b-b)%100;
               }
               else
               {
                  b += (a+h+g*e-e+g*j+n-a*h-n-g+i)%100;
               }
               while( ++WHILEcnt[33]%5 )
               {
                  d += (b+m+l-a-j)%100;
                  n -= (e*m+b-h*d-m+f*i+m-f)%100;
                  m += (n*m+b-j-h-m+b+i-l*i)%100;
                  i += (n-d+b)%100;
                  b += (j-n-a*e+a*i)%100;
               }
               do
               {
                  f  = (f+l+g)%100;
                  e -= (g+m+b-l*c*m+j-b-c+e*d+m)%100;
                  m += (i+i)%100;
                  a -= (j+e)%100;
               } while( ++DOcnt[34]%5 );
               i -= (j-m*d-k-k*l)%100;
               for( ; ++FORcnt[51]%5 ; )
               {
                  h += (i+h)%100;
                  a += (n+b+d*k+j+f+i+j)%100;
                  d  = (a*h-b-j-a+l)%100;
                  d += (i-c*g-a+h-n+l*n)%100;
                  a -= (b+a+i+l+h*a-e+n-k+j+l-j)%100;
                  l -= (m-b+h-e+l+a*h+g)%100;
               }
            }
            
            switch( ++SWcnt[17]%3 )
            {

            case 1:
            {
               if( ++IFcnt[26]%10 )
               {
                  d -= (j*e+a+d*l-j-h)%100;
                  l -= (a*l)%100;
                  g += (h+h)%100;
               }
               if( ++IFEcnt[35]%2 )
               {
                  j += (n+e-d-g+j)%100;
                  n -= (n+n*n-l-i*f+m-a)%100;
                  m -= (h*a+m-m-f-e*c-a)%100;
                  f += (d+h-d-f+h+h*h)%100;
               }
               else
               {
                  g -= (m-d-j-a-c-b+h-l-a+h-m-e+k+c)%100;
                  g += (d-d+b-i+h-a-j-h*l*n+l*e-k-e)%100;
                  f += (e+i+c)%100;
                  m  = (m-c+j+m)%100;
                  k += (g-n+g+f+a+n-a+i+b-f+c+m+n*h)%100;
               }
               while( ++WHILEcnt[34]%5 )
               {
                  a -= (a*b-j-i+e*j+i)%100;
                  l -= (k*h-h*c+k-d*g-l*b+d-h+n-n-c)%100;
                  f += (l-m)%100;
                  f -= (h-k*d+b-c+a+m)%100;
                  c -= (i-f-f-h+m-f-a-m*a*f+m)%100;
                  i -= (l*d-h-m-f*g)%100;
               }
               do
               {
                  j -= (n+g)%100;
                  c -= (g*k-k*f+c-e*f-c)%100;
                  h -= (m+l+h+b*l-e+j-j+j+f)%100;
                  i += (g+h+g*k+g+b+h+k+b-a+c+g+e)%100;
                  k -= (n+a+c+d-d-l)%100;
               } while( ++DOcnt[35]%5 );
               for( ; ++FORcnt[52]%5 ; )
               {
                  k -= (c+e)%100;
                  m -= (n+h-e)%100;
                  b  = (i*b)%100;
                  n -= (k*n*i*g-b-l-m+b-f+i*j-l+k+a)%100;
                  b -= (i-m*a+i)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[53]%5 ; )
               {
                  f -= (l+e+i-i-g-d-f+i+l)%100;
                  l -= (m-g-m+d-j)%100;
                  k -= (m+d*c*b)%100;
                  n -= (l*d-f*n)%100;
                  c  = (m+a*e-n-n+i-k-k-f-f+m*h)%100;
                  a += (m+h-d+a*j+j+d*a)%100;
               }
               k -= (f*k)%100;
               d  = (g-f+i-l*n-i+h-g+i+m)%100;
               m -= (n+i-j*j-a-m-b+h+d)%100;
            }
            break;

            default:
            {
               f -= (g*i+d+g-j+g-g)%100;
               e -= (n-d+l+g-k+l-j-m+b-k-k-k+n)%100;
               a -= (e-d-d+h)%100;
               h -= (m-l-k+n*c+b*j-a*c-e*g)%100;
               g -= (k*h*a+b+h-j+d+k-m-c*l)%100;
            }
            }

            e -= (e+b-h)%100;
            l -= (b-d)%100;
         }
         k += (l-f-i*f-m*a+m-g-j)%100;
         m += (n+b+f+a-f+c*a+f-c-l+i+h)%100;
         a += (f+f)%100;
         m -= (j-a+e+n-a*e-g+e-a+c)%100;
      } while( ++DOcnt[33]%5 );
      h += (f+d+a)%100;
      a += (m*a-k+g-h+c-i+c-n*b*l)%100;
   }
   b += (b+d+a*l+g*j+d+l)%100;
   i += (g*e+e*a+h)%100;
   m -= (f-i*a+k+h*m+l+b+c+h+e+j)%100;
   h -= (j*m*h-h-k+b-e*c-f+k)%100;
   e -= (m+a-f-f+j-d-n-g-c)%100;
   j += (g+k*f-k-m)%100;
   b  = (e-e-e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F17(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[38]%2 )
   {
      c += (d-k)%100;
      c -= (j-l*m-n*e-i*c+l+k)%100;
      l -= (g-n+k+b-f-e-c-h+b+g*l)%100;
      g -= (a+e)%100;
   }
   else
   {
      while( ++WHILEcnt[37]%5 )
      {
         do
         {
            if( ++IFcnt[27]%10 )
            {
               e += (n*f*e+d*n+j-d-g+i)%100;
               for( ; ++FORcnt[55]%5 ; )
               {
                  c -= (i-k)%100;
                  k -= (f*c+k-b+n*a-m)%100;
                  n  = (m-j-d+a*m*k-g)%100;
                  g += (a-e-d+l-m-i*a+l*k-a+g+g)%100;
                  g += (g-f*g+c+d*i*g+a*j-k+j-c+f-n)%100;
               }
               
               switch( ++SWcnt[18]%3 )
               {

               case 1:
               {
                  n -= (i*h)%100;
               }
               break;

               case 2:
               {
                  l -= (m*d+m-i+d-c-l+d-k+n)%100;
                  n += (a*i+g+a-g+b+b-k*f+c+e)%100;
               }
               break;

               default:
               {
                  k -= (e-f+d-l*n*h-h+m+c-n-j-k*a)%100;
                  d += (g+g+e+a+i+i*i-e-d)%100;
                  c -= (m-n-k-h-h*b-e+n)%100;
                  n -= (k+j)%100;
                  n += (d+g-e*n-k*n)%100;
               }
               }

               if( ++IFEcnt[36]%2 )
               {
                  f += (h-c)%100;
                  g  = (f-i*a-a*i+l)%100;
                  e += (i+l+h+k*i+j-n+e-m-e*e+a)%100;
                  f += (d+k-m-f*n*g)%100;
                  m += (a*h+j-e+j-i-a+h-i-g-c)%100;
                  j -= (k-a+e-c+a*h*e*b-c+h-e*m+n+d)%100;
               }
               else
               {
                  c += (l+g)%100;
                  h -= (j+f*k*h)%100;
                  m  = (k-k+n+g+e+m+b+d+e-d-i)%100;
                  m += (k*i-a-k+g)%100;
               }
               while( ++WHILEcnt[36]%5 )
               {
                  m += (n*c)%100;
                  f -= (l+j*h-a-c+d-a)%100;
                  d -= (g+f+e+f+g-h+b-n+l*i-e)%100;
                  e -= (a-a)%100;
                  c -= (h+k+m)%100;
               }
               do
               {
                  g += (n*e)%100;
                  d -= (i-g+l+k-i-e+j+m-a+n-i-f-m*n)%100;
                  d += (k+l*g*g-j+h-c*i*i*g-g-j-g)%100;
               } while( ++DOcnt[37]%5 );
            }
            for( ; ++FORcnt[57]%5 ; )
            {
               if( ++IFcnt[28]%10 )
               {
                  e += (e+a+m-k+h+g+e*k+c-j+f)%100;
                  f  = (h+i+e-k)%100;
                  f += (n-h*l)%100;
                  h += (i*n-i)%100;
               }
               for( ; ++FORcnt[56]%5 ; )
               {
                  g -= (f-f-i+e-e-j-g+j+h+h)%100;
                  f  = (c*b*e-n+h+n+k+g+i+a)%100;
                  i += (a+n)%100;
                  i += (e+e-l*a+m+i+h-e-d)%100;
                  j -= (c+b+f+d-i)%100;
                  e += (b-m-m*b)%100;
               }
               if( ++IFEcnt[37]%2 )
               {
                  d -= (m+d-d*b*d-m*a-a*b+d-c-g*j)%100;
                  d += (j-b)%100;
                  j -= (f+c+h+m-k+b-n)%100;
                  f += (e*h-n-i+g)%100;
                  j += (a+m+j+m+e*h-g+l-h*l-b-n+f)%100;
               }
               else
               {
                  f += (h-a-h+c+j-k)%100;
                  a += (j-a-g+f*d+f+n-h+m)%100;
                  h += (k*a+i+e-k)%100;
                  c += (g-n+f-m*a)%100;
                  j  = (a-d-h+h-b+j+j+j+f+m+n-n-f-g)%100;
               }
               k += (g+e+b+d-d)%100;
               b += (m-k)%100;
            }
            l  = (e-c-j-j+f+n+n-j+l*m)%100;
            n += (n+c*i-i+n*g)%100;
         } while( ++DOcnt[36]%5 );
         j -= (g+h+g-g-k+e+i-e-k+f*g)%100;
         a -= (n+f-k-j)%100;
         m -= (d-e+a-b*j-m+k+k+c+k)%100;
         i -= (k-a+j+l)%100;
      }
      m -= (b*h*n-l-l+f)%100;
      i += (i-g-j+n-m+j-f+c-n-k)%100;
   }
   j -= (l+g+g-i-a*c-a+d+i)%100;
   h -= (c-f-f)%100;
   c -= (d-a-i-a-k-m-n+f)%100;
   c += (b*m*e+g-b)%100;
   b += (l-b)%100;
   l  = (b-f-j+g-j*m*l+a-b+g)%100;
   k += (f-f*i+h+j-e+l+n-h+n+l)%100;
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
         i -= (j*d-d+k+n)%100;
         for( ; ++FORcnt[60]%5 ; )
         {
            
            switch( ++SWcnt[19]%3 )
            {

            case 1:
            {
               if( ++IFcnt[29]%10 )
               {
                  f += (a*b*f+n)%100;
                  b -= (b+c*h*i)%100;
                  c -= (e+l-i+c*k-h+i)%100;
                  f += (k+k+h-a+l+a-e-h+k+j*b+l*m+m)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  c += (i+d)%100;
                  g  = (e-f+j+d-d-i+b*j*h+b+f+l+a+d)%100;
                  a -= (b-i-f-h)%100;
                  k -= (j-i-c-f+m+e+e-j)%100;
                  c -= (a+f+g)%100;
               }
               else
               {
                  e -= (f-j*n-l-d+j)%100;
                  h += (d*a+a*l-c-b+j*m+a+c*h+e+f-n)%100;
                  k += (l-l-e+l-k)%100;
                  h += (i+g+i-l-j*n-l-b)%100;
                  g += (m+c-e+n-h-e+n-i-i-l+c-i-n)%100;
                  a  = (g+b-h-d+k-j*e+l-i+n+e*i*m)%100;
               }
               while( ++WHILEcnt[38]%5 )
               {
                  h -= (a*k*l)%100;
               }
               do
               {
                  d += (c*j-i+n-c*f-d-c*e-d+f+a)%100;
                  f += (b+m*f+h*f+g)%100;
               } while( ++DOcnt[39]%5 );
               for( ; ++FORcnt[58]%5 ; )
               {
                  n += (f-i+b+c-b+l-d+i*n-k-i)%100;
                  b -= (a+n*l+i*c+n)%100;
                  d += (d+b*d+c+f-g-c*b+j+l)%100;
                  a -= (i-k)%100;
                  j -= (j*m)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[59]%5 ; )
               {
                  h -= (f-d-d-m-b-c-n+a-c)%100;
                  h += (f-j-j)%100;
                  l += (j-c*h*h+i*b+j-d-m*f)%100;
                  e -= (g+h*l-j-f-m-n-f-l+m*d+g-k+a)%100;
                  e += (f-h)%100;
                  d  = (a-n-b*a+n+k+h-l-n*c+e*d+h-i)%100;
               }
               if( ++IFEcnt[40]%2 )
               {
                  n += (g+d+d+e-e+j)%100;
                  l -= (j-h)%100;
                  c += (a*m*n-i-k*k+e-a)%100;
               }
               else
               {
                  m += (n-m)%100;
                  c -= (e-c-m-f)%100;
                  c -= (m+l+d+i-h-n+m*d*m-j+i)%100;
                  d += (m-j*f-l+n-b+b+m)%100;
                  g -= (n-l)%100;
               }
               while( ++WHILEcnt[39]%5 )
               {
                  h += (l-g+n*l+j+k+f)%100;
                  g += (h-k)%100;
                  a += (h-g*f-d-n+a)%100;
                  e += (e-k*l-d+e-h-c)%100;
                  f += (e-f-a-l*n-k+h*c+n)%100;
               }
               do
               {
                  d += (h-e+l+h)%100;
                  a  = (l+a-j*i-l-e+c-j-i*j*i+g)%100;
                  b += (g+b-g-k)%100;
                  c  = (c+l+g*j-b-a)%100;
               } while( ++DOcnt[40]%5 );
            }
            break;

            default:
            {
               h -= (n+k)%100;
               c += (a*h+c+a)%100;
               h += (j+e+c+d+h+i-m+c-f*j*j-e+n*i)%100;
               e  = (a+g*f+b)%100;
               e += (h*m+d-g+b-f*l*c+j-k-c)%100;
               a += (f+b)%100;
            }
            }

            n -= (g-f*n*b+d-k-n-n)%100;
            n += (b-h-g-e*g)%100;
         }
         k += (j+e+m+f*c)%100;
         j -= (g+l)%100;
         i -= (i-i*c-m+c+l-n+g-n+f+i-i-d)%100;
      } while( ++DOcnt[38]%5 );
      m -= (b+l-a)%100;
      b += (g+g)%100;
      h -= (m+f+m-c+l+e-c)%100;
      c -= (i*l-k)%100;
      j -= (k*l+b)%100;
   }
   e += (g*j+d-c-i+h-j+g)%100;
   l += (g-n+b-d-j-d*f-c+f-f*h+a+f)%100;
   g += (a+f)%100;
   g -= (e*i)%100;
   j += (g+l+h*m)%100;
   e += (e-a-l*j)%100;
   d -= (c*j+m+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F19(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[31]%10 )
   {
      k += (n*j*j*d+a-l+h-e+e*e-g*l+f+i)%100;
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
                  m  = (f+h+i+k+j*b+n-g+b+j-i)%100;
                  g += (c-b+m+n+c-e+c-b-c)%100;
                  l -= (k-i+e)%100;
                  k += (g+l+f+n+e-c+k*d+e)%100;
                  f -= (l+d*n+f+c+n+k*l-g-c-a-n-h-e)%100;
               }
               do
               {
                  i -= (i-h-a+m+d-d)%100;
                  f -= (k*c-i-e+m-j*n-c-d+l*e)%100;
                  f += (l*n-d*c+d+b*k-a+b*d+k+k-j)%100;
                  k -= (i*g*m+n-c-f*l-b+n+e+l-k)%100;
               } while( ++DOcnt[42]%5 );
            }
            else
            {
               while( ++WHILEcnt[41]%5 )
               {
                  l -= (i+d+e+l-b-g-c*g+k+k+c+g*m-i)%100;
                  n  = (i-i-i-l-c-e)%100;
                  c += (m-h-c*g-c)%100;
                  c -= (m+c)%100;
                  i += (m-d)%100;
               }
               do
               {
                  f -= (g+e+a-a+j-j+f-e)%100;
                  n -= (i-h+c+k+n+j*c)%100;
                  m += (h+m+b-b*n+a+m-i*g*h+l-g*h)%100;
               } while( ++DOcnt[41]%5 );
               for( ; ++FORcnt[61]%5 ; )
               {
                  g += (a+l+h+a+l+g+f-m+j-e*l)%100;
                  k -= (m*i)%100;
                  g += (b-c-m-e+k*l+c)%100;
                  d -= (f+n-b+h+g)%100;
                  f += (d-m)%100;
               }
               if( ++IFcnt[30]%10 )
               {
                  a  = (b-i-b+b+b-l*i+h-c-c+e)%100;
                  k -= (b-g-h)%100;
                  l -= (e*l+j+g+c)%100;
                  i += (m*n*h+k-n*c)%100;
               }
               for( ; ++FORcnt[62]%5 ; )
               {
                  b  = (l+g+g+i-k+g+i-e)%100;
                  k -= (l*e-h+j+c-l*a)%100;
                  n += (m+h*e-c)%100;
                  n += (f+k+d+c-c-j*n)%100;
                  e -= (l+d*g+b+f*n+h)%100;
                  h -= (d+d+h+e-l)%100;
               }
               if( ++IFEcnt[41]%2 )
               {
                  j -= (b-n+h+i-a-n+f+f-i+e-e)%100;
               }
               else
               {
                  i += (j-m*f+e)%100;
                  m  = (f+k-h-i-h)%100;
                  c -= (i+n*k*i+e-d+k+j-b)%100;
                  f -= (c-n-m-g-b-m+f+n+h-m+l*d+n)%100;
                  b += (g-k*f*l*c-g-g+l-a-h-a)%100;
               }
            }
            i += (g-m-l*n-m-d-b+e)%100;
            for( ; ++FORcnt[63]%5 ; )
            {
               
               switch( ++SWcnt[21]%3 )
               {

               case 1:
               {
                  h -= (a+n*g-i*e+c-f*g)%100;
                  k  = (b+d+m-b+h-h-k-j+f+i-d*j)%100;
                  n += (l+k+a+c)%100;
                  n -= (k-i*b*b*m*e+i-n)%100;
                  a -= (g+f-g-i+n*d-g*l-f-g)%100;
               }
               break;

               case 2:
               {
                  b += (k+d-a+e+l+k)%100;
                  d -= (b-c-g+h+d)%100;
                  i += (g*a+j+d)%100;
               }
               break;

               default:
               {
                  k -= (c+m+i*b-j-l)%100;
                  i  = (e-m+e+h*f-f-l+d)%100;
                  k += (h+c-h*j-d-g*i*n*g+l)%100;
                  g += (d*h*l-k+d+c*h-h*k-k-i-d)%100;
                  a -= (e+b+m+f+b+g+j-k)%100;
               }
               }

               e -= (g+g)%100;
               l += (h-k*i)%100;
               i += (b*a-n+b+l-n+f-e*f-m)%100;
               j -= (m+c)%100;
               a  = (j-c-l-i*k)%100;
            }
            a += (m-d+e+g-g*m+k*b-i*j+j+f)%100;
         }
         break;

         case 2:
         {
            l += (a+f-d-b*l+c+n*l+c*b)%100;
            f -= (m-m+l-d-d+l)%100;
            e += (n-k+e*f*l-c-d+a+m)%100;
            f += (a*d*e+f+a-g*j+i-m)%100;
         }
         break;

         default:
         {
            m -= (n+b-i+j+j+m*d-g+k*g-h)%100;
            a -= (g+k-j+f+c-n*m+n+g*k+k)%100;
            e += (c-c+n-k+l-d+l-m-c*n-k*i)%100;
            l -= (f*n-l+l+a-a-j-l*n)%100;
            c += (b-m+n+k-k-f+m)%100;
            m -= (l-a+a+m+c-l*i+e+d*j-j+a)%100;
         }
         }

         k += (h+i*l+a+d-m+f+h-e)%100;
         c -= (n+i+i*l)%100;
         h += (n+d-c)%100;
         b += (b-b+l*d+b-d+m+c+c-i-b*k*n-i)%100;
      }
      h += (f-m+a*l+e-d+b-d+g+c+h)%100;
      n += (g+i-c*l-l+i-j*k+e+g+d*g*b)%100;
      a -= (m*c)%100;
   }
   g -= (c*e*m+e+k-a-k)%100;
   b += (n-d+f+k*k+b-a-k-e-e)%100;
   c -= (h+n*g*m+c+f+g+h+j+g-a+a*c)%100;
   i -= (c+f-b-c-k+h*a+n-m+i-a)%100;
   a += (l*b+n+c*c)%100;
   d += (d+n+i*b+g-c-c)%100;
   n -= (l+k-d-d+m+d-h*i*b+c-a+n*d)%100;
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
         f += (n-b)%100;
         g += (g-f-j+g-k-e-b+a*e)%100;
         g -= (i*c-g*k*k+m-a+d-g*k)%100;
      }
      else
      {
         while( ++WHILEcnt[44]%5 )
         {
            do
            {
               for( ; ++FORcnt[65]%5 ; )
               {
                  m -= (l-a-l)%100;
                  b += (n-b+n*b)%100;
                  f += (b-g-c-c+i-c-c-k)%100;
                  i += (d+c+b)%100;
                  k -= (k-c+c*b+d*a+c+l*d*c*n+d*e)%100;
               }
               for( ; ++FORcnt[66]%5 ; )
               {
                  m -= (e-j*l+b*d*m-j*i-f*m*h+h-d)%100;
                  m += (d*b*i-j*n)%100;
                  a  = (h+m+a*i+g-a)%100;
               }
               if( ++IFEcnt[43]%2 )
               {
                  g += (j+b+i-f-h*g)%100;
                  b -= (g-j+d*d+e*l+b-h-l)%100;
                  d -= (c-g+j+f+g-j+i+m*i-i-b-i)%100;
                  h += (a-d*l+h-h-f+b)%100;
               }
               else
               {
                  a -= (m+n-b-l-i-l+g-b+j)%100;
                  l -= (m*i)%100;
                  h += (n-g-j+n-a+a-n*a*i-i+b-m-a+k)%100;
                  c  = (j-c+f-c*l-k*n-c)%100;
                  a -= (i-l+e*c+f+g)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  c -= (b+b-b)%100;
                  b += (g+m+b-k)%100;
                  h += (b-i+k*m)%100;
                  g += (j+g+k-c+c+h+g+n*a)%100;
                  c += (b+k+b*i-g-m+a-n+a*l*i)%100;
                  b  = (k+g*n+l-l-h)%100;
               }
               do
               {
                  f += (a+j+n+e+n+e+f*f*l)%100;
                  l  = (b-k+a-l-n+h-k-f)%100;
                  l  = (b+a)%100;
                  i += (g+a-j-e+j*h+g*a*i-h-c)%100;
                  g += (l*j-g-g-l+h*a*g-n+n+d)%100;
               } while( ++DOcnt[44]%5 );
               if( ++IFcnt[32]%10 )
               {
                  g += (f*m)%100;
               }
            } while( ++DOcnt[43]%5 );
            n -= (f-l+b-f)%100;
            for( ; ++FORcnt[67]%5 ; )
            {
               
               switch( ++SWcnt[22]%4 )
               {

               case 1:
               {
                  n += (l*a)%100;
                  a += (i+e+g-m+i*i+k+e)%100;
                  f -= (h*a*g-a-i-h+c+i+k-d)%100;
                  i  = (a-h*j+c+c-f+j+n+n)%100;
                  b -= (n+l-c-h)%100;
               }
               break;

               case 2:
               {
                  c  = (f-j-i-b*i-h-k-f)%100;
                  a -= (a*e+k-h+k-i-e-f)%100;
                  n -= (e-h)%100;
                  k  = (h-j-c-k-m+m*l)%100;
               }
               break;

               case 3:
               {
                  c -= (g+n+n+e*f-e+a-j+k+a+a+b-j*a)%100;
                  f += (c-l+e-j+e-l-d+l-m+l)%100;
                  k += (j+d-k-d+c)%100;
                  d -= (d*h)%100;
                  f -= (h+k+j)%100;
                  m += (k+c*k+j-b-f+k*j*k)%100;
               }
               break;

               default:
               {
                  d -= (i+j-g+f+m*m-c*e-d*f-m+l-k*c)%100;
                  m  = (j-n-c*i+e+b*k+c-f-e+d*l-g)%100;
                  m -= (k*e*a*a*e+a-a+i)%100;
                  b  = (h*i+j-h+f)%100;
                  g -= (c-f*a*g-c+e)%100;
               }
               }

               c += (k+l*i-d*j+g-h*n-h*n+k-g*n-i)%100;
            }
            k += (d-l*j+h-b+j+b-e)%100;
         }
         a += (j+a-e*f+d*i+l-d-c+d)%100;
         b -= (l-n+d-n+b*d+g-n)%100;
         e -= (i-f-d*k+g)%100;
         b += (i+a+c-j)%100;
      }
      h -= (h-i-i+l-i*h+d*n)%100;
      e += (m-b+l*c-d-h-a*c-j-c-e+e)%100;
      m += (k+d-d*g-h+j-k)%100;
      i -= (b-j+f+h-h-e)%100;
   }
   l += (j-i-d+a+d*j+e-k-i+i-b+e)%100;
   g += (l+l-f-m*k+h)%100;
   h += (n*f)%100;
   l  = (j-i-k*h-d)%100;
   n -= (i*n+b-b)%100;
   g -= (l+l+m+n+n+j+b*l-h)%100;
   i -= (e-i*a+f-b-m-i*f-n-a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F21(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[47]%2 )
   {
      d += (h*n+f+n-h)%100;
      m  = (j-c*i-c-l-j-e-e-e-c)%100;
      a -= (e-a)%100;
      f -= (b-n*j+a*f)%100;
      b -= (g-l+f-a*k+k+n*e*j)%100;
      b  = (b+e*g*h+b*m-d-k+g*d+l+m*f-k)%100;
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
                  m += (k+e+n+n+e-m-n+j*j)%100;
                  j -= (e*j+n-a-a*c+i)%100;
                  l += (a-b-b*n-d-n*k+e+d+g-i)%100;
                  f  = (n-n+e+i-n*i-j)%100;
                  n += (a+g-m)%100;
               }
               for( ; ++FORcnt[68]%5 ; )
               {
                  l -= (b*b*c*m)%100;
                  h  = (k+m-b*k)%100;
                  e -= (h-i+g)%100;
                  d += (f+j*c*n-i*j+a-k+f)%100;
               }
               if( ++IFEcnt[45]%2 )
               {
                  e += (l-l+n+a*j-n)%100;
                  l += (b+f-b-g-k-m+j)%100;
                  b -= (g*g*h)%100;
                  e += (m+k+i+i-i-b-f+e+j-n+k+c+l-b)%100;
                  d  = (b+b-d*c-d+b+e-c+m+j-f+n-h)%100;
               }
               else
               {
                  a -= (m-c-e*g+j-i)%100;
                  c -= (j+g+d-n+n-a+h-j-g-j)%100;
                  g += (m-a+l+a)%100;
                  i -= (m-c-m*e-l)%100;
                  f  = (f+d)%100;
                  a -= (a-f*b-f+m*i*d-c-a*e)%100;
               }
               while( ++WHILEcnt[45]%5 )
               {
                  n += (j+l*k*n)%100;
                  j -= (c+a+a*l)%100;
                  n += (m-j-m-n-f+g*i-n-f)%100;
               }
               do
               {
                  l += (c*i*g+f*n)%100;
                  m -= (k*k-m-n+l)%100;
                  a -= (b+c-i+i*k*c+k*b+i-d*m)%100;
                  i  = (g-e*j-l-l-a+n+d+i)%100;
                  b += (k-d-i)%100;
               } while( ++DOcnt[46]%5 );
            }
            d += (l-b)%100;
            for( ; ++FORcnt[70]%5 ; )
            {
               
               switch( ++SWcnt[23]%3 )
               {

               case 1:
               {
                  c -= (c*c*k-f-j+k+l*l-j)%100;
                  d  = (e-l-m-c-a*m*m+f+i-a)%100;
                  a -= (f-d-l+j+a*h+m)%100;
                  k -= (d-h+a-f-j+k-k+j+k+d-c)%100;
                  h -= (b*e-m-a-j-d)%100;
                  m -= (b+e-n-j+l-g-a-l*j+i)%100;
               }
               break;

               case 2:
               {
                  g -= (n*g+l+h)%100;
                  g -= (a+k-h+d-k-k*c)%100;
                  a -= (f*b-c-n+n-c*n-k*b-c*k-j)%100;
                  f -= (i*d+c-d)%100;
                  k  = (h-i-k)%100;
               }
               break;

               default:
               {
                  n -= (a+l+a+d*n+l-l*a-m)%100;
               }
               }

               if( ++IFcnt[35]%10 )
               {
                  i += (k*d+i)%100;
                  i -= (n-l*c+a)%100;
               }
               if( ++IFEcnt[46]%2 )
               {
                  m -= (a+l-m+k+c*g*c+c+h)%100;
                  f += (m-c-i+g+l*a+l*m-e+l*h)%100;
                  a += (g-n+c-c)%100;
                  c -= (k-b-a-i*k+n-l-d*l+m+l*g-b+b)%100;
               }
               else
               {
                  a -= (f+f)%100;
                  j += (i-c+c+c-g+e+a+g)%100;
                  e -= (l+g-l+a+i+g+c-l-k+l+b)%100;
                  d -= (b+i-h+n)%100;
                  f += (j+e-n*c+k-i+n-b+j-k-l-g)%100;
               }
               g += (n-k)%100;
            }
            f += (g+b-e+b*f+h*j*a-m+f+a-j+f*a)%100;
            b -= (a*b-f-e+g*j-n*i+g-n)%100;
            j -= (h-d+j+b-c-f*f*g-f+h-a)%100;
         } while( ++DOcnt[45]%5 );
         f -= (c-e-b)%100;
         j -= (h+i-h)%100;
         g  = (i+m-c+k*m-b-c+b*c)%100;
      }
      i += (g*l+f+l+c)%100;
      m += (f+k+i+a+e-g-b-b-j*e-g+c)%100;
      d -= (b+h*c+d-l-m-j-d+m+c+c+d+g)%100;
      l += (l-m*l*f-c)%100;
   }
   h -= (i-m)%100;
   f  = (i-l*h+m+b-c+j-j-m+k+g-l-j-i)%100;
   e += (c*g*k-j+g+l+a-m+k-i)%100;
   b -= (g+d+m+g)%100;
   m -= (d+j+i+h+h*n-f)%100;
   n  = (c+a)%100;
   k += (b*i-d+i-m-j-l-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F22(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[48]%5 )
   {
      do
      {
         for( ; ++FORcnt[73]%5 ; )
         {
            for( ; ++FORcnt[71]%5 ; )
            {
               if( ++IFEcnt[48]%2 )
               {
                  j -= (b+n+c-d+k+e*g+n*j*m)%100;
                  g += (g-l+a-a+e-f*c+b-j+a)%100;
                  d -= (i+m+i-g-d+a*a+g*c+k)%100;
                  i -= (d+j)%100;
                  j += (e-m-n+e-e*a+g)%100;
               }
               else
               {
                  f -= (c*l+i+a+i-a)%100;
                  k -= (h+i+k+f+c-m+b*b-l+d+a)%100;
                  i += (a+j)%100;
                  j += (n-m-b-j*l-g)%100;
                  n += (m-f*n+j+j+h*k-e+e-h+g-l+i+d)%100;
                  n += (g*f+h-m*f-f-a-c-f-i)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  d += (b-j*c*m+h+l+i-i*c+c)%100;
                  k += (c+l-n)%100;
                  n -= (a+i+a-g+b+j-a+k+d-g)%100;
                  e  = (c-g-m*e-m-j)%100;
                  g += (e+n-j+l-k-g*g+n*a+f*i-d+e)%100;
               }
               do
               {
                  d += (d-a-g*f+i*n)%100;
                  f += (j+b*m-f-a-k-d*j-h+e*i-g)%100;
                  n += (b+b-c+g-g*b*h-d*k-j*b*c+h)%100;
                  h += (f+m+m-h-h-b-n+j*n-l-n)%100;
               } while( ++DOcnt[48]%5 );
               if( ++IFcnt[36]%10 )
               {
                  n += (c-i)%100;
                  h -= (i+h-f-h-e*f-f+i+f-a)%100;
                  c -= (d-k*g-k*e*d)%100;
                  a += (g+c*g)%100;
                  n -= (g+d+i*e-a-j*h*m)%100;
                  e -= (l+l)%100;
               }
            }
            k  = (l-d*k-n*c)%100;
            for( ; ++FORcnt[72]%5 ; )
            {
               
               switch( ++SWcnt[24]%4 )
               {

               case 1:
               {
                  d += (l-l-h+a+n+f+a-b+l*f-c)%100;
                  e += (n-e*k)%100;
                  j -= (k-n+l+c*e+a*m)%100;
               }
               break;

               case 2:
               {
                  b -= (j+l)%100;
                  l -= (k-e+k*g+i+b-h+d)%100;
                  g += (c+a+e*d-f+j+i*d)%100;
                  g  = (g*k-c+e-g-k-k-l+d+e-i)%100;
                  i -= (d-g)%100;
               }
               break;

               case 3:
               {
                  g += (b*f+e+f+f-c-i*e+n-c+h-j)%100;
                  b += (a-d+g-n*m+f-m)%100;
                  c += (a+j+f+b+c-j)%100;
                  c += (f+n-m-l+m+d*h+b-e*l)%100;
               }
               break;

               default:
               {
                  j  = (m*n+g-n+e+l)%100;
                  m -= (i*c*l+m*l-j+l+b-j+j)%100;
                  i += (h+f*c-d+h-g-k*i)%100;
                  d -= (g+g-e*d)%100;
                  n -= (f-i*n-f)%100;
                  b += (h-e-i+h-n+e*c-k)%100;
               }
               }

               b += (g+n+b-k-i+m+a-d-f+a+n)%100;
               l += (i+b+l-i)%100;
               k += (j+j-c*j-k-b-d+h-b+l+i+f)%100;
               i += (e+n*l+b+k+n-f-j+d)%100;
            }
            a -= (b-g*e)%100;
            d -= (e*l-j-e+k*n-l-l*k-m)%100;
         }
         n += (g-m*h+f*c+a+f-l-d-c+b)%100;
         e  = (d+l-d-l)%100;
      } while( ++DOcnt[47]%5 );
      j += (b-i+m-d-b-i-j*g+k-i*e+h)%100;
      j += (l*e+l+e-m+j+b+b*m+c)%100;
      k += (j-n+d)%100;
      j -= (a*a)%100;
   }
   d += (m-h+e-f+b-c)%100;
   i -= (f*l-h+a+k-i)%100;
   b += (l*b-j-f-l-f-b+b-n+h)%100;
   f += (d-m*b*d*d+l-l-c+b+f+e+l)%100;
   a  = (k*e*h-k)%100;
   m -= (m+i+m*n+c*a-i+d+e-j-k+m+n)%100;
   d -= (h+m+h+j+j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F23(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[51]%2 )
   {
      f  = (g+d+a*h-a+m+j+g*d-d+g-l-m-a)%100;
      c += (i*f-e+c-j*j*k+a)%100;
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
                  l += (e+j)%100;
                  l += (e-l+n+l+h+e-b*i*a-k+j)%100;
                  i += (i-a-f*n-b-l+f+e-g*e+n+a*l+e)%100;
                  n  = (h+m-l+e-k)%100;
               }
               for( ; ++FORcnt[74]%5 ; )
               {
                  a  = (f-g-e+j+c+l-a*d*b)%100;
                  e -= (n+d-g*e*l-m-f+a*g+j)%100;
                  f -= (f+e+b-f-f-k*d*n*d)%100;
                  i -= (d-i+k+f-k+c+j*l-m*b+a-c-h*m)%100;
                  i += (j+e+m-a-m*h*m+l+f*i+i-a+c)%100;
                  j  = (e+i*g+f*c*a+b)%100;
               }
               if( ++IFEcnt[49]%2 )
               {
                  k -= (d-f)%100;
                  a  = (j*e-h*e+m)%100;
                  h += (c-h-l-c*f-m*m+h+d+n)%100;
               }
               else
               {
                  k -= (m-g+g-c)%100;
                  h += (h-a-g*k+k-i-g+a-g-l-d*k+m+n)%100;
                  c += (h+c+g-e-j-c*c-e+g+k+l-m-l)%100;
                  l -= (f-j+n-h-f*f+f+n*d+h+h-e-l+m)%100;
                  e += (e+m+b)%100;
               }
               while( ++WHILEcnt[49]%5 )
               {
                  f -= (f-n-d-m*g-n*d)%100;
                  g -= (d-g+n-f-h*e+f+d-j)%100;
                  n += (e*h-k-d+l+j-l+a*h*h-f-c-i)%100;
                  i += (g+e*m+g-m-l+n+b+k-b-g)%100;
                  m += (l-b*c-e-l+h-m-c-c+k+k+d)%100;
               }
               do
               {
                  m += (n*k-a*n+e+j+l-n-i)%100;
                  h -= (g-c+l+n*m*d-c+i+g*n+b+f)%100;
                  b += (l*d+c*b+m+n)%100;
                  d -= (e+k-m+g+f+b-g*b-c*n*n)%100;
               } while( ++DOcnt[50]%5 );
            }
            h -= (b+g+c+c-d-h+n-m-i+f+k*i+e)%100;
         } while( ++DOcnt[49]%5 );
      }
      for( ; ++FORcnt[78]%5 ; )
      {
         
         switch( ++SWcnt[25]%4 )
         {

         case 1:
         {
            if( ++IFcnt[38]%10 )
            {
               if( ++IFEcnt[50]%2 )
               {
                  l += (l+k-n+e-g-a+j+l-k-j)%100;
                  e  = (j-m+e-l*e-j-i-l+e*l-l)%100;
                  f += (k-d)%100;
                  e += (j-m+j+k*a+k-n*f+a*m+b-d)%100;
                  a += (k-a*g*d-l+j+k)%100;
                  i -= (n-d-j-k*m*c+j)%100;
               }
               else
               {
                  h += (g*e+i+h+l)%100;
                  g += (i-j*g+l-a-j)%100;
                  n += (i*g-d-i-i)%100;
                  b -= (n-k*b-j+g+i)%100;
               }
               while( ++WHILEcnt[51]%5 )
               {
                  b -= (g+k+k-m*a*h-k+b+h)%100;
                  b += (i-b-a-l+c)%100;
                  h += (f-g-f+l-k-m-l+j-f-c+e-m+a)%100;
                  e += (f*k)%100;
                  e += (c+e*n+h*b+h+a-f-a)%100;
               }
               do
               {
                  g  = (h+i+n*j*l-c-m-d-i)%100;
                  k += (f+g+i*n+i+n-a+c+f+n)%100;
                  i -= (j+g+e+d+g*l-f*k+i+d)%100;
               } while( ++DOcnt[51]%5 );
               for( ; ++FORcnt[76]%5 ; )
               {
                  d -= (b*c*l*g-n-d*n*c*j-i+m*b-j+h)%100;
                  h -= (n+n-m-m)%100;
                  d -= (n+i)%100;
                  a  = (f*h*e)%100;
                  n -= (n-f-f+h-g+g-g-e)%100;
               }
               for( ; ++FORcnt[77]%5 ; )
               {
                  j -= (d+a+g-k-h+a)%100;
                  h += (c-n-k-k*m+n)%100;
                  d -= (l+i-a+j+a+j-m+a)%100;
                  m -= (g+i)%100;
               }
            }
            c -= (m+j-j-g-f)%100;
            i -= (b-k+j-f-j)%100;
            f += (f+f-m-k-e+l)%100;
            k -= (k-d+f*i-c-d+e-b+c+f*k)%100;
         }
         break;

         case 2:
         {
            l -= (d*n-k-k-g+n-c-c*j-m-g)%100;
            g += (c-m+d+j-h+e*n*d-d)%100;
            k += (a-d-i*d+c)%100;
            d += (c*n-e-f-h+m*f*k+a+l-i*g+l)%100;
            d -= (c+n-m*j+e+c-c-n-b+k-d-i)%100;
            a += (l+g-g*h-j+n*a*k+i-k-b)%100;
         }
         break;

         case 3:
         {
            e += (j+n-g-f-j-c+l+f+e)%100;
            l -= (i*n*n+g+a)%100;
            f -= (i+m*e-e-g*d-b*c+e*n*l+g+j-f)%100;
            l -= (c+g*f-a*n-e-m+f+g+m)%100;
            j -= (m+m*k+b+l-b)%100;
         }
         break;

         default:
         {
            m -= (n-g)%100;
         }
         }

         b -= (a*m+l*g+c+n*n+j-g+e+h+n)%100;
         j -= (e*h-c-f+j+h+h+c)%100;
         j -= (a*f+j*e+h-n+f-a*e)%100;
         k += (c*c)%100;
         e  = (e-k-b-c)%100;
      }
      c += (f+f+g+m+h*l+l-m-i)%100;
      k += (b+k-a+l+e*e-a+i+h+n+a-b-j-b)%100;
      b -= (e+f)%100;
   }
   g += (g-j-k-e-m-f*b*d+l)%100;
   k += (b*n+a+h-n-h-n)%100;
   b += (m-j-d-k+i+m*d+j-l)%100;
   j += (b-f-a-g*m+b+g+h*m-d-h-d+d*j)%100;
   i -= (e-i*d+i+b+b-j+j)%100;
   j += (n+e-c+k+d+k+d+m)%100;
   k -= (i*c+k-d-d-j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<57; I++) IFcnt[I]   =0;
   for(I=0; I<76; I++) IFEcnt[I]  =0;
   for(I=0; I<38; I++) SWcnt[I]   =0;
   for(I=0; I<76; I++) WHILEcnt[I]=0;
   for(I=0; I<76; I++) DOcnt[I]   =0;
   for(I=0; I<115; I++) FORcnt[I]  =0;
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

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      if( ++IFEcnt[52]%2 )
      {
         l += (f*b+h)%100;
         e -= (c*l+n+k+n-h*m+b+k-n+i+l-d+i)%100;
         j  = (a*g+e)%100;
         l += (l*e+k+n+n-k-n*n*h*k)%100;
         m += (f*j-c-k)%100;
      }
      else
      {
         while( ++WHILEcnt[52]%5 )
         {
            do
            {
               m += (c-b*k+j)%100;
               b += (e+b+f-j-a+b*n*j*n-a-f-b)%100;
               l  = (l*b+b)%100;
               h -= (a-n*c+h+d+c-k*b+i-n)%100;
               m -= (a*m*g*n-n*k+l)%100;
               b -= (l+i-j+n-l-a*k+n-f*i-l-j*e-d)%100;
            } while( ++DOcnt[52]%5 );
            m -= (n+m+b-d-l*k*m-f+c*a-g)%100;
            d -= (g*b+g+j+n*j+b)%100;
            e  = (g+j+m*h*g+k-n)%100;
         }
         n -= (b+k-l-l-m-n+c-k+h+g)%100;
         i += (d-d-g+m+m-n-k-m+k+h)%100;
         j -= (c+m+i-d+l+b)%100;
         h -= (h-j+c*l*b)%100;
      }
      e -= (k-n-g-e-j*l-e+j)%100;
      g -= (n-i-l-c+f*i-i-l+f-c-g*d-i*b)%100;
      f += (f+b-j-c-d-n+d-e*l+l*j-a+i+k)%100;
      i -= (n-h*n-e-m+i)%100;
      f  = (n-a-e-m+d-g-d)%100;
      k += (h+j-g-c*i-k-i-m)%100;
      n += (c*f-a)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<39; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 39 << "   Dynamic = " << sum ;
   for(I=sum=0; I<53; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 53 << "   Dynamic = " << sum ;
   for(I=sum=0; I<26; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 26 << "   Dynamic = " << sum ;
   for(I=sum=0; I<53; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 53 << "   Dynamic = " << sum ;
   for(I=sum=0; I<53; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 53 << "   Dynamic = " << sum ;
   for(I=sum=0; I<79; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 79 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}