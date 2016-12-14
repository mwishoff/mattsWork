#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[48],IFEcnt[64],SWcnt[32],WHILEcnt[64],DOcnt[64],FORcnt[96];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         n  = (h+l+d*i*e-f-f-g+i*b+k)%100;
         d  = (a*a-d+h+d-j+e*b*i-e)%100;
         i += (c-b-a-f-a+d*n-c-a)%100;
         n += (e-g-f-k*e*i-e+g-i*j*m+b)%100;
         a -= (m-d*j-c-n-m+i+b+a*l+e+i*b)%100;
         h -= (c+j+g*g+e-n)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  l += (a+d+n-d+f+h-k)%100;
                  b -= (c*e*c+f*c-i-c-i*n+i)%100;
                  j += (d+m)%100;
               }
               l += (h+j)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  h += (h*l+n*a-l)%100;
                  n -= (g+f+h*i+e-g+k+m*f-e+e-j*k)%100;
                  n  = (b+j+g-e-d+d+m+m*j+i-c)%100;
                  f += (a+b*g*i-a-i)%100;
                  k += (h+d-g-k-l-a)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  k += (k-h-i-g-k+f+i-a-h+b-j+h+d)%100;
                  e -= (e-d-j*d-b+m-j-c+m-k+b*j+c)%100;
                  m += (l+n-b-e+h*f)%100;
                  a += (b-l*k-g+k+b-e)%100;
               }
               break;

               case 2:
               {
                  l += (a-l-a*d*e+n*i+m*m-d-k*h)%100;
                  k -= (i-f-n+a-m-j-j+f+d)%100;
                  i -= (g+b+l+i-c)%100;
                  b += (g-l-k+e-d*n+g+b)%100;
                  h += (e*b*d+h-f*c+i+a+a)%100;
                  f += (l+e-m+j)%100;
               }
               break;

               default:
               {
                  e -= (b-c)%100;
                  l -= (i+d*a-d+i-h-m+m)%100;
                  m -= (h*c*n+e+e+a*f+f)%100;
                  a -= (e*j*n-h-k+m)%100;
                  f -= (n+n+n-d+n*c*d*c*i+j-f+d)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  e -= (f*k*e-j-m-c-l*c-n+f-f+f)%100;
                  f += (k-b-a-i+e*m-b+b-a+a*b-a)%100;
               }
               else
               {
                  m -= (m-k+n)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  i  = (c*l+l)%100;
                  f -= (b+e-l-m-f+h-g-h-f+b+d)%100;
                  e -= (n-e+m+m-g-l+h-d+f+h+g-c-h)%100;
                  j -= (a+l+j+n*m-f+i-g*k*c-f*d)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  l -= (f+e+a*l*j-k*h+c*b+l-f-j-n)%100;
                  n += (k+b-d*k+k-f-h-g-m-e-n)%100;
                  j += (b-b-g-m-g)%100;
                  a += (j-h+m-b+i-a*a+l-i-k)%100;
                  c -= (a-k-n+f+g-m-g)%100;
                  e += (i-k*e-b-f-m+j-f-c-n-i)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  e += (m+l*h+n-i-a-f-f-g+m-g+g)%100;
                  c += (i-a)%100;
                  e += (m*g*l)%100;
                  e -= (f-f*a+a*n*e+c-i-b)%100;
                  j  = (h*m-f+k*f*n*b-e-g+d+e-a+n+l)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  d += (f-c+d+m*j+l-i*g-i+h+h+f+d+b)%100;
                  n += (j+m+f+f*k+a-a-j+b-i*i+h+b+j)%100;
                  n += (c*i-n+h+b+h+f)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  i -= (l*j-c+d+m+l-i+k-g+h)%100;
                  c -= (b-a-e+h+f*a+e*g-d-l+a)%100;
                  a += (e*b+e-f*a+i-a)%100;
                  e -= (h+d+c-b-i+c*k-g+c)%100;
               }
               else
               {
                  i += (b-e*b+i*c*m-d+m+d+g-k-e)%100;
                  g -= (c+k+k+d*b+f+i*e*n+a*n)%100;
                  n -= (f-i-n)%100;
                  e += (f+d-h-a*d-m*b+f-j*l-l)%100;
                  h -= (l-a*a-i)%100;
               }
            }
            f -= (l-i*k+a+m+e*m-e*b*l-a-h+m)%100;
            n -= (g+k)%100;
            c -= (m*g-l+h-c+l*g+k-e+c+f*c+i)%100;
            c -= (j*c-j+c)%100;
         }
         d += (c+m)%100;
         m += (n+a-c-i+n-j-c*f+g-g-f)%100;
         l += (h-j-k-i+i*f*m-g+b-j-b)%100;
      }
      j -= (e+m-l+d-d)%100;
      i  = (d+l*j+f*h-b+e-b+f*f-f-a-n)%100;
      l -= (m-d*b+b-i+a)%100;
      j -= (c-n*j*b+i-n+k-l*n-l+d+f-i)%100;
   }
   b += (n-l-i-e+e+l-j-n+e-i-m)%100;
   d -= (a-a+l*b-i)%100;
   i  = (n+c)%100;
   j -= (m+a-i+j)%100;
   d  = (b-h+i+h)%100;
   i -= (i+g-n-k-g-e+g+m+j+j-e-l+f)%100;
   k  = (a-g+k-n-e-m+a-i-c-d+g*l-e+h)%100;
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
         h += (a*k*n-k)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%3 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  m += (g+a)%100;
                  g -= (b+n*f-f+c)%100;
                  j += (b*f)%100;
                  d -= (f+k+i*i+m+n-m*a+d-a*n-j)%100;
                  c -= (g-f+n-c)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  i += (a+b*g-a-d-f+e-g-g-g*c+a+j+d)%100;
                  f -= (i+k-n*h+d*l-d+e-g-h+h-k-n)%100;
                  i += (j+g*g)%100;
                  f -= (a*e+d+n-l-a+j+a-n+j+b+b-k)%100;
                  b += (h-g+m-k-c*m-c+h*j)%100;
               }
               else
               {
                  m -= (l-k)%100;
                  c -= (d+h-c+g-c-a)%100;
                  n -= (a-k+n*g*m*a+e*l*m-l*f)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  h += (d+k-i-m-i-h)%100;
                  h += (h+f*b+m+e-i*m*n+f+m)%100;
                  k -= (d-h+k*e-l+a+n+h*m-a-i)%100;
                  d += (k-b)%100;
               }
               do
               {
                  k  = (b+i-j+g-m)%100;
                  d -= (d+g-c+f+h+m+e*a)%100;
                  f  = (f*m-a+m*n-b+n-c*i+j-e-b)%100;
                  g += (f+l*k-b-k+i+h-b-k+a-c+c)%100;
                  c += (c+j*d*c+m*n-e)%100;
                  e += (e*b+e*i)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  n -= (k*h-e-a+a-a+i+j+i-n)%100;
                  l += (i-h+b+k-c-j+c+d*e+l*j-f+a-n)%100;
                  d += (f*c-h-e*d+b-d-n*j+f+l-l)%100;
                  f -= (l-f-a-g)%100;
                  g += (a+d*a-d+g-c-c-d-c-n-n-d+b*f)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  j += (f-k)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  n += (l+f)%100;
                  a -= (d-i)%100;
                  i += (b+g*b*l-n-d+a*a+f)%100;
                  n += (d*g-d+l)%100;
               }
               else
               {
                  h += (l-b-n+l)%100;
                  h -= (i+b+l-f-b-a+e-d-j-c-k-g)%100;
                  d -= (k+h+k*g-n)%100;
                  h -= (g-n+l-j-c-n)%100;
                  j  = (g-d-j-a+g+m+i*b+d+a-h)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  k += (g-n)%100;
                  h -= (n*f)%100;
                  d -= (e+j-j-l+e-i+a)%100;
                  j -= (d-j*a+a-k+e*l-g)%100;
                  f += (d+e-b-n-a-g*b-l+l+l-b*e*b)%100;
                  d += (e-a+a+m*g+f-g-h+f*j)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  h -= (e*i)%100;
                  e  = (f-a*a-n-m+e+g+b+k+k*f+l+c)%100;
                  m -= (g-k+i-h+f)%100;
               } while( ++DOcnt[4]%5 );
               a += (c-j+b+b)%100;
               h += (n+n-f*d*k*a+g+e+e-g+l-i+h-b)%100;
               c += (n+n+k+h*g-l-j*i+d-k*d+f+m*k)%100;
               m += (e-e-h-m-a*a*n+m+i-m-b+f)%100;
            }
            }

            j += (i-i*e+d)%100;
            d += (b-i-h+j*b+b+m-l+j-j*e-b)%100;
            h -= (j+i*i-g-n)%100;
         }
         n += (e+l-h-b+c)%100;
         k += (h+m)%100;
         n += (n*e+g-f+d-a)%100;
      } while( ++DOcnt[2]%5 );
      d -= (g-a+n-b-g)%100;
      b += (m-f-k-l)%100;
      m -= (l-e-b+l-l-j-l*k-i)%100;
      m -= (n*l-j-k+f-c-b-b-e+a*d-h-l+c)%100;
   }
   n -= (e-j*c+m*m-m)%100;
   c += (e*h)%100;
   e -= (h+j)%100;
   j -= (e+a*m)%100;
   i += (a-n-l-m+g+l*n-f+d-n+a)%100;
   k -= (c*g*a)%100;
   f -= (h*g+g+h+h+m*g-l*k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[5]%10 )
   {
      c -= (h-b)%100;
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
                  a -= (e+e-l+d-i*k)%100;
                  i -= (e+f)%100;
                  l += (k+c-a-f+i+e-a-g-g+j+j+e+f+d)%100;
                  i  = (i-l+k+f-m*f-l*e-e*k-b)%100;
                  j += (d+b-h+c+l+b-b-h-i+d-i)%100;
                  b -= (h+c+e*e*a+b+i-i)%100;
               }
               else
               {
                  h -= (m-h+h+c-i)%100;
                  g  = (b-e+k*i)%100;
                  m -= (k*a-a-f*a+c-c-h)%100;
                  b += (i-m+k*f-l-d-k+l)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  i -= (g+i+n-m*i-a)%100;
                  c  = (a-g)%100;
                  m -= (g-i+g+j-n+d-d*l+f)%100;
                  g -= (j+e+j*g)%100;
                  g -= (g*k+b+l-e-k-n*f+j*i)%100;
               }
               do
               {
                  e += (d*c*m+c)%100;
               } while( ++DOcnt[6]%5 );
               e += (n-l-n-h+c*m-m*d-n+m)%100;
               for( ; ++FORcnt[9]%5 ; )
               {
                  k  = (g-l-g*d+a*f*n-i-g*j)%100;
                  n -= (e-f)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  e += (k+i-c+i+e-l-k-g-d-c*f-d*l-j)%100;
                  b += (e+i+n-j*l+h)%100;
                  c += (b*f+a+e+a+h+h*h-h)%100;
                  g += (d*n-j-c+l)%100;
                  e -= (b+n-f*g+d-i-l+m-m-k*c)%100;
               }
               do
               {
                  a -= (d-b+m-d-j+j+b)%100;
                  g -= (g*f+g-f+f-b*h+e+j-l*f)%100;
                  d  = (n-f+g)%100;
                  h += (i+d)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  e += (m-h-h-d)%100;
                  j += (a-h-n+h-n-i+b*e-d-e+f+g-j-m)%100;
                  b -= (g*k+k+m+k-l*l*h+l)%100;
                  l += (n-c)%100;
                  n -= (h*d*h+l+e+g)%100;
                  e -= (i+c+b-j+g*g-k*j-j*l)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  m += (l+j)%100;
                  d += (f*k*g-d+k+h+a*j+l*b)%100;
                  e -= (g-j*a+i+n+c*h+j-a-e-n)%100;
                  f += (i-k)%100;
                  l -= (h+i+i*c*f-j-c*k-l*i-j*h)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  a -= (j+b)%100;
                  l -= (h+d+n)%100;
                  l -= (d-a+i-h*h-g-a-e*k+c)%100;
               }
            }
            
            switch( ++SWcnt[3]%3 )
            {

            case 1:
            {
               if( ++IFcnt[4]%10 )
               {
                  a -= (a+d+k)%100;
                  f  = (m+h+l-c)%100;
                  g -= (j+c*g+m+e+j-m*n+n+a)%100;
                  l -= (h+i+h-d-i-a*a*j-c*h*d*f)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  e += (b-c*b-l)%100;
                  e  = (n-c+b+k+c*m*e-d+c-e+e+b+b)%100;
                  b += (l-k+k-n+i*g+i-i-f-c+d+n+c-k)%100;
                  g += (n+f*c+n+n-n+h-k+h)%100;
                  d += (h-k*k-m+g+k+h*h-h-f*i-k)%100;
               }
               else
               {
                  f  = (g+k+g*e-n-m+n*b-j-c*f-c*j+c)%100;
                  d -= (n*g-m*a*d*d+b-m-d)%100;
                  n -= (i-i-a+b+f-b-b-j)%100;
                  m -= (i-j*l*g*h)%100;
                  a += (g-b-f-n-m-m*j*e)%100;
                  l += (f-g)%100;
               }
               e -= (m+k+g-j+e*b-b*k*d+f*b+d-n)%100;
               e -= (c+i*b-j*c-c)%100;
               e += (l*f+h+g-j-l-d*l-i+k*i+j*i)%100;
            }
            break;

            case 2:
            {
               f -= (i+b-h+d*m)%100;
               m -= (f+i+b-a+k+c)%100;
               i += (m-a)%100;
            }
            break;

            default:
            {
               b += (c-b*d-h-j-a-i-f-b-f+h)%100;
               j -= (j+i+e-c*f+b-d*e*l)%100;
               d += (e+h+d-b+b-i-i-d-l+n+n-g-k)%100;
               n += (d-c*i+h-c)%100;
               g -= (j+b+n*d+j-f+i-l-g-i-n*m)%100;
            }
            }

            i  = (d+a+g+l-c)%100;
            l += (a*a*f*i*a-j+c+j-a-i-j+f)%100;
            i += (k-f*a+f-n)%100;
            e += (k-h+k+f+h+h)%100;
         }
         break;

         case 2:
         {
            e -= (j*k+i-c-c-d*i+j*i*b)%100;
            l -= (g-m+i+i)%100;
            g -= (f+i+k-a)%100;
            k -= (m+l*f)%100;
         }
         break;

         default:
         {
            e += (c+i+l+n-f-n+i-g*h*h-b*b)%100;
            n -= (e+h)%100;
            g  = (j-m+g-n*f-l+j-f+k+b)%100;
            i -= (h*i-b*j+m+c-k+a-f+a+m-j*j)%100;
            f += (n+b-i-e+i+h)%100;
            d -= (f+b+e-m-h-m*n)%100;
         }
         }

         a -= (a*b-i*e*e-d)%100;
         f -= (b+f)%100;
         e  = (j*i+k)%100;
      }
      n += (l+m-h+d+a+e+e+d*n-a)%100;
      b += (b-h-n)%100;
      j -= (h-j-k+l+b)%100;
   }
   h += (m+i+j-m+a+b+e-l-g)%100;
   m  = (g+h-e+e*k+c*j)%100;
   f -= (k+n-m+l+b*k-m*g+e-f+g-g)%100;
   c += (e+d*b+a+d+a-c-d+l-f)%100;
   f += (g*h+f+k-a*c+c-g+a+i)%100;
   d += (c-n)%100;
   m  = (i*e)%100;
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
                  d -= (h-c)%100;
                  a += (f+j+h+m-f-j-l+e+j)%100;
                  i  = (e+l+d-d*d+b)%100;
               }
               else
               {
                  d += (c*e+j-g*j-l+f+h+c+d)%100;
                  n -= (b+d)%100;
                  i -= (l-f+n-k*g+l+d*g-l-n-e)%100;
                  g -= (l*k-d-c)%100;
                  b += (b+l-n-i*d+l-b+i-l)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  l += (n*k-m+h-m*f*f-h+c*k+l)%100;
                  c -= (l-l+b+j+g-c)%100;
                  f += (i-l-a+n+h+g-m-k-a+a)%100;
                  a  = (j+f)%100;
                  m += (j*b*d-n+e-c+j*a-l+d-d+h)%100;
               }
               do
               {
                  l -= (c+f+i-e-m+h)%100;
                  d -= (b*e+b-l-a+m+i+m-a)%100;
                  d -= (m+k-b*c-h-h+g*k-j-n*n+i-f)%100;
                  j -= (k+n+h+d-d+g-g*k+l-a-a)%100;
               } while( ++DOcnt[8]%5 );
               if( ++IFcnt[6]%10 )
               {
                  n += (m*n+n-g-c+h+b+l+h+a-d)%100;
                  d -= (b-f+h*d+k+l-n-g+c)%100;
                  j -= (a+m+b+d-n+m-n-k*a*m+f-g+e-e)%100;
                  l -= (m+f-n*e-d+e+c-d-h+d-e-h-e+f)%100;
                  h -= (l+l*e-k*c*f-d-j+d)%100;
                  g += (n+i+b)%100;
               }
               m -= (j*g-k+c-f+k+f+d+b-k*b+j+b)%100;
               for( ; ++FORcnt[11]%5 ; )
               {
                  n  = (m+a)%100;
                  l += (f*c-g-f+j*b+f)%100;
                  k -= (h+g+a+e-c-k*a*e+f)%100;
                  d  = (c-g+n+n-g+k+i-i-c+l+k*m)%100;
                  b += (m-g-b-j-f+n+f-f+k)%100;
               }
            }
            
            switch( ++SWcnt[4]%3 )
            {

            case 1:
            {
               k += (e+f-h+j+h-f-i+k-b+e+n)%100;
            }
            break;

            case 2:
            {
               a -= (l-m+d-e+m)%100;
               n -= (m+a)%100;
            }
            break;

            default:
            {
               f += (g+f+b+n-g+f+k+i-f-n-f)%100;
               c -= (i-l*f+h-a-a+n*b-m+l)%100;
               b -= (c+c-n-i+h-b+d*e+n+k+f-d)%100;
               f -= (f+f-g+a*d*n*a*k-b-m*e)%100;
               a -= (d-f-j+g-g-b+m-m+f-i)%100;
            }
            }

            c += (m-k)%100;
            e -= (b+k-n+k-f-f*m+c*f-h-f)%100;
         }
         b -= (h+m+a-b-g-m)%100;
         b += (j+c*k-f-c)%100;
         n += (j*c)%100;
         b -= (c+k)%100;
      } while( ++DOcnt[7]%5 );
      l -= (a+m+j-j*c+n+b-j+g+f+c-f-n-a)%100;
      k -= (e+k+f-b*h*i-a+c-f-f-a)%100;
      b += (h-d+g+n+i*b-i-f*i*n*i*l)%100;
      k += (i+e+f*a+k+a-b+i-f)%100;
   }
   e -= (n-a*i+i)%100;
   j += (m-e-c+n-e)%100;
   g -= (j+g*e+b+b*i+i-d*f)%100;
   i += (c*k-n-a)%100;
   m -= (f-i)%100;
   m  = (k*l)%100;
   a -= (m-i+k+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[11]%2 )
   {
      a -= (n*m+f-f+b-k*j)%100;
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
                  g  = (c-a+i-m*j+f-m-j-j+f+l)%100;
                  d -= (j+k-f+k*j+e+m)%100;
                  f -= (e*a-l-k-a-k+c+k-f*i+b)%100;
                  n -= (d+b-h+i-j+n)%100;
                  f -= (i-i-n+g+e-c*h+i)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  m -= (f*h)%100;
                  g += (f-m+h+f)%100;
                  b -= (m+g*j-k*j+m+h+a+h)%100;
                  j -= (n*d-n-g+l-h*h+k-i-e-a*f)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  c += (a-g+j+h+i*b*i+m)%100;
                  f -= (i+b+m-c+m-j-h*h*d-l*b*c*i-f)%100;
                  h -= (h-d+m-c*d+m*f+b-c)%100;
                  i -= (d*a+k+e+c+m-b+k-i-l*f+e+n+j)%100;
                  c  = (e-f*k-c*m+m-f+a*i-a+m)%100;
               }
               else
               {
                  d -= (l+b*m-e-k+l)%100;
                  b += (i-m-i+i-j-a+d)%100;
                  m -= (j-e+b-g-b*e+b-b*h+f)%100;
                  m += (a*g-c*i*a*k-b-h-g-d-h)%100;
                  n  = (i+a-n-m+a-d-g+b+b+i)%100;
                  a -= (g*a+j+g-k)%100;
               }
            }
            while( ++WHILEcnt[9]%5 )
            {
               do
               {
                  n -= (k-e-k+f-m*b*n-d+j+f-i-k+l-n)%100;
                  d += (n+m+e+a*m-c-k-i-c-e)%100;
                  l += (k-h-g)%100;
                  a += (m-b*g+d+l)%100;
               } while( ++DOcnt[10]%5 );
               a += (b+m*b-b-c-f+h*c+a+l-h)%100;
               for( ; ++FORcnt[16]%5 ; )
               {
                  a -= (b-a+d-a-m+g-c+a)%100;
                  e -= (a+f-g+c-k+i+f)%100;
                  a += (m-i-a-j-j)%100;
                  h += (f+b*g-g-d)%100;
                  f -= (k*k-h+k-l)%100;
                  c -= (h-i)%100;
               }
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  k -= (b+c*b+d)%100;
                  j -= (k+g*l)%100;
                  f += (m*g-n-i-j+c-k+h-m*b)%100;
                  d -= (k+k)%100;
                  l -= (n+i+a+e+c-e+k-h-l*k-h+g)%100;
               }
               break;

               case 2:
               {
                  n += (a+f+b-j-k-e-c-e+l)%100;
                  a -= (a+e-b+n+b+e*n)%100;
                  k -= (c*d+f-j-b+l-e*b+m+e)%100;
               }
               break;

               default:
               {
                  f += (e-b+i+c+a-a-k+m+a+g*g+d*m)%100;
                  b -= (h*k+l-b*e*b-j+m-e-a*e-j)%100;
                  l -= (j+j+a)%100;
                  k += (d-a+k-h-l-j+i-i-j*i+b-c+k)%100;
                  b -= (a-m)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  m += (b*a-e-g+h+c+f-l+d-e+a*g-j)%100;
                  h += (i-m+e+m*f*m-m+m)%100;
                  j += (c+l+n-m+e+n+l+e+c+c+f-k+f)%100;
                  e -= (n+c*i-g-i-l-j+b-j*n+m+b)%100;
               }
            }
            if( ++IFEcnt[10]%2 )
            {
               c -= (i*k+f-k+g-k+h-l+k-f-a-k*c)%100;
               l -= (m*n*h+f+d)%100;
               j  = (g+k-a-l+f+e*g*c+h+f-c+d+k-l)%100;
               j += (d-m+i*e*m-n-b+m*g+h-c)%100;
               g -= (b*d+h-n*d*n+f-g-i+h+n-c)%100;
            }
            else
            {
               l += (c-i-k+b-j-e*k-k*j-m+h-d*h)%100;
               e -= (e-f*k+n-g+g-l*e-l-m*f)%100;
               k -= (d*j)%100;
               h += (b+d+k)%100;
               k += (e-i-k+e-i+h-l)%100;
               f -= (j+h)%100;
            }
            c -= (h*b+h-k*l+d-n-k+e-f)%100;
            i -= (n+i-l-k-d)%100;
         } while( ++DOcnt[9]%5 );
         l += (i+n-c-g-d*h*f-e+h-l+d+l+e)%100;
         d += (a-d-f+i-l-n-l+i-h+l)%100;
         c  = (d-a*e-b-g-m+l-n-d-d-g+h-f)%100;
         i -= (b+i+g*l)%100;
         a -= (b*f-b-m*i*n-a+b-e+f)%100;
      }
      f -= (j*d+f-h-i-d+a-i-i-k)%100;
      b -= (i*k+f)%100;
      k -= (b+m+c)%100;
   }
   d -= (i-b*k+i+h+e+b+i-d+n-e*j+l+k)%100;
   d += (c+k+j+j-g-l-l+j+n-n-j)%100;
   b += (h*m-d*m-d-c+n-j+e*i+j)%100;
   c -= (j-l+m-k*d*b+g+b+g+c*a*k+f*b)%100;
   g -= (k+j+a-e+e-a*b*c-j-d)%100;
   c -= (f+h-d+m-l+j+g+i*a+k+g+k-c-a)%100;
   c += (e*n)%100;
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
                  h -= (k*c-d+d-g+n-g-h+h-g*n)%100;
                  m += (m-d-d+n+b*f+g*k-k*h-e+i-d-n)%100;
                  h -= (n+c*b+b+f)%100;
               }
               else
               {
                  j += (b*h+b+j-d-l-i*f+d*a+c-g+f)%100;
                  g += (e*f*d-a*d*c-l+d+i+n+j+e+f+m)%100;
                  h -= (f-b+a-m*d-e-i-b*a-h-n+c*d+k)%100;
                  i -= (l+m*l+j-d)%100;
                  l += (d*g+f+b+b+b+m*e)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  d -= (d+k)%100;
                  g -= (b-g)%100;
                  l += (l-b-l-k+a-i-d+g*i-d*d+l)%100;
                  a += (k+f+b+l-c*m+j+b-n-e-m-l+f)%100;
                  c -= (i-f+l-b-a-j*n+f)%100;
               }
               do
               {
                  n += (i*k*h+l*d-n-k*e+g+c)%100;
                  a += (k+e-f-b-g-i)%100;
                  i -= (n-c-m+m)%100;
                  a -= (g-a*k-i+m*e-l+n)%100;
               } while( ++DOcnt[12]%5 );
               if( ++IFcnt[9]%10 )
               {
                  h += (l+h*l+g*m*m+m-j+j-m+e)%100;
                  a -= (b-i+d+f*b*a+n-n-g+l-b+f+l-j)%100;
                  k -= (l-a-f-e+b+a+l+b*n)%100;
                  m += (l*f-f*b-m)%100;
                  f -= (n+g)%100;
                  a -= (m*f+j+l-b)%100;
               }
               j -= (n*a-h*n-k*k-e*k*l)%100;
               for( ; ++FORcnt[17]%5 ; )
               {
                  b -= (j-e*n*g+b-n*j+h-k+a)%100;
                  h += (h+h+j-c+k-d+k-k)%100;
                  g += (l-b)%100;
                  f -= (l-l)%100;
                  e += (j-a-b-n+d+m+k+h*c+e*d+i-k*b)%100;
               }
            }
            
            switch( ++SWcnt[6]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[13]%2 )
               {
                  d -= (h-k-n+h*b-i*i-e-b-k*c+c)%100;
                  h += (e*i+n*i*k+n)%100;
                  n += (f+i-h-n-j-l-l*j)%100;
                  h  = (b-d-d+c-c-f+c-n)%100;
                  d  = (j-a*m-d+j)%100;
                  c -= (d+h*c-d*j+d-d*l-m-l*i*f)%100;
               }
               else
               {
                  c  = (b*n+g-n+i-a)%100;
                  n += (d+m)%100;
                  d -= (a+n)%100;
                  e  = (h-g*e+h)%100;
               }
               while( ++WHILEcnt[12]%5 )
               {
                  b -= (a*g)%100;
                  h -= (e+j-m+f+f+j-f)%100;
                  h += (l*m+j-g-i)%100;
                  e -= (j-d+b-k*k+l*k-a*c-l-i+d)%100;
                  i += (j+a-g)%100;
               }
               do
               {
                  k -= (b+l-i+h-a)%100;
                  c -= (k*m+j-e-j-n+d*d+h*e*g)%100;
                  a += (c-e-n+n-a-e+j*g*f+f-e+d-k)%100;
               } while( ++DOcnt[13]%5 );
               for( ; ++FORcnt[19]%5 ; )
               {
                  h += (n+m)%100;
                  b += (c+c+m-k-n+h)%100;
                  b -= (l-l-a+f-n-b-b+a*c*b-f-i-l)%100;
                  h  = (d*m+g*j+c*j)%100;
                  d += (f-b-a*h-m+b*k+l)%100;
               }
               j -= (m+j)%100;
            }
            break;

            case 2:
            {
               l -= (k+j-e-m*b*a-m-e-f*k+i-b+c)%100;
               j += (m-m+f+m-i+m-k-e-j+h-e-d-c)%100;
               n += (a+a-b+b-k*m*b*e-d-c-k+a*c)%100;
               n -= (h-m-g-l-n+l+j-k*a+j)%100;
            }
            break;

            case 3:
            {
               d += (j+j-n-c+c+n+i+j+j+d)%100;
               i  = (k-c-a)%100;
               d += (f-g+b+b-e-j-k-n-g+g+n)%100;
               l -= (a*c+a)%100;
               n -= (c-c+n-c*e-a+g+g-a)%100;
               j -= (j+b-a-l-j+f)%100;
            }
            break;

            default:
            {
               c -= (k+h-g)%100;
               k += (c-k+b*a-g)%100;
               e += (d-g-g+n-n-i)%100;
               j -= (k+j-e+n)%100;
               h += (b-f+h+a+d*l-e*d+n-d+a)%100;
            }
            }

            c += (l*l*b)%100;
            b += (h+j+j+j+c)%100;
         }
         j -= (d-d-g+h)%100;
         m -= (e-e)%100;
         l -= (h-e+g+f*c)%100;
         l += (k*c-f+n-j+j)%100;
      } while( ++DOcnt[11]%5 );
      l += (c-k-h+k*b)%100;
   }
   j += (m*j-h-m*m+m+b+f)%100;
   k += (d+b*j*l-l-l+b+a*m+d+e)%100;
   b -= (i+b)%100;
   j += (e-a-a+n-c)%100;
   d += (h*m-m*b-n+b-i-h)%100;
   g += (k-h-e-h+h+c-m-e+i*c*c)%100;
   d -= (m+a-a*e+e+l)%100;
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
            l -= (b+h-b-f+f*m*k-l-j-h*d*d)%100;
            f -= (i*n-g-k-b-b-f-c-e-a)%100;
            a += (f-m-l-m+k-n-j-n-c+m+n*k-k)%100;
            c += (g+n-m+h+l*b)%100;
            b += (n-a-a+e+k-k-j-l+d+m*k)%100;
         }
         else
         {
            while( ++WHILEcnt[14]%5 )
            {
               do
               {
                  a -= (n-l-f*d-m)%100;
                  e += (k-k+c*f)%100;
                  e  = (m+n+c-k+n+a)%100;
                  m += (g+j+d-d-h+l-h)%100;
                  m += (f-a*f-j+h+b)%100;
                  d -= (j+e*i-h+m*l-f+d+k+b+m+c*i-e)%100;
               } while( ++DOcnt[14]%5 );
               h -= (g-h-j-e*l+i+c+e*a)%100;
               for( ; ++FORcnt[21]%5 ; )
               {
                  c -= (g-j-c+g+g*l)%100;
                  n -= (k*f*a+l+l+j*c+g-m+b)%100;
                  g -= (c-a+l*a-b+c)%100;
                  a -= (a+l-l+e+m-b+f*i-g*e*d+i+g)%100;
                  b += (e-m+n)%100;
               }
               
               switch( ++SWcnt[7]%4 )
               {

               case 1:
               {
                  j += (e*l-b)%100;
                  b  = (e-l+l*a-g+b*l-j)%100;
                  m -= (g-c)%100;
               }
               break;

               case 2:
               {
                  n -= (k+i*c-f+h-m+i-b-m+i+i*k+e-d)%100;
                  i += (l-f*j-k+k-d+d-l+g+m-d-b+n+b)%100;
                  c += (e-l)%100;
                  k += (f+c+j+i)%100;
                  c += (e+h-c-e)%100;
               }
               break;

               case 3:
               {
                  g -= (k-j*k+a*n+h+n)%100;
                  i -= (b+l+k*c*b-f-f+e-k-h-e-l+a+j)%100;
                  i  = (k-n-h)%100;
                  d -= (n-a+n+l*i*k*i-a+m*l-l-e+n)%100;
               }
               break;

               default:
               {
                  e -= (m-i)%100;
                  e -= (n+m-l-k)%100;
                  l += (d*a-m-i-i+b+m+d+m-e*n-f)%100;
                  g += (j+l-h+b-c-k-g-a-g-a+l-m+c)%100;
                  b += (j*d-l+k-l-a-a*k*g+d+j)%100;
                  n += (e+i*k-a+f+k*e+d-l-m+j+d-j-h)%100;
               }
               }

            }
            if( ++IFcnt[10]%10 )
            {
               if( ++IFEcnt[14]%2 )
               {
                  m -= (m-i+j-k+a+l)%100;
                  d -= (n-k*a-n-d+l+n+b-b-g+n)%100;
                  g -= (b+m-i+d-l+e+d+e-n*f+n-b-k)%100;
                  j += (c+c-h-k+i+f+g-h*l-m+n-j)%100;
               }
               else
               {
                  j -= (d+g+f+l-m-i)%100;
                  g += (a-e-l*c-a-e-a*h+l)%100;
                  a += (a-k+c*b-g-k+j+j+m-j*j+b)%100;
                  a -= (f-b-k-g-j-g-g+j+j-e-m-g)%100;
                  j += (e+b-n+n*h+n+h-b-j)%100;
               }
               while( ++WHILEcnt[15]%5 )
               {
                  c += (h*a)%100;
                  f -= (i-k*e*b+k-b-d*l+b*e-k+j+m-m)%100;
                  h += (j*j+c-i)%100;
                  c += (e-m+l-d)%100;
                  j += (f*i+j+a-m-d-k-k-l-a)%100;
                  n -= (c+h+i+f-e)%100;
               }
               c += (a*k+n*g*i*a)%100;
               a -= (m+a-m+g-i-n-a-b+h+h-e*f-b)%100;
               k  = (d+a-l*i-d-i+e-b-c+b*h)%100;
            }
            c -= (k-j+a)%100;
            g += (c-g+h+j-k+l-c-f*a)%100;
            d  = (m-n+j+c*c-e)%100;
         }
         e += (g*i+l)%100;
      }
   }
   n  = (j+n)%100;
   k += (n+l+m-h-e-a-m-c*l+k-g*m)%100;
   i += (l-a*k*e-i)%100;
   k += (m+k*d-i+j*f+i)%100;
   f -= (h+h-f)%100;
   h += (l-h-j+b-c-g+n+c+n)%100;
   e -= (d+c*d+g-g+n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F8(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[25]%5 ; )
      {
         for( ; ++FORcnt[24]%5 ; )
         {
            if( ++IFEcnt[17]%2 )
            {
               if( ++IFEcnt[16]%2 )
               {
                  m -= (e-m+k+l+a-g-j+a-g-i+h)%100;
                  i -= (b-g)%100;
                  e -= (l+l*m-n*k-l-h+f*f)%100;
                  d -= (c-j+c-l+a+d+j+m+k*g+m+n-l)%100;
                  g -= (c+k+k)%100;
                  a += (f-b-a+e-n*j*g+e-h-n)%100;
               }
               else
               {
                  b -= (n+d-a-j+l-m+d-f+b+b*l+a-d+k)%100;
                  i -= (c-a+e-l-b+c)%100;
                  d -= (d+a-e+d-j+k-h-c+g*k+l-b*n)%100;
                  f -= (m-d-f-l+h*b+c-b)%100;
               }
               while( ++WHILEcnt[17]%5 )
               {
                  a -= (l+h-h*f+c-a-f+d-n-m+k-n-j)%100;
                  l -= (l+m+j*l+e*f+e-f)%100;
                  b += (n-i*b)%100;
                  f += (m-i-f*d-n+a-j*c)%100;
                  m -= (g-k-b+d+f+k-c-h-i+e+d+c-g)%100;
               }
               do
               {
                  k -= (h+m-c+h-m*i+m+h*g)%100;
                  k -= (l-n*e+e+e*m+b+l+h+k)%100;
                  f += (i+f)%100;
                  f += (g*g-k)%100;
                  f -= (c*d+c*j*b-k)%100;
               } while( ++DOcnt[17]%5 );
               g += (j*f)%100;
               h += (c+i+i-f-h-f+d-b+i-b)%100;
            }
            else
            {
               while( ++WHILEcnt[16]%5 )
               {
                  l += (l-i+j-l-m-c-c+h+n-m-j)%100;
                  m  = (j-e)%100;
                  i -= (l*d-i-g*h+b-c-n+n-m)%100;
                  m -= (e-g*a*d-j-a+c-a+d-m+d-l*d)%100;
                  a -= (i-d-n-c+i-a*h-c)%100;
               }
               do
               {
                  c -= (n-m-a-e+b+b+f-f)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  l += (h+h)%100;
                  c += (k*f+l+a+a*m+l*c+h-c*e*a+f)%100;
               }
               c += (c-b+c-d+h)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  l -= (k+h+g-h-g-d-b*b+f-k+b+j)%100;
                  c -= (a*e-l+h-f*e-g*d+l-m+g-f-e)%100;
                  i -= (l-l-m-j-n-e)%100;
                  m -= (n*b)%100;
                  n  = (h*f-k-g-l*h)%100;
               }
               
               switch( ++SWcnt[8]%4 )
               {

               case 1:
               {
                  a += (f-f-k-f+f+j+a-e*f+b+c+e)%100;
                  j -= (h+d+f+a-m+e-e+f-g-e-j-h)%100;
                  j += (m-l)%100;
                  n  = (f+k-k-j+b+a+n-c)%100;
               }
               break;

               case 2:
               {
                  d -= (n+a-c-d*f)%100;
                  h  = (m-k)%100;
                  b -= (f+d+l-f)%100;
                  i += (n+d-i+l*a+a*g*j-b)%100;
                  b -= (k*c*m+k+m-f)%100;
                  g -= (f+e+a-b+n-i)%100;
               }
               break;

               case 3:
               {
                  l += (i+g*i*n)%100;
                  a += (e+k*h+g+f+g+h-c-m+e+d)%100;
                  f += (n+n-m+c*b-i+n-m+a+l+l-g-l)%100;
                  f += (d*i-k+n-c-n+g+l*h-h+e+l)%100;
                  a += (b+e+l*m-k-l)%100;
               }
               break;

               default:
               {
                  f -= (g*g-c+g-d-h+b)%100;
                  f -= (b*f*b+f-l+b+j+d+j-b+b)%100;
                  c += (n-i+f-a*k-l*h-e-g)%100;
               }
               }

            }
            f -= (n+c+k*d-b-a)%100;
            i -= (c+h-a)%100;
            l -= (d-l*e-n-f-i+h+b-c-g+j-j)%100;
         }
         e -= (b*i)%100;
         k += (f+l)%100;
         f += (b-m-f*l*g+c-e-j+c+k+c)%100;
         m += (k*j)%100;
      }
      k -= (h*m-e-m+i-a)%100;
      m -= (n-c-j-c)%100;
   } while( ++DOcnt[15]%5 );
   n -= (j-f-h-j+e-l*k*j+h-k-g-a)%100;
   a -= (l+f-j)%100;
   a -= (m*d*l-l+l+e+j-m*g+d*j-m+c)%100;
   d  = (f-g-j+a*h*b*i*g*c*h-a*j+h+a)%100;
   a += (f-j*a-l+a-n+l-i-d-n-a)%100;
   m += (g+k-b+c-b*d)%100;
   a += (m+l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[30]%5 ; )
   {
      if( ++IFcnt[14]%10 )
      {
         for( ; ++FORcnt[29]%5 ; )
         {
            if( ++IFEcnt[19]%2 )
            {
               for( ; ++FORcnt[26]%5 ; )
               {
                  f += (k-j+e+b)%100;
                  m += (d-d+n-g-f-h*n+a-c*f+j-l+b+h)%100;
                  g += (b*i+b)%100;
                  i += (h+g*l*k-b-e-n*b-n)%100;
                  a -= (f+l)%100;
               }
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  n -= (i+b-f+d-h+f)%100;
               }
               break;

               case 2:
               {
                  j -= (d+b-j)%100;
                  a += (g+f*h*e-l-b+j+h*c+m+k-l+c)%100;
               }
               break;

               default:
               {
                  k -= (l+i)%100;
                  g -= (h-k+l+a*i+m+i*l)%100;
                  n -= (e-i-c+i+n)%100;
                  d += (d+k*d)%100;
                  j += (l-f-g+a+g*g)%100;
               }
               }

               if( ++IFcnt[13]%10 )
               {
                  c += (c+c*d*h+m-m)%100;
                  d += (b+m+d*l+c-g-m*g)%100;
                  d -= (b+c*m*l+g-j-c-l-f+c+c)%100;
                  a += (g*n-k+e-k)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  l -= (e+g*d-k-l-k-l+c+m+h)%100;
                  c += (g-i-b*m+g-i-n-h*k-c*l*j-e+n)%100;
                  n += (d-l+d-k-a)%100;
                  e -= (a-l*d*k*d+k-i-c+j+n*h+h)%100;
                  k -= (g-l-i-d-c+i-a+e-c+d-m+g)%100;
               }
               else
               {
                  c  = (i*e)%100;
                  c -= (f-h+a)%100;
                  g  = (g+c+a+g+h+m*f*h)%100;
                  a -= (j+i-e+k+m-m+g-k+h-d+m)%100;
                  d -= (e+n-l-k-m+j*e*a+f-n+l)%100;
                  c += (n-l*n-h-a-j+k)%100;
               }
               while( ++WHILEcnt[19]%5 )
               {
                  c -= (i-m)%100;
                  e -= (g-h-n+e+g+g*a-i+d-g-d)%100;
                  n -= (g-i+g-a+c+n*n-k-e)%100;
               }
               do
               {
                  j -= (h*h)%100;
                  h -= (c*d)%100;
                  j += (e+n)%100;
                  f += (l-n)%100;
                  a -= (k-d-h+h-i*e+j-a+n)%100;
               } while( ++DOcnt[19]%5 );
            }
            else
            {
               while( ++WHILEcnt[18]%5 )
               {
                  a += (d+g+j-h)%100;
                  c += (k-g)%100;
                  m += (c+l+k-m+g+f-k*a+c-j)%100;
                  c += (k*g*k*a-a-g+l-d)%100;
                  j -= (f+a-k-c+f)%100;
               }
               do
               {
                  i  = (d*k-g-c+g+i-h)%100;
                  h -= (j+k-d+b+k)%100;
                  e  = (h-e)%100;
                  e -= (f-b-d+j-c-c*h-f)%100;
               } while( ++DOcnt[18]%5 );
               b -= (g*g+g*f-h+j*m*g-c+c)%100;
            }
            for( ; ++FORcnt[28]%5 ; )
            {
               for( ; ++FORcnt[27]%5 ; )
               {
                  j  = (b*e-n+m-k-n+b*h+l+j+g*m*l-b)%100;
                  k += (i+c+e+h-n*l-k*g*b*d)%100;
                  g += (j-i-l+j-b)%100;
                  g -= (l-c*g*m*h-m+f+n)%100;
                  d -= (e-j+k*j-j+k+i+b+h+g)%100;
                  a += (m-k*k+e*g)%100;
               }
               f += (a-k+h)%100;
               m -= (l-l-i*f+h*m)%100;
               j -= (b-i)%100;
            }
            d += (h-i-j-m-n+e+m+e+n-i-n-a)%100;
            f -= (l-a)%100;
            c -= (k-k-l+i-c+c+k+b-m-l-k)%100;
         }
         h -= (i-j)%100;
         l += (d-a*d)%100;
         a -= (i-e*i+g-b+c-b+a-k+d-l)%100;
         g += (f*n-f+e*e+e)%100;
         i += (m*h-d+b-j+n+j+b*b+a-h+h*h+l)%100;
      }
      j += (g*k-i*k+i*i-e+i+n*h*a-g-j)%100;
      j += (d-h-b-a*l+k-k+d-f+g*j-f)%100;
      h += (e+d-d-c*e)%100;
   }
   m += (a-n+f)%100;
   a += (a-d-m-k+l-k+b+m-m*g)%100;
   j -= (g+k-b*l-m-b-f)%100;
   h += (b+n+b+b*c)%100;
   n -= (a+j*m)%100;
   n += (n-j*i-g*f+b+h-c+i*d)%100;
   n  = (k*k-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F10(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[22]%2 )
   {
      a += (b*h-b)%100;
      c  = (a+a)%100;
      b += (b+e+i-d+n-j-a-i-k)%100;
      c -= (e+e+i-l-i)%100;
   }
   else
   {
      while( ++WHILEcnt[22]%5 )
      {
         do
         {
            if( ++IFcnt[15]%10 )
            {
               b += (g+a*h+n+j+c+g)%100;
               for( ; ++FORcnt[31]%5 ; )
               {
                  a -= (d+c+f-f*k+f+n*a-e*f-k)%100;
                  l += (f-c-a-j)%100;
                  c -= (m-i+j)%100;
                  g += (h+e+c-m+m*k+m*l)%100;
                  h -= (h+n)%100;
               }
               
               switch( ++SWcnt[10]%3 )
               {

               case 1:
               {
                  b -= (f*k*d+f-a+b+k+i-b)%100;
                  e -= (g-l-b+b-k-i+d)%100;
                  g += (e+n+g+n+a-g-k*g*f+e)%100;
               }
               break;

               case 2:
               {
                  a  = (b*m+i+j+n-n-m+h-c-m-c-e*h)%100;
                  e += (i+f*m-c*a+n+c-h*e-k-j-l)%100;
                  a += (f*g-g*f+n+j*h)%100;
                  d  = (l-i+d-n-e+a-f+j)%100;
                  k -= (l-i)%100;
               }
               break;

               default:
               {
                  d -= (e-h-i)%100;
                  d += (n*g-n-k+n+d+j+d+b+d+k-d*n)%100;
                  n -= (c*j*c-n*j+j+g+b+l-g)%100;
                  b += (a+h)%100;
               }
               }

               if( ++IFEcnt[20]%2 )
               {
                  f -= (g+h-b*h+j-c-k*j*m+h+c+g+n)%100;
                  c -= (d-g+k-c+k)%100;
                  e += (f-n)%100;
                  a -= (k+i-c)%100;
                  c += (c-i+c)%100;
               }
               else
               {
                  n += (e+j*a-a+f+l*k+e+i+a+j)%100;
                  e -= (l-g+k-d)%100;
                  n -= (j+a)%100;
                  n -= (n+j-j+g+l*j)%100;
                  g += (a-c+m-b+j-b*d-k+d+n-l)%100;
                  i += (i*b+g+f+e+n+c+i)%100;
               }
               while( ++WHILEcnt[20]%5 )
               {
                  l -= (n*n-b-d*g-d)%100;
               }
               do
               {
                  h += (h*a-n-d+j+a+j)%100;
                  n -= (b-d+i+i*m-m+i-f-e+b)%100;
               } while( ++DOcnt[21]%5 );
            }
            for( ; ++FORcnt[33]%5 ; )
            {
               if( ++IFcnt[16]%10 )
               {
                  m -= (k-g-c)%100;
                  n -= (i*h-j-j)%100;
                  j -= (n*i-e*i-k+d)%100;
                  i -= (n*e-h-e-n-j-a+c+d*n)%100;
               }
               for( ; ++FORcnt[32]%5 ; )
               {
                  h += (j-j+g*k-h+j*f*c+b+l+k+c+j)%100;
                  l += (a*d+i-k+m+i+g+b-d*k*m+c-e-n)%100;
                  l  = (b-j+m+k-j-b*c+e+m+n)%100;
                  n -= (d*e*g+i*d+m+m-d-a+g+c-f-k-n)%100;
                  g += (e+g+g+d)%100;
                  l -= (d*f-c)%100;
               }
               if( ++IFEcnt[21]%2 )
               {
                  m += (m+f)%100;
                  c -= (i+a-i*e-b-d-g)%100;
                  g += (b+n+n+a+e+i+d*i-n)%100;
               }
               else
               {
                  l += (i-a-l*k+a+j+n+n-k)%100;
                  i += (k+i-l+e-h-a*g-g*n-d*f+g-i+n)%100;
                  n -= (f-g-c-e-a+i-h*k*h*e)%100;
                  m += (k-k*c+h+h-l*f-b*b-g)%100;
                  f -= (a-e+d+i-d-h-c+c*g)%100;
               }
               while( ++WHILEcnt[21]%5 )
               {
                  a += (m-b-l-a-j-j-a-b-n-m+g)%100;
                  d -= (f*j-g-i+k+j*d)%100;
                  h -= (c*a)%100;
                  c += (d-n*k+c-d-j*a*e*e-l+g)%100;
                  d -= (b-e*k*g-f)%100;
               }
               h += (e+i)%100;
            }
            n -= (g+d)%100;
            e += (c-k-k*c*i*a)%100;
         } while( ++DOcnt[20]%5 );
         m -= (f*m+f-m+c+m*i-n-l+l-k+l-f)%100;
         k -= (c-b-j+m)%100;
         m -= (g+k+n+g+n-e)%100;
         g -= (c+g+a*k+f-m-h)%100;
      }
      a -= (c-h)%100;
      e += (k*n-f*g+n+m+h*d-g+e*m+h+j)%100;
      k += (h+e)%100;
      e -= (n+h)%100;
   }
   k += (a-n)%100;
   c -= (k*d*f+b+n-h-d)%100;
   a -= (a+e-j)%100;
   k -= (a+k-j+n-n-e-l-f-m*n)%100;
   e  = (c-c)%100;
   l -= (c+f-j*m+l*a+k+c-g-i+a-b-g-l)%100;
   m -= (i-a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F11(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      m += (l*e+n*e+d-d+n-c-g+k*n)%100;
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
                  j += (i*a-e+a+e-b)%100;
                  d -= (a-e)%100;
                  m  = (l+f+h-m+c+g-a+d)%100;
                  g += (f-f-h-f*m+b)%100;
                  n += (k-g-a-i+n+f*g-g)%100;
               }
               else
               {
                  b -= (d+f)%100;
                  i -= (m+f+h-j+a*d-e+g-f+c-b-m-m+n)%100;
                  e  = (m+k+i-l-e-h+h-c-n-f-l+e-l+j)%100;
                  i += (n+l)%100;
                  e  = (c+i-n+f+c-k-b+g+n)%100;
                  k += (e-i-d+i-c-n-c+f)%100;
               }
               while( ++WHILEcnt[23]%5 )
               {
                  m -= (c*g+b)%100;
                  m -= (c+c-j+c+j-e)%100;
                  k -= (n-j+a*e)%100;
               }
               do
               {
                  n += (d+h-j-b+k)%100;
                  e += (d*k*h-a+d-i+e-d*g-g-b*i-j)%100;
                  g += (l+e*i-l+d+a*i-f+k-l*b)%100;
                  i -= (i+k+a-f+g+n+h)%100;
                  k -= (i+j)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  l += (a+h+e+f+i+n)%100;
                  k += (j+g-b-l-m+m*l+d+g-a+n+i)%100;
                  h += (d-l-e+h)%100;
                  e -= (b-j)%100;
               }
            }
            for( ; ++FORcnt[36]%5 ; )
            {
               if( ++IFEcnt[24]%2 )
               {
                  f -= (l+h)%100;
               }
               else
               {
                  l -= (n-g)%100;
                  l -= (d*b)%100;
                  k -= (e+j+a+b-k+i*c)%100;
                  n -= (f+i-l*g-f+h-m*h*a*j)%100;
                  n += (d-j+e+b+f-i+e)%100;
               }
               while( ++WHILEcnt[24]%5 )
               {
                  b += (m+f-m-c+b*d+c-a-b-d+e+d+b)%100;
                  b -= (f+i)%100;
               }
               do
               {
                  n -= (a-f*c+j)%100;
                  l += (i*m*j-n*i-j)%100;
                  k += (k-j+n-c-h*f+i-h)%100;
                  k -= (k+d-h*b+b-f*f-i)%100;
                  b -= (a*f-i-b-f*a-i+l-d-c+i)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[18]%10 )
               {
                  l  = (f+h+i-k+n-f-k)%100;
                  f += (k+j-e+g+c)%100;
                  j -= (f-l-j+g+j+e+m+b*i-e*n-a-j*a)%100;
                  f -= (j*k-k+m-e+m-e-h+b+c*a)%100;
               }
               g -= (a+n+m-l-f)%100;
               for( ; ++FORcnt[35]%5 ; )
               {
                  h -= (i+d+i+l*j+g)%100;
                  h -= (c+a+b-e-a*j)%100;
                  a += (l+g+g-n-m+n+f-h+h+n+c-k*m)%100;
                  b -= (f+d-a+n-a+g*b-e+c+j+f*f-f*c)%100;
                  c -= (m+b-g+e+g-h+g+l*f-h+k)%100;
                  m -= (j+f*n-k-a+a-m+b-a+f*b+e)%100;
               }
            }
            e  = (i+j+e)%100;
            m -= (g+g-a+d-k-f)%100;
            h -= (g+m*c-d+g)%100;
         }
         break;

         case 2:
         {
            m += (h-j-g-j*b-i+j)%100;
            h  = (f*a+m+g+k-l*f*j-f)%100;
            n += (c-n+c)%100;
            e -= (i+l+e+j*h-a)%100;
            h -= (h+g-n+e+g+g-j+g-i+e-d)%100;
         }
         break;

         default:
         {
            l += (d+e+n*c+k-d-j+l+l-a-e)%100;
            j -= (i-b-g-c-c-i-g*h-d-c-f-h+e)%100;
            j += (b+e*a-h+b-e-c-n)%100;
         }
         }

         g += (n-e+l-m+j+j*f+m*c-b+n)%100;
         h += (d+k+i-m+h*d-e+h)%100;
         a += (m-j)%100;
         m -= (g+j-g-j+i)%100;
      }
      m -= (a-g+a-g-k-d-d*c+d-c+n+d)%100;
      c -= (l+k+k*m*f+m-j-a-m-i+a+h+c)%100;
      e -= (j*h*f*n-n-b*a)%100;
      n += (k-h-h-h-f-c+f+f-i)%100;
   } while( ++DOcnt[22]%5 );
   j -= (l*h*h+n-j*i-f+d)%100;
   h += (g-d)%100;
   g += (g+h*m-i-e-n*g-n*b*l+c)%100;
   l += (l-d)%100;
   g  = (h-b+d)%100;
   g -= (c*j-g-c*g-e+c*j+g*n-k+d)%100;
   b -= (g-i+k*c-f-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[12]%3 )
   {

   case 1:
   {
      if( ++IFEcnt[26]%2 )
      {
         e += (f-a*d-b-l*j-c+d-m)%100;
         k += (m*a+n-c-k+b*k+a*b-b-d)%100;
         h -= (c-a-j*i)%100;
         b += (d+a-m)%100;
      }
      else
      {
         while( ++WHILEcnt[26]%5 )
         {
            do
            {
               for( ; ++FORcnt[38]%5 ; )
               {
                  k += (i*d-h-l+i-i-e)%100;
                  a -= (d+c-l*g*g+g-e-n+f)%100;
                  l -= (m+f-k+b+c*l-l-d-d*f+h-i-a)%100;
                  l -= (b+g)%100;
                  d -= (j+g)%100;
               }
               if( ++IFcnt[19]%10 )
               {
                  d -= (m-h-b-b+l-c+l+d+b-d+m*m)%100;
                  n -= (h-e*a*m+k)%100;
                  g  = (k-e)%100;
                  i -= (m*c-g+g-j+h+n*k-b)%100;
               }
               for( ; ++FORcnt[39]%5 ; )
               {
                  l += (g+g-m+n-m+j-n-d-h-n*e-i)%100;
                  k += (l+a+m-c+g+m-b-f+h-j-f)%100;
                  j += (f+n-h+e-d+l*g+b+b+g)%100;
                  k -= (i*c+n-n+j+c*n+k*e+l-b+g+l-a)%100;
                  c -= (m-m*e*g*d-n-e)%100;
                  b += (n-d-m)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  k += (n+i-f-f+n*d+g-e-m-l-f)%100;
                  d -= (b+l+b+j-k)%100;
                  g  = (n+g+e+h+a)%100;
               }
               else
               {
                  h -= (e*i+g+c)%100;
                  e -= (j*d)%100;
                  n -= (n-m-n+d-b+a+m)%100;
                  k -= (k-g-d+a+b*m*n+j-d-a-k)%100;
                  b -= (k-a-m+k)%100;
               }
               while( ++WHILEcnt[25]%5 )
               {
                  e += (c-n-f-m-g+j*k+g+k+l-m+l+c)%100;
                  j += (h+g)%100;
                  i -= (g-m-k-c-g-c-i+i-i)%100;
                  l  = (f-d+h*n+e+i-g-f-c+c*h+l-n+a)%100;
                  a += (h-i-e-a-d+a+l)%100;
               }
            } while( ++DOcnt[25]%5 );
            do
            {
               a -= (d-b+m*i-h+j*c+e+l-c+b-i)%100;
               for( ; ++FORcnt[40]%5 ; )
               {
                  m -= (n*a-n*a*h)%100;
                  n += (b-a+k*i*d*n*k*c-g*b*g-k)%100;
                  a -= (f+b-j*j*k+n+a+j)%100;
                  f -= (c-h-f-d+b*j+c*c+g+h-f+l)%100;
                  k += (a+j+f*l*d-g-m+j-k+c)%100;
                  n += (c+m)%100;
               }
               
               switch( ++SWcnt[13]%3 )
               {

               case 1:
               {
                  n += (c+h-i-g)%100;
                  j += (f-k+j+f-n+d+l+c*j)%100;
                  f += (d+n-b-n)%100;
                  k -= (l-f+a-l*i-n+j-a-g-g+b+l-k)%100;
                  a += (i*m+l+n*c-k+j-n-j-n+b+a)%100;
               }
               break;

               case 2:
               {
                  j -= (f*l-a*k-b+n-e+k*m)%100;
               }
               break;

               default:
               {
                  g -= (l+d-m*e-e-d+g)%100;
                  b -= (m*i-d*e*f*m*b+b)%100;
               }
               }

               if( ++IFcnt[20]%10 )
               {
                  m += (e-l-c+e+l-d+f+k-g-h-d*c-m-b)%100;
                  n -= (i+m)%100;
                  d  = (e+b)%100;
                  h += (j+j+k+l+h*m-d)%100;
                  c += (e-a-c+g+g+b-a)%100;
               }
            } while( ++DOcnt[26]%5 );
            a -= (d-f-m+b)%100;
            e -= (m-f-a+c+h-f-k+g-i-c-k+j-g+g)%100;
            h -= (m-i-a)%100;
            a += (l-l+b-d-f-f+m-h-e+g+e)%100;
         }
         j += (i-f-f-n*b+m-k-j+h-n*d)%100;
         f -= (j*h+j*i*k-k-f+n-k-m+b-h-g*a)%100;
         l += (m+h*e+k)%100;
      }
      l  = (f-c+h-b-a+g+a+i-b+e-g-g)%100;
      g -= (c-h-h-h-j+c*g*h-m-b)%100;
      n += (b-b+b-f-j)%100;
      l += (d+n-b-e-m)%100;
   }
   break;

   case 2:
   {
      k  = (l+d)%100;
      c += (k-c+g-h-h)%100;
      b += (n+c*c-l+l-f-e+n-g+n-m+j*c)%100;
      g  = (l*d+l+l+h*i-m*n*j-l+c-j)%100;
      b += (d+j+l-j+i-b-i*j*n-c+e-m*c)%100;
      m += (c+j-g-j+l-k-c+h-c+m+c*l)%100;
   }
   break;

   default:
   {
      j -= (c+a-n*d+n+j+f+b-d-l-b)%100;
      j -= (k+l-i-l-l-k-d)%100;
      n -= (g-n-n*k+n*e+l-c+g)%100;
      n -= (a+c+e-k+a+l+c-c-b)%100;
      d += (n-c-c*k+i+c-l-h+a+d-d)%100;
   }
   }

   f += (n+g-l*c+h)%100;
   a -= (j+k*i+l+d+g-k*f*g-a-l-a*k)%100;
   l -= (l+a+a*d+a+b-j+j+d)%100;
   h -= (e-f+f+j-j-d-l*i+n-m+i+h)%100;
   c += (l-c+i*l+e*c+c+k+e)%100;
   h -= (d-f+j-h+f-a)%100;
   f += (i-b*m-c-e*e+h+n-f-d*f+b-h-i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F13(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[28]%2 )
   {
      k -= (k-d-h*j)%100;
      n -= (g-c-i-h+f-f+j+h-j)%100;
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
                  j += (h-g+j-g-d-e+h-i+a-i+n+k+j-j)%100;
                  a -= (i+k*e-e-c-a+h-l+l+c+f)%100;
                  d += (a*c+e-d+b+n+e-h-e+a-e)%100;
                  g += (a+n+n*h+a-j*l*g*l-k-b*a+f)%100;
                  l  = (h-b)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  n += (l+b-m-f-g+h+m-c*g-h-i-m-g)%100;
                  c -= (b+a+l+g)%100;
                  l += (d+i-l-n+c)%100;
                  i -= (h+e-g)%100;
               }
               else
               {
                  c  = (d+m)%100;
                  a += (f+a+f)%100;
                  e += (l-l-g+c+g*m)%100;
                  f += (m-k*b-g-k-a+i)%100;
                  n -= (g*e+k-h*k+b+c-a*n*b+g+n*a+c)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  f -= (b*f-h+m+b-l+l+f-c+l+b-k)%100;
                  c  = (j-a+b)%100;
                  g += (i+h-i+i-h-l+e-c-a*j+k+n)%100;
                  f += (n-j-a+b+e)%100;
                  l += (g*b+m-a+f-b-m)%100;
                  k += (c*e+i-d+b*h-c*i-b)%100;
               }
               do
               {
                  d += (m-l+l+n+i-n+i-g+h+d+l)%100;
                  k -= (i+i-b*g)%100;
                  f -= (m+d*i*h*c)%100;
                  m -= (g+c*k-i-i+a+i*l+h-l+e-g-m)%100;
                  k += (g*l+c)%100;
               } while( ++DOcnt[28]%5 );
               if( ++IFcnt[21]%10 )
               {
                  a += (h*n-n*m-b+i+h-a-d+d-b*l)%100;
                  m += (b+a+n*n*i-c-g-c)%100;
                  m += (c+h+g*e-m-g-e)%100;
               }
               e += (h+g)%100;
            }
            for( ; ++FORcnt[43]%5 ; )
            {
               
               switch( ++SWcnt[14]%4 )
               {

               case 1:
               {
                  b += (e-c+l+d-c+g+l+b)%100;
                  d -= (g+g-c+m+n-l-l+m-g+c*i)%100;
                  a += (j-f+n*l)%100;
                  a += (c-b-e+k)%100;
               }
               break;

               case 2:
               {
                  c += (h-h+e-h*m+i*f*j*j*e+k)%100;
                  n -= (f-c-c+h-h-k-k+a)%100;
                  g -= (e-d)%100;
                  h  = (a*n+m+i+h-c+j-g-i*k+a-a-k+k)%100;
                  g -= (f+k-e-d+m+n)%100;
                  f += (l+k)%100;
               }
               break;

               case 3:
               {
                  m += (g-d+l*m+d*n-c+g-m-j*i*k+b)%100;
                  f -= (b-d)%100;
                  c -= (b-g+l+f-f+e+m+g)%100;
                  e -= (l+j-f-n-j)%100;
                  i += (l+n-n+g-l*b)%100;
               }
               break;

               default:
               {
                  g += (f+h+b-d*l+a)%100;
               }
               }

               l += (f-c+e)%100;
               m -= (c+l+n-i-m-b+c+g+g+n-e+n+i)%100;
               h -= (i-d+l-f)%100;
               i += (d+a+e-h-a-c*b-m+b*b)%100;
            }
            c += (i+d-j*l*l)%100;
            k  = (a+i-b-l*g+i-d+l+h-e+j+h-c)%100;
         } while( ++DOcnt[27]%5 );
         h -= (f-g+a+g+n+d-f-f-k*d*a-j+g-m)%100;
         n += (j*g+f-f*d+g*c+a+m+f*e*a*g)%100;
         e -= (k+f*b+g-m*m-f-l+l-k-d-c*a)%100;
         f -= (n+c-a)%100;
      }
      d -= (g+d+a*b+n+d*l*l+b*j-f*k+j*l)%100;
      m -= (i-f+d+n+c+b-h+m*b+m+b+l)%100;
   }
   i += (m+e+e*h)%100;
   b -= (i-j-e*a-j-f-b+n*m-g-e+b+k-f)%100;
   f -= (j-h-e+i+a*i*a*j+f-g+l+b)%100;
   c -= (j-c+m*f*n+m+k+j)%100;
   f += (k+i+c-d*a+h+g*c)%100;
   j -= (n*b*d+b-m-l-d-m-a*a-f-g*d-m)%100;
   e += (h*c+j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[31]%2 )
   {
      m += (j+b+d-c-l*j-e*e*c-l-k)%100;
      i += (j+i+e-a+d+a-a-l-f*l)%100;
      g -= (m+c-g)%100;
      f -= (f-l+l*i-n+d-g)%100;
      c  = (e+e*h-e+c+m*h+k+b)%100;
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
                  i -= (l+l*h-g+k*g+g+h*g*a+h)%100;
                  g -= (g+d+h-b+e*b+h+c-l+h*h)%100;
                  g += (f+a*c-e)%100;
               }
               for( ; ++FORcnt[44]%5 ; )
               {
                  g -= (e-e+e*e*k+b)%100;
                  b -= (k+l+m+b*f+i*g*h+i)%100;
                  a -= (g-m-k+h*n)%100;
                  g += (h*m)%100;
                  h += (m+a-k+d+k+c*f)%100;
               }
               if( ++IFEcnt[29]%2 )
               {
                  j -= (l+i+d*l+d+a-e-e*b*e-c-l)%100;
                  j -= (e+a-b+n-h+l*f+n+c-h*f*g-c)%100;
                  d += (f+m+f-n-m+f+c+m+a+e+a-l-a-b)%100;
                  j -= (l*k)%100;
                  l += (g*f-n+d*h-m-c+k+n+m*k*b+l+l)%100;
                  a -= (a-d)%100;
               }
               else
               {
                  g -= (h*d*f+m+m*d+l+l-l-f-d+d*h+f)%100;
                  c -= (j*j+h-m*n+m+i-f)%100;
                  m  = (n-k)%100;
                  e += (n*e-i+g*e+j+d+d-d+g+h-a)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  m += (l+l)%100;
                  g += (b-j-h+g*m)%100;
                  m -= (g-g-h*n+b+j+n-j+f+h-n*k+e)%100;
                  e -= (e+i-i-e-c)%100;
                  f += (h+i)%100;
               }
               do
               {
                  g -= (m-h*d-a*c+n+h+c-b+d-l*n-k*e)%100;
                  m += (d+e+b-c+c*a+f)%100;
                  g -= (k-a+b+l+i-h)%100;
                  b += (h+b-e+m*m)%100;
                  j -= (n-c-f*h)%100;
               } while( ++DOcnt[30]%5 );
            }
            g -= (m*a)%100;
            for( ; ++FORcnt[46]%5 ; )
            {
               
               switch( ++SWcnt[15]%3 )
               {

               case 1:
               {
                  l -= (m-h)%100;
                  n  = (i-g*k)%100;
                  a -= (l*c-d-f+f+c)%100;
                  i -= (c+h-f-l-m-l-b*h+m*k)%100;
                  i -= (c*i-j-i-k-g*n-h-d*k+a)%100;
                  i += (l-j)%100;
               }
               break;

               case 2:
               {
                  j -= (j-b+l+g)%100;
                  a += (k-h-e-g+i*n+l-j)%100;
                  e -= (f*e*a-h+f+b*c*l+k-m*m-h)%100;
                  n  = (c*l-m-i-d+j+d)%100;
                  i += (n+e)%100;
               }
               break;

               default:
               {
                  m += (l-j-h-c)%100;
                  j -= (k-b-j*f*c+c-i+f-j)%100;
                  j -= (a+f+h*g+n+e+e)%100;
               }
               }

               if( ++IFcnt[23]%10 )
               {
                  a += (d+a-j-d*h+j+e-g+i-k-f*f-l+b)%100;
                  e += (j*h)%100;
                  b += (i+m+m-b-a*e)%100;
                  a  = (h+n*b*n+n-m-n-d+n-a-c+i)%100;
                  i -= (c+i)%100;
               }
               if( ++IFEcnt[30]%2 )
               {
                  l  = (l+l)%100;
                  h  = (j-b-n+h*n+e-c+g+j-c+f-b+f)%100;
                  n -= (m-e)%100;
                  k -= (d+g+i-b-a*b-l-l)%100;
                  d -= (b*a-e+j-d*d+n+h+d-g+c-k-a)%100;
                  h += (g*f-i*b+j-f*n-m+f-e+f+m-f-m)%100;
               }
               else
               {
                  f -= (a-d*m)%100;
                  f += (j-m-l+g+i*d-a+d*m)%100;
                  e += (e-l-f+n-j+h-j)%100;
                  l += (i+m+m-c+m+h-c+f)%100;
               }
               h += (n+f-n)%100;
            }
            l -= (j-b+f*f-h+g+g)%100;
            c -= (j-b*f+c-b*d*b-m+m*n+n)%100;
            c += (h*b-k+k)%100;
         } while( ++DOcnt[29]%5 );
         c -= (g-b+b-k-j-m+n+f-c)%100;
         k -= (g-g-g)%100;
         l += (g+i+i-d+l+g+g+c+k-h+i)%100;
      }
      i -= (g*h)%100;
      g += (f-a-h+b-g*l-b-d+g-b*n-b)%100;
      h += (e*d-c*n+b+e+k-m)%100;
      k += (h+j-a+c+b*e+e-i)%100;
   }
   k  = (l*c-i*h-b)%100;
   g += (c-k)%100;
   j += (g+a-c*i+m-k-h+e+l-g)%100;
   d += (j*f*h-c-c-b*b-n-k-f)%100;
   a -= (g+i-n*g-i-g-m-n*e+m)%100;
   m += (g+g*l+m*d+g+n+h-l)%100;
   c -= (h+i+c+c)%100;
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
                  n += (k-i+d+l+g-d-n*g-n)%100;
                  h += (f-b+d+f-k)%100;
                  e += (e+e+g+g+e-d+e-a+m-d-d*l+a+e)%100;
                  j += (d*d-i)%100;
                  h -= (k-f-m-j*j*d-g)%100;
               }
               else
               {
                  k += (d-c-m*h*d+k*l-i-j-n+j-e+c+j)%100;
                  a -= (c+i+a+k+c)%100;
                  g -= (h-e+k)%100;
                  f += (j*n+f+d+a+l)%100;
                  n += (d+n-c)%100;
                  n -= (n-a+f*h-e*f)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  k -= (n-i-c-h)%100;
                  l -= (g+h-l+d+e-a*b*g)%100;
                  e += (l+n+c+d-j*n)%100;
               }
               do
               {
                  i -= (n*m-b-e+n*e+c*l-c+g+a*i)%100;
                  h -= (i-j*j+d+c+l*e*j-b+g+j*f)%100;
                  l -= (n-l*h+l*c+c-f)%100;
                  j += (c+d-g+m+m)%100;
                  g -= (i-e-i-h+l+d+m)%100;
               } while( ++DOcnt[32]%5 );
               if( ++IFcnt[24]%10 )
               {
                  h -= (g-b+h*b+m+n-i-k)%100;
                  b -= (l-n-k)%100;
                  f  = (l+g-g-l+a-l)%100;
                  l += (l-g-m*m*i*g-l+n-f*m)%100;
               }
            }
            g += (l-c*h*a)%100;
            for( ; ++FORcnt[48]%5 ; )
            {
               
               switch( ++SWcnt[16]%4 )
               {

               case 1:
               {
                  c += (j*d-a+h+d)%100;
                  n -= (m+h+n-c+d+k+c-j*k)%100;
                  n += (a+f+b-d-m+l+n+i*g*c)%100;
                  i += (f+a*n+g*l-k-c+b-m+c+g)%100;
                  n += (i-n+a+i-j+b*k+e-f-b*l)%100;
               }
               break;

               case 2:
               {
                  n -= (c-a-j*b-b)%100;
                  b -= (k+k)%100;
                  e += (c*c+d+n+j-d+f+h-j+j)%100;
                  h += (f-k-l-n)%100;
                  c += (e-j)%100;
               }
               break;

               case 3:
               {
                  j -= (c+j-h+b-k-b-f+e-e)%100;
                  g -= (b+f+e+j+g)%100;
                  k -= (d+l-c+c)%100;
                  f += (b-f-e+n*a+g-i)%100;
               }
               break;

               default:
               {
                  a  = (g*k-i+m-h-n*a*n*b-c-d+l-i)%100;
                  e -= (n*j+i-m-d)%100;
                  f -= (f*j+k-i-n+c-a*b-a-h+d+e-e)%100;
                  i += (e+l-j+k+b-n+k-g+n+j+m-h)%100;
                  k += (l+m-j*a*n-e+g-k+n+i-g-l-m)%100;
                  k -= (m-g*i-f+m)%100;
               }
               }

               if( ++IFEcnt[33]%2 )
               {
                  n += (h+a*d*f+g-k+n-g-f)%100;
                  l -= (g-b+k+n+a+f-a)%100;
                  d += (c-e-h)%100;
               }
               else
               {
                  c += (a*c+h*d+i*j-h*b*h+e-m+d)%100;
                  k -= (h+a+e-j+l*h+e+j-c+n)%100;
                  i -= (m+i-n-c+n+l)%100;
                  b -= (c+a+n)%100;
                  i  = (b+k)%100;
               }
               h  = (d+f)%100;
               i += (g*i+f-b*e*f+k-h-b+c+l-i+l+h)%100;
               a += (d+a-e-c*g-h-g+l+f)%100;
               i -= (f+j+e*c+d+d+e+h+k-e-g)%100;
            }
            h += (e-g-l-h-h-j-j+g*a+l*n+j-l-k)%100;
            g += (c-f*j*g-l+b+k-f+d)%100;
         }
         c -= (l-d-g-n+f-a-m-e+m+n-h)%100;
      } while( ++DOcnt[31]%5 );
   }
   i -= (l-m*n*b*n+h*l-h-b-d-g)%100;
   d += (m-c+d+e+f*l+a+l-b-a)%100;
   c += (e-d-f+h+c-g+f+a)%100;
   k -= (a+d+c+i*a+g)%100;
   f -= (m-m*m*g*j+n+f*n-i)%100;
   a += (e-j+m)%100;
   h  = (e+e+g-b-l+i)%100;
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
         for( ; ++FORcnt[52]%5 ; )
         {
            if( ++IFcnt[25]%10 )
            {
               for( ; ++FORcnt[50]%5 ; )
               {
                  n -= (h*h-e-m*b+l+m)%100;
               }
               if( ++IFEcnt[34]%2 )
               {
                  k += (a+g*f+c-g+j)%100;
                  d += (a-j)%100;
                  l += (a*m*e-i*l)%100;
                  i -= (i-a)%100;
                  m += (i+n-i)%100;
               }
               else
               {
                  f += (m-n)%100;
                  b += (g*i+b-f+g-d)%100;
               }
               while( ++WHILEcnt[33]%5 )
               {
                  k -= (d+j+b+g-j+f-j)%100;
                  g -= (f+e*g-a)%100;
                  c -= (n+d+i-i+c-g-j+j-c)%100;
                  k += (h-g-m+l*h+m+k)%100;
               }
               do
               {
                  l  = (h-m)%100;
                  m -= (a-g+l-g+g)%100;
                  a -= (j+g)%100;
                  e -= (a*d*f+g+g)%100;
                  e += (i-n-j-c-d-j-l-d-e*b+i*d+a)%100;
                  h += (j+b-g-e+c+k-b+b)%100;
               } while( ++DOcnt[34]%5 );
               a += (a+k+d*i-e-b*k)%100;
            }
            for( ; ++FORcnt[51]%5 ; )
            {
               
               switch( ++SWcnt[17]%3 )
               {

               case 1:
               {
                  h += (l-a-d+c+d-j+e+k)%100;
                  e += (d-b-g-d+g-a-f-j-e*h-h+f)%100;
                  d -= (g+n-j)%100;
               }
               break;

               case 2:
               {
                  b -= (j*c+n-l*a-m)%100;
                  a += (l+g)%100;
                  c -= (f+l-e+c*m)%100;
                  c += (b-h)%100;
                  m -= (i*m)%100;
               }
               break;

               default:
               {
                  i -= (h-j-j-f-l+e+f*g-b+n+b)%100;
                  m -= (g+k-b+l+l-i+j+e)%100;
                  l -= (n-d)%100;
                  l -= (e*m)%100;
               }
               }

               if( ++IFcnt[26]%10 )
               {
                  h  = (g*h*e)%100;
                  e -= (g+c-f+a)%100;
                  a += (h*m+h+n-d-e-i)%100;
                  k += (k*g-f+b-d+c+d+a-e)%100;
                  m += (g+k+f*a-b-m-n+e+n)%100;
                  n -= (b-g+g*f-g-h-m-d)%100;
               }
               if( ++IFEcnt[35]%2 )
               {
                  c -= (d*f-h-a-i-h*f-f*n+l+e+l+e*i)%100;
                  j += (k-b+h-a+l)%100;
                  j -= (c+l-m+g+k-a+e-c)%100;
                  d += (g+n+a*i)%100;
                  j -= (l+c+h+h*b*n)%100;
               }
               else
               {
                  g += (j-h-n-g-c)%100;
                  a += (l+b+a+m-l*c+n-a-n+n+a-c-d+i)%100;
                  m += (a+d+k+j+e-n+m*j-d-l+c)%100;
                  l -= (m-j)%100;
                  l += (c+h-k-l*g-k+j*d*l-n+k+l*j)%100;
               }
               while( ++WHILEcnt[34]%5 )
               {
                  e -= (e+b)%100;
                  i -= (b*g+k+c+g+a-f+m+k*l+l-h-n-e)%100;
                  i += (b+j*b*j-k*n)%100;
                  f += (m*j+f-b)%100;
               }
               do
               {
                  n -= (l+j*c-j*c-b*h-g-l+a+h+g-b)%100;
                  n += (l+g)%100;
                  c -= (m-n)%100;
                  a -= (m-m-e-d*h-k+g-e-e+f)%100;
                  c += (d*d)%100;
                  f  = (a*a-b+e+f-h-i)%100;
               } while( ++DOcnt[35]%5 );
            }
            d += (e-j-e+k+c+n-n-h+c-d+m)%100;
            d += (m-g*b+i-c)%100;
            e -= (a+d)%100;
            l  = (j*n*c-n-d-j+a-i+h-j*i)%100;
         }
         f -= (e-n-n*g-d+g+i*b-m-g*g-d+a)%100;
         c -= (f-h-g*b-e-j-g+j*e)%100;
         n -= (l-n)%100;
      } while( ++DOcnt[33]%5 );
      n -= (b-e*i)%100;
      g -= (d+f+l+b+e-a+b+i-j-n-l+h-g)%100;
      f -= (h-d-h*a-e*d+m-a-j-m*k-g+c)%100;
      f -= (g-j-f*i+n+i-i)%100;
   }
   i -= (b-j-l+i+e+k-d+k)%100;
   j -= (d-l+l+l+c*b-f-a*b+j-j-k-e)%100;
   c -= (d-n+d-b-n)%100;
   a -= (e*m-m+i+m-i-n*j-k+l*k+c)%100;
   i += (j-b)%100;
   l += (b-j)%100;
   l += (j*k*l-e-f-k*b-n-f+b*j+d+j)%100;
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
            j -= (i*l+k+m+l*l-c-d-i*h+c+m)%100;
            g += (d-i+m*b-d+l-i-m+a+g+j-l)%100;
            e -= (g+a+c+j*c+k)%100;
            f += (h-h+k+c+b-l-j-n-a-h*j-f+h)%100;
            d += (l+l-a+i-i+a)%100;
         }
         else
         {
            while( ++WHILEcnt[36]%5 )
            {
               do
               {
                  b += (l-i+m-b+j+e-h+j*c*j)%100;
                  j -= (f+d-h-j-k+a-d-l+i+e)%100;
                  n += (g+m-a+c+e+a+n)%100;
                  n -= (k-e+d-e+i+i-e+c+k+j-b-l-m-f)%100;
                  g += (b-j+g)%100;
                  d += (d*l-l-g)%100;
               } while( ++DOcnt[36]%5 );
               if( ++IFcnt[27]%10 )
               {
                  c += (g-d)%100;
                  i += (l+a-d-b+b+f-b)%100;
                  a -= (e-b+j+j)%100;
                  g += (l+c)%100;
                  m += (i+h-c)%100;
               }
               c += (c*h)%100;
               for( ; ++FORcnt[53]%5 ; )
               {
                  a  = (i-c*n+e-i*b+k*b+g-a)%100;
               }
            }
            
            switch( ++SWcnt[18]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[36]%2 )
               {
                  i += (e+f)%100;
                  g += (a+l)%100;
                  i += (i+e+k)%100;
                  k -= (h-e*k+j+g+k)%100;
               }
               else
               {
                  b += (d+b)%100;
                  d += (c*j+n-d*l-c*h+l*g+i+g-j-l+d)%100;
                  k -= (a+i*c+m-b+d)%100;
                  i += (n-i*h)%100;
                  m += (b-h*h-g+m+g*f*m+l-d+h+g)%100;
               }
               while( ++WHILEcnt[37]%5 )
               {
                  j -= (b-l*a-g*d-k+f-k+d)%100;
                  m += (n-e+f-h-g-c-n+h-n*g*n+k+g)%100;
                  d -= (m-m-m*i-h+i-e-c+d)%100;
                  m += (c-i+n+j-m+k-a-e-m*k+h+k)%100;
                  n  = (f+c-e+j+h*j)%100;
                  i -= (d-d+l-g)%100;
               }
            }
            break;

            case 2:
            {
               do
               {
                  c += (e+i+c*b-a*m)%100;
                  i -= (h-m-i*i-j+j-l-f+d*j-a+m+i-e)%100;
                  c += (m+l-d+c-g-h-f*k+n-g*j+b)%100;
               } while( ++DOcnt[37]%5 );
               for( ; ++FORcnt[54]%5 ; )
               {
                  b -= (e-k-g+k+j+c-l-e)%100;
                  n -= (d-g)%100;
                  f -= (l+d*f-a-c)%100;
                  m -= (g*b-c)%100;
                  m -= (i-f+j+i-b+d*a*h-d)%100;
               }
               if( ++IFcnt[28]%10 )
               {
                  e -= (a*k+c-k*c-f-m*k+m*h)%100;
                  l -= (m-k+h+l-b+c+g-i-g-c-l-m-n)%100;
                  n -= (c+i*k-f)%100;
                  n += (e-l*a)%100;
               }
               for( ; ++FORcnt[55]%5 ; )
               {
                  b += (m*c)%100;
                  k += (l-e)%100;
                  c += (f-l+l+a+a*m+i-h+e-k+c+a)%100;
                  c -= (c+n-n-l+d*e+b-e+k+k)%100;
                  f -= (c-n-c+l-h*h-c*c-n+k*k)%100;
                  a += (d-d)%100;
               }
               if( ++IFEcnt[37]%2 )
               {
                  l -= (j-d*d-a)%100;
                  i -= (c*d-b+i-f+d-a)%100;
                  b -= (l+d+f+k-g+i-f+e+f*b)%100;
                  l += (j-m-f+b-i-c)%100;
                  l -= (h-m)%100;
               }
               else
               {
                  h -= (k+b+d*c*f*d+i*d+k)%100;
                  k += (l-n*m-i+b-m+c+k)%100;
                  d -= (f+c+i*b-a*g*g-f-f+m+h*k*g)%100;
                  d -= (g+a-h+l+l+d+n-n+i-c+m-m+a-d)%100;
                  g += (d-b+n+h+f*m-h-n)%100;
               }
            }
            break;

            case 3:
            {
               j -= (i*g+a*h+b*b-a*d-f)%100;
               g -= (l+i+c+j-d+h-l+e+e-i+n-a+i)%100;
               g -= (i-k-h+j-a)%100;
               f += (d+i)%100;
            }
            break;

            default:
            {
               a += (k+l-i*f+m-n+f*j-b-f-h*m*c+d)%100;
               g -= (f-h*j+d-k*i*j-d)%100;
               m += (d+f*g*g-k-a*e-m+k)%100;
               h -= (d*g-c+f)%100;
               c -= (g-n-h-m-n-g-f)%100;
               n -= (b+e-k*e)%100;
            }
            }

            k -= (d+e-i*b-f+k*h+d)%100;
            d -= (d*g-i+a-d*j-n-m-n+n)%100;
            c += (b*l-e+c*k-n+h-e-d*m)%100;
         }
         f += (i-i-l+c+i+l*n-i+n-l*f-h-a)%100;
         k -= (g+k*d*d*g+g+l-f-i+n+e-l)%100;
      }
      j -= (e+m+b-d-h+i-n+g-m+g+l)%100;
      k -= (j+a-f-f+f-h-i-i-d+a)%100;
      m -= (h-i-m+m-a*m*l)%100;
      e -= (g+h+b-j-g-m-m-d-d+e-a+k-g-g)%100;
   }
   h += (l-b-e*n+n+a*l)%100;
   g -= (n+k+j*k-d)%100;
   n += (c+g+c+h*m+k-m+c*f+a*d*h-j+g)%100;
   m -= (k+k-n+c-c-k-d-l+m+a+f+a-i)%100;
   b += (l+c-e*h-k-b+c+e+c-h+j)%100;
   e += (j-c+f+d*e*d-n+k*f)%100;
   g -= (f-m+e+i-l+l+f-d-m+i-j*m-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F18(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[39]%5 )
   {
      do
      {
         h -= (h-f*i+i+k)%100;
         for( ; ++FORcnt[60]%5 ; )
         {
            
            switch( ++SWcnt[19]%3 )
            {

            case 1:
            {
               if( ++IFcnt[29]%10 )
               {
                  h -= (f*g+g*c*m*n*k+m-d*l+c-m*n*d)%100;
                  f -= (l*c)%100;
                  g += (f+h+h*f-c+i*b*d-b)%100;
                  h -= (j-b)%100;
                  h -= (i-l-d)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  m += (f-e*n+a-k+i+j-d-d+n-d-e)%100;
                  f += (c-j+d*e+h+l+f+g*c*k*j+a-i-h)%100;
               }
               else
               {
                  n -= (a-g-n+d*b+d+d+k)%100;
               }
               while( ++WHILEcnt[38]%5 )
               {
                  d += (m+k-l)%100;
                  g += (k*a-n*m+d-f-a+d)%100;
                  d  = (b+f*k+e+d+m*e)%100;
                  k += (g-b+k+a-m-f*k*n)%100;
                  d -= (d+m+a+c)%100;
               }
               do
               {
                  i += (k-i-k-i-m+h+h+m-a+j-e-l+n)%100;
                  j -= (i-b-i-a+l-a-l+l-d-a-n+c)%100;
                  e -= (i+m-h-f+m)%100;
                  m += (c+d-j-e+i)%100;
               } while( ++DOcnt[39]%5 );
               for( ; ++FORcnt[58]%5 ; )
               {
                  g -= (e+g-e*e-e*b*h-i+b)%100;
                  l += (j*h-e-k*j+m-g*m-e+b-j)%100;
                  m -= (k+b-e+l+m-e+f*g*m-n-e-d)%100;
                  n += (g-n-g+i-c*k*l+b)%100;
                  j -= (f*d+e*a*c+k+l-e*k-d+l-f)%100;
                  a += (g+d+f)%100;
               }
               for( ; ++FORcnt[59]%5 ; )
               {
                  j += (k-l-e-a+l)%100;
                  c -= (j-h-n+m)%100;
                  l  = (l+i+k)%100;
                  c -= (c-f-d*i*i-f-m-d-a+c)%100;
                  d += (i-a+j-b)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[40]%2 )
               {
                  g -= (h+f*k-f-j)%100;
                  f -= (a-k-m+g*c-l)%100;
                  i += (b-h+m-g-l*i+a+i+b-g)%100;
                  i += (b-g)%100;
               }
               else
               {
                  e += (n+m-m-n*i+l+i+g+i)%100;
                  n += (b-m-k+m+a+c-n+a*g+c-a-j+g)%100;
                  n  = (h+k*e-k+d+a)%100;
                  n -= (l+g+l*d+l*d+e-k*b+l-n)%100;
                  n += (b*c)%100;
               }
               e  = (j+j+f)%100;
               m -= (k-n-c-j*n*e-b-f+j-h-b)%100;
            }
            break;

            default:
            {
               j += (c*a-a*e)%100;
               e += (m+j-f+k-m*k+b)%100;
               c += (a+b+n-b*a*j*m*g)%100;
               d -= (e+m-g)%100;
               h -= (f-i+b-i-h-l+g-a+c+a+b)%100;
               b += (d*i-k-b-e+g-h+n-f*i)%100;
            }
            }

            b -= (h+h*l-k)%100;
            g -= (m-b-l*d-e*l+l-e+n*b-c+n-h)%100;
            f -= (h-j)%100;
         }
         i += (b-b+i*g*i)%100;
         l -= (f*k)%100;
         d += (c+d)%100;
      } while( ++DOcnt[38]%5 );
      l += (m-m)%100;
      k += (a-k-e+m-k+b)%100;
   }
   f += (e+m-j+e+b-g+j*n)%100;
   m -= (d*g+i-i+g+c-c*h-a-g-c*n-g)%100;
   k += (k+f+e+b-l+h)%100;
   l += (g+c-h-d)%100;
   a  = (d+d+j+d*b*c-f+c-k-l-k*a+h)%100;
   a += (n-i-e-b*a*l-i)%100;
   a += (j*d+m+j+n+i-l+i+h+g+e*e-b)%100;
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
            c -= (m-f)%100;
            for( ; ++FORcnt[62]%5 ; )
            {
               
               switch( ++SWcnt[20]%4 )
               {

               case 1:
               {
                  g += (a+j-g-g*g-b*m-a-c)%100;
                  d  = (m-b*j+a+i-j*i*h-k)%100;
                  f -= (d-h*e+i)%100;
                  m += (d*d-e-l+a+e-l+d)%100;
                  a += (n+a*i-f-n)%100;
               }
               break;

               case 2:
               {
                  j += (m*l-i+h-g+a+h+a-c+l+l+d*n-m)%100;
                  h  = (h-h+k)%100;
                  f  = (m-f-f-h*e+i*g+f*m)%100;
               }
               break;

               case 3:
               {
                  h += (j-n+j+i*d-g-m+j+b-d-j-d+c)%100;
                  i += (b-h-e)%100;
                  g -= (k+l-d+b+a-f)%100;
                  k -= (l+k+k*i*f*n+n*g)%100;
                  m += (g-c)%100;
               }
               break;

               default:
               {
                  h -= (c+m-l+a+h*d-i-n+j*f*l)%100;
                  b -= (h+b)%100;
                  f += (i*d-d)%100;
                  k += (k-g*i*f-m+j+e)%100;
               }
               }

               if( ++IFEcnt[41]%2 )
               {
                  b += (d-m)%100;
                  b  = (i-n-k*d-h-g)%100;
                  k -= (g+d-k+j-m-l-d+n-g*e+m)%100;
                  b += (m-g*l+f)%100;
                  i -= (i+d*j-b*g-n*k-n+a-k)%100;
               }
               else
               {
                  e += (b-e+d+i-g*d-h)%100;
                  k -= (a+e-l-b+c)%100;
                  c += (n*l+h-j*l+m+i)%100;
                  d += (f*e+l-n)%100;
                  e += (k*n*c+i*e-d+i-c-k+k+d-g)%100;
                  e -= (f+c)%100;
               }
               while( ++WHILEcnt[40]%5 )
               {
                  e += (h-d*l-i-e*c-i)%100;
               }
               do
               {
                  m -= (n+g-n+b-c+l-j)%100;
                  e  = (c*e-g-c+b-n+e-e*j+j+c-k-e)%100;
               } while( ++DOcnt[41]%5 );
               for( ; ++FORcnt[61]%5 ; )
               {
                  f += (m+i*f)%100;
                  g -= (l+m-l*f+m*n-k+k-g*e-i)%100;
                  f -= (m-l+j-f+l)%100;
                  k -= (n-m*a-m-d-c+h-k*l+j-k+a+a+l)%100;
                  n += (b*c+d+j-i+j)%100;
               }
               if( ++IFcnt[30]%10 )
               {
                  i  = (a*d-b+j-k-e-n+m-i-f+n-i)%100;
                  h += (f+l*i-f-c*e+j*g)%100;
                  k -= (b-k+d-j-n)%100;
                  h += (j-i)%100;
               }
            }
            for( ; ++FORcnt[63]%5 ; )
            {
               if( ++IFEcnt[42]%2 )
               {
                  a -= (a+l)%100;
                  h -= (e-i-d-j*d-j+i*k*j-a-f-a+g)%100;
                  j += (f-g)%100;
               }
               else
               {
                  l += (l+l+m-h+c+f)%100;
                  a -= (j-l)%100;
                  m -= (k+j-g-g+m-f-j+l)%100;
                  i += (n+b+n*n-a-k+f-f+i-i+f+m+n-n)%100;
                  f += (j-b+g+l-m+i-a-g-e+m*h)%100;
               }
               a += (g+h-f+i-d)%100;
               l -= (i-g-h+a)%100;
               e -= (f+f*g-g-g+i)%100;
               i += (h+b+g-d+a)%100;
               d += (l+j-j+n*m-m-d)%100;
            }
            a -= (k-c*f*e+i-j-c+i*d-c-n-f-d)%100;
         }
         k += (g*k-j*e-n*g+l+b-k+g-k)%100;
         m += (j+k)%100;
         k -= (m+k+m+m-e+g+f+j)%100;
         e -= (n*n+h+d-h-g+n-m+f+c-c-c)%100;
      } while( ++DOcnt[40]%5 );
      i += (a*k+b+b-f-e)%100;
      d += (e+h-f*h+m-j-k+h+a)%100;
      n += (e+h*h-e*n)%100;
      l -= (k+c+d+d+b-l*k+f+i)%100;
   }
   a -= (g*g+i+h+n-l)%100;
   f -= (d*k)%100;
   l += (k-e+j*h+k-d-j*h*f+a*f)%100;
   i -= (k*a-g)%100;
   j += (h+c-f+f-a+e-i+m-k*a-l-e)%100;
   e -= (a*c-f*f-a*m*m*f+d*f+a)%100;
   b -= (l*n+l-j+d+c+n+l+g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<48; I++) IFcnt[I]   =0;
   for(I=0; I<64; I++) IFEcnt[I]  =0;
   for(I=0; I<32; I++) SWcnt[I]   =0;
   for(I=0; I<64; I++) WHILEcnt[I]=0;
   for(I=0; I<64; I++) DOcnt[I]   =0;
   for(I=0; I<96; I++) FORcnt[I]  =0;
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

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      while( ++WHILEcnt[42]%5 )
      {
         do
         {
            i += (k+k*g-a-k+d-n+f*i*m)%100;
            for( ; ++FORcnt[64]%5 ; )
            {
               
               switch( ++SWcnt[21]%3 )
               {

               case 1:
               {
                  h += (h-k-m-c-a-c+b)%100;
                  i -= (a*l+k+b-m+l)%100;
                  m -= (j-c+l)%100;
                  j -= (k-b)%100;
                  m += (g+e-l+c*m-g-i*b)%100;
               }
               break;

               case 2:
               {
                  d  = (a-j-j*l-e-g+b+h-c*m-k+d+c-c)%100;
                  h += (i*a*k)%100;
                  i -= (c-c*g-b*h+l-g)%100;
                  j  = (b-d-l*l-d+b-k)%100;
                  d -= (e*f*i-c*m+a)%100;
               }
               break;

               default:
               {
                  g -= (j-j+d+k+j+h)%100;
                  l += (m+b-m+b)%100;
                  h -= (d-g+j+i-a+n-n*f)%100;
                  d -= (b*h)%100;
               }
               }

               if( ++IFcnt[32]%10 )
               {
                  h += (f+g-h*n-j+l-g*n+l*f-h+k+j-f)%100;
                  b -= (j*g+e)%100;
                  e += (f*g+n+n+i+f+m+j-g*b*j*b*m+n)%100;
                  h += (h*c+j-j-m*k)%100;
                  k += (i-j+d+f*l-l-n+j+i-a-l*b*g*b)%100;
                  a  = (f+n-e-b-m-m+i-e-k+g)%100;
               }
               f -= (b*f-a)%100;
               i -= (m+n+i-f+n-m+j*e*h-l+f-a-d*i)%100;
               b  = (f-c+b*n)%100;
               e += (h+b*k-g-e+b+a)%100;
            }
            h -= (d-f-j+f+j+a+m-b*c+c-j*a)%100;
            d -= (n-k-n+i*j-l)%100;
         } while( ++DOcnt[42]%5 );
         c -= (j-h-c*c*c+g)%100;
         g += (e+d+m-i+e+m-a+l+n*n*f-f)%100;
         g -= (g*n-n+h*n+e*f-b+l)%100;
         i += (m*j+f)%100;
      }
      g += (k-e*l+f-h+h*k*a+l*h+f-b*c)%100;
      c += (b+n)%100;
      e += (e+l-c+m-n+g+i-j-h*k)%100;
      d -= (d+k-k+d-e-e-d)%100;
      c += (f-a)%100;
      k += (m*l+e*d+h+l-l+e-j)%100;
      j -= (n-a*n-c-c+e-b+j+m+l*c+c+l+l)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<33; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 33 << "   Dynamic = " << sum ;
   for(I=sum=0; I<43; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 43 << "   Dynamic = " << sum ;
   for(I=sum=0; I<22; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 22 << "   Dynamic = " << sum ;
   for(I=sum=0; I<43; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 43 << "   Dynamic = " << sum ;
   for(I=sum=0; I<43; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 43 << "   Dynamic = " << sum ;
   for(I=sum=0; I<65; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 65 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}