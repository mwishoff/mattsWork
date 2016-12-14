#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[110],IFEcnt[147],SWcnt[73],WHILEcnt[147],DOcnt[147],FORcnt[220];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         i += (e+g-i+d+b+g-k-a+m+a+b-n)%100;
         n -= (d+g+k+b-b+b+c+j-f-m-m-n-d-n)%100;
         m += (h-b+e*h-k*a+e+f-i+n+h)%100;
         d -= (i*g*d+m-i*g-m+h-e+l-l-d-e-i)%100;
         n -= (k*d)%100;
         m += (e-i*f+n+n-n+a*e-g+g+a+n-c)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  i -= (c-c+a-e+d-f)%100;
                  l += (i-g*j-m-l-d-d+e-m-b)%100;
                  h -= (m*b)%100;
               }
               h += (g*c)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  m += (j-m+k-f)%100;
                  b -= (d+k*g+g-m+c+l-k)%100;
                  n += (h-n+i+k*b+k*g)%100;
                  g -= (m-f+j)%100;
                  b += (b*l-h*d+j+n*f*f-h-f+h-n)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  c -= (j-b+d-b-i+g+j)%100;
                  c += (h+k-a*l*a-m*k-d)%100;
                  b -= (c*b*a-l+a+f+j-m-e+e-e*f-e-i)%100;
                  i -= (g*c)%100;
               }
               break;

               case 2:
               {
                  k += (a*b+d+i*g-c-j)%100;
                  l -= (d*g-b)%100;
                  l += (f+a+e-k+a+f*n+d-m+a*c)%100;
                  f += (g-e-n-k)%100;
                  m -= (m-f-d-d-j-h-c)%100;
                  g -= (l+k-g)%100;
               }
               break;

               default:
               {
                  b += (j-c*m-g-e-m-l+f)%100;
                  a += (l+l)%100;
                  b -= (a+i+j*j+a)%100;
                  d -= (k*d)%100;
                  e -= (j-l+j-a-n*d-c+j+c-g-a+d+k*d)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  b -= (c*h+h*l+j+d+m+h+d)%100;
                  b += (k*j+n*g-g*h)%100;
               }
               else
               {
                  b += (e-l+e*j+b+k+e*l-b+g)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  i += (n+f+h+k+g-j*j*n+g-m+n)%100;
                  d  = (l+i-j+m)%100;
                  e += (j+b+i-g+k)%100;
                  c -= (f-b-j+m+k-k)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  d -= (j-g-l+g-i+c-n*g+j-m*f)%100;
                  j += (c*i*e-c-m+a)%100;
                  d -= (m+h+a)%100;
                  k -= (b+d-j+g+n*g+i-h-c-c*i-h+e)%100;
                  j += (b+c+l+j-a*a+h-b*f-b-g-b+l*c)%100;
                  j -= (d+f+h-j+k*l-e+b-g+k-n)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  h -= (f-i-b*n+h*e+b*c-c+c+g)%100;
                  i += (k-f-f-h-a-a-m-c-l+i)%100;
                  d -= (k*b+a-k-f*i+h-a)%100;
                  h -= (i-m+d+n)%100;
                  m -= (d+n-n-e+i+k+c+j-l*k+b*d)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  k += (j-i-g+a)%100;
                  a += (a-k+d)%100;
                  m += (l-d)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  a -= (f-f-k-l)%100;
                  j += (b-a*d*k*n-h+a+j+k-g*f*n+l)%100;
                  f -= (g-d-d)%100;
                  n += (j*f)%100;
               }
               else
               {
                  f += (g*g+f*j-b+e-c*g-k+h-k)%100;
                  k += (c*f+m-l*a+a-h)%100;
                  i -= (b*f*a+c-e*m*j+k-h-i+c+c)%100;
                  e -= (c+j+h-j-f-m-l+g-l-i+l*a)%100;
                  j += (b-n-f*n+n+f+a-i+g-h-c-e)%100;
               }
            }
            i += (g+i+g)%100;
            h -= (c-f)%100;
            n += (g+a-c-i+c-f-n+n-b-a-h)%100;
            a += (k+j)%100;
         }
         i -= (f+k-f*a+c-c-h+d)%100;
         l += (a+j)%100;
         l += (e+j+f+d+j-j+c-a-g*a-n)%100;
      }
      d -= (b+e-d-c+h*j+l-c+e)%100;
      h += (d-j-k*a+a-e-n-b)%100;
      l += (f-g-a-a-f-g+a+f-j-i-i)%100;
      j += (n-l+n+d+m-k-l*k+g+m)%100;
   }
   c  = (d+n*a-l*n-c+g*c+n+k*g*l+n)%100;
   n -= (m+b+e*n*k+j+d)%100;
   b -= (f+n+b*h+n)%100;
   b += (b+d+j-i-i*g-l+d+i+d-m+e)%100;
   e  = (m+d-j)%100;
   f -= (h+n+h)%100;
   k += (f-f+b-c+n+d*d+e)%100;
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
         l -= (j-a+g-m*c*l-l)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%3 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  f -= (a+l*f)%100;
                  i += (d-h+j-e+n-j+l+h+h+d*e-a-c)%100;
                  h += (b+c)%100;
                  e += (c+l+m)%100;
                  j -= (d*l*d+e-f+l-b+m*g-i+e+l)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  h -= (i-l+f)%100;
                  c -= (l-b-m+n*n+c-e*j+j-a+h+e+a+c)%100;
                  m -= (n-n+f*m-g*a+f-d-l-f*f-k-h+j)%100;
                  n += (g*j)%100;
                  m += (m+d*j-d-i+b+g*k*j*h)%100;
               }
               else
               {
                  f -= (n+a-j)%100;
                  h  = (c*a+h+h+g-e+l-a-i+d*k+m-b+f)%100;
                  f += (a-g+c)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  h -= (e+n*h+l-k+k-m+g+f-c+d-d)%100;
                  i += (i-l*k+f*m+g-a+j-d*g-n)%100;
                  n += (c-e+l+g)%100;
                  c += (n+k-c-c-m-f-j*f+i-i-g+j*m-e)%100;
               }
               do
               {
                  c -= (i-m+b+j+i+j+h)%100;
                  a -= (j-i-c+c+f-b)%100;
                  c -= (l+m+f-g+m*k)%100;
                  h += (h+f+h)%100;
                  e -= (b+l-i+m)%100;
                  k += (m-m)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  d  = (g+a+d)%100;
                  g  = (m+d-e+b+a+e)%100;
                  n -= (d-i*c+j+i-b+g-e*k-g*i+a-j*m)%100;
                  h += (h+b-j+n+n-d*h-g+j-a)%100;
                  n -= (f-g-f*m+i+c*g*d+c*h+f)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  e -= (a*g+e*k*d+m-m*j-d-h-i)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  h -= (f*f+f+k*d-b*n)%100;
                  e -= (m*b)%100;
                  h -= (h+j+b+c*d+m+b)%100;
                  f += (k*j*n*f-g)%100;
               }
               else
               {
                  h  = (b-l)%100;
                  e += (i-g-g*l+f+g*f+g+d)%100;
                  c -= (l+b*a+f*a-e+i+c-g)%100;
                  d += (i+j+k-m-n)%100;
                  f -= (j-g*k*e*m*h-b)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  l += (d-j-g+a*h-b)%100;
                  a -= (e+b+j-d+m-b-d-c+b)%100;
                  i += (f+c*l)%100;
                  a += (j+k+k+m-b*m-i-k+k)%100;
                  e += (i-l+a-j*l+l+i)%100;
                  e  = (h*m-j*c*f-d-b)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  d += (b+e+j*l)%100;
                  l -= (l-h*d-i+b-a-l-j+c*m+m+j)%100;
                  f -= (j+n-k)%100;
               } while( ++DOcnt[4]%5 );
               d -= (g-l-d+a+c-d)%100;
               b -= (n-n-n-n-l+j+d+n-j+a+f-d-j)%100;
               n += (d+c+i+k+i+e-e+n+k*c+d-c)%100;
               l -= (n+m+e+f+j+j)%100;
            }
            }

            g -= (n+j+i-m+m)%100;
            d -= (l-c-n*a+k*c*d-n-d*j+n-b-l+c)%100;
            m  = (d+d+e-m-h+m+i-i*j)%100;
         }
         g -= (b+c-j-h+j*l+c*c)%100;
         h -= (b-c+e+c-h-d-f*b-m+e+a+f+h)%100;
         j -= (a-j+g+f+f)%100;
      } while( ++DOcnt[2]%5 );
      c -= (l-k*k-l-g-g-g+k-l)%100;
      l += (j-a*n-g-g)%100;
      n += (k+l+n+f-i+i)%100;
      j += (h-f+h*m-n+i+m-i-d+i+a-e-b)%100;
   }
   l -= (g-n+j)%100;
   m  = (d-e-n+b)%100;
   b += (m-h+a*b-e*c+l)%100;
   c  = (l*j*b*m+l*i+e*k)%100;
   g += (i+d+e)%100;
   e += (d*d+m+a+h*f*j-g+l+b*d+j-f-m)%100;
   g += (c+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[5]%10 )
   {
      b -= (a+i-b*n-d-c)%100;
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
                  m -= (f+h-h-k+l-m+n+m*e*e-a+m)%100;
                  i -= (h*f+m+n-f+d+l+g)%100;
                  f += (c*e+b+a*a-d-l+b+j-l)%100;
                  a -= (i-h)%100;
                  i -= (a+h+h*c*i-g-n-e-d+g-g)%100;
                  k  = (b+j-n-g+a-a)%100;
               }
               else
               {
                  c -= (b+j+g-d-n)%100;
                  l  = (m-e+f-h-j-f-m+c)%100;
                  b += (j+k+l-f-e-c+d*l-a+n+d)%100;
                  b += (h+g-k-d+c)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  m -= (j*g+b-n*n-e-g+i-c*n)%100;
                  k += (m*a)%100;
                  m += (j+i+e+h+b+b-c-f+n-f-d*m*h+m)%100;
                  k -= (n+i-a+k*c-m*j-f)%100;
                  l += (i+l)%100;
               }
               do
               {
                  f -= (l-e*b)%100;
               } while( ++DOcnt[6]%5 );
               i -= (e+a+b-a-e+i)%100;
               for( ; ++FORcnt[9]%5 ; )
               {
                  f += (l-g-n+j-m-e+e+g-k*b)%100;
                  j  = (g+b*b*b)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  k += (f*g-i+c*j+e)%100;
                  a += (c-c-h+i-h*a-i-m-g*d*j)%100;
                  l -= (i-k+d-f+d)%100;
                  i  = (n+m+m-d*j+e*k+f-d+b*d+g+b-n)%100;
                  l  = (b-k+l)%100;
               }
               do
               {
                  h += (h*b-d)%100;
                  h += (l-g+g-k-l-a-h+l*d)%100;
                  b -= (k+m+g-e-i-n+m+m+a+n)%100;
                  f += (n-j*i+e*e-f-j-a+i+d)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  j += (g+b+k+d-l-n+m)%100;
                  h += (l+g*n+h-m+i*n*e*f-l)%100;
                  f -= (g+m*f+h+l-f+c+m)%100;
                  m += (j*g*e*m-j-l+k+k+i*f-h)%100;
                  i += (m+h+j-f-d-h-k-g)%100;
                  n -= (j-g-m-d+b-g-n*d*l-f+c)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  c -= (a*l+h+k+f-a)%100;
                  c += (l+f+b+e)%100;
                  c -= (k*c+i+i+f+h+g)%100;
                  e -= (j-i+e*k-h+f+b*j+j-i*k-h*c-k)%100;
                  k  = (g+i)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  g += (l+a*i-f-g-n+i-b+m+h)%100;
                  j += (i-h*g*g-l-b-e*j+n*d)%100;
                  e += (l*k)%100;
               }
            }
            
            switch( ++SWcnt[3]%3 )
            {

            case 1:
            {
               if( ++IFcnt[4]%10 )
               {
                  m += (j+h-l+a*i-d*e+m-i+d)%100;
                  d += (e+f-a+b+g+j*n+h*a+e*m-l*g)%100;
                  d -= (b*l*j*m-h+k+l-c*h*f*d-k-m)%100;
                  a -= (h*i*b-m+d+h)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  i -= (n-n+i+b-e-i*k*f)%100;
                  c -= (j+n)%100;
                  a += (l-e)%100;
                  b += (e-k)%100;
                  f -= (j*e*c+n+i+k+j*j)%100;
               }
               else
               {
                  n += (m-h-g+c-k+c+g-n-d-b)%100;
                  c += (k-k*h-f)%100;
                  e += (c-e-f-g)%100;
                  e -= (e-n+k-m+i-i)%100;
                  l  = (n+m+n+e-e*h*m-g-j+i-j)%100;
                  i += (n+g*b+c+f+h-i-c*e+m-h+g+e)%100;
               }
               j -= (h*c+d+a+j-e)%100;
               e += (g+n+a+n-h+j-b+i)%100;
               c  = (i*k+h-j*d+c-g*n-f-j+l+c*d)%100;
            }
            break;

            case 2:
            {
               n -= (d+k*h+a+a)%100;
               e -= (j+c-i-h-h+d+f+i*b+f+j+f)%100;
               d += (h+f+g+d-b+i-g*l-l*i+j+k)%100;
            }
            break;

            default:
            {
               m -= (j-k+k-i*k+f)%100;
               m -= (l-g*b+g+f-a-a+k)%100;
               c += (m-b*c-a*j+n+m+h+k+m+e+a*k-b)%100;
               a += (m+g+d+e)%100;
               m -= (l-j)%100;
            }
            }

            c  = (h*j+n-l+m*l-i-l+d+c)%100;
            h -= (n-n+f-b+e-j+k)%100;
            l -= (n+h-a-g+j-h-m+m+n+b-b-b*k)%100;
            a -= (i-n*g-n)%100;
         }
         break;

         case 2:
         {
            k -= (d+g*k-g-k+e*g)%100;
            i += (m-c-d-e-m-e-c+b*l+b)%100;
            k += (g+g-i*g*l)%100;
            g -= (f-d+f+l+j+i+g+h+i-l+b+g-c)%100;
         }
         break;

         default:
         {
            c  = (m+h+j-a-b-j*d+m-i+d-g-a)%100;
            f -= (k+f-l+j+h*i*m-m*l-j+h)%100;
            d += (h-e-b+d*m)%100;
            m -= (d-j-l+h*c*c-h-a+j)%100;
            h += (h*n*h)%100;
            i -= (h+e+d-d+i)%100;
         }
         }

         m -= (a-a)%100;
         n += (h-d+m*d-i)%100;
         a += (c+h+h-e*n-m+i+b+g+c+n)%100;
      }
      d -= (e-d)%100;
      i -= (l*g)%100;
      l += (c+i*f-l+e*k+a-f)%100;
   }
   b += (i+n+b-e-m-i-k+c+n-d)%100;
   i += (l+d+h+a*i-b-h+d+b+n-j*m)%100;
   d += (b*n+f+f+l-k*f)%100;
   i -= (i+d-n+d+f*k+k+c+c-d*m*d-i)%100;
   b -= (i-l-a-n+l-f+a+c*e-c)%100;
   d  = (e+e+d+m*m-m*n+g)%100;
   k += (a*e)%100;
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
                  l -= (b+n-j-a-b-d-h-e-l-e+g-m+k+c)%100;
                  i  = (m-m+k-b+b+h*a-n*i)%100;
                  f -= (f-m*h-n-h-e+i-c-f-n*j*e+f)%100;
               }
               else
               {
                  c -= (l*k-k+a+j-h*c+l+j)%100;
                  b -= (k*a-n+i+f-h+d*l-g+j+e-e-g)%100;
                  g -= (g-b+f+h-a*k+k*e+n-b+e-m-l)%100;
                  n -= (c*j+m*c*j+c*f*d+g+e+m+m)%100;
                  n -= (i+l*j-a+n+g+e+l+l+a)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  i += (k*m+n+m*k*h-j-d)%100;
                  j += (b*g-k+h)%100;
                  b  = (l-a)%100;
                  n -= (b-j)%100;
                  d -= (n-g+f-g*m+h*c+h-c*m+g*a+i*d)%100;
               }
               do
               {
                  n += (l*m+d-h-i+j)%100;
                  c  = (d+d+f-c-c-j+k-h-n+f-a*j-b)%100;
                  e -= (d+g-l*f+n+h-f+d-b+e-a)%100;
                  a  = (k-g+i-d+f*f+h)%100;
               } while( ++DOcnt[8]%5 );
               if( ++IFcnt[6]%10 )
               {
                  a += (n*a*g-m-h-j-a-b+f-l-m*k+i-l)%100;
                  c -= (c-a*k+j+n*i*a-a+b+c-b)%100;
                  e -= (e*j-a-j-d-b*f+d+i*n-f*f-i)%100;
                  n -= (d+m*k+m+f+l+g+j*g-l+i+g+f)%100;
                  c += (f-b+f+i-g+h+f-d*c)%100;
                  d -= (c+f-j-g+f*b*j-l*n*i+j+d*e*l)%100;
               }
               h += (c+f+c*e*k*e+j-b+g-k)%100;
               for( ; ++FORcnt[11]%5 ; )
               {
                  l += (e+e*j+n+m)%100;
                  i += (d+a-k+a+g+g-j+k-l+d-f+j-l-h)%100;
                  e -= (n+f+h)%100;
                  k += (h*e-l)%100;
                  c  = (g+h)%100;
               }
            }
            
            switch( ++SWcnt[4]%4 )
            {

            case 1:
            {
               a += (m*j-h+e-k*d*m-l-f-c)%100;
            }
            break;

            case 2:
            {
               l -= (n*g*a-h)%100;
               b += (e-l-d+h+c-m*g+b-n)%100;
            }
            break;

            case 3:
            {
               f -= (k+b+e-e+n+e-j-m)%100;
               l -= (l-k+d-h+a)%100;
               c += (l+g*b-n+n*l*d+f-h-g+h+f+k)%100;
               e -= (d+c+l*l-m*g+f)%100;
               k  = (n+l-b-n*n-m*j*k*f+i)%100;
            }
            break;

            default:
            {
               k += (f*d*a+l-e-i-l+m*l)%100;
               l -= (c+n+h*k-m)%100;
               n += (f-d-f-a+l+f*c+b+h-b+f+f)%100;
               e += (c*l+j*m-k-j-f+a-d+m+h+c)%100;
            }
            }

            c += (g*i-g*g-l+n)%100;
            c -= (j+i+i+h-h*l+d-d-i-b-g-e-c)%100;
         }
         d += (b-d-d+j+f-m-g)%100;
         f += (h+j-m*h)%100;
         a += (n*k-h+f-e-b-e*i*h+i-m-a)%100;
         i += (d+d+n-h-m-n)%100;
      } while( ++DOcnt[7]%5 );
      m += (k-j+h*c-f+k*h-d-e+f*j-j)%100;
      f  = (g-b*m-e*i-m+l-d+k*b*d+d+n+i)%100;
      g += (c+d-d+l-k)%100;
      b -= (n+d-e+c-h)%100;
   }
   k += (j-l-g+k*c-b-e+k+k-f)%100;
   f -= (c-b+k-a*k+k+j*j)%100;
   d += (b*b*c-f-j+h+g*g+k+d*l-j+d)%100;
   n += (k+d+n-d*b-h*i-h+j+e)%100;
   k += (l+e)%100;
   e  = (g+b+k)%100;
   i += (m+b*k+c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[10]%2 )
   {
      e -= (h-k*l*f-n+d+e-g-j+j-a)%100;
      a -= (d*f+e-n+m*d-b*c+d+i+l+a-n-l)%100;
      d -= (g*b-b+f-e)%100;
      n -= (a+i+m-n)%100;
      g -= (m+j*f-g+b-b)%100;
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
                  m += (e*j-d+j-d*m)%100;
                  k -= (g-k)%100;
                  b += (a*g+e+f+d+b-j+d-l-d-f-d+c+f)%100;
                  f -= (b+c-n)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  m -= (n+e+b-h*e*i+g+a*k+b+d-f-d-n)%100;
                  k += (j+n+i-c-f+b)%100;
                  j += (c-g-h+b+k*g-i-b-i+d+f+b)%100;
                  k += (g+i-g-h-e-f+f-d-l-e-i+h+f-n)%100;
                  h -= (c+l+l+g-c-i-l*e+e-n)%100;
                  g -= (k-i-n-i)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  d -= (e+g-j*c+g+k+h-a-h+n*a*n-m-a)%100;
                  i  = (i-b+k-b+k+e+h+i)%100;
                  e += (g*d-e*b+l+a-m+d-l+d+c)%100;
                  k -= (i+i-b+d-n)%100;
                  l += (g*l+i*m+a*f-b+l)%100;
               }
               else
               {
                  e += (h-f)%100;
                  k -= (g-h+h+l-f)%100;
                  g += (j+i+f+b-d)%100;
                  d += (l+l-m+l+e*i)%100;
                  d -= (j+d-a*e+n*i+m+i-m*h-f+e)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  l -= (c+f+d+f-g-b-j-g+a+a+d)%100;
                  m += (a-h-a-f+b+g*n+f)%100;
                  e  = (d*g)%100;
                  n -= (j+a+n-e*f-k-k*l)%100;
               }
               do
               {
                  d += (d+c)%100;
                  n += (j-l+a+b-b-h*h+k*i-g-b)%100;
                  f += (j+h+f-c-b+i-n)%100;
                  l -= (j-j+a)%100;
                  l -= (g+c-j-n-g*l*n+f-c)%100;
                  k += (e+c+m+f+k+a-l*i+d*n-j)%100;
               } while( ++DOcnt[10]%5 );
            }
            n += (j-e+f*h-k*f+a-e+g-i+d*c)%100;
            for( ; ++FORcnt[16]%5 ; )
            {
               
               switch( ++SWcnt[5]%4 )
               {

               case 1:
               {
                  c += (i-e)%100;
                  n -= (i*b*a-i-b+i-d-m)%100;
                  m += (j+m+m)%100;
               }
               break;

               case 2:
               {
                  b -= (i-b-j+e-c*g-e-n+g+n+n+j+i-j)%100;
                  a -= (c+a-m+g+a-i-k-j+f)%100;
                  d += (f+g+j-c*g+i+g)%100;
                  i -= (a-g-d-l-k+m-e-j-h+a+m-g-i*n)%100;
                  b += (l*d*n)%100;
               }
               break;

               case 3:
               {
                  l -= (d-e)%100;
                  g += (h-n-i+j*g+k+i-i+b+c-m-j+k)%100;
                  h -= (b+f-m+c)%100;
                  h += (a+f)%100;
               }
               break;

               default:
               {
                  h -= (f-i+a*d-e-m-b-j+b-b*b-c)%100;
                  m += (h+i)%100;
                  l -= (e-f-b+a-m-l-n-m)%100;
                  d += (h+a+f-n+f+c+k-h*a)%100;
                  e += (c+b-e+j+j*e+e+k-b-j*k+i)%100;
                  c -= (a*b*f-d*b+j-a-j-f+k+k+n-b)%100;
               }
               }

               n += (i-k-i*k-k-c)%100;
               g += (d-n+k+l*k*m-k)%100;
               m += (n-g+n*e-e-h-g)%100;
               f -= (f-c*b-l-f-d-d+c-m)%100;
            }
         } while( ++DOcnt[9]%5 );
         d -= (i-b+i+f+f+f*b-g-k+g+g-h-l-i)%100;
         k += (b-h)%100;
         c -= (f-b+a+b-m*l+m+n-e*a)%100;
         h -= (g+m-l+h-a+m)%100;
      }
      g += (j-h+m-c*f*a+k+n+f-f*m-l*g-l)%100;
      g += (k+n-i)%100;
      d += (l-l-k*b+e+a-e+j-c-b-i-a+j)%100;
      a -= (f-k*i+a+i-n-l+l*j-f-l)%100;
      g -= (g+f+m+b-d+c+h-j+f)%100;
   }
   n += (h+j-m-k-n-f-d)%100;
   n += (l-k+d)%100;
   l += (c-e-d+i*f)%100;
   d -= (m*g*g+n-c+i+a+h+a*l+m+f+n)%100;
   a += (n+l-i-a+n*h+a)%100;
   k -= (j+j-l-f-a+f+l+m-i-c+j*c)%100;
   m -= (j*g*e-l+k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F6(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[9]%10 )
   {
      if( ++IFEcnt[12]%2 )
      {
         m -= (m+m+i-b-j*a-i-l-a-h+c-n-m)%100;
         c  = (j-i-i+a*j+c+k-j*n+c)%100;
         k -= (f+m*i*j-f-h+g)%100;
      }
      else
      {
         while( ++WHILEcnt[12]%5 )
         {
            do
            {
               for( ; ++FORcnt[17]%5 ; )
               {
                  i -= (n+a-i-f-i)%100;
                  j -= (b+f)%100;
                  e += (c-a-e+a+m-a+g+l-a+l)%100;
                  m -= (b+n+k)%100;
                  i -= (j-f+d*e+g*n+j+l+c-n+a-d)%100;
                  n -= (i+n+i-e+m-e+m+b+k+b-i*m-i)%100;
               }
               for( ; ++FORcnt[18]%5 ; )
               {
                  h -= (m-j*l+d-g)%100;
                  e  = (c+k+i-n-i-d-c*l+b+e-c)%100;
                  i += (k*e-d*m*d+j+f+i)%100;
                  h -= (n-k)%100;
                  b -= (i-e-a+c+l-a+k)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  j += (a-h+h-b-f-k+i)%100;
                  f += (k+f-d-c-f+h)%100;
                  f += (e+c-k+d+a)%100;
                  l += (l-m)%100;
                  m += (d+n*n-f*e-n+i*k+i-n-k-d)%100;
               }
               else
               {
                  d += (h+e+g+m+e*m*b+k+f+c-c-k)%100;
                  i  = (c-h*c*l-a-f-m*a)%100;
                  h += (i+h-n-j+j-b)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  g -= (k-g+c-m+l*h*i-f+l+d-m-j-b+a)%100;
                  f -= (d-e-c-j-c-g+e)%100;
                  f -= (d-m)%100;
                  f -= (l-j-h*c-h*g*h+n*e-g+d+n-b)%100;
               }
            } while( ++DOcnt[11]%5 );
            do
            {
               if( ++IFcnt[8]%10 )
               {
                  i += (j-m)%100;
                  a += (c*m-f*g+a*g)%100;
                  e += (e+n-c-c-c+c+k*h+a+k-l*h)%100;
                  k += (f*a*l-g*i)%100;
                  n += (f*m*i+i-i-j*c*b)%100;
               }
               f -= (j+n*b-m+b-e+j+g+l+d-f-n-a-i)%100;
               for( ; ++FORcnt[19]%5 ; )
               {
                  c -= (c+n-i-d+g-g+e-i+h-a*n+d-a)%100;
                  h += (d+c-e+a)%100;
                  a  = (g-f*h+c+l*j*e*k-i-g-j*j+n)%100;
                  k += (n*a)%100;
                  n += (c*j)%100;
               }
               
               switch( ++SWcnt[6]%3 )
               {

               case 1:
               {
                  j += (b+j+f+h+e-g+c+e*j+e)%100;
                  e -= (f+e)%100;
                  e += (f-a-j-a+i+g*c-j+k)%100;
                  l += (c+e)%100;
               }
               break;

               case 2:
               {
                  h += (l-c)%100;
                  m += (c*m)%100;
                  a -= (c*d*f-c+m-f-d+d*c)%100;
                  c -= (g-k*n+h+l-k+b*j)%100;
                  k += (n-k+n+l*m+e-f-l)%100;
                  i += (g-d-l+m-h*b+m+h-c*g+b+l-l)%100;
               }
               break;

               default:
               {
                  m -= (h-g)%100;
                  d  = (d*f)%100;
                  n -= (f+n-e*k-n-n+f)%100;
                  c += (i+e-b-k*h+b+n-e-k-g-f+g-b-d)%100;
                  c += (k-n-m-c)%100;
               }
               }

               h += (l+a-g*j-a+b+l-f*g+f-e-a*h)%100;
               e -= (n+l*h+e*h-m*f*h+j+j-g+c-g)%100;
            } while( ++DOcnt[12]%5 );
            j += (b-k*i*k+d+n-k+d-a-k+n+c)%100;
            h -= (j-h-f-b-a)%100;
            a += (d*h-l-j-h*l+b*b-d*d+e+e-k-n)%100;
         }
         f -= (c+e+b-b+i-j-c+d*a-j+h+m*a)%100;
      }
   }
   n -= (j*k-c+e-k*f+h-c*j-f)%100;
   g += (c-l-h+j-c-k+j-m+a*h-m)%100;
   i += (e-c+g-a)%100;
   b -= (m-e+f+e+l+m-c-b+a)%100;
   m -= (n-d)%100;
   j -= (c-j-n*i-b*g+e)%100;
   i += (i-n*l*d+f*g-e-a+k-l-c+g*j-i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F7(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[15]%2 )
   {
      i  = (c+j+f+k+m-b)%100;
      e += (d*i+h*a+a*h-h+f+k-d*g*e)%100;
      b -= (h-d)%100;
      g += (a+j*g+j-h+b-i*k)%100;
      j -= (i-g-j-j-a+a+c-b)%100;
   }
   else
   {
      while( ++WHILEcnt[14]%5 )
      {
         do
         {
            for( ; ++FORcnt[21]%5 ; )
            {
               if( ++IFcnt[10]%10 )
               {
                  l -= (b-d+a-c+h-k*l-d-f-l+i-b-h)%100;
               }
               for( ; ++FORcnt[20]%5 ; )
               {
                  d -= (j+b*n-i)%100;
                  d += (m*n-b*d+f+i-m)%100;
               }
               if( ++IFEcnt[13]%2 )
               {
                  m -= (f+h+l+b-h-d+l+l*a+f+h*g+g-e)%100;
                  c += (h+d)%100;
                  f -= (c-n-b-a-g-f-a*n*h*f)%100;
                  f += (n+n-l*n+f+a+h)%100;
               }
               else
               {
                  m -= (f-f*f+j-i)%100;
                  c -= (n+l+f+h+l)%100;
                  h -= (f+m-j-j+j)%100;
                  c  = (b-c)%100;
                  e -= (e-d+b+b*l-j-n+m+i*e+n+j-i+j)%100;
               }
               while( ++WHILEcnt[13]%5 )
               {
                  j += (j-k*m*e+f-m)%100;
                  a += (a-b-d-c*l*h+c*j*k*b-i)%100;
                  m += (l+h-f+f-j*f*h+i+n)%100;
                  k += (a*k+i+m-j+k-m*a*b+a)%100;
                  e -= (i-h+j-h*a)%100;
                  n += (e-e-c)%100;
               }
               do
               {
                  h -= (a+d-e-d+g-c*b-d+a*i-c*b+b)%100;
                  d -= (c-d-f+f*k+c*i)%100;
                  c -= (k+h*h+h-e+a)%100;
                  i += (b+k)%100;
                  b  = (d*e-d-i+f-d*n*i-n-j*i+i)%100;
               } while( ++DOcnt[14]%5 );
            }
            j += (e-l+e*k)%100;
            for( ; ++FORcnt[22]%5 ; )
            {
               
               switch( ++SWcnt[7]%4 )
               {

               case 1:
               {
                  c += (h+f*a-i-a*n-e-h+f-h)%100;
                  b += (c+l-d*a-g-h+a)%100;
                  h += (l+c+i-c-a+g+j-d-g-m+a+j-d)%100;
                  l -= (g-n-k-g-d-l-j+h-h+l-k-b+m-b)%100;
                  k += (l+l+d-f*a-k-g-h-f+i-m)%100;
               }
               break;

               case 2:
               {
                  n += (j*b)%100;
                  b -= (l-a-a-a-i)%100;
                  i -= (g-a-k-i+b-j*k+a-k-i+m+c+j)%100;
                  e  = (e+c-j+j-a-g-g)%100;
               }
               break;

               case 3:
               {
                  j -= (d-k+i-f-b)%100;
                  e += (a*f-g)%100;
                  n += (e+m+b*j)%100;
                  k += (l*g)%100;
                  d  = (m-f*h-b*i+l+m-b-l+m*m)%100;
                  i += (i*e-a+c-i+m+g*k+g*e*h+k)%100;
               }
               break;

               default:
               {
                  e += (h+b+n+j-i+h+d-m-g+d+m-e*c+l)%100;
                  b += (e+b-b-n+f-b*j-c*l-l)%100;
                  n -= (i+d+k*c-b-n-c+h-k-c)%100;
                  f += (b*e*f+i+e)%100;
                  d += (h+a+d-a+h+a-e-c-d-e*g)%100;
               }
               }

               if( ++IFcnt[11]%10 )
               {
                  g -= (j-k-f-d*f-h+l*b-c+f-b*g)%100;
                  k -= (d-f-n+c-g*i-h*n*m*m+j-a*g)%100;
                  c -= (b-h)%100;
                  i -= (c*j-k+e+e+c)%100;
                  i  = (a-e+i+e-m*l-a-m-d-a-g+i-j-c)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  g  = (l-c-a-m-m-g-c+a-e)%100;
                  f += (a*h+g-d-i+d+m+c+n+j)%100;
                  m -= (l+d-a)%100;
                  n += (n-j*k)%100;
                  n += (d*f+l*i-h)%100;
                  h += (h+k+i+d+g-h*h-h-c+i-c-h)%100;
               }
               else
               {
                  j += (b+c-a*k+b-d*f-n*k)%100;
                  a += (e+e)%100;
                  j  = (g+a+e*h*j+e+b+i-i+n+m*l*k)%100;
                  f += (k-j-e+c*i-e+f+e-f+e-c*m+i+g)%100;
               }
            }
            i += (h-b-m*e+e)%100;
            m += (a+n-a+i-l-j)%100;
            h -= (c+l-a+b-c)%100;
         } while( ++DOcnt[13]%5 );
         i -= (a+m-d*a-f)%100;
         m += (c+a+k)%100;
         j += (m*d+i-n+j-e+n)%100;
      }
      a  = (k-i-l+a+c-j-n-b-l)%100;
      h  = (i*a+h+k-e*e-j-a)%100;
      i += (e+e-f+n-n+m+n-d-j+n+m+h+d*b)%100;
      b -= (a-g+m-l+h+g-j-m+d*k)%100;
   }
   h += (f*i*d-h+h-f-e*d*i+f)%100;
   i -= (a-b+f-h-m*d+h+a)%100;
   j += (e+h*b)%100;
   i -= (e+n+b*j-m+h-g-i-c)%100;
   d += (j+i+j*e*g-c-l-a+e-n)%100;
   m += (i+g+c+e+l+a-d+h)%100;
   m += (h*f+e*l*d-i+f+m-l+c+a-l*k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F8(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[17]%5 )
   {
      do
      {
         for( ; ++FORcnt[26]%5 ; )
         {
            for( ; ++FORcnt[24]%5 ; )
            {
               if( ++IFEcnt[16]%2 )
               {
                  b += (l+e*k-k-a-a+i+b)%100;
               }
               else
               {
                  l += (i+k*h)%100;
                  g += (d*n-l+a+m*m)%100;
                  j += (f*k+n*k+n-b)%100;
                  a -= (c-n-c+f-i-m-m*c-d+e*h+a*g)%100;
                  e -= (i+d+m)%100;
               }
               while( ++WHILEcnt[15]%5 )
               {
                  i -= (h*m+i-m+h+m*m+d)%100;
                  m += (m+g-k-m+n+g*m-g-g*b-i)%100;
               }
               do
               {
                  e += (g+d*b+j+f-a-a-n+h*j*a)%100;
                  j += (c+d-h*l+f-e-k-j+d)%100;
                  n += (h+j-h-j+c)%100;
                  e -= (g+k+m+b)%100;
                  b += (k-i-j-d+l-b-l+f-g-b+a)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  d += (n-i-a+n-f*c+j+c+e-h*k*m*c)%100;
                  h += (n*m+n+m+c-b+i*j*b)%100;
                  c += (f-j+m*m-f-m)%100;
                  j += (j*b*f+h-f-c)%100;
               }
               e -= (h-h-i-j-l-l-l+g*d+g-c+d-h)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  m += (j-g*e*m*g)%100;
                  l -= (n+c-k*c-f-d+e+h+c+b+k+e+i)%100;
                  i += (d-h-a+l+k+l)%100;
                  h += (j*e-h-i*g+l-e*k)%100;
                  i -= (a-g)%100;
                  c += (j+n-m-n-n-a+d-d-b-j+m)%100;
               }
            }
            
            switch( ++SWcnt[8]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[17]%2 )
               {
                  g += (i-e+b*i-a+b+e*d-k*j-h+c+e)%100;
                  n += (g+m+i-n-e)%100;
                  g += (f-c-e+e+d-l)%100;
                  e += (j-n)%100;
                  c -= (i+n)%100;
               }
               else
               {
                  i += (c-i-h*n+a)%100;
                  e  = (n-b-d+d)%100;
                  h -= (a-a*n-m+n-g*b-k)%100;
               }
               while( ++WHILEcnt[16]%5 )
               {
                  i += (j*k*k+h-m-e*a-a+e-m*d*n+m)%100;
                  n -= (b-b-b-b)%100;
                  k -= (i+l+d-m-j+h+c)%100;
                  g -= (b-k+n-f-k-e-j-m*b)%100;
               }
               do
               {
                  j += (a-e*k-i+d-d-c+l*g+g*l+b+e)%100;
                  a  = (k+k-l-e+m*d+a*m+g)%100;
                  f += (f-e+k*g+f+a+h)%100;
                  l += (f-m-i+k+e*b-l-k-i-h-a-a)%100;
                  j -= (h+l*l+f-b-j-h-b+c+a-i+d)%100;
                  g += (b+k-c-f*j+a+h+n*f+n+k*l+c-n)%100;
               } while( ++DOcnt[17]%5 );
               for( ; ++FORcnt[25]%5 ; )
               {
                  e -= (k-n-g-n+a+n+a-g+c*c*b*f)%100;
                  g -= (g-a*c-d)%100;
                  e -= (h+i+d-j+k+h*j+g+e+l-i-n*a)%100;
                  g  = (g-g+h)%100;
                  b -= (k-f-n-a-e*l-n-n+g*g+b)%100;
               }
               if( ++IFcnt[13]%10 )
               {
                  j += (n*m+i-i+k+f*g+l-k+f-g-d*d)%100;
                  n -= (i-e)%100;
                  h -= (g*a-c+e+d*c+f-e*a*h*b)%100;
                  f += (f+a+g-d+c+j-n-n*i*l+f+l-j)%100;
                  k += (k-j-g+n+a+n*g-c+i-b-i)%100;
               }
            }
            break;

            case 2:
            {
               k += (f*c-g+e+c-g*j+n+l-e+b-j*k-j)%100;
               c -= (e-h-k-j)%100;
               m += (f-c)%100;
               i += (f+n+f+l-a+i-n-m-i-a-h)%100;
            }
            break;

            case 3:
            {
               b  = (c+b+n-l*a-k-i-m-h+d-c)%100;
               d -= (n+k*d+d+k-h+h+i+c+l)%100;
               c  = (e-b-d+b*e+j)%100;
               m += (n-m+e-d-b+g*j+i*i*i)%100;
               f += (e+c)%100;
               l -= (k*n*n-n+a+j+m)%100;
            }
            break;

            default:
            {
               d += (c-m+j*m+d+l*i+j+n-m+n-l-k)%100;
               e -= (f-h*l+m+e-d+i*m-h+a+m+h-g-c)%100;
               l += (j+g+n*b*k+i+g)%100;
               h += (i-h)%100;
               e -= (m+m-l)%100;
            }
            }

            h -= (n+j+n-c+i-b+d-m+c+j-e)%100;
            j += (a-l)%100;
         }
         a  = (j-h+n*n-g+f+c-m-i-h-b+d)%100;
         l -= (c-b+n)%100;
         l += (n*i-h-b-l)%100;
         m -= (n-m)%100;
      } while( ++DOcnt[15]%5 );
      l += (d-d+a)%100;
      m -= (h+b+n*k-n*l+e-k+j+f)%100;
   }
   i += (j-m+m+a)%100;
   c += (m+c+h+g-k*l+n+c-g*h*k+f-a-h)%100;
   f  = (n-d-i-n-n+b)%100;
   d  = (k*f)%100;
   h += (f+c+j+i)%100;
   h -= (i+c-i+i*j+c+j)%100;
   f += (m-n-i*l+d-d-m+k+l-b+g+e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[30]%5 ; )
   {
      if( ++IFEcnt[19]%2 )
      {
         h += (k-b-l-m-a*b+i*g+i+l+c*n+m*m)%100;
         e -= (e-i)%100;
         c += (m-i+f)%100;
         e -= (a-c-h+i+b-a+g+m*d-d-j+i-a+f)%100;
         i += (d-i)%100;
      }
      else
      {
         while( ++WHILEcnt[19]%5 )
         {
            do
            {
               b  = (j+m)%100;
               for( ; ++FORcnt[27]%5 ; )
               {
                  l -= (d*a-a+b*b+j+k-n-j+h+c+n+e*k)%100;
                  j += (a-j-g-g+g-g+d+j)%100;
                  d -= (e-k+g+g+k)%100;
                  n += (l+b-c-f-d-a*n+i+d+a+h)%100;
                  d -= (a+k*g+f)%100;
               }
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  j  = (c-n-d*g-m*f-f+i+h+n)%100;
               }
               break;

               case 2:
               {
                  f += (l+d+f-e+c+h-j)%100;
                  n -= (c+m-m-h*c+i*f-k-j+c*l*l)%100;
               }
               break;

               default:
               {
                  n -= (i+h-c+k*k+e+m*d-a+e+g*m-f+k)%100;
                  l -= (d+c-j+m+n)%100;
                  n -= (l+n+j-e*m*n+b)%100;
                  l += (n+d+l+m-h*g*c-l+h-d-d*l+j)%100;
                  k -= (m-j-n-n-m-i+j*a+l-k)%100;
               }
               }

               if( ++IFcnt[14]%10 )
               {
                  j -= (a+n-j)%100;
                  f += (e-l-h-n*e-j+a+f-d-k*m+b)%100;
                  g -= (l-n-a+m-h-l*n)%100;
                  e += (g*h+n+c+a+e*m+m+a+l)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  j -= (b+g+l*f+k*k+l*m*i+e-g+h)%100;
                  c += (a*f*m-c-e)%100;
                  a -= (j*b-k*d-m*f-f+l+l+a-k+e)%100;
                  i -= (e+c)%100;
                  j += (m-l)%100;
               }
               else
               {
                  h -= (k+j-d-h+h-e-c*e)%100;
                  k -= (g+l+j-a+d+c*k)%100;
                  g  = (d-e-g-c-j+h-b)%100;
                  j  = (h-g+l+m-g-e*a-m-l)%100;
                  n += (k+i-n+i+k-n-d+b-d*j*c)%100;
                  n -= (l-h)%100;
               }
               while( ++WHILEcnt[18]%5 )
               {
                  n  = (j+k+i-l-m+b-m+k-f+e*f+a)%100;
                  n  = (b*b*a+j-c*c*a-n+b+k)%100;
                  j -= (e+f+f-h+l-h+g+f+c-h*d+h)%100;
               }
            } while( ++DOcnt[18]%5 );
            do
            {
               for( ; ++FORcnt[28]%5 ; )
               {
                  m -= (m*l+d-h-f*i+j-f*k-h-j)%100;
                  i -= (l*j)%100;
                  g -= (f-i-j-e-g+l*i*h*i+d)%100;
                  f += (j-g+c*i*a+i+e+d)%100;
               }
               for( ; ++FORcnt[29]%5 ; )
               {
                  j -= (e-m+f-k-c+g+k*a-i+f-f)%100;
                  h += (n-l+g+k*k+e*b+j+g-a)%100;
                  i -= (m*h-h+j+i+f-i-h*g+b*h+j+n-c)%100;
                  l += (i*b-i*e-e-b*l-e+a-e)%100;
                  l += (g+j-k*j-b)%100;
                  f -= (n+g*f+f-l-c-e*j+e+i*a)%100;
               }
               j -= (a+j*e-a*j+d-d-j*m*m)%100;
               f += (f-k+a)%100;
               h += (j-d+f+i+g*f-m-k-k-j-a)%100;
            } while( ++DOcnt[19]%5 );
            f += (c+a+g-c*a+n*c)%100;
            f += (k-c-n+j*a+l+m-k-e*c)%100;
         }
         b -= (k-l)%100;
         j += (k-e+a)%100;
         j -= (i+c)%100;
         i -= (e*d*a+n+f-b)%100;
      }
      m -= (d-a-c-i+m*d*n+f+j+m-d)%100;
      j -= (n-m+j-b+c+b-e)%100;
   }
   h -= (h-e*b-m+j+j-h)%100;
   k -= (k+a)%100;
   d += (i-a-d-g-b+l+m+g+h+i+k+d-j)%100;
   d -= (n-f-k+d)%100;
   d -= (c*m*n)%100;
   m -= (n-d+n+g-m-c*j*f+b+b-i)%100;
   i += (c+l+h*g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F10(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[22]%2 )
   {
      h  = (l+m-i+g+n+e*c-f+d+i-b+m)%100;
      k -= (g+c-i+a+c-a+d)%100;
      d += (b*a+f+d+h+j*m-i+e-c)%100;
      m -= (l*i+j*c-l+i+i-i-k+j-i-k)%100;
   }
   else
   {
      while( ++WHILEcnt[21]%5 )
      {
         do
         {
            if( ++IFcnt[15]%10 )
            {
               m -= (i+e*c*c-e-f)%100;
               for( ; ++FORcnt[31]%5 ; )
               {
                  j += (m-i)%100;
                  k -= (e-i*c+a-b*l*k-b)%100;
                  m -= (c+g-h+k-d-m-m-h)%100;
               }
               
               switch( ++SWcnt[10]%3 )
               {

               case 1:
               {
                  c -= (n-i+b+n+i*a+l-e-d*m-f-g-g+m)%100;
                  j += (j+i*e*k-e)%100;
                  d  = (g-i-i-i+c+l)%100;
                  c -= (d+k)%100;
                  h += (n-a)%100;
               }
               break;

               case 2:
               {
                  e  = (m-g+l*m-b*d*l+j+h-e*a)%100;
                  j  = (f*f+c+f-m-h+k-e+c)%100;
                  j += (e+k+i-l+b+f)%100;
                  e -= (m-m+k-m-f-l+b-b-l-b+a+h*i)%100;
               }
               break;

               default:
               {
                  g -= (l+l+g-l*l+a+k+e-e-c+j-g)%100;
                  e += (e+h)%100;
                  a -= (n*h-i-f-a*i*c+k*h*d)%100;
                  h += (g+d+h-k)%100;
                  b += (k-b-j*a)%100;
                  l += (a*i-h+j-h+n-f-j+f*n+d+d)%100;
               }
               }

               if( ++IFEcnt[20]%2 )
               {
                  b -= (h+a*a)%100;
               }
               else
               {
                  h -= (h*d-g*n+i-i-l+e-m+d)%100;
                  b += (e+b+k-d+a*g+d-e*l-c*a+a-l)%100;
                  b -= (i+g-b+c-d+j-a+j-d-m)%100;
                  i += (j+b-k-m)%100;
                  l -= (i+i-d*a*n+c*h-k+j-k)%100;
               }
               while( ++WHILEcnt[20]%5 )
               {
                  a -= (j-h+i*j-j+i-n*i+g)%100;
                  k  = (m+e-d)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[32]%5 ; )
               {
                  m += (k-i)%100;
                  l += (n*j+m+e-i-i*c)%100;
                  i += (h*e*e-c-g+d-e+a+a+l*g*g)%100;
                  n -= (c+b*a+l-a+b-a*g*l-d*l)%100;
               }
               if( ++IFcnt[16]%10 )
               {
                  m -= (h*g+c-b*c-e+l-b)%100;
                  k -= (a*m*g-d-i*n+g+c+g+b)%100;
                  f -= (d-m-m+i*m+i-c+m+k+a+f*m-k-f)%100;
                  k += (f*n)%100;
                  g -= (h+l+g+c+a)%100;
                  j -= (d+c*l+c+m)%100;
               }
               for( ; ++FORcnt[33]%5 ; )
               {
                  c += (d+e)%100;
                  b += (d-f)%100;
                  l -= (d*b+g+c+k-b-k-i)%100;
                  a += (c+m-c-f-b+i)%100;
                  l += (m+i+l-l+n+k)%100;
               }
               if( ++IFEcnt[21]%2 )
               {
                  d += (a-b+e-n+j-e+m*a+c-a-e)%100;
                  n -= (b+i+f-k*m+b-k-i+l+i+h)%100;
                  c -= (c-c-k)%100;
                  c += (e-l+c*k*l-i-f+a+d+b)%100;
                  f -= (n-l-l-h*g-j-l-c*h+e-i)%100;
               }
               else
               {
                  n -= (l+d+n+g-h-n*a+j-e-j)%100;
                  k -= (j+a-g)%100;
                  k += (j+a*f)%100;
               }
               n += (l-b*e+j+e-b-d+j-j-f*h-k)%100;
            } while( ++DOcnt[21]%5 );
            d -= (c-l)%100;
            e -= (d-n)%100;
            c -= (k+c+e+a*n*b+c+f-j)%100;
            i -= (m+l+f+n+a+b)%100;
         } while( ++DOcnt[20]%5 );
         k += (k+l+e-n+j+i)%100;
         l -= (d-h*j-i+g*f*j+b-l*i*k)%100;
         n -= (g-h-i*f+e)%100;
      }
      a -= (m-l-g-a+i)%100;
      g -= (j+i-h-k+h*j*g+a*e+d+k)%100;
      b += (h*i)%100;
      n += (a*b+e+m-b-b)%100;
   }
   n -= (e+h)%100;
   l += (b*b+i+i-l+l*k*n-h-h+j-m)%100;
   a -= (i+g*b+f)%100;
   c += (e+d-c*g+b-a*c-n*d+l+l-b-a)%100;
   e += (e-c*f-m-l*k-b-h+j+f)%100;
   m += (c*d+g-m+d-k+e*g)%100;
   a  = (a+a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F11(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[24]%5 )
   {
      do
      {
         j  = (g-d*b-h-h-j+l+e*k-h-d)%100;
         for( ; ++FORcnt[36]%5 ; )
         {
            
            switch( ++SWcnt[11]%4 )
            {

            case 1:
            {
               if( ++IFcnt[17]%10 )
               {
                  n -= (g+j-c+i)%100;
                  a -= (i-h*k+l-a)%100;
                  m += (l+b)%100;
                  j += (d-h-j-e-n-h-k*f-g*d)%100;
                  i += (n+c)%100;
                  k += (b+j-e-i+e+c-l*h)%100;
               }
               if( ++IFEcnt[23]%2 )
               {
                  d += (e+a-k-a-d)%100;
                  l -= (i+m*a+a+f-a+n)%100;
                  l += (k+j+e-c-h+m+m-n+l*m+c)%100;
               }
               else
               {
                  g -= (c*e-m*c-f*f)%100;
                  h += (f+b-d-m-b*f-m+a*i-j)%100;
                  l -= (c*k+l+h+l+l+e-f-i+k-b-g*g)%100;
                  l += (n+m+e+i-g-j+g+c*d)%100;
                  a += (i+g-g+e-d+h)%100;
               }
               while( ++WHILEcnt[22]%5 )
               {
                  e -= (h-m*i+h-c*e*a+j-n*d+c-m+b)%100;
                  c += (j+d-l-a+f+h*k+k*c+g+g-j*c)%100;
                  h -= (e-d+b)%100;
                  d -= (i-m+i-d+m)%100;
                  m -= (i-b-k-g)%100;
               }
               do
               {
                  c += (c-m+g-l+a*l)%100;
                  d -= (b-k)%100;
                  a += (i+i+d-g*e*a+c-c-c*g-f-n-e*l)%100;
                  i += (d-n+f)%100;
               } while( ++DOcnt[23]%5 );
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[34]%5 ; )
               {
                  j -= (i-a+f-c+i+g*j+f*i*a-d)%100;
                  n += (c-e-d*c*j*g-a)%100;
                  g -= (l+e+a-i-c-j+i-l-e+i*k*m-b+l)%100;
                  j -= (j+b+m+k-d+g)%100;
                  g -= (k-h)%100;
               }
               for( ; ++FORcnt[35]%5 ; )
               {
                  j -= (c+m+h+f-d*f*h+d)%100;
               }
               if( ++IFEcnt[24]%2 )
               {
                  a += (m-a-k-j*i+n+e+a-d*g+f+l+g)%100;
                  g -= (b+i+n-f-h+g*l*m-a+b)%100;
                  i -= (f+h+e-n+k+k+b)%100;
                  h -= (b+h+g+h-g-c+m-m-l)%100;
                  b += (d+k-l-h-k+d-d*d+j-k-k)%100;
               }
               else
               {
                  f += (b-h*l+i+g-m)%100;
                  k  = (j-j+b+b-b-j+l*a-g-d-h*c+l*b)%100;
               }
               while( ++WHILEcnt[23]%5 )
               {
                  f  = (b-j+e*e*b+g*l+h)%100;
                  k += (d-a*i-m-g+d+j-i+f-k-j+a)%100;
                  j -= (n+e-l*a)%100;
                  g -= (a*g+j+l*h-n-e-i*b-e-c-g)%100;
               }
               do
               {
                  n  = (f-d-f-n+g-j-l-c)%100;
                  f += (g+a*e*n*d+l-l-g+c-h*i+c)%100;
                  i += (g+c-h+m*n-g)%100;
                  g += (c-e+c-c+j+c+g+m*j-f+d)%100;
                  n -= (a+a-g*i*n*j+l+g+k+d-d+m)%100;
                  n += (k-l)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[18]%10 )
               {
                  n += (h*g*d+b+g-e-h-m-n-b*c)%100;
                  k += (c-l-m-a+j+j+n-g)%100;
                  l += (h+f-k)%100;
                  m += (m*d-g-g*h+j)%100;
                  n  = (h+c-b+j*b)%100;
               }
            }
            break;

            case 3:
            {
               n += (e-e*i-j*l+i-n+h-n-h-h+k)%100;
               d -= (a+m-b)%100;
               c -= (n-g-m)%100;
            }
            break;

            default:
            {
               g += (j+e-h-c+n-a+e-g+m-e+l-f+n-f)%100;
               a += (n+b)%100;
               g -= (j+d+l+f)%100;
               a -= (g-h+k+c-f-f+i+l-f+f*f)%100;
               n -= (c*d+n-b+m+f+l+a-e*c-l)%100;
            }
            }

            f -= (l-i)%100;
            a -= (g+c)%100;
            k -= (n-i-j+f*l-n+g*i+i+h-b+c-l)%100;
            j += (h+n)%100;
         }
         n -= (k-d*b-k-h-n-k+g*d+a+g+c+j)%100;
         a -= (b-k-e*i+m-b*l-h-i-n-c+j+a)%100;
         g += (h+h*f+c+j-d+d-c+k-m)%100;
      } while( ++DOcnt[22]%5 );
      h -= (k-c)%100;
      c += (i-e-i*m-i)%100;
      a += (i-f-g*l+c*n*b)%100;
      l -= (k*m+i*c-e+d+c-a-k*g+e*a-h+m)%100;
      a += (d*b+h*e+h+l*b-e)%100;
   }
   d += (i+i+g-l+c-l+j)%100;
   d += (f-l+a-f+h-d-k-b)%100;
   d -= (m-l)%100;
   f -= (f-m+e-k-b)%100;
   m += (a+c-c-k*b+b-d+h-k)%100;
   n -= (j*d*n-a+m+c)%100;
   i -= (e+a*m*b-c+j-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[12]%4 )
   {

   case 1:
   {
      for( ; ++FORcnt[40]%5 ; )
      {
         h -= (m+e-n+d+h-i-h+c+l+c*d-d-i)%100;
         if( ++IFEcnt[26]%2 )
         {
            k += (b-m*h-a-k*a*c+n-k+j+j-e*j+l)%100;
            d += (c*k)%100;
            m += (m-d+a-a-h+a)%100;
            d -= (f-c*g*k-m*h+g*f+f*h+c-j)%100;
            n += (b+j*k+c-f*d+b+d+n-g)%100;
            i -= (h-g+j+l+e)%100;
         }
         else
         {
            while( ++WHILEcnt[25]%5 )
            {
               do
               {
                  n -= (l-d+l+b*j*i+n-k)%100;
                  k += (b+k-c+d-e*k*j-h+i*c-n-h)%100;
                  j -= (a+a-k*d-j*m*m-k)%100;
                  i += (j-l-j-i-d-f+h*n-e*f-l)%100;
               } while( ++DOcnt[25]%5 );
               for( ; ++FORcnt[37]%5 ; )
               {
                  c -= (d-e-a+i-i*e+b+a+g+i)%100;
                  g -= (k-k+f)%100;
                  i -= (k-g-f-j-i-g-g)%100;
                  i -= (a+m-k*e-j-h*a+j*g-f*h*g*c-f)%100;
                  j -= (b+k)%100;
                  k -= (f+b)%100;
               }
               if( ++IFcnt[19]%10 )
               {
                  i += (c-g*n*m+e-g-e+d*d+i*d)%100;
                  c -= (i+l*d-k)%100;
                  j += (b+b+l-b+k)%100;
                  m -= (c-a)%100;
                  b += (n-i+c*l-g*e-n+i+e+e*j+i)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  e += (g+a)%100;
                  h  = (m+h-f*e+k*j*k+g-m+g+l*e+n+h)%100;
                  g += (c+j)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  j -= (n*g+m-a-a-a-h+l-l+i*f-f-d)%100;
                  c -= (e*f-h-b*k-h-d+n-j)%100;
                  m  = (h-c-i-h*f-e+n*l)%100;
                  d -= (g-e*e)%100;
               }
               else
               {
                  m -= (m+l*a-a+d)%100;
                  l -= (e-a+j-d-k-n+f+n+b-e)%100;
                  d -= (i+e+e)%100;
                  a += (e*k+k-m+l-m-f-g-a)%100;
                  a += (m-e+n+h)%100;
               }
            }
            while( ++WHILEcnt[26]%5 )
            {
               do
               {
                  g += (b+b*k+a+n-f-g)%100;
                  j -= (e+b-d+k-m-n-d-a*a+l+j)%100;
                  d -= (b-h+c-n-e-a*h+d)%100;
                  l -= (d-g*l)%100;
                  l -= (m+g*i-g+d+f)%100;
               } while( ++DOcnt[26]%5 );
               c -= (e+g*l+m+l*f+n+i+l+f)%100;
               for( ; ++FORcnt[39]%5 ; )
               {
                  n += (n*g)%100;
               }
               
               switch( ++SWcnt[13]%3 )
               {

               case 1:
               {
                  g -= (h-l+l-k-i-f+d+k-l*e*h-h*b+m)%100;
                  l += (c-b*a*f+c-m+n+n*m)%100;
               }
               break;

               case 2:
               {
                  j -= (l-j-d)%100;
                  g -= (j+f+b)%100;
                  h -= (m+f-l+g)%100;
                  d -= (g+i+e-b-j-h+d+m-j-k*i+m)%100;
                  b += (e+n+i)%100;
               }
               break;

               default:
               {
                  d += (l+g-m)%100;
                  i += (g-h*c+g)%100;
                  d  = (h-h-d-a*g+n-h-b+k-b-a*d-h)%100;
                  l -= (a+f-c-d*n*g*e+m-i)%100;
               }
               }

               e += (e+k-f-j*j*e-e-m-k-j-a)%100;
               f -= (i-f+m+f+l-d+f+a-i*c*j+i+m*c)%100;
            }
            a -= (b+f+f-h-f)%100;
            h += (i-g)%100;
            k += (l-j-d-c)%100;
         }
         c += (a+n-n+b+b+i-k+k-f)%100;
         f += (d-k*c*a+c+m-k-g-m+d)%100;
         k -= (h+j-k-k-c)%100;
         n -= (d+h*j-a+d)%100;
      }
      c += (e+n-h+i-c-l+e-g-n+k-k-h+g-h)%100;
      i += (b-l*e+m*d+k+g+h+d-e*g-h+n)%100;
      l -= (e+l-j+h+g)%100;
   }
   break;

   case 2:
   {
      e += (a*m*i)%100;
      m -= (h-e+f-d+d+l*b+h-h+n+k+m-h)%100;
      g += (i*i-e-d)%100;
      j -= (m*a-j-c*a-b-f+d+i+i-k-n)%100;
      j  = (e+g+i)%100;
   }
   break;

   default:
   {
      c  = (b+m+h-d-e+a-a+l)%100;
      e -= (l-k-i)%100;
      j += (m+e+j*f+a*n-m+b-f-j-n-d*n)%100;
   }
   }

   k += (g-n+n-c-f+a-k+n-j+i*a*f*a)%100;
   f -= (d+m+g*f-c+m+g*d-g-f+m+d-n)%100;
   c += (j-n-f+b+l*f+i+h+j-c-k)%100;
   l  = (g+a+l-b-a*l+a-k)%100;
   g += (f*n+a*f-a+b-h)%100;
   g += (e*h+g)%100;
   d -= (l+j-d*k)%100;
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
         n -= (j-c+n-c-d+l)%100;
         i -= (l+c-h-i-g+i+l*e*c+j)%100;
         c -= (m-f+a*l-n+l+n*j-n*k)%100;
         i -= (h-m+i-f*d+m-g-k-l)%100;
      }
      else
      {
         while( ++WHILEcnt[28]%5 )
         {
            do
            {
               for( ; ++FORcnt[41]%5 ; )
               {
                  l += (k-b*c)%100;
                  l -= (h+h+i-k-n-a*e-e-l+i+h+i-e)%100;
                  k += (a-k-h*d+a+g-h*f-d-b-b)%100;
                  a -= (a-f-e*i*k*f-g*m)%100;
                  i += (k+j+k+h)%100;
               }
               for( ; ++FORcnt[42]%5 ; )
               {
                  m += (d-d*j+g+i*b+f+n-f-j-j*k+n)%100;
                  i -= (e*e+h*g+n-g-j+n-f)%100;
                  j += (f-i-j)%100;
                  j += (j+m-f*b*i-n*g+k-a)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  a  = (m*h)%100;
                  b -= (j*c-e-f*k+h*a+h+e*n-f+m*d-d)%100;
                  e  = (b+b*n)%100;
                  l += (d-d*d+l)%100;
                  k  = (m*b-j+m+a+f-b-d-c)%100;
               }
               else
               {
                  i -= (g+a-g+h+l-a-m-h-l-b-a-h)%100;
                  k  = (e-f)%100;
                  e -= (a-a-l+h+f-a+g)%100;
                  b += (b+b-n-i-k*l-m)%100;
                  b -= (c*j-m+l*j)%100;
                  m += (n+l+a-f-a)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  a += (h-e-k-f-c+n-a*a-l-j)%100;
                  a += (k*j)%100;
                  e += (k-m-f-a)%100;
               }
               do
               {
                  m += (e+h+f*n)%100;
                  j -= (k+j-g-b+e)%100;
                  l -= (l-n-k*g*i+b-d-c)%100;
                  n -= (m+m+l+e+f-n*m+e*h)%100;
                  j += (n-b)%100;
               } while( ++DOcnt[28]%5 );
            } while( ++DOcnt[27]%5 );
            if( ++IFcnt[20]%10 )
            {
               h -= (c-l*l+c+k*d-d+a*j+j-i-e-h)%100;
               for( ; ++FORcnt[43]%5 ; )
               {
                  a += (f*g)%100;
                  f -= (i-h*e*c*b)%100;
                  l -= (m+g*d+i+g-a)%100;
                  f -= (k-m+n-i-f*h-g)%100;
                  i += (n+i-c-g)%100;
                  l += (l-b+n-l*n)%100;
               }
               
               switch( ++SWcnt[14]%4 )
               {

               case 1:
               {
                  c -= (h-d+n*i+d+n-h-k+e+f+n-b+k-m)%100;
                  f -= (c+l*i)%100;
                  b -= (m*g-i)%100;
                  i -= (k-b-a-i+k-k+k+m+j-e)%100;
                  c -= (h*e+g-m+j)%100;
               }
               break;

               case 2:
               {
                  i += (c-i+l+j+c-f*e-l+g-b+n)%100;
               }
               break;

               case 3:
               {
                  e -= (e-g-c-i+l+g-i-c*j+i)%100;
                  l -= (k-e+m+k+l+b-e+m*d+b)%100;
               }
               break;

               default:
               {
                  g -= (g+a-l-f-j+i-n)%100;
                  n += (g*l+c)%100;
                  k -= (b-j-i-l+g*n-a-n+j-l*c-j+m*j)%100;
                  l -= (j+e-f)%100;
                  n += (l-k)%100;
               }
               }

               d -= (n+a+j)%100;
            }
            g -= (a*j)%100;
            i -= (n*k+d-g-f+j*a-b-m-n+h-f)%100;
            h += (d-h+b+e-l-a-g*n-m-n+g-j+c-n)%100;
            f -= (a+c)%100;
         }
         j += (f-d*c-f-a+f+j-b+h-h+i+j*g)%100;
         d -= (n-c+m+c+i-h-b)%100;
         f -= (k-i-e-f*b-b*l*n*f)%100;
      }
      l += (j-g*g)%100;
      l += (n-n)%100;
      l += (i-e+i+h+m-h)%100;
      i -= (n+m*c)%100;
   }
   l += (g+a+k+k+f+g+h)%100;
   j += (e*n+h*k*l-g-a-e-l*j-e)%100;
   a -= (n+l+a-e-m*b-d*e)%100;
   j -= (n-e-n-b+l+d+e*j+e*c)%100;
   l += (c-g+c+j*g-h*i-m-d-m+d-m+l)%100;
   l -= (k+b*l*h+c-k*i)%100;
   c += (c-h+n-d-l+c*n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[30]%2 )
   {
      b += (d+f*k)%100;
      a += (f+h-a)%100;
      f += (k-c)%100;
      e += (i+h)%100;
      d -= (h+c+m)%100;
      k += (g-e+i+b-j-h-j-a+b*a-d*g+h)%100;
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
                  n -= (e-m)%100;
                  m -= (d-b)%100;
                  f += (d+e)%100;
                  m -= (k+h+f+c+i+c-a+g+h-h+n+m*g*n)%100;
               }
               for( ; ++FORcnt[44]%5 ; )
               {
                  n += (c+f*l+c-i+k)%100;
                  k -= (h*n*d*a)%100;
                  c -= (e+h)%100;
                  e += (k+b+b+b-k-l)%100;
                  j -= (n+g+g*g+j+g*h*d+n+l*f)%100;
                  i -= (d+c-j)%100;
               }
               if( ++IFEcnt[29]%2 )
               {
                  b += (b+c+k+n-j-e+c-h+j+c-l*a)%100;
                  j += (e-f+k-m+g+e-j*d+g-i-i-k)%100;
                  c += (c+i-f-j-h+h-l*i+d+e)%100;
                  d -= (l-i+l*a-m+d+k*g-d-c*e*h)%100;
                  l += (b+n+c*n-f+g+g)%100;
               }
               else
               {
                  m  = (e*a+a+f-j-d*d-i*d-j+l+n-g+n)%100;
                  c -= (m+e-l*i-g*k+i+c)%100;
                  b  = (a+c)%100;
                  h -= (a-g-j+b+i-n+h)%100;
                  b -= (i-a+j+n-l+c*a+m)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  g += (d+l-i+b-n-n+f-d+g+a)%100;
                  d -= (f+d-m+i*f+a-e-a-b-g*j*a-a)%100;
                  n += (j*e-e-m-h+c*m-e-l-i+f)%100;
                  b -= (l-l-j)%100;
               }
               do
               {
                  f -= (d*f-b*a*i-l*h)%100;
                  m -= (d*d*i-e-d-b-m+l)%100;
                  e += (k-n*n+f*k*h+f+b+f+l-e-l*b)%100;
                  d += (h+h-g)%100;
                  f += (m-i+m+i+m+m+i-c+h+e+j+f)%100;
                  h += (g+j*l-h*n+h*a-g-l)%100;
               } while( ++DOcnt[30]%5 );
            }
            b += (c*m+g+d-m*k*a-k+m+e+e+i+g-a)%100;
            for( ; ++FORcnt[46]%5 ; )
            {
               
               switch( ++SWcnt[15]%3 )
               {

               case 1:
               {
                  f -= (a+f*e-l)%100;
                  a -= (l+b-l-g)%100;
                  i -= (k+l*l-k-h+j+k)%100;
               }
               break;

               case 2:
               {
                  l += (c+g*j+m+j-i)%100;
                  e += (e-d+g+k*g+i)%100;
                  i -= (l+k+d-i*e+d+f-f)%100;
                  a += (i+h-h+g-k)%100;
                  e += (m*g+b+d+l+d+g-a+d-d+j*k+f)%100;
               }
               break;

               default:
               {
                  g += (g-m*l*k+d-k+f-h-f*a+f+b+f+i)%100;
                  n += (k+d+b+h-k+l+c+i-e-i)%100;
                  l -= (l-e+e-l-d*f+e-j+f*l+f+n-l-d)%100;
                  n -= (k-b-l)%100;
               }
               }

               c += (i*e+i-g-g*j-n-f-j-c-n+f*n+a)%100;
               d += (b*h-i+h*e-l+e*g)%100;
               g -= (j*f-c*c+g-k-h-d+l+n)%100;
               i += (a*a*b*a+b*b-d-b+n-m+j-m)%100;
            }
         } while( ++DOcnt[29]%5 );
         c += (i+n-j*f+a-i-m-g*e+e*a+h)%100;
         i += (d+j*h-b-f*n+g-m+m-k*n+c*e+m)%100;
         h += (f-m-i*f*j+h-b*c-h)%100;
         m += (j-i+f)%100;
      }
      d += (g*e-d+m-m*h-b*i*c)%100;
      k -= (l+a*k-f-g+a+j*k+n+d+g-a-l+m)%100;
      f -= (d-n-b*c-d)%100;
      c += (h+e-b-n)%100;
      h += (j-l+k*e-d-d-g-j*n*k-i)%100;
   }
   l += (f-k)%100;
   m -= (k*m+i*c*m+i-n-f)%100;
   n -= (g-f+e-h+k*d+c+c-j+l-j-f-i+n)%100;
   h += (d-c-n-e+k*h-h)%100;
   k -= (g*b-i)%100;
   n -= (h+m-a)%100;
   k += (h+d+k+b*c+i+i*f+j+k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F15(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[24]%10 )
   {
      if( ++IFEcnt[32]%2 )
      {
         j -= (b*k)%100;
         m -= (a+h)%100;
         d -= (h+d-f+b*k+h-b+l-l-k-f+k-k-h)%100;
         m += (c-i+e-i+i+m+f+j+h+h)%100;
         c -= (g+b*n-h+g+g+b-h+a+h)%100;
      }
      else
      {
         while( ++WHILEcnt[32]%5 )
         {
            do
            {
               for( ; ++FORcnt[47]%5 ; )
               {
                  b += (n+i+n+g-f+m-h+c*a+l-l)%100;
                  g -= (f*i-k-j-h+l+j*d-i+n-h*j)%100;
                  a += (g-j-i*n+h+i+d+g+h*h)%100;
                  n += (b+n-m*a*c*h-e-m+c+h)%100;
               }
               for( ; ++FORcnt[48]%5 ; )
               {
                  n -= (l*a)%100;
                  k += (a*d+n+g)%100;
                  d -= (g+l-b-e)%100;
                  e += (m*c-f+f-a+h+k-f-i-a-f)%100;
                  h -= (k*j*c-d-n+c+n)%100;
                  c += (d*f-j+b)%100;
               }
               if( ++IFEcnt[31]%2 )
               {
                  l += (l-h+k*c-b*m*j)%100;
                  c -= (d+h+i-j-a-l-n*h*i)%100;
                  b -= (l+f-f)%100;
               }
               else
               {
                  b  = (j-j+l-d*e)%100;
                  h -= (e-n+i-h-j+k+l+g+k-l)%100;
                  k += (b-d*b+j+m)%100;
                  n -= (j+l+c+d+h*k*k-b-g-l-b)%100;
                  i += (n-e-e+n-g+f+f-i)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  m += (j-i+d)%100;
                  j -= (n-g*i-n-b+m*b-g-k-a+k-j*j)%100;
                  g += (e+m)%100;
                  h -= (d+b)%100;
                  l -= (f-k)%100;
               }
               do
               {
                  f += (c*g+g-c+f+l-d+h+m-h+j-k-c-e)%100;
                  e += (m+l+m+k)%100;
                  m -= (c-j)%100;
                  e += (d+e-i-m-a-a-m*l*k-c-m)%100;
               } while( ++DOcnt[32]%5 );
            } while( ++DOcnt[31]%5 );
            if( ++IFcnt[23]%10 )
            {
               c += (f-d+e*l-f-l*k)%100;
               for( ; ++FORcnt[49]%5 ; )
               {
                  f += (l-g*e-k+l*n+l+j+f*k+h+a+d)%100;
                  k += (b+g+g)%100;
                  d -= (c*i+k+k+h-i*i-d-g+j-d-i+h)%100;
                  m += (e-j*i*c-f-m+h-c-k-i+j)%100;
                  a -= (k+i+a+a+m)%100;
               }
               
               switch( ++SWcnt[16]%3 )
               {

               case 1:
               {
                  a -= (b+h-e-k)%100;
                  e -= (d-d+a*n+a+k+d*i+d+c-e+l)%100;
                  j += (h-h+g+j-l+c-a+f-i-n*l+b-h)%100;
                  e -= (c*b*l*h+e*g-g+i*n-g+c)%100;
                  n += (a+c-l+f)%100;
               }
               break;

               case 2:
               {
                  c += (m-k+j+c-i+e-e-k*f+d*e+e+m)%100;
                  g -= (a+g-l-h+f-l-d-k-f)%100;
                  b -= (l+n-e-j)%100;
                  c += (j+a+c*a-h*l-b-c+k+i*i-a)%100;
               }
               break;

               default:
               {
                  l -= (i-b*l+d+j-d-l+d-a*k-l+a+b+e)%100;
                  a += (e+d)%100;
                  j -= (j+g*i-a*k-b-a*f-f)%100;
                  c  = (d*a-m-f+k*b-e-h-c-d)%100;
                  n -= (l-h+i-i-n+e*e+a*h-n-g+e*l-m)%100;
                  i -= (i-a-i+l+d-g*c+l+h*g*j+c+a-f)%100;
               }
               }

               f += (m+f-n-i+n+n+d)%100;
               e -= (e+m+i-d+g+c+f+e+e-j)%100;
               g -= (e-b+n-f+h-h+l*l-i*j*k-b)%100;
            }
         }
      }
      k  = (a-b*i-h*g-i*n-g-g*f)%100;
      j  = (f-b-c-e-n*k*f*d+l-j-c)%100;
      i += (e+c)%100;
      f += (l+g+j*b-m-l-k-d-l-i)%100;
   }
   m += (f+k+l+n-m-j+a-g-b+n-h)%100;
   g -= (f-e-m)%100;
   g -= (c+l+c*l+c*i-f-a-g-e-l-f-d+f)%100;
   l += (k-m+e-l*i)%100;
   a  = (g+i-d*c*j-k*g-c-m-c-g*c-f)%100;
   m -= (n+h*g-i-f-a-j)%100;
   f += (m-e+j+m*f+g-e+f*a+e-l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F16(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[35]%2 )
   {
      c -= (g-g-l+e+a-h+f*i)%100;
      m -= (i+g-n+g-n*g-e*f*b+b*f*d-n+d)%100;
      a += (n*i-f*a)%100;
      n += (h*h+a)%100;
      c -= (c-l*h+i-m+j+j-f+n)%100;
      j  = (k-g-e*k+b-h-n-j-k*g*b+n-i)%100;
   }
   else
   {
      while( ++WHILEcnt[35]%5 )
      {
         do
         {
            for( ; ++FORcnt[51]%5 ; )
            {
               if( ++IFcnt[25]%10 )
               {
                  m += (g*h+h+j)%100;
                  d += (e*j*m+j-j+i+l*n*h+g-k*m+h*b)%100;
                  c += (k-b-e)%100;
                  d -= (m*b+c*b-k)%100;
                  f += (b*b+l*h+n+c+i*h)%100;
               }
               for( ; ++FORcnt[50]%5 ; )
               {
                  a -= (c-h+d-m+j*j+i-g-c*d)%100;
               }
               if( ++IFEcnt[33]%2 )
               {
                  n += (f*b*n+d)%100;
                  k += (g-f*d-a-g*e-i*n-c-l+l)%100;
                  g -= (g*f-n-i+j+f+n-g)%100;
                  i -= (a+j+i)%100;
                  j -= (e+c*l+d+f+i*l-g-d+d+d+e+j)%100;
               }
               else
               {
                  g -= (g-i-l+k+j+k-i-j-j+h-n-d)%100;
                  j += (n+b+f-d)%100;
               }
               while( ++WHILEcnt[33]%5 )
               {
                  e -= (l-g+j*i+g*j-h-h+b+k*m-d)%100;
                  m -= (k-n+g+d+f+m*b-d*d+h+k-d)%100;
                  j += (h+l+l+c-c-n+a+c-e*a-g+d-l+d)%100;
                  g -= (i-k*k-a+a*e+b)%100;
               }
               do
               {
                  f -= (l+d-h+l+i-l+i-l-n)%100;
                  e -= (m-d+f-k*n-m)%100;
                  m += (n+h+i-d+e+b-l-c)%100;
                  m += (h+n)%100;
                  k -= (g-n)%100;
                  a -= (j-g-h+n-a+j-i-i-a-f-c)%100;
               } while( ++DOcnt[34]%5 );
               e -= (d-a+n-b+b+b-k-c)%100;
            }
            for( ; ++FORcnt[52]%5 ; )
            {
               
               switch( ++SWcnt[17]%3 )
               {

               case 1:
               {
                  n -= (c+m*c-l*i*e-j+d)%100;
                  c  = (e+n-j+d+c-n)%100;
                  e  = (c+g-a+k-f+h)%100;
               }
               break;

               case 2:
               {
                  i -= (k-k-j+c+j-e+j*a+e)%100;
                  n += (g-m-c+b-b)%100;
                  e += (b-d-n+n)%100;
                  g -= (n+b-m+d+m-f-m)%100;
                  f += (k+n+d+l+j+d-j*l*e-n+m-n*b)%100;
               }
               break;

               default:
               {
                  m += (b-h+c+n-i+h*n-i*n)%100;
                  b += (e+j+i-e*i+d-b-c)%100;
                  m -= (h-c+i*j)%100;
                  d += (l-h+l*m*h)%100;
               }
               }

               if( ++IFcnt[26]%10 )
               {
                  g -= (g-e+f+g*n*n-i)%100;
                  m -= (e+k-e-e-m-n-i*k-i+a)%100;
                  h -= (f*c-f+k+k-l-l-g*h)%100;
                  n -= (j+m*l*g-j*f)%100;
                  n  = (c+i-g*k+j*m+a-k+k)%100;
                  h -= (j*h-l+d-l-k-j-h+l+m)%100;
               }
               if( ++IFEcnt[34]%2 )
               {
                  b -= (m*e-g+i*h)%100;
                  n += (k*e+m*n+e-b+h-b-n*l-k+i*a-j)%100;
                  k += (j-a)%100;
                  e -= (c-n+c*e)%100;
                  l += (m+a*h+k+h+f+c*d+c*l-k+e+d*e)%100;
               }
               else
               {
                  l += (g-j)%100;
                  d -= (i*c+j)%100;
                  m -= (d-i*e*l-h)%100;
                  j += (a-e)%100;
                  e += (g+f-b-j+h+e+b*m+g+n*f)%100;
               }
               while( ++WHILEcnt[34]%5 )
               {
                  d -= (l-j-h)%100;
                  g += (k-l+f)%100;
                  m += (f-m+e+b+e+j*m)%100;
                  a += (h+c)%100;
               }
               n += (f-k*h+k-k-e)%100;
            }
            f  = (d-k)%100;
            b += (e-n*a*j-b+c*d-n*c-f-b)%100;
         } while( ++DOcnt[33]%5 );
         k  = (d*b-f-g*c+l-e-c)%100;
         l -= (l-n*f-m+n-a*n*a+c-m-g-k)%100;
         c -= (h+e*h*i-k)%100;
         g += (i-b+m+m+e*a*i-c+j+e)%100;
      }
      c += (h-e-i*n+j*k+h+f-m+j+e+f+l-h)%100;
      j -= (j-a*n-c+f)%100;
   }
   c -= (c+d+k-e)%100;
   b += (n+a*b)%100;
   l  = (i-k+n-k+n+n-n*d+n*a)%100;
   j -= (d-c-e-n+l*c-n-n+k-j-n-j+e)%100;
   l += (m+k-c-k)%100;
   b -= (f-a-i-l*c*g-b*d+l*i-c+m*d)%100;
   m += (k-h+j-m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F17(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[56]%5 ; )
      {
         for( ; ++FORcnt[55]%5 ; )
         {
            if( ++IFEcnt[36]%2 )
            {
               for( ; ++FORcnt[53]%5 ; )
               {
                  l -= (f+g+j*m+l)%100;
                  m += (c+a-k*e)%100;
                  g -= (k+k)%100;
                  b -= (h+b)%100;
                  j += (n+a*e-j)%100;
               }
               
               switch( ++SWcnt[18]%3 )
               {

               case 1:
               {
                  k -= (e+c*g-n-b+g-n+j*i*g-a+n-g+l)%100;
                  l -= (m*d+h+k-c*e-d+m+i-b)%100;
                  e -= (j+m+b*a-m-m-k*b+d-d*h-b*e*i)%100;
                  e += (e-i-k+h-h*k*i)%100;
               }
               break;

               case 2:
               {
                  l -= (b+d+g-h+m+g)%100;
                  d -= (j+b*a-g*d+l-l+m-h-g*c)%100;
                  l -= (a+d-b*l-k+g+g-d-e*l+c)%100;
                  a -= (h-a+h+a)%100;
                  k -= (c-d+e+f-e+a*f*l)%100;
                  h += (n*h)%100;
               }
               break;

               default:
               {
                  d -= (j-n-j)%100;
                  k += (h-i+f-e+i+k-i+h+n)%100;
                  e -= (h*n-k-j-l+e+g)%100;
                  d += (m*f-g+b*l-n-k-m+e*n*b+k)%100;
                  j += (d-m-c-a-g+h+k)%100;
               }
               }

            }
            else
            {
               while( ++WHILEcnt[36]%5 )
               {
                  l -= (m*a+n-f+m)%100;
                  l -= (k*g+d+c-f+d+j*m-i+d)%100;
                  e += (n*i)%100;
                  j += (l+e+j+g+c+m)%100;
                  b -= (m*n-b*b+e+h-n-j-j+k+i)%100;
                  k += (c-l-c-a-c+g-d*h*b-l+n*l)%100;
               }
               do
               {
                  k += (n-f)%100;
                  f  = (f+k+k+b+b*d+j-g)%100;
                  f += (l+g+l*h+i+m-k-l+g)%100;
                  h += (j-m+g-m+b*g-i+i-j+i-k)%100;
                  l -= (h+b-f+j-m+g+f+l+f)%100;
               } while( ++DOcnt[36]%5 );
               if( ++IFcnt[27]%10 )
               {
                  i  = (f+a-m-e-f*h+e-k*e-g)%100;
               }
               j += (c*k*f+c+j)%100;
            }
            if( ++IFEcnt[37]%2 )
            {
               if( ++IFcnt[28]%10 )
               {
                  f -= (l-g-f*a-a+d)%100;
                  d += (a+i+g-k+g+i*l*f+d+b+k+k-n)%100;
                  h -= (a-d)%100;
                  l -= (a+i)%100;
                  k += (n+a*j*j+m+g-l*l+m+m)%100;
               }
               h -= (b+a-k-c)%100;
               l += (j-i+c+j)%100;
               d += (b+e*a-g-g-g*l-i-h*m+b)%100;
               a += (l-l)%100;
            }
            else
            {
               while( ++WHILEcnt[37]%5 )
               {
                  c += (c+n+h)%100;
                  b -= (i-k-d-b-b*l+e+e+l*g+j-c+c)%100;
                  h += (g-a+e)%100;
                  a -= (b+c-e-h-a+n-e+a+j+d-e*g-d*c)%100;
                  f += (m-i-h)%100;
               }
               do
               {
                  i -= (i*c-m+n*k-g*i-g-d)%100;
                  m -= (f-m+k-e-n+l-e+e+g+f)%100;
                  h += (h-k+k+g-l-n*m*j-h-a-k*b*e)%100;
                  n += (a*m-g)%100;
               } while( ++DOcnt[37]%5 );
               for( ; ++FORcnt[54]%5 ; )
               {
                  j += (b-d*j+f-c+g-a-b-d)%100;
                  j -= (a-n-k+n*h)%100;
                  h -= (h+g+k-f-h+h-k-h+a*b*b+j)%100;
                  e += (a+l+m-l*g-l-c-f-e-j+e+j-n+h)%100;
                  m -= (d-f-c+c+a-f+m+f*c-m+a-k+l)%100;
                  l += (j*e*l+e-g-m*d)%100;
               }
            }
            b -= (i+f-j*n+d*j-c+c)%100;
            n -= (m*a-k+i+m-m*k-k*f+g-n-h)%100;
            m -= (d-j-m+k*c+l-f*n-e-f-l-c)%100;
         }
         j  = (j*g)%100;
         a += (j-g)%100;
      }
      k += (g-n+g+j-l+j+k*c-k)%100;
      c -= (l+k+n-l*n*k*d-e+b)%100;
      i += (l+k*l+m+h-g-j-e)%100;
      j += (e+k+b-m-n-c+b+d+i)%100;
   } while( ++DOcnt[35]%5 );
   h -= (f-e+i+n)%100;
   k -= (e*f+l+c+d+g-k*m-e+k*i)%100;
   n  = (a+n+l-b+a+f*e*d*b+j-c-b*e)%100;
   m += (k-n+l+e-l+m-m-h+i-f-k*d+g)%100;
   n += (h-d-b-f-b-h+n+g*f-e*n)%100;
   e -= (a+g*f*i+e+n)%100;
   h += (j+d+c+g-h-a*b-i-j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F18(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[60]%5 ; )
   {
      if( ++IFEcnt[40]%2 )
      {
         m += (g-n+g*k-d+n*j*e-a-a-n)%100;
         e += (n-n+e-b-i+b-i*i+d+d)%100;
         c += (j-e*i+h*m*c+f-f+k+g)%100;
         e -= (h+f+l-i-k+d-n*h-n-h+i-b-d-c)%100;
         i -= (b+l*m+i*n*d-c+c*d+c-a-f)%100;
         g += (g-d+a+f-b-l+d-e-l-m-f-j)%100;
      }
      else
      {
         while( ++WHILEcnt[39]%5 )
         {
            do
            {
               n  = (e+h)%100;
               for( ; ++FORcnt[57]%5 ; )
               {
                  e -= (i*f*c+j+h*n-i-d-d)%100;
                  b -= (l-d+i+g-m+m+e+f-c-m*k+h*c)%100;
                  h -= (i*i+k-h*i-b-m+g*g-m+h)%100;
                  k += (e*i+d+i-n+m-k+e*k*g+c-e+n*k)%100;
                  e -= (j+j+c-l*e-g+g-a+b)%100;
               }
               
               switch( ++SWcnt[19]%3 )
               {

               case 1:
               {
                  e += (a-l*m+b-d+e*b-b+e-g)%100;
                  m += (k-h-h)%100;
                  j += (a*j*i-f*h+n+g+i*d+b)%100;
                  i -= (b+g-l+d*m-c*n+c)%100;
               }
               break;

               case 2:
               {
                  g -= (i+k*e+h-f+f*k+f+h-g-j+h)%100;
                  k -= (a-m-b-n*l+j-m+k+e-f+m+i+a)%100;
                  c += (d+d-m+f-i*i-m+c)%100;
                  a -= (n+f-f-c*h+h-j-m-l)%100;
                  l -= (b+i)%100;
                  e -= (n-n)%100;
               }
               break;

               default:
               {
                  e -= (d-n-i-e)%100;
                  m -= (i-k-i+e*l+e+l-c)%100;
                  e -= (j+d-j+k+k-k-d-m-l*g+l-h+a)%100;
                  j -= (j+n+m-c-g-d-d-e-f)%100;
                  j -= (d-j+h+i)%100;
               }
               }

            } while( ++DOcnt[38]%5 );
            if( ++IFcnt[29]%10 )
            {
               if( ++IFEcnt[38]%2 )
               {
                  n -= (l+h-j+n*b*h*c-d-d+c*b+d+b+c)%100;
                  l += (f*k-n-e+l-l-h+a-h+h+j*b)%100;
                  l += (c+a+n-g*k*e+d-k-l*a)%100;
                  d -= (l+n+f+f-d+f*l-b-l-e+f)%100;
                  i += (k+h+b+n-e+n+l)%100;
               }
               else
               {
                  k += (m*f+a-h+l-g*g+d)%100;
                  h -= (k+d-k+h+c+b)%100;
               }
            }
            while( ++WHILEcnt[38]%5 )
            {
               do
               {
                  h -= (d*c-i-h+b+g-k+k-l-h)%100;
                  b -= (f+n-e*n-b-n+n-l+n-k)%100;
                  b -= (k+i)%100;
                  e += (i+m+d*l+a+i*h-l+k+f*j+g+c)%100;
                  h += (f-i+a-k)%100;
                  m += (n+i)%100;
               } while( ++DOcnt[39]%5 );
               for( ; ++FORcnt[58]%5 ; )
               {
                  l += (f+m+h-i-k-a*b-a+a+a+i)%100;
                  g += (k+f-i+k-g-l-a*k+e-c*a)%100;
                  m += (e-k+c+e*d-d)%100;
                  j  = (j+n+j+g-b-f*j)%100;
                  f += (k-f)%100;
               }
               for( ; ++FORcnt[59]%5 ; )
               {
                  e -= (h+c+m-m+k)%100;
                  i += (h*i-c+g+k-d+j+f-j+n)%100;
                  e += (i-j+n-b*i+f*j+n)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  a += (a-l-d*f+l+h*h*n+b-h+n-c)%100;
                  n += (j-l+i+a-k)%100;
                  a += (n-f*g+f-b-a)%100;
                  a += (a+j+m-j+b+h+n-l*m)%100;
               }
               else
               {
                  k  = (e+j+k*i+m-l-b+l+b*f*h)%100;
                  i += (e-k*k-e-m+h*f)%100;
                  h += (j+d-d+j-k-h*c)%100;
                  j -= (a*m-g+k*j*l-g*c+g+b)%100;
                  h -= (k+f*j-h-h+k+k-d-j+c-e)%100;
               }
            }
            a -= (g+m)%100;
            m  = (h+c+b-b-h+n*d*d-d+b)%100;
         }
         g += (m-l-e*m-i-h+b+k-c+h-n*a)%100;
         h -= (h*h-n-h-m+h-c-h+d)%100;
         l -= (e-a+f+g+g+b+d+n-b-n+h-n-c+n)%100;
         g -= (n+m)%100;
         g += (h+b+b+j-n-d-e*a+n)%100;
      }
      b  = (i+b)%100;
      n  = (e-k)%100;
      e += (a+n*e-g)%100;
   }
   e += (m-d-j*k*k-e-e-i-a)%100;
   c -= (k-m)%100;
   e += (b-e-l+m-c)%100;
   d -= (h-j+h*i*j*e*i*m+j*b-m*k+j+i)%100;
   e += (j-m+c*e-a-m+j-h-b-k)%100;
   a -= (d+j+c*a-j)%100;
   d -= (j+m*h+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F19(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[41]%5 )
   {
      do
      {
         if( ++IFcnt[31]%10 )
         {
            h  = (d-n+f*d+m)%100;
            for( ; ++FORcnt[62]%5 ; )
            {
               
               switch( ++SWcnt[20]%4 )
               {

               case 1:
               {
                  i += (d-l)%100;
                  g += (c*n-a+k+n+n+m+m*c+c-d+b-a)%100;
                  i += (m-i+h*b-n*c-b+i-h-m-d*m*m+d)%100;
                  k  = (k+g+n-l+g+d-e+j-n-a+b*e-k)%100;
                  e += (l*l+e-m-e-k*d-m-c+f*b-e*k+m)%100;
               }
               break;

               case 2:
               {
                  b += (j-i-f-j+l)%100;
                  k += (n*h-k*f+d+g-m-d*e*l)%100;
                  c -= (e+i-e-m-f-g+i+f+m-f-j)%100;
               }
               break;

               case 3:
               {
                  i += (n+n+k-j+a)%100;
                  b += (f-g*m-k+i-d)%100;
                  m -= (a-a*c)%100;
                  n += (m*i)%100;
                  h -= (n+b*c+f-m-k-n+f-g)%100;
               }
               break;

               default:
               {
                  c += (a*n+g-e+e-n+k-f-n+a-g+k*l)%100;
                  b -= (a*h-b-f+c*f)%100;
                  j -= (l*e*a-i+g*c+h+c+a-f)%100;
                  c += (h*l)%100;
               }
               }

               if( ++IFEcnt[41]%2 )
               {
                  m += (n+a-e+m+b+a*g-m+c)%100;
                  e += (g+i+b*l+j-k-e+i-j-e+e-f+d+j)%100;
                  h  = (a*n+k*c*b+f+m+m+h-f-k)%100;
                  i  = (k+e+h+g)%100;
                  c -= (h-g-f*l+n*n+m*m-i+k-f-f)%100;
               }
               else
               {
                  j += (d+h+j-k+l+i+e+l)%100;
                  k -= (c-i+j-e-j-l-f-j)%100;
                  f += (e*l-f*l+k+m-f+a-d)%100;
                  i += (g-c*c-b-k-k+k-d*l+f)%100;
                  i += (e-i+n-h-g-g+n+e-i*d+i)%100;
                  h += (d-j*g*i*e)%100;
               }
               while( ++WHILEcnt[40]%5 )
               {
                  d -= (l+e)%100;
               }
               do
               {
                  e += (i-g-j*l+d+l*h+m-j-h+b)%100;
                  l -= (j+n+f*c+b)%100;
               } while( ++DOcnt[41]%5 );
               for( ; ++FORcnt[61]%5 ; )
               {
                  g += (e-i)%100;
                  e -= (e*d-d-a+f+k+i+d*b)%100;
                  i += (l+n-b+m+i)%100;
                  j -= (l-c+d*g+c*k-i+g-m-c+d*e+a+h)%100;
                  b += (m-b-j-d-k+d+h+d-i*n+f+c)%100;
               }
               if( ++IFcnt[30]%10 )
               {
                  k -= (b+c+h-a+d)%100;
                  g -= (k-k*c*k*k+e*g+c*n*n-k-f+b)%100;
                  n -= (l+n*i*h-d*e+a*k+f)%100;
                  e += (l+i)%100;
               }
            }
            for( ; ++FORcnt[63]%5 ; )
            {
               if( ++IFEcnt[42]%2 )
               {
                  d -= (m-f*j+c)%100;
                  m -= (i*f+h-b+d-h-g-h-l*c-f*l*f)%100;
                  i -= (c-k-f-n+m*f-d*a-a+a*n-h)%100;
               }
               else
               {
                  j += (l-l-i-e*n-d-c)%100;
                  i -= (n+m-k+h*f-d+a-a)%100;
                  c -= (n+a+b-f+c+f-b+m-e-h)%100;
                  g -= (j+i)%100;
                  e += (e-e*k+f+d-g-a*a+a+g-f)%100;
               }
               e -= (k-l+k+j-k+m)%100;
               n += (a-a+i+e+i*a-b)%100;
               m -= (m-k+f+i)%100;
               i -= (e+b-k)%100;
               j += (h-l*g-a-c-c*e+c)%100;
            }
            g  = (d-e+e+k+d*e-g+g-e+g*h+i)%100;
         }
         i  = (d-l+f+l*a+e-d+k-d)%100;
         b  = (g-l+d-f-k-a)%100;
         d += (i+k-j-g)%100;
         b -= (a-b+i+k+e)%100;
      } while( ++DOcnt[40]%5 );
      f -= (f+m-f)%100;
      k -= (h+g)%100;
      m += (l+n+e-d)%100;
      i += (k+d+l-m-h-l-f)%100;
   }
   b -= (c-j*i+n-n*i*c*l-h-c-m)%100;
   l  = (i-l+b*e-g+g-h*c*h-b*h)%100;
   f += (l+l)%100;
   b += (l+g-h-c*d+d+m-f+g*d)%100;
   i += (e-l)%100;
   h += (j+d-g)%100;
   h += (a-d+h-b*m+a*g-e+d*m*j)%100;
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
         a -= (a+g+n-m*k-l-l+h-n+d-j+k+n*n)%100;
         for( ; ++FORcnt[66]%5 ; )
         {
            
            switch( ++SWcnt[21]%3 )
            {

            case 1:
            {
               if( ++IFcnt[32]%10 )
               {
                  b += (m-i-c+e+g+g*k)%100;
                  f += (e+m-k-e+d-n+b-c*n-j+f+l+i+l)%100;
                  n -= (h*f-e+j-h+g-j)%100;
                  m -= (f*d-c-f+h+b*e)%100;
                  f += (n+i+e)%100;
               }
               if( ++IFEcnt[43]%2 )
               {
                  n += (m-k*n+k+a+j*c-h-n+k+n-b*m+d)%100;
                  j -= (e*b*a)%100;
                  e += (h*e+a-k*b*j-b-f+a-b-j+f)%100;
                  a -= (b+f)%100;
                  f -= (n+d+l*b+k*g+c-d+d-m-k-l)%100;
                  a += (j+k*g)%100;
               }
               else
               {
                  j += (j-f*n*g+n-i+h+f-k*g*g-g+b)%100;
                  n -= (c*h-i*a+n*b*e*e)%100;
                  d  = (n*n-m-d+m+e)%100;
                  g += (k-a*c-j+a*f-m*i-c+a)%100;
               }
               while( ++WHILEcnt[42]%5 )
               {
                  c += (h*m*h)%100;
                  n += (n+e)%100;
                  a -= (e+j+n+c*l+c-c+a+n-g-a)%100;
                  m += (f+f-b+k-a)%100;
                  j -= (i-l)%100;
               }
               do
               {
                  l += (a+k+f-m-e+f-h+j-k+k-b)%100;
                  g += (d+m)%100;
                  b += (f+n+c-l+e*l+e-c+f+d-a-j+k-n)%100;
               } while( ++DOcnt[43]%5 );
               for( ; ++FORcnt[64]%5 ; )
               {
                  i += (c-i-m+g-k-i)%100;
                  a += (n*l+i*j-i-a*b-j+k+b*k-c*l-f)%100;
                  e -= (n+a*i-b*c-k+i*g*f+l)%100;
                  d += (e-n+l+k*b+a+a-n*d-i+g+n*n)%100;
                  l += (b+d*j+d-c*n-k-d+m*d*f)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[65]%5 ; )
               {
                  i -= (h*c-b*j-n+d*b+l-k+f+c)%100;
                  e -= (f-d*e+g-j+l+f-l)%100;
                  i -= (m-j-g+e+f*h+e+f)%100;
                  c += (j-l)%100;
                  i -= (g-a*l-e-j+a)%100;
                  a -= (e-f-b+e-g-a+e+n*c-k-d+k)%100;
               }
               if( ++IFEcnt[44]%2 )
               {
                  e -= (n+k-c)%100;
               }
               else
               {
                  h += (e*a-g-j-j+b+m+a-g+k-m)%100;
                  b += (k+a*g+j+i-m)%100;
                  l += (g+l*d+c-k-j+l-k+k+k)%100;
                  k += (b+e+c-k-h*m*h+a*h)%100;
                  b += (i+c+m+i+g-i*b+l-i+m-b-m-n+h)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  l += (k+e)%100;
                  d += (l+c+f+e*c+d+m+a)%100;
               }
               do
               {
                  c -= (d*j-e-j*n-h-b-d-k+b-e+c+k-j)%100;
                  i += (f+j+m-l*j-l*k+n+b+e)%100;
                  k -= (f+b-j+d+h*b-h-h+l+b+j*k-k)%100;
                  i -= (d*n-n+c-h)%100;
                  a += (f+a*c-n+b*f+j+a+n-l*c-k-c-e)%100;
               } while( ++DOcnt[44]%5 );
            }
            break;

            default:
            {
               if( ++IFcnt[33]%10 )
               {
                  g += (b-d-h-e)%100;
                  j -= (k+c-c+e*k-e+b+k*i-d-g+k-j)%100;
                  c  = (a+e-f-j+h*d*h+m)%100;
                  c  = (m-c)%100;
                  g -= (d+k+h)%100;
                  f  = (n*k-i*d+h+e+k)%100;
               }
               c += (b*n*k+d)%100;
               n -= (h-n-l+k+l+d+i*a*h+l-d)%100;
               d += (k+m+b+a*n*g+b-n)%100;
            }
            }

            j += (g-i-m+b-m)%100;
            c -= (d+g-a+d-m+m-m+i-c+e*i)%100;
            b += (m-i+n-i*g-i+n*m*i+g-d+h-h)%100;
            h += (d-m-c+n)%100;
            n += (e+l)%100;
         }
         c -= (m+h*c-n+g-b*d-l-g*e)%100;
         e += (b-k+k-g-a+m)%100;
      } while( ++DOcnt[42]%5 );
      c -= (i-d+m*e+n-f)%100;
      h += (j*l-b-n+e+j-h-n+j+j)%100;
      f += (m-b*d-i-i+m-f-l+a+k+f+n-c+a)%100;
      l += (m+n-c-g-a*c-n-m+m-e+b-a+b)%100;
   }
   c -= (h-m-m)%100;
   n += (j*g+c+i-k-d-k-m*i-i+d+d+g)%100;
   l  = (a-l-i-f)%100;
   d -= (e+j-k+n-k*d-a-l)%100;
   b -= (g+f-m+h*m)%100;
   e += (g-b-m*c-a-j-k)%100;
   n += (g*m+a*j+k-e-g+k-a-d+n+m+d-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F21(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[22]%3 )
   {

   case 1:
   {
      for( ; ++FORcnt[70]%5 ; )
      {
         k += (j+l-a)%100;
         if( ++IFEcnt[46]%2 )
         {
            f += (f*b*g-f-a*d*a*d*c)%100;
            g -= (f*j-l*j+g*h-j+f-m)%100;
            m -= (i+n-m-m*k-n*f-e-g*m-j+b+b)%100;
            e += (f*a+i+d-a+n*l+l*l+i*i+i-a-j)%100;
            m += (g*c*e+c+c-e)%100;
         }
         else
         {
            while( ++WHILEcnt[45]%5 )
            {
               do
               {
                  n  = (k-d-n-c)%100;
                  g -= (j*d-j+h+i+i-g+c*j)%100;
                  d -= (j+j)%100;
                  d += (b-a+h*j+c-e-l+f+i-n)%100;
                  g -= (i-b*i-e-h)%100;
                  d -= (h+k-k-d+c+n-h+k*d)%100;
               } while( ++DOcnt[45]%5 );
               for( ; ++FORcnt[67]%5 ; )
               {
                  n += (g-j+n*d-a-k-e+a-f-e+n)%100;
                  g += (j+m+a-f*b)%100;
                  e += (g+k*f*l-n+a*b-g*j-h*e*m)%100;
                  i += (c-m+l-k-l+k-n*l)%100;
                  c += (i-m-d-i-m*n*n+n)%100;
               }
               if( ++IFcnt[34]%10 )
               {
                  i += (c-j+d-j+a*c+c+i*c*k+c+a+a)%100;
                  b -= (b-a+a+g+b-k*e*f+l-l-c*n)%100;
                  h  = (a+m*i+c-e+h+a-j)%100;
                  b -= (d+m-j+n+c-h+e-k*i-e-c+k)%100;
                  b += (a+d+e+e-d)%100;
               }
               for( ; ++FORcnt[68]%5 ; )
               {
                  a += (d+a-a-c*d+l+a+b*n)%100;
                  e -= (d+e)%100;
                  e -= (l*j-f-f)%100;
                  h += (c-e+b-n+h+e+k*c-m*a-j-l*c)%100;
               }
            }
            if( ++IFEcnt[45]%2 )
            {
               a -= (f-m*l-m+g-d-k-n*n+g+e)%100;
               k += (e-m-m*a+f)%100;
            }
            else
            {
               while( ++WHILEcnt[46]%5 )
               {
                  h += (h+e)%100;
                  n  = (k-c*l)%100;
                  b += (k*g-e-h+f+m+k-a-b-a-m-m-g)%100;
                  i -= (e+a*d+c-n*k*b+e-m*f*l+d*g-g)%100;
                  a += (d+a-d-l-l)%100;
               }
               do
               {
                  n += (j-a+k-a+f+k*j)%100;
                  d += (l+k-d+n-i+l-j+i-l)%100;
                  b -= (g-f*h-k+a-e+j-g+j-e+h*k)%100;
               } while( ++DOcnt[46]%5 );
               m += (l-n-g+a-h-h-n-h)%100;
               for( ; ++FORcnt[69]%5 ; )
               {
                  k += (i-f-l-k+b)%100;
                  m += (c+n*g*n+l+e+f)%100;
                  m -= (e+i+i+h+a+h*h+a-a*m+e*g)%100;
                  l += (l*d-k+b+c+d+b*n)%100;
                  k += (f-c*g)%100;
               }
               
               switch( ++SWcnt[23]%4 )
               {

               case 1:
               {
                  n += (m+c-k*i)%100;
                  i -= (h+i*m+b-h)%100;
                  j -= (j+m*h+l-e+l-d*j*n*d*l-n-a-i)%100;
                  n += (i-n+l*n+b*g+m+k+b+f*f+b-l+n)%100;
               }
               break;

               case 2:
               {
                  b += (h+i-k*f*l+k-g-e+d-d+c-a)%100;
                  d  = (c-l-h-f+g+m+j)%100;
                  f += (h+k-f-b-f*a+d+n*i-b+e)%100;
                  b -= (a+a+l+l-i*h+d-e+k-e)%100;
                  d -= (m+h)%100;
                  k += (f-i-a*a+g-g+e)%100;
               }
               break;

               case 3:
               {
                  k  = (m-g+d*h-d+l+a-i+j+f+e)%100;
                  a += (k+b*n+d-d)%100;
                  n  = (g+h-e+e*i+d*g)%100;
                  f -= (d-g-c)%100;
                  d -= (n+j)%100;
               }
               break;

               default:
               {
                  k += (a-k+i-m+l+e+c*g-n-b*b+e+e+b)%100;
               }
               }

               c -= (e-c)%100;
            }
            k  = (k-a*b+k+n*g-h-a)%100;
            h += (h+c+g+n*k-c-l-n+c*h-k+j+h+l)%100;
            j += (d*b+h+a+k+e-b*d-a+h*c-l)%100;
         }
         k += (k-c+b-a+k-h-f+g-m*b*n)%100;
      }
      h += (h-e*b)%100;
      j += (b+a-f-d-k+k*a-a)%100;
      l  = (h*d-l+n*n-a-f*e+i)%100;
      g += (e+l-n+e*m*h*n*i-h-i*a+c+h)%100;
   }
   break;

   case 2:
   {
      c += (e+n-i-l+e-m+c+c*g+a)%100;
      m -= (h+f)%100;
      e  = (j-i+b*g+n)%100;
      n += (k+d-f+k-h-j-f-m)%100;
   }
   break;

   case 3:
   {
      b += (d+n+d)%100;
      k -= (d-g+n-h-e+i-i+b)%100;
      e -= (j+j*f+e*a+m-c-k-m*d+j)%100;
      e -= (a-h)%100;
      k += (h+k*h*a-g*n+l-b-k-m+a*d)%100;
      d -= (d+k+d*c-l-b+d-f*g-a+f+f)%100;
   }
   break;

   default:
   {
      f += (g-l-a*n*j)%100;
      n += (b+i-k+g-a-l-m-i-j-i-i*m-m)%100;
      n += (h+c*a-j-f-e)%100;
      k  = (a-j*n*c*a-m-b)%100;
      i -= (i-k+g*m)%100;
   }
   }

   a += (l+f-i-n+g*h*h*d+b)%100;
   h += (j-m+n+j*n-l*i+b-a*g-j+f)%100;
   h -= (h+a-d-a)%100;
   i -= (f*b*k+e-d+j+n)%100;
   m += (n-g*f+f+j)%100;
   l  = (f+n*f*e+l-m)%100;
   m += (d-f-j-f-i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F22(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[36]%10 )
   {
      if( ++IFEcnt[48]%2 )
      {
         h += (l*j+k-f)%100;
         m -= (f+a)%100;
      }
      else
      {
         while( ++WHILEcnt[48]%5 )
         {
            do
            {
               for( ; ++FORcnt[71]%5 ; )
               {
                  l += (b-h*n+f+j*b*d+d-h+m-b+h)%100;
                  j += (e+j+c+g-c+c-g+c*a*n)%100;
                  b -= (j+a-c)%100;
                  m -= (g-f*k)%100;
                  n -= (i-h+e+h+g+g+l)%100;
               }
               for( ; ++FORcnt[72]%5 ; )
               {
                  e -= (l*i-h-a+m-c-g*a-m+d-c+k-b)%100;
                  j += (g*e-f-l*l-g+l-h+h+c)%100;
                  n += (i*e-l-f*f+i-f*d+a)%100;
                  g -= (f*h)%100;
                  c -= (n+l+j+f-j+f+c-n+b+n-g-f*i)%100;
               }
               if( ++IFEcnt[47]%2 )
               {
                  a -= (c-k-k+c+a-h)%100;
                  h -= (f-a)%100;
                  b += (i+a-i+e+n*n-i+d-d-l-m+e-j)%100;
                  e -= (a+e-e-m+d)%100;
                  i -= (h+h+b-f+e-h*i+m+m*f+g+c+b)%100;
                  d -= (g+e+i-i+i-g+n+l)%100;
               }
               else
               {
                  i += (a-i+h+l+j*d*d+k)%100;
                  c -= (n-j+c+j)%100;
                  i += (e*g+h*c+l-n*i-g+f+n+b)%100;
                  i += (c+e)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  j += (i-g+n-c*g)%100;
                  j += (l+a+c+h-m+c*f)%100;
                  b -= (g-a*l+c-k-j-g*h+n*f-k*i-b-l)%100;
                  j += (g-b+g-i-d)%100;
                  l -= (f*k-h-k+j-c+f+d-i+d-a+a-f+j)%100;
               }
               do
               {
                  m -= (c-h)%100;
                  f += (k-j-f*d+k*n+f-n*i-c+n+h)%100;
                  e += (e+f+n*h-h+d-a-d-c+l+c+d+e)%100;
               } while( ++DOcnt[48]%5 );
               if( ++IFcnt[35]%10 )
               {
                  d -= (k*c*i+n+i+k-e-l-h+c*f*e+b-k)%100;
                  f -= (a*n*c)%100;
                  f -= (a+a-l*m-n*g+j-g+c-i-c-a-e)%100;
                  d -= (b+a+n-k-f*i)%100;
                  i -= (h*e+a+c+c-k-a*g*d+a*b+c)%100;
               }
            } while( ++DOcnt[47]%5 );
            g += (m-h*k-a-m)%100;
            for( ; ++FORcnt[73]%5 ; )
            {
               
               switch( ++SWcnt[24]%3 )
               {

               case 1:
               {
                  e  = (m+e+d-d-d-j-h*k+i-j*f*i+g-c)%100;
                  c -= (h-j)%100;
                  a -= (a-h+c+c+h*e-n-m+i-j+a+c-c)%100;
                  d -= (g+b+g+b-g+j-m-g)%100;
                  j -= (l+d+h*h*f+l-d)%100;
                  l += (c-l)%100;
               }
               break;

               case 2:
               {
                  b += (c-l)%100;
                  d -= (d*m)%100;
                  h -= (d+f+c*h*m-d-b-n+b-i)%100;
                  i += (j-n+h)%100;
                  h += (a+g-l+l+g*m-f+e)%100;
               }
               break;

               default:
               {
                  f -= (j+g*b*e+f*j-g-e*n*l+f+h)%100;
               }
               }

               n -= (m+a-h-c*i)%100;
               g += (c-g-k)%100;
               k -= (c+c*k+f*m+g+i+b+n-m+d+d*m-h)%100;
            }
            d -= (g-e-j)%100;
         }
         f += (b+g+b+h-c-k+l*l-n-h+k-h-c)%100;
         e  = (c-n*l+i-m*c*c-e*m-k+j*g)%100;
         b -= (g-c-h-n*n*g+a*j-l-a-h+f-j-i)%100;
         h += (f*l-m+i-l*m-c+h-f-d)%100;
      }
      e -= (b+f*a-c-f*l-e*j+j*n+k-a-g)%100;
      b -= (i+i+f-m)%100;
   }
   m  = (g-l-b-k-l+n)%100;
   a -= (f-c+h-e-d+i+e+h-i*i*j+i)%100;
   h += (i-e*f+l)%100;
   d += (j*c-l-n+b-c-e-c-m*g+e)%100;
   c -= (k-n+m-n+n-l*g+f)%100;
   a -= (g*n-a+h*j+n-n-b-k-l)%100;
   f  = (f+h-l+c+m-m*i-k-m-k*i*b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F23(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[50]%2 )
   {
      n += (h*h)%100;
      l -= (d*h+e*g-n+k*c)%100;
      m += (f*c)%100;
      c  = (b-d-d+i-f+m+h+g-n+j+b-h)%100;
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
                  e  = (a+h+l-d+l-k+c+f+g)%100;
                  c += (h+j+j+d-b-d)%100;
                  k += (e+d*b*a+c-j-c-j-m+e-d+n-l)%100;
               }
               for( ; ++FORcnt[74]%5 ; )
               {
                  d -= (n*n+a+i-i)%100;
                  m += (c-c)%100;
                  f += (b-l+d+f-i+g+g)%100;
                  g  = (i+j+g*h+i+h+f-b-a-f)%100;
                  k += (c+n-c+j*e+k-n+k-i+c-g*g+i)%100;
               }
               if( ++IFEcnt[49]%2 )
               {
                  g -= (i+e-l-j+a+f+b*f+e-j)%100;
                  l += (m-j+e-n+d-e)%100;
                  j += (i-m+a*l*c*b*j*n+d-n*e-i-h)%100;
                  b -= (c-i*e-g-d+g)%100;
                  k += (m-e)%100;
                  g += (c+n-b)%100;
               }
               else
               {
                  n -= (k*l*f-a)%100;
                  h -= (m+e)%100;
                  d += (c+i-m-g*a*b+b+a)%100;
                  m += (k-d-k-k-e+a*e-h+m+j-c+h*f)%100;
               }
               while( ++WHILEcnt[49]%5 )
               {
                  a -= (i+n*c+d+g+b+l+m-j)%100;
                  f -= (a*k+a*n+g*f-h)%100;
                  g -= (c+k-c+n-c+d+l+g+c+h)%100;
                  i -= (j-n-f)%100;
                  d += (a+e+j-g+a*l*n-k+n*f+j)%100;
               }
               do
               {
                  k += (a+b*f-b+d)%100;
                  m  = (g*e-a-e-h*j)%100;
                  h -= (n*a+m)%100;
                  c  = (g-m)%100;
                  j += (m+m+a-k+c+j-c+n-m)%100;
               } while( ++DOcnt[50]%5 );
            }
            f -= (l+l+a*l+h*n-f+m-m+a)%100;
            for( ; ++FORcnt[76]%5 ; )
            {
               
               switch( ++SWcnt[25]%3 )
               {

               case 1:
               {
                  l -= (k-a-f+e+g)%100;
                  l -= (c+b-i+k-l-c)%100;
                  m -= (g+n)%100;
                  d -= (h+e+c-k*d-c+k*j+k-k-e)%100;
                  k -= (f*n)%100;
                  c  = (l-m-i-g+f-n*k)%100;
               }
               break;

               case 2:
               {
                  l -= (j-i-f+c+d-b+a-e*m+g+n-h-e-c)%100;
                  b -= (k-d*l-b-a-e+d-h*d)%100;
                  e += (d*b-i+b-k-a+i-g-f-h-m)%100;
                  n  = (n+m+n*e-d*m)%100;
                  a += (k-c+n+j-d-b*b*f-c+k-i+l+l+m)%100;
               }
               break;

               default:
               {
                  n += (k+m-c+h*m+d+b-f-f+h)%100;
                  m += (k-m-m+l)%100;
                  g -= (l-g-k*k+e+k+i-c+h*h-e-c)%100;
               }
               }

               if( ++IFcnt[38]%10 )
               {
                  a -= (a+l)%100;
                  a += (j-b-d-i*i*b)%100;
                  n  = (f+l)%100;
                  h += (l-f*k)%100;
                  f -= (f-d+f+i+e-k+m+h+k*a*g)%100;
               }
               a += (k*f-i+b-l-k+g*k+h-d*j-n-e*a)%100;
               c += (b-i)%100;
            }
            g += (n-m)%100;
            n -= (e-k-j-f-a-e-b*i+f)%100;
            i += (e-c-d-d)%100;
         } while( ++DOcnt[49]%5 );
         a += (c-m+j-e-h*l+f-j-m+m-l+h)%100;
         g -= (l+a+a*m*j-n+c-i-l*h+d+h)%100;
         i -= (e-f-f-b*l-m)%100;
      }
      d -= (c-b-d)%100;
      l -= (f-i-g*f-j-n-a*l-b+n)%100;
      c += (g-e+k)%100;
      l += (b+g+e)%100;
   }
   a += (e+c)%100;
   h += (k*g-d+l*h-j+m*e-k-m+k-n+m*a)%100;
   j += (a-h+g-h+c*f+i-e+c-k-g-j+l)%100;
   i += (c-c+d+n*n-e+f+g)%100;
   e += (a*k+k+e)%100;
   h -= (n-m*f*d-n*b*m+d-h-d+b)%100;
   n -= (n+j*k-l+i+c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F24(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[53]%2 )
   {
      m += (j*k-c+e+j+a)%100;
      l -= (h+f-l+n-g+e+h+h+a+h+m+f)%100;
      c -= (e-a-e-k-i*m-e-e)%100;
      n -= (j+j-h-h*e-h*l*h+k+k+f)%100;
   }
   else
   {
      while( ++WHILEcnt[53]%5 )
      {
         do
         {
            for( ; ++FORcnt[78]%5 ; )
            {
               for( ; ++FORcnt[77]%5 ; )
               {
                  n -= (m-a-m-d+j*f+j-g-n-b+b)%100;
                  m += (d+n+d+f)%100;
                  h -= (d+h+a*j-d*i-h+m)%100;
                  a += (j+l+k+f-h+m-k-f-b)%100;
                  c -= (i-l+n+h-f-l)%100;
               }
               if( ++IFEcnt[51]%2 )
               {
                  k += (b-c+f-g+c-m)%100;
                  j -= (c-l)%100;
                  l  = (g-d)%100;
                  j -= (j+c)%100;
                  f -= (c+g+d-e+i-j+d*h+f+a+g-k+j+g)%100;
                  f -= (n*d-m-j+i+c-c)%100;
               }
               else
               {
                  m  = (j-g-l-a-h)%100;
                  d += (h-c*l-a-l*a+b+k+h-c+m)%100;
                  f -= (m*i-k-b+l-a*b-f-j+g-c+c+i)%100;
                  m -= (f+f)%100;
               }
            }
         } while( ++DOcnt[51]%5 );
         while( ++WHILEcnt[52]%5 )
         {
            do
            {
               if( ++IFcnt[39]%10 )
               {
                  e += (d*k+m-m+c+c-g*j-m)%100;
                  k += (n+g+c+d+i*a+d+j)%100;
                  j -= (h*a-k+j-n+a*a*e)%100;
                  a  = (d-m*k-f*i+g+l+c)%100;
                  l += (h-e-c-f+f*a-m+f-a+c-c)%100;
               }
               g += (e-l)%100;
               for( ; ++FORcnt[79]%5 ; )
               {
                  h -= (i-e-d+e-l-l-d*g*c*f*g-g-e-g)%100;
                  k -= (h+c-g+h)%100;
                  l += (l*h*j+k+b*g+l+g-j-h*d)%100;
                  n += (e*g+k+m*n*m+l+b+b+d-n-k)%100;
               }
            } while( ++DOcnt[52]%5 );
            
            switch( ++SWcnt[26]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[52]%2 )
               {
                  f += (n+j+f+f+n*k+b-l-b-e+a)%100;
                  h -= (f-a-k-e-d*h+n-d+i-b)%100;
                  n -= (k-n+i*a*k+e-f*c+g-h+c)%100;
                  l += (m+d+b+m+i-c*e-l-d-f-k+h+b+j)%100;
                  a += (d+j+f*m*c*f+e)%100;
               }
               else
               {
                  m += (j+m*a-j*n*d+k+f)%100;
                  f += (i-b-f*n)%100;
                  j += (a+f+n+b-i+e)%100;
                  g += (c+j+h+d+g+f-i*b+d)%100;
                  c -= (g-c+m+k-c-g+c-c)%100;
               }
               while( ++WHILEcnt[51]%5 )
               {
                  k += (g+b+h-n+g-e+n-g*c+j+k)%100;
                  h += (l+n+h*f+m*a)%100;
                  g += (h+l*k-a*b*g-d*h-g)%100;
                  c -= (l-n+f+c-i-m+n+f-b+n+n+n+d-g)%100;
               }
               do
               {
                  f -= (c*i*b*i)%100;
                  g += (n-c)%100;
                  b += (e+d-i+c-m+c*m+g*m-k*f)%100;
                  g -= (c+h-d+n+e)%100;
                  a += (k*k*j-h+e)%100;
                  e += (b-l+f*b*i-c)%100;
               } while( ++DOcnt[53]%5 );
               for( ; ++FORcnt[80]%5 ; )
               {
                  n += (g-l-m*k-a+f)%100;
                  n  = (i*g+e+n+d*c*k)%100;
                  b -= (c-i-b-f)%100;
                  k -= (m-k*n+f+j+m+e+d-m*d-l+g*j*c)%100;
                  j -= (f-a+e+k-n+f+a+l+a+n-l)%100;
               }
               e -= (a+j*f-a+i-l+n+e-e)%100;
               e -= (l*m-m-m+m*m-e+h*f)%100;
            }
            break;

            case 2:
            {
               c -= (g+f-f+i-k+n-l-g+k-n-n*m)%100;
               c += (c-n+k-a)%100;
               i += (a-n-b+c-g-f-k-f+i+e)%100;
            }
            break;

            default:
            {
               a += (l*m+m*k-h+b+i)%100;
               k -= (g-a-a-g)%100;
               h += (a+j)%100;
               k -= (n-g*i-j-c+d+l-e-k*m+m-f+f+d)%100;
               h -= (e+c+h+m-l-k-c-m*l-b+b*g*g-n)%100;
            }
            }

            i -= (l-m-f+f-l-h-f*k+c-d-h)%100;
            n += (g-a+j-g-m+k-f*e+l-f-i)%100;
            m += (m-m)%100;
         }
         m += (b-f)%100;
         c -= (j-a+f*d-d*f+k-h*i+b)%100;
         g -= (a-d*j+c*b)%100;
      }
      m -= (c+m)%100;
      d -= (f-f)%100;
      n += (i-n-m*j*l*f)%100;
      i += (b-a)%100;
      b += (i*f+k-b+l*c)%100;
   }
   j += (f+l-h*l+f-j-l+b*b+m-d+e)%100;
   a -= (h+f-g+c*a-g*f+d*d)%100;
   c -= (e*j+b*f+i+i+b-k)%100;
   n -= (b*i+n+h+h*k)%100;
   d -= (l+l+g-d+c)%100;
   i -= (a-d-l+l*h+n-a-e+c-b-a+a)%100;
   f += (f+e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F25(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[41]%10 )
   {
      for( ; ++FORcnt[82]%5 ; )
      {
         if( ++IFEcnt[55]%2 )
         {
            for( ; ++FORcnt[81]%5 ; )
            {
               
               switch( ++SWcnt[27]%3 )
               {

               case 1:
               {
                  k -= (d*f*l+l)%100;
                  d -= (g+f-n+n)%100;
                  a -= (l-j-f-g-b-b-c+d-h)%100;
                  j  = (l+g)%100;
                  f += (l+g-k-f+g+n)%100;
               }
               break;

               case 2:
               {
                  g -= (l-a-m+e+j*m-k*c-d)%100;
                  m -= (l*a+i*c+n)%100;
                  g += (k*k+n-i*a+m-g-m+c*a*c)%100;
               }
               break;

               default:
               {
                  n -= (j-b)%100;
                  g -= (b+k-n-j+b-f+d+n)%100;
                  f -= (f+n*h+d*n-f-e+b-k-k*m)%100;
                  e -= (j-a+e+k-k)%100;
                  f -= (j-e*c+i+a*f-j-l-d*d-l-a)%100;
               }
               }

               if( ++IFcnt[40]%10 )
               {
                  a -= (d-d+i+j-e+i)%100;
                  k -= (j+b)%100;
                  d += (g-g-h*l*b-h-g+b-f*l)%100;
                  l += (k-a*c-e+g-d*i+d-h*m+l+m-b)%100;
               }
               if( ++IFEcnt[54]%2 )
               {
                  j += (l-a+g-f+a-h-i*i+d*n+g*f-a)%100;
                  e -= (f-n+b+m-l+c-a+d+b-b-n-a-l)%100;
                  f -= (l-m-k)%100;
                  g -= (n-i*c+b*e)%100;
                  c += (n*d)%100;
               }
               else
               {
                  f += (f-e)%100;
                  k -= (a+h-f-k-f+d-m*a-n*a*h)%100;
                  e -= (h-a-n+m*l-j+e+b*j-d)%100;
                  i += (d-m)%100;
                  m -= (d-d+h-n-d)%100;
                  k += (e-i+c-i-k-h*h-k)%100;
               }
               while( ++WHILEcnt[55]%5 )
               {
                  g += (e*j)%100;
                  a += (f-f-k-e+n-a-a-i)%100;
                  c -= (n*n+b*f-b+a-a-i+c-i*e)%100;
                  g -= (b-f*d+m+m-d-i)%100;
                  l += (f-a*k+j-g+d+j+g*b)%100;
               }
               do
               {
                  f  = (e+m-e*c-n-b+h*g)%100;
                  k += (h-m-e+k-m*e-m-a*m*c-b-g+k+h)%100;
                  h += (j-d+a-e+h*a-b+b+g)%100;
                  a -= (a+j+n-h*a)%100;
               } while( ++DOcnt[55]%5 );
               m += (f+f)%100;
            }
            k -= (b-d+c-a*j)%100;
            i += (b+c+d-j*g-l-j-e)%100;
            b -= (d-h*e+l)%100;
         }
         else
         {
            while( ++WHILEcnt[54]%5 )
            {
               do
               {
                  d -= (e*b)%100;
                  n -= (a-m-a-g+j*h+e*e+a*i-c+h-k)%100;
                  i -= (e+f*l-g-c+h-c)%100;
                  g  = (d-f+j*g*l*e-l-j+l+a+n-c*i-g)%100;
                  g -= (m-f-i-d+d-h*n)%100;
               } while( ++DOcnt[54]%5 );
               b += (k-h+h+k+a-h-n*m-g-h+f)%100;
            }
         }
         n += (j*l*f*c+c+f+m+l-j+n+g*h)%100;
         c -= (c-c+f+k+g-c+c+b+g*g+l-c*f-b)%100;
         a -= (j*k-n)%100;
         g -= (i*h-i*c-k-b+h+k-m-a+m-i)%100;
      }
      c += (a-f-l-j-c*c-h-n)%100;
      m += (m+m-k*h-i-i+e*i+h+i+a-a)%100;
      h += (c-m*i+d*h+d+f+d)%100;
      f -= (j+d*j+i-m*k+b*h+j+l-j-m-c)%100;
      m += (n+a-c-c-h)%100;
   }
   j += (d+e-l+n-d*b-i)%100;
   g += (b+n+k*e-b+m-j+j+g+j+k-k*e)%100;
   n -= (k-c+h+n)%100;
   m += (j+c+c+h-k+c-d+g+m-m-j)%100;
   h -= (g*e+l*e+f+a+e-m+d+f+c+l+g)%100;
   g -= (d+l)%100;
   a -= (g*j-e+l+i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F26(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[87]%5 ; )
   {
      for( ; ++FORcnt[86]%5 ; )
      {
         if( ++IFEcnt[57]%2 )
         {
            e += (d-c)%100;
            h -= (e-f)%100;
            c -= (j+h+l+l+c+b-l+g)%100;
            k -= (e+d-g)%100;
            g -= (j*l+f-i+f*i)%100;
         }
         else
         {
            while( ++WHILEcnt[56]%5 )
            {
               do
               {
                  l  = (c-b-k-a-b-m+f+l*j)%100;
                  i -= (m*e-m-k)%100;
                  d += (f-c*d-f-h-k+c)%100;
                  l -= (f+f-k+h+l-j+k+m-c-j-n)%100;
               } while( ++DOcnt[56]%5 );
               if( ++IFcnt[42]%10 )
               {
                  n += (l-c+g*i*b-b-h)%100;
                  k -= (a+a+n*j-m+j)%100;
                  c  = (m+i)%100;
                  n -= (m+k+n+e+e+h*j-b-f-h+m+k+e)%100;
                  l -= (n+e)%100;
                  m -= (b-f*d+e+i+g+h+j+g-m-j+a-m)%100;
               }
               l -= (c+g-n-b*n)%100;
               for( ; ++FORcnt[83]%5 ; )
               {
                  j  = (n-c*c-l+n-n+h+l+f)%100;
                  i -= (h-m+k+j)%100;
                  e  = (h-h-d+b-b+f-l*m)%100;
                  c -= (d-n+i*j*l-c+n-k*g*k*d+d-i)%100;
                  h -= (e-g*c-h*m-j+l*d*j)%100;
               }
               
               switch( ++SWcnt[28]%3 )
               {

               case 1:
               {
                  f -= (g-f)%100;
               }
               break;

               case 2:
               {
                  d -= (h+g)%100;
                  k += (e+j-m-e+l)%100;
               }
               break;

               default:
               {
                  l -= (k*n-i+c+c-c)%100;
                  h += (l*k+g+e-e-i-m+j)%100;
                  m -= (l-i+h*f+f+d+m)%100;
                  e -= (d+i+f+b+e+l*l-j-m)%100;
                  e += (k*b+n-m*h+b+a)%100;
               }
               }

            }
            if( ++IFEcnt[56]%2 )
            {
               for( ; ++FORcnt[85]%5 ; )
               {
                  k -= (a-d+e+b+a-m*n)%100;
                  h -= (d+m*k+f-i)%100;
                  f += (l-m-m+i*j-b-j-g+a-c*n+c)%100;
                  g -= (a+k-m+g*a+c-n*l-e-l*f)%100;
                  i += (k*j)%100;
                  g += (h+n-g+n)%100;
               }
               f  = (j+l-b-d+a-b+e+g*f+f*m-k)%100;
               g += (g-k+a-f-b*b*k*l)%100;
               c += (g+j-f-c*h-l-a-i*n*j+j)%100;
            }
            else
            {
               while( ++WHILEcnt[57]%5 )
               {
                  c  = (g*d-e-f-a+i)%100;
                  c -= (j+j*d)%100;
                  e -= (b-m*e-n-f-c*l)%100;
                  g -= (k+a*g-i-c*h+k*d)%100;
                  i  = (a-k+f*k+n)%100;
                  b -= (k-a-b-e+i+l)%100;
               }
               do
               {
                  d -= (b*h-l)%100;
                  h -= (j+i-h+e*b-l+d*h*i)%100;
                  n  = (b+b+c+b+n-b*f+n*e+g)%100;
                  m -= (e+g+l*g*e)%100;
                  f += (a-b-l*k*c+g+h+n*m*l+a)%100;
               } while( ++DOcnt[57]%5 );
               for( ; ++FORcnt[84]%5 ; )
               {
                  d -= (g*b+f*f+g*l+m+c*m-c)%100;
                  k -= (h-a+a+h)%100;
                  d += (l+l+i-k+j)%100;
               }
               if( ++IFcnt[43]%10 )
               {
                  a += (n+g-i)%100;
                  m += (m-g+l-b+l-b-i-j-l+i-k)%100;
                  m -= (l+c)%100;
                  d += (n+i)%100;
                  k += (f+k+k*c-g-n-e)%100;
               }
            }
            j += (a+c+i-m-f-a*c)%100;
         }
         f -= (d+m)%100;
         n += (f*l+i*k-d-e+l)%100;
         f  = (j+n)%100;
         e += (m+d+d+h+c*g+n+k-b-c+m*c+e)%100;
      }
      b -= (i-f-d+j+e+k+e+m+f)%100;
      a -= (n+c-g*f-d+l+i*h)%100;
      j += (e+i*j-b+e-g*k+j+a-l+f-f+a)%100;
      a += (a+h-f+l-n-e+n-k-j-e)%100;
      a += (a-h)%100;
   }
   e -= (h+k+n-m+m*c-h+c-d-f*h+c+b-e)%100;
   e += (a-i+h*h*a+l-g-h-e-h)%100;
   g += (a-d)%100;
   i += (a+h)%100;
   l += (a+j+g*b*k-i-m-b-f-a-j+m-i+k)%100;
   e -= (i+i*b*l-g-h-g+a*b-j-l)%100;
   d += (d+h*n-a-n+h*g+a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F27(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[60]%2 )
   {
      m += (d-m-m*m+g-l+h+m+h)%100;
      d -= (m-f-n)%100;
      h += (e+a*g-m-d-e+c+h)%100;
      b -= (k+k-j+m)%100;
   }
   else
   {
      while( ++WHILEcnt[60]%5 )
      {
         do
         {
            m -= (c+e+e+g+c*d+i*i-a-m)%100;
            for( ; ++FORcnt[88]%5 ; )
            {
               
               switch( ++SWcnt[29]%3 )
               {

               case 1:
               {
                  g -= (c-c*j+g+n+h+g+b+n-h)%100;
                  e -= (c+b-l+l+n+h+g+n+g+n+e)%100;
                  d += (b+i-c)%100;
               }
               break;

               case 2:
               {
                  c  = (j-d+i*e-l)%100;
                  b -= (n+j-d+a+k+n+k+m-f)%100;
                  e -= (b-k)%100;
                  f -= (i+e*c-d+d-d+l-n-m-h)%100;
                  a -= (k+b+a-n)%100;
               }
               break;

               default:
               {
                  m += (a+a+a-e*i+i-h*j-l+k-f)%100;
                  c += (n*d+c+b-j*c-c-b+j+c+l*a)%100;
                  g += (h+k+e-f*n+e+n-b-m-c+h)%100;
                  g -= (n-n*i-h+a-b)%100;
               }
               }

               if( ++IFcnt[44]%10 )
               {
                  i += (d-g+h+g-f-l-l+i-d-h-j)%100;
                  f += (b*e*n-j-i)%100;
                  m  = (e-m-k+h-h)%100;
                  d -= (m-l+g+j+g+j-m-d*k+d-j+c+m*n)%100;
                  d += (e+k-h*c*g+f)%100;
                  e += (g+c-m-n-h)%100;
               }
               if( ++IFEcnt[58]%2 )
               {
                  e -= (g-k-n*k*g+b+c+l+j+b-d-f)%100;
               }
               else
               {
                  k  = (l+c+h)%100;
                  h -= (m-b-b)%100;
                  e += (c-j-i+c*a-d+b+l*i-i+g+g+f)%100;
                  j -= (d*m*l-j*e*b-l)%100;
                  i += (l+a+n-j+f+h*e+c*n-c*i+i)%100;
               }
               while( ++WHILEcnt[58]%5 )
               {
                  j -= (m+h-d*f*n+m-h+l+m+h)%100;
                  g -= (a*h)%100;
               }
               do
               {
                  b  = (k-b+c+g)%100;
                  f -= (c-b+f+f-f*e-l*e)%100;
                  c -= (f+i*j-c+a+j-h+e*f-i+h-m+e)%100;
                  i  = (d-d-a)%100;
                  b += (a-h)%100;
               } while( ++DOcnt[59]%5 );
            }
            for( ; ++FORcnt[90]%5 ; )
            {
               for( ; ++FORcnt[89]%5 ; )
               {
                  b += (h+k-i)%100;
                  b += (n+a-k)%100;
                  g += (e-c+h+a*k+d+k*c)%100;
                  c -= (c+f*d)%100;
                  k  = (n-h+k-e-g-c-c+f-j-j-g-k*h)%100;
                  e -= (l-n+a+g-m-d)%100;
               }
               if( ++IFEcnt[59]%2 )
               {
                  n += (d-l*c-k-c+n+d)%100;
                  i += (m+c*d-i)%100;
                  h  = (f-g*n)%100;
               }
               else
               {
                  i += (g+b+m-k+d*f-b-b*m-k-a)%100;
                  k -= (j+l+b-b*a-g)%100;
                  n += (i-a+b-k*g+c+h-f*f+l-k*m+d)%100;
                  c -= (h+b*e*m*f+b*n+h+k)%100;
                  l -= (e-i-c+e-m+m-j-b+h-i)%100;
               }
               while( ++WHILEcnt[59]%5 )
               {
                  k  = (j*h*a+c+m-n+a+n)%100;
                  f -= (j-f+k*i*l*e+i*i+l-l+f)%100;
                  g += (g-h+g+c-f-c-d*b+m-l*a+i+c)%100;
                  e -= (n+j)%100;
                  k += (e+c-l-h-c*m+b-b*k-b*l)%100;
               }
               a -= (i-b+d+a-b+h+l*g*b)%100;
            }
            m -= (g-k-k+e-i-f+h-c-f)%100;
            l  = (i+c-h-k*g-l+h*k-d-f+f*h)%100;
            b += (k-d-f*c+b-j)%100;
         } while( ++DOcnt[58]%5 );
         n -= (h+j-b*c+i-k+k+i-e-a*g+m)%100;
         i += (m+n+i-n*l)%100;
         h -= (m+i+e+k-d-f+h-h*a+l)%100;
      }
      m += (e*m+b+h*j-b+f+l-n+h-n-j-g)%100;
      e  = (h*g)%100;
      j += (i-e-e-h+e*j*m+b+m-l+d)%100;
      b -= (d-b)%100;
   }
   m -= (d-d*g+g+f*h+d-j-i-a+k-b+f)%100;
   k += (m-f)%100;
   e += (m+n*f*i-j+n-d)%100;
   n += (f+f*m)%100;
   k -= (i+d-c+m+i-h-f-h-a)%100;
   i += (i-a*a-l-g-n-i*l+l*i*j-h-m)%100;
   a += (n-m*g-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F28(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      if( ++IFcnt[46]%10 )
      {
         h += (f+i)%100;
         for( ; ++FORcnt[94]%5 ; )
         {
            
            switch( ++SWcnt[30]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[61]%2 )
               {
                  k  = (n*i+g)%100;
                  b  = (c-h*e-e-k)%100;
                  c -= (b+k+k+b-j-c+e+d+i-h+a*e)%100;
                  a += (h+h+j+g-n*c-f)%100;
                  k += (i-d-h-j*c-m-f-i+j+f-m)%100;
               }
               else
               {
                  a -= (d+i-l)%100;
                  e  = (e+c*i-l+m-n-h+h+i+h*n-c-a+i)%100;
                  c += (d-e+a*b*b+a-m-m*n+i+i*i+c)%100;
                  d -= (m*d-k-c)%100;
                  h -= (h*k+k+a+e)%100;
                  b -= (n-k-m*l)%100;
               }
               while( ++WHILEcnt[61]%5 )
               {
                  h -= (k+i*c*e+e+j)%100;
                  h += (a+e-c*g-g+l*c+n+j-c*n)%100;
                  j += (i+h-e-l+b-g)%100;
               }
               do
               {
                  m += (n+n-i+k*m+h+e+k-i)%100;
                  m -= (n-k+k+b-b+n+h-g+c-g+j)%100;
                  l += (d+g+g*n+d+f+i-b-l-m)%100;
                  h -= (j-i+i*g-j+e)%100;
                  l -= (a+k)%100;
               } while( ++DOcnt[61]%5 );
               for( ; ++FORcnt[91]%5 ; )
               {
                  n += (l*m+f-b+j+f+c-b)%100;
                  h += (f-g-g-h+m-m)%100;
                  k += (k+a+j-h+d-f+a+a+l-k-d-k)%100;
                  n -= (j+j*k-f*k+g-d+j+n+f+m*l-f*l)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFcnt[45]%10 )
               {
                  a += (i*a-m-l-k-f+k+e*b-a)%100;
                  n -= (a*f*h+h+h+f-j-j+b*d)%100;
                  l -= (k+g+c-c*e+l+g+n)%100;
                  d -= (f+m*k-c-n+a*i+n+f*n-a+l-i)%100;
                  a -= (k+m-e+g+g)%100;
               }
               for( ; ++FORcnt[92]%5 ; )
               {
                  a += (m+h*l+n*m-b+g+m-e)%100;
               }
               if( ++IFEcnt[62]%2 )
               {
                  f  = (k-g+d)%100;
                  g += (n+n+n+l-n*a-a+m)%100;
                  k += (i-n-m-j+m-j+f-h+d-f*j+c)%100;
                  c += (f+h-i-h*a-h)%100;
                  m += (h+k*a+m)%100;
               }
               else
               {
                  e += (j-l+f)%100;
                  c += (f+h)%100;
               }
               while( ++WHILEcnt[62]%5 )
               {
                  b += (e*b-j+i-f)%100;
                  b += (a*i-a-i+l+e+d+n+l+f-f)%100;
                  a += (j+c+c-j+l+n+m)%100;
                  n -= (h+l+a*a+f-c*f*g*b)%100;
               }
               do
               {
                  g -= (d-a-c-n+c-c-l+e-b-j*n*n+i)%100;
                  l += (m+f-k-l-g+c*l+b)%100;
                  h  = (f*f)%100;
                  i -= (j+e-k*l-h*n-b+b+c-j)%100;
                  i -= (f+i+m-j-h+i+j*n-b+e-i)%100;
                  b  = (e+n-i-h)%100;
               } while( ++DOcnt[62]%5 );
               b -= (d-i+m+n*e+f+a+f-h-n+e*j-d+m)%100;
            }
            break;

            default:
            {
               for( ; ++FORcnt[93]%5 ; )
               {
                  h -= (g+b*a*k+h)%100;
                  j -= (l-b*i-i+i-j)%100;
                  d -= (h+d+l*f-m*k+e+j+e+i*k)%100;
               }
               l -= (n-f-d+m-k)%100;
               c -= (i-m+a*b-d+f*i-g+i*b+j)%100;
               j += (a-l+k-j*d+k+j+a-g-n+e-j+a-m)%100;
               m += (c*g-i-b-f*g-k-g+g*k)%100;
            }
            }

            c += (j-a+n+b-k-l+d-i)%100;
            f -= (a-e+m+g-j-c+l+k*d-e-e+c)%100;
            k += (m+g-j+g-e-m*i+k-c-i+c-i-k+i)%100;
            f += (c+n+g+b-m-j*d+d*k)%100;
         }
         e -= (i*e-f-j-k*l-b-k)%100;
         b -= (c-i*h+b)%100;
         l -= (a+n*j-i*c-h*b*k+m+a-j-j-j)%100;
      }
      d -= (m+h*g*l-c+l*m)%100;
      b += (g*g-h-a-m+m+b-h+j+k+l+l+l)%100;
      b -= (a-h*b-j+d+h-e)%100;
      a += (i+k+a-k*m-f+e-g)%100;
      e += (l+j-j*b-g*l+l+l-c+a+j-m*f)%100;
   } while( ++DOcnt[60]%5 );
   a += (a*c)%100;
   k += (e-e+i+g-g+k)%100;
   h -= (c-b-e*l+f)%100;
   d += (g*e-d-j+l+k-j+d*l-l*a+a-m)%100;
   g += (c+d-j-b)%100;
   k += (e-l+n-c*e-j+m+j)%100;
   c -= (k+a-d-g-c-k*h*j*c-j*b-g-f+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F29(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[31]%3 )
   {

   case 1:
   {
      if( ++IFcnt[48]%10 )
      {
         if( ++IFEcnt[65]%2 )
         {
            g -= (c*n+h-i+d-m-b+i-n-a-i+i+i-a)%100;
            a -= (f-d)%100;
            c += (a-h+f-j-e-g-i*j*h*m+l)%100;
         }
         else
         {
            while( ++WHILEcnt[64]%5 )
            {
               do
               {
                  j += (d*a-l)%100;
                  f -= (f+g*j-n-d)%100;
                  g -= (n*j*a+j)%100;
                  c -= (e+l*b+f+d-j+d-b+d*i+c*h)%100;
                  e  = (c*n*c-h-b+n+n*g+f-l)%100;
               } while( ++DOcnt[63]%5 );
               for( ; ++FORcnt[95]%5 ; )
               {
                  b += (k*n*b-d-b-d*j)%100;
                  a += (d+b+g-h+e+c+f+l+k-m-f)%100;
                  l += (i+f*i-l)%100;
                  j -= (g-k+a*f*l*n-k)%100;
               }
               for( ; ++FORcnt[96]%5 ; )
               {
                  j += (l*j+i-c-c*j+e+k-f+g-b*i)%100;
                  e -= (n*k+m-d*f+e*a-f*g+h)%100;
                  n -= (e*a+f+m+k)%100;
                  h += (b+c+l+h+b+k*a+i+b+j*e+m*l)%100;
                  b += (h-g+m*f-g*e+b-f-b-d+j-f-j+h)%100;
                  f -= (l-e)%100;
               }
               if( ++IFEcnt[63]%2 )
               {
                  n += (n+i-h*h*e-m-b*c)%100;
                  l -= (j-j)%100;
                  l -= (d+f*b-a-h+d+l+d-n+a)%100;
               }
               else
               {
                  f += (e+i-i+i*h+f)%100;
                  g -= (m*l-h+k*j-m)%100;
                  l  = (m-g-a-h*k-n+i)%100;
                  j += (k-j+g-d-n-k-c+b)%100;
                  f += (e+g-m-d+n+d)%100;
               }
               while( ++WHILEcnt[63]%5 )
               {
                  c += (c*a+b+i-f*c+e+m+j+e)%100;
                  b += (g-l-l)%100;
                  n += (a+n+h+a-n-k*c)%100;
                  g -= (a-i+h-f+j*k-d*d)%100;
                  l += (n+i+m-b-l-h*c*e*f-b-d+c+g-d)%100;
               }
            }
            do
            {
               if( ++IFcnt[47]%10 )
               {
                  i -= (n*e+d)%100;
                  j += (b+f+n)%100;
                  e += (d+e+e-d+b*g+m)%100;
                  l -= (c+f-c+l-a*f)%100;
                  i += (n-m+d*n+a*m+e)%100;
                  j -= (l-k*e+m+k)%100;
               }
               i += (i-f)%100;
               for( ; ++FORcnt[97]%5 ; )
               {
                  i -= (a+l+f-m+h-f)%100;
                  d -= (a+b*h+g-g+j)%100;
                  h += (l-b-j+j*l-h+f)%100;
                  l += (i-c*m+j-k+n*j*e+a-b+e*j-c)%100;
                  l -= (k+m-k*f)%100;
               }
               
               switch( ++SWcnt[32]%3 )
               {

               case 1:
               {
                  m -= (i*g*d+d*b-b+l)%100;
               }
               break;

               case 2:
               {
                  j -= (f*j-m)%100;
                  c += (j-e*f+m-i-n*f+f)%100;
               }
               break;

               default:
               {
                  k += (f+c)%100;
                  c -= (d+a+a+h*a-g+h*j*j-g-n+i+m)%100;
                  l -= (a-a)%100;
                  m += (b-i*m+d-c-l-a+c-a+g*j+g+i)%100;
                  c += (d-b*f+n+i+f)%100;
               }
               }

            } while( ++DOcnt[64]%5 );
            if( ++IFEcnt[64]%2 )
            {
               b += (l+a+d)%100;
               e -= (b+n-h-n-j-d+b*e-c+m+f-e-m)%100;
               g -= (h+a+c+n)%100;
               f -= (i+a-c*g-g+i+h-b*b*e+n+m+g+d)%100;
               g -= (j+m)%100;
            }
            else
            {
               while( ++WHILEcnt[65]%5 )
               {
                  c += (a-b+n+e+i-i*e+j-c*b)%100;
                  n += (n-j+f-j-m-b)%100;
                  j -= (j+n-m)%100;
                  k += (c-f+b-m+k+n-f*f-m*d+n-l+m+i)%100;
                  f += (f*c+i*c+k-n*b-l-j-j-g*a*f-a)%100;
                  j += (m*f+n*h-n+k*i)%100;
               }
               n -= (b-l-j+k+h-g+f+d-e+d+e+d+n-l)%100;
               j += (i+c-c)%100;
               n -= (n+m*c*c-k-d*n)%100;
            }
            b += (a+d*f+l+n)%100;
            b -= (c+e-k-f-k*e-h+n*i*f+i)%100;
            a -= (d+n-i*m+n*c+c*b+b+h+j+h+g)%100;
         }
         l -= (i+g)%100;
         i -= (a-j-d*k+g-i+c-l+k*f)%100;
         d += (k*d+g+i-j-h*i+h-a+f-e-g*c)%100;
      }
      g += (a-f-h+i*d-g)%100;
      g  = (m+a-a-i+d+f+b-e+l+c-m-d+b-b)%100;
      e  = (l-e+m-h-f+c+h*l)%100;
      i += (l-a-m-c*a+b-c-l)%100;
   }
   break;

   case 2:
   {
      i -= (n+a)%100;
      c -= (m-g+c+a*j)%100;
      k += (g-f*c-l+f-k)%100;
      i  = (g-l+f*b+m+b-j)%100;
      e -= (n-m*e+a-j+m+b-f+f+l-m*c*a)%100;
   }
   break;

   default:
   {
      h  = (m*m-i+e+m*b)%100;
      i -= (b+e+c-d+j-e-i)%100;
      c += (e-i-f+f+j+j+i-a+d-a*k)%100;
      n += (f-b+e-h*n+k+l*i)%100;
   }
   }

   a -= (c-k*j*e-m+d-g*l*d-l+i*l-g)%100;
   h += (m-i*m-j+k+c-h+e+n)%100;
   l -= (c+b)%100;
   c += (e-d+j*a*g*i+i+f-f-n-d+k)%100;
   i += (f-a-g+l-g-b-j-h+m+n-m)%100;
   g -= (h-j*h+g+n-a*g+d-n+m-i+g-k*i)%100;
   b += (a*a-a+k*g-b*c-f+d*b-b-i-k-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F30(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[100]%5 ; )
      {
         if( ++IFcnt[49]%10 )
         {
            for( ; ++FORcnt[98]%5 ; )
            {
               if( ++IFEcnt[66]%2 )
               {
                  n  = (d*b-e)%100;
                  n -= (i+m*d+n+c-n-d+c-e)%100;
                  n += (d*h)%100;
                  e += (h-m*e*d+m+a-c*i-f+m*l-b-m+k)%100;
                  h -= (d-m*e-g-f)%100;
               }
               else
               {
                  a -= (c-i-i+g+b+n+i*i-d-i-e-i-m)%100;
                  a += (j*m-c-d)%100;
                  k -= (i-j+n+g*f+h+a)%100;
                  k -= (b*k-c-d-g-e)%100;
                  i += (d-n-m-f*f*h)%100;
                  f -= (m-a+m+m+d*b-i+d*i-e*e*k)%100;
               }
               while( ++WHILEcnt[66]%5 )
               {
                  n += (g*c-i-l-l+b+f-a+j-h)%100;
                  i += (k+e+l-j+k+b*c-e-j+f-n+d+l)%100;
                  c  = (n-e+m-c-m*m-m-f-j+h+i)%100;
               }
               do
               {
                  m += (e*e-j*c+n*n+b+g+n)%100;
                  a -= (l-m)%100;
                  f -= (g*c+h-a-e-j-d)%100;
                  f -= (i+b*l-h)%100;
                  g -= (d*e-a)%100;
               } while( ++DOcnt[66]%5 );
               l -= (d+l)%100;
            }
            for( ; ++FORcnt[99]%5 ; )
            {
               
               switch( ++SWcnt[33]%4 )
               {

               case 1:
               {
                  a += (g-c-e*a+b-n)%100;
                  m  = (b-i-m*g*f-f*n-a-i+i+a-f*a)%100;
                  k -= (f-i+k+e+m+a+h-f+c-e+n)%100;
                  g += (c-l-n)%100;
                  l -= (b-i-l+c-m-g-f*j*c-a-b+g+g-n)%100;
                  n -= (g-c-m-c+m-n-i*f-d*i+j-e)%100;
               }
               break;

               case 2:
               {
                  d -= (m+f+e+i-i*g+g+a+b+k+a+i+j+k)%100;
                  l += (i+k+j-i+d)%100;
                  f += (h-e*f-h-b-d)%100;
                  l += (i+k-f-m+m-b-i-a+j)%100;
                  c -= (c*l*h+k+b*j)%100;
               }
               break;

               case 3:
               {
                  g += (a+f)%100;
               }
               break;

               default:
               {
                  g -= (i+e)%100;
                  g -= (g-m-j)%100;
               }
               }

               m += (e+a-k-g+n-h-e-m-n-e-n)%100;
               k += (k+k+l+f+h+e+j+k-f+m-h*i)%100;
               d -= (h-m+b+m+j+j+d+i*e+i)%100;
            }
            f -= (l-j+h-f)%100;
            h -= (d+h+d-e+b*k+l-h*n)%100;
            d -= (c-g+d+k+d*l+n)%100;
         }
         m += (n*f)%100;
         l += (e-b+f+c*l-e)%100;
         f -= (h+g*n-k+e*n-f+c-d)%100;
         n  = (b+a+f+c+h+f+e+l+a-c+a)%100;
      }
      m -= (i-i)%100;
      m -= (k+b+i-i-c-f+d+m-h)%100;
      l += (m*a*j*n-n*k-b)%100;
      g += (n*a)%100;
      i += (n+j+e-k*a+l*h*b-h)%100;
   } while( ++DOcnt[65]%5 );
   f -= (f+h+m+f+b*n)%100;
   f  = (e-h+i*g+h+a*i)%100;
   f += (a-n+e-c+f)%100;
   i += (m+g-e+i+e+d)%100;
   k += (l-f*e)%100;
   a -= (e+n+l-e+a-c*a*f+h-j)%100;
   f += (f-d+c+n+i*b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F31(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[51]%10 )
   {
      if( ++IFEcnt[69]%2 )
      {
         a += (f*n+h*l-e*k-c*m+l-a-i*m)%100;
         d += (k+c)%100;
         k += (d-b-i)%100;
         g += (j-j*j-i*j*i+c)%100;
         j += (a-g)%100;
      }
      else
      {
         while( ++WHILEcnt[68]%5 )
         {
            do
            {
               for( ; ++FORcnt[101]%5 ; )
               {
                  f += (h-f)%100;
                  a -= (h*l)%100;
                  h += (h-a+n-b-j+j-j-i-f*i+e*m+n*i)%100;
               }
               for( ; ++FORcnt[102]%5 ; )
               {
                  f -= (n+n*m-g-h*k+d+l-e-l+l+b-a+j)%100;
                  h -= (k-f*l-j-e*e*c+b)%100;
                  f -= (g*m+f)%100;
                  a -= (j+e-n+m-j-e)%100;
                  f -= (b+f+k+i-d-l*l*m-b+h+i-b-i)%100;
               }
               if( ++IFEcnt[67]%2 )
               {
                  e -= (j-e)%100;
                  d -= (b+f-a*d+h*e+i*f-d)%100;
                  m += (g-b*m-j-g-a-a+d)%100;
                  e -= (c+e-n)%100;
                  n -= (g*f-d)%100;
                  a -= (h*n+c-g+f*c-j+j-j*b+h)%100;
               }
               else
               {
                  a -= (c-j*h+k-i+i)%100;
                  m += (a+d+a-n*h-j+m+a-d*k-c+k)%100;
                  l -= (j-j-i-j)%100;
                  i += (e-h)%100;
               }
               while( ++WHILEcnt[67]%5 )
               {
                  e -= (f*h+b-b+a+n+g+b)%100;
                  k -= (c-c)%100;
                  l -= (f+k-g*a-j+l*c-d+l+a-a)%100;
                  h -= (e*e+a+b*m-i-g-b+n)%100;
                  c += (j+b-h-f-f*n+l-g+g*k*j-c*e*e)%100;
               }
               do
               {
                  n += (c-m-f)%100;
                  i += (l*h+i+l-e-k-h+h*h-g*k-e)%100;
                  g += (j-l*j-e+a*f*d+j+l)%100;
                  m  = (m-e-e)%100;
                  k += (i+i*g+l*c-b+c-d-d+g-c+c+f)%100;
               } while( ++DOcnt[68]%5 );
            } while( ++DOcnt[67]%5 );
            if( ++IFcnt[50]%10 )
            {
               b -= (f+n+n+c+f-g)%100;
               for( ; ++FORcnt[103]%5 ; )
               {
                  j -= (c-b+g+e-f-d+m-g*d*b-e-f-k)%100;
                  i += (l-b-g*n+k+m+g-c*l*g)%100;
                  k -= (j-n*l-e*f)%100;
                  g -= (f*h+i*d*c-b+j-e+l)%100;
                  a += (l+e*f+n)%100;
                  g -= (i-l+l*a*l+f+l-f*b-a+i+h)%100;
               }
               
               switch( ++SWcnt[34]%3 )
               {

               case 1:
               {
                  e += (h-i*k+f)%100;
                  d += (h-c+c+k+e+g+i+i-e-m*d-g)%100;
                  l  = (a+b-l-b-m+h)%100;
                  h += (j+c+a)%100;
                  b -= (n+l+n+m*j-n+i)%100;
               }
               break;

               case 2:
               {
                  c += (c-j+g+l+d)%100;
                  n -= (a-i+a*f-a)%100;
                  i -= (e+l+a-k*b+g*m*j-n+k+m+f-j-c)%100;
               }
               break;

               default:
               {
                  c -= (m-h-l-m-c-e-k-n*f)%100;
                  i -= (d+d+e+j*k-l+c-g+a*g)%100;
                  g += (h+i-f+e+b-b-n*m-e+j)%100;
                  n += (a-g+e+d-f*a)%100;
                  b += (n-e*e*i-e-h-l-n*k+l+h)%100;
               }
               }

               if( ++IFEcnt[68]%2 )
               {
                  k += (l+c-i*h-i-d*a*g-j+a+j-c)%100;
                  e -= (m-l-j-n+f+h*b-j-e+b)%100;
                  b -= (a-e-h*n*e+k+i*a*j)%100;
                  g -= (d-l-b+n*d+b-a)%100;
                  f -= (b+m+b+e-a+c+m)%100;
                  m += (n-c*n*j+k)%100;
               }
               else
               {
                  i -= (i*n*k)%100;
                  e += (e*c)%100;
                  e -= (g-n+n*m+j-n-l-l+h)%100;
                  f -= (a*j+n*i+e)%100;
               }
            }
            h += (h-a-c+m+n+e+m-n*j+h)%100;
            f -= (l+g*m)%100;
            a -= (h+f+k-a-g-i-b-n+d-e+i+k+m)%100;
            b += (j+f-b+n-l+i)%100;
         }
         k -= (h*n+k-j-d-a+m+m+h+g+h-n)%100;
         k -= (b+j-a-l-a-i*l*e*e)%100;
         h += (h+j)%100;
      }
      c  = (m+b*j+i-f*e*e+h-l)%100;
      k  = (a-h*j+f+e*e+e-k+m-n)%100;
      m -= (f+n-a*l+g+h-e*h-c*k*h)%100;
      k += (k-e+a-n*i-h+a-a+a)%100;
   }
   a  = (g-l+a+f*a-j-j)%100;
   n  = (a*f-b+h-j)%100;
   j += (b*g-e-b*f-j)%100;
   j += (l-a)%100;
   n += (b+i*g-k+d+f-a+j)%100;
   m -= (f+k+e*h+m)%100;
   i  = (j-g+j-m+l-d-i+f*d*f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F32(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[70]%5 )
   {
      do
      {
         for( ; ++FORcnt[106]%5 ; )
         {
            if( ++IFcnt[52]%10 )
            {
               for( ; ++FORcnt[104]%5 ; )
               {
                  a -= (n-f)%100;
                  k += (b-l-f+j+l+f*c*e+m+b+g-d-h)%100;
                  m += (a-n+b*n)%100;
                  a -= (h-l-k*f*b*a)%100;
                  d -= (h-d+f+c)%100;
                  e -= (l*l-e*i-e-g+l-g+m)%100;
               }
               if( ++IFEcnt[70]%2 )
               {
                  e -= (h-d+j-e+g*g-d-d+m+g)%100;
                  m  = (l-c+d-c+j+k+e+e+j+d+f-l-b-i)%100;
                  d += (c-h+a*a+f+n-h-f-k-g)%100;
               }
               else
               {
                  j += (m*c-k-h-c*d+b-k-l+j-a-e)%100;
                  c += (l*n-c-m)%100;
                  b -= (j+e-c+m+g-f+n*l-c)%100;
                  k -= (m*n+a)%100;
                  d += (d-l*e-c-n-b-a*f-h-l+h+h+f)%100;
               }
               while( ++WHILEcnt[69]%5 )
               {
                  n -= (n+n*j)%100;
                  c -= (l-g)%100;
                  e += (h+j-k*a)%100;
                  f -= (b-i+i+j+a+h-a*g+f+m+k-n-h)%100;
                  h -= (h-a*b*n+b+e)%100;
               }
               do
               {
                  h -= (l+m*b-m-n)%100;
                  l += (a-a+m-d-f)%100;
                  c += (d+n-i-j+e-h-e+d-l)%100;
                  l += (m*l-m)%100;
               } while( ++DOcnt[70]%5 );
            }
            g -= (j-c)%100;
            for( ; ++FORcnt[105]%5 ; )
            {
               
               switch( ++SWcnt[35]%4 )
               {

               case 1:
               {
                  g -= (b*c)%100;
                  m -= (g-d*n-h+g*d*k)%100;
                  m  = (a-n-c+d-h-e)%100;
                  j += (j+j-b*m-m-j-l+d-a+c*h*g*f-c)%100;
                  j += (k+h-d*m+k-k*a-g+m*f-k*c*h)%100;
               }
               break;

               case 2:
               {
                  i += (j-h+a-j*i+n)%100;
                  l -= (f*c*h*g+e*l+m-f-l-j-n*m*i)%100;
                  j -= (n-a+b-b)%100;
                  c -= (j-n+c-c*c+b-c-d*j*a-e+g+l+f)%100;
                  k += (e+n-l+n-m*h)%100;
               }
               break;

               case 3:
               {
                  e += (b*b-c-m*i*n-j-e-m+b-l)%100;
                  f -= (b+c)%100;
                  l += (c-b+k-j*e-k-b*h*c-l+j)%100;
                  f -= (l+c+j+c+h+n-n+m-c*c)%100;
               }
               break;

               default:
               {
                  b -= (f*b-g+h-b-d+i)%100;
                  d -= (c+i*i+i+m-j+a-c)%100;
                  m += (g*h+e+m+i-b-c+g-e*m+j)%100;
                  k -= (a-j*e+i-h-d)%100;
                  m += (n-i+d-m)%100;
                  i += (f+m+h-j+e-e-g*g+c*k-g)%100;
               }
               }

               if( ++IFcnt[53]%10 )
               {
                  f += (n-h-l-h+k-a+g-m*f*a)%100;
                  h -= (g+l)%100;
                  a += (d+i)%100;
                  c += (g+i+k+j-c*j*m*j+k-d)%100;
                  c -= (e+m-g)%100;
               }
               a -= (j-h+n-g+m-n*j+k*h+m+m*h)%100;
               c += (c-g+l+f+j-c-e*e-m-g-k)%100;
               n -= (m-m*g)%100;
               d += (c+k-g-d-c-m-c+k*i-l)%100;
            }
            a -= (k-g)%100;
            a += (j*n+c+m+i-d-f+f-l*c+n)%100;
         }
         e -= (e*m-d-n-b-m-a-c-b*j+k+c-c-b)%100;
      } while( ++DOcnt[69]%5 );
   }
   a += (n*a)%100;
   g -= (m*k*l+i-j-j*m+h-h+d+b+i-j)%100;
   k += (b+n+b*d*l+d-g-g+c-c+c-g-h)%100;
   e  = (i-k)%100;
   k -= (e-i-f-m-n*l-l*n)%100;
   h += (i+n*n-f-e-c-g-c-h*b*l*b)%100;
   m += (k-k+m-e+d+g+i+a+n-l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F33(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[73]%2 )
   {
      l -= (c+h-m+f-l-n-g*n+a)%100;
      h -= (h-c)%100;
      e += (e*k)%100;
      a -= (l*c+k)%100;
      f += (g*l)%100;
   }
   else
   {
      while( ++WHILEcnt[73]%5 )
      {
         do
         {
            for( ; ++FORcnt[108]%5 ; )
            {
               for( ; ++FORcnt[107]%5 ; )
               {
                  c += (d+f-f-b*l+d+f-l)%100;
                  n -= (h-d)%100;
                  h -= (d+n+a-n-n*f+d+l+e+f*h)%100;
                  a += (h-a*d-f+i-i)%100;
                  f += (b+l-f-m-d+k+f)%100;
               }
               if( ++IFEcnt[71]%2 )
               {
                  b -= (j-f*k+g*c-j*l+e*c+l)%100;
                  c -= (k+j-j+n+b*h+l-a*n*b*c-b-h*c)%100;
               }
               else
               {
                  l -= (i+j*k-g-h+m-j+e+d-k+m+h-b)%100;
               }
               while( ++WHILEcnt[71]%5 )
               {
                  e -= (a*b-c*n-g+h*n-a*h+n+i+h)%100;
                  a  = (j*k-g+a+m)%100;
                  m += (g+e-m-c+k+i-g-c)%100;
                  n += (a*f*e+f+k-h+d*n-d*h-f-g-i)%100;
                  h += (h+k-i+i+g+n*k+k-g+i-h-m)%100;
               }
               do
               {
                  i += (b-j+c-f*l*m-b-e*g+c+h+a+h*k)%100;
                  a += (n-d*a)%100;
                  e -= (c-i*m-k-h*f+l-n-a-b+e)%100;
                  k -= (i+d-c)%100;
               } while( ++DOcnt[72]%5 );
               if( ++IFcnt[54]%10 )
               {
                  k += (f-a-c*b-f+i+a)%100;
                  f += (k-l)%100;
                  a += (j-n-e-d-i-a*n+m*h+b)%100;
                  k  = (m-c+e+b-n+l)%100;
                  m -= (f-j+d+e-j)%100;
                  b  = (k+e*g+j*d-d-h-f-d+i-b+i)%100;
               }
               i -= (d-d+m-b*h-b+l+b+m-m-b+a)%100;
            }
            for( ; ++FORcnt[109]%5 ; )
            {
               
               switch( ++SWcnt[36]%4 )
               {

               case 1:
               {
                  l -= (i+a-l+j-d-m+f-a)%100;
                  g += (d+l-e+b*l*g+k*e)%100;
                  g += (e+a+n-b+j+f*b*c-a-h*l*k-h)%100;
               }
               break;

               case 2:
               {
                  l += (g-h+k-m-h+e+d+k-m)%100;
                  n -= (l*a*g+i+f*l-g*g+a-b+n-b)%100;
                  a -= (a*c-m-k-k-j*c*c+f-g)%100;
                  b -= (j+m-a+n+b+i+m*b*j+j*m-b)%100;
                  f += (a*e)%100;
               }
               break;

               case 3:
               {
                  l -= (k-m*j-n*n+f-d+b-b*c-i-g+h)%100;
                  f += (k-e*n-k+l+d+d*b-a+m+b-e*d)%100;
                  b  = (g-h*k+g+j*g+k+m-g-i*a)%100;
                  i += (e+f+e-m+m-a+n+c-j+a+f)%100;
               }
               break;

               default:
               {
                  b += (n-g+e+i-e+h*m+g-j-h-a-e-b-e)%100;
                  n -= (f-g+c-e+c+k-n+k+f)%100;
                  e += (d-b+g+h-a-n-f-g-l-i-e+f)%100;
                  f += (j*d-l+h-k*k-h+b-a+c)%100;
                  n  = (a-a-d*n+l-d)%100;
                  l -= (a+a+l)%100;
               }
               }

               if( ++IFEcnt[72]%2 )
               {
                  f += (a*l-j-c-a-h-d-j-h*h+b)%100;
                  m += (a-k*d-b-g)%100;
                  h += (i+m*n)%100;
                  f -= (e+a)%100;
                  k += (f-j*c-b-n-h-a*n*i-f-g+n+j*a)%100;
               }
               else
               {
                  g += (n+k-c+m-h+b+e)%100;
                  j -= (f-b+b-d)%100;
                  j += (d-d+k+n)%100;
                  l += (b*c-i)%100;
                  i += (f*n-l+a)%100;
               }
               while( ++WHILEcnt[72]%5 )
               {
                  m -= (i*e*a+m*h+c-i+n-d+m-h-e+c+m)%100;
                  l -= (f-g+a+h+c-j-n-i-l*a)%100;
                  e += (f+e-l)%100;
                  n += (f*i+n-h)%100;
               }
               do
               {
                  f += (m+j+e+j+n*j+h*l+i*m*k-m-i*g)%100;
                  l += (a*f*c)%100;
                  d += (j*n+l*n*a-g)%100;
                  m += (a+j-e+f+h+a-c*j+b-d+n)%100;
                  j += (f*n+h+e+k*a)%100;
                  g += (c-g-m+n-m-j-g-d)%100;
               } while( ++DOcnt[73]%5 );
               k += (i-a+a)%100;
            }
            c -= (b-j-k*f-n+j*n*k+j-k)%100;
            f += (c-d-g*e+a+n-n*n-m-i)%100;
         } while( ++DOcnt[71]%5 );
         e  = (e+h*h-d*k+c*m-h*k-i*k-c)%100;
         m -= (e+m)%100;
         n -= (b+f*h-l+a+m+g-k+f-f+d*c*c)%100;
         l += (m+f+c*n*h+g+g-n+m+n+k+d)%100;
      }
      g  = (m+j-k*n*k-a-h-j*e-a-m-e)%100;
      a -= (g+n*n-d+i-i-a-h-i+c-l*i+i+n)%100;
   }
   f += (a+b+b+g-c*a-k+i-b*n+m-m)%100;
   c -= (g*n*e-l*b+n-c-e+f+j-f-e+h)%100;
   i += (f-i)%100;
   i  = (g-h-c+m-g-f+b+c-c+d)%100;
   b += (b*g-a+c*d*m)%100;
   a  = (e+h+j-i+b-a*i+k-i)%100;
   c += (m+h*h+h+n+f*d+n-c-m+g-e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F34(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[113]%5 ; )
   {
      if( ++IFcnt[56]%10 )
      {
         for( ; ++FORcnt[112]%5 ; )
         {
            if( ++IFEcnt[75]%2 )
            {
               if( ++IFEcnt[74]%2 )
               {
                  a += (l+e+i*g-d*f+l*i)%100;
                  n  = (m-f-j-n+b+i+b)%100;
                  k -= (d*f)%100;
                  b += (g-m-e-f*a*m-h-l*f-a*d)%100;
               }
               else
               {
                  a -= (k+n*k-e-k+a+d-n+m+h-n+i-i*n)%100;
                  k  = (g-i)%100;
                  a += (l*a+m*f+n-e)%100;
                  i += (i+d-n+k*m-n+n)%100;
                  i += (k-k+i+d+h*j)%100;
               }
               while( ++WHILEcnt[75]%5 )
               {
                  d += (h-c)%100;
                  k  = (n-c*c-d-n*b-e-k-b*b*m)%100;
                  f += (g+c*k-k-l*n)%100;
                  l -= (j-d-m-b-b-e+g-e*d-g)%100;
                  m -= (a-a-k-b+h)%100;
                  k += (h-l+i-k*f+n-h+a-h+h-l-h-k*f)%100;
               }
               do
               {
                  l  = (k*m*m*e-n+d*j-h-g)%100;
                  b -= (k*i+d*b-k)%100;
                  m -= (m+h+c+n-g+h+h-n-d+c+i-j)%100;
                  a += (k-l+b+b+g*e-g+n+h-n)%100;
                  c -= (m+h)%100;
               } while( ++DOcnt[75]%5 );
            }
            else
            {
               while( ++WHILEcnt[74]%5 )
               {
                  d += (g+c+m*e+n*l+a-d-d+m)%100;
                  a -= (c-i*n*n-k-f*i)%100;
                  f += (b-l-c+l-j)%100;
                  j -= (a+h*c+d)%100;
                  h -= (h+l*n-k+l+c)%100;
               }
               do
               {
                  j -= (j+h+f+c-l-j+l+l-k)%100;
               } while( ++DOcnt[74]%5 );
               n += (j*f)%100;
               for( ; ++FORcnt[110]%5 ; )
               {
                  d += (k+l)%100;
                  m -= (l+l+m*c*g+d-h+k-l-a*b)%100;
               }
               
               switch( ++SWcnt[37]%3 )
               {

               case 1:
               {
                  m += (f-i-b+l-k+l+k-k*m-i+a-e)%100;
                  e -= (a+j)%100;
                  f += (c-n)%100;
                  k -= (b-i+j-b+l-c-g-f-h+l-a)%100;
                  b += (j+c-k*b*k)%100;
               }
               break;

               case 2:
               {
                  a -= (m*n-a+b-b-f-i)%100;
                  i += (n+a+i-h*f-g+l+b)%100;
                  g += (b+h+i-f*h*j-i+f+k*f-c-e+c)%100;
                  j -= (k-b-c+g+h+e+e+d-g)%100;
               }
               break;

               default:
               {
                  c -= (a-g+b*k-e-f+f*k-h)%100;
                  i += (h+i-c-k+m+f+d+c)%100;
                  c -= (n+g+l+n-d)%100;
                  a -= (f*k-j-g-c+b)%100;
                  k -= (a+l-c)%100;
                  f -= (j+m-k-h+k)%100;
               }
               }

               if( ++IFcnt[55]%10 )
               {
                  k -= (a-g*h-i-d+g-b*f-f+h+a-a+m)%100;
                  c -= (n*j)%100;
                  n -= (d-c-g-i-d*g+l*b*b-k+g-n)%100;
                  j -= (d-g)%100;
                  j += (h*g-h-l-h+g*n+e+n-f)%100;
               }
            }
            for( ; ++FORcnt[111]%5 ; )
            {
               f  = (b+b+b-l+m+a+l+b-a-k-g*b)%100;
               a += (b+a*m+h-a+c+l-a-m+h+g+a+h)%100;
               e -= (m-c)%100;
               h += (a-m+j+d*e)%100;
               h += (i-c*e-g+m)%100;
            }
            l -= (m+k*m*h*g*c)%100;
            l -= (d*f-g-k+m)%100;
         }
         i -= (h+b+a+f-j)%100;
         c += (i*a+i-n-l*l*h+c+a+l)%100;
         j -= (l-n+e+j-c-d*n+d*m+i)%100;
         m += (a+g+k+d+c*i+k-i-n+k-a*a+g-j)%100;
      }
      k -= (m-i+l+c-f-l-a-g+j-k*m-f-f)%100;
      d  = (k*i*n+a-i-e-h-c-i-b*b)%100;
   }
   h -= (c*c+c-f*l)%100;
   j -= (h-l)%100;
   b -= (n+i-g*g-c)%100;
   b -= (c-h*b+d)%100;
   m -= (n-f+e+f-n+m*c+d+m)%100;
   d += (h*b-i+l*n+n+a*c*j*b-j+i+n)%100;
   e += (k-j+b+f+f-k+l+l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F35(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[117]%5 ; )
   {
      if( ++IFEcnt[78]%2 )
      {
         l += (k*i+c-h*n+l+k*l)%100;
         f -= (e+n)%100;
         m -= (a-b-f-j)%100;
         f  = (f-n+i-n+d+g-j*a+e+d)%100;
         n += (f+d+a+a)%100;
      }
      else
      {
         while( ++WHILEcnt[78]%5 )
         {
            do
            {
               if( ++IFcnt[57]%10 )
               {
                  a -= (e*j-i-n*h-g-e+e-e)%100;
                  c -= (n+b*f+n-m-m+n+g+e+a+i)%100;
                  f += (l-j+m+i*e-a+e*e*b*m*h+f)%100;
                  g  = (b*f-l-f+m)%100;
                  d += (a+f)%100;
               }
               m -= (b+h+d+f)%100;
               for( ; ++FORcnt[114]%5 ; )
               {
                  a  = (g-i)%100;
                  f += (m+j*m+f-f+k+g-e-c-l+j)%100;
                  g -= (b+c)%100;
                  c += (i*k-n-e+c+a-g+j+j)%100;
               }
            } while( ++DOcnt[76]%5 );
            
            switch( ++SWcnt[38]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[76]%2 )
               {
                  j += (n*c-h+h*c-n+k*e+j+h+i-b-e-n)%100;
               }
               else
               {
                  n += (b*b+n+i-h)%100;
                  k += (a+j*e-g-k+j+h-j+n-g*c*b*n)%100;
                  a += (d-c+i-f*k+l)%100;
                  a -= (e*n*i+k*e+m+i+l+g*g+k)%100;
                  b -= (l+a-i+g)%100;
               }
               while( ++WHILEcnt[76]%5 )
               {
                  b -= (j*i-a+b-f-j+l+l+n-b-b+m-f+c)%100;
                  g -= (b*c+n+k)%100;
               }
               do
               {
                  a += (b-a)%100;
                  b  = (h*n+c*j+j-c-a*a)%100;
                  g += (d-b*l+c-g-d)%100;
                  k += (n+d-b-m)%100;
                  e += (n*f-f)%100;
               } while( ++DOcnt[77]%5 );
               for( ; ++FORcnt[115]%5 ; )
               {
                  j += (m-e+j+g*m*i+g-e+h)%100;
                  d -= (e+b-j+l*e)%100;
                  h -= (n+f-i+k+l-g-b+e+n+a)%100;
                  k += (m+b+d+a-a-i-b*k*m+j)%100;
               }
               if( ++IFcnt[58]%10 )
               {
                  l += (a+e+a-b-k*n+i+l-b*d-b*n+a)%100;
                  k += (d+d*i-d-d-i+l+a+f-e)%100;
                  l -= (k-g+i*l+a*k)%100;
                  l += (f-d+n+e+g-b-f+l-f-j*j-h)%100;
                  a -= (i-m)%100;
                  m += (m*c*b-h-j+a+f*m-j-h+k-n*b)%100;
               }
               for( ; ++FORcnt[116]%5 ; )
               {
                  a -= (d+a)%100;
                  l -= (j+g+n*b-a)%100;
                  l += (l+k+b*h+d*f+e+g*b-j*g)%100;
                  g += (n+k+l-j*n-h+f*i+n+n*a-h-j-d)%100;
                  g -= (c+m-l+m+i+k*a-h-a-m+k+e*k+g)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[77]%2 )
               {
                  j  = (n-h*g+k-a+a+a+d)%100;
                  k -= (a-c)%100;
                  j -= (k*d+f+b+h*l-n+d*g-m+b-f+h)%100;
                  g += (k-i-h+h+k*n*i-l-i+l)%100;
               }
               else
               {
                  c += (h-i+b-m-j-c+l+b+k)%100;
                  h  = (m+c-i+d+j-a)%100;
                  f -= (h-l-h*k+l+b+n+d+b*f-l-c-l*c)%100;
                  d -= (a-f+h+f*h+i-a-c+j*k)%100;
                  g -= (i+n-e-h*a-d+c-g-l-n*m+a+b-f)%100;
               }
               while( ++WHILEcnt[77]%5 )
               {
                  m -= (i+m+l*m)%100;
                  f += (j*i)%100;
                  f += (j-l*n-b*m*m-g-g+d+h+m+i)%100;
                  f -= (g*h-e-g-b)%100;
                  h  = (d*c+f-n+f+c+i*l+i+f)%100;
                  i -= (f+n-b-d-b-i+f+d*g+i)%100;
               }
               l  = (b+d)%100;
            }
            break;

            default:
            {
               j -= (f*j*a*l)%100;
               b  = (k*k-b-d-m-f-i*a-c-d-j-k-g-d)%100;
               n -= (m-n-b+j*k+m-g+e+c*n+g*f+e+m)%100;
               c  = (d+f+c*j*k)%100;
               n -= (j-d+f-l-g+a*h)%100;
            }
            }

            c  = (g+a)%100;
            d += (g*k+k)%100;
            g -= (g*m+l-g+e+b+m-j*i-i-a)%100;
         }
         d += (a+n-n-c+e-e+m-i+m)%100;
         f -= (a-f-d*k+n-l-i-i)%100;
         d -= (d+i+g-k-b*j*b*b*n)%100;
         k -= (l+g-j*b+d+m-b)%100;
         h -= (n-d*h+l-j-a-h)%100;
      }
      k -= (d-n-e-g+c-f+l-f-n-k)%100;
      e -= (j*k-h+a)%100;
      c -= (i+g-d+g*l+h*j-k+h-f+b-n-j+j)%100;
   }
   l -= (e+l*i)%100;
   h -= (j*f-i+j-d)%100;
   i -= (m-n+m+g*k*j+g)%100;
   c += (d+e+h-j)%100;
   g -= (a+k-n-k-f-h-h+k-a-m-g)%100;
   f += (i-a)%100;
   j += (i*m*d+l*k-b*h-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F36(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      l -= (k+c+j-b)%100;
      for( ; ++FORcnt[121]%5 ; )
      {
         
         switch( ++SWcnt[39]%3 )
         {

         case 1:
         {
            if( ++IFcnt[59]%10 )
            {
               if( ++IFEcnt[79]%2 )
               {
                  e += (j+a*m+a+m*b-d-i*e)%100;
                  g += (g+f-e+n-b-h-a)%100;
                  f -= (j+g+j-j-k+d-e+e+b+d)%100;
                  c -= (l-k)%100;
               }
               else
               {
                  d -= (b+a-a-d*j-a*n-j+b-l)%100;
                  f += (h+k*b+a+l-h-m+j-n-j*f-c)%100;
                  c += (m*i)%100;
                  m  = (d-n-b-l+e-d+l+k-e+n*c*j+e)%100;
                  d += (c+a-k*d+e+b+m*h)%100;
               }
               while( ++WHILEcnt[79]%5 )
               {
                  f += (m+j*j+j+j-f+a+k)%100;
                  a += (k*h*g+f+g-h-g*d+j+k+i-b)%100;
                  i  = (n*b-c-a+l+m+k+d*d+b*d)%100;
                  n  = (n+n-m*h*a-l-a+b*d-k*k+n)%100;
                  l -= (l+a-i*g-c*n+a+i+j+c-b+i-l-e)%100;
                  h += (e-n*a+h-g-k*f+a+i)%100;
               }
               do
               {
                  l -= (l+i*b-h+h-l-i+b+f*j)%100;
                  b -= (e-m+a-i)%100;
                  n += (e*j+n-n+i-k-h+k+k*a)%100;
                  g += (l-j+g)%100;
                  j -= (h*m-k+k+a*n+e+k+a-b-g+j-e*j)%100;
               } while( ++DOcnt[79]%5 );
            }
            for( ; ++FORcnt[119]%5 ; )
            {
               for( ; ++FORcnt[118]%5 ; )
               {
                  n -= (l*a+c-g+j)%100;
                  k += (h*e+m*k*m*n-f+k-b-g+f+a-b)%100;
               }
            }
            if( ++IFEcnt[80]%2 )
            {
               l -= (f-d+b)%100;
               j -= (i*e-j*n-c+n+j-e)%100;
               b += (m-h-g*g+d)%100;
               b -= (i+k-l-g*c-f-g-n*i+e*i)%100;
               d -= (a*e+j)%100;
            }
            else
            {
               while( ++WHILEcnt[80]%5 )
               {
                  f -= (b-i-j*l-l+g)%100;
                  j += (d-g*j-h-a+m+l+b+e+m)%100;
                  e -= (c+f+f-n-j+n*n+k+i*l+a+e)%100;
                  a += (a+d+b-e-b*h*l+k-d)%100;
               }
               do
               {
                  h -= (l*l-b-n+g-l-l)%100;
                  c += (b+i-e)%100;
                  m += (i*a+l+n+f-j-b-g+l*g)%100;
                  e -= (f*h-b-i+f)%100;
                  d += (f+l-i*b+b+e+a+j-k)%100;
                  c += (h-b*h+m)%100;
               } while( ++DOcnt[80]%5 );
               if( ++IFcnt[60]%10 )
               {
                  l -= (i*l+c+m)%100;
                  b += (l+m-d-l*n-g)%100;
                  l -= (c-i)%100;
                  e += (b+f)%100;
                  h -= (h*h*c-l-d)%100;
               }
               l += (k*e)%100;
               for( ; ++FORcnt[120]%5 ; )
               {
                  l -= (d+i+b-i-n-a-e+c-e*k*k+e*i+k)%100;
                  b  = (l+d-b-i+m-g-d-k)%100;
                  g -= (a+l+g+e*a-e*h-b)%100;
               }
            }
            f  = (e+l*f*f*a-b-j-i-l*b)%100;
            e += (g*j+h)%100;
         }
         break;

         case 2:
         {
            n += (g-c)%100;
            n += (d-k+g-j+g+n+f-c-i+n*c+m*a+l)%100;
            b += (f+c-k+b+c-m-d*g+c)%100;
            j += (g*c+j+a-g-c+d*n-e-e-c)%100;
         }
         break;

         default:
         {
            a += (d+d)%100;
            f -= (f+m-g*j+j+b*j-f)%100;
            e -= (a+i+c*a*d+n)%100;
            b += (b-l-h*b+h*m-c)%100;
            h  = (e-b-k+n*l)%100;
            j += (j+e+g-b+f+j*n+g*e)%100;
         }
         }

         d += (l*l)%100;
         i -= (k-e+g-g+j*k+j+b-g-n+a*n-c)%100;
         c += (c+l+i*e+b)%100;
         g += (c-b-l+b+c-h*e-a*l+h-b)%100;
         i += (f-f-l*i*n+e-b+g-f+e+e-b*k-c)%100;
      }
      b -= (a-d-d+n-c-k+e-l-b+m*c)%100;
      b += (n+n-a*a*i-d-n*f-h)%100;
   } while( ++DOcnt[78]%5 );
   d += (k+f+d*d+j*i*l-c-n*d+g)%100;
   e -= (b-a+j+e-e+c)%100;
   j -= (l+e+c+l)%100;
   d -= (b-g-h-l-c+f-e*n-c*i*j+d-e*m)%100;
   j -= (a*h)%100;
   f -= (k+a)%100;
   k -= (l+h-m-b+i+a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F37(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[40]%4 )
   {

   case 1:
   {
      if( ++IFEcnt[82]%2 )
      {
         i += (b+g-c-m-a*k+d)%100;
         n += (k+l+f+h+h)%100;
         l -= (j+m+i)%100;
         m += (d+a+h+e)%100;
         c -= (a-d+h+m+e*i-n*e-k+j)%100;
      }
      else
      {
         while( ++WHILEcnt[82]%5 )
         {
            do
            {
               for( ; ++FORcnt[122]%5 ; )
               {
                  g -= (d+a*i-e*j*a-i-m+b)%100;
                  m += (i+i)%100;
                  k += (d-b-f-f-d*l-k+l-k)%100;
                  a  = (a+i+n+i-l)%100;
                  m -= (d+f)%100;
               }
               if( ++IFcnt[61]%10 )
               {
                  m += (a+f)%100;
                  b += (e-e+k-h-h-g+i)%100;
                  j  = (j-c+b*f-e-n*f+i-b+c-c+d-a)%100;
               }
               for( ; ++FORcnt[123]%5 ; )
               {
                  h -= (f*c-m+i*b*f-c-e-l+a+g*j+l)%100;
                  g += (l+j-l)%100;
                  f += (h+d)%100;
                  d -= (l-j-c)%100;
                  f -= (j+a+b-b-m+g-l*e+i-a-k*m-k-j)%100;
               }
               if( ++IFEcnt[81]%2 )
               {
                  j -= (g+i-d*m+l*f*a+g+b+m)%100;
                  f += (g+j*i+m+k+g*e-h*k+k-m*a-n)%100;
                  a  = (n-a-e*a*e-c-b-a)%100;
                  d -= (l-n-l+c-i+l-m+k)%100;
                  b += (c-n-m-n-f-e+b+j+d*c-f)%100;
                  i -= (m*m-c-h+f-e-e)%100;
               }
               else
               {
                  n  = (n-l-l+i-a+l*m+b-a-b+f-f*n)%100;
                  a -= (k*f*d-c-h*a+j)%100;
                  i -= (e+d+n+k*m-k+j+b-h*n-d*b-n)%100;
                  g  = (l+j+j+m-f-k-j)%100;
               }
               while( ++WHILEcnt[81]%5 )
               {
                  l  = (e+a-f-m-g+h)%100;
                  e -= (g*d+l+f)%100;
                  h += (k-h)%100;
                  d  = (h*l+f+n+j*h+h*a-i+c-f-i*j+n)%100;
                  a -= (j-d-k+c-g-j+c-j-k+e-b-n-f)%100;
               }
               do
               {
                  m -= (l-h*d-k-n*n)%100;
               } while( ++DOcnt[82]%5 );
            } while( ++DOcnt[81]%5 );
            b -= (i+h*a-n*h)%100;
            for( ; ++FORcnt[124]%5 ; )
            {
               
               switch( ++SWcnt[41]%3 )
               {

               case 1:
               {
                  c += (c-e*l+h+h*i+n-i-l)%100;
                  n += (l+f+l-e-d*j-l+d-c-m*i+b-n-h)%100;
                  f += (k+m*f+l+b+d+i-b-f*h)%100;
                  i += (k+b-e*a+h*c-k*l)%100;
                  e += (h+e-m+l-j+i-g-n+c-i-a+d+g+j)%100;
               }
               break;

               case 2:
               {
                  b += (c-i+i*m+g+j-m-d*i+c*d-h+i+g)%100;
                  j -= (g-l-d*m+j*l+f)%100;
                  a += (h-h)%100;
                  m -= (e+g*h-i-b+f+j)%100;
               }
               break;

               default:
               {
                  n += (i-f-d*c-i+n-f+f)%100;
                  b -= (c-g-g-k-f+j*k*e-k+i)%100;
                  f += (i-c)%100;
                  c  = (f-j+b)%100;
                  a -= (k*c)%100;
                  d += (d*j+k-h-d-e+d-l)%100;
               }
               }

               g -= (k+l-e-c)%100;
            }
            l -= (h*n+f+h*d+k-k*h+j-l+f+g-h-m)%100;
         }
         j += (k-g+a*a-f+l*i+l+b+e*k*e+j)%100;
         k += (i+h+e-l-m*i)%100;
         l += (n-m*g+f-h+k-k*b*b+i*e)%100;
         g += (m+h*e+e-m+n-k+m-l-a-f)%100;
      }
      e += (c-j+e-m-f+a+i)%100;
      l -= (h+k+f-j-i-k+j)%100;
      f -= (m-e+b*f+j+i*h+d-n)%100;
      e -= (a+a+d+a-a-j*d-g-a+a)%100;
   }
   break;

   case 2:
   {
      l  = (a+i*n+j*e-k-i*g)%100;
      k += (k-b)%100;
      h += (b-e*g-d-c+g)%100;
   }
   break;

   default:
   {
      c  = (d-m*n*n*a-f*i-l+a-b*n+i+k)%100;
      h += (i+h+h*a-k+c+c+i*d+l-c-d+b)%100;
      j -= (k-g)%100;
      i += (h*a)%100;
      d -= (f*j*l+g-m-g+l-c)%100;
   }
   }

   i -= (g-c+i-e-e+i+m-m*m)%100;
   k += (m+n+i+h-h-b*n-h*a)%100;
   d -= (j+c*e+b+d+l-m-j)%100;
   b += (n-i-m-l-k)%100;
   d -= (d-h-m-h)%100;
   a -= (e-i*h+k*n-j*d-d)%100;
   m -= (f-b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F38(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[63]%10 )
   {
      if( ++IFEcnt[84]%2 )
      {
         i -= (l+d+l+l+f-b-m+i)%100;
         k  = (a*e)%100;
         m -= (n+a+c-h*i-h+b+b-i-n+k)%100;
         d  = (k-l-e-l+a-d*c+d-h-a+n+g-i+i)%100;
      }
      else
      {
         while( ++WHILEcnt[84]%5 )
         {
            do
            {
               for( ; ++FORcnt[125]%5 ; )
               {
                  n += (e+d-d+d*h-j+g+m-d-j+i*e)%100;
                  i  = (i+g+n-c-b*d+m)%100;
                  k -= (c+i+e-k+g+h)%100;
                  i -= (i+f*e*c+j)%100;
               }
               for( ; ++FORcnt[126]%5 ; )
               {
                  k -= (g*b+k-e+n+f)%100;
                  e += (h*e-j-b*n+j+n)%100;
                  m -= (c+i+d-d-a*n+g*l*l+m)%100;
                  l += (a-f-n+i*j+k*a+k+d*l*i-m)%100;
                  f -= (e+e-b+m)%100;
                  e -= (a*b+k+d*n*a+i-g*d-c-n-h+m)%100;
               }
               if( ++IFEcnt[83]%2 )
               {
                  m += (e*j+a+f+j)%100;
                  c -= (m+c-i)%100;
                  n += (m*m-b-i*h)%100;
               }
               else
               {
                  e -= (f+b+g-k*i-g-n*f-a-c*i+e)%100;
                  e -= (l-a+i-e+j*b-g-c-k)%100;
                  e += (c*b-k-c)%100;
                  d += (d-b-e-m*k-g+g-h+j-b*j+d-m)%100;
                  k -= (g*c*b+a+j-m*b+c*d*g+d-h)%100;
               }
               while( ++WHILEcnt[83]%5 )
               {
                  f -= (h+g-j-n*h+g-b-e+a+l-k+i+c*c)%100;
                  n -= (c+g*i+l-m-f-d+k-m-b+h)%100;
                  j  = (f+m+j)%100;
                  k += (d*g)%100;
                  i += (m+f*i-c-g-n-i)%100;
               }
               do
               {
                  g  = (d-e+m+a)%100;
                  k += (h*f+l+f-a+m)%100;
                  m -= (l*g+i+i-h+i+a+j+g-e)%100;
                  g -= (e+j+b-n)%100;
               } while( ++DOcnt[84]%5 );
            } while( ++DOcnt[83]%5 );
            if( ++IFcnt[62]%10 )
            {
               l -= (f+d+m+a-c-l-d-b-d-a)%100;
               for( ; ++FORcnt[127]%5 ; )
               {
                  c  = (k+m-l+d+a-j+b+d)%100;
                  d += (h+f+i-c-g+f*c*c+j+b+k-i+i+a)%100;
                  b += (g+g-m-b+f*l+k+c-g*h-j+m+g)%100;
                  i -= (n*h+j-c+h+k+i-h-k*g*d)%100;
                  b += (g-j)%100;
               }
               
               switch( ++SWcnt[42]%3 )
               {

               case 1:
               {
                  l -= (b+f+d-m*j-m-d)%100;
               }
               break;

               case 2:
               {
                  k += (m+d+j)%100;
                  n -= (e-m-b-g+l+g*b)%100;
               }
               break;

               default:
               {
                  d -= (b-k*h+m+g+c+n-c+f-b)%100;
                  h -= (j+m+b-n-g+g+j)%100;
                  m -= (k+e-e-m+m)%100;
                  b += (c*a*h-g*h+m+f+j-a*c-d*e+k)%100;
                  n += (k*n-k+j-e*n+i+l*l+a)%100;
               }
               }

               b += (l+k-c+e-l*g+j+i*k)%100;
               n -= (j+m+b-k+l-l+b-n+f-g-h)%100;
               f -= (f-e*g+k-e+n-c-j)%100;
            }
            f += (c-e+k-i*c+g*k+n+d+l-m*k-j+l)%100;
            j += (b+f+b-i-b*f)%100;
            g += (c-h)%100;
         }
         n += (g+n-l*f)%100;
         k += (g-n)%100;
         l -= (j-c+k+c*f-f-f+c*g*m)%100;
         d -= (k+g-b-b-g+d-b-m-h+g)%100;
         b += (l-a-b+g-c-b)%100;
      }
      f += (b-d*m)%100;
      g  = (f*a-l-h*c-k)%100;
      g -= (e+g-n)%100;
   }
   l -= (e-h+n-h-d*f+j)%100;
   k -= (e-i*c*e-l+b)%100;
   f += (e+i-b-e+l*c-g-f)%100;
   j += (n-k*k+c-c+m-b)%100;
   i -= (m+m*g+k+l-b-j)%100;
   f -= (b-l+m+g+n+j-n*m)%100;
   f += (i-l*k+f+f*k+b+g-n*n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F39(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[86]%2 )
   {
      l -= (d*i+e+a+a*k*a-i*c-c-g-l-l+a)%100;
   }
   else
   {
      while( ++WHILEcnt[86]%5 )
      {
         do
         {
            for( ; ++FORcnt[129]%5 ; )
            {
               if( ++IFcnt[64]%10 )
               {
                  l -= (k*h*f+d)%100;
                  c += (b*n+k-e)%100;
                  a -= (c*a-k-j*b*f+l)%100;
                  d += (n-l)%100;
               }
               for( ; ++FORcnt[128]%5 ; )
               {
                  e += (d+l*d+g-a+e+e+n+h+c+n*i)%100;
                  j -= (h-c*h+k*d+n+e+f+h-c-b)%100;
                  k -= (b*m+d*f)%100;
                  b += (b-n+i+n+f*b-c*c+e+a*d-a)%100;
                  h -= (g*a-d)%100;
                  e += (e+f+i+i*j+e-e-b+f+m-f+n+f-c)%100;
               }
               if( ++IFEcnt[85]%2 )
               {
                  n += (i+j+h)%100;
                  f -= (e+m)%100;
                  c -= (f-b+e*j-e-e*g+h*f-f-m-d)%100;
                  c += (d*n+i+m)%100;
                  c += (c+h-j-f-h*j*k*l+h-m+c)%100;
               }
               else
               {
                  i -= (a-n-d+k+l*b+g+a)%100;
                  i -= (m-i-d-a+h)%100;
                  h += (j*k+g-e-k+a*n+a+m-g+i*n-b*m)%100;
                  f -= (b*i*k-d-m-d*i)%100;
                  l  = (m-j)%100;
               }
               while( ++WHILEcnt[85]%5 )
               {
                  i -= (a-f-h+i-n)%100;
                  l -= (b-i-b)%100;
                  e += (b-k+a)%100;
                  m += (m+d*f-j+c*i-a+c)%100;
               }
               do
               {
                  d += (f+a-m*g-l+m*i-b-e-i-i+i-e*m)%100;
                  i -= (e+a)%100;
                  k += (d-d+h)%100;
                  b -= (h+a-i+a-g+k+g*d)%100;
                  g += (b-f*b-i*f+c+d+g+h)%100;
                  g -= (f+c+m*h-j+e+n+h)%100;
               } while( ++DOcnt[86]%5 );
            }
            m -= (i*d+f+b+e-b+c)%100;
            for( ; ++FORcnt[130]%5 ; )
            {
               
               switch( ++SWcnt[43]%4 )
               {

               case 1:
               {
                  h += (j+l+n*l+n+f*n+l*g)%100;
                  j -= (a-g+f*i-b-n-j-m+f*k*m*i+h-i)%100;
                  j -= (i-c-d-b-g-h+d*d+j)%100;
               }
               break;

               case 2:
               {
                  g += (i-h-f*m*g-m-f)%100;
                  m -= (g-f+k+l-b)%100;
                  n += (d-n)%100;
                  c += (h-k+j+l-a-a-b+c-b*g+e-e-k)%100;
                  l  = (e-i+h-g+n+d-n-i-h+l)%100;
               }
               break;

               case 3:
               {
                  f -= (b+j*g*f+g)%100;
                  b += (k-j-k*n-l+k-e+l+e)%100;
                  d -= (a+i+d-d-g*c*c)%100;
                  h += (n+d*c+f+k-l)%100;
               }
               break;

               default:
               {
                  a -= (b*f*a+h-c*d+e+f+h-c)%100;
                  m  = (f+b+i-c-m)%100;
                  m -= (e*h)%100;
                  a -= (l+g)%100;
                  m += (l-j+h+i-j*f*g+b+d*b)%100;
                  i -= (f+c)%100;
               }
               }

               if( ++IFcnt[65]%10 )
               {
                  m -= (h-c-e+d+j-g*d-b-a-k)%100;
                  h  = (k*d-n+i+n*g-i-h+a+k+i+l+m)%100;
                  b -= (k-b-e-d-b+h-j+h-h+h)%100;
                  j -= (c-g+i-i+m+b-n)%100;
                  b -= (h+n+i+a*j+j-m)%100;
               }
               n += (l-g+l+j-d-m+j+g*m-e-d)%100;
               e += (k-i*i-i+e-i*f+i+f*b-m*a+n)%100;
               i -= (f*j+b+c*d-h-c+f)%100;
            }
         } while( ++DOcnt[85]%5 );
         j += (f-h-h)%100;
         h += (g-m*c+i*b+j+m+c-k+i*i-d*f)%100;
         i += (g+n-e+j+j+a)%100;
         e += (k-l+j*f*a*f-g+i)%100;
      }
      g += (a*a+a+c)%100;
      k += (b-d+b-g-n*d)%100;
      a -= (b-n-m*i-m-m-b)%100;
      l -= (n-m)%100;
      f += (c*i+f+e-d+e)%100;
   }
   f -= (k+j)%100;
   a += (f*k-n+n+e-i+l+n-j+g-h)%100;
   e  = (b+e+f-c-c-i*m+m-j-k+g+g-f)%100;
   h  = (m-f+e+g-c-i+h-l+a+k)%100;
   d += (m+a+h+h-j*k*h-l*k-n)%100;
   i  = (l*j+f+d*n*b+f)%100;
   l  = (d-m-e-g+l+g+a-k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F40(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[89]%2 )
   {
      f  = (h*e-f-k+g+d)%100;
      g -= (b-d-d)%100;
      i  = (n+f+d-c-i+i)%100;
      d += (b-e)%100;
   }
   else
   {
      while( ++WHILEcnt[88]%5 )
      {
         do
         {
            for( ; ++FORcnt[132]%5 ; )
            {
               for( ; ++FORcnt[131]%5 ; )
               {
                  c -= (a-k)%100;
                  d += (e-j*k-j+h-i-l+k+g-k-h-n-n)%100;
                  b -= (i-a-j*m-m-a-l*h-k-i-e)%100;
                  f += (e+j-b*a+m)%100;
                  l -= (k-m-g+c*c-b+f+m+m)%100;
               }
               if( ++IFEcnt[87]%2 )
               {
                  d += (b-k+k)%100;
                  n += (b+a+h-l-i*g+j-j)%100;
                  b += (i*k+g-h+h-f-d+h)%100;
                  b += (m+l+g+l+e-e+n-m+f-k+e+d+l)%100;
                  i += (n*k+c+m-h+e)%100;
               }
               else
               {
                  i -= (j*b-f-i+g*d*i*d*d*f+f)%100;
                  g -= (d+k+f+d+j*n-b*d-m)%100;
                  e -= (k-f+c-k-h-c+l+n-m+b)%100;
               }
               while( ++WHILEcnt[87]%5 )
               {
                  a -= (e-l+e-n*j*c)%100;
                  l -= (k+i+k+g+a+g+h*i*j+l-b*k-f)%100;
                  i -= (n*l-m-k)%100;
                  h += (b-g)%100;
               }
               do
               {
                  a -= (f-j-f-k+m*k-f+n*k+g)%100;
                  m += (f-h+n+g*c*b+c+h)%100;
                  f -= (k+b+b*a*c)%100;
                  f  = (k-j)%100;
                  l  = (n-e-b*k+g-f+k*l-c-f-g)%100;
                  c += (d-m*a)%100;
               } while( ++DOcnt[88]%5 );
               if( ++IFcnt[66]%10 )
               {
                  b += (e-b-d-a-c-a-n+g+d+j+f+m)%100;
                  m += (l*i+n*m)%100;
                  m -= (l-b*l-j-b*j+f+a-n-l)%100;
                  n += (i-m-g*n-k+i*j+a+k-n+c-c)%100;
                  d += (h+m+a*g+a*j-l*d)%100;
               }
               f += (j+l*e)%100;
            }
            for( ; ++FORcnt[133]%5 ; )
            {
               
               switch( ++SWcnt[44]%3 )
               {

               case 1:
               {
                  k  = (i*a*j-i+h-d*a*g-h-b)%100;
                  a -= (i+m)%100;
                  a += (a-k+e+i)%100;
                  m -= (h+a-i-e-i-i*n+g*i+m+a-i-j)%100;
               }
               break;

               case 2:
               {
                  k += (b*f+e-k*b-b+h-j-c-f+h+e*f+c)%100;
                  c -= (d-l-m+h-c)%100;
                  j -= (j+d+c*l+g+b-k+g)%100;
                  d  = (a-h+e-e*h-i+g*j-b+a+a)%100;
                  j += (f+b-j+b-g+m+f+g)%100;
                  f += (d+b*f+e+d+f-m+c)%100;
               }
               break;

               default:
               {
                  i -= (i+d)%100;
                  j += (i+e*k-f-f-b-f)%100;
                  b += (b+j-h-b+e-a)%100;
                  m -= (l+g+b+j-h+k+k*a*e-c-n+f-k)%100;
                  f -= (f-g-a+i+i+h*m*g-n-j-k)%100;
               }
               }

               if( ++IFEcnt[88]%2 )
               {
                  i += (i-g*d+h)%100;
                  n += (h-j-k-h+e+g-i*c-i-n+a)%100;
                  c -= (l*d-j-e-j-d*h-e*b*a-c-g*k)%100;
                  d -= (c*i*m-g-h)%100;
                  m += (f+g-f-i*d+i+m)%100;
               }
               else
               {
                  j -= (c*m+i-a-a+i*c+f+l)%100;
                  d -= (l+k*f)%100;
                  a += (f+h-c-b*l)%100;
               }
               e -= (f-f*i)%100;
               f += (j*m-n+i+n+b*j-k-i+i-f*m*f*d)%100;
               c -= (m*n-i-b+h-g-c-k)%100;
            }
            l -= (i+j-b*n+d)%100;
            b -= (n*a+d*m*b+d-f+b-d+j-c-e)%100;
         } while( ++DOcnt[87]%5 );
         n -= (f+n-h*g-g-f*j*b+n)%100;
         n += (g+i-m+h-b*b+n*c)%100;
         f -= (m-c+g*n+b*g)%100;
         c -= (c+a-a+l*l+l)%100;
      }
      h -= (b+f*k-f-f+n+b+f-f-h+n+g+d-m)%100;
   }
   a -= (d*e)%100;
   f += (a-l)%100;
   c -= (h*g-h)%100;
   a -= (i+l-b-n-k*k-d-g*g-j)%100;
   g += (i+a*l+h+d*d-f*e)%100;
   c -= (h+g+j+n)%100;
   m += (i-g-i+h-b-c+k-e+j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F41(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[91]%5 )
   {
      do
      {
         for( ; ++FORcnt[135]%5 ; )
         {
            if( ++IFcnt[67]%10 )
            {
               for( ; ++FORcnt[134]%5 ; )
               {
                  k  = (h-m*j-f-i-f+j+n+l*n)%100;
                  m += (k-c*i-j)%100;
                  a += (l-f+l+j-l-d*h-c*i*m*k)%100;
                  e += (c+i-f+g+k-f+e*n)%100;
                  m += (l*c+m-b*k+a-j)%100;
               }
               if( ++IFEcnt[90]%2 )
               {
                  n += (n-b+a+f-c*i-k-h+b*j*c+d-h*j)%100;
                  l -= (h+m-g*c*g+a*g-n+a+h*f)%100;
                  i -= (l+g+a)%100;
                  b -= (e-g+d*n)%100;
                  m -= (f*h-a+b)%100;
                  n += (d-b*g+b)%100;
               }
               else
               {
                  c -= (l-m-c+k+f*k*g*j+j+k)%100;
                  i -= (l*d-a-l)%100;
                  g -= (f-l*n+k-g+d*i-l-i)%100;
                  e  = (h+k-e-g-a-n-j-n+k-j)%100;
               }
            }
         }
         while( ++WHILEcnt[90]%5 )
         {
            do
            {
               n += (j*m-e+k+a-d-m)%100;
               for( ; ++FORcnt[136]%5 ; )
               {
                  m += (h-j*j-l*g+c+c+m+l+k*h+l-k)%100;
                  a -= (l+a-k-e-g-k+m*g-l-l-d*n-l+i)%100;
                  e += (a+j*b+c*j*b-i*l-f*n-i+d+c*n)%100;
                  f -= (a+m-e-d-f-l-c)%100;
                  e -= (a-k*n+i+g*f-l*e)%100;
               }
               
               switch( ++SWcnt[45]%3 )
               {

               case 1:
               {
                  f += (i+h)%100;
                  n += (d+l-a-g-f-g)%100;
                  g += (h-n+l-h+k*l+k)%100;
                  d += (g-a+c+l-m*d-c*f-j-d+h)%100;
               }
               break;

               case 2:
               {
                  l += (m-k*j)%100;
                  f -= (d-i*b-d+a*m)%100;
                  j -= (n*l-j+h-h+j-c)%100;
                  m += (h+i-l+m)%100;
                  g += (e+h-c*b-h*a*i-b-k)%100;
                  c += (e*e*k-l+a-a-n+e*i+a)%100;
               }
               break;

               default:
               {
                  m += (j+k-j+l-k+k+d-n-e*l*j+j)%100;
                  h -= (g-g-c*h)%100;
                  l += (j-k)%100;
                  d += (k-d*g+e+l-g-j*e+n-f-d)%100;
                  j += (g*k-c*g+a*c+f+m-l-f)%100;
               }
               }

            } while( ++DOcnt[90]%5 );
            if( ++IFcnt[68]%10 )
            {
               if( ++IFEcnt[91]%2 )
               {
                  m += (n+n)%100;
                  b -= (e+m)%100;
                  h -= (l+f-m+i-h*j*e-h+f*b)%100;
                  j += (g-a+g+c*l-m-g-b-h*g-n)%100;
                  m += (f+l)%100;
                  l += (a*d+e+g-b+f)%100;
               }
               else
               {
                  h += (e+n*a-d*j*k*i+e+l-a*l*f*j+l)%100;
                  e -= (c*l+g+m-g-h-l+b+f*d-a)%100;
                  n += (b-b-m+g-h*e*g-j)%100;
                  i -= (b*a*g-d+f-l+b-n-m*a)%100;
               }
               while( ++WHILEcnt[89]%5 )
               {
                  j += (l-i-c-d+l*d*n)%100;
                  f += (l+f+h+f+i+j+c)%100;
                  f += (g+c)%100;
                  k += (c-h)%100;
                  f -= (g-h+h)%100;
               }
               do
               {
                  n -= (c-c*a*i+h*h+a-a-b+a-i)%100;
                  b  = (a-b+m-i-d-n-l)%100;
                  a -= (c*k+g+a*i+e)%100;
               } while( ++DOcnt[91]%5 );
               d -= (k+b)%100;
               n -= (h-h-h+e-h-a-g-f)%100;
            }
            d -= (a-c*n*i+k-c)%100;
            f += (l+l-f+k-g-j)%100;
            f += (d-h-n-f*h*h+m-h-j+n+g-d+n)%100;
         }
         h  = (d*j)%100;
         n += (g+a+b+g*b-n-h+c-a-m+b)%100;
         m += (h*a)%100;
      } while( ++DOcnt[89]%5 );
      l -= (j+h-i-d-l-g+c-d-j-g*c+a-d)%100;
      c -= (h-g-l-d-n-h+g+b+c-e)%100;
      d -= (f*n-l+i+m-i+n+d-c-h-g)%100;
      a -= (e-k+d+m*m-c+f+n+d-e+f+k+e)%100;
      e -= (j-c*m-b+m)%100;
   }
   l  = (m+e-n-i)%100;
   e -= (f-j+c-c)%100;
   n += (k*c-b-i*g+m)%100;
   n  = (a+n*j+n*j+k-g-n*m+j-n-k*l+k)%100;
   m += (f+a+a-d*c-c+c-a*c+f*g-f*l*f)%100;
   e -= (l-c-c+j)%100;
   c -= (d-j+c-k+d+d-d-e*e+i*e-a-e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F42(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[141]%5 ; )
   {
      for( ; ++FORcnt[140]%5 ; )
      {
         if( ++IFEcnt[93]%2 )
         {
            b  = (d+b)%100;
            b -= (j*l+m-l*e-c)%100;
            j -= (l+m+n+i+f+i)%100;
            l -= (m+g-f*b)%100;
            d += (i+d+j+b+a+l*g+k*i)%100;
         }
         else
         {
            while( ++WHILEcnt[92]%5 )
            {
               do
               {
                  i  = (l+b*c*j*l-d+j+j+n-e+e-g)%100;
               } while( ++DOcnt[92]%5 );
               if( ++IFcnt[69]%10 )
               {
                  g -= (a+c+g-i+g+m+c)%100;
                  i -= (c-c+f+k-n+m*n-j+h)%100;
               }
               k -= (l+i-h-d-e-e*f*n*k-d*c)%100;
               for( ; ++FORcnt[137]%5 ; )
               {
                  j += (k+b)%100;
                  g += (b*m+i+c-b*i+a+k-k-m-a)%100;
                  k += (a-i)%100;
                  k -= (i*e-h*m-c+g+n+m*e+d-l+e+i-j)%100;
                  m += (e+k)%100;
               }
               
               switch( ++SWcnt[46]%4 )
               {

               case 1:
               {
                  k += (m-g+c-j+e+l+f)%100;
                  i -= (m+a-k-g-d+i-b+g*a-c+h)%100;
                  i += (c-a-h*c-b-n)%100;
                  a  = (b+f-f+m)%100;
               }
               break;

               case 2:
               {
                  k += (k*i*g-b+m+l-l*g)%100;
                  l -= (f-d*a)%100;
                  f -= (c-f)%100;
                  h += (c-e+j+l-d-e-j-l+i-b)%100;
                  e += (f-h*j*k-c*f*i-i+n*c)%100;
                  n += (h-l-h*k)%100;
               }
               break;

               case 3:
               {
                  h += (i+f+i-a-d+c+d-k+d+a)%100;
                  d -= (n-a)%100;
                  a += (n+d-j+j*a*a+e*e*b)%100;
                  l -= (m+g+e)%100;
                  f += (m-g)%100;
               }
               break;

               default:
               {
                  l -= (j-e+m)%100;
                  g -= (j-j-f+i-k-e)%100;
                  k -= (f+j+i+m-f-d+b-g-d-g*h-k*d-f)%100;
               }
               }

            }
            if( ++IFEcnt[92]%2 )
            {
               e += (a-h+h-a*e+f*l-n*m-m+b+h+f)%100;
               f += (j+k+g-c-j-n*g*e+k+d*i-m+f-d)%100;
               d -= (f+b-i-b-e+f*i+l-h)%100;
               a += (d+b)%100;
               j  = (d*d+e-j-j)%100;
               j += (g-d*n)%100;
            }
            else
            {
               while( ++WHILEcnt[93]%5 )
               {
                  k -= (j+g*m+b*k-b-f*h-m-g*a-c+l-l)%100;
                  a += (c+l*d-g+d*d+f-e-a+h+d-j-i+a)%100;
                  k -= (n+n+a+j+a+l-l-j+g*h-c*i*i)%100;
                  c -= (j*m)%100;
               }
               do
               {
                  m  = (n+e*g+h)%100;
                  d += (b+a)%100;
                  a += (e+j*g-b*n-i-h-g*g-a+m-l-h)%100;
                  g += (a-l+k+n-b+k+j+c*j+k-d)%100;
                  k += (i-j-m-b-f+m+b*e)%100;
                  d -= (i-h-b-h)%100;
               } while( ++DOcnt[93]%5 );
               for( ; ++FORcnt[138]%5 ; )
               {
                  e -= (k-c*e-b-j+l+h-g+d+j)%100;
                  f += (i-h*n)%100;
                  h -= (k-l-b+g-a-l+d-k-j-k+h-g+h-e)%100;
                  f -= (b*e-h*e*d-j-f-a+m)%100;
                  c += (l-k+a*h-b+a*g*k-l+e+e-i-g)%100;
               }
               if( ++IFcnt[70]%10 )
               {
                  j += (d+e+j)%100;
                  b -= (h-i-f+d+g-f+c+i-h-f+l+i)%100;
                  k += (d-b+g*g+g*d-j-m-c)%100;
                  g -= (h-g-e-j+a*f)%100;
                  i += (h+b-d-e*d*f+d+c)%100;
               }
               for( ; ++FORcnt[139]%5 ; )
               {
                  j -= (b+c)%100;
                  n -= (e-l*m*a-a-k-m)%100;
                  h += (m-j+g+e-l)%100;
                  c += (f+g+l)%100;
               }
            }
            e -= (b+i-i-i+g-a+j+f-k-d+a)%100;
            n -= (g-j*l)%100;
            d += (e-b-d-k-j-g)%100;
            l += (d+h+e-k-f*f*d+f-k+i+d-c)%100;
         }
         b  = (c+d*c+b+k-n-e)%100;
         a  = (k*d-b-d-j-e+j*m-k-m+h)%100;
         l += (d-k-k-c-i-c+b+i-d-k+a-i*k-i)%100;
      }
      d -= (b-k+b-d+m-e*l-b+e+m*f-g+m)%100;
      n += (d*n-e)%100;
      k += (m+f-a+i-g-c-k-g)%100;
      n += (e+j+j+a*b)%100;
   }
   n  = (k-e*n*l+m-j)%100;
   f -= (g+j*g-j)%100;
   a -= (c-f+c+g+b+b+a-i-k*i+l)%100;
   g -= (l*n)%100;
   i -= (d-h-a-j-n-d)%100;
   j  = (j*l-b)%100;
   b += (a-k+i-a*h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F43(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[96]%2 )
   {
      b -= (g+k)%100;
      m -= (k*l*j+g+b+j*f+a-h)%100;
      i  = (e+e+m)%100;
      f  = (a-f+n-c+n)%100;
      k -= (g+c-h+f-j+d+g+k*a-d+n+e)%100;
   }
   else
   {
      while( ++WHILEcnt[95]%5 )
      {
         do
         {
            m -= (d-n-l+k+c+b*g*n+h+j)%100;
            for( ; ++FORcnt[143]%5 ; )
            {
               
               switch( ++SWcnt[47]%3 )
               {

               case 1:
               {
                  i += (l+e+h+j+a+n*k)%100;
                  f  = (n-b)%100;
                  g -= (h+a+k)%100;
                  n += (g-a+h+e+f-e+m+n-f+j+g-h+h)%100;
                  i += (c+d-l-j-k-k*j*m+c+g+a)%100;
               }
               break;

               case 2:
               {
                  m += (d-l+g)%100;
               }
               break;

               default:
               {
                  n -= (j-i+k-k*b+m*n+j-i+m-g)%100;
                  g -= (i-c+g+g+k+i+g-j-f)%100;
               }
               }

               if( ++IFcnt[71]%10 )
               {
                  b -= (f+k+k+n*h+g-j-h+j)%100;
                  c -= (m*i-b+l+k-c*n-a+c-b+f*e)%100;
                  h += (i+a)%100;
                  d  = (m+n*f+e-f*m+a-n-l+i+h-b-a)%100;
                  n -= (n+l)%100;
               }
               if( ++IFEcnt[94]%2 )
               {
                  d += (l+i-m-m)%100;
                  g += (f+d-k*m-n+b-n+m)%100;
                  e -= (n-m+h-m-h-j+i+f+i+f+d-k-a+n)%100;
                  k += (k+m-k+i+h-g-j)%100;
                  n += (a-h+a-e+j-n-j+d)%100;
                  b -= (j+k*a+i-n-g-a)%100;
               }
               else
               {
                  h -= (j+c-b-f+j+d+l*c*k-i+g)%100;
                  c  = (h*e+k)%100;
                  g -= (e+g+k+d+a-g*h+f+b)%100;
                  f -= (n+b-j-d-l)%100;
               }
               while( ++WHILEcnt[94]%5 )
               {
                  h -= (g+h*h-d)%100;
                  i -= (n*m-d*j-i-e-d-l)%100;
                  g -= (a+j+i*f+k-i-e*k+h-b+e+c)%100;
                  k  = (f-c+a-l*a*g+h-c+l*c-n-n)%100;
                  h -= (l*n-a+d+b*i-e+f-k+f-c-j-j)%100;
               }
               do
               {
                  c -= (n+k-h-b-n)%100;
                  f += (m*k-b*e-k*l+f*j+i)%100;
                  b += (e+l+b-c+n-c+c)%100;
               } while( ++DOcnt[95]%5 );
               for( ; ++FORcnt[142]%5 ; )
               {
                  e += (d-f-e+k-c-j-d+d)%100;
                  j -= (m*a+j-e-g*f*b*f+h)%100;
                  j -= (k+b*f-m-g-a-k-c+d*d+a+h*b+i)%100;
                  k += (f-k*h-f+a+n+m+k+h-k-b-k-m)%100;
                  g -= (h-l+l+m-j+m+b-d-c+b-g+g-b+h)%100;
               }
            }
            for( ; ++FORcnt[144]%5 ; )
            {
               if( ++IFEcnt[95]%2 )
               {
                  d += (c-b-e*d+h)%100;
                  n += (i-k+m-e+f-c-e-f-l-c-c*c*m+l)%100;
                  a -= (n-c-c*d-c)%100;
                  n  = (n-j)%100;
                  f += (f+j-m*k+a+a+k*n+e)%100;
               }
               else
               {
                  h += (h+g)%100;
                  m -= (a+b*e-h+e)%100;
                  b += (g*l-m)%100;
                  d  = (l+h-a+a+m+i-l+c-n)%100;
                  b += (a+c+e-k-m+i-c-j*f-b-f+a)%100;
                  f += (h+j-n-k*g+j)%100;
               }
               l -= (i-d)%100;
               e -= (n-b+k*l-e)%100;
               l -= (l+k-h-i*l+e)%100;
            }
            m += (i+f)%100;
         } while( ++DOcnt[94]%5 );
         h -= (g-b-i-e-i-n+c-f*h-b+j*f)%100;
         a += (d-n)%100;
         l -= (n-n-i-m)%100;
         e += (g-l-j+h+f+b+c)%100;
      }
      g -= (d+d+i-a)%100;
      m += (k-j*k*g-j-n-i-d+f-g+b+k)%100;
   }
   b += (l+i+n+l-j-m-g+k-c+n-i+j+k*g)%100;
   l += (a-l*l-j*g-l+f)%100;
   i += (j-c-i*e+i-m+a-e-h)%100;
   j  = (h*j)%100;
   g  = (a+a+n+k-j-m+c*f)%100;
   g += (h-n-g-b-l)%100;
   i += (i+c-m+m*k+h-j*k+j-h*b-n-f-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F44(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[98]%5 )
   {
      do
      {
         if( ++IFcnt[73]%10 )
         {
            b += (e+g+b-i)%100;
            for( ; ++FORcnt[145]%5 ; )
            {
               
               switch( ++SWcnt[48]%3 )
               {

               case 1:
               {
                  d += (m+a-n+h*i+j*l*j+k)%100;
                  c += (g*f+i*d)%100;
                  n -= (k-d)%100;
                  a  = (f+h+i-e-f*e)%100;
                  j += (n+e-i-g+b-i*h-c-c-h-i-m*h)%100;
               }
               break;

               case 2:
               {
                  h += (f-c-n+h*k-k-g-d*a)%100;
                  k += (e+e-e-h-l)%100;
                  e -= (i-k-h)%100;
                  c -= (k+n+m+i-c-g-b-a)%100;
               }
               break;

               default:
               {
                  g -= (n-i-b)%100;
                  h += (e+a)%100;
                  l += (i+i)%100;
                  l -= (j-g+j*e-c+c-h*c-h-a+k-e)%100;
                  c += (k+d-f+l+d+a+f*c+n+j-a-f+g)%100;
                  h += (l+f-f+b-g+b-i-k*k+b-n*m)%100;
               }
               }

               if( ++IFEcnt[97]%2 )
               {
                  b += (f+n-e*c)%100;
               }
               else
               {
                  e -= (d+a-n)%100;
                  h -= (m*f+l+n+i-i-l)%100;
                  n -= (k-a-j+g-m+b)%100;
                  g += (h*i-i-l+n+d-j)%100;
                  c -= (h+d)%100;
               }
               while( ++WHILEcnt[96]%5 )
               {
                  f += (m*d-g-b-c*n*l*c)%100;
                  i -= (n*m+j+e*k+i*n-b*j+d*k*i)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[146]%5 ; )
               {
                  e -= (e*b-a+a*j-f+a)%100;
                  c -= (k-b+i)%100;
                  e -= (g+d-d*j+j+i+c)%100;
                  n += (f+e)%100;
               }
               if( ++IFcnt[72]%10 )
               {
                  k -= (b-i*b+l+k-c)%100;
                  e += (k*a)%100;
                  f  = (c-j-m*d*c)%100;
                  k += (c+l+n+j*g*i)%100;
                  e += (m-c*i-k-a*e-c*f+h-h+l+a)%100;
                  d -= (a+k-e+h+i+k*a+i-n*d*g)%100;
               }
               for( ; ++FORcnt[147]%5 ; )
               {
                  n += (j-d+l+f)%100;
                  g += (e-c)%100;
                  n -= (d+i)%100;
                  h  = (g+c+h-c)%100;
                  i -= (k+i+k)%100;
               }
               if( ++IFEcnt[98]%2 )
               {
                  i -= (g+f-l-i+b-l*i+e+e+j)%100;
                  e += (i-i-f-f+a-l+n+e-e-n+i)%100;
                  n -= (c-m-b+a+h-m+j)%100;
                  a -= (f-l+j-k-c-f-k-m*n*k)%100;
                  f += (h-d-n*k+e+m-b-l)%100;
               }
               else
               {
                  c += (d+l+j+a+d-k-a+n-c-b+n+m)%100;
                  e -= (f-e*h+n*f*g+l-k)%100;
                  e -= (j*a-b-m+e-h*f)%100;
               }
               while( ++WHILEcnt[97]%5 )
               {
                  a += (a+a+g-m-j+m+d*a-g)%100;
                  h += (l*n+g-k-i+d*h+i*n+l-k)%100;
                  n -= (g-i-i+n*h+l+d-b-n*c-d)%100;
                  l -= (m-g*f*n+l)%100;
               }
            } while( ++DOcnt[97]%5 );
            d += (h-l-i+m+g+g-d)%100;
            a -= (h*n-d*j*a+n-d)%100;
         }
         g += (l-k+e+b-d+b*h+g+e+j-e)%100;
         j += (d-d)%100;
         a -= (e-i)%100;
         d += (b+j-c+b-l+m+a-a-k+c)%100;
         n -= (n-l*e-g-b+g-h-n+c-b-h-b*h+i)%100;
      } while( ++DOcnt[96]%5 );
      b -= (e*m+c-c+a-g+n)%100;
      m -= (k-c+j+i*n)%100;
      h += (g+c-h+a-g*j*m-n-k+g)%100;
   }
   h -= (e-k*i-a-h*c-i)%100;
   h += (d*l-d-l*k-j)%100;
   e -= (b-i-i-j*f)%100;
   m  = (m*m)%100;
   b  = (h+m+a+i-h-a-n+c)%100;
   i -= (n-d-e)%100;
   f  = (a*c+g-f+m-c-i+i+b+i-d-j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F45(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      c -= (i+e-n+i)%100;
      for( ; ++FORcnt[151]%5 ; )
      {
         
         switch( ++SWcnt[49]%4 )
         {

         case 1:
         {
            if( ++IFcnt[74]%10 )
            {
               if( ++IFEcnt[99]%2 )
               {
                  n -= (a-j-l-l*k+j)%100;
                  g -= (f*n+m+l-c*i+d+f+f)%100;
                  n -= (c-f-a+g+i-n-c)%100;
                  e += (i-a-g-h+k-m-e-b*e+i*e-j-m+g)%100;
                  e += (j+l*f)%100;
               }
               else
               {
                  g -= (n-n*c*g*a+a-h-j-e*a-e-h-m)%100;
                  e += (a+i*h-e*j)%100;
                  k += (h-g*c+c-a)%100;
                  h += (f-e-i-c-d+a-n+e-h)%100;
                  d  = (c-n-e-c+c)%100;
                  m -= (n*k*b+n+l+a*h+m-j-i-b+k*n)%100;
               }
               while( ++WHILEcnt[99]%5 )
               {
                  c -= (h+e+j-m-k-d)%100;
                  a += (e-i-d-c-j+n+j+j+n-i+e+a-i+n)%100;
                  n += (a-n+g*m*e-e-l-b-n+m-k-n+n+m)%100;
               }
               do
               {
                  e -= (f+g-f+j+i*k*e-b*k*l+g*j*k)%100;
                  k -= (j*b+m+j*n-i-g+a+b)%100;
                  e -= (n*a-c-i)%100;
                  k += (i+c-a+l)%100;
                  j  = (c+c+f-b+g-j+i+g-n-g+j)%100;
               } while( ++DOcnt[99]%5 );
               for( ; ++FORcnt[148]%5 ; )
               {
                  a -= (k+e+m+h*e+g-i)%100;
                  a -= (f*e+c)%100;
                  a -= (l+i)%100;
                  m -= (d-i*c)%100;
               }
            }
            for( ; ++FORcnt[150]%5 ; )
            {
               if( ++IFEcnt[100]%2 )
               {
                  g += (m*k-j-e-b-f+b-m-h)%100;
               }
               else
               {
                  m -= (g+a-b*f+e+m*h*d+n-d+j)%100;
                  m -= (d-k-k+i-h-j+l*e-m+f)%100;
                  j -= (n-g*c+d-i+h*f-h-l)%100;
                  f -= (d-i-g-k*d-i*i+i*n+e)%100;
                  i += (m*c-g+e+l*e)%100;
               }
               while( ++WHILEcnt[100]%5 )
               {
                  h += (l*m-b-i-n-c*m-e)%100;
                  l += (j-m+b-k-j+l-c-e-e-e-e)%100;
               }
               do
               {
                  d += (f*g+g+c+m*h-f-h-g-e+j-a-m+l)%100;
                  i += (d*e*j-d*c+h*d+i-g-a-f-e-i*m)%100;
                  j += (n+m)%100;
                  n  = (i-b-n+a+m+f*d-n-i-a)%100;
                  g += (j+n+d-e+c*d*k+a)%100;
               } while( ++DOcnt[100]%5 );
               if( ++IFcnt[75]%10 )
               {
                  k += (i-d-f+g-l*h-m*l-d*a)%100;
                  n -= (d+k-b-a+n+m-m+c-a+e+h-a+l)%100;
                  c  = (c-l+n*l-d)%100;
                  f -= (m+d*e+d+m)%100;
               }
               a += (e+g-a)%100;
               for( ; ++FORcnt[149]%5 ; )
               {
                  n  = (a-n-e)%100;
                  b += (a+n+l*a+i*k*g-h+i+c-e+m+j)%100;
                  k += (a-c+m-h-l-b+m-n-c)%100;
                  i  = (d-b-e+n-k+l+g-e-k-b+h-b)%100;
                  d -= (c+i-f+f-i+c-a-b+a+l)%100;
                  j -= (n*k-m+l)%100;
               }
            }
            
            switch( ++SWcnt[50]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[101]%2 )
               {
                  b += (a-h+d*k+l+d+l*j+g-g+b+l)%100;
                  g  = (c-j+c+a+h+e-b-m*i)%100;
                  h -= (n-j+i+e+i-j-g*n+l+e-e-c)%100;
                  n -= (d-g+a+n-g-c*n+i+n+l*n*m-i)%100;
                  n += (e+j-i*m+d*f)%100;
               }
               else
               {
                  a -= (a+b+l+j-e-j*m-j+a-e)%100;
                  i  = (l+c)%100;
                  h -= (f-c-l*d+b-f-f-j)%100;
               }
               m += (d-n)%100;
               b += (d+j-j+m+m*a-l-l*l)%100;
               j += (l+b-n-h)%100;
               e += (k+k+f*n+c+n-b-l*c-b+m-d-h-f)%100;
            }
            break;

            case 2:
            {
               g -= (b+a)%100;
               a  = (c*b+f-n*f-a-j+h-e)%100;
               g += (b+e+a*c+h)%100;
               b -= (j*h-b+h*b+h*h+d-l*i+b*d)%100;
            }
            break;

            case 3:
            {
               k -= (i+n+j+c-h-i*d-a-b-m-l-j)%100;
               d -= (n-b-k*b)%100;
               m -= (e+l)%100;
               l += (f-b+h)%100;
               g -= (h+g-g-d-c-l+g)%100;
               k += (e+n-j-k-n+a-f*c-j+a+g-j+i+e)%100;
            }
            break;

            default:
            {
               b -= (a*e*e*a-a*f+a-c+e-m)%100;
               b -= (k+n+a-n-d+i+d+j-c+h-b)%100;
               d += (e-i)%100;
               i += (n-i+l-i+c+n+a-l)%100;
               b  = (m-c+i*h+c-b+i+m+f+g+f-b)%100;
            }
            }

            j += (a-n*m+c*e+e+h*b+j-k-k+i)%100;
            j += (i+a+n*m*a-m-k+a+f+g)%100;
         }
         break;

         case 2:
         {
            f -= (c+h-f*l+f+e+l+i*b+c)%100;
            k += (l-a*i+b-n-e+n-f+b*g+i)%100;
            e -= (h+m)%100;
            i += (g-b-l-h+m+c-e+m*d-c*k)%100;
            h += (a*a*g*i+c-d*n*i+a-f)%100;
         }
         break;

         case 3:
         {
            c -= (k+h*i-e+l*f*d+m*i)%100;
            h += (d+i+b-l+h+h-l+l)%100;
            c -= (m-n)%100;
            e -= (i-c+k)%100;
         }
         break;

         default:
         {
            g -= (g+k-d+i*f+e+f*a+e)%100;
            i -= (e-e+e*d-a-d-g+k-l)%100;
            k -= (a-n-i-n-f-n+l-m)%100;
            n -= (h+g+d+k+n+e-e+g-k+l-m)%100;
            a -= (k+j*g*d-a+g+k+c)%100;
            k += (k-k-b)%100;
         }
         }

         c -= (l-k+i-f+e-g+a+l+e+n+a+d+h)%100;
         h -= (h+l*i+e+d-b+h*m-h*g+b-k)%100;
         a += (l*k+k+b-g+a*i*i*c-l-g*d+n)%100;
         n += (d*b*b+g)%100;
      }
      m -= (l-a-f+a+b+j*n+n*j+b-g+n*c+a)%100;
      j -= (j+b-b)%100;
      g -= (g*n)%100;
      l += (e+m-d*a+d+i-e+n+j*c+m-h-j-e)%100;
   } while( ++DOcnt[98]%5 );
   g -= (n+g-a*l+a*e-c-e+e+i*e-i)%100;
   h -= (d*k+g+n+m*e+a-l-a)%100;
   f -= (n-n-f+b)%100;
   h -= (b-l*b-d+i-g+k*h-c-a-i+c)%100;
   k -= (a+k-b-e+b+a-d+m-b+l-j-a*l*a)%100;
   e -= (g+e-j*l+k+a-b-c+n*j+d)%100;
   g += (i+m-d+f+e*c+g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<110; I++) IFcnt[I]   =0;
   for(I=0; I<147; I++) IFEcnt[I]  =0;
   for(I=0; I<73; I++) SWcnt[I]   =0;
   for(I=0; I<147; I++) WHILEcnt[I]=0;
   for(I=0; I<147; I++) DOcnt[I]   =0;
   for(I=0; I<220; I++) FORcnt[I]  =0;
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
   sum += F36( ) ;
   sum += F37( ) ;
   sum += F38( ) ;
   sum += F39( ) ;
   sum += F40( ) ;
   sum += F41( ) ;
   sum += F42( ) ;
   sum += F43( ) ;
   sum += F44( ) ;
   sum += F45( ) ;

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<76; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 76 << "   Dynamic = " << sum ;
   for(I=sum=0; I<102; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 102 << "   Dynamic = " << sum ;
   for(I=sum=0; I<51; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 51 << "   Dynamic = " << sum ;
   for(I=sum=0; I<101; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 101 << "   Dynamic = " << sum ;
   for(I=sum=0; I<101; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 101 << "   Dynamic = " << sum ;
   for(I=sum=0; I<152; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 152 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}