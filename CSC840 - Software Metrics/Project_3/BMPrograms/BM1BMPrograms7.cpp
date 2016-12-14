#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[33],IFEcnt[44],SWcnt[22],WHILEcnt[44],DOcnt[44],FORcnt[67];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         i  = (g-m+b+b*n*i)%100;
         a  = (h-e+m-n-l+b+n+n-n+i*n+b-b)%100;
         j += (m*e-b)%100;
         c += (i-g+k+a-h-i-h+b*i+m-h*h+n+i)%100;
         j -= (i-d*g+k+a+c*a*m*h-n-b-a-d+l)%100;
         a -= (a+e-k-m-j)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  c -= (f*j+g-k+f+c+e*k+b-g)%100;
                  a -= (f+j-g-m-j-c*h+k*n+e)%100;
                  l -= (i-k-i+l+m*a*g)%100;
               }
               c -= (l*f*d*k+b+j*k-j+e+g)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  a += (m-j-a+i*j+l*n*l+b)%100;
                  d -= (e*e*i+h-k+e-b-b-e-n+k+b-g)%100;
                  l += (n+k)%100;
                  i += (h-j-d-d+b+a+f+j+c)%100;
                  g -= (h*a-e+f-h-l-i+e-b+c*f-f-b)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  c -= (h-h-n+i*c*k-l+k-e)%100;
                  n -= (g-k*b+d-i-h+d+m+d+g*i)%100;
                  a += (a-c+h+n+g+f-k+n+i-f-g-e-m)%100;
                  j -= (m-l-i+i+k-k-g+h)%100;
               }
               break;

               case 2:
               {
                  h -= (g-l)%100;
                  i += (c*h+c+k-m+h+k-d+a+c+b)%100;
                  m += (e-e*f-f*n-c+c-e*j-h-c*b)%100;
                  a -= (c-j*g-c*d+g-h+j*k)%100;
                  g -= (g+h*h+h-f-c-c-d+j-l-n-b)%100;
                  j += (b-d+n-f-c-e*c+b)%100;
               }
               break;

               default:
               {
                  i -= (e-h-a+l-l-i-g+h-d*c-a-l+j*j)%100;
                  n -= (a+a)%100;
                  n += (g-d+f-h*i-e-j)%100;
                  a += (h*m-d-m-e*n+j+l)%100;
                  j -= (d-l-e-i*e-n-f-k+j*a+b-k-c)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  c += (b+i-k)%100;
                  d -= (b*n+h-m+m-k+a-k*e+e)%100;
               }
               else
               {
                  j -= (j*k+c)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  l -= (b+c-i-m-l)%100;
                  b -= (k+i+i-m+j+h*n)%100;
                  d += (b*n+m+m+m+n+n+e*a+d*c+b*e)%100;
                  h += (n+n+k*h+j-a)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  h += (f*j)%100;
                  a += (b-k+i*g*j*j+h)%100;
                  i -= (m+f-b-b+f)%100;
                  f += (d*b-f+b+g+j+n-j-n*e)%100;
                  n += (h-n+k-i-c*i)%100;
                  k -= (l-g+e-k-k+e*e+b)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  i -= (h-n)%100;
                  i += (j+l*e+g*g*f+b*h+n+i+h)%100;
                  i -= (c+a-m+c+i+i-k)%100;
                  l += (b-h-k-m+b-l-j-f+a)%100;
                  j -= (a-c+d-l+c-d-h-g+m-c+e-f)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  d += (d+k-n-m+k+l)%100;
                  b -= (m-i*c*j*n+h-g+i-c)%100;
                  g += (c+c-a+j*n-a*b+g-d-n)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  k += (k+l+f*h*e+c)%100;
                  i -= (m-e-g*m-j+f+b+d+k+f+b-i*c*a)%100;
                  k += (k+n+j+b-i*f-b+f+l+e-k+g+j)%100;
                  c  = (k-j*b+i+e*f+n-n*d-a-f+f)%100;
               }
               else
               {
                  a += (d*h-m+e+g)%100;
                  n += (l*n+a+e+n-l+c-l+m*n*e-n*l)%100;
                  j -= (e+j*a+j*l+j-b-h+l-a)%100;
                  e -= (b-j-m*k+b-e*d+m+a*h+b)%100;
                  d += (j+e)%100;
               }
            }
            i -= (m-j+g)%100;
            g -= (h+b-d-f-f+b*h+l-m)%100;
            h -= (i*g-m+k-e-i-h+e+a*h+i*c*a-n)%100;
            c -= (i*e+b-c+f+d+c-d-d+i-n)%100;
         }
         j -= (i+a+i+j+c+d*l-n+f-d)%100;
         n -= (m*j+h-b)%100;
         j -= (b+m+n+i+n*d*d+e-l+f-c+j)%100;
      }
      a += (g-f*d+m+f+a*l)%100;
      a  = (l-a-m*d-b+n-e-g*n+f-k-g*a)%100;
      f += (h-h*h*d+j+a-b-k)%100;
      n -= (e-d+i-b+l+m+d*a-b+g*c)%100;
   }
   k -= (e*m)%100;
   g += (a+a-f+j+b+f-h-g)%100;
   j -= (k*k+b+e-g+a+l+n)%100;
   m += (e-g)%100;
   b -= (a+h-n*h*d-m*d*k+d+a+a-e+l-d)%100;
   d -= (n-f-h*i+g+g-l*h+f+f*e*m-j)%100;
   c += (n*l+m-h+k)%100;
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
         d += (c-e)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%3 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  f += (n+c+d+j)%100;
                  a += (f-d*i+b-b+m*g-m-m)%100;
                  a -= (l+i+m-a-f)%100;
                  j += (b+j+a+j)%100;
                  f += (b-i+e*e-c-j+h*g+j+h-l+k)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  k -= (b+c+j*n)%100;
                  m += (d-f+n-h-a)%100;
                  g -= (n-g-m+f-g)%100;
                  c += (c+l*e-g*h+k*l+e+j+c)%100;
                  h += (e-h+f-m-l-d+f+l+g-k+b+a+d)%100;
               }
               else
               {
                  d -= (g+c)%100;
                  m += (i+f-j+j+l)%100;
                  k += (n+i-k-n*a+f+g)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  f += (l-h)%100;
                  d -= (b-n+j+f-g)%100;
                  l += (e+b+l-d-j*k*j-l-c+m-n)%100;
                  b += (d+d+n+k*d+n-b)%100;
               }
               do
               {
                  d += (g+f-j+g)%100;
                  g += (k-n+k-a-h+c-i-n)%100;
                  b += (l+m+i+i+e+m*f+i-i+b-f-c)%100;
                  k -= (h-f*f-l-h*h-g-c-i*g-i*f+e+k)%100;
                  b -= (k+c)%100;
                  d -= (f+l+f*i-k)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  f += (l+n+d-c*m+e+n)%100;
                  b += (b*g+f-k)%100;
                  b -= (n-m+g+m)%100;
                  k -= (m*i-h-c*h+g-g-n-i)%100;
                  a -= (n+l*h-e+g+e*n)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  j += (f-e-e)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  f += (e-i+n+h+g-k-e*e+n+k)%100;
                  b -= (e+c-h+c+b+m+n+b+g*n-b*g+h)%100;
                  h -= (h+a+m+l-j+m+k+c-b)%100;
                  n += (m+g+l+k-l-e-d+c*d-k+b*c*f)%100;
               }
               else
               {
                  m += (g+i+h+b-i-c*i+j-l+l+n+d)%100;
                  e  = (e-e+h*d*i+f-h)%100;
                  g -= (k+g+k+n-a+m*d+i*l*l+g+f+a+f)%100;
                  j -= (g*d-j-d-c*a-i)%100;
                  m += (m+g+b+c-k+b*m-d*n+b+k+d-a)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  j += (a+l*f-e+j+l-n*f-j-m)%100;
                  l += (d*k+n-i+n*b+c)%100;
                  e  = (n+d*h*a+h-h)%100;
                  m += (f+g-m-b)%100;
                  l += (e+k-d+f*c+i-f-b-h+n+j*d)%100;
                  l  = (i+c-g+c-c+b+m*k)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  h -= (k-f+k+i*d-e)%100;
                  n += (i*l+d+a+h-l+j+j*g*c+m+d+j*k)%100;
                  k  = (i*e*c*e+b+g+d+i+a*f+a+a)%100;
               } while( ++DOcnt[4]%5 );
               a += (h+h-g-m+c+e-g+d-c+e-g+k-b)%100;
               e += (d+b+g+l-h)%100;
               n -= (j*c+h-k)%100;
               b += (i-b*k+e-d+j*a-d+j-b+l)%100;
            }
            }

            h -= (j-j*l+g-l+b-b-l+f+h*n)%100;
            j -= (c+b+m-h+l+j*i*c*f+n+l)%100;
            a += (a-m+m-d+f-k+n-h+k-f-e)%100;
         }
         b += (a+b+g-e-l+g-i-k-i+c*l-k-b-l)%100;
         e += (b-m-h-e+f)%100;
         i += (d+h+g+b-k*i+i+b*e+d+c-j+n-j)%100;
      } while( ++DOcnt[2]%5 );
      j -= (j+l+d-c*a+k+d-n+l-d+b-b+i+e)%100;
      b += (f*i-f)%100;
      i += (n-m+g*e+d*l)%100;
      m -= (m-e+m*j-k+f+j+k*c-d+d)%100;
   }
   a += (i-g+n*n+a-g-b+a-d*l*g)%100;
   c += (i-a+b+i)%100;
   d += (b-n*e+d-m+n+h-c+b)%100;
   f += (g-j+i)%100;
   g  = (d+b)%100;
   a -= (c-n-i+i+b*b)%100;
   d  = (g-f-a-c+n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[5]%10 )
   {
      b  = (i+j+i+n+i)%100;
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
                  j += (j*l)%100;
                  d -= (e+d*g+g+e)%100;
                  g += (c-m*l-e+a-d+d)%100;
                  m += (g+d-b+f+n+c*d)%100;
                  b += (g*l-n)%100;
                  i -= (d-d*a-h+j-l)%100;
               }
               else
               {
                  h += (a-l)%100;
                  h += (d-c-l-i-l*h-f*c+d-d+a-h+c-j)%100;
                  k += (e*i-l-e*h)%100;
                  c -= (j-i)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  m  = (g*d)%100;
                  l += (a*c)%100;
                  n -= (d-i+c*h-a*e+g+e)%100;
                  k -= (j+j+i-f*f+k*j-c+h-g+i+k+g)%100;
                  e -= (j+k*i*m+g*k*n-h-g+a-b)%100;
               }
               do
               {
                  b += (n-m)%100;
               } while( ++DOcnt[6]%5 );
               n -= (a+b*l+e+l+m-a+a)%100;
               for( ; ++FORcnt[9]%5 ; )
               {
                  b += (c+h)%100;
                  f -= (m+m*b)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  d += (f-a+e+f-l+h+f+k+g-h)%100;
                  b -= (l*n+c+n*g+n)%100;
                  j -= (d-i+f+j-m)%100;
                  b -= (d-k+m-a*k*a*i*f-n+m-m+h-g-l)%100;
                  i += (c+g-f-l-e+f+a-b+a+e)%100;
               }
               do
               {
                  c += (j-i-g*h-k-c-d*e-l*b)%100;
                  c -= (d+b*f-e+i-b+g+k+c+j*h-e*g)%100;
                  n -= (b*f-k-j*h-f)%100;
                  n -= (m-g-m+c-a+d*h+e*l*f+k+f)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  m -= (m-k-m)%100;
                  j -= (i+m+a-d-f*d-n+l+h)%100;
                  b  = (l+g-k+j*d+i*d*l+i+j*b+n*h+n)%100;
                  a += (e-i*h)%100;
                  j -= (c*f+c*d+d*j)%100;
                  k -= (d*j)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  f += (g+a*n-j+h-d*m+i-n*e)%100;
                  d -= (m*h+j*e-i+k*g-a+l-i+d-l+n+m)%100;
                  h += (i+f-b+n-i+e-g+h+e+j-f-k)%100;
                  h  = (m-c+i-g)%100;
                  i += (i*i+l*n-c-n-j-b)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  j -= (j*f+k*l+a-g+n)%100;
                  i += (b+g-f-n*b-h+d-l-d*m+d*a)%100;
                  k += (l+e-c-e*k-j-c)%100;
               }
            }
            
            switch( ++SWcnt[3]%3 )
            {

            case 1:
            {
               if( ++IFcnt[4]%10 )
               {
                  j += (m-l-e+g-n+l)%100;
                  m -= (k*a-d-f+k+i+l-g)%100;
                  j += (c*i-n-n*i+l-l*j-j+i)%100;
                  d += (l*e+d+a+i-m+b)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  g += (j+m+d*f+n)%100;
                  f  = (i-e+a+n-n+f-b-f)%100;
                  d -= (l-a-f)%100;
                  k -= (e*e-k)%100;
                  d += (g*b+h+i-j*d-e*g-g-n-g-f-n)%100;
               }
               else
               {
                  l -= (n+l-h-f)%100;
                  e  = (h+e+c+d+k)%100;
                  g += (g*c+g+b*j+b-i*d-b)%100;
                  m -= (g*k-c+d-f+b+b+e-c)%100;
                  k += (m-b+m*l-b+k+a+n+a-i+h)%100;
                  n -= (j-j+e*m-a+i+m+c-c-l-g)%100;
               }
               h += (e*h-j+i+d+a-l+l*n+j-i*l+j)%100;
               c -= (c*a-f+h-a+i+b+b-l-a)%100;
               n -= (g+n-b+h-f)%100;
            }
            break;

            case 2:
            {
               a -= (l+m-g*b*d)%100;
               c += (b+l*j)%100;
               g -= (k-j+d*g*h)%100;
            }
            break;

            default:
            {
               c += (c*e-b-k*g*h-b+l-e)%100;
               a -= (g+k-b+g-f-d)%100;
               g -= (d+n+f+a-a+m*n-h+k*m-a)%100;
               h += (n+a)%100;
               b -= (b*e-g-h+c*n-d-c-d+g-f+h+m)%100;
            }
            }

            c -= (j+d*n)%100;
            l -= (c-i-l-i-l)%100;
            f -= (m+m-e+a*f-g*j-e+h+e+n+n)%100;
            b += (m+g-m*i+n-a+f+d-l-j+e)%100;
         }
         break;

         case 2:
         {
            l  = (l-m+g+e+f-g-f-m)%100;
            l -= (f+f+n+h*n-i+h*a)%100;
            c += (e*e+k*g-m*d+e)%100;
            l -= (i+b*f-j+m-l*k-l)%100;
         }
         break;

         default:
         {
            i += (k-h-m+b-b+h-m-g+h+c)%100;
            n += (k-k-a*d-e+a+l+e+i-e*n+h)%100;
            e -= (h-c+f*b-i*j-k-m+j+b)%100;
            e -= (k+b+k*e*g-i+n-b-j-j-f+f)%100;
            d += (n-a)%100;
            g -= (g+m-g)%100;
         }
         }

         d -= (f-f-g-j*c+c)%100;
         k += (g+e-b*k+f-g+k-a)%100;
         a -= (c-g-m+e)%100;
      }
      j += (i+m+k+g)%100;
      h += (d-c*e+m+b-f-e-h-k-b+c)%100;
      e -= (m+j)%100;
   }
   m += (h*i*h-n+b-d)%100;
   i -= (b-l-c*h-b-a-g-n+c+k-m-l-f-n)%100;
   n += (b*a-n+j*n-n-m*e*d-i-c+d)%100;
   g += (f*d+l)%100;
   g += (i*f*e+e-g+e+m-i)%100;
   n -= (h+b+m-l*k)%100;
   a += (j*e*j*c+f-j+n+k-l*k*h+i-g)%100;
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
                  h -= (b+j+e+g*a+k)%100;
                  j -= (i-l+m)%100;
                  h -= (d-a+d-i-f*d-n+h+g*m+g+l)%100;
               }
               else
               {
                  n += (c+d*i-i+k+c+c-c-c*k+a-e-e*g)%100;
                  f -= (k*f)%100;
                  d -= (k+h*n+k-j+a)%100;
                  h += (m*n-b)%100;
                  j += (e-c+c+k+e+j+d+c+h)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  e += (d*l-e-j)%100;
                  h -= (e*f+i-f+i*i+i)%100;
                  d -= (n-l-l-k*c+f+k*c+n)%100;
                  f += (e*l-g*c*a+a*j+f+b-l*c)%100;
                  n -= (h*d+i+d+j*h-f+a+a+c*f*l)%100;
               }
               do
               {
                  i += (c*f-d*j)%100;
                  n -= (n-f-c+a)%100;
                  h += (n+e-e+b+a-n-k*l+l+a+l+c+f-l)%100;
                  m -= (m+j)%100;
               } while( ++DOcnt[8]%5 );
               if( ++IFcnt[6]%10 )
               {
                  h += (n-c-n+a-j-a-h+i-m-a-d+m-a)%100;
                  e -= (i*d-k+a-b+b-m)%100;
                  m  = (e-m)%100;
                  a += (j+n)%100;
                  g += (h+b*d+c*e-b)%100;
                  m -= (b+a*e+d-e*a+c-h-e+j-n*d)%100;
               }
               m  = (e-n+j-j-n+g*f)%100;
               for( ; ++FORcnt[11]%5 ; )
               {
                  i -= (g+a+h-b-e+b*b+e+n)%100;
                  d -= (i*l)%100;
                  c -= (b-n-b)%100;
                  c -= (h+i-j*i)%100;
                  e -= (m-d+d+k+m-e)%100;
               }
            }
            
            switch( ++SWcnt[4]%3 )
            {

            case 1:
            {
               b += (g-g+d+c+h+m+c*b)%100;
            }
            break;

            case 2:
            {
               b += (m-n+b)%100;
               i -= (l*f+f)%100;
            }
            break;

            default:
            {
               k -= (j-d-i+g*h+j+b-j+n+j+j)%100;
               e += (f+g+k-f+f+m-h*a-e*c*l*i*h)%100;
               n += (a-e+a-m+j)%100;
               e -= (l+c+e-e-e*f)%100;
               e -= (m-a-g+n+b-g+j+b-h*m-j+c)%100;
            }
            }

            c += (h-k-f*m-d+j*d-k-d+g-h-l-a+i)%100;
            e += (j-a-g+i-h+n+h+i+k-e+g+k)%100;
         }
         j -= (f+n-d+a-f+e-e-h+f)%100;
         h += (k+k-g+n+a)%100;
         b -= (i*c*k+g-k*i+h*d*d-e+b*k+k)%100;
         l += (e+i)%100;
      } while( ++DOcnt[7]%5 );
      b += (g-a-b)%100;
      d -= (b-h+d+i-g*e+g+a-h)%100;
      j -= (k+a-k+a+b+g-b+g-i-n)%100;
      h += (j*l+e-g-h-m+c-h+k*m+k)%100;
   }
   n += (d-j+g+e*k+d+g*b)%100;
   d += (b*e+e-e*f-d*k-m*b*f)%100;
   e -= (j-d-f-c+k+c+l-l-b)%100;
   e += (d*a-d-n*b-a+m-n-l)%100;
   f += (f-a-d+c)%100;
   f  = (i+c+b+m+m-d+l)%100;
   c  = (c-e-b-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[11]%2 )
   {
      i -= (b+f-c+g+a*m-c-i-n+d)%100;
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
                  j -= (i+h+c)%100;
                  e  = (f-e*e)%100;
                  c -= (f+i+a-m-c-i*h*m)%100;
                  c -= (i-l+h+b+f-n+g*b-l-l-f*i)%100;
                  a += (a+b+d*m-k*g+i+h-k+h+j)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  g += (l-g+g-a)%100;
                  b += (d-g-l-c+b-m-f-c*e-m+j+i)%100;
                  i -= (e-m+m+e*e+i-e+e+a+n-c+l+k)%100;
                  g -= (d+h-j+n*a+h)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  f += (e*m-a+n+h)%100;
                  d -= (f-l)%100;
                  g -= (h*c*h-j+e*h+d)%100;
                  j -= (b+d-k-g+i)%100;
                  f  = (g-k)%100;
               }
               else
               {
                  a += (e+g+d+a+b*f+c+g*e*e*l+h+j)%100;
                  d += (m-d*i+i)%100;
                  k += (m-m+e-n-f-b-d+h-d+c)%100;
                  f -= (l+i-f*l+f+h+d)%100;
                  c -= (k-f)%100;
                  f -= (i-e*f-c-d*j)%100;
               }
            }
            while( ++WHILEcnt[9]%5 )
            {
               do
               {
                  f += (n-l-l+h-n*h-k)%100;
                  k -= (k+l-a+g)%100;
                  j += (a-n)%100;
                  f += (m-l-c-e-m*e*j-k+j*k+c-k)%100;
               } while( ++DOcnt[10]%5 );
               h += (n-i)%100;
               for( ; ++FORcnt[16]%5 ; )
               {
                  f += (l+e)%100;
                  d -= (a-b)%100;
                  k -= (l-i-n+i-j)%100;
                  m += (f+j)%100;
                  l -= (d+a-k*f-m-c+l-j+a+h*b+h*m*m)%100;
                  k += (l*h*e+i+n-g+j-c-i)%100;
               }
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  a -= (i-k-k+f-d+l)%100;
                  b -= (f+b-h+m)%100;
                  c += (c+a-m+k+n*e)%100;
                  g -= (k*k+i-l-l-k*h+d-i-i-m)%100;
                  b -= (n+b-b-a-k)%100;
               }
               break;

               case 2:
               {
                  k += (f-j-l-d*a-g*b-e)%100;
                  e += (e-j-c+b-g-j*k+k-m)%100;
                  g -= (e*n+k+h*b+e+n-i+n+l*b-e)%100;
               }
               break;

               default:
               {
                  j += (d-c*g+a+d+n-l+a+d+l+c+a)%100;
                  l -= (a+j-e+g+m-n-j+h+l+g+j)%100;
                  k += (b-g-j)%100;
                  e -= (e*d+b*c)%100;
                  b -= (i-f*m*e-i*h+g-i*h+g+g-i*c+f)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  a -= (f+j-b*k+c-h+i+j-e-n*m-h)%100;
                  k += (m-f)%100;
                  g += (j-i*b-i-b+a+c+j+a)%100;
                  k += (i+b+g-d-l-n-k*c*m)%100;
               }
            }
            if( ++IFEcnt[10]%2 )
            {
               g += (j-c*e*j*c*i*m+i+f+c+l)%100;
               i += (k-l-b-j-e)%100;
               j -= (f*d+h+n)%100;
               m -= (f+a+m+f-e-m)%100;
               a  = (e+c+i-g*j-m-h+e+n-k+n*i+n-i)%100;
            }
            else
            {
               b += (a+k*f*d*f-i)%100;
               k  = (j+d+d-m+b*b+f-g+n-i*i-c+f)%100;
               k += (h+m*c-a+n-g*h)%100;
               e += (i+b+c+j+m)%100;
               d -= (d+l+j+a-b+a-l)%100;
               h += (d+h-d-j-h-a*b+j-g+j-n-n)%100;
            }
            i += (a-e-k-e*l-k-j+a-j+l+m+e)%100;
            b -= (n-d)%100;
         } while( ++DOcnt[9]%5 );
         d -= (b*i)%100;
         a += (b+i-a-f+k+e+f-d-i-i)%100;
         h -= (b-d*e+e-d+m+m+i-l-h*k)%100;
         e += (n*g-g*b-d*b-n+f)%100;
         j += (a+e+m-k+i)%100;
      }
      n += (i-m+j-n+f+j+m*c-e*e)%100;
      c -= (a*c)%100;
      l += (i-d+g*i*b+e-f)%100;
   }
   b -= (d+k-e+i)%100;
   a -= (l-d*h+l+a+n+h+f*e-a)%100;
   n -= (n-j+g*f*c*e)%100;
   e -= (n*a+i)%100;
   j += (a-k-g-c)%100;
   c += (b+k-i+d+d+n+b+l*g-g+l)%100;
   m -= (a+l+c*b-j*d)%100;
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
                  c += (e-i*g-c-m+c-m-c+m)%100;
                  g -= (j+k*h*d+j*d+d-e+b)%100;
                  h += (c+l)%100;
               }
               else
               {
                  b  = (a+i)%100;
                  g -= (i+h*g*g-j)%100;
                  c -= (d-b+f+i+n)%100;
                  m += (k+m*g)%100;
                  l -= (f*n-m+j-i+j+m+g)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  k += (i+c-m)%100;
                  j -= (m-b+d-k+n-f*i*f-l*d+n-e*d+c)%100;
                  e += (d+j+f-f-c-c-n+l+k+f+k)%100;
                  a -= (c+a-l-b+n-f)%100;
                  n += (n+a*n-g+f*f-g*h-l-g-f)%100;
               }
               do
               {
                  k -= (k-e)%100;
                  b -= (a-g-n-n)%100;
                  c -= (l*g-a+i-a-e)%100;
                  m += (n+n*c+d-n+e)%100;
               } while( ++DOcnt[12]%5 );
               if( ++IFcnt[9]%10 )
               {
                  d += (e-f+k+l-l-c*e+c-b*k-n-n)%100;
                  d  = (l+j)%100;
                  d += (g-b+n+i*n-n+k-n+f-f+j*g+h-h)%100;
                  f -= (n-k+g-n+b+a-k+e+b-h+h-j)%100;
                  l += (k-k)%100;
                  b -= (j*n*j)%100;
               }
               i  = (m+f*a-m-c+c-f-h-n*m-e-l*b)%100;
               for( ; ++FORcnt[17]%5 ; )
               {
                  l -= (g+i*a+d-k-i+b-e+e+k*h-d)%100;
                  i += (e-n*c-j*m-d)%100;
                  n += (a+a+f-h-b*i+b-e*h-b*i)%100;
                  k += (m+g-b+d-c+b)%100;
                  b += (e+j-c+h-d+e+j+h-j+n-g*m)%100;
               }
            }
            
            switch( ++SWcnt[6]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[13]%2 )
               {
                  i += (c-g+j-a+i-k+n-k+f+f-l)%100;
                  h += (n-i-a+h)%100;
                  g -= (m-c+g-l+k*d-a-h*l-g*g+m*f)%100;
                  g += (a*d+h-m+l-e+k)%100;
                  d += (e*b-j+g*l*f)%100;
                  b += (e-a+f-c-c-i+e+g)%100;
               }
               else
               {
                  h -= (h+m-i+d+n+e)%100;
                  a += (j*a)%100;
                  d -= (h+k)%100;
                  e -= (h*a*f-k-a+i*i+e-k+c-m)%100;
               }
               while( ++WHILEcnt[12]%5 )
               {
                  i -= (f*j)%100;
                  i += (i-l-f-b+c+i-h+e)%100;
                  n -= (a+b-g-n-n-d-a*j+b-b)%100;
                  e += (f+l-e+f-k*a-l)%100;
                  i += (n+n+a-d)%100;
               }
               do
               {
                  k += (j+d*k-h-l-b-g*a-c+b-a+b+c)%100;
                  c += (b+n*f-h+d-i+b+d-e-h-b+l-e)%100;
                  c += (k+c+j-d+a*f+m)%100;
               } while( ++DOcnt[13]%5 );
               for( ; ++FORcnt[19]%5 ; )
               {
                  l += (a-a+a+j+e-c+a-j*g*f+a*i*f)%100;
                  l  = (f+h*i-h*c+m+b*e-h+a*a-e)%100;
                  b  = (i*d-c-c+h-a*e-e+d*n+d+f)%100;
                  d += (i*h)%100;
                  f -= (e*g-k-d-l+c)%100;
               }
               g += (h*h+k+j-n-e+b*l*i+g-f+m*h-a)%100;
            }
            break;

            case 2:
            {
               c += (e+f+m*n+k+c*d)%100;
               n -= (a+g+n*a)%100;
               k += (b-g+i-b+f-n-j-k)%100;
               m -= (m*c*d+m-j)%100;
            }
            break;

            case 3:
            {
               a += (i-d-e+a+n)%100;
               j += (n*a-j*f+e*a-e+h*j)%100;
               g -= (g-f*h-n*n*e)%100;
               d -= (m+a-l)%100;
               h -= (c-g-e-g-k-d-k-l+k-d+l*n+k)%100;
               k -= (b-j*n-i+b*l-j+g-b-k)%100;
            }
            break;

            default:
            {
               n += (i+m-m+d*m+m-h)%100;
               d -= (a+l+l+g+e*j+e+k+k)%100;
               h -= (d+e*j+n)%100;
               k  = (b-d-m+d+f+e)%100;
               f -= (a*m+h-b)%100;
            }
            }

            b -= (e-k+f-j-m-a*e-k+g*e+a-g+h)%100;
            m += (j+k-d*m-n)%100;
         }
         h -= (j+b+h*k+f-j*c-a+g+e*b-d)%100;
         m += (k+b+k-g-d*k*d)%100;
         b -= (b-g)%100;
         d -= (e-m)%100;
      } while( ++DOcnt[11]%5 );
      k -= (k-g+k+c+k*j-c)%100;
   }
   h -= (b*d*l-d+e*k+l-h)%100;
   h -= (b+i+d-b)%100;
   e -= (n+k+j*c-g+d+n-j+h)%100;
   c  = (b-g+e-a-e)%100;
   c += (m*l-d*e+g-i+a+h+h*g-e-h)%100;
   m -= (h-m-c-c-b*m-g+f-b+e-c+c)%100;
   n  = (f-b)%100;
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
            j -= (d+c)%100;
            a += (b+b+j*l)%100;
            g += (h+f-m)%100;
            n  = (b+h+m-n+g*j-a-c+c)%100;
            i -= (j-h-j)%100;
         }
         else
         {
            while( ++WHILEcnt[14]%5 )
            {
               do
               {
                  d += (a+l-l+j)%100;
                  d -= (i+d*f-l+m+i+n+a-k)%100;
                  g += (a+h+n+l-a-c-k-l-g*i+h)%100;
                  m += (i+k*n*c*l-b*g+i+m)%100;
                  l  = (l-b+j-i+g+i+n-h+h-m*l)%100;
                  g -= (k+m-h)%100;
               } while( ++DOcnt[14]%5 );
               g += (c+n*d+i-b-m+g*g+g+c)%100;
               for( ; ++FORcnt[21]%5 ; )
               {
                  i -= (k+k*a+i*a*e+k-k-f+g+j-k)%100;
                  e += (k-h*j+i-d)%100;
                  i -= (a+n+l*c+a+k+j*g-k*j)%100;
                  d += (e*l+k*f-i+i-g-k)%100;
                  l -= (g-d+h*f+g)%100;
               }
               
               switch( ++SWcnt[7]%3 )
               {

               case 1:
               {
                  b -= (m-n)%100;
                  k += (k-c-d-e-f)%100;
                  i += (m*n+n-e+b*g+g*c-i+i+a+k+f-n)%100;
               }
               break;

               case 2:
               {
                  j += (j+n-f-f+n+k-i)%100;
                  l -= (a+n+j*c*f+g)%100;
                  i += (n*i+e+m-c)%100;
                  i -= (n*k)%100;
                  j -= (k+l+f+l*i-a*n*i+l+n)%100;
               }
               break;

               default:
               {
                  m += (a*f+n+i*j-f-a+h-e-k-f*k+n)%100;
                  m += (l-g+g+e*n+e+n*e+i+f)%100;
                  c += (a-b*m-e+b)%100;
                  a  = (d+b)%100;
               }
               }

            }
            if( ++IFcnt[10]%10 )
            {
               if( ++IFEcnt[14]%2 )
               {
                  a += (l-c+d+d*j-e-c*k-h-k-e-j*e+b)%100;
                  b -= (h-j+n+m-c*n)%100;
                  e += (e-c*j-l*i+d-h+l*n+f*j)%100;
                  b -= (e-m+g-n*n+a+l)%100;
                  e -= (g+a*f+g+j*j)%100;
               }
               else
               {
                  g += (a*k)%100;
                  g += (n-d-m+a*j-d*e+b+a+a+n-k-g+i)%100;
                  k += (a+j-m+c-b*i*m+m+k)%100;
                  j += (i+d+f+i*h-n)%100;
                  j  = (e-n+f)%100;
               }
               while( ++WHILEcnt[15]%5 )
               {
                  k += (h+n)%100;
                  c += (l+i+d+i)%100;
                  e -= (c-n*l-b-d+d)%100;
                  c  = (h+k+f*b-n*i-a+a+g)%100;
               }
               do
               {
                  k += (b-a*b+a+l-l-b-f+l+d+k+m-h-b)%100;
                  k -= (d-f-d)%100;
                  f += (f+m-e+b*b+b-a-c+b*b+h+e*f)%100;
                  l -= (l*h+d)%100;
                  i -= (l+c-m-b-k-c*a+i-d+l+e+d+h+f)%100;
                  m -= (f+n+f+c-a*d+j*d-g*m-c)%100;
               } while( ++DOcnt[15]%5 );
               d -= (c-i+i+n-a+k-l-f-g+j)%100;
               b += (k-e*n-c-a-b+f-f-b+m)%100;
               c -= (j+j+i*c*h-c*k+i-k-j*g-c-e*c)%100;
            }
            f -= (a-m)%100;
            f -= (i+a-i-l+b*l)%100;
            e -= (j+i*e+c*n)%100;
         }
         k -= (l+b-a-c-d+j)%100;
      }
   }
   n += (h+n-f+n+d)%100;
   m -= (e-m+i-g-d+d*h-f-m*l-b+f+d)%100;
   c -= (f-c+l+h)%100;
   j  = (c-m+e)%100;
   g += (n+k*f)%100;
   e += (n*m*i+a+h+i-g+i+b+i-b+g*d+g)%100;
   f += (k*f*e+g-e+l+j+e+j-h-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F8(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[26]%5 ; )
   {
      for( ; ++FORcnt[25]%5 ; )
      {
         if( ++IFEcnt[17]%2 )
         {
            e += (n-k+c*m+h+e*g-h+g+c-j+l-m*j)%100;
            f -= (j-f*g+b+e+h-d-k*d-e+b+d*c)%100;
            k += (i-a)%100;
            k -= (m-g+g)%100;
         }
         else
         {
            while( ++WHILEcnt[16]%5 )
            {
               do
               {
                  d -= (j-k+e+j+k*e+i*n-l-e*a-j*h)%100;
                  b -= (k-d-d-l)%100;
                  i += (c-n)%100;
                  j += (f*n+c)%100;
                  k += (f-c-c+l)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  f += (e+a)%100;
               }
               b -= (g+e*j+a)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  d -= (l+h-i)%100;
                  k += (f+m*e*h-j+d)%100;
               }
               
               switch( ++SWcnt[8]%4 )
               {

               case 1:
               {
                  n -= (k-d*e)%100;
                  a += (a*m+a-l+b+f+d*i-n+h*f-c-n+n)%100;
                  k += (j+h*n-k-i)%100;
                  h -= (j+g*b*g*e*m-m-h+k)%100;
                  g -= (k+c+f-k+e+d*j-f+i-g-g+d)%100;
               }
               break;

               case 2:
               {
                  a += (l-b+c*i+a-l-a*i+e-h-f-i+f-i)%100;
                  n += (b+f)%100;
                  n += (n-c*a+e*e*j-b+f-a+m*i+j*b-n)%100;
                  k -= (i+l+b*c-e)%100;
               }
               break;

               case 3:
               {
                  d -= (l+e*k)%100;
                  m -= (n*c*c-d*n)%100;
                  h += (n*i)%100;
                  l += (d-j+d*l+c-j+f)%100;
                  m += (a-d)%100;
                  h += (g*h+f-e+c+n)%100;
               }
               break;

               default:
               {
                  k += (i+k-m*a+k*d*n-f-j-b-c-m+l+e)%100;
                  e  = (k*b)%100;
                  a -= (h-n-h+h-a+c+c+k+f)%100;
                  b += (h+k+i+k)%100;
                  h -= (b*b-b-k-c-n-m)%100;
               }
               }

               if( ++IFEcnt[16]%2 )
               {
                  d += (f-n-b-k-d*b-a+j-j-d)%100;
                  f -= (d+m-b-f+n)%100;
                  c -= (n+j-e*m+j+l+f-b)%100;
                  b += (n*i-m+j)%100;
                  h -= (n-f+i+j+b)%100;
               }
               else
               {
                  g += (e-m*l-d-m-k)%100;
                  d += (h+l+j+b-a+a-i-h-m+m-c*g+n+b)%100;
                  n += (b+f)%100;
               }
            }
            while( ++WHILEcnt[17]%5 )
            {
               do
               {
                  m += (c*k-j+d+h+c*h-k)%100;
                  g -= (c+h+k-d*a-m+i*j-h)%100;
                  i += (d+d+l)%100;
                  h -= (a-f-e-c*b+g+h-d+j+b+j-n-b)%100;
                  l -= (l*a)%100;
                  f -= (b-l-i-g+d+g+a-d-d-g+h)%100;
               } while( ++DOcnt[17]%5 );
               for( ; ++FORcnt[24]%5 ; )
               {
                  n  = (e-b+f-j-i+h+c-i-c)%100;
                  d -= (f+d+m*m*a+f)%100;
                  l -= (i-b+c-d+f-k+c-g)%100;
                  m -= (b+e*c+g*n)%100;
                  a += (h+c+h-h)%100;
               }
               if( ++IFcnt[13]%10 )
               {
                  h -= (m*m-f-m*n-k)%100;
                  c -= (h-c-b-b-k-e-a-b+n-h-g-j+e)%100;
                  k -= (m+a-f+l+i*f)%100;
                  l += (c-h-m*n)%100;
                  n -= (l+l-g+k-d-k-e+h-d-b+c)%100;
               }
               a += (b+j-k+m*a-d+h+j+l+m)%100;
            }
            j += (h+e*c+m-b-c*m)%100;
            a -= (m+m+g-i+l*g+b+h-l-h*m+g)%100;
         }
         b += (n+f+l+c+e)%100;
         d -= (h-l-c+h-b+b)%100;
         g -= (e*b+a-g-k)%100;
         g += (h+l-n+f-g*a-n+c)%100;
      }
      m -= (b*g+b+c+j*i*d*i+a)%100;
      f += (h+m*j+e-g+f-k+j-l-e*i*j+f)%100;
   }
   n -= (m-i-e+l+c+j-f-l)%100;
   h -= (b+b)%100;
   e += (a+c-b-k+n*n*k*d-m-m+m)%100;
   h += (h*i-g-h+c-h-k)%100;
   d -= (n*g*l+i-n+f+b+b-a+j-k+j)%100;
   c -= (f-h)%100;
   i  = (m*j+m+b-i+a-j-n+h*c+a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[30]%5 ; )
   {
      if( ++IFEcnt[20]%2 )
      {
         h -= (b+i-k-l-h-g)%100;
         c += (a*k*a-h-j+f*h)%100;
         c  = (k*i)%100;
         m -= (m-i-b-n-b-a-d+k)%100;
         i -= (h-j+j*c*f+n)%100;
      }
      else
      {
         while( ++WHILEcnt[19]%5 )
         {
            do
            {
               j -= (d-f*i)%100;
               for( ; ++FORcnt[27]%5 ; )
               {
                  n -= (n*j-n+d+g-e)%100;
                  h += (d*k+e*k*d+m)%100;
                  f -= (e*i-k-g-c+a+j*k+e+m*f+a-c-j)%100;
                  l += (c-f+f+f-i-j-m+g-l)%100;
               }
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  e += (f-a-a+h-n*j-i+e)%100;
                  c -= (f+m-n+l-j+b)%100;
                  g -= (c-e)%100;
                  h -= (k+j)%100;
                  i -= (j+l-m)%100;
                  b += (m+h-e*n)%100;
               }
               break;

               case 2:
               {
                  d  = (i*h*k)%100;
                  i += (g+h)%100;
                  m += (m+m+e-j)%100;
                  g -= (j-m)%100;
                  k += (f-l-l+j)%100;
               }
               break;

               default:
               {
                  i += (j+a-e+c+e+e*g+e*e+b)%100;
               }
               }

               if( ++IFcnt[14]%10 )
               {
                  b += (c+a+l+m+g+i-b*m)%100;
                  d -= (j-j-b-g*e-a-f)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  g -= (k-m+k-b-a*g-h-h*l-k+i-e+h*c)%100;
                  h += (a+b)%100;
                  h += (a+i-a-d-k-i-h+j+h-h+f)%100;
                  b += (l-d-i-m-d-k*c+m-h+f+n)%100;
               }
               else
               {
                  j -= (m-d+g+d-k-n+i-k-f)%100;
                  a -= (e-c)%100;
                  b += (c*i-g*c-k-i-n-b-c*n+e)%100;
                  a += (e*k+i-g*f-i+f+e-a+f*b+f+k)%100;
                  m += (h+b+g+f+e)%100;
               }
            } while( ++DOcnt[18]%5 );
            while( ++WHILEcnt[18]%5 )
            {
               do
               {
                  l -= (n+d*g-i-d-b+j+a-m-n-b)%100;
                  j  = (d+h-f-e*a+n+j*a+a-b-b+m+f)%100;
                  n -= (g+j-m+m+e+f+b+h*c*b)%100;
                  b -= (i-n-c*a+k*c+c*a+c+g+c*g+b*h)%100;
                  i -= (k-e+m-m-i-b-n-b*k-h*j+l)%100;
               } while( ++DOcnt[19]%5 );
               for( ; ++FORcnt[28]%5 ; )
               {
                  b -= (d-j)%100;
                  k -= (d+b+a+b+f*b+c+k+f-l*n+c-f)%100;
                  h  = (b-c+b*a*m+g-f+e-l-c-f+n+b)%100;
               }
               for( ; ++FORcnt[29]%5 ; )
               {
                  d  = (j+g)%100;
                  d += (l-b-d-l+g-f*m)%100;
                  c += (e-d+l-c*j+f+h-m)%100;
                  m += (m-d-h+a-i-m-k*m*h-g+a)%100;
                  d -= (i+n-d+n+j*i+h-i*k)%100;
               }
               if( ++IFEcnt[19]%2 )
               {
                  l += (l-c-a-c*d+j+j*l-l+m+g*i)%100;
                  a -= (e*m*h+b+f*c+n*n+h-c+m-g)%100;
                  g += (m-i-h)%100;
                  b -= (l-h+c-i+h*a-b*g+f+n-j)%100;
                  k += (b-b+c-n-n*d)%100;
                  e += (m*f)%100;
               }
               else
               {
                  h += (i+j-m-h+b)%100;
                  l -= (a+g-f*e*n-g+h+d*m*a+b*b*c)%100;
                  g += (k*a)%100;
                  j += (n-n+a-i-e-j)%100;
               }
               c -= (d+l*h+n-m*d-e-l*i+h+a)%100;
               g += (n-e-i)%100;
            }
            c += (k-b-l-b+k)%100;
         }
         h += (h*f-k+m+m)%100;
         a -= (n+j+f)%100;
         e -= (a+f+n*k-i+n+m+l-k-j)%100;
         d += (e-g+g-g)%100;
      }
      g += (a-j+k-e+n+b*l-m+g-l)%100;
      l += (k*j+g+a-c*m)%100;
      i += (c-k)%100;
      k -= (f+b-a+m+m*f-k-f-h*d+j-c)%100;
      n += (i-h+n+f)%100;
   }
   k += (b+a*b-c-b-h+m+a)%100;
   f  = (a*g+a+k*l)%100;
   a += (h-b-m+i*k-e+i)%100;
   l += (e+a-h+d+c+n*n-d*a+a*j-f+n)%100;
   e += (e*h*h+j+d+c+g)%100;
   b -= (h*i)%100;
   j -= (m-d-i+k+m+m+k-l+c+a*j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F10(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[22]%5 )
   {
      do
      {
         if( ++IFcnt[16]%10 )
         {
            n -= (l-g-e-b*c+c+d-c)%100;
            for( ; ++FORcnt[32]%5 ; )
            {
               
               switch( ++SWcnt[10]%3 )
               {

               case 1:
               {
                  j -= (f-c)%100;
                  h += (b*g-n*g+h-l-c*e+i)%100;
                  i -= (a+c+f+e*f-m+f-e-n+k*c+l+k+j)%100;
               }
               break;

               case 2:
               {
                  f -= (n-g*h*m*k-i-e+n*f)%100;
                  g  = (c+l+j-c+d+i+l)%100;
                  l -= (j+g*l-h)%100;
                  k -= (m-k-l+j-d*e)%100;
                  i -= (e-j)%100;
               }
               break;

               default:
               {
                  m += (g-e*h-g-h*d-k)%100;
                  m += (j-m)%100;
                  c += (n-h-f+e+f)%100;
                  h += (a-g+b-m-j-a)%100;
               }
               }

               if( ++IFEcnt[21]%2 )
               {
                  d += (l-e-n-j*a-k)%100;
                  k += (f-m)%100;
                  j += (n-n-b-i-k-k+i*n+e-e+f*g-n)%100;
                  e += (h+f-f+g)%100;
                  f += (c+f*h-b-h*c+n)%100;
               }
               else
               {
                  i -= (i+j-m-k-c-n-a+k)%100;
                  a -= (d-a+g+a*f-h*h+l-i+l*c)%100;
                  b -= (k+k+l*j-c-c-l+g+j+e+l-i)%100;
                  d += (g+l)%100;
                  l -= (d-b-a-j-g+g*g-h+k-n*k+k)%100;
                  c += (d+c)%100;
               }
               while( ++WHILEcnt[20]%5 )
               {
                  c += (j+c+n-m+a*k+n+l+a+i+i*j+f)%100;
               }
               do
               {
                  c += (l-l+f)%100;
                  m += (a-g-k+a)%100;
               } while( ++DOcnt[21]%5 );
               for( ; ++FORcnt[31]%5 ; )
               {
                  e  = (d*c)%100;
                  i += (b-a-b-d-a+m+i)%100;
                  d -= (m-m-j)%100;
                  f -= (c+i+a-c*i+l-a+d+f*g)%100;
                  e -= (c+b+k)%100;
               }
            }
            if( ++IFcnt[15]%10 )
            {
               for( ; ++FORcnt[33]%5 ; )
               {
                  g -= (c*i-g*j+m+i*g-f+g+a*b+f-i)%100;
                  b += (l-c+f*n+h*l+b+m*d)%100;
                  e -= (g-f+e+n)%100;
                  m -= (m-d-j-h-c*c-b+c)%100;
                  f -= (m-c*i*d-b-i*g*m+b-c)%100;
                  h  = (b+j)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  b  = (a*i+n-k-c-d+g*e*n)%100;
                  m += (d+f-k-d+g-k+f+g-a-i*a)%100;
                  i += (i-g)%100;
               }
               else
               {
                  j += (e*b)%100;
                  c += (j*e+c+d-e-g+a-k+a-h)%100;
                  l += (b*f-g+i+f*b-m+l+i-d*b)%100;
                  k -= (c*k-e)%100;
                  n += (b*m+d-n+c)%100;
               }
               while( ++WHILEcnt[21]%5 )
               {
                  j += (l*d+k+e*l-c-i*k-k+g)%100;
                  c += (b+k-f+b)%100;
                  e -= (d*c-l*b+c-j*k+n-l+c)%100;
                  j += (n*d*e-a*b-e)%100;
                  c += (k-k+c+k+k-a+k-g-b-f-n-e+d+k)%100;
               }
               e -= (k+a+c*e-l+b+j*m+e)%100;
            }
            m -= (b*g)%100;
            i += (a+m-j-l*a*l)%100;
            e += (b*c-g-f-l-m+k*b*d+n-l)%100;
         }
         a -= (h-d*d+n*l+h)%100;
         m -= (j+n+j-j-e-j*a*f+b*a*h+m)%100;
         l  = (j-h)%100;
      } while( ++DOcnt[20]%5 );
      c -= (a-h-l-m-d-k+j-e+i-b+e)%100;
      f -= (g-n+h+j-f+g+g+a+b-a+f-j*f+m)%100;
      d += (n+n*h*i+l+g+h*k+i-m+i-d*c*k)%100;
      m += (h+b-a*a+l-a*l+h*i+l+g+m-d)%100;
   }
   j -= (h+n+g-m)%100;
   g -= (l*m-l-c-k*i+i*h-k+i+m+n-n)%100;
   j -= (f+a+k+c-a-m+a+d*m*l-m-f+e*d)%100;
   m += (d+f-f+n-j*i*k+j)%100;
   g -= (a-b+i)%100;
   f -= (c*k-f+c+d-c+d+i+n-e+m*h)%100;
   e += (b+b-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F11(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      b -= (i*h+l+l-d-i+j*b-h)%100;
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
                  i += (j-m+h+j*l+a+l+d-g+j)%100;
                  j += (g*h+l-h+f+k*b)%100;
                  h -= (a-h+l)%100;
                  g += (h+d-i*j-g+l-k+h+c-f)%100;
                  c += (e*g-e-j-k+l*n-c-m)%100;
                  j  = (d+j*d*i+i+h*h*g-n*m*f+a*n-j)%100;
               }
               else
               {
                  g += (b*a)%100;
                  m -= (f-f-j+g*l+b+f-a+b-b-b+f*j)%100;
                  a += (c*d-h+i+a+f+n-d+d-n+b-i*g+e)%100;
                  j  = (i+f-d-c-m-e-c-i+e+d+a+b+b-d)%100;
               }
               while( ++WHILEcnt[23]%5 )
               {
                  m -= (m*c)%100;
                  b -= (f+k+i-n*e+l+k)%100;
                  h -= (f-i)%100;
                  d -= (i+j-i-l*a+j*i-m-l-c-f-l)%100;
                  l -= (n-h)%100;
               }
               do
               {
                  l += (h-b-d)%100;
                  a -= (b-h+h+l*l-c+l+m+e+c-n+e)%100;
                  n -= (d-c+g*f-k-j)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  b -= (c*b*h+a+d+k)%100;
                  m -= (e-k+h+h-d+g-k-f)%100;
                  c += (k-b+m-n*e-h-g*i*c*m)%100;
                  f -= (l*k)%100;
                  l -= (a*d-e)%100;
               }
               for( ; ++FORcnt[35]%5 ; )
               {
                  g += (j*i)%100;
                  n += (h*m+b-m*f+b)%100;
                  f -= (m*a-c-k-c*d-b-i-i*k-c+k-h)%100;
                  c -= (m+i-d-i*c)%100;
               }
            }
            if( ++IFEcnt[24]%2 )
            {
               n += (l-e+j+n-j)%100;
               l += (c+n-f+d*l)%100;
               f += (n+i-c+g-i-g-n)%100;
            }
            else
            {
               while( ++WHILEcnt[24]%5 )
               {
                  h -= (l-e*b+g-k+b+e+j*n-j-j-d)%100;
                  g += (i-d*j-l+j+j-n-k*b+f)%100;
                  a += (j+f-b+k+n*a-f-m-a+l-i+b)%100;
                  l += (j+c+m+a)%100;
                  h -= (e+i)%100;
               }
               do
               {
                  b -= (d+h+l+k*l*g)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[18]%10 )
               {
                  k -= (b-b-i+h*m-c*g+k-b-l+c*c-l)%100;
                  g += (g-e)%100;
               }
               g += (d-f-e+k-c-l)%100;
               for( ; ++FORcnt[36]%5 ; )
               {
                  m -= (c-n*i-d-f+g+h-n-j-a+f+g*n+c)%100;
                  h += (j+f-d+b+d+d+a+g-b-f-a+a)%100;
                  i -= (f+i*f*c-a*n-f-k+l+l+m-a)%100;
                  g  = (m+f*i*a+a*i+c+c+f-g+c)%100;
                  f += (k+c+c+j*l+i*l+h*d+n*n-e+k*l)%100;
               }
               
               switch( ++SWcnt[12]%3 )
               {

               case 1:
               {
                  b -= (f+a*f+l-g+g-b*b+n*k-m+l-m)%100;
                  d += (l+l*g+l*j+j+m-n-k)%100;
                  n += (e+k*a-g+n+d*d)%100;
                  n += (j-f-l-b)%100;
               }
               break;

               case 2:
               {
                  d -= (a+l+f)%100;
                  m += (a-j-n+g)%100;
                  f += (a-h)%100;
                  b -= (c*h+n*c+f-k-c)%100;
                  d += (f-d-i*l+g+h+b+a+m-f+c)%100;
                  f -= (n-e*j-i-m+g*c+i-k)%100;
               }
               break;

               default:
               {
                  l -= (f*l+d+h-j-a+m+c+c+b-f+h)%100;
                  h += (c+f*e+a+k-l+d-c-c*n+c-d-b)%100;
                  d -= (i+a+i+i)%100;
                  c += (b-m)%100;
                  e -= (b+l-m+e*f)%100;
               }
               }

            }
            j += (l-n)%100;
            c += (m-h)%100;
            g += (n-g+b)%100;
         }
         break;

         case 2:
         {
            h -= (b+k*h+h-e-e-b*e-b+d+c+e)%100;
            n  = (l+d)%100;
            h += (k+l-b*e-j-f*f*j)%100;
            c += (e+b+i-f-c)%100;
            l -= (d-f+i-j)%100;
         }
         break;

         default:
         {
            e += (l-e+h-i-g+l-b)%100;
            h  = (j-f-g+m)%100;
            e += (c+h-e*k+f*j-b-e-b*c-d-h)%100;
            b += (g+m+i+e+a+i-m-b*b+i-m+j)%100;
         }
         }

         d -= (d-b)%100;
         m -= (m+d)%100;
         b += (k+c-j-b)%100;
         e -= (d+e-d-d-c-g+h+c-d+k)%100;
         e -= (f+c-m-g+g)%100;
      }
      a -= (n*e+g+k-n*a-b)%100;
      k -= (g+e)%100;
   } while( ++DOcnt[22]%5 );
   c -= (k-e*a*n+n)%100;
   n -= (d-n*a*d)%100;
   m += (f-n-i-m-k-f)%100;
   g += (l+k*f-n+a+m-a*a*l)%100;
   l += (g+k*m-g*k+h-g-j)%100;
   d  = (m-d-i+g+m-g)%100;
   m += (j-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[26]%2 )
   {
      g -= (c+f-l-c*j+g-k*l-b+k*j-i)%100;
      a += (n+m-f+d)%100;
      g += (a*k)%100;
      a += (f-f*k+f+e-j-h-a-i-h-c-g+a)%100;
      m += (a+a+e-b-h-e-k*b+e+a-g+c-j-g)%100;
      m -= (j+g-n+n-m-f+d)%100;
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
                  l += (b+l*e-k-g-e-g+h+b-h)%100;
                  i -= (j+n+a+i-m-m+i*b+j-a+b)%100;
                  i -= (g*f-j-i*b+f-n+f)%100;
                  d  = (l-g*f+i*k-b-a-c*c-n)%100;
                  f += (f-n)%100;
                  k += (d+h-h*m+l+n+g-d)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  f += (e+g*k+b-d+g-f-j-f+f)%100;
                  c += (i-f+n+n+m-l*d-k-n-k-i-l+f)%100;
                  i -= (c*k+n-g+l+k-e+g+e-e+b)%100;
                  f -= (g*b)%100;
                  e += (m-l+e+e+l*b-c)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  e -= (l*g+i-n+d+a*n)%100;
                  k += (j*h)%100;
                  h -= (d+j+h-e+f*k*l-n+c*n-f*g)%100;
                  n -= (g+b-a+e-a+g+f+b*i+e-n*i*e+e)%100;
                  j += (l-k-f+l+h+e-g-g*g-f)%100;
               }
               else
               {
                  g  = (e+h+k-m)%100;
                  f += (d-l-f+l+l-m-c)%100;
                  k += (c-k-i+d-f+h*n+h-b-i*e-f*a*g)%100;
               }
               while( ++WHILEcnt[25]%5 )
               {
                  c += (d+f)%100;
                  e -= (d-e*k-m)%100;
                  c += (m+f)%100;
                  n += (g-m)%100;
               }
            }
            do
            {
               h -= (m+g-e*e-m+c-a+d+j+j-a+l)%100;
               for( ; ++FORcnt[40]%5 ; )
               {
                  n -= (g+j+b*g*f+n+c)%100;
                  d += (b*l-b-l*c-c+h-h+n+h)%100;
                  e -= (e+f+h-g-g*d-k)%100;
                  e += (b*n+f+l*n+g-a-f+b+g+m+c)%100;
                  d += (h-e+f*j+c-d-j+f-i)%100;
               }
               
               switch( ++SWcnt[13]%3 )
               {

               case 1:
               {
                  c += (k-m-f+k-i-l*m+m-b-f-f-f-k-j)%100;
               }
               break;

               case 2:
               {
                  f += (j-h-e*j+j*e)%100;
                  e -= (n+e*f+d*k+c*i*j*l-e+b+j*a+n)%100;
               }
               break;

               default:
               {
                  e += (g*e*e-m)%100;
                  m -= (i-b-j*h+c-h+j-e+h-a+i-n-j)%100;
                  n  = (m+g-n*e)%100;
                  a -= (g-b*h+h+i+g+j+c*f+m-b)%100;
                  b += (h+k*a-g-k-c-i*k+c-a-m)%100;
               }
               }

               if( ++IFcnt[20]%10 )
               {
                  a += (h*f*m+f-a+n*m+h+a*m-h)%100;
                  k -= (d-h-h*h)%100;
                  i += (h+g*d-h+c+h-j-l+k+n-a+g)%100;
                  a += (l-l+f-l-c)%100;
               }
               g += (m-d-a*k*l+k-n+k*k)%100;
               d += (c-j-h+f+n-l+h-e-b)%100;
            } while( ++DOcnt[26]%5 );
            h  = (l+j-k+d*d+i)%100;
            l -= (n-b+d+f+h*j-n+i-n+b*f-a-d)%100;
            g -= (h-n+c*e*a+c)%100;
         } while( ++DOcnt[25]%5 );
         j -= (g*g-k-j+k+j-c+d-l-l+e-i)%100;
         g -= (l-h)%100;
         g  = (d+k+j-g+h+h+d+f+j+k+k*e-d)%100;
         l -= (g-j*f-b-l*k-e*g*n+i-f-m+b)%100;
      }
      l -= (m+b-b+g+e+c*a+h)%100;
      m += (a+n-b+e+k*d-g-h-m*j*g-a)%100;
      f += (g+c+b*b+g*n*a)%100;
      b += (d+l-j+k+b-m*n*f-e)%100;
      m += (g+b)%100;
   }
   n -= (b*k-n*l+a-g-l-d+l+e)%100;
   b  = (l+m)%100;
   l += (j-e+h+a+e)%100;
   c -= (c-j+i+d+g)%100;
   m  = (i+j-a+e*a*k-i)%100;
   e -= (c*l-e-d+l-j*j+l-b)%100;
   g += (a+d-a+c*n+f*n-j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F13(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[29]%2 )
   {
      b += (h-l-a*d+a-a-n+k-j+h-c-n+m)%100;
      b  = (a+b+e+i-g+l+c-g+e-j+l)%100;
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
                  l  = (b*g+a-b+i-n-e+g*i)%100;
                  h += (a+m*b+g-h+a*e-e*f+n+l-g-h+m)%100;
                  h += (i+c-f-f)%100;
                  e += (e+b+j)%100;
                  l += (d-a*c-h+b*n-n+b*a*f+n-c)%100;
                  n += (k*k+n-l*e-e+c)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  a -= (h-m-f+g+m-k+c-j)%100;
                  d += (c*f-j)%100;
                  f -= (n-f*j-j-c+l-j+h+b+e*a-i-h-j)%100;
                  g -= (c-f-g-g-f-m-m+k-c+k+j-g)%100;
                  c += (k-e+m-m-d+i+k-c)%100;
               }
               else
               {
                  a -= (d+l+g+m)%100;
                  f += (a+h*b+d+c-a+k)%100;
                  k -= (i-h+b-d*j-a*b-f*n-n-l+b*m-j)%100;
                  k += (f*c-a*b+d-e+i-m+f)%100;
                  e -= (a+l-m-j-a+a-c-h-j)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  e += (a-f-e-c-i*b+c-c-a+n)%100;
                  g -= (k-a-m*h-d-l)%100;
                  b -= (f+d+l-d-l-m*a+b-a)%100;
                  l += (b+c+k-a-j+d*m+j-c-l-c-g-i)%100;
               }
               do
               {
                  c -= (a*i+j-h*i*h+b+n+j-n+j-k*j-i)%100;
                  e += (c+b-l+f*d+m)%100;
                  d += (m+n)%100;
                  n -= (n+d+e+b*g+j*j-h+i-i+m+a)%100;
                  h += (f+c+c+i+k*c+b-g*f-l*k-i)%100;
                  n -= (e-g*e+j-d-e)%100;
               } while( ++DOcnt[28]%5 );
            }
            if( ++IFcnt[21]%10 )
            {
               n -= (h-k+l*i+g-a*l)%100;
               for( ; ++FORcnt[43]%5 ; )
               {
                  m -= (c+b-g+f+h-m-m+a-j)%100;
                  l -= (i-n+b*c-i+c+a-a)%100;
                  m -= (h*e+e+a-d)%100;
               }
               
               switch( ++SWcnt[14]%3 )
               {

               case 1:
               {
                  m  = (h-j+b+k-h-c+d-m-f)%100;
                  n -= (n-l+k-d*n+g+l*f)%100;
                  e -= (d*i*e)%100;
                  d -= (m*j+e*m-j)%100;
                  f += (d+g-j+e-j)%100;
               }
               break;

               case 2:
               {
                  l -= (j-f+h-l*h-f*h)%100;
                  h += (h+l-l)%100;
                  l  = (f-d-l+j)%100;
                  l += (c-k*g-e-j-i+n+j-b*f*m)%100;
               }
               break;

               default:
               {
                  a -= (c-h-d+i-b-k+e*k)%100;
                  b -= (c+k)%100;
                  e  = (a*m-e+c-h+g*j*a+g-e+l+c)%100;
                  d -= (g*e+j*n-m+a+i*i+g*e+g+j)%100;
                  i += (f-c-c+c-f)%100;
                  e  = (n+c+d-f-k-i)%100;
               }
               }

               if( ++IFEcnt[28]%2 )
               {
                  a -= (e-l+j-m+h+k+d*h-l+j-m*g+m)%100;
               }
               else
               {
                  h += (e-f*b+k*l-g*e-g-m-d*e)%100;
                  h -= (a-g-i-c-f+a+e+k-g*l*h-e*h+l)%100;
                  b += (k-b+i-l)%100;
                  k  = (l-l)%100;
                  a -= (a-b-d-k-k-c+f+m-c+l+n*b)%100;
               }
               g += (h-k*k-c+g+b-n-a-h+c)%100;
            }
            f  = (a-e+j-h*h*a+i-h*e+j*h)%100;
            a -= (a-f*d+c*i-h*k+f+m)%100;
            e += (h-b+f+f-f)%100;
         } while( ++DOcnt[27]%5 );
         e += (b-e)%100;
         h -= (c-m-k-h+d-e*k-h*h*d*j+n*n)%100;
      }
      d -= (h*n-n+j+i*k)%100;
      m -= (j-k+a+l+n*g-e+h+d+m)%100;
      h -= (g+e+l*h+j*a-h*h-k+b*b-k+e)%100;
      e += (l*h-l+e-f+d*f-k)%100;
   }
   c  = (i-m*c-k+k-l-k-i+d-f-e)%100;
   b -= (j+d)%100;
   a -= (f+g)%100;
   c += (e-g+c-l+b-h-i*m+i+l)%100;
   n += (n+d+c-a-b+i+f-g)%100;
   f += (a+i-n+g-k+i)%100;
   h += (c+f-m-a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<33; I++) IFcnt[I]   =0;
   for(I=0; I<44; I++) IFEcnt[I]  =0;
   for(I=0; I<22; I++) SWcnt[I]   =0;
   for(I=0; I<44; I++) WHILEcnt[I]=0;
   for(I=0; I<44; I++) DOcnt[I]   =0;
   for(I=0; I<67; I++) FORcnt[I]  =0;
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

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      while( ++WHILEcnt[30]%5 )
      {
         do
         {
            for( ; ++FORcnt[45]%5 ; )
            {
               if( ++IFcnt[22]%10 )
               {
                  c -= (e+g-j+i)%100;
                  k -= (n-b*g+k-h-j)%100;
                  l += (f-n*m)%100;
                  b += (b-c*b*j-m+h+g+l*f-n+k*j+l)%100;
                  a += (k+j)%100;
               }
               for( ; ++FORcnt[44]%5 ; )
               {
                  l -= (g+a-i-i+b-k-e+e-m-h-b+i+c+k)%100;
                  c += (k*e+l+i*j-d-i-a-j+j-j)%100;
                  n -= (e*l+a-l-j)%100;
               }
               if( ++IFEcnt[30]%2 )
               {
                  h += (i*e*l-a)%100;
                  f -= (d+f+n-h*k*h-b+i+n+i)%100;
                  k -= (a+f*b+g-l*h-e)%100;
                  i -= (f-j-e)%100;
               }
               else
               {
                  a += (i+h-l-a-b-f+n+a-a-m+c-f+n-e)%100;
                  h -= (b*c-b-m+d*b-j-g)%100;
                  i -= (g-l-h+d*g*f*h-d+e)%100;
                  j  = (k-l-f*h+h+m+g-g*a)%100;
                  e -= (j*d+j-c-g*b-b+h+i+h)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  l -= (i*i+d)%100;
                  j -= (g+i)%100;
                  e += (k+a*d-f+c*i*g+k*a-d+n*f)%100;
                  j += (a+b-c+m)%100;
                  m -= (f*n+m+b+m-g+k-i)%100;
                  b -= (c*n-k+j+h*g-g+k-e)%100;
               }
               b -= (k-h-h-c+b-d-g-j*k+c-c-b-h)%100;
               f += (j-m-h-i)%100;
            }
            i -= (l*k-g-n+k-j+l-c*j)%100;
            m -= (l*n-g)%100;
            n -= (a+n*l+k*k-d*g*m-g+d-f)%100;
         } while( ++DOcnt[29]%5 );
         i += (n+k-d-g*l-m+f)%100;
         k += (l-c)%100;
         a -= (i-f-e-l+f*m*n+b+b*e)%100;
         k -= (k+l-f*a-n+a-j*j+m+b+i+c*i)%100;
      }
      f -= (b+a+i+d-j*g-l*g+b)%100;
      n += (g+g)%100;
      d -= (k+j*l-h*n+f+n+i+l*m)%100;
      k += (c*g-d+n*h*k-n*e*d+f+l)%100;
      n -= (h-b*k)%100;
      k -= (d-b+m*h)%100;
      n += (f-i+n-h+d+b*i+i+i+a-i)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<23; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 23 << "   Dynamic = " << sum ;
   for(I=sum=0; I<31; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 31 << "   Dynamic = " << sum ;
   for(I=sum=0; I<15; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 15 << "   Dynamic = " << sum ;
   for(I=sum=0; I<31; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 31 << "   Dynamic = " << sum ;
   for(I=sum=0; I<30; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 30 << "   Dynamic = " << sum ;
   for(I=sum=0; I<46; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 46 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}