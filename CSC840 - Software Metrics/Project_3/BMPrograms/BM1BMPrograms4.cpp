#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[19],IFEcnt[25],SWcnt[12],WHILEcnt[25],DOcnt[25],FORcnt[38];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         m += (f+n*j-a*k)%100;
         a -= (l-c*e+l+a*b+c-c+i-i)%100;
         m -= (e-m)%100;
         j -= (a-h-n+n*c+b+j-g)%100;
         i += (n*b+e-f+f*m-e+j-l+m+l*n*f-d)%100;
         f -= (n-e*f)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  l -= (n-l+m*j+g*b-d)%100;
                  a += (e*b+l*j-j-k+a+n-f+a-b+l)%100;
                  m += (j*j-g-l*i+h+f*d-j+n-j)%100;
               }
               f -= (f+m*l-a-e*i+b-l+i-n*n-l)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  n -= (f+h-j*l+l-a-j+e-e*h)%100;
                  d -= (e*f*b+n+i)%100;
                  b -= (h-j)%100;
                  i -= (e-b)%100;
                  m -= (i*a-j)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  l += (j-a+b*m+g-j*a*e)%100;
                  f += (j-l-c+i+j-i-e+i-n)%100;
                  m  = (c+a+l-b*j-b-h*b+g-n)%100;
                  l += (l-b-f+e-i*g-n-c-c-i+i+m+i+e)%100;
               }
               break;

               case 2:
               {
                  a += (b+f-d*g-a-d*a+c-k-e-j)%100;
                  d += (a+c+f+j-e)%100;
                  d += (h-f)%100;
                  c += (j-h*c*k-f*a+n-a*n-e)%100;
                  f -= (k+d+f+a+l+g+d-a*i)%100;
                  k -= (d-e*d*h-n-j-b*i*b)%100;
               }
               break;

               default:
               {
                  m -= (k+b*a-h*m+k+k-j+i*g+b-m)%100;
                  j -= (f+l*d)%100;
                  j += (k-c-f+c)%100;
                  h += (f+d+j+h-e+a+h+g+m+n-h+n)%100;
                  b -= (h-f+d*k*n*n-l+i-g-b)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  l += (i+m+g+c*a*k)%100;
                  b += (m+g-n+k*e+b-a-b+j+i*m)%100;
               }
               else
               {
                  d -= (e-f-m-a)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  n -= (l+g)%100;
                  c -= (l*h)%100;
                  m -= (e+h-a-l-d+m-a+j+f-j*n-f-a+m)%100;
                  i -= (i*m*n*a-h*m)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  f += (f+l)%100;
                  l += (b-m-d-b-m*n+c*c-d*a-a*n-e+c)%100;
                  g  = (a*f+g)%100;
                  k += (b*m+i+b*l-d*k*n-c)%100;
                  c -= (c-l+c+f-c*h+e-f)%100;
                  g += (g+g+b+b+m*c-n+k-i-b+k)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  h -= (d+d+g*e+g+d-a-n-a+g)%100;
                  c += (e+l+j+j+n+h)%100;
                  a += (j*m)%100;
                  n -= (f-m-i*i)%100;
                  d -= (h*h-d+g*l)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  n += (n+f-i-b+k+i-l+d-d)%100;
                  k -= (k+c-l-l)%100;
                  f += (h+j+e+d+g*d-f+h+c-c*i+n+i)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  i  = (l+f-d*a*e*m+f*a-k*g)%100;
                  a -= (a*n+n*g-m+a)%100;
                  a  = (k*j+b+d+l+f+l)%100;
                  b += (g-n*m+l-f-c*k+m-c-d+l-j-i)%100;
               }
               else
               {
                  j += (h*l+g+i+c+j-g+a+l+c+c)%100;
                  f -= (h*l-g-l)%100;
                  m -= (g+i+a+d)%100;
                  i -= (g-k+j-h-l-i+n-d-e+l-k+k*g)%100;
                  f += (g-j+g)%100;
               }
            }
            g += (j+b*k+h-m*j-a+j*i-m*k+f-m)%100;
            g  = (b+g-n-n-f+i-l-g)%100;
            l -= (n+d*j*b+i-i)%100;
            d += (c+n+i)%100;
         }
         a -= (g-d)%100;
         g -= (n-f+m+n+d*d+e*l-b-c*b)%100;
         j -= (g*k+i+f-b-m-n-c-g-j-f-d)%100;
      }
      d += (k+g-b*d+m)%100;
      d -= (i+n*c-j+c-e-f)%100;
      d += (f*m+b-a+m-j-f+e)%100;
      j += (l-m*l+n+g*n-c)%100;
   }
   k -= (g-g*e)%100;
   m -= (b-i+i*m-c+f*c-n-e-g*c)%100;
   i += (m-e-e*e+i*a+d-k-g-a)%100;
   i  = (g-m-i)%100;
   f += (c+j+f+a*k+a-g)%100;
   b += (f+g-d*n-k+b-c*m-e-n)%100;
   g -= (l+d)%100;
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
         g -= (h+e-m*m+c+l-m-c*h*i+j+f-k*c)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%3 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  i += (h+a+d-j*h-g+k-b-l+h+c*a*k)%100;
                  k += (f+k-g+a+c-m+i-e-c-e+m)%100;
                  f -= (j*m-n+i+a+b-i+g-d+l+a*e-f)%100;
                  f += (m-h)%100;
                  n -= (e+j*c)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  d  = (n+b*l+h+a+n+c*e*e+d+n*i*i+g)%100;
                  b += (m+e*l*b*h*k+a-d+b+d)%100;
                  m += (h+n-i*k-d-b-l-h+b+f)%100;
                  i += (m+i)%100;
                  a  = (h*n*l-f-d)%100;
               }
               else
               {
                  a += (f+m+h-d)%100;
                  b  = (h+k+n*h)%100;
                  k -= (g*d+b+l+m+l-e*h-k-c)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  l += (f+a+h+c*g+m+i+k-a-l-g)%100;
                  a -= (d-g+k+d-g-j+g-e*h+g)%100;
                  a -= (l-k*c+e-b+f-k-b+a+i-h)%100;
                  a  = (n+c)%100;
               }
               do
               {
                  b += (e-e-b*l*g+f+j+m)%100;
                  g += (e+b+c-d)%100;
                  j += (f*d*m+c*f-b)%100;
                  g -= (j*i)%100;
                  n += (m-e+h+e)%100;
                  g += (m-b+l-l*d-j-l)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  a += (j-i+b-k+j-f-f-n+e+m-e)%100;
                  i -= (j-k+a-a-n-k-h+j+h-j+e)%100;
                  j += (b-h+e-i)%100;
                  n -= (i+k-e-a-c-g+b+n)%100;
                  b -= (f-g-i+a-g*e-h-n-j+m+a)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  b += (h+m+h)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  k -= (a-c*n*n+m)%100;
                  n -= (n-a+l)%100;
                  e += (h*i+a+i-a+g)%100;
                  h += (h-j-l*b-l-i+c-n-b-h)%100;
               }
               else
               {
                  h += (c+a)%100;
                  k -= (d*a)%100;
                  a -= (j+j+m-k-i+h*k-h+h+m+g)%100;
                  l  = (i-i-i*g-b-l-k-e+c+a-n+h-d+d)%100;
                  d += (h-f+k)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  d += (h+e-f+n+f-n+k-k+g+k-l)%100;
                  b -= (n+n*k*h*m-g-g+i+j+c*i)%100;
                  k -= (j+m-i-d-e-m)%100;
                  b -= (j+d-h*d+m*h-b+l-n-a)%100;
                  m -= (l*a+a-h+c+m-n)%100;
                  g += (b+k-b-g-j*a+e-g*j*e-b)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  b -= (d-k-j*b*n+m+j-f-j-f+b+a*g-a)%100;
                  j += (l-l+c)%100;
                  b += (m-a-a-a-k*g+i-e-n*f*n+f)%100;
               } while( ++DOcnt[4]%5 );
               b -= (c*b-c+d-e-i-i)%100;
               g -= (b+k+g-h*i-a)%100;
               d -= (m+i-j-n+b-h*g+d-i-n)%100;
               k  = (h+k+b*a+c+c-c-f*b-m*d-j)%100;
            }
            }

            i -= (d*c+m-k*b*c*f-n+d+g+m*k)%100;
            c += (h-b)%100;
            l += (i-n-i+e-n)%100;
         }
         f += (e+a+d-n*l+c)%100;
         c  = (c+a+b+c)%100;
         l -= (k+c)%100;
      } while( ++DOcnt[2]%5 );
      d += (h+g+e-n-n*c*h)%100;
      d += (h+k)%100;
      f += (h+c+e-m*l-b-f*f+n*e)%100;
      e += (i+i+b+n+g*f+m+d-h)%100;
   }
   l -= (m-j)%100;
   i += (l-k*d-f+k-n-c)%100;
   k += (k-e*l+e-m+d)%100;
   m -= (k-g+b*k+n-j*a-i+g+n-e+b)%100;
   n += (l+i)%100;
   c -= (n+k)%100;
   g += (i-l-n*h+g-f+d-a+f+n+n*l+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[5]%10 )
   {
      m -= (k-c+a+k+j-j-g+l+g-e*e)%100;
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
                  b += (j-l+d+j-a+g+k-d+h+c*j*d+b)%100;
                  j += (c-e-k+k+i-e)%100;
                  d -= (b-j*a+g-a)%100;
                  i  = (f+d+f*h-j+m-k+b-e-k+g)%100;
                  m += (m-i-m-a+h-b-m+n-f+h)%100;
                  a += (b*a-c+d+k-a*j-l-h+m+f)%100;
               }
               else
               {
                  a  = (l-c-c*k-c*c-g*n-e-f)%100;
                  m += (d+g*b-l+a+c)%100;
                  k -= (a*b*c+f*g+k*h-l-g*e-n+m*j-l)%100;
                  f += (i*d)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  k  = (n-m-f)%100;
                  j -= (n-b)%100;
                  f += (d+l)%100;
                  e += (c-b-n-i+l+n-e+g-b)%100;
                  d += (n-i*j-f-j-n*m+a-h+a+c+l*e)%100;
               }
               do
               {
                  h += (j*g+d)%100;
               } while( ++DOcnt[6]%5 );
               e -= (e-a-c-a)%100;
               for( ; ++FORcnt[9]%5 ; )
               {
                  l -= (f-a+f*n+f-c-a-m-g+g+c+j)%100;
                  m += (f-j*e-b+n+g-n+m+a*d-i-f-e)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  j += (k*h)%100;
                  n += (m-e+i+l+i+l-i-f-b)%100;
                  j -= (a*i-e)%100;
                  n += (d+k*h-m+a+l-f+c-g)%100;
                  k += (i-g+e-n-a*n-d*m+i+g-h-b+f)%100;
               }
               do
               {
                  g -= (m-c-d-m-g*i*c*m-b+e-j+f*d-i)%100;
                  a  = (n*h+e*l+m*m+e+k)%100;
                  h += (g+j+a*b)%100;
                  i += (f*j)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  e  = (c-b+l+l)%100;
                  d -= (f-a-i*b)%100;
                  f -= (n+e)%100;
                  l += (n+a)%100;
                  j += (d*a*j-f+d+n-i*a+k-j+i+i-n+e)%100;
                  b += (l+d+l-a+c*b-g+h-j-e)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  m += (c+g)%100;
                  h += (k+h-f-h*h*g-n-b*g)%100;
                  k += (b*n-j+d*n+i+i+d)%100;
                  b  = (e+b-i)%100;
                  a -= (d*e+j)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  k -= (e+m-g+g+f)%100;
                  g += (c+h+g+i)%100;
                  d += (c-g+n*c+c-f+b-i+i+n-i-c)%100;
               }
            }
            
            switch( ++SWcnt[3]%3 )
            {

            case 1:
            {
               if( ++IFcnt[4]%10 )
               {
                  b += (b-m-j-j+j+c-e+a*j-h-i*m)%100;
                  l += (a-c*i*b)%100;
                  a += (f+f*e+k*h-b+b-c*f+a+i)%100;
                  k -= (i-l+j*h-b+l-k+a-m+i-b)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  d += (d-c-n+m+d-h+b*e*g*e-g-i*i)%100;
                  e += (j+b*b)%100;
                  j += (l*a)%100;
                  g  = (e*l-f+k)%100;
                  n -= (j-c+m*k+d-n-k-l+m-a+e+m)%100;
               }
               else
               {
                  g -= (l+d*l+e-h-h*f-f-f-h)%100;
                  i += (d+e+d*g-k-n*c-j)%100;
                  d -= (f-n+f)%100;
                  b -= (a*j+a+a*f-f-i-j-l*j+h+e+k+f)%100;
                  f -= (b+j*b+m+c-j*d)%100;
                  l += (d-k-g-e-i+c+f-b+i)%100;
               }
               k += (m*c-k-h-l-f-g*k*l+j-c*f+h)%100;
               i -= (c*i-a-m-h*m-l-g+m-h+l)%100;
               a += (c*e*n*c+k-a+e*b-g+g*k)%100;
            }
            break;

            case 2:
            {
               k  = (n+j+i-c*d*h*f*d-e-g+i)%100;
               n += (e*j+e-b*j-b+m-b-d*j+a-c)%100;
               l += (b+j*j+l-a*e-m)%100;
            }
            break;

            default:
            {
               m += (d+g+b*i*e+l-d*i+g-c+m-g+c)%100;
               m += (g-f*d-k)%100;
               j  = (m+h+i-h*h-m)%100;
               h -= (m+d)%100;
               h -= (m-l-n-k+d+k-k-i*c+n)%100;
            }
            }

            f += (l-g-g-m+j+n-c+b-e*m-d)%100;
            e -= (l+c+m+h+l+g-c*g-b+m-g*d)%100;
            a  = (k-a*k+d*n-g+b)%100;
            h -= (k+n)%100;
         }
         break;

         case 2:
         {
            i -= (c+d-n)%100;
            m -= (n-j*n*i+f-k*c)%100;
            c += (m+k*f-a-g+b)%100;
            e -= (a*n+e-l*k+d+l-c)%100;
         }
         break;

         default:
         {
            m += (c+h-b+m+c+g+k-m-a*i)%100;
            b += (l+h)%100;
            f -= (d+k*g*a+n*h+m-j-n-f)%100;
            n -= (a*f+h+c-c*e+a)%100;
            h -= (j+d-k-h*a-k-b)%100;
            m += (l-h+j+b+f*b-l)%100;
         }
         }

         h -= (e-j*b)%100;
         l  = (g*l)%100;
         a += (a*n*m-a-c+k)%100;
      }
      h -= (g*a+b-h+e*m+k*a+m-b+l)%100;
      m -= (n+d-h-f-c+d+n-k-g+j+l-c-g)%100;
      l  = (m-l+d*j)%100;
   }
   k += (m-b)%100;
   i -= (e*g-g-l+h-d)%100;
   e -= (g-e+n+a-k+n+h+a+a*m+h-g)%100;
   j -= (d-n-i-l*d)%100;
   k -= (a-g-f+d*i*l-a*b-n)%100;
   e  = (k*i+b+j)%100;
   l += (h+j-k-e*f*i*f+e)%100;
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
                  b += (n*n)%100;
                  l -= (l+f*k-h)%100;
                  e += (c*i-d+f-m-a-l*n+a*a-m*f-f)%100;
               }
               else
               {
                  b -= (c+c-d-d)%100;
                  l  = (n*d)%100;
                  m -= (e+h-e-b*l+m+k+c)%100;
                  n -= (d-l+a-a-i-a+b)%100;
                  d += (n+c-d-i+d-i*k*m*e-k-d+f)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  m -= (n+d+c+n-m)%100;
                  f -= (f+a-k*j*e*g-k+d+g+h+l*c+d+m)%100;
                  e -= (c-f)%100;
                  n -= (d-j)%100;
                  c -= (e*f*c-j+g*g+a-n-h-d-b-l)%100;
               }
               do
               {
                  n += (m-j)%100;
                  n += (i-f+a)%100;
                  a -= (m-n+a)%100;
                  g += (l-l*e)%100;
               } while( ++DOcnt[8]%5 );
               if( ++IFcnt[6]%10 )
               {
                  d -= (h-a+k-i+d)%100;
                  c += (k+h-j+c*l+b-a+c*d+i+k+n)%100;
                  b  = (m-k+j+b+n-k+l*j+g)%100;
                  m -= (f+i+m*m*n*f+e-m+c-h*k)%100;
                  c -= (l-h-a*k*i*k-d+e*b+i)%100;
                  m -= (e-j-c-c+l+n)%100;
               }
               b -= (c-d+b+n+a+d*m+n+k+b+k*h+a*b)%100;
               for( ; ++FORcnt[11]%5 ; )
               {
                  e -= (k*e+n-j-m-a+b+k*i-d-e*b)%100;
                  j -= (g+m+n*e+b)%100;
                  n -= (f-f-c-e-i*m)%100;
                  k -= (b+l-a+a-a+g+d*i+k-n+k+i)%100;
                  a += (k*f+m-f+i*a-g+c+n*m-b)%100;
               }
            }
            
            switch( ++SWcnt[4]%3 )
            {

            case 1:
            {
               a -= (i-f+j+b*d*c+m+c+d)%100;
            }
            break;

            case 2:
            {
               k += (b+e*m-c+a*m*k-b-b-n+l)%100;
               h += (g-m*m-a-c*e)%100;
            }
            break;

            default:
            {
               m += (l*c+j+a*a+h-i+k+f+k-c-e*a)%100;
               g += (f+c+j-e*k+n-e+k-a-c)%100;
               k += (b-h-h+m-i*g+d-m-b+d*b+k+l+j)%100;
               k += (d+n+a)%100;
               i -= (h*k)%100;
            }
            }

            a += (g*h-e+c)%100;
            n -= (i-g*g-d-g-n+l+n-h-c-h+g-j+i)%100;
         }
         i += (i-n+f-n+f-c-k)%100;
         m += (k+m+c*c+m)%100;
         c += (f+i-d-i+h-b+e*d*c+d-c+l+j-h)%100;
         e += (f-k)%100;
      } while( ++DOcnt[7]%5 );
      n -= (h-d-h-f-n-m+h+f-b-a+g+k+e+k)%100;
      k  = (g+h+d-l+l*k-f-g*l-e+f)%100;
      j -= (c+g+j+f+j)%100;
      f -= (i-g*f*a+c+e+e+l-c+f-e)%100;
   }
   e -= (b-a+j+c-k+g-j)%100;
   n -= (f-i-h-j*e-i-i)%100;
   k -= (i-l)%100;
   h  = (l*g-i*g+b*a+c+k)%100;
   c -= (n-n-i-n+c*n-a*n)%100;
   m -= (i+j-e*e*n*c)%100;
   c -= (m-l-f+n+l-l+e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[11]%2 )
   {
      n -= (d-k-g*l-k+d+k-d+e-g-i)%100;
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
                  c -= (f*k-f-f*d-k)%100;
                  f += (j*h-f-k-b)%100;
                  l -= (n+g*l-d-k*k-n*b)%100;
                  k += (g*l+d+a+c-b+e-n+k+g*c)%100;
                  d -= (h-d*n-h-l-l)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  l += (a+f+j*d-f-f)%100;
                  j -= (i-k+d-b-j+d+h-d)%100;
                  h  = (c+b+e-i*h-g*e*a*b+f-d)%100;
                  b -= (c+h-b*j+h-b+d+h+i*f*e*c+i-i)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  a += (e*j-f-d-i+f+g-f-k+i*b-d-m+b)%100;
                  i += (b+d-n)%100;
                  n -= (l+c-e+j)%100;
                  d += (a+d)%100;
                  k -= (i+g-b-b-d-g+a-j-h+a)%100;
               }
               else
               {
                  m -= (m+e*f+l)%100;
                  j  = (n+b*m-c-b-j-j*j+a-h+k+e)%100;
                  l  = (j*c-a+g+m*e-b*i*n)%100;
                  a += (l+n+f+j-d-b)%100;
                  m -= (b-l-k+d+j+b*j+k)%100;
                  d -= (m-j)%100;
               }
            }
            while( ++WHILEcnt[9]%5 )
            {
               do
               {
                  a -= (e*a-l*e*f)%100;
                  d -= (g-f+e+m+a+l-i)%100;
                  d += (k+j+l+a-h-k-m*m)%100;
                  m -= (f+g)%100;
               } while( ++DOcnt[10]%5 );
               l  = (c-m-f+g+j*i*k*l*a*f+k)%100;
               for( ; ++FORcnt[16]%5 ; )
               {
                  h -= (i+n+l+h+a*f-l)%100;
                  i += (i+i+d+b+a+i-n-c+g*n)%100;
                  n -= (g*h-f*h)%100;
                  k += (j+f)%100;
                  k -= (a-k-e*j-d+i+l+g)%100;
                  b += (c+h-l+d-e+n)%100;
               }
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  c -= (a+m)%100;
                  h += (l-f-k*e*c*h*f-i+i+a*g+c)%100;
                  l -= (d*b+g-k)%100;
                  c += (e-l+m-e-m+c+e*g+d+b+c*j+f)%100;
                  g += (c-g-f+j-l*j+l)%100;
               }
               break;

               case 2:
               {
                  n -= (l-g-i+j)%100;
                  n -= (a*b+n-m*h)%100;
                  k += (b+n-n)%100;
               }
               break;

               default:
               {
                  e += (k+k-g)%100;
                  j -= (e+f+e*k*j-d*m-n+h*m-c-k)%100;
                  e -= (h+l-m-k)%100;
                  i -= (h+m-c+m+b+c+h-i+m)%100;
                  e -= (j+m+j-c+i+d)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  l += (n-c+n+l+k+h-l+i+d-i+k+d)%100;
                  i += (l-l*k+j-c+n+a)%100;
                  e += (m*k*c-k*b-l+d)%100;
                  i -= (b*i+a-j-l)%100;
               }
            }
            if( ++IFEcnt[10]%2 )
            {
               d += (b-b)%100;
               f += (f-a-e-m)%100;
               e  = (g+a+m+l+d)%100;
               l -= (m+k-d*g)%100;
               c -= (n-n+h*f-d+g-m+a+i+b+n)%100;
            }
            else
            {
               m += (b*h-j*e-b)%100;
               i -= (f*m+j)%100;
               e -= (m+i*l+j-h)%100;
               a -= (n*e+m+k-c+j)%100;
               k -= (j+b+h+c-g*c-k-m+l+k+l+n+h+a)%100;
               l  = (j-i+j*i-g+n-h+n)%100;
            }
            m += (i+j*n-f+a-a+k*g-k*e+g+a*e+d)%100;
            m -= (c-l-k+n-i+j)%100;
         } while( ++DOcnt[9]%5 );
         d += (m*g-i-b*d+c-l+f*h*j-l-f*n-a)%100;
         f += (h-n-g)%100;
         h -= (g+n+b-m-m-k-d)%100;
         m += (i+a-j-e*a*n-l*c+c*n)%100;
         f -= (f+g-k*g+g-g-d-l-e+n)%100;
      }
      g -= (m-j-j-f-k)%100;
      j -= (m*f-d*h+b+a*k*l+l+k+d+n-h)%100;
      c += (a+c+m*n*j*a*e*k+j-n)%100;
   }
   d -= (l+b)%100;
   f -= (g-m+h+h-j+j+a-g-j+h+b+m-b+d)%100;
   b += (l+e*e*f-l+g+a*f-m+n+n*i)%100;
   d -= (j-e-g+l+n-d*f-n+b-c)%100;
   j += (j-f+c+c+e-m-d+d)%100;
   j += (m-i*n)%100;
   h -= (a*k)%100;
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
                  g -= (i*j-m*j+a+g)%100;
                  b -= (e-a-n*e*a+l*m-k+g-c-m-n-g+m)%100;
                  a -= (i*m*m-b-n+n+m*h*k*g-m*e)%100;
               }
               else
               {
                  n += (n*i+i-a)%100;
                  a += (h+m)%100;
                  c += (n-e-h*i)%100;
                  h -= (h+e+l*n*f*m-e+c-j-b)%100;
                  e += (d-k+k*d+d-i-d+c+h+n+a)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  j -= (j+h+i+j+m+l*j-f*h+g-j+l-d-h)%100;
                  d += (i+i-c+c-a+c)%100;
                  n -= (h+h)%100;
                  m -= (k-g-e-f*b-i+j-f-d-d+f+f+l)%100;
                  l -= (m+d*g-j-a*f)%100;
               }
               do
               {
                  l  = (g-a+g*m-e+k*n-n+m-e-i*f)%100;
                  k += (i*f+b)%100;
                  n += (c-a)%100;
                  k += (k*f-c*m-b-j-k-i-n*c)%100;
               } while( ++DOcnt[12]%5 );
               if( ++IFcnt[9]%10 )
               {
                  i  = (l*f-e)%100;
                  f += (e-d+l-e+c+n+j+h-l-m+f)%100;
                  k -= (h+a-i-i+i+d*d-j-g-d-g+c+k-k)%100;
                  d += (h-g*h*n*j+n*g-f-n-c+c-d)%100;
                  a += (i-a-k*a+f+b*e-f-n+m*e+j-a-m)%100;
                  c -= (n-m+a+e*b-a+i*k+l+f-c+j-b)%100;
               }
               l += (m-m+l+c)%100;
               for( ; ++FORcnt[17]%5 ; )
               {
                  k -= (d*g+a*l+e-k+b+g-m-a+d)%100;
                  m -= (i-h)%100;
                  k -= (j+m)%100;
                  b += (a-l-l-n-l-g-i+i-b-m-i+c)%100;
                  j -= (n-m*e-c+a+h-i*e*n-j)%100;
               }
            }
            
            switch( ++SWcnt[6]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[13]%2 )
               {
                  i += (k+b+g-c*b+e+c-g)%100;
                  b += (i+a+g-i-e+l+h+c-g)%100;
                  b -= (a+j)%100;
                  d += (j*c-e*i*d-e-g)%100;
                  g += (k-k+b+h+j+d+b*i-d+h*e*c)%100;
                  i  = (l+e+d-j-h-i-d+i*e+i*n-n-l)%100;
               }
               else
               {
                  g += (i+g+d-a+i-c+j+e-i-n)%100;
                  d += (i+h*b+m)%100;
                  j += (g-k)%100;
                  h += (m*i-j)%100;
               }
               while( ++WHILEcnt[12]%5 )
               {
                  i -= (m*b-f-i-b+c*c*g+n*a+m-g)%100;
                  g += (g-a-j)%100;
                  c -= (n-b*h*f-e-e-l+f)%100;
                  l  = (n+f+b-h)%100;
                  i -= (f+n+c-j*f-n+i+n)%100;
               }
               do
               {
                  f += (m*h)%100;
                  n -= (b-c-c)%100;
                  j -= (h+m+e-c-i-c*i-l*g+i+n-h*b+j)%100;
               } while( ++DOcnt[13]%5 );
               for( ; ++FORcnt[19]%5 ; )
               {
                  a -= (c+l-f*l+h-h+f+l-i*g)%100;
                  h += (f+l+a+i*m+n+l-g-m+e-m+a)%100;
                  b += (k-f-e)%100;
                  i -= (g+j+e+m+n+n-h-k)%100;
                  k += (n+b-g-m*c*c+k+k-n-j+h-m+c)%100;
               }
               h += (a+l*e+a-k*g)%100;
            }
            break;

            case 2:
            {
               d -= (h-h+k*e-g+e+g+e+e+a-g)%100;
               n -= (e+l)%100;
               e += (k+f+i-c+n+i)%100;
               i  = (g+d-j-c-c-d-h-f)%100;
            }
            break;

            default:
            {
               e += (c-e+n-d-k)%100;
               a -= (a*e-i+l-h*d+l-c-j)%100;
               f -= (m-i+f*i+n-f+e+d-l+e-j*h-j)%100;
               g -= (l+b*g+b*j)%100;
               i += (e-c+h*k+i)%100;
               b -= (b-g+i+h*b-b+g-a-d-d+b-k)%100;
            }
            }

            d += (h-h-n+c*b-k+k+b*a)%100;
            c += (j+h)%100;
         }
         j += (d-k-a+g-f)%100;
         e  = (i-a+k+m+d+h*h-c-d)%100;
         d -= (k+b-d+h*n-l+c+e-i*k*f)%100;
         c += (b-j-b+l-i-g*f*j+l*n)%100;
      } while( ++DOcnt[11]%5 );
      a += (a+c)%100;
   }
   l -= (l+n+j)%100;
   l += (e+a-e+j+c-e)%100;
   f += (d+d+f-g+j+k)%100;
   m += (l*l-d+m+g-b-k)%100;
   h  = (k-k+b+b+n-j+c-c+g-d-m)%100;
   b += (k-e-j-e-l+l-f+a-e-a)%100;
   b += (g*c+e+l-d+n*d-h+i+i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F7(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[11]%10 )
   {
      for( ; ++FORcnt[23]%5 ; )
      {
         if( ++IFEcnt[15]%2 )
         {
            b -= (d+b+b+h-k-j-i-b)%100;
            h -= (c*b*e+j+k+b-d-c)%100;
            e -= (h-b+a-b*m+n*b*b*c)%100;
            i  = (m-j-d-d*f-d+a)%100;
            f -= (l-h)%100;
         }
         else
         {
            while( ++WHILEcnt[14]%5 )
            {
               do
               {
                  e -= (j-e+k-k-a-l)%100;
                  b += (h*e)%100;
                  m += (i-a-m*a+n+d-n*d*e+h+g+f+a+m)%100;
                  e += (b-k)%100;
               } while( ++DOcnt[14]%5 );
               b -= (b*j+c-a+b*d+c)%100;
               for( ; ++FORcnt[21]%5 ; )
               {
                  i -= (m+n+n+f-b-h+f*i-n-m)%100;
                  a -= (m-m*c*b-e-d*a+m+d)%100;
                  f += (n*n-f*k-f-h+m+b-i+j-n)%100;
                  e -= (m-f-i)%100;
                  d += (i*f+b*i-c-e+h-e*m-d+i+i)%100;
                  n += (a-e-e+f-b*h+k-c+a)%100;
               }
               
               switch( ++SWcnt[7]%3 )
               {

               case 1:
               {
                  b += (l-e+f+i+h)%100;
                  f += (c+i+j*a-j-m*n-h-a+a)%100;
                  b -= (n*i*f-a-c-k-m-b+f-a+e-b)%100;
                  j -= (m*d-j)%100;
                  e -= (b+h)%100;
               }
               break;

               case 2:
               {
                  k += (b+f*f*f-k)%100;
                  g += (j-k*a+i+h-f-n-k)%100;
                  i -= (f-b*m-m-i+n+e+c+d*j-j)%100;
               }
               break;

               default:
               {
                  n += (g+k+h)%100;
                  l -= (j*l*j*e-n-e*e*m-d)%100;
                  j -= (c+k-l+h)%100;
                  b += (g+g+c*m+m-l)%100;
                  f += (a*f+f-m*f-a-m-n-m+j-l+a)%100;
               }
               }

               if( ++IFcnt[10]%10 )
               {
                  m += (m*l)%100;
                  j += (l-l*n)%100;
                  a += (d-a)%100;
                  b += (l*h*h*b-j+a*d+l-a)%100;
               }
            }
            if( ++IFEcnt[14]%2 )
            {
               i -= (n-g-f+f+k-h-k-i+m-b)%100;
               m -= (l-f*n+k-j+b+l*i+l-d*l*c-l+c)%100;
               j -= (m+m*c*e*j-h+c-g-g)%100;
               i -= (l-f+b*b+f-a*h+f+e*e)%100;
               g += (d*l*n)%100;
               g += (e-e-i*i*d-i-k)%100;
            }
            else
            {
               while( ++WHILEcnt[15]%5 )
               {
                  h += (m-k*g*j+m+b+k-b)%100;
                  f += (d*n-i-c-f+g+l+a-j*a*e-j)%100;
                  j += (h-d-f*m-i-d)%100;
                  b -= (a+a+b+g-b-g+a)%100;
                  j += (a+l+j-i+n-c-g+e*m+l)%100;
               }
               do
               {
                  i  = (j*n-a-d+e+d-h-k-m*i+f+d+g+h)%100;
                  k -= (b*j+i+i-i+l-f*a-f+i+n)%100;
                  d -= (d*n-n-e*c-d*j)%100;
                  l -= (f+f+g*a)%100;
                  n += (c-g+k*g-g+m)%100;
               } while( ++DOcnt[15]%5 );
               for( ; ++FORcnt[22]%5 ; )
               {
                  h += (j*l+k-c+j+n-c-c-a)%100;
                  d  = (k-h)%100;
                  g += (m*e-m+a+j+m*h+e-j)%100;
                  a += (f+n-b+m-f+n-j-l*i*f+d-c+n+i)%100;
               }
               k += (c*d)%100;
               g -= (i+c*c+n*a+b-k+n-e+g)%100;
               h  = (g+m+c-n+l*j+e-e-g-b-b*g)%100;
            }
         }
      }
      f += (a-l*f*j-f+d+c*e*a)%100;
      i += (i+f+l+m+l)%100;
      i -= (g-e+j-e+b)%100;
      g += (h*k-a-e-l+k+e*g+m+m+g)%100;
   }
   l  = (l*n+c+l)%100;
   c  = (c*j-h+d-l+h*a-i+b-f-k)%100;
   i += (e+n+k-m)%100;
   m -= (b*c*e*l)%100;
   n += (m-i)%100;
   f -= (j-c*k+k-d-f-h+h+m*i+b-d)%100;
   e += (m-b-e-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<19; I++) IFcnt[I]   =0;
   for(I=0; I<25; I++) IFEcnt[I]  =0;
   for(I=0; I<12; I++) SWcnt[I]   =0;
   for(I=0; I<25; I++) WHILEcnt[I]=0;
   for(I=0; I<25; I++) DOcnt[I]   =0;
   for(I=0; I<38; I++) FORcnt[I]  =0;
   long int sum=0;

   sum += F1( ) ;
   sum += F2( ) ;
   sum += F3( ) ;
   sum += F4( ) ;
   sum += F5( ) ;
   sum += F6( ) ;
   sum += F7( ) ;

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      for( ; ++FORcnt[25]%5 ; )
      {
         if( ++IFEcnt[17]%2 )
         {
            l += (k+j+n*c*d+k-k-h+h-k-l)%100;
            h -= (m-m-n+c)%100;
            j -= (c-g-e+g-m*c-d-m-g+l*l-d-k-e)%100;
            e += (a-c-b+j+d-f+j+d+l*a*c)%100;
         }
         else
         {
            while( ++WHILEcnt[16]%5 )
            {
               do
               {
                  e += (c*l)%100;
                  b += (f-m)%100;
                  k -= (j+n+i*f+c-e*j+h-c+l+g)%100;
                  c += (f-l+j+i-m+h-k)%100;
                  h -= (h*a)%100;
                  d -= (j-c*i*e+d+k+a-a)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  h += (l+c+l+f+a+e+m*n)%100;
                  a += (b*m-d-k+a)%100;
                  f += (a*g+a-l+l-a+e*n)%100;
                  d -= (m-a+g)%100;
                  i -= (a+h-m)%100;
               }
               g -= (k-c-k+e*d+e+i+n-n-f-l-m+f)%100;
               for( ; ++FORcnt[24]%5 ; )
               {
                  j += (d-c+f+n+a-k+h+l)%100;
               }
            }
            
            switch( ++SWcnt[8]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[16]%2 )
               {
                  g -= (c+l-d-e*d+n-n+i-g+i-i+n)%100;
                  a += (n-d-e-l*l)%100;
                  d -= (f-m)%100;
                  g += (l+c+c)%100;
               }
               else
               {
                  h -= (g-j*f)%100;
                  g -= (l-e-l)%100;
                  b += (h*c+l-g+b-d*d-a*n+j*b)%100;
                  m += (h-g*i-g+a-l+c+f*k)%100;
                  i += (i+g-l+c-f+j-l-c*e)%100;
               }
               while( ++WHILEcnt[17]%5 )
               {
                  j += (e+l+l+c+m*k+i+c)%100;
                  k  = (j+b)%100;
                  f += (d-a)%100;
                  l -= (k-l)%100;
                  c += (e+b-e-n+l)%100;
                  h -= (h-h-m)%100;
               }
            }
            break;

            case 2:
            {
               b += (b+i+h+l-k-k-f+l+b)%100;
               m += (j-g)%100;
               j -= (k*e*k)%100;
               g -= (i-k)%100;
               m += (c-l-k*d-e-d*b-c+j*l+c*a+a)%100;
            }
            break;

            case 3:
            {
               n += (n-j+g*m-j*m-b-i-i+b-i+m-j*l)%100;
               i -= (k-j-k-e-k-j+i+d+h+k+b+k*j-e)%100;
               j += (a-h)%100;
            }
            break;

            default:
            {
               c += (n-e*l-k+f-a-j+e-m-m+h)%100;
               e += (e-b+l*n+h+d+m*b+b)%100;
               l -= (b-e+n-f-g+a-e+m-a*i)%100;
               m += (n*h*e-b+b+l+e+d+f)%100;
               d -= (i*d+d-j-d+g+f+j+m)%100;
            }
            }

            g -= (j+c*i*b-c-a-h-e+k)%100;
            c += (m+n+g*j-n-m*j+j-d)%100;
            j += (j+n*k-m)%100;
         }
         i -= (n+a-m*h+k)%100;
         j -= (f-i-j-h-d-l-i+n-i*e+b-n)%100;
      }
      f -= (j+n-d+h)%100;
      i += (k-e+c-i*g-f+c)%100;
      d -= (d*f+f+d*j-b-h-a*d+l+b*m-g)%100;
      h += (k+k-g+c-e-f*f+f*j+f+m)%100;
      m += (h-b-a+e-e-b+i)%100;
      h  = (g+b)%100;
      n += (e-l+b-f-i-d-g-g+d+m+g+k-i-c)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<13; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 13 << "   Dynamic = " << sum ;
   for(I=sum=0; I<18; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 18 << "   Dynamic = " << sum ;
   for(I=sum=0; I<9; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 9 << "   Dynamic = " << sum ;
   for(I=sum=0; I<18; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 18 << "   Dynamic = " << sum ;
   for(I=sum=0; I<17; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 17 << "   Dynamic = " << sum ;
   for(I=sum=0; I<26; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 26 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}