#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[52],IFEcnt[70],SWcnt[35],WHILEcnt[70],DOcnt[70],FORcnt[105];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         m -= (g-m-k+d+a-n-c-m-f-g-m+b-h-e)%100;
         i += (h+k-k*i-f+j*k*j+b-c-m*d+h)%100;
         b += (e*k+m*b-c-m+i-b-l+g-b)%100;
         k += (c*d+e-a+e)%100;
         g -= (f+m+k+d+f*h*j+n+h)%100;
         l += (g+d-h-h*g-e-g+i-b-m)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  g -= (h*m*c-d+f+m-b*g)%100;
                  l += (f*i-a+d)%100;
                  j  = (c+c+m*g*j-h+n)%100;
               }
               l -= (f*i+n-m+b*f+f*k-h-i+e+e)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  k += (e*h*i-e+j+l-a-e-e)%100;
                  l -= (g-l)%100;
                  e -= (i-e+m-l*m+d-l*m+i+c+i)%100;
                  i -= (c+n+n+c-h*h-b+b*d*e-c-e)%100;
                  a += (d+m*l-f-m-i-n+e)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  n -= (e+f+b+h-k*e-i*b-k-a+h+h*j-c)%100;
                  d -= (n*h-i+g-g-l-k*d-i-k+j-f-n)%100;
                  k += (e+k)%100;
                  i += (n+h)%100;
               }
               break;

               case 2:
               {
                  i -= (k-i*a+h+e)%100;
                  e -= (k*g-g-i)%100;
                  f += (n+g*d*g+i-l)%100;
                  b -= (j+a)%100;
                  h += (c-n+a+l+d+b-e-e*g*m)%100;
                  f -= (b-m-m*j*k+j*g-e)%100;
               }
               break;

               default:
               {
                  a -= (j-h+m-i+h+f-n-a-m+j+k+i)%100;
                  d += (j+a-m+f*c-a+g*f)%100;
                  n += (m-g-i+n-i+i*k)%100;
                  c -= (l+g-a+f+n-j-d+d+c-h-a-a*k*b)%100;
                  d += (f-e+n-d+d+g-g-c-b-j+e)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  a += (h+g-n+a+h)%100;
                  l += (m*l+i-b+d+l-g+n-c*j-k-f+b+h)%100;
               }
               else
               {
                  a -= (i-k*a+j+f-i*e-j)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  h += (b+j+d*b+b-g-m+a+e-c*c)%100;
                  j  = (f*m+i-a-f*c*e+n-b+h-l-d+a*d)%100;
                  l += (d-d*m)%100;
                  l -= (m+b*m+g+m*k-m+g-d-a)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  k -= (j-b+j)%100;
                  i += (a-n-g*e+f)%100;
                  g += (f+m)%100;
                  c -= (j*m)%100;
                  b -= (i*j+n+j+k+i*a-h-d-c)%100;
                  l  = (b-e-c-k+b-c-k*d+f+f+a+k)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  b -= (a+c*l-e*f-k-a+c+b*e)%100;
                  e += (d*a)%100;
                  e += (f-d-h+i*e-d-e+k)%100;
                  l -= (f-h)%100;
                  c -= (d+k*f*b+m+k-c+e+c-b-m*d*b)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  l += (k*h+b+a+i*k+e-i-a*d-h-c)%100;
                  n -= (m+e-n+g-n*c-c+l-e*n+j-n*n)%100;
                  e -= (d+e)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  j  = (n+c-l-n+j-f+l)%100;
                  m += (k*g-g+i+c-k+d*j+c*m+i+b)%100;
                  e -= (m*k+a+e*f*i+m+a*k)%100;
                  e += (l-f+l-j+n+a+e-f)%100;
               }
               else
               {
                  f += (b-e+l-b-a*b+n*j+n-a-k)%100;
                  f += (k*g-g-b+e-b-c*n-e*m-b+k-i)%100;
                  b += (h+h+k-d+l-f+b-h-k*f-j+f+b)%100;
                  d += (f-k-d-n+g-m)%100;
                  l  = (e+i+f-d+b*g*h+d+l+d-n+j+n)%100;
               }
            }
            i -= (a-d-b+i+n+c-f*n-a-a+j*k+g-l)%100;
            l += (g-b-j*b-j+c-m-m-l)%100;
            f += (f-h+k-c+f)%100;
            d  = (j+l-l+e*f+e-n*f+c*e)%100;
         }
         a += (j+f+l+b*f+a*e-l*k*b*h)%100;
         b += (b-d+c+b-h-e*j)%100;
         j -= (g+b-m-m-b+e*j-j-d)%100;
      }
      d += (h-e+b+i+n+a+n+f*b-c-a)%100;
      d += (e+f+n+f*b+g-f+b-k)%100;
      n += (a-i*d-d-l+f*m)%100;
      c -= (a*l+n+f-k)%100;
   }
   n -= (k-b+a-m+d+m*e+j-i+b-f-h)%100;
   n -= (c-l-g)%100;
   m += (g*h)%100;
   n += (l+f-c-m-f+i+m-c)%100;
   f -= (b*l-i*i)%100;
   c -= (a-e-f*d+f+h*e+b-g*n*h*g)%100;
   k += (n+k+j+e*b+f-b+g*g+n*n+l+h*c)%100;
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
         c += (d+i+i*a+i)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%3 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  n  = (j-l)%100;
                  g += (a-j-m-n+c+i*l+k-j+a-j-m-j+d)%100;
                  j -= (m+g+k+f*f+m*c-i-m)%100;
                  l -= (g+i-e+b+f+b+j+l*j*k+d-k)%100;
                  f += (m-k+i-l+g)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  d += (l-a-f+d+b+c*f+i-f-a-b)%100;
                  g  = (j+i)%100;
                  h += (d+f+f*f-n-g-l+m+a-a-g+f+b)%100;
                  d += (k-m-j)%100;
                  l -= (a-m+a-j-b-a)%100;
               }
               else
               {
                  n  = (h+n-h-d-d*i+e-m+c)%100;
                  h -= (e*n+h-d+h+a+f+j-e-h+l-n)%100;
                  i += (l+k)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  j -= (g+n*d-m-k+b*g+c*h)%100;
                  m -= (i+i-m+c+b-b*n+h-m)%100;
                  m -= (d+n+d-m-a-h+l-l-j+g)%100;
                  e -= (e+e+j-g-d+e-b+c-f-j*l+l+l+k)%100;
               }
               do
               {
                  e += (h*i)%100;
                  l += (c+m*j*b-m*h+h-f*l+e*k-l-e)%100;
                  d -= (a+n+b-m+b+d-n*g-b)%100;
                  m  = (d+b)%100;
                  k -= (e+n)%100;
                  d -= (e-b+i-e+b-c+a*j+j)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  l += (a-a+d-a-h+k)%100;
                  c += (g+e)%100;
                  c -= (f-a)%100;
                  c  = (a+e+d*g-k-d+a*h-c-h*g-g+k+d)%100;
                  h -= (i+e-b+m-l-f+m)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  n -= (c-d)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  h -= (c*m*e+f-e*a+i-h*m-l*f-n)%100;
                  n += (n-g+n-i+i-j*i-i+e-k-l)%100;
                  n -= (l-l-m+n-a+g)%100;
                  d -= (c+j-f+k+e+k-l-b)%100;
               }
               else
               {
                  f += (c-g-n*a+g+i*h+l)%100;
                  b -= (d-c+g)%100;
                  l += (g-f-e-d+c*k+a+n)%100;
                  g += (k-h+f+l)%100;
                  h -= (l+f+k)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  n -= (k-l-m+e-n*f+m)%100;
                  n += (n+m*f*f*c)%100;
                  k  = (g-j*d*j*a*j-i-b+b-n*k*d+i+e)%100;
                  c -= (a-j*h+k+n+j*f-g-i+j+m+l)%100;
                  i -= (m-c+g-g+c-a+a*l+m+n-c)%100;
                  i -= (n+m+l+e)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  a += (j-d+b+l*d-g+b+c+c)%100;
                  m -= (l-l-f)%100;
                  g += (e+j-k-m)%100;
               } while( ++DOcnt[4]%5 );
               m -= (k*a-b-i-a-k)%100;
               a += (a+m)%100;
               l  = (a-b-f-l-f)%100;
               a += (i-j+j-d-g+k-e+c+g-a-c)%100;
            }
            }

            j += (a+i+d-k-f+l-m+g+l)%100;
            k -= (l-a+e-g*h-c-m+c)%100;
            h += (c-l-a)%100;
         }
         a += (l+c*b-f*i-i)%100;
         g -= (d-d+m+h-k-k-l-b*c+d)%100;
         m += (n+a*c+b*i-h+n-a-d)%100;
      } while( ++DOcnt[2]%5 );
      h += (k-c+g+d*l-n-b+n-k*b-c)%100;
      b += (b-j-i-c+a-i-i)%100;
      n += (h+b)%100;
      n += (b*d-e+b-a+g+l-n)%100;
   }
   h -= (j+i+h+c-c*m+f)%100;
   g -= (b-e+n+g+h*g+l*l-a-c)%100;
   h -= (m*g-f*b-k+i+l+d+c-c+i)%100;
   l += (g-k+e)%100;
   i  = (c*c+g-a+l)%100;
   a -= (i+b-b*i-n-m+n)%100;
   d += (d-h-b+g*e*c*h+l*f-f+g+e+i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[5]%10 )
   {
      d += (l-e-d)%100;
      for( ; ++FORcnt[10]%5 ; )
      {
         
         switch( ++SWcnt[2]%3 )
         {

         case 1:
         {
            if( ++IFEcnt[6]%2 )
            {
               if( ++IFEcnt[5]%2 )
               {
                  d -= (a-i-g)%100;
                  e += (g+d*i*m*n+i+a+e-c+h-d+e*l*g)%100;
                  h -= (c-h-j+m*j+j-k+a-n+j-d-g-d+n)%100;
                  f += (a-e+g+f-l+i)%100;
                  k -= (k-m+k-a-i+i-a-d*c-g)%100;
                  k += (b+b+l+h+i+i*b*b*f-i-n*a+k)%100;
               }
               else
               {
                  b += (m+i+m+l-j+h+k-n-d*n)%100;
                  a -= (e+i+n*e+n*l)%100;
                  b -= (m-c)%100;
                  b -= (f-m-l+k+f-m-d-b)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  c -= (i+e)%100;
                  f -= (f-k*g+n*d*h-m+m*e-e)%100;
                  b -= (j-h+d*h*b-n-g+e)%100;
                  e  = (e-b+m*b*k+e)%100;
                  l -= (b+c*i+n*h-c-g)%100;
               }
               do
               {
                  b  = (b-h+m*c-c+h-n*e-g+l+m-j-g+m)%100;
               } while( ++DOcnt[6]%5 );
               c -= (b*f+l-g-m-k+h*g+n-c+h+b-f+n)%100;
               for( ; ++FORcnt[9]%5 ; )
               {
                  j -= (h*g*c-i-f+f+l)%100;
                  a -= (n-e-j-h-m+b)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  m -= (c-d+d*j*n+f-n+h-n-l+i)%100;
                  d += (e+e+g+h+a+k+m)%100;
                  b += (j+m-e)%100;
                  f += (b*f)%100;
                  l -= (m-m)%100;
               }
               do
               {
                  b += (d+c+g*m+m-c+d-n+m*k*n-f)%100;
                  b -= (g*k+m+a*l)%100;
                  h += (d+i-h-n-g*d-d*k-l*f-d*f*n+e)%100;
                  h -= (n*f-b-m+n*h+l-m+l-e-g+i-b)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  c += (n+n+k*k+d-c)%100;
                  l += (f-g+e*n*n+i*a-c)%100;
                  k -= (a+h-g*m-a-f*f)%100;
                  l -= (d+g*d-l-f-c*k-c+c)%100;
                  c -= (e*m-b-m-j-m-m*d+m)%100;
                  m -= (n-d-d-g*l+g+g)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  b  = (i-n+h+c*i+f+m*e-i+m-a+e*k-c)%100;
                  h -= (b-c+h*i+b+h-h+f*j+h)%100;
                  k += (j-i+g-c-a-a)%100;
                  l += (g+g)%100;
                  h -= (a*m-b+i-f+g-m+d-j+i*i)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  i += (d-g-h*g+i-d-g-g-e*e-g*l)%100;
                  m -= (j-e+d+h)%100;
                  n -= (m*i-j+a*j-l+d*j-c)%100;
               }
            }
            
            switch( ++SWcnt[3]%3 )
            {

            case 1:
            {
               if( ++IFcnt[4]%10 )
               {
                  f += (k-i+l-d+g+e*n+k+e-b-h-i+m+l)%100;
                  c += (j-g*m+n*g-f-k-m*h+d)%100;
                  i += (c-b+f-f+a+m*k-j+n-i)%100;
                  g -= (a-c-e)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  b -= (f-d+m+k)%100;
                  m += (k+h-d-i-f+n*n)%100;
                  h  = (f+j+m+m-l-i*k+j-i+l*b-j*n)%100;
                  g += (m-l-n-a-i-l)%100;
                  l += (d+k+d-m)%100;
               }
               else
               {
                  k -= (k+j+k-n+i)%100;
                  b -= (m+e-h*b-i-i-m+k-n+j-l)%100;
                  d += (k+l)%100;
                  n -= (g+h+a+d-c)%100;
                  f -= (k*l-i-n-j*m+f-g+g-m*f+m)%100;
                  e += (g+d+c*e+b-n*c-f+h-h+m*g)%100;
               }
               e -= (g-b-j+c*d-b)%100;
               f -= (j+b+h+g)%100;
               d -= (k-l-l+d*i*e+f-g*f-h-f-b-m+m)%100;
            }
            break;

            case 2:
            {
               b -= (b+h+e-c)%100;
               a  = (b+g)%100;
               c += (c*a)%100;
            }
            break;

            default:
            {
               c -= (h*j-f*h*e-c*a+g-c-g)%100;
               k  = (f-j*l+h-k+b+h+k*i+d*l-h-e)%100;
               f -= (k+e+j-j+d-g-j+g-i+k-j)%100;
               f -= (j+c+f*d+f+g-m)%100;
               e -= (m*f+b*c-c*b+e)%100;
            }
            }

            d += (e*b)%100;
            e += (e+m+n+k*e-e*m+d*k)%100;
            b -= (l+h-k+m*b)%100;
            h -= (g*n+m-i+g+g-g+h*c+k*h)%100;
         }
         break;

         case 2:
         {
            d += (k-j*d*h*m+k+e)%100;
            e += (a-i+j*m-h*n-h)%100;
            j += (b+m+c-e+b+a*m-e+f*k-d)%100;
            n -= (e-i*e-h+j+m-m-b)%100;
         }
         break;

         default:
         {
            k += (g*h-c+e-k*c*i-h*a+f-f)%100;
            b += (c*m-e-a*g+n+j-j+f+a)%100;
            l += (h-j*l*f+h*c-a-c*k+j*h*k)%100;
            n += (n-f+i-b+h-e*c)%100;
            k -= (b-h*g)%100;
            n -= (l*m+e+b+g-d+i+i-l-d+a+f+i*d)%100;
         }
         }

         d  = (d*b)%100;
         l -= (m+e-m+n-m+b*h-c+j+j)%100;
         g += (g+h-l*j*n+f+e+m)%100;
      }
      m += (c-i+k*a*a*e+a*n+n+m)%100;
      n += (c+k*a+g+f+k+h-g-m+h-b+j-j+i)%100;
      i -= (f+m+a*i)%100;
   }
   c -= (c+e-b+j-j*e*n+l-b)%100;
   n += (d+l-j+b+h*a+a+n+i-k+a+h)%100;
   d += (k-d+j+l)%100;
   h -= (j-i+a-e+e*e-c)%100;
   l += (k+h+h-d)%100;
   e += (a-m+l*k-i+l-h+i*f*j*k*i-d)%100;
   h -= (n-b+e+a*e-i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F4(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[8]%5 )
   {
      do
      {
         for( ; ++FORcnt[13]%5 ; )
         {
            for( ; ++FORcnt[12]%5 ; )
            {
               if( ++IFEcnt[8]%2 )
               {
                  c -= (h*a+l-f-e*f-j+d*c+m+i+l+c)%100;
                  j += (f+f)%100;
                  e += (m-i-g*b-l-m+c+i-c+b*j)%100;
               }
               else
               {
                  f += (k+h-h-g-a+n-e)%100;
                  i  = (f*f-g+k-a*h+b)%100;
                  c -= (j-d-e*a)%100;
                  j += (i-a-d+m-d-b-j*k+i*n+e)%100;
                  f += (n-c)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  l += (m-e+a-i-g*j+j-k+d+g+i*i*a)%100;
                  e += (k-m+e*k-c*d-l-f+j-l+d)%100;
                  j -= (l+l-k*m*l-k+b-i-c+c-m+g)%100;
                  f -= (m+h+j-f-c+i+d)%100;
                  d += (f*d-j-g-h+n-f+h+h+n*c-b)%100;
               }
               do
               {
                  f -= (i-f-e-f*h*k*f+f+k+h)%100;
                  c += (l*h+b-l-b*l*g)%100;
                  f -= (d+e+d-f-d-i-d-a+n*m-f)%100;
                  n += (i*j*i-c+a*n-j+j*l*g*a+f+h-k)%100;
               } while( ++DOcnt[8]%5 );
               if( ++IFcnt[6]%10 )
               {
                  h += (j*i+i*m-h+j+e*k+c*d-a-n)%100;
                  e -= (g-f*f-l*c)%100;
                  e -= (c-m-d)%100;
                  b += (d+e+b-n*i+e-a+i+g)%100;
                  b  = (m+d+c+l*f)%100;
                  g -= (b*b+g+c+i*b+c+f)%100;
               }
               k += (n*m-h-m*h-l+n+g+n-l+n-k*l-k)%100;
               for( ; ++FORcnt[11]%5 ; )
               {
                  e -= (k-f-b+d*l*h*b*i)%100;
                  d += (i-i)%100;
                  k += (c-l+e-k+a*g*l-d-j*h*a*c)%100;
                  f += (d*g+g+b-k+h+n)%100;
                  c += (g+c+c-a)%100;
               }
            }
            
            switch( ++SWcnt[4]%3 )
            {

            case 1:
            {
               e -= (l+c-a*k*j+l-i+d)%100;
            }
            break;

            case 2:
            {
               i -= (b+j-e*a*e-i-c)%100;
               m += (g+f*i+f)%100;
            }
            break;

            default:
            {
               i += (k+b)%100;
               l += (m*g)%100;
               b -= (j*a+g-f-j+m*i+n)%100;
               i += (i-m+i-c*l-h-i-a+i-i-b-k+h-f)%100;
               e += (l+n+l+m+f-n+e-i)%100;
            }
            }

            b  = (f-c-m-k+i*e+n)%100;
            d += (e+c-h-i-k+a-m-l-i+m+i+i)%100;
         }
         a -= (m-g+g-f+c-b*d*f-b-j+a*d-e)%100;
         g += (a*e-l-n+m+d-j-n*j-e)%100;
         n += (d+d*g+e*g-n+h+e+h*l-k-l+b)%100;
         d  = (d+e-j*j*h-c-k-i+h+j+i+m*n)%100;
      } while( ++DOcnt[7]%5 );
      g += (b-g)%100;
      i += (b+h*e-i)%100;
      f -= (j-k)%100;
      n += (c*e)%100;
   }
   n += (c-b-g*h+i-h-c+b+b+i+b)%100;
   j += (m*n+i+g-i+h*i+k-g-m+i*e-c)%100;
   i += (j*m-g)%100;
   g += (m-m)%100;
   d += (m-e+h+a+m-c-d+h+c)%100;
   l += (i+c)%100;
   e += (e+m+g-a+k-k+j-n+g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[11]%2 )
   {
      h -= (c-n*e-j-b+f+e-c+g)%100;
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
                  a -= (n*a)%100;
                  e  = (h-b+e-i+c-a+d)%100;
                  n += (e+l-c+c-k+g-j*d)%100;
                  c  = (f-m-n-n+k-j+k-l+d*d-h+a)%100;
                  h += (g*n-k+d-k*i-i+l-e+c-g+j*e*k)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  n += (n*g-b-k+m*f*k)%100;
                  c -= (c-h+e+k-i-m+d-c)%100;
                  h  = (g*d-n+c*k-g)%100;
                  m -= (j-c*k-i+d-c-l+h+k+f+k)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  c += (h*h*g)%100;
                  k += (n+l-n+e-j+l)%100;
                  a -= (b*k+a-n-e)%100;
                  j -= (j+b)%100;
                  n += (l*g+i*f*n-d+m)%100;
               }
               else
               {
                  b -= (b*h*i+f*c+f*g-h*e-f)%100;
                  b  = (j+g-f-d+l-i+e-j+n+g-a-k)%100;
                  m -= (g-f+l-n+e+m-n*d+i+d)%100;
                  b -= (d*b+g*c-h*k)%100;
                  k -= (j-c-n+a+l-i)%100;
                  f -= (k-i-k*j*b+j+l+e)%100;
               }
            }
            while( ++WHILEcnt[9]%5 )
            {
               do
               {
                  d += (j*h-e-n*l+b-f+g+c+k+i)%100;
                  c -= (b+d-h+h-i+a*m)%100;
                  c  = (h+c+e-l-d-f+b+d+b+c-d*b+i*j)%100;
                  b -= (h+b*n*f-l*m*b+l-i)%100;
               } while( ++DOcnt[10]%5 );
               a -= (a-k)%100;
               for( ; ++FORcnt[16]%5 ; )
               {
                  l += (d+g)%100;
                  j -= (a-l*c+n+g-a-a-h)%100;
                  m -= (n-b-k+a+g+d-i-n-m+m-f-l-d)%100;
                  n -= (j*l*l-g-e*e-n*h+a*a+k)%100;
                  k += (g+j-e*l+f-b-e-b*g*b+d-h)%100;
                  n += (k+h+e+m-i+g+i*c*f*i-d)%100;
               }
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  i -= (n+d-e+e-n+j+d-n*n*b+c*m+j)%100;
                  i -= (h*m-f+a)%100;
                  a -= (e+f)%100;
                  f -= (c+n+c*g+k*j-h-i-b)%100;
                  k  = (f+k*l*a-f)%100;
               }
               break;

               case 2:
               {
                  d -= (c+j+l*d*j)%100;
                  j += (d-l*a*d+m*f)%100;
                  a += (g+j-e+j-j+a*f-e-b*l+j)%100;
               }
               break;

               default:
               {
                  l  = (d+l-c+h-a-f+l-l-k)%100;
                  c -= (n-m*g*b-m*b)%100;
                  j += (f-f+d*a+f-b+j-m-m+j)%100;
                  f += (b+i+f-d*m+a+j+f-j+h+l+b+k)%100;
                  a += (b*l-f-i+m+g+e+f)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  d += (j*f-l)%100;
                  j -= (a*b)%100;
                  k += (f+d)%100;
                  m += (d-e+g*d-l-d-j+c-l*b+k-c+b)%100;
               }
            }
            if( ++IFEcnt[10]%2 )
            {
               d -= (k-f-c*g+h+i-l*d-g+f-l+b-j)%100;
               a += (d*g+e+g+f-g+n*k-e+d-m-h-f)%100;
               m -= (j+j+e+j+h-l+e+a+e+g)%100;
               m += (d+n-n*j-f-m-g+m+h-n)%100;
               j += (g-f+b+f)%100;
            }
            else
            {
               k -= (g+e*f-g-i-d+n*j-j+l)%100;
               c += (h+f*h*f-l+k)%100;
               a += (m*k-j*n+f)%100;
               a += (n*i*i*n*m+c*e-d)%100;
               b += (e-a+g+n+d*h*n-k+k+e+e)%100;
               g += (i+i)%100;
            }
            f -= (f-e+k+n*c*l+b*j+m+a+k-f+k)%100;
            g += (j+n+d-g*j*e*k+b-d*h-n+f+d+k)%100;
         } while( ++DOcnt[9]%5 );
         e += (m-g-n-j+d-c-n+k+c+e-k+l)%100;
         d -= (n+b)%100;
         n -= (b-g+i-m+i+f-m)%100;
         i -= (g-m+h-l-m+d-m)%100;
         i -= (c+d+k+e-f+l+c)%100;
      }
      m -= (a-g+f+a+b+b*n-k+j-f)%100;
      c -= (e+d+d+c)%100;
      f -= (j+n*c-d-j*c*j+h+b-g-i-a*f)%100;
   }
   e  = (f+l-b)%100;
   m += (f-i*h+l-e-i+a*a+g)%100;
   b += (k+h+l*k-j+n*m-l*f-a+j*f*d*k)%100;
   c -= (l*c-m)%100;
   k -= (l+h)%100;
   m += (m+n)%100;
   m += (h+m-c-d+g-b+m+i+l-h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F6(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[13]%5 )
   {
      do
      {
         for( ; ++FORcnt[20]%5 ; )
         {
            for( ; ++FORcnt[18]%5 ; )
            {
               if( ++IFEcnt[12]%2 )
               {
                  l -= (d*c-l-b*b+i-i-h+l-c*m-n-b)%100;
                  l -= (i*k+e+f+j*i*l+e+k)%100;
                  l += (e*j*k)%100;
               }
               else
               {
                  h -= (d+j-i-m+e+j*e-m-i)%100;
                  h -= (c-m-g+m-c+i-d+n+l+c)%100;
                  e += (a*c+j+f-e-k+i*l+l-m)%100;
                  f += (g*h+m+e-m+e-i+j+g)%100;
                  j += (j-g+c+d-k-a+n-e+f-n-h+k*e-l)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  l -= (d*k+b)%100;
                  f += (i-h+k+k)%100;
                  e += (d-i+j-e*a*g-d-e+e-e)%100;
                  l += (c-i*m-l+d+g)%100;
                  g -= (h*m*i-j+n-j+e+b+e-k*e-a-k)%100;
               }
               do
               {
                  i += (f-j)%100;
                  g += (a+h+l)%100;
                  l -= (b-l+c-f)%100;
                  c -= (i+h-n-a-b-i-f-c-d+d+d+j+a)%100;
               } while( ++DOcnt[12]%5 );
               if( ++IFcnt[9]%10 )
               {
                  j -= (b*d-b+i-g+l+b-a+h-j*a+a+j)%100;
                  g -= (i*k+j-e+f)%100;
                  g += (i+e-g-k-h*m)%100;
                  i -= (f+n)%100;
                  c += (c-f-g)%100;
                  e  = (b*j*b-a*h-g+h*c-g*e-e-h)%100;
               }
               b += (i+k-h+n-h-b*d-i)%100;
               for( ; ++FORcnt[17]%5 ; )
               {
                  g  = (f-g-g*l-g-b+h+d)%100;
                  i += (m*d+i-i+m+g+c-a+e)%100;
                  b -= (a*g+i+f*l-j-g*g)%100;
                  c -= (i-l+f-g-h-n-f*c+f+g+h-e*k*n)%100;
                  i  = (l+d-n-n*l-d-c+j+f*l+n-a)%100;
               }
            }
            
            switch( ++SWcnt[6]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[13]%2 )
               {
                  j += (c-l-k+i+k-k-f+a-n)%100;
                  j  = (l-g-h-f+i+c+b)%100;
                  b -= (n+b)%100;
                  a -= (f-f*e)%100;
                  a -= (b*b+i+c-c-f+l)%100;
                  e -= (k*i-e+l+l+n-c+k)%100;
               }
               else
               {
                  f += (g+i+n+k*f-a-e*a+b+f*j-h)%100;
                  m += (g+d*h*g*l*k+n*a+d+b+h+i)%100;
                  h -= (h-j-n*e)%100;
                  m += (k+b)%100;
               }
               while( ++WHILEcnt[12]%5 )
               {
                  k += (i+f-g+e+f+f-a+e)%100;
                  g -= (i*f-m-n-j*d*n+k*f+c)%100;
                  c -= (b+g-d*f+n)%100;
                  k -= (e+a*g-e-g-i+k-e-h*k)%100;
                  b -= (j-a)%100;
               }
               do
               {
                  f += (b-b*l-g+c+a*h-l-m-a+e+g*f)%100;
                  a += (i+d-i*j-e-f+m*i*i-h-l-h-m)%100;
                  d += (l+k+h*a-n-e+e-h+j)%100;
               } while( ++DOcnt[13]%5 );
               for( ; ++FORcnt[19]%5 ; )
               {
                  f += (b+b)%100;
                  n += (a*f*f+a-h-m)%100;
                  j += (c-d-e)%100;
                  l -= (d-h+k+g-j-b+f)%100;
                  m += (e+a*h*l*i*n+k+n+g-g-c-j-a+k)%100;
               }
               j += (k-e-l-a+m)%100;
            }
            break;

            case 2:
            {
               l += (k-f-n-h+i+d)%100;
               a  = (n*h-n+f-a)%100;
               i -= (b*l+m+m-g-m-l*m+f-n+g-f*b-m)%100;
               l -= (g*k-a+h+c-b-f+m+g*a-g)%100;
            }
            break;

            case 3:
            {
               f += (f-i+i*h+a+h-c-k-i)%100;
               d -= (e-g+k*m+a-i-k-b+n*h)%100;
               k -= (i*e)%100;
               b -= (l-n+k-k+k+i-e-j+a+c*d)%100;
               b -= (l-g+m*g+g+b+n-n+a+b)%100;
               l -= (a*b)%100;
            }
            break;

            default:
            {
               h  = (h+i+e-c+e-a)%100;
               m -= (d+i-c-a-h+k-f+m-m*j+n*i)%100;
               k += (f*c)%100;
               g -= (i+m)%100;
               a += (d+n)%100;
            }
            }

            c += (f+e+g+k-c*e+g-n*f+m-b+d)%100;
            c += (i+h-c-c-j*e-f+k*b)%100;
         }
         a += (f-l-d-n*m-l+m-k-m+j+a-a-l-f)%100;
         f += (i-g-h+j+e+i+l+g-n*j+b-m-g-m)%100;
         b += (l+f*i-n-i-h+l+a*i-k-n)%100;
         f += (m-g*l-f+m-e+m*n+f-b+a)%100;
      } while( ++DOcnt[11]%5 );
      c += (m+m-h+n-d-k*g-j-c-a)%100;
   }
   a += (l+g+g-c+b-g+b*h*d)%100;
   i -= (h*a+e*a)%100;
   e -= (h-g+d*i+f-k-n-i-a+i)%100;
   e += (d+l*i-l+n)%100;
   g -= (i-g+c+h+k+m-h)%100;
   c -= (a-d-l+i+a-g)%100;
   g -= (d-n-j*j+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F7(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[11]%10 )
   {
      for( ; ++FORcnt[22]%5 ; )
      {
         if( ++IFEcnt[15]%2 )
         {
            m -= (a-f-c+f*m)%100;
            k -= (m-c+k+c+g+b-j+h)%100;
            i -= (m*d*c)%100;
            f  = (m-n+g+h*e-n*b*c+n-m-f+e-f-e)%100;
            b += (h-f)%100;
         }
         else
         {
            while( ++WHILEcnt[14]%5 )
            {
               do
               {
                  e += (d-e+a*f*f+a-n-l*c+k+b+d)%100;
                  g += (c+h-c+g-e)%100;
                  l  = (l+m-h)%100;
                  j -= (k+i+n-d+h)%100;
                  i -= (j-b+h*l-l-d+m*l+l+d+c+g-f)%100;
                  n += (k+g-h-g)%100;
               } while( ++DOcnt[14]%5 );
               l += (m+g-m+c+b+h-g+i-i*b-c+n*i*f)%100;
               for( ; ++FORcnt[21]%5 ; )
               {
                  g -= (g+j+h-d*i*d-d+n*j+m*j)%100;
                  i  = (f*j-l)%100;
                  a -= (m-c-b-f)%100;
                  c += (h+i-g-c+m*n*e*g+g)%100;
                  l += (m*e+m+f-f+l-h-b+k*f)%100;
               }
               
               switch( ++SWcnt[7]%3 )
               {

               case 1:
               {
                  h  = (m-i-a*h*d)%100;
                  l += (l-i-i-d+j-c+h-c)%100;
                  f -= (g-m*f+e+c*j+f*c-c-h-f*d+n)%100;
               }
               break;

               case 2:
               {
                  a -= (a-m)%100;
                  f -= (k*e-h+m)%100;
                  f += (n+e-j+m+a*i+i+e+e)%100;
                  a -= (a*j+c+f-g+h-j*n-j)%100;
                  m += (c+k+g+d+b+f-c-b-k+h*h-k-b)%100;
               }
               break;

               default:
               {
                  f += (a-a)%100;
                  m -= (j+b)%100;
                  m -= (h+h)%100;
                  e  = (n+k+c+l-g-a+i-h+n+j*m)%100;
               }
               }

            }
            if( ++IFcnt[10]%10 )
            {
               if( ++IFEcnt[14]%2 )
               {
                  c -= (h-c-b)%100;
                  a -= (n+m+j-h-e)%100;
                  i += (b+f*c+e-d-j)%100;
                  g -= (i+m+j+d-g-m)%100;
                  b += (h+l-g-g+h+l-i*f+g*e)%100;
               }
               else
               {
                  b  = (b*n-k)%100;
                  g -= (b+d-l)%100;
                  g -= (k-c-f*f+m+d)%100;
                  b += (b+i-a-f)%100;
                  d += (g+e-n+m-l)%100;
               }
               while( ++WHILEcnt[15]%5 )
               {
                  b += (m-j-l+m+f-d*n+g*l-n+c+b)%100;
                  a += (c-e+g-k-l-i-g+f)%100;
                  b -= (k-a-l+a*g+d-j+d-j*i-m-e*i+k)%100;
                  c += (h+g-d+i-n-k+c+f+g)%100;
               }
               do
               {
                  n += (c-g-f+g+g*a*k-e)%100;
                  c -= (d+d-g*i*a+j-g+a+i+i+n-g*i)%100;
                  m += (j+n+d+l-f-d*f)%100;
                  n += (b+k+d-n+g)%100;
                  l -= (n-d-a-l+i-d+d+i+m-f)%100;
                  m  = (f-a+n-j-a-f-k*i+m-d)%100;
               } while( ++DOcnt[15]%5 );
               a += (e-m*n+j)%100;
               b += (h*j*a-i+h+n-n+e-h)%100;
               g += (a-a+k*g+j+c-c+l+c-k-j-j+i+l)%100;
            }
            k -= (c-m*n+e-b)%100;
            m -= (i-j+g+g-n-n*l-m+h*b*h+g-j-j)%100;
            f += (d-e+g*a*i+e)%100;
         }
         c -= (b+j-m+h-j)%100;
      }
   }
   n -= (k-m+a+l-c+j*h*c)%100;
   e  = (c-i)%100;
   c -= (f+f+a)%100;
   g += (f+c+d+a)%100;
   l -= (i+h*m)%100;
   i += (c-c-b*j)%100;
   a -= (i-g-c-d)%100;
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
            c -= (k*k-k)%100;
            l += (f-h)%100;
            l -= (i+a+h)%100;
            a -= (d-c+j+g+h+j+l+h-i-f-m+a)%100;
         }
         else
         {
            while( ++WHILEcnt[16]%5 )
            {
               do
               {
                  i += (f+d)%100;
                  a -= (f+j-n*b+i+k+j-b+c)%100;
                  i  = (h*b-n+g-m-m)%100;
                  h -= (h-h-c*n+m-j-e)%100;
                  g += (j*n-m+m+i+n+e)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  h -= (j*c+f)%100;
               }
               m += (d+k-l)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  i -= (a+j+m+k-h+i)%100;
                  n += (h+a-b-l+f-c+h+m)%100;
               }
               
               switch( ++SWcnt[8]%3 )
               {

               case 1:
               {
                  h -= (c-h*a-d-i-m)%100;
                  d -= (c-h+f+c+m+e-d+m+k-m-e+d-h*n)%100;
                  m += (g-h-h*g+n-j-e+c-i)%100;
                  e += (h+l-k*i*k*j+h+c-c-k-l+k+f*e)%100;
                  l -= (k+n-h-l+i*n-b+k-i*c*h)%100;
               }
               break;

               case 2:
               {
                  j  = (k*j+a*n+c-c*l*k+d+d-m+d)%100;
                  j += (n-c)%100;
                  a -= (d-n-f+b+a-n-h+d-h-b-c+f)%100;
                  e += (d+h+a-l*i*b+b-e)%100;
               }
               break;

               default:
               {
                  g += (c*h-l*j-j-e-a)%100;
                  d += (n+n)%100;
                  i += (i+m-a+e*m+c+h)%100;
                  b += (a-k*a*d-h+e+k-a-i+n)%100;
                  g -= (m+m+i-n*c+a-j*n*i+e-g-e-h)%100;
                  b += (m+m*k-g*h-d+j+g+i+k+b+k+n+c)%100;
               }
               }

               if( ++IFEcnt[16]%2 )
               {
                  i  = (l*j*j+g+h*n+n+h+c+d*h+h*g)%100;
                  g += (c-l*a-d-k+d)%100;
                  n  = (e-a-d*d+j*a)%100;
               }
               else
               {
                  h += (j*j+l-e+a-l-m+j-l-a*b+h-i*i)%100;
                  b  = (n-c-c)%100;
                  d += (c+d+i+n*n-f-l+c*k-i+n*b*k)%100;
                  l -= (b*e+d+f)%100;
                  h -= (a+e*e+n+f+f-b-g+l-i-e)%100;
               }
            }
            while( ++WHILEcnt[17]%5 )
            {
               do
               {
                  b -= (l+j)%100;
                  l  = (l-a-m+g-d-f-b-j*h-a*c)%100;
                  j += (n*d-a-e)%100;
                  l -= (l-d*m+l-g*m-h-f*d)%100;
               } while( ++DOcnt[17]%5 );
               for( ; ++FORcnt[24]%5 ; )
               {
                  k -= (n+l)%100;
                  d += (k+k-c*j+e)%100;
                  j += (f+k+e+b-b*n+m*c+i)%100;
                  h += (l*n-b*m+i)%100;
                  k  = (m*e+d)%100;
                  a += (m+a+m-j-d-g+d*m)%100;
               }
               if( ++IFcnt[13]%10 )
               {
                  b += (g+j+b*e*f+i-f*g+a-c*l)%100;
                  b -= (i*c-i+i*h)%100;
                  e += (j*f*f-i-a*m)%100;
                  h += (f-h+h-l+b)%100;
                  j += (c+k*c-k+m-n*c)%100;
               }
               for( ; ++FORcnt[25]%5 ; )
               {
                  a += (i-k-d*i-f)%100;
                  h -= (j-d)%100;
                  m += (k-m)%100;
                  c -= (g+g-b-f-c-a)%100;
                  m += (m*k-a*g+f-g-c-b)%100;
               }
               c += (l*m-h*k)%100;
            }
            i += (d+m-h)%100;
            e += (n-i+k+f+f)%100;
         }
         i += (k-n+b)%100;
         a -= (a-c*b-i+c+m-n)%100;
         b += (c-i-d+b+c-i+i-h*d-k*h+n+i)%100;
         n += (d+e+a+n)%100;
      }
      i  = (k-i-d+l-d*k+g+e*i*d+h+e-m*j)%100;
      a -= (f+h-i+b)%100;
   }
   e += (m*j*b)%100;
   b += (b-i+m*b-g*i*d-a+l+d*n-d+b-k)%100;
   e -= (m*c+i-e+m-f-a*j+n-l-h)%100;
   i += (l-h*j+b+c+h+a)%100;
   m  = (e-b+l*l-f-i+j-b-b)%100;
   l += (f-n)%100;
   b += (g-a-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[20]%2 )
   {
      l -= (k+i+k-b+k-m+i+l-d-k*c)%100;
      d -= (e*h-l*a-e-j+c+m*n+f)%100;
      e -= (j*l+m)%100;
      d -= (f-h+d+h*n)%100;
      h -= (a+d+b+k-i+i-h-c-d-i)%100;
   }
   else
   {
      while( ++WHILEcnt[20]%5 )
      {
         do
         {
            g += (e-e-m+f*m+i+m+a+a)%100;
            for( ; ++FORcnt[28]%5 ; )
            {
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  k -= (g-d+e+h-f-m-d+c*c*e)%100;
                  g -= (f-e-f+e+b+l-g*m+l*l+g)%100;
                  e += (j+n)%100;
                  n += (l+k+l)%100;
               }
               break;

               case 2:
               {
                  g -= (g*h+l+d)%100;
                  d += (i*d+h+c+h*e)%100;
                  m -= (j+d)%100;
                  k += (k-c)%100;
                  k += (c+g+l+a*h-a+i-j+g-j)%100;
                  c -= (n+l-i+m+b+d*g+h-c)%100;
               }
               break;

               default:
               {
                  i -= (b+m*c-l+l)%100;
                  i -= (c-j)%100;
                  f += (f-m+j-g+d*b-i+m-e)%100;
                  l += (c*m-l+n-e*f*d-g+h)%100;
                  m -= (b+n-j+l*e-e+k-b)%100;
               }
               }

               if( ++IFcnt[14]%10 )
               {
                  m -= (g+n+l*m+f+f+g+e)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  c += (f-g*k-k*g*g+g-c+d*k+a)%100;
                  j -= (f+a+i-n+n+g+d+d*n-g+l*f+i)%100;
                  g -= (k+m-j-g-h*f+b-c+l)%100;
                  e += (a+f+k-h-b+f)%100;
                  j += (j+j)%100;
               }
               else
               {
                  i -= (g-a*k+g-i+i*b)%100;
                  e -= (g+i*i*k+d*f*a-f-f)%100;
               }
               while( ++WHILEcnt[18]%5 )
               {
                  l -= (n+a+k-a-i+e+g+c)%100;
                  e -= (m-c*h+n)%100;
                  j += (a*d+c-b)%100;
                  k -= (j+n-m+m+a+l-m-l+c*g-l*c*l)%100;
               }
               do
               {
                  j += (k*n*e-f+k+b-d+m+a+n-l-g)%100;
                  j += (i+l+b)%100;
                  g += (c+i-n+i-j*f*m*b*f)%100;
                  b += (f*k-i+n-m+a-a-c+i+g-d-a+d)%100;
                  m += (k*m+c-f+a-b-c+n+l*b+g+g*h+h)%100;
                  m += (b-f*j-e)%100;
               } while( ++DOcnt[19]%5 );
            }
            for( ; ++FORcnt[30]%5 ; )
            {
               for( ; ++FORcnt[29]%5 ; )
               {
                  m -= (m+b+j*a+i-e*f-a*a-m)%100;
                  a += (e+i+k+n-m*g+a-k-k+h-k+l)%100;
                  e  = (a-k-m+m*l+h*b+j-h+f+d-g-n+h)%100;
               }
               if( ++IFEcnt[19]%2 )
               {
                  m += (i+a*a-b-f+b*n)%100;
                  b += (l-k-a)%100;
                  e += (b-g*d+f-l+n+i-n-j+c*b-j+l)%100;
                  b -= (a+f-e+i+a)%100;
               }
               else
               {
                  j -= (b-n+l*e+m+e+l+i-c)%100;
                  k -= (n+a-k-h+b+a-c-c*b)%100;
                  n += (a+a+n+d)%100;
                  l -= (k+l*k-a+b-b+i-g+g-g-b+g)%100;
                  m -= (d*h)%100;
               }
               while( ++WHILEcnt[19]%5 )
               {
                  h += (g+m-c-j*h-l-d-g+i*d+g+g)%100;
                  e -= (h-n+j+g+g)%100;
                  c -= (g*f-i-c*n-i+d+h*b-d+n)%100;
                  e += (a-a*d+b)%100;
                  c  = (n-a-g+l+d-b-b-g+f+l*k-c)%100;
                  l -= (l-e*i-f+h)%100;
               }
               l += (m-c-l-h-m*d)%100;
               h -= (l+k-i*n+a+d*i)%100;
            }
         } while( ++DOcnt[18]%5 );
         h += (f-j*f-a+j*h-a*n-i+i+l+g*b)%100;
         i -= (k+h+g*l-c+h*i-a-f+k-g)%100;
         e -= (n+m-d*k+d*g*c+n+c+g-c*l+e)%100;
         b += (k+e+n+c+d-a-g+b)%100;
      }
      d -= (b-h+e*h-j+l*g)%100;
      l += (h+n-d-h*m*i-g)%100;
      c += (m*i+l-b+h-k+j+i+d-k)%100;
      i -= (d+g+g+j+b+j+h-i*h+n-l)%100;
      d += (i-m-l-h-n)%100;
   }
   n -= (a+k+j+c*k-d*c*e+n+b-k+n)%100;
   a += (b-l-h)%100;
   i += (b-m)%100;
   g -= (j*c+h+g-b-k*k*e-g-e+a)%100;
   a += (j-e+n*c*d*n+g+k-f+k)%100;
   j += (b+h-e+e+b-l+b-e-n*g-g)%100;
   j -= (f*m+m-j+e+n-i-g)%100;
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
         m -= (j+d-l-b*l+i+a+c*e*g)%100;
         for( ; ++FORcnt[33]%5 ; )
         {
            
            switch( ++SWcnt[10]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[21]%2 )
               {
                  g += (m-b-e-h*c+h)%100;
                  n  = (f-c+e+m*c-k+b-b)%100;
                  g -= (h-c+m+k*j*n*l*f*g-n-h+c)%100;
                  b += (f-n+d-j-n*n-j-k-a+d*g-n)%100;
                  n -= (e+d-k+k+k-k-n+k)%100;
               }
               else
               {
                  l  = (c*j*a-j-n-k+a+f*d+b+n)%100;
                  n += (m+j+m-i-e-a)%100;
                  i += (m+h-f+n-n)%100;
               }
               while( ++WHILEcnt[21]%5 )
               {
                  e -= (g+f-a-h+g+m+f)%100;
                  f -= (i-d+a*m*b*j-h+i-f-d)%100;
                  j -= (d-m+d-e+f-i*k-j+i-k+h)%100;
                  j -= (l-a+d-j*g-d+m-l)%100;
               }
               do
               {
                  b += (g+n-h+l+d*a)%100;
                  f -= (m-f+f-f*a-b)%100;
                  m -= (h*m+f+a+j*j+b*b*m-n-e+m*f-f)%100;
                  k += (f*m-e*d+b+m*b+m)%100;
                  f -= (c-i+k*g*h*b+g+k-j-b)%100;
                  j -= (b*e+b+c+k*i-d-h-m*n-k)%100;
               } while( ++DOcnt[21]%5 );
               for( ; ++FORcnt[31]%5 ; )
               {
                  h += (n-c)%100;
                  b -= (d*f-g-c-g*k-m*h+b+k)%100;
                  a -= (m+n)%100;
                  g += (a-l+j+i+k-e)%100;
                  k += (h-i)%100;
               }
               if( ++IFcnt[15]%10 )
               {
                  h += (b-n-a+d+j+l-c+i+h+i*l+h+d-k)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[32]%5 ; )
               {
                  e -= (a-f+f+a+m*g+b+m+j+g*d)%100;
                  m -= (b-b+g+g+g-m+f-g-f+e-a-i)%100;
                  c -= (j*h-j+g-f+b)%100;
                  m -= (i+g)%100;
                  g  = (g+g*b+e)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  d  = (f*k+d*g)%100;
                  k += (n*c+g-g*g+f-d)%100;
                  k  = (g-h)%100;
                  j -= (f+j)%100;
                  f -= (f-n+d-f-g+l-a)%100;
                  b -= (l*f)%100;
               }
               else
               {
                  b += (l-h*c-h+n-g-c-m+g*f-g+k)%100;
                  b += (k+m-g-b+a)%100;
                  j -= (c-d+k*h+e+f-b)%100;
                  h -= (k+m+e-m*j+g*d*a+n)%100;
               }
            }
            break;

            default:
            {
               while( ++WHILEcnt[22]%5 )
               {
                  h -= (a-g*n)%100;
                  k -= (a*k*d-b*i+m+d+h*l+h-n+l-n)%100;
                  d -= (n+i*c+k+f+m-a-j-n-j*e*j)%100;
               }
               do
               {
                  f += (e*m+j-h+m-f+c+g-b-i)%100;
                  i += (c+n+a*c+f+b+f-g-h-b)%100;
                  i -= (a+g-e+f*k-a+j-b-l-g)%100;
                  m -= (n+e+k*c*g*l*n-k)%100;
                  b -= (h+j*b+j-j+b+k+c+e+h+j-g-d-l)%100;
               } while( ++DOcnt[22]%5 );
               e += (i-h+k+c-c-m+g+m)%100;
               j += (e+m*b*j*e-m)%100;
               b -= (j-f-n*e+k)%100;
            }
            }

            i -= (g*n*c-c*i-f+d)%100;
            i += (i-a+c*e+f)%100;
            n -= (e+e*h-g-f+g+f+k+j+f+i*g)%100;
            j += (c*a)%100;
            i -= (j*f)%100;
         }
         a += (h+n+l+n-c+k*h)%100;
         i -= (h-a+j-f-j-k+m+k-e)%100;
      }
      e -= (e-a+c-i*j+k*b-b*e)%100;
      i += (g+i-h-f-f-a-g-l)%100;
      h -= (d+l+j-e-f+b+m-j-i+e-d)%100;
      b += (m+f-l)%100;
   } while( ++DOcnt[20]%5 );
   n += (f+m-f+f+j-c+j+i+b-d-b+n-j)%100;
   d += (f*n-d-f-l-b*a-g-a-k-f+c+m)%100;
   l -= (a-a)%100;
   e += (a-f)%100;
   e += (i-i+e-h*f)%100;
   e += (c-g)%100;
   f -= (e+f+n-e-d-i*m-l*h-b+e+g-e-e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F11(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[37]%5 ; )
   {
      
      switch( ++SWcnt[11]%3 )
      {

      case 1:
      {
         if( ++IFcnt[18]%10 )
         {
            if( ++IFEcnt[24]%2 )
            {
               while( ++WHILEcnt[24]%5 )
               {
                  m += (j-e-b*g+e-d-j-h-b*m*k)%100;
                  f -= (b+d+n*k-m*a+a*k+h-n-l*a-n)%100;
                  j += (e+d-i-f-l)%100;
                  j -= (d+l)%100;
                  a -= (k*d+j-f-i*m+l+h*l)%100;
               }
               do
               {
                  b -= (e*m+i-n-m-d+i+a-e*h-l-g)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[17]%10 )
               {
                  a -= (m-c+i-l+c*g+k+n+k+g-a-h)%100;
                  j -= (f+f-l-n*e-n+g-g-i-f)%100;
               }
               c += (g*f+n+b+l+j+b*d+n-d+c-i-c)%100;
               for( ; ++FORcnt[36]%5 ; )
               {
                  m += (h*f-b*m+d*m*d+j*b-i*j+k+f*e)%100;
                  a += (k*l)%100;
                  e -= (b+h*g-e-d+n+b+h+a+e-j)%100;
                  h -= (e-g*g+e+l*f)%100;
                  m -= (b-a*n+a-e*k-g-f+j*a+h-l)%100;
               }
               
               switch( ++SWcnt[12]%3 )
               {

               case 1:
               {
                  d -= (c*e)%100;
                  c -= (i-e-k-f)%100;
                  b -= (n-i-g*e+n*m+f-n+m+i+k-m)%100;
                  a -= (c+i)%100;
               }
               break;

               case 2:
               {
                  h -= (l-e*c-n-a-g+c+j-k+m+c+j)%100;
                  l += (d*j+a*b+i*c-i)%100;
                  f -= (h-d)%100;
                  c -= (n+k-m-f)%100;
                  g += (l-a+c-h-k+b-m+k*k+e*b+g)%100;
                  d -= (j+j)%100;
               }
               break;

               default:
               {
                  c -= (f+f-c+n+a+l)%100;
                  h  = (l+a*i-b+k+i-e+b-e-k+h*d)%100;
                  l -= (h+h+g+l)%100;
                  k += (m+d+l+n-b+g*g-c*l-a*m+b)%100;
                  g -= (k-n-c-d+g-g)%100;
               }
               }

            }
            else
            {
               while( ++WHILEcnt[23]%5 )
               {
                  l -= (g*k-k+m+c*e+b+d-m*g+i-e-b)%100;
                  f += (n+i-f+d)%100;
                  m -= (l*d-a+l+c-n*l-g+a-e-l+g)%100;
                  a += (f-f+g-i)%100;
               }
               do
               {
                  c -= (g-f-j-a)%100;
                  m -= (n-e)%100;
                  f += (i-b+f+h*d*j-l*b+h+h*m+h-c+n)%100;
                  h -= (h+i)%100;
                  g -= (k-d+m+g*i)%100;
                  d -= (g-b+g-b)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  e += (g-d-e+k+d)%100;
                  d += (e+d-j-a*d-a+n-f)%100;
                  l -= (l-j-h*f+m*h+m+a+h*a+b-e-j*f)%100;
                  a += (g-h-n*i)%100;
                  g -= (c-a*n)%100;
               }
               for( ; ++FORcnt[35]%5 ; )
               {
                  j += (k*b+k-n-a-c-h+a-i+m-f*m)%100;
                  k += (i*n+k+h-e*h*j+l+m+m*i)%100;
                  i += (n*f*f-g+h-a+n+m+d-m+d)%100;
               }
               if( ++IFEcnt[23]%2 )
               {
                  f += (b-d+f+d+e+l-h-g-n-i-a+d-f+i)%100;
                  l -= (b+i+j*g*j)%100;
                  a -= (a-n)%100;
                  a  = (a-m+l-f*n+k+l+i+k)%100;
               }
               else
               {
                  d += (b+h-n*k)%100;
                  e += (l-l+n+m+g-g-a+k+k+a+c-g)%100;
                  f += (m+h+k+b)%100;
                  l += (m+j+l)%100;
                  g -= (b-h-m-m*j+g-a+a)%100;
               }
            }
            d -= (h*n-m-e)%100;
            k -= (a-i+m*i+a-d*c+b-f+h)%100;
            g += (d-h*l-l*f+j-n)%100;
            l -= (f+b*j+m+n+l+d+j)%100;
         }
         f  = (g+g-i+a+i+d+j)%100;
         h -= (e+d+l*i-g+f-n*j-b+n+a+a)%100;
         d += (f-l+l*k+j-a+n+m+a+l)%100;
         f += (b+d)%100;
         a -= (l-h+e*h-c*i+b+h-l+j)%100;
      }
      break;

      case 2:
      {
         d += (j-h*l*b-h-d*f*j+e+d-f-f*m-h)%100;
         d += (k*b-l-c-n-b)%100;
         m += (e+n+g*h)%100;
      }
      break;

      default:
      {
         c += (k-a-h-c+e)%100;
         e -= (j-j*e+k-j-m-l+m)%100;
         d  = (f+i*j+c-h+b-d-d+i-d)%100;
         h -= (a*k-g-c+a*k)%100;
         n -= (k+g+a+g*d+b+h+d+c+l)%100;
      }
      }

      g += (h+l*b-m*n+a*d-k*j+d-d)%100;
      l += (n+n+l+n+a+a*m-m+c-d-i)%100;
      h += (h-h-i+k+k-g)%100;
   }
   f -= (h-h)%100;
   a += (b-e-n+f+b+k*b-g+i*m+i)%100;
   k += (l+d-k-a-a+n+b+e-e-a*j)%100;
   g -= (e*g+m*f+f+d-e+g+g+h+l)%100;
   f += (n+d+b-f-j-c+c+c*k+e-f)%100;
   l += (b*g+m-k-h+l*i-b+b)%100;
   a -= (m*i-k-a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[27]%2 )
   {
      k -= (f-e+j-b)%100;
      c += (f-k*a+b*n-g)%100;
      e -= (h+k+e-c*h-j-k+b*f-g+g)%100;
      d -= (b+c+d+m+b*i-i*c-f-e)%100;
      j -= (h-m-i+e+k+h+a+e*n+l*g+c-b-l)%100;
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
                  h -= (i+h-h-h-b*a*h-b+h+i)%100;
                  c -= (k*g*b*a+e-j-f*e+h-b+d-d+h+i)%100;
                  e += (n+c)%100;
                  a += (j+n-d*a+k-e+a+e*n+l+g*d-f)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  i -= (n+m+b*n*n*h-d+i*b+l*h)%100;
                  a -= (d+c*a)%100;
                  n += (j*h-b-k-b-c)%100;
                  m += (i+n+j*a+m+h-f-m*a*f-e*k-j+g)%100;
                  b -= (d+d)%100;
                  g -= (h-n*c+k+l*a)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  c += (k+n+c-l+j-c)%100;
                  h -= (a+n-a*l)%100;
                  f -= (k+m+e-f-g-h-m*g+f-h+d)%100;
               }
               else
               {
                  d += (k-i-k-b+j)%100;
                  h -= (g*b)%100;
                  e -= (m+i-k+f)%100;
                  i  = (j-a+l)%100;
                  f += (m+g+n+f*c+d*i*l+d+j+b-j)%100;
               }
               while( ++WHILEcnt[25]%5 )
               {
                  f -= (e+e*h+e+c-e-h+k+k+h-l-d*d)%100;
                  h -= (j-h*h+c-k+j-c)%100;
                  b -= (b+m)%100;
                  d += (l+j+l+k-n*n-l+f+d*e*i*m+l-m)%100;
                  a += (f-n)%100;
               }
               do
               {
                  m -= (b*h*i*c-f-l+h)%100;
                  m  = (h+g-f+g-i+g-m-c-a+b)%100;
                  i -= (h-c)%100;
                  a += (g*b+k*i)%100;
               } while( ++DOcnt[26]%5 );
            }
            n += (a+m*d+f-j*b-d-c)%100;
            for( ; ++FORcnt[40]%5 ; )
            {
               
               switch( ++SWcnt[13]%3 )
               {

               case 1:
               {
                  k  = (m+f*c+m-m)%100;
                  i += (c-h)%100;
                  g += (g-c+i+g*j+n+a*h-i*e-n+l)%100;
                  k += (m+n*m*g-c*d-m+a)%100;
                  b += (f+a+d-i+a-b-l-d)%100;
               }
               break;

               case 2:
               {
                  a -= (n+f)%100;
               }
               break;

               default:
               {
                  k -= (c-a+f-i*i*e+c)%100;
                  c -= (g-n*k-m+g+g-f-i-e-n)%100;
               }
               }

               if( ++IFcnt[20]%10 )
               {
                  k += (l+k-a-l-b+j-n+e-g)%100;
                  i -= (k+i)%100;
                  c += (l+b+m)%100;
                  l -= (h+l+e)%100;
                  h += (b-a-m+a)%100;
               }
               if( ++IFEcnt[26]%2 )
               {
                  c += (e*n-b-m-j+i)%100;
                  h += (f-m-b-g*n-c*c)%100;
                  h -= (l+f)%100;
                  a  = (i-a-f+k-f-e-k+f+b)%100;
                  b += (k+n+g+c-m*k)%100;
                  d -= (d-i)%100;
               }
               else
               {
                  h += (b-a-b+f+j+g-f*a*a-f)%100;
                  b += (b*d)%100;
                  j -= (c*m+b-i*h-f+g*c-d-j-b+d-j)%100;
                  d += (e-f-i*h+j)%100;
               }
               b -= (i-h*c+m-j-e)%100;
               e += (n-g*g)%100;
               a += (k*b*d+a+d)%100;
            }
            k += (m+c+d+f-l-e-h+k)%100;
            l += (n*e-i*g*a+m-b+e*f+h+k*k*i+a)%100;
         } while( ++DOcnt[25]%5 );
         d += (d*k-l+h+i+i-c-j-h)%100;
         l += (f-n+n-k*n*n-i*l+l+k*j+f-d)%100;
         n -= (i*e-a+i+i-f*m*k*g+c)%100;
         j  = (a-i+c-h*f-h*j+e+g+g+h)%100;
         j += (c-m+h-d-g)%100;
      }
      f -= (h*j+l-m+b+d-i*h-a+h+f-i)%100;
      j  = (g*m)%100;
      l += (h-f-c-l+d*j)%100;
   }
   a += (f*l-c+j*h-n*e+k*a-k-n)%100;
   b += (i-k+m+b-e*c-b-e-i-f*n)%100;
   m -= (b-c*n+n-f+a*a-j-d+l+j)%100;
   l -= (h+m+a*m*f)%100;
   e += (n*l-b+j-j-i+m+c-a)%100;
   g  = (i+d+f)%100;
   c -= (k+a+k+i+k*d*i+j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F13(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[29]%5 )
   {
      do
      {
         for( ; ++FORcnt[43]%5 ; )
         {
            for( ; ++FORcnt[42]%5 ; )
            {
               if( ++IFEcnt[28]%2 )
               {
                  m += (k*j*l-l)%100;
                  j  = (l-g+j)%100;
                  i -= (h*k)%100;
                  c += (h-j-n+d-k-m+d+j+b+j+j*n+g)%100;
                  m -= (m*a+i-n)%100;
               }
               else
               {
                  g += (l*g+e-l+a-f*c-a*k+k*d+d-b)%100;
                  h += (e+c*j*m-l+j+f+g-g+c+k-l)%100;
                  b -= (f-f+c+b+e+f+g+i-e*e+g)%100;
                  a -= (i+i-e+j)%100;
                  i -= (l+d*l-l-f)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  f += (l*m)%100;
                  i += (k+e*d*n*e+l+n*k)%100;
                  e -= (e-c+k-l-a+g*k*j+g*d+e)%100;
                  h -= (m+b)%100;
               }
               do
               {
                  m -= (d+d+h*e*h*l+n+c+e)%100;
                  f -= (e+c+h-a+i+h-g*g+n-g*n-j)%100;
                  j -= (b+g-m+b+e+k+h+i-n+j-b+k-m-g)%100;
                  l -= (a-m+n-e+j+l-g-m+l+l)%100;
                  d -= (c+c-k+n-d-b-j+m-a-l)%100;
                  b -= (i-b)%100;
               } while( ++DOcnt[28]%5 );
               if( ++IFcnt[21]%10 )
               {
                  b += (k-b+k+d*d+n)%100;
                  n += (h+d+a-i*e)%100;
                  g += (d-k*m*n+k-i)%100;
                  c -= (b-h+b+e-h+c-e-g*d*i)%100;
                  j -= (b+g+i*e-a-d*k+f+m-c)%100;
               }
               i += (f*a+c-g-j-m+e-j-k-i+g+b-j-m)%100;
               for( ; ++FORcnt[41]%5 ; )
               {
                  h -= (h*h*a+l+l*b-j+g-b*c+g)%100;
                  f -= (l*h+h+i-h)%100;
                  j -= (c+d)%100;
               }
            }
            
            switch( ++SWcnt[14]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[29]%2 )
               {
                  i += (j-h+n+m-f*c-e-l-l-m)%100;
                  h -= (b-k+n*g-m-f-k-i*e-g+i-b+d*m)%100;
                  c -= (e*j-m+c)%100;
                  j -= (c+k-h+l+h+c+c+i-d+n+m+m)%100;
                  a -= (a-l+l+n*c+h-l-j+n-b-f)%100;
                  g += (d-b+j+l-g+n-a-h+g+k-i+i)%100;
               }
               else
               {
                  i += (l*k)%100;
                  j += (l*f)%100;
                  c += (l+f+j+m+l-g)%100;
                  f  = (k-k*c*e-f+e-d-n-g-l-g)%100;
               }
               while( ++WHILEcnt[28]%5 )
               {
                  f -= (d-g)%100;
                  b -= (m-e*l+n)%100;
                  l -= (l+h+f+l+k*e-n+k-d)%100;
                  b -= (f-h-h+c*c)%100;
                  m += (h*d+g+g+l-g*g+l-j*n)%100;
               }
               i -= (f-e+k)%100;
               e -= (i*j-g-k-h+e*i)%100;
               c -= (n+l+m+b*e+g-c-i*f+f+d+c)%100;
            }
            break;

            case 2:
            {
               j += (c+f-d+m+d-m+l-m+e-h+k-l)%100;
            }
            break;

            default:
            {
               d  = (a+m-i-c+b+j)%100;
               b += (d-b+j-b-n)%100;
            }
            }

            b -= (i-i+n+e+d-m+c*b-i)%100;
            j -= (d*b)%100;
         }
         f -= (l-h-l+h*k-d*l-f-k-k)%100;
         h += (d+h-g+k-k+m*g*h-e*f)%100;
         a  = (i+k-i-m+f+d-l)%100;
         n -= (l*c-i+n)%100;
      } while( ++DOcnt[27]%5 );
      g  = (l+l+h+g-b-d+n-f-f)%100;
      f += (j-b+d+f*c-e-f+c*h-n)%100;
   }
   d -= (n+e+i+h-f-m-e*c-e*a+c+e*i)%100;
   e -= (f-m)%100;
   j -= (e-b*n)%100;
   n += (i*h-b)%100;
   a += (m+k+j-g+m-j-f*g-b*i)%100;
   b += (m+k+e+h+i*b+a-d)%100;
   k -= (k*i-e-b-c+f-f+d-e+m-m+c-k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[47]%5 ; )
      {
         if( ++IFcnt[23]%10 )
         {
            for( ; ++FORcnt[45]%5 ; )
            {
               if( ++IFEcnt[30]%2 )
               {
                  b += (j+e+k-l-h+c+d-h+l)%100;
                  m -= (k-d+f+c-j+c+h+f)%100;
                  g += (m+i)%100;
                  i  = (h*n-n-c)%100;
                  m += (g+k*b-f-b+k-c+b)%100;
               }
               else
               {
                  l -= (m-m)%100;
                  e -= (i-f-g-e)%100;
                  d += (g-h+j+h)%100;
               }
               while( ++WHILEcnt[30]%5 )
               {
                  f -= (e*j*f*k+n-g+m-h+n*a-a-a-k+c)%100;
                  h += (b+i+m+c+i+c+b+g*l)%100;
                  l += (d-h-i-g-j+l-c+j-a+k-g-h+f)%100;
                  l += (d-d+n)%100;
               }
               do
               {
                  d -= (l-b*k*e+g+j)%100;
                  b  = (l-l-m*c)%100;
                  c -= (k-a-n+l+n+n-i-n+l+d)%100;
                  b -= (c-g-k*n+k-m*h-k+j-d*d-l)%100;
                  m -= (i+m+e)%100;
                  d -= (e-m+c+i-d*h-c*i+i*d*e-k+m+k)%100;
               } while( ++DOcnt[30]%5 );
               m -= (m-a)%100;
               for( ; ++FORcnt[44]%5 ; )
               {
                  m -= (j-d)%100;
                  f -= (g*g+h+c*j*n+b-f)%100;
                  m += (b+b*g*l+e+c*f*d+e*e-i+d*e)%100;
                  d += (g+m-j+l+a+f+h-a-m+k+h-h+f)%100;
                  e  = (j-h+a+g)%100;
               }
            }
            
            switch( ++SWcnt[15]%3 )
            {

            case 1:
            {
               if( ++IFcnt[22]%10 )
               {
                  g += (b*n)%100;
                  g -= (h-e-c+h+d)%100;
                  i  = (h*g-d*n-l+c-e-e*i*k)%100;
                  h -= (g-k-f-k)%100;
               }
               if( ++IFEcnt[31]%2 )
               {
                  f += (d+b-f-c-f)%100;
                  f -= (m-m*b*d-n*c)%100;
                  j += (h+e)%100;
                  l += (m-c+i)%100;
                  a -= (h-g-e-d*f-k-g+b*a+c)%100;
               }
               else
               {
                  d += (h+f+b-b+f*c*n)%100;
                  k += (h+j-a-e+h-n+h*c*m-d)%100;
                  h  = (e-f+l-j-a-n+c+i+n+m+d+l)%100;
                  c += (h-m+f-h*b*n)%100;
                  i += (b+l+j-i-h)%100;
                  k -= (d-f)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  d += (i+b)%100;
                  l += (b-m-i+n+b-e-n-j+g)%100;
                  i -= (h-j-c*e+i-i+c-n-m-n-l+e)%100;
               }
               do
               {
                  c -= (d+k+e+h-m*n-l-i)%100;
                  b -= (h+m)%100;
                  n  = (n*l+b+c-b-i*n+i+j-c*e*b)%100;
                  b += (c-k*f*e-k-b*n+a-j*l+d-m-d+e)%100;
                  l  = (i-d-l-b+f+a*f*k-i+h*g*m)%100;
               } while( ++DOcnt[31]%5 );
               for( ; ++FORcnt[46]%5 ; )
               {
                  b -= (k*k-k+c+i-e*c)%100;
                  d += (b+d-j+m-f+h+e-j+j+k)%100;
                  d += (i+a+k-f-n+d-h+a*n-n-a-b+f-c)%100;
                  m += (b-f)%100;
               }
            }
            break;

            case 2:
            {
               j += (g+n+h+g-j-f+a+k-h+c+i)%100;
               f += (c+h)%100;
               a -= (m*f-m+g+n-l*e*n-j-n*j-m)%100;
               k += (l*m*h+e-j-a)%100;
               c -= (n-e+j-h+i-f-c-e)%100;
               k -= (e*g-i-g-k+a+g+c*d)%100;
            }
            break;

            default:
            {
               j -= (g*b+h-c-b+m)%100;
               g += (a+b*k-n+j)%100;
               l += (b*g)%100;
               a += (k*a+a+a-b*h+a-n-j-b)%100;
               j += (n*i-f-i*h*g+a-l-m+e+e*h)%100;
            }
            }

            d -= (a*n*f+g+j+a-k-d*c*i-f+c)%100;
            m -= (h+l+a+a*n)%100;
            b -= (a+c-e*g+n+h*k+b+d+n-k)%100;
            f += (b+n+l-a+j-b*m+n-e)%100;
         }
         d += (h+h*b+b*l-h+f*g+g)%100;
         e -= (e*f-a-e*c+d-h*f-i-h-i)%100;
         c += (a+d-i-h*a-j-b+b-j-i-n+b)%100;
      }
      k += (b+e*m*i-j+j-m)%100;
      l += (f+l)%100;
      b -= (m-m+h*b+l+k-a)%100;
      l += (n+j*d-a)%100;
   } while( ++DOcnt[29]%5 );
   f += (e+h*j)%100;
   m += (c+g+e+c+a-e+d-d-m-b-b)%100;
   i  = (g*e+a+l*d*k)%100;
   c += (f-h+c)%100;
   c -= (g+n-g+e-i-c+m-e*b+b-m)%100;
   h += (i+j*g+e*j+f-h+n+b+c*c*l+h)%100;
   e -= (c+e+f-h+e-l*f-l-f-e+l+b+l-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F15(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[51]%5 ; )
   {
      if( ++IFEcnt[33]%2 )
      {
         m += (j+i+n-f+i+m-c-h-e)%100;
         i += (b+a*l*m-l)%100;
         m += (c+c-m+k+c+e*l-m+b+n+g-n+e+l)%100;
         g -= (e*c-h-d+d-j)%100;
         a -= (a-i)%100;
      }
      else
      {
         while( ++WHILEcnt[33]%5 )
         {
            do
            {
               if( ++IFcnt[24]%10 )
               {
                  e -= (f*d-a-j-k*j)%100;
                  a  = (n+d*c)%100;
                  g -= (j+i+f*i+b+i*d-l-i+m-f+l+c+d)%100;
                  h -= (i+h-d)%100;
                  e -= (a-i-j*l)%100;
                  f -= (e+l+j+m*j*b)%100;
               }
               h += (h+l-i-e*g*c)%100;
               for( ; ++FORcnt[48]%5 ; )
               {
                  b -= (m+m+k+f)%100;
                  b += (f-b+g*h+l+c+e+b-d+c-h)%100;
                  a += (c-c+h+k+i+d*h-g)%100;
                  i -= (j+c)%100;
                  e -= (h+b+e+j+a-j-i-k-a+n)%100;
               }
               
               switch( ++SWcnt[16]%3 )
               {

               case 1:
               {
                  i += (c*c+i)%100;
                  f += (b+g+i*l+n-d-c-n*a-b)%100;
                  c += (j+i*j-m+a+k+h-i)%100;
               }
               break;

               case 2:
               {
                  d -= (l*l-c+b+c+h+l-e-d)%100;
                  i += (g-j+e-a+a+h-i+j*h-a*l+l)%100;
                  g -= (h*g+d*n+e+e-e+d)%100;
                  g -= (f*j+m)%100;
                  m += (d-i)%100;
               }
               break;

               default:
               {
                  h += (c+n-h)%100;
                  i += (i*b+i*c)%100;
                  j += (b+i-h+e+h*l)%100;
                  e -= (k-e+b*d+e+c-h)%100;
               }
               }

            } while( ++DOcnt[32]%5 );
            if( ++IFEcnt[32]%2 )
            {
               b += (g-j-m+d*e-c)%100;
               c -= (m+b-e+i*i+n*b-a+i*k-i)%100;
               e += (l*l+h+f-c+a)%100;
            }
            else
            {
               while( ++WHILEcnt[32]%5 )
               {
                  i  = (b+d+d+n-d-l+j)%100;
                  b -= (k*c+m+h+h-k+n+d*l+c)%100;
                  n  = (g*d)%100;
                  c  = (d-e-a-d*b-h-f+j+b*g)%100;
                  m -= (g+h*e*k)%100;
               }
               do
               {
                  m += (n+h-h-m*i-e*k+n+c-n+n-f+b)%100;
                  l += (h-k-j-b)%100;
                  n -= (n+m+f-n+h)%100;
                  f += (n-f*n*n-i+c+b-c+a-d)%100;
                  k += (d-m)%100;
               } while( ++DOcnt[33]%5 );
               for( ; ++FORcnt[49]%5 ; )
               {
                  k += (m-b+f+h-f+h-h)%100;
                  k -= (m*l-h-l-k*b+g)%100;
                  c += (a+j)%100;
                  g -= (j+i+g*m+n+g+d-i-h+h-f+d)%100;
               }
               if( ++IFcnt[25]%10 )
               {
                  c -= (j+m-k-m-l-l-a+f+g+f)%100;
                  m += (m*m-f-a-k-j+b-j)%100;
                  e -= (l-b+k-j+k*n+d+c)%100;
                  j  = (h+h+j*k-n+n+e*m-d-c)%100;
                  a -= (m+h*l+n+d-c-k-i+n-k+j)%100;
                  f -= (f*n+b+j+j+i-k-k*c)%100;
               }
               for( ; ++FORcnt[50]%5 ; )
               {
                  b += (e-h+j+j-n*f*i+k*k+l*i)%100;
                  e -= (c-e+m)%100;
                  g -= (k-f*d-k+i*e+g+e+j-c*d*i*a)%100;
                  j -= (c-a-e-h+m+b+d+e-b*k-k)%100;
                  f -= (i*i)%100;
               }
               h += (g-d)%100;
            }
            i -= (e-d)%100;
            g += (f+b+i*e+b-h-b+n+m-l)%100;
            f += (b-k+e-c+h)%100;
         }
         e -= (k+d-j*b-j)%100;
      }
   }
   g += (b+f+n+l+i-f-l-b-a-g+m*i+f)%100;
   j += (m+m*j)%100;
   n += (a*c-m+d-d+e*e-a+c+k)%100;
   k -= (e+h)%100;
   f  = (b-h+e-l+j-k-i-j-a+l*h+j)%100;
   i += (l*b*i+b*e+n*e-a)%100;
   g += (a-a-c*j*n+h-h-m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F16(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[36]%2 )
   {
      a -= (c+g)%100;
      f -= (f-n-e-i+i+m-k-g)%100;
      d += (d*l+n-a-a-b+d+g)%100;
      i += (e*f+j-a-l+m+e+e*b-c-m-b)%100;
      a -= (c-k+a)%100;
      j -= (l-e)%100;
   }
   else
   {
      while( ++WHILEcnt[35]%5 )
      {
         do
         {
            l  = (i+k)%100;
            for( ; ++FORcnt[52]%5 ; )
            {
               
               switch( ++SWcnt[17]%3 )
               {

               case 1:
               {
                  e += (m+k+i-f*d+l)%100;
                  g += (l-n*l-e-n)%100;
               }
               break;

               case 2:
               {
                  c += (b+g+m+f-l-f+h)%100;
                  d -= (d+b-i+m*n-c+f+b)%100;
                  g  = (h-i+c-l-d*n)%100;
                  h  = (b-b*l)%100;
                  h -= (f+n-k)%100;
               }
               break;

               default:
               {
                  a += (g+k-g-g*m-l+a)%100;
                  a -= (h-i+n+e+b+m-n-f-c+h-a-c)%100;
                  g -= (a+b)%100;
                  b -= (m+c)%100;
               }
               }

            }
            if( ++IFcnt[26]%10 )
            {
               if( ++IFEcnt[34]%2 )
               {
                  f += (f*h)%100;
                  h -= (a*l+i-j+g-l)%100;
                  m -= (h-b-m+h-g+a+k*b)%100;
               }
               else
               {
                  j -= (k-a+f*n-h*c*f)%100;
                  l -= (j+a)%100;
                  n -= (m+k+a-d-i-d*c+b-a-j+j-b)%100;
                  e  = (e-f-h+b-h*a+g+j+m)%100;
                  d += (i-d*h+n+f+d-c*c-h+g+h)%100;
               }
               while( ++WHILEcnt[34]%5 )
               {
                  d -= (c+g+f)%100;
                  c -= (f+d-k*d*k+l+f+e)%100;
                  f -= (l-i+b-d*k+e-i+i)%100;
                  c -= (f+g-m+k*i-f+l*b+j+k*h-j+j)%100;
                  m -= (c-b-j*c-a-f+e+i*i*g-d)%100;
               }
               do
               {
                  i  = (h-d*n+n+k*e+m-e+l)%100;
                  h += (f+b-i)%100;
                  a -= (e-m-f-c-f)%100;
                  f += (b+k+k+i*d-c+a*c+e+m+k*j-m+j)%100;
               } while( ++DOcnt[35]%5 );
               for( ; ++FORcnt[53]%5 ; )
               {
                  a += (e+c-f)%100;
                  i -= (n-m-b)%100;
                  c -= (l-h-g-g-m-c)%100;
                  l += (h*g+i-j-d+c-l*m-h-j*l+f)%100;
                  l -= (e+c*k-d)%100;
                  h += (k-m+l+f-i*b)%100;
               }
               for( ; ++FORcnt[54]%5 ; )
               {
                  f += (k-c-c-a-m-h*b-j-a-i)%100;
                  c -= (g-j+i+d+l-h+b+d-a+c*i-c*h-h)%100;
                  d += (b+l)%100;
                  l += (g*c+d-m-g*m+m*n-m*i+j*g+k*k)%100;
                  l -= (j+i*d-n*l-g-m*a)%100;
               }
               if( ++IFEcnt[35]%2 )
               {
                  l += (a+e)%100;
                  n += (e-a+i*d+d-k-a+n-l*b-f+h)%100;
                  j  = (h-k-l-m+d)%100;
                  d  = (n-i+m-d-k*h*a-k-d)%100;
               }
               else
               {
                  i -= (k-h+i-l*m-h*m*g)%100;
                  c += (b-c+f*l)%100;
                  k += (h-l*i-l*m+a+a-c+h+i*d+c+m*b)%100;
                  a += (i-g-b-j+e-f+d+m-d)%100;
                  d -= (f-l)%100;
               }
            }
            e -= (e-j)%100;
            k += (c-k+d-e+k-e+h+h*m)%100;
         } while( ++DOcnt[34]%5 );
         a -= (i-i*m-n-f*k+g)%100;
         m -= (c+b*a+j)%100;
         l -= (a+j-d)%100;
         l += (a-c)%100;
         f += (h-l*h-d-i*j)%100;
      }
      i -= (f-l)%100;
      l -= (h-g-m-d*c-c*h*c-c-c)%100;
      e -= (k*b-f+l*i-a+h*b*n-a-l+n-j)%100;
   }
   h -= (k-f-e-j*k-a-l+d-a)%100;
   n -= (g*a*f+f-m-i-h-c+g+b-c-h-c-e)%100;
   c  = (l-m+f+e-g)%100;
   e += (n-f)%100;
   h += (a*h+f-d*k+c+n-j*d+d+l)%100;
   k -= (i+a+l)%100;
   k += (e-c*k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F17(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[37]%5 )
   {
      do
      {
         if( ++IFcnt[28]%10 )
         {
            j -= (l*c-i-e-f*c+h-n-i*m-d*f)%100;
            for( ; ++FORcnt[55]%5 ; )
            {
               
               switch( ++SWcnt[18]%4 )
               {

               case 1:
               {
                  a += (i-h+j*l+i+b)%100;
                  g += (f*m-b-j-k*b)%100;
                  e  = (l+a+i-f-h-n*n-f)%100;
                  k += (f+b)%100;
                  l += (e-h+f*h+c*j*a+k)%100;
                  k += (j+g-m+d+c*i+b*i+a*n)%100;
               }
               break;

               case 2:
               {
                  i -= (l-m-m*i*d*d+j+e)%100;
                  k += (d*a+f-b*l-l+j+h*h-b+a+g-g)%100;
                  k += (n-b+c*i-g)%100;
                  b -= (b-j+c-i-i+e+k)%100;
                  f -= (e-g+e-g)%100;
               }
               break;

               case 3:
               {
                  d -= (d-c)%100;
               }
               break;

               default:
               {
                  m += (k-k-f*n+b-l-c-l+f+c)%100;
                  l += (n*i*g+b*j+m)%100;
               }
               }

               if( ++IFEcnt[37]%2 )
               {
                  j -= (m*i+h*g*c+i-c)%100;
                  a -= (g*j-c-f*l)%100;
                  j += (k+a*k*l-a+j*n-c*b*n)%100;
                  m += (m+m*i*g+l*m-e+i*a+b-m+d)%100;
               }
               else
               {
                  g += (j+d-a-a*a*g-g+c+m-g)%100;
                  a -= (j*m)%100;
                  h -= (d+j-n*f+j+f-j*l)%100;
                  k  = (a+f-n*l*g+a-m-g+i-i+n-i)%100;
                  c += (c*d-b+n-m-e*g-d+l-l+f)%100;
               }
               while( ++WHILEcnt[36]%5 )
               {
                  j -= (l*n-c-g+i+a-e-a-n-n-e+c-m-l)%100;
                  i -= (e+j-m-b+j-j-j-f*m*k+e*h)%100;
                  a += (d+l+j+c+b+l+l-n-k-h+j)%100;
                  k -= (j-n+d+e-n*n)%100;
                  g += (e+e+h-l-c+b)%100;
                  m += (i+n+g-g+f+h+e*l*d-c)%100;
               }
               do
               {
                  b -= (a*i)%100;
                  f -= (n-j+b-k)%100;
                  f -= (a+c-m+d+c+e-i-e)%100;
                  n += (g+n-e+n)%100;
                  c  = (b+j+n-k-n+b+n*b+b+a*e)%100;
               } while( ++DOcnt[37]%5 );
            }
            for( ; ++FORcnt[57]%5 ; )
            {
               if( ++IFcnt[27]%10 )
               {
                  l -= (d-a)%100;
                  b += (k+n-j-g-l+n*i+l-d+l-g*n-l)%100;
                  l  = (b-k+m-n*m+i-n)%100;
                  i -= (m*e)%100;
                  g -= (g-l-j+d-d+j)%100;
               }
               for( ; ++FORcnt[56]%5 ; )
               {
                  c -= (g-b*d+g+i-k-i+j)%100;
                  k  = (c-e+l+g+c-n+k-m)%100;
                  m += (i-b)%100;
                  e -= (b-m-f+j)%100;
               }
               if( ++IFEcnt[38]%2 )
               {
                  f += (n+i+d+a+h-c-l-l)%100;
                  d += (j-k+i-e+d-j+n*a+f+c-a-i)%100;
                  i -= (k+n-g+c+h+i*j)%100;
                  a -= (h*b*g+i-d+b+f+j-c)%100;
                  g += (k-h+b-m+j-b-k+n-f-n-a+g-a)%100;
               }
               else
               {
                  e += (h+l)%100;
                  f -= (k+f)%100;
                  j -= (c+a+b*f-h-j*i-l+i-a+k-k+e)%100;
                  a += (m-m+g+a-g+c-h+j)%100;
                  a -= (d-d-b-g+d+g-k+k-n-d-h+i)%100;
                  a += (f-b-b+l-f-l+n-i*l+c)%100;
               }
            }
            m += (c-i-k-a-n+a+i-i+f)%100;
            k -= (a+m+a+j*k*n-f+h*m-l-k-k)%100;
         }
         d -= (g+g+m-i+a*e+b*g-h+d*h+b-c-f)%100;
         g += (d-b-j-f-c+d*j-n+h)%100;
      } while( ++DOcnt[36]%5 );
      n  = (k*d+g-c-b*d*n-m*b+d)%100;
      j -= (h+c)%100;
      i += (i-n-g+k-c*d+d)%100;
      i += (k-f-a-h-k-i-c-l+i-e+n-c-m-a)%100;
   }
   e -= (e*m+f-d+a*m*l-b-l)%100;
   m -= (m+l+g)%100;
   k -= (n-j-b+l-g+n+d+k-m+d-i*f*g)%100;
   k  = (c-m-h)%100;
   b += (i-f+j+i*l*b-j-m*d-k-h+f)%100;
   a += (c*j+h+g-n)%100;
   a += (i+n+k-l+b*h)%100;
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
         m += (f+g)%100;
         for( ; ++FORcnt[61]%5 ; )
         {
            
            switch( ++SWcnt[19]%3 )
            {

            case 1:
            {
               if( ++IFcnt[29]%10 )
               {
                  g -= (g*k)%100;
                  f -= (m+g-m+l*m)%100;
                  j += (b*m+h*m+n)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  h -= (h-l-b+c*g-j*l-m-b*h)%100;
                  b -= (k-k+l-m-l)%100;
                  a += (b+i+l+g+g-g-j+g+d+n*d-i)%100;
                  b += (l+f+b-b)%100;
               }
               else
               {
                  b -= (e-m)%100;
                  g  = (b-j+l-g*a+a+k+b-h-d-k-n-j)%100;
                  g  = (h+f-e-d*k-f*i)%100;
                  h += (m+m*i+f*h*l-k*b+k*h+e*f+n)%100;
                  g += (h-g-f)%100;
               }
               while( ++WHILEcnt[38]%5 )
               {
                  d += (h+b*e)%100;
                  i += (c-l+d)%100;
                  j -= (f+n*l-j-m-a+b)%100;
                  d += (c+b*m+m-f)%100;
                  c  = (c-c)%100;
                  i -= (j+l-j+m)%100;
               }
               do
               {
                  h += (i+b+b*h+h-e*b-m*a-e)%100;
                  c += (a+k*e)%100;
                  j  = (k+h-i*i)%100;
                  h += (m+l+a+h*i+g*c-k-c*h+e*a)%100;
                  g += (k*m)%100;
               } while( ++DOcnt[39]%5 );
               for( ; ++FORcnt[58]%5 ; )
               {
                  d -= (d-i+h+b)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[59]%5 ; )
               {
                  f += (a+i+d-g-k+c)%100;
                  l += (i+b+l*a-j-g-i+b*e+f)%100;
                  l -= (c-k)%100;
                  e += (f*h+d)%100;
                  c += (f+a*n+e*b*g+b-e)%100;
               }
               if( ++IFEcnt[40]%2 )
               {
                  j -= (a*d+l-b+f+i-a+h+m+j+c-c)%100;
                  f -= (e+a*c-e+k-a*i*k-i*c+h-c)%100;
                  f  = (e*i)%100;
                  j += (n*j*c*l-j-l-m-k-b-k)%100;
                  k -= (a-c+e*e+l+j*j*g-j-e-m+i-c)%100;
                  h -= (m*g-n-n)%100;
               }
               else
               {
                  l -= (e+c+i-g-k+g+n)%100;
                  c -= (e-a)%100;
                  i += (c+m*f+k*n-c)%100;
                  f += (k-f-d+h+a+m)%100;
               }
            }
            break;

            default:
            {
               while( ++WHILEcnt[39]%5 )
               {
                  f += (k+a)%100;
                  f -= (e*g)%100;
                  g += (f-n-c+h+e*l*l-m)%100;
               }
               do
               {
                  a  = (m+d+e-l*h)%100;
                  a -= (j+j*n-j+n+l-h+a+j)%100;
                  k += (g*b)%100;
                  d += (c+m)%100;
                  i += (h-e+m+i+l+a+c-k+k)%100;
               } while( ++DOcnt[40]%5 );
               if( ++IFcnt[30]%10 )
               {
                  l += (l+f-k-c+e+g+g-k+a*b)%100;
                  d += (b+i)%100;
                  e -= (m*a+l+m+k-m*j-b-c-h+i-m*h*n)%100;
                  a += (g-f*g*n-k-k-h*g*e+j*h+a*a-i)%100;
               }
               c += (n*i)%100;
               for( ; ++FORcnt[60]%5 ; )
               {
                  j += (l-j)%100;
                  e -= (f-l+a+e-c*e+i+f-l+f*i)%100;
                  g += (n*f+d+g-n+g-k+h*n+a+b-b+k-e)%100;
                  f  = (a-b+j*g-c+b-l)%100;
                  f -= (b+f+b+m-m-a+f-b+l-l+n*g-m)%100;
                  d -= (c-e-e*k-d*d-k*m)%100;
               }
            }
            }

            g -= (g*b*f+d)%100;
            a += (h-g-h+k)%100;
            h += (b-i*m)%100;
            i -= (k+a-j-l-l-f+n+l+l-j-d-m+f*j)%100;
            h -= (f-d-j+d*k+g+e-k+f*f-b*l)%100;
         }
         f += (j+j-n)%100;
         g -= (b-b-m-k+e+h+c+c-b*h)%100;
      } while( ++DOcnt[38]%5 );
      m += (b+a*h-j-g-g+j*c+n*j-c+i)%100;
      n += (n-k-a-f-l+d-b+g+l-c-k-n)%100;
      b -= (k-b)%100;
      b -= (h+j-e+l-c+k+c-l-a*m*h-m*j+f)%100;
   }
   k += (b*d*b-d-d*j)%100;
   i -= (m-f)%100;
   k += (b-j-f-m-g-e+k+m+l+l+e)%100;
   l -= (l*i)%100;
   d  = (j+e+k+a+j*n+f+b)%100;
   l += (c+m-b+m-g+j+n-h*h)%100;
   i += (g-m*g+d+g-f*m-a-l+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F19(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[20]%3 )
   {

   case 1:
   {
      if( ++IFEcnt[43]%2 )
      {
         b  = (c+k-j)%100;
         l += (n+k+n+a*c+h+e+j+i-m+k*l-g)%100;
         l += (g+k-c+a-k+l*l-m+c-f+a-i+e)%100;
         i  = (d*c*d-m-j+b+c)%100;
      }
      else
      {
         while( ++WHILEcnt[42]%5 )
         {
            do
            {
               for( ; ++FORcnt[62]%5 ; )
               {
                  g += (a+l*d+h)%100;
                  b += (a*h+d+d+a+d-e*e)%100;
                  h -= (e-g+e-n*j-j*l+a-a)%100;
                  j -= (i*l*n*k+n*d*k)%100;
                  b  = (m*i*a+c+d+e-g-a-h)%100;
               }
               if( ++IFcnt[31]%10 )
               {
                  f -= (c-j+e*i+b-f*c-e+i)%100;
                  e += (g*b+n-g+l)%100;
                  l += (f+m+j+a)%100;
               }
               for( ; ++FORcnt[63]%5 ; )
               {
                  k += (c-i-e*k*c)%100;
                  f -= (k*n+j+e+d-m+h-l-e*h*k+d+g+b)%100;
                  f  = (n-k+d+c+g)%100;
                  a += (e*f-k)%100;
                  j += (d*l-l+i-m-l+a-b-c*i-f+l*h)%100;
               }
               if( ++IFEcnt[41]%2 )
               {
                  b  = (g+k-e+m-e*h-i-l-k-g-n+e+g)%100;
                  f -= (a+n+j-h+j+l+l+b-n+l-b)%100;
                  n -= (i+k-a-j+d+c-j)%100;
                  m -= (i-k+g-i+i-j-d+c*k+b+l+i+e)%100;
                  i += (f-b*g-g-l+b)%100;
                  m += (l-a+k)%100;
               }
               else
               {
                  m  = (h+a+k+l*f+c+c*b-d-m+n-n*g+b)%100;
                  h -= (a+n)%100;
                  l += (g+n+a+h-n+k+l+b-b)%100;
                  d += (f*h*e-l+n+h)%100;
               }
               while( ++WHILEcnt[41]%5 )
               {
                  e += (e-g*k-c)%100;
                  h -= (f+j-h-n+c+n)%100;
                  j -= (k-e*m-b+e-b+e-m-j)%100;
                  m += (a*l+k+f+b*j+i)%100;
                  m -= (e+d+k-c+d-c-b+i+h*c-m)%100;
               }
               do
               {
                  m -= (g-a+c-j*c-a*e-h-l)%100;
               } while( ++DOcnt[42]%5 );
            } while( ++DOcnt[41]%5 );
            h += (k*k)%100;
            for( ; ++FORcnt[64]%5 ; )
            {
               
               switch( ++SWcnt[21]%3 )
               {

               case 1:
               {
                  n += (l+b*m*b+d+d-c*i+a+b+n+f)%100;
                  e  = (k*i-b-b-j+l-m)%100;
                  l -= (e-b*j-c-c-k-l)%100;
                  j -= (m+h+n-n+k*i-k+f+h*e-i-l+m)%100;
                  e += (e+f-i-b-d*h+c+j+m-i*n+j)%100;
               }
               break;

               case 2:
               {
                  j += (j+h-i-b+h)%100;
                  m -= (g+a+m+i)%100;
                  e -= (h+e)%100;
                  i += (h+b*i+e)%100;
               }
               break;

               default:
               {
                  m += (c+g*a+e-k+n)%100;
                  g += (b+b-a-b+e-k+j+c*l)%100;
                  e += (j*d+a+d+f*n+j-n-n-m-l*j+a-m)%100;
                  d -= (k-f-f+g+m+l*j*e*n-d+l-n)%100;
                  k -= (h+i*k+c+c-k+l+m-m*l+a-j*h)%100;
                  g -= (l*j+e-a+f-e+c-l-f+g-d+a-c)%100;
               }
               }

               if( ++IFcnt[32]%10 )
               {
                  h += (f-e-d*c)%100;
                  l -= (e-g*k-d-m+f+b-l+m*c-m*h-e-k)%100;
                  a += (f+e-c-c+h)%100;
                  c -= (n+i+e-f+h+e+b-h+d*j-e*i+g)%100;
                  n += (h-g-m+d+k+c+m+c-d-n)%100;
               }
            }
            if( ++IFEcnt[42]%2 )
            {
               a -= (i-b+l-n-i-h+a+n+e-n+k*d)%100;
               b += (b+i)%100;
               f -= (b+f-e-l+d-l-k)%100;
               i += (i-e+a+k*h-m+j-i-i-a+l-l)%100;
               a -= (m+a-j*n+k)%100;
            }
            else
            {
               i -= (j+i*b-k+j*e+k+k-i-a)%100;
               j += (e-m)%100;
               c += (d+j+d+c-a+g+k-g+m-l+a+k)%100;
            }
         }
         m += (m+c+b-j-b+e+a+i+n-m-l)%100;
         m -= (g-m*n+c+c*h-b-b)%100;
         k -= (k*h-f)%100;
         e -= (d+b-l-f*f+n+b*a-k-e+c)%100;
      }
      a  = (n-e-j-m-a+g-g+n-g-d-e*m-h-m)%100;
      k -= (i+f-f-n*e-b*c)%100;
      e -= (l+h-e-a)%100;
      l -= (k+j-a-k-m-m-c+n)%100;
   }
   break;

   case 2:
   {
      d += (d+h)%100;
      h -= (h-f+j+k-l+m*a+l*l*c+h+l)%100;
      g -= (f+e+e-l-n+m-h)%100;
      d -= (m*h-d+i-e*a-d+g*f-h*h+b)%100;
      i  = (c-l+i-h)%100;
      m += (c+m-k+n*f-a+l)%100;
   }
   break;

   default:
   {
      b  = (m-g-l-n)%100;
      j += (d*f*h*d-f-g-c)%100;
      l -= (n*n-a+k+d)%100;
      g -= (n+h+h+j-h+h-g+h-l)%100;
      n -= (b-n)%100;
   }
   }

   l  = (a+m+j+h*e+l*h+k-e-l-b+d-l)%100;
   i -= (h+j-h-f-g*d-a-h+k-a+k*k-n-n)%100;
   h -= (n*c+i+j*g+l+k+j-h-i+h*l-a)%100;
   k -= (g-l-i+d-d)%100;
   a  = (i+e*n+b)%100;
   f -= (a-g+e+e)%100;
   n -= (l*b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F20(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[44]%5 )
   {
      do
      {
         for( ; ++FORcnt[67]%5 ; )
         {
            for( ; ++FORcnt[65]%5 ; )
            {
               if( ++IFEcnt[44]%2 )
               {
                  c += (l+a+c*m+m-b-m*k)%100;
                  b -= (n+e-n+m)%100;
                  k += (g+d-g-f+l+g)%100;
                  a -= (k-e-k-e*k+b*g*f-m*i)%100;
                  g += (e+a-l-a+e+m+c+g-n+c)%100;
               }
               else
               {
                  l += (b*f+m+n)%100;
                  d += (a*m+n-e*b-g)%100;
                  h += (d-i-l*c*j-a)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  m += (f-e-c+l-e+j-c*b-m)%100;
                  n  = (g-n*a+d+n*i*n+j-m)%100;
                  g  = (i+k*j*m-h+c)%100;
                  d -= (f+k-i*i-h*d-i+d-k*e)%100;
               }
               do
               {
                  n -= (h*a-k)%100;
                  m -= (j+d-k+i*m-d-c*h)%100;
                  m  = (l-j+a)%100;
                  f += (f+j)%100;
                  b  = (j-j+d*n+a-i-f+j-f+k)%100;
                  l += (g-c-h)%100;
               } while( ++DOcnt[44]%5 );
               if( ++IFcnt[33]%10 )
               {
                  b -= (f-d-f-l-e*c-m-n+m*e)%100;
                  i -= (a+f-e-e*g*h-j*j*e*l+a)%100;
                  k += (h*c+a-f+g+m-a-a+a)%100;
                  e += (k+n*m+j*h)%100;
                  m += (e*m-k*a-k+d+f-n+d)%100;
               }
               d -= (f*k-f)%100;
            }
            for( ; ++FORcnt[66]%5 ; )
            {
               
               switch( ++SWcnt[22]%4 )
               {

               case 1:
               {
                  d += (h*c+b*h*b+i+i-a+a-g)%100;
                  m -= (f-f+g+g*g+h)%100;
               }
               break;

               case 2:
               {
                  c -= (a-e-e+g+i)%100;
                  k += (a-a-c*b+e-n)%100;
                  n += (h*l+j)%100;
                  c -= (i-k-d-m-b-l*k+n-f-m+k-i-d)%100;
                  m -= (h+m+a-f*b+l-k-n)%100;
               }
               break;

               case 3:
               {
                  l -= (l+n-l+a+i-g-g)%100;
                  e += (a*i)%100;
                  h += (m*l)%100;
                  d += (n+n+i*c-k+m-n*f-m)%100;
               }
               break;

               default:
               {
                  b -= (e-d)%100;
                  l -= (b+g)%100;
                  c -= (b-h-l-i+l+a+n)%100;
                  l += (n-e+d+d*j-e*g+b)%100;
                  j -= (n-n-g+d*k-l-n-n+a*h)%100;
                  m += (k-l+e+k+i+e)%100;
               }
               }

            }
            h  = (f+n*k-k-n*l-f-k-j+m+c*f)%100;
            m -= (d*d+m+a-i+d-a+d+f+f-b+k-l)%100;
            e -= (k+g-f-h+d+l)%100;
            h += (n-b+m-f*k+j)%100;
         }
         k += (b-n+g-h+h+c+d+f-l)%100;
         f += (n-h)%100;
         i += (c+e+d*g*g)%100;
      } while( ++DOcnt[43]%5 );
      i -= (m-j)%100;
      h -= (b+b+e)%100;
      k += (i+m-j-b+e-f-l-n-l*g-f*k)%100;
      m -= (l-e-m+b+j-h-e+l*i*j+g*j)%100;
   }
   f  = (n+l)%100;
   i += (i+d-l*g-e-b+d*h)%100;
   b -= (d-l+f*g+j+m*l+m+a-f*n-k)%100;
   l += (e+f-b+f*h+l+k-a*b*l+k)%100;
   a += (m+e-l*a-d-f-b*e)%100;
   l += (l+n+b+h+a)%100;
   g += (i+g+b*h+g-g*l-n*n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F21(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[47]%2 )
   {
      j += (g+g+n+h+n*m-e+j+j+d-n-i-g)%100;
      d -= (d*d+c+g*f*h+i)%100;
      d -= (m+e-f-n-b)%100;
      d -= (c+b*d*f*n-d*i*f)%100;
      g -= (b-k-l)%100;
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
                  i -= (k-g-c+e*g-d+i)%100;
                  j -= (j-b+a+d-a+e*g)%100;
                  g  = (j+j+d*k-l-g-m+e*c*j*b)%100;
                  l += (n-l+g-k)%100;
                  k += (n-f*a-m*i+k-j-l-l*n*i+g)%100;
                  a += (m+f*f+e+n+j+d)%100;
               }
               for( ; ++FORcnt[68]%5 ; )
               {
                  f  = (i-k)%100;
                  j += (i+j-c*h-i+b)%100;
                  c -= (i+l+c+l*n-k+m*h)%100;
                  f -= (j+d-f+f)%100;
                  g -= (d+j-b+l+k-n-i-d+i)%100;
               }
               if( ++IFEcnt[45]%2 )
               {
                  g -= (n+g-c-f*j-b)%100;
                  e -= (a-f+b+l*j-j*k)%100;
                  i -= (n-h+d)%100;
                  l -= (f*k-k*d-f-k)%100;
               }
               else
               {
                  g -= (b-i-c-m+h+i-h-m+j-m-g+a+l)%100;
                  n += (m+g-k)%100;
                  d += (l-a-m-l*b)%100;
                  e -= (l*c+c-f+c-k*g-k+n+g+n)%100;
                  m += (m+d+h-b+j*m+f-d+f+a-c*f)%100;
               }
               while( ++WHILEcnt[45]%5 )
               {
                  l += (e+e)%100;
                  g += (i-a-j+d-i)%100;
                  m -= (m+a+m+d+g-h+d+m+m)%100;
                  g -= (j+b*g*e+d*h)%100;
                  j += (m-a-j-h-j-e-j*j*n+e+h-f+d-f)%100;
                  m += (m-i-h*l+h)%100;
               }
            }
            do
            {
               c += (j+m)%100;
               for( ; ++FORcnt[70]%5 ; )
               {
                  b -= (f-n+l+k-j-c+j+h*g-a*h+m)%100;
                  c -= (c+h-f+g+i+m-g*d)%100;
                  g += (c+i-a+g-c-b-j+l-f+d)%100;
               }
               
               switch( ++SWcnt[23]%3 )
               {

               case 1:
               {
                  k += (n-j+l-j-g-h-d+h-d+b+c-n+b)%100;
                  l += (c-b*a+l-i-l-n-j*g)%100;
                  a  = (g+l-h*h-h-n+b-n+l+k-f-k-l-i)%100;
                  e += (a*c)%100;
                  g  = (d+d+d+n)%100;
               }
               break;

               case 2:
               {
                  e -= (i+a+a-j-n*m+a*d+e*m)%100;
                  i += (m+m*b+l-a+i-j-b-d+k+n)%100;
                  j += (b+c-g-a)%100;
                  j += (a-f-i-g+j*n-e-e+k-h-k-e-c)%100;
               }
               break;

               default:
               {
                  a += (m-m*n+a-n+c-d-f)%100;
                  g -= (h*i+g+b-h*b+h*f+n*k*h)%100;
                  m -= (c-b-d)%100;
                  g += (j+n)%100;
                  m += (n*n-e-l)%100;
                  d += (f-j+l*g)%100;
               }
               }

               if( ++IFcnt[35]%10 )
               {
                  i += (d*l-a+g-c+d+m-j-l-k+l*f-g+k)%100;
                  j += (f*f)%100;
                  a += (h+n+i*m*m)%100;
                  l += (c-e+i+c*g+c+l*m)%100;
                  b += (c*f+d+i+b*l-h-k+f+h)%100;
               }
               if( ++IFEcnt[46]%2 )
               {
                  i -= (n+d+c)%100;
                  e -= (l*g-a+k*d-c+m+n*g+f+l)%100;
               }
               else
               {
                  l += (m-k-i+f-f-c+b-i+m+j*l)%100;
               }
            } while( ++DOcnt[46]%5 );
            e += (l-m-j*e*n+i+d-g-a*b-c-e)%100;
            h -= (f+a+k-l-k*f-b)%100;
            l += (a*i-k)%100;
         } while( ++DOcnt[45]%5 );
         k -= (n*a)%100;
         g  = (c*n+i-k-m*g+n*k-k+e)%100;
      }
      n += (d-j-j*g+h-b)%100;
      n += (j+k-g*a)%100;
      a -= (k-h-j)%100;
      k -= (d*d+g+m+h*m+a*n)%100;
   }
   j -= (g-d)%100;
   a += (a+b-f)%100;
   h += (n+c+d)%100;
   m -= (m-k*n*f*e*m-g-j*b+b-h)%100;
   b -= (h+d+i-j-n-g+h*e-n+e+j+a)%100;
   f += (e+k-c-i+m-b+e+h+d+h*h-l-c)%100;
   m += (d-a+m-l+c-c+k-a*c-b-g*e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<52; I++) IFcnt[I]   =0;
   for(I=0; I<70; I++) IFEcnt[I]  =0;
   for(I=0; I<35; I++) SWcnt[I]   =0;
   for(I=0; I<70; I++) WHILEcnt[I]=0;
   for(I=0; I<70; I++) DOcnt[I]   =0;
   for(I=0; I<105; I++) FORcnt[I]  =0;
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

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      while( ++WHILEcnt[48]%5 )
      {
         do
         {
            for( ; ++FORcnt[72]%5 ; )
            {
               for( ; ++FORcnt[71]%5 ; )
               {
                  i -= (h*g+e-h)%100;
                  e -= (l+j-f+b)%100;
                  b  = (j-k*l-a-b*n+h-g*d+g+f-i*i+a)%100;
               }
               if( ++IFEcnt[48]%2 )
               {
                  c  = (d-n-c*f+d*j)%100;
                  f  = (e+n)%100;
                  k += (j*m+e-a-b+k+i-l*f-k-f*m+j)%100;
                  l += (k-k)%100;
               }
               else
               {
                  h  = (n-d*g+h+d+c*i*n+b+h)%100;
                  n -= (k+a*l-j+n-f*h+b)%100;
                  j -= (b+k)%100;
                  f += (g-k+d+g-h*j-j+g-l*e+f+h)%100;
                  b -= (c*a)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  d -= (m*m+i-f-j-k*c-h)%100;
                  a  = (e-j+f+f*k+k+n-k+d*j+d)%100;
                  l += (j-a+e+g+n)%100;
                  f -= (b+c-e+h*i-i*e-d+h)%100;
                  m += (j-l+i+a*c+e-a+h+j-k-c)%100;
                  k -= (e-i-l-a*a+j+c+c*b-h-m-k-n*e)%100;
               }
               b += (i+i+l-i+h*h+g+n+h+c-c+n-m-c)%100;
               d -= (c*a+c-k*i-g)%100;
            }
            a -= (n*c-f*i*i-e+h-c-e+i-n-k+j*h)%100;
            f += (h-j)%100;
            b += (d+b-c-g*n+l+h-g+f+k+n)%100;
            g += (b+g-m-a-n+k+m-m-i)%100;
            c += (e-b+d+b+m-d-g+i+e-k-l-b)%100;
         } while( ++DOcnt[47]%5 );
         g -= (l*k+b-b-c-g)%100;
         n -= (c+b+e-m-c-d-b+l+f*c*n)%100;
         l -= (h-g-f-l-l*i-n*c-k*i)%100;
      }
      d += (i+i-c-f+a)%100;
      d -= (b-e*l+c+b+f)%100;
      f -= (n+k+j+k-h*m-l-d)%100;
      h += (l+m+k+k+d)%100;
      d += (n+a+e*n-m-e+n*k-c)%100;
      l += (e+m*m+l-j+a-a*c+j-j*f+k*m-h)%100;
      f -= (b*d+m+g-b-j+i-l-m*f+a*g)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<36; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 36 << "   Dynamic = " << sum ;
   for(I=sum=0; I<49; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 49 << "   Dynamic = " << sum ;
   for(I=sum=0; I<24; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 24 << "   Dynamic = " << sum ;
   for(I=sum=0; I<49; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 49 << "   Dynamic = " << sum ;
   for(I=sum=0; I<48; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 48 << "   Dynamic = " << sum ;
   for(I=sum=0; I<73; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 73 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}