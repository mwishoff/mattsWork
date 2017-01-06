#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[105],IFEcnt[140],SWcnt[70],WHILEcnt[140],DOcnt[140],FORcnt[211];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         g += (i+a*n-m-n-b)%100;
         h -= (k-i*d+m+d)%100;
         e -= (a*n+g+f+h*f)%100;
         d += (b-f*j*j)%100;
         m -= (e-d*g*j*m)%100;
         f -= (h-j*l-l-j+h-a-a*l)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  a -= (k*h-m*e+e)%100;
                  d -= (c*h+a+k*g+b)%100;
                  g -= (a-l+l-l+n-a-n-f*g-c)%100;
               }
               l -= (h+i-b-e+n+n+d-n+i)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  c  = (j+d+h+j+h-k-a)%100;
                  e -= (f+i*n+h-d-d+g+h+a+m+n-f+c+d)%100;
                  a += (k-l+l+e*i*k-j)%100;
                  c += (h*a-g*l-a-h*n)%100;
                  e += (g-g-j*c*h-n-k+g)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  c -= (l+g-c-a-e+d+b-b-g+c*c)%100;
                  h -= (h-n+m-k+f*a-l-k*f+l*e-a+l)%100;
                  d += (a+a+b-m*c-a-a-a-a)%100;
                  a  = (k+d-n-g+d+l*c-d+g+i*e*l*l+e)%100;
               }
               break;

               case 2:
               {
                  f -= (n-h-k-n-i-i+b)%100;
                  h += (i+l)%100;
                  a += (m*j-a*a*h+m-l+b+a+b+d)%100;
                  m += (d+h-f)%100;
                  b -= (i-b-d+h*c-j-g*b+k-e+d+k*g)%100;
                  l -= (i+j)%100;
               }
               break;

               default:
               {
                  a -= (n-f-j)%100;
                  g  = (e+b*d+c-b-h+n+k-i+a*k*g-a)%100;
                  d -= (j*h+m-g+g-j*l+i)%100;
                  l += (f*h+h+i-d*j-e+f-k+e-c)%100;
                  h += (a-b*i+g-e+n-h+c*l-e)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  b -= (j-f-b-h-g)%100;
                  g -= (h-a+e+c-a)%100;
               }
               else
               {
                  c += (i*m+b+f-i*i)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  a -= (h+a-n*g-k-e+a+c)%100;
                  b -= (n-k+n*e-j*a+g-k*g+a+k*l-n*d)%100;
                  i += (k-f+b-d*g+d*e-k+c-g-e+m-a-i)%100;
                  l += (d-f*e-i)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  d  = (h-j-g+e-g-f+g*h*e*m-f-f)%100;
                  a -= (j-j+i-j-h+l+i-b+k*g)%100;
                  k -= (c-n+a)%100;
                  l -= (d+h+n-f+l-m+f-h+h+d+c-h-f-h)%100;
                  b -= (i+b-c+f-l+d+j+c)%100;
                  k += (i+l-e*m-b*b-e-j*g+d)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  b -= (a+b-a*n-c-n)%100;
                  g -= (j+e-g*h+b)%100;
                  k += (a+d+n*a-j+a*f+k-i)%100;
                  a -= (k*m-e-m+h+e+f+e*a-c-b+n)%100;
                  a  = (a-a-c-b*k-d+k-h-k-j*i)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  j += (d*h-j*f-n-h+i)%100;
                  g -= (c+g-g-e-i+d-c*f-k-d-b)%100;
                  i += (d+k+c+b+j*j+m*k*e-b)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  e -= (h+l-l+e-b-b*m+c*f+f-e*m+b*k)%100;
                  k -= (b+l+k-d*k*b+m)%100;
                  a += (f+d-d-j-e+j+k+c+g+k-f-g-a)%100;
                  d -= (h*j)%100;
               }
               else
               {
                  m -= (n*i+m-m+i-l*a+f*n)%100;
                  n += (k-h*i+e-d-j*f*i*c-b-f*h*m+c)%100;
                  d += (h*c-h*c+g-f-l+j-i+h+n*j)%100;
                  g += (a-e-c+a+e*h+b-m-l+i)%100;
                  i += (k*b-k*b-g-h-g*l)%100;
               }
            }
            i -= (g+n+n+f*d+i)%100;
            b += (b*f*g-n+f+k)%100;
            f += (b-f-l-g+h-m+m+a+h+l)%100;
            i += (g-i+d-n-i-g-e-j-f*i-a*e+l)%100;
         }
         l -= (h+k-a+e+e-j)%100;
         l -= (k+e-b+g+k*i+j*c*e-b)%100;
         k -= (f*c)%100;
      }
      k -= (h-i*i+f*m-h-c-m+a+g-h-j)%100;
      k += (g+b)%100;
      l += (e-a-f+j+f+e-f+c*k*b+b*k)%100;
      n -= (c+d*k-k+g+a*i)%100;
   }
   e -= (m*j+e+i+n*d*m*l+i+m)%100;
   j += (k+e+f-m+f-c-b+b-c*a-a*n)%100;
   e += (d-l*m-e-f+f-e*f-a+b)%100;
   f += (n-j-a*c*e*f-b-a+i*n+g)%100;
   i += (b*i-f+c-a-k-d+g-e*g+d*n)%100;
   m -= (j+k+m)%100;
   e  = (c-a*b+b*b-h+g+d-c)%100;
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
         m -= (h-d+j+i-b+j+n*b)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%3 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  m -= (a*j+a-g+l+d+k)%100;
                  d  = (e-i*g-a+e+k+h+c)%100;
                  e -= (m+m-m-k-f)%100;
                  e += (g-h+n*b-j*e)%100;
                  g += (l-n)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  n += (a*m)%100;
                  j += (j+h+h+c)%100;
                  e -= (n*g+m+l-n+f+f+j+j+m)%100;
                  j += (c-d+g-k-k-k*k-k-l+f+e)%100;
                  a += (i+c+j-n+i+k*c-l+b)%100;
               }
               else
               {
                  c += (f+h-i*j-n+n-l*g-d)%100;
                  k  = (e-j*b-k+n-l*c+l+d+n+k)%100;
                  m += (n-i*g-c+m+c)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  l += (l+l-l+h+c-e+k+n)%100;
                  e += (f+c-n-c-b+l-h+c*h)%100;
                  l += (g*b*c-b)%100;
                  n -= (l-m+m*d*i-j-f*d+n-f*e*c)%100;
               }
               do
               {
                  j -= (l-f-a+l-a+h*b+j+f*n-e-i+b)%100;
                  j -= (h+g-n+i+b*j+d*n+c-j*l-a+b)%100;
                  b += (a*c-d*l-g-k*d)%100;
                  k -= (f*j+i-k-b-c-b+a-c+m-e+l-b)%100;
                  j  = (e+m)%100;
                  a -= (m-i+k-d-a+d+a-i+h+i)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  f  = (a+a-d-b-e*a-i+f-f*j+d-f)%100;
                  k  = (j-h)%100;
                  n  = (j*i+k*h+c*i-g-i+e-g-b-i-f)%100;
                  l -= (g*l-f*d+i-l-k)%100;
                  g -= (e*b+k+m+g-n+i*d+j+g-e*k-n)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  b += (i+n-g-e*h+k)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  j += (d+c*m+e+b-h*e-c-i-a-f*m)%100;
                  j += (b-g)%100;
                  l -= (m-g-a-j+b-l-a*n-d)%100;
                  g += (g-i-d+d*d+k+e+h)%100;
               }
               else
               {
                  f += (n*n*m-f-a*m+m+e+g-i-m)%100;
                  m += (f+k+i+e-b+k+k+a-k-h+d)%100;
                  e += (k+k)%100;
                  l -= (a+m-m*m+l+a+n-k*f-k+a*h)%100;
                  n += (f+j-n-j+n-i+h-e+h+b+j+e-n+c)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  k -= (f*i+m-g*f+n+h+j+i+c-l*d)%100;
                  j += (g-a*g-j-n-l-b-j+d)%100;
                  n -= (h-d+f+c-e+i+m+k+n+a+h-e)%100;
                  b -= (h+a+d*i-k*m*g-e+c-h-n+j)%100;
                  f += (l+c-j-g-m+j+l+j*b-k-i-j+e+k)%100;
                  m += (e*a+l*a-i*c+l+d-c-n)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  c += (j-m)%100;
                  i -= (c+l*e*j*a*j*k-i)%100;
                  e -= (m+h-b+a-h-g*n)%100;
               } while( ++DOcnt[4]%5 );
               c -= (m*c-j-a*h*k+l+i)%100;
               l -= (b-h+i*m-n-f+a-m-d+d-i+f)%100;
               g += (k*j)%100;
               k += (d-a)%100;
            }
            }

            l += (l-j)%100;
            h += (f+c-e+j-g*m)%100;
            h += (f+k*e+l+m*l)%100;
         }
         d += (g+d-m-l-n-a-l+b-b-a+h-e+m)%100;
         d += (d-l-m+i-c+d-g*d-m*d+k-c)%100;
         j += (j+m+e)%100;
      } while( ++DOcnt[2]%5 );
      g += (c+a)%100;
      d += (k-a+h-n*f-l+e)%100;
      m += (a+k*e-b-e-n-b-c-i*c+a)%100;
      f -= (e+m-c-d*i+l+l*m+h+m+e)%100;
   }
   d -= (l*c)%100;
   b += (l*a)%100;
   k -= (a-j-m+i+k-k+c)%100;
   n += (i-n*d*i*g+c*i+l*j+k-d)%100;
   k -= (j*c-c*g-i+i+a-d)%100;
   e -= (k*l+b-b+k*c+m-f*i+c-j+d)%100;
   f += (j*j+f+c+c-m*n-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[5]%10 )
   {
      m += (m-l*i)%100;
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
                  h -= (m+i*h-n+d-c+e-e*c-h)%100;
                  n += (d+k*d)%100;
                  b -= (m-f-n-a+b+k)%100;
                  k += (m*h+b)%100;
                  i  = (m-f-l+j+b+k-h+f)%100;
                  k -= (n*k-g)%100;
               }
               else
               {
                  m += (e-l-m+l+c-j+g-g+j-l)%100;
                  e += (d+d+j*k+h+c)%100;
                  j += (a*d)%100;
                  e -= (i+a-n)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  j -= (e-a-g-f*k-a+g-e+f+d+i-a-f)%100;
                  g -= (h+h-c*i+f+i-n-g+l-n-f)%100;
                  d -= (f*e*h-c*e+n-e+g+h-f)%100;
                  b -= (a-a*m-l+i*m-g+i*c*m-a-b)%100;
                  j += (c+j-c)%100;
               }
               do
               {
                  h -= (h-b*b+l*e+c-c+e+m)%100;
               } while( ++DOcnt[6]%5 );
               b += (a-c)%100;
               for( ; ++FORcnt[9]%5 ; )
               {
                  f -= (m+b*i+i+f-b-j-c-c-j+j)%100;
                  f -= (a-e)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  m -= (f*m+j+g*k-a-g-n*h+i+k-n*f)%100;
                  f -= (h*b-n*c-c+b+e-j)%100;
                  g  = (c-g+d-h*l+g+c*d*i+k+g-g+n)%100;
                  e -= (m-m*m-e+m*f+i*g+h+e-j+g-k)%100;
                  a += (i*i-l-b+b+f+c-b+j*k)%100;
               }
               do
               {
                  d -= (n+b+k-h+a+j+i-c+f+h-k+m)%100;
                  g += (k+g)%100;
                  c -= (n-h+a-l*n+a*f*k-i+g-n-e-m*e)%100;
                  g += (m*f+b+h+h*a)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  c -= (e*k+h-b-k)%100;
                  b -= (a+a+a+f+a-l)%100;
                  a -= (k+l*n+j-n-m+g*k*b*d+j-l-k+a)%100;
                  c -= (j+f-g-i+k-n+j*g*k)%100;
                  g -= (b-b+d+h+i-i+m-b)%100;
                  f -= (c-g-b*b)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  a += (c+k+n+a*g-l*g)%100;
                  h -= (g-n*h-n-h)%100;
                  e -= (i*h-h+j-a-i-e)%100;
                  g += (f+c-g-l-e)%100;
                  h -= (i-b*g+k-i+f+i+g+e+l*d)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  k += (f+h-d-h+m-b-k-i-l-m*k)%100;
                  m -= (b-f-j)%100;
                  h -= (d+a*d-l*i-c-e)%100;
               }
            }
            
            switch( ++SWcnt[3]%3 )
            {

            case 1:
            {
               if( ++IFcnt[4]%10 )
               {
                  e += (l+m*a-b+a+g)%100;
                  h += (c-c-g+k+g-b+k+c-n-g*b-l-d-f)%100;
                  d += (e*h+g+k-j+n+k*i-n*n+d*k-a-n)%100;
                  n -= (c-b)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  i += (d+h*f-k)%100;
                  k -= (m*d-k-e+m+d-m+c+g*d)%100;
                  j -= (d-l*e)%100;
                  j += (a-c+d+h-m+l+e+i+a-b+f-n-m)%100;
                  h += (c+c)%100;
               }
               else
               {
                  f += (b*l*g-k)%100;
                  m += (l+k+c-i+a-b+c*e+g*k+h)%100;
                  a  = (j*b)%100;
                  j -= (i-f+c+g)%100;
                  i -= (i-c+d*k+n+c*j*b+l*c-k-b-n-a)%100;
                  e += (b+d-k-j-e+n-m)%100;
               }
               a -= (m*g-f-m+b-m-a)%100;
               f += (g-n+f-e*l-n-j*k*k-c)%100;
               i -= (d*f-j-g+l*f)%100;
            }
            break;

            case 2:
            {
               d += (b-l-e*i+g-k-g-f-c-i*i+n-n)%100;
               k += (k*j)%100;
               a  = (c*l-i+c-f-f)%100;
            }
            break;

            default:
            {
               g += (l*l-c)%100;
               j -= (l+i*c-k+m*m+n)%100;
               k += (e-k-j*a*a-b-g+g*a+n)%100;
               m -= (g*m)%100;
               l += (g+h)%100;
            }
            }

            m += (j-m*m-j-b)%100;
            h -= (d+k-g-a+d-i+e+n+l-i-d)%100;
            d  = (n+b*m+l)%100;
            e  = (n-b+h*i+g+i*a)%100;
         }
         break;

         case 2:
         {
            j += (n+b+f*c+f+i*f-k-c)%100;
            i -= (h-n+j)%100;
            k += (b+m-n*j)%100;
            e -= (d+d+i*h+i-k+i-l*m-b+l+b+j)%100;
         }
         break;

         default:
         {
            d -= (g+i+f-d*g-k)%100;
            b += (h-j*k*i+h)%100;
            k -= (d*a+b+e-m-k-n)%100;
            g += (d*j-i+f*l+d+k-m*c+j-k-i+d)%100;
            b += (i*i+k+k+f+d+h+h+e-j)%100;
            l += (e+l*h-d)%100;
         }
         }

         b -= (e*k+a-d+j-h+g)%100;
         b += (l+n*c+j-h+d+d)%100;
         h -= (e-e)%100;
      }
      d += (i+g+m-e)%100;
      l -= (e+k)%100;
      a -= (e+e+i*k-f+n-l-b+k+d+c-j+j)%100;
   }
   k += (j-i-n-k+n*h+a+a-m+h+e-d+k)%100;
   l += (m-m-k+a*k+m-g)%100;
   k -= (n*g+k+m+b+k-d+c+n+f-d-f*g)%100;
   a -= (n*c+g+n+j*a+e+k-k-k+d+k)%100;
   n += (g-k+n+b+g-b+k)%100;
   h -= (c+l)%100;
   g += (n+f*i)%100;
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
                  f += (b+i+i-b)%100;
                  j -= (m-k+n+a*m*h*m+h)%100;
                  h -= (m*m-m+m-k+f+i+e-k-h)%100;
               }
               else
               {
                  a += (n+b+f+k+n+k*h+b*m*d)%100;
                  j += (n-i-i*b*l+j-i*m+m)%100;
                  h -= (m-a*n-c+k-c-j-h-b+h)%100;
                  e += (d-k-e*i+c+m+k-d-b)%100;
                  g -= (i*g-l*b-c+d+g+n+h*m*c)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  e -= (e-a-e*j+e-f+g-k*k+d+k-m)%100;
                  a -= (f+e+d)%100;
                  n -= (e-m*a+h-d*n+e+l+l-c*c)%100;
                  m += (n-a-i-a+j*i+e-g+h)%100;
                  i += (h+a+k+n+c-n+i)%100;
               }
               do
               {
                  n -= (h+k-h+e-e-b-l+e+d-j-f*m-f)%100;
                  c -= (d-i+d)%100;
                  d += (i-h-c*f*i-f)%100;
                  m -= (k-n*c-b-g-g*j-n+d+e)%100;
               } while( ++DOcnt[8]%5 );
               if( ++IFcnt[6]%10 )
               {
                  k += (k-g+g+b)%100;
                  b += (b-e)%100;
                  b += (m+i+e)%100;
                  n -= (a+f-c)%100;
                  g -= (c+e-b*b+j+i*i*k*i-f)%100;
                  h += (m+l*c-c-k+n-n+m*i+h)%100;
               }
               j -= (d-h-e-n-i+b+g-i+j+n-i)%100;
               for( ; ++FORcnt[11]%5 ; )
               {
                  k += (b-h+i+h*f-b+f-e-c+k+c-g-n+c)%100;
                  l -= (j-e-k+a-l+h)%100;
                  k -= (a-c+d+h-m*d-h-i+n+c*c-n-c)%100;
                  m += (m+h+i*m+l+i-a-c-d+m-a+d-h-b)%100;
                  l -= (a-a-k*h+a*k*h*a*n-a*l+h)%100;
               }
            }
            
            switch( ++SWcnt[4]%3 )
            {

            case 1:
            {
               n -= (k+j)%100;
            }
            break;

            case 2:
            {
               c -= (h*i+c-g+g*k)%100;
               g -= (c*k+d+m*e+l*a+e*j+h-c-k+e-i)%100;
            }
            break;

            default:
            {
               e += (d+e+d)%100;
               c += (n+a+j-h+d-m*i+g)%100;
               i -= (l-j+g-b-c)%100;
               c  = (e-c+k+m-j)%100;
               i += (j-f*g-m+n-m-f*m+l-f+c)%100;
            }
            }

            l  = (e+c+c+n+f-h-i*d*l+l+m-d-m)%100;
            e  = (i-j-c-f+a-k-g)%100;
         }
         i -= (l*f-h+g-f-g+d*g+d-c)%100;
         e -= (n*a)%100;
         b -= (l+g-e)%100;
         b -= (a-f-d-i+f*n)%100;
      } while( ++DOcnt[7]%5 );
      c += (d+k-d*n-m+b+b+f)%100;
      k -= (h+d)%100;
      d -= (m-j*e+g+n-n+a*d+j*l)%100;
      n += (c+m*m*d+d-n*a+c)%100;
   }
   b += (c-g)%100;
   h -= (g-d)%100;
   d -= (d*l)%100;
   h -= (c+n+g)%100;
   c -= (h*m+e-c)%100;
   i -= (d-h*d)%100;
   l += (a-a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[11]%2 )
   {
      d += (g*i+l+e+d-h+f+f)%100;
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
                  b -= (j-f+k-c+a-j+m-j+m+d)%100;
                  c += (a-n+j*l*j+d*g+k-b+a-e-f*b+n)%100;
                  h += (i-i+j-e-c+f+g-i-e+i-b*d+c+f)%100;
                  n -= (i*n*g-b-d)%100;
                  e -= (k*j-j-j+j+d)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  k += (e-h+h-b*k-j-e+h+c-d)%100;
                  c -= (k+g-j+f*e+h*i*h-f)%100;
                  m += (a*c*m+f+g+k+e-n+g-f+e)%100;
                  m -= (a-d*g+b+a-a*d)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  b += (e-c-f+b*a+e+i-c+a*b)%100;
                  k  = (n+h-a+k-j-g*e-d+d*a+d)%100;
                  l -= (j-e-h*b)%100;
                  f += (b*m-f-i-m*a+h+e+m)%100;
                  i += (h-a-d+f*j+d)%100;
               }
               else
               {
                  a += (b+d-i+e)%100;
                  n -= (n+j)%100;
                  m -= (c-j)%100;
                  d -= (l-j+i+h-m-h*a+l-m+n+h+m-j*j)%100;
                  k -= (b+g)%100;
                  g += (n*l+b-c-l*m*f*k+b+i+a-d-c)%100;
               }
            }
            while( ++WHILEcnt[9]%5 )
            {
               do
               {
                  f += (a-k)%100;
                  m += (e-a-n-i+d+k+i-f*a*c-l-i-f)%100;
                  l -= (i+i+i+d-f+m-b+b*i-c)%100;
                  e -= (n-d+b*j+g+g-c*f-i+f-m+k-d)%100;
               } while( ++DOcnt[10]%5 );
               l -= (a+j+k*i+m+e+l*f-n)%100;
               for( ; ++FORcnt[16]%5 ; )
               {
                  d += (e-c-g-k+n-k*a+j+g-c+a-h)%100;
                  m -= (j*k*j)%100;
                  n += (g*e+h-k+n+a)%100;
                  a += (i-e-a*a-a+h-d+f-l-e-a-a+g)%100;
                  k -= (l+c+c+k+k*e+f*k-n-e*h+f-i)%100;
                  f -= (e+m-h-b+i-i*k-g*e*i)%100;
               }
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  k -= (k+a-a+b-b+i+n+h)%100;
                  j -= (d-n-f-f-l-h*e-k)%100;
                  d -= (l*k-a+j-d-g-c*d+h+k)%100;
                  f -= (b+m)%100;
                  b -= (d-k)%100;
               }
               break;

               case 2:
               {
                  h -= (a-g*j*l+h+g-c+f-f-n)%100;
                  e += (g+h)%100;
                  n += (f-m+m-l+k+a+k+m-m-j-b-n+b)%100;
               }
               break;

               default:
               {
                  j -= (e-e+a+g)%100;
                  g -= (l-e)%100;
                  h  = (c*a*h-n+f-n+a-i-c)%100;
                  b  = (k-k+i+e+k-d*c-f+e+f*k-c)%100;
                  m  = (n+d*n+e-n+b-h)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  g -= (b+g*k+l+h*k+i)%100;
                  n -= (m+l*i-a-i)%100;
                  m += (e+c+h-m-h-e+c*e-a-l)%100;
                  f -= (g+m-c-h*l*m*i+a+c-e*g+n+i-c)%100;
               }
            }
            if( ++IFEcnt[10]%2 )
            {
               f += (h+b-g-g+k*n-i+h+f)%100;
               b -= (e-d+d-a+m)%100;
               h += (i+m-f+e+e+c+l)%100;
               i -= (f*l*j*l*a)%100;
               n += (i-i-b*g*m*g-j)%100;
            }
            else
            {
               m  = (i-j-k+j*e+i+n-h*e+g+d)%100;
               e += (g+f)%100;
               g -= (g-g*d-d-a+b*c-i-g+m*a+j*j)%100;
               l -= (e+k+f*k+h+f-b*f*m-m+d-k+n)%100;
               g += (e+d+h-b-c-m*m*j+d+i-n-l*f-d)%100;
               g  = (b-j-c+l-k-a*e+m+k+b-a+l)%100;
            }
            l -= (d*k+i-i-l-m+n+l-j+e+g+d+n)%100;
            b += (g*c-m+b-g)%100;
         } while( ++DOcnt[9]%5 );
         i += (j+e+f*l*g)%100;
         i += (d+b*i+c*j+k-e*j*j-a)%100;
         f += (n-d-e*k*g-m+a-h-d-e+b*i)%100;
         j -= (g+c)%100;
         e += (n-l-f-b+n*n)%100;
      }
      a -= (j*g-h+j+l-a-g+g-i-a-l+a)%100;
      k += (b-m*i-k*i+d+h+c*g-g-f-a*k)%100;
      a += (b+n-n+m-c*e-n-k+l-l+j)%100;
   }
   c  = (g+m*b-b)%100;
   d -= (g-k-i-n+a-c*g-a+k)%100;
   n  = (e+j-f+a-f-e-e+i-a-l-l)%100;
   l += (j+a-b*a+m*e)%100;
   f += (j-f-l-a+a+c+g*h*k)%100;
   j -= (n+e-m*m-h-d-n-l*h)%100;
   g -= (d+l+l+n)%100;
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
                  k -= (b-f-g+f-k*g-c-k+j+g)%100;
                  a -= (g*e+n+i-n+m*b-c+h-l+n*c+e-a)%100;
                  c -= (k+i+n*g*g-d-f)%100;
               }
               else
               {
                  j -= (a*i-l+k-n+k-i+c*e*a-f)%100;
                  b += (f*j)%100;
                  d  = (m+i-l+d+l+e*g+i+j-i*h)%100;
                  h -= (d-e+j-a-j-a-m+n-d+k-d*h+j+b)%100;
                  l += (c-j-j)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  j -= (m-f-g-d-n+j*d-g-n+i+d-c-f)%100;
                  g += (f-c-b*f+i+g-e-h+l)%100;
                  a -= (d-n-a+l-j+c+a*c-l+m-f)%100;
                  e -= (n+e+f+a+k*c-c+h)%100;
                  h -= (d*e-m-k+h-m+g*b*l*g+e)%100;
               }
               do
               {
                  m -= (d+j-n-n*d+f+k)%100;
                  i -= (f+n+m-l-b+g-k-k-j)%100;
                  b -= (j-a-f+m+c-k+k-m+j-c-a+n-c)%100;
                  k += (k-h-n-n+n*f+i-d+d+a+e*b)%100;
               } while( ++DOcnt[12]%5 );
               if( ++IFcnt[9]%10 )
               {
                  j += (n-c*e+e+e*m)%100;
                  h += (c*c*a+n-f+n+b+k)%100;
                  i += (j-n-b-e-b-j+h*n+b*g)%100;
                  h -= (m-k+g-m+e-b-b*c*h)%100;
                  f += (a*e*l+j+n-m-l+a)%100;
                  g += (d*n)%100;
               }
               a += (n+n+k*e+h*j+e+m)%100;
               for( ; ++FORcnt[17]%5 ; )
               {
                  n -= (m-l)%100;
                  g += (j*m+k+b-c)%100;
                  m += (f*m+a-g-i+n-i+h)%100;
                  d -= (b+i*i+a*l+n-k+e+b)%100;
                  a -= (f-c*i+d+n-k-c-e+f*e)%100;
               }
            }
            
            switch( ++SWcnt[6]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[13]%2 )
               {
                  e -= (e-i-j+d+e-k-f+d+n-g)%100;
                  d += (g+a)%100;
                  m += (e-k+k-k+d+l*g-c*c)%100;
                  d -= (h*l-a*b*e+h-m-b+j+d-f)%100;
                  k -= (a*n+b+j+a+l+c+l+k+m-j+k+c+j)%100;
                  h  = (n+l-n+m-i*i+m+d*j+l*d-b)%100;
               }
               else
               {
                  h += (g-m+a*k)%100;
                  n += (c-j+j*l*m-l)%100;
                  l  = (g-m-e+n-j-f*j-j*m+j-f+n-l-a)%100;
                  c -= (i+n+g-m-a+g-f)%100;
               }
               while( ++WHILEcnt[12]%5 )
               {
                  h += (i-f+f-l-d+n)%100;
                  n  = (n-m+l+h*n+f-j)%100;
                  n -= (e*h-b+m-d-k+e+k*b+d-d*b*h)%100;
                  e += (h-f+f)%100;
                  g += (h-i-d+m+g+c-d-i)%100;
               }
               do
               {
                  a -= (e-e-m*d+g-e-b*k-m)%100;
                  i -= (c+e+b+i+n-b+g+g+m+g+i*g+k)%100;
                  a -= (d*k+h-h+k+d+d-k-g*m-l+k-h)%100;
               } while( ++DOcnt[13]%5 );
               for( ; ++FORcnt[19]%5 ; )
               {
                  k += (h*g+k+l-n+d-i-j-j-g-c-a-i)%100;
                  m += (i*a)%100;
                  g += (a+c-j)%100;
                  f  = (a-n-e-j)%100;
                  k -= (c+b)%100;
               }
               l += (e+g-a+n-l-d-c-m-e-l*d+k)%100;
            }
            break;

            case 2:
            {
               m += (g+k+k-c+e-c-b+m)%100;
               h -= (a+c+c*e-e*g+c)%100;
               f += (g+c-b+k*j+k+l*l*m*b*j+l+n+f)%100;
               j -= (n+d+b-k+k+l+m)%100;
            }
            break;

            case 3:
            {
               k += (j+j+b+m+m+f-a+g+c*b+l*e)%100;
               f -= (k*g-f+f-f+g-l-d+i)%100;
               d += (m+i*h+h-m-h*j*n+k+i*g-c-d+e)%100;
               l += (l-h+d+c+c-b+j-a+g-f-i)%100;
               m  = (e*c-k-c-e+m+c-g-j*f-l-e)%100;
               f -= (c-n-i-i-f+m+j*l+g+b-a+i)%100;
            }
            break;

            default:
            {
               j += (f-g)%100;
               a += (m*b-g-g+i-g)%100;
               e += (g+e*l*i-a*h-f)%100;
               e -= (m+h-f*c+h*f+h-l+h-b-k-m-c+g)%100;
               j -= (l+d+h+l-m+g-j+b+e*h)%100;
            }
            }

            c += (i*n+c+k)%100;
            a  = (b-c*d+m-d-i*j-n-b)%100;
         }
         a += (g+a-f+i-i*c-c-l*k-c-i+k+c)%100;
         a  = (d+a*n*b+k-f-h-n+g*d+e+n)%100;
         j -= (b-c*g-j-l-m-m*l-k-i*e+i)%100;
         h += (b*h*a-f+d*j*l+i+g)%100;
      } while( ++DOcnt[11]%5 );
      f -= (j*d-d*f*b*l*j)%100;
   }
   g  = (l*a-l-b+c*f*c+c+c)%100;
   f -= (a+h-l-b)%100;
   a += (e+c-e+a-b-k*m-n+j-c-k+j-c+m)%100;
   g += (h+i+a+d*c+n-j+b-h+i*c-d)%100;
   f -= (b+b+k-n*c+j-i+h*c+n-e+h)%100;
   d += (n*g-e+c-g-i+l-l+a)%100;
   k -= (k-e*i)%100;
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
            h -= (k*f+m+l*i+i+e+c-k+g-e-g)%100;
            g += (b-a+b+c+k-h*l*h+e)%100;
            c -= (f-i+i+g*m-d+g-b-l-f-j*i+h)%100;
            l += (l*j-g-i+b+e+j+h)%100;
            e -= (k*l)%100;
         }
         else
         {
            while( ++WHILEcnt[14]%5 )
            {
               do
               {
                  c -= (b-k+h-g+f-f*d-l*g)%100;
                  b += (j+a-l-c+e+m+c-m*h-i-f+a*g)%100;
                  a -= (a-f*g-h+b-n+d+m+g-f)%100;
                  g -= (b+l-d+n*j+e-n-e-f-a*k-c+i)%100;
                  c += (a+c+i+c*b+c-l*n+j)%100;
                  j += (m+j+c*h-m)%100;
               } while( ++DOcnt[14]%5 );
               i -= (n+l)%100;
               for( ; ++FORcnt[21]%5 ; )
               {
                  n -= (i*i)%100;
                  g += (g+g)%100;
                  j += (i+e)%100;
                  c -= (n+k-m+a*h+g-d-h*m-k*h)%100;
                  i -= (f+a)%100;
               }
               
               switch( ++SWcnt[7]%3 )
               {

               case 1:
               {
                  n -= (n+i+b+m-a+n*b-g*c+f*m*f+n)%100;
                  c -= (k*a+h+k)%100;
                  n -= (b*n*c-c-c-c*f-h*k+c)%100;
               }
               break;

               case 2:
               {
                  f -= (k+i+e+m)%100;
                  k += (c*j+g*b+l-c+g-j+a*f*a)%100;
                  n += (d*e*k+m-a*i+g+l+m+i-a+h*h)%100;
                  n += (a+c-e+b*c-k-b*l-f-h)%100;
                  k += (n-m*k)%100;
               }
               break;

               default:
               {
                  d += (b-g-i+m-n+k+j-d-a)%100;
                  i += (f-a)%100;
                  d -= (l+e+k-h-h+g)%100;
                  n += (l-c+e+a+k-h-h*a-l*e-l+i-b+g)%100;
               }
               }

            }
            if( ++IFcnt[10]%10 )
            {
               if( ++IFEcnt[14]%2 )
               {
                  c += (h-h)%100;
                  h += (k-k-m-m+d-a+d-e)%100;
                  f  = (b-c-l-i+h+k)%100;
                  m -= (m-j+e)%100;
                  n += (k+i+i+e-n*h+i+g*b+i-j)%100;
               }
               else
               {
                  d -= (a+b)%100;
                  h  = (k+b+l-g-k+l+f+e-h)%100;
                  d -= (j*i+n+a-a+c*a-b-a*i*f)%100;
                  a -= (k-i+b)%100;
                  l -= (g-f-l+e)%100;
               }
               while( ++WHILEcnt[15]%5 )
               {
                  f -= (a+a*j+i+n+m*a)%100;
                  j += (j*e*m-b+l+c+l+a-c-h-c+a-j-a)%100;
                  h -= (b+i)%100;
                  h -= (n+c-i+j*a-e+a-a*l+a-e)%100;
               }
               do
               {
                  l -= (c+l-k-g-b+k+a*f+g-e)%100;
                  n  = (m+g)%100;
                  j -= (h*f+n-n-b*d)%100;
                  i -= (d-l*k-l+i+e)%100;
                  l += (e+k+j+e-j-m+b+e-e*k)%100;
                  e += (k+i+m-b-l-b+j+d+e-l+f-f-c+f)%100;
               } while( ++DOcnt[15]%5 );
               b -= (a-k-h+k-i*c-m*c*b+e-b)%100;
               h += (n-g+k+k-d+g+c)%100;
               d  = (l+f+k+m-m*i-i+e+c+m-n)%100;
            }
            e -= (h+k*c+j-j*c-g*n+c+a)%100;
            a += (f*f-f+k-e-c*n+m+d)%100;
            n -= (j+b)%100;
         }
         i += (m-m*h-c+l-c*c*c+j+h-m+d)%100;
      }
   }
   f += (a*d-e-h-c-g*g*d)%100;
   f  = (c+e+n*g-b+n+f)%100;
   b += (d*a)%100;
   h -= (l+b-b-d*m+f*e)%100;
   n -= (a*c*f-h*f-i*l-i+k-k*j)%100;
   e -= (k+h-i-a+m+a-k-c+n*j)%100;
   f += (e+g)%100;
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
            m -= (f-h+f)%100;
            f += (g+a-c+m+m)%100;
            k -= (k-j*d-a+a+f)%100;
            c -= (d+k)%100;
         }
         else
         {
            while( ++WHILEcnt[16]%5 )
            {
               do
               {
                  l += (f-c-d-b*b-l+d+g*h)%100;
                  i += (d+c+a+c+k+f-a*m+g)%100;
                  j += (f*g+f+d*c)%100;
                  d -= (d-e-d+i+c+d+g-i+a-d+e+m-m+m)%100;
                  h -= (g-b+k+k-l)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  l += (d*e+l-l+d-c-m+a+m-i+d*b)%100;
               }
               n -= (m-m)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  g -= (b*m)%100;
                  m += (l+i)%100;
               }
               
               switch( ++SWcnt[8]%3 )
               {

               case 1:
               {
                  b -= (d*m)%100;
                  k -= (d+i+i+e+d*m*h)%100;
                  j += (b+n-f)%100;
                  h += (g+m*k-b*h-c-l)%100;
                  g -= (h-a*j+b+k+k)%100;
               }
               break;

               case 2:
               {
                  n  = (l-k)%100;
                  n -= (a+k*n+a-d+m+a*n-a+f)%100;
                  c += (j-i+a-b-l-d+f+g-k*c+m+g-m)%100;
                  h += (i+b*n)%100;
               }
               break;

               default:
               {
                  i += (n*n)%100;
                  d -= (l+f+i+h-c*m*g*h+c*l-c*i*n+a)%100;
                  h += (a*k+m+f+c)%100;
                  k += (m+d+e*g+h-f+n)%100;
                  e += (k+l-f*i*d-n+a+c*k*l-e)%100;
                  g  = (a+k+b+j+a+e-j+f-h-f)%100;
               }
               }

               if( ++IFEcnt[16]%2 )
               {
                  j += (f-i-h-c-f*i+f+d*a-m)%100;
                  n += (l*i+c-n+g-e)%100;
                  e -= (n-l-j-f+f-d+m+k-c)%100;
               }
               else
               {
                  i += (i-l)%100;
                  c -= (j-g+b*i*j-l+f)%100;
                  e += (m*b-e-a-d+l+g)%100;
                  a -= (m-f+g+f*f+n+f*j-l+c)%100;
                  h -= (n+f-m+d+b+g-b)%100;
               }
            }
            while( ++WHILEcnt[17]%5 )
            {
               do
               {
                  k += (i*n-a)%100;
                  i += (j-g+k*k+h-f)%100;
                  f -= (d*l-a-n+e+j*e+a*h*n-j*m-l-k)%100;
                  e -= (l+i*d+g)%100;
               } while( ++DOcnt[17]%5 );
               for( ; ++FORcnt[24]%5 ; )
               {
                  d -= (g-a-i)%100;
                  j  = (c-c+h+b)%100;
                  g += (k-n+a-c-f+d-d-d-c+c-h+d)%100;
                  j += (l+g+n+m+j-b*m*d+j-c*g-l*a)%100;
                  e += (e-m)%100;
                  d -= (e+l+m-k*g*g*d+m+e)%100;
               }
               if( ++IFcnt[13]%10 )
               {
                  g += (h-c+n*g*l-m*k-b+a-l-g+m*i+g)%100;
                  k += (d*l*k+c*c+j+d*d-c-e-e)%100;
                  h -= (e+i*e-e-h-c-m+c-g-n*c)%100;
                  c += (j*g-d*d)%100;
                  n += (d-c)%100;
               }
               for( ; ++FORcnt[25]%5 ; )
               {
                  i  = (g-d-a-i+j+g+i-e+j-m-m*m*m)%100;
                  h += (e*m*e-e*c-m-f-j+g+k*b*g+i)%100;
                  a += (l*h+c)%100;
                  m -= (d+f-m*c-c+h+e)%100;
                  i += (j+l-k*b+e*n*d)%100;
               }
               n -= (b+h)%100;
            }
            m -= (g-m-c+i*h+k+h-c+d+l+a)%100;
            d -= (a-d-n+c+f+b-k)%100;
         }
         n += (a*n+k-h+g*k+b*c-i+a+b+a-i+l)%100;
         n -= (n-f*e+d*n-g+k-a)%100;
         n -= (c+d+e)%100;
         d += (d*f-m+e-d+b+a)%100;
      }
      i -= (f+l-n-h*c+h+e+i-b-k-c-h*a)%100;
      l += (n-f)%100;
   }
   f += (j+k+c-k*n-h)%100;
   m += (e-g*c-f+m*m+e*d+m)%100;
   j  = (f-e+n-b+l-a)%100;
   i += (i-b+k+k+k*e-l+h-a)%100;
   n  = (h*e-b-h-e*n+e*a*h+k-m+i*d*h)%100;
   j -= (c-h+n-j+c+i-c-d+f*h-g)%100;
   f += (c*c*j-e-i-m-b-a+j*j-h*k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[20]%2 )
   {
      j -= (e-b+h*c-n+a+f+h*f-k*k)%100;
      f -= (n*n+j-j*h-d+e+d+g+n*f)%100;
      m  = (b*l-a+b)%100;
      g  = (d-j+c+c-l*f+k-b-m+h*d+h+f)%100;
      a -= (b-j*i+h+c+m*h-l-d-l+n*j)%100;
   }
   else
   {
      while( ++WHILEcnt[20]%5 )
      {
         do
         {
            e -= (b+f-n-e*k-f*h+i*d*g-k+e+j-l)%100;
            for( ; ++FORcnt[28]%5 ; )
            {
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  k += (k-i+b-g+k*d)%100;
                  b -= (m-a+l)%100;
                  b -= (e+k+a)%100;
                  h += (e+h+h+b-n-k-l-c)%100;
               }
               break;

               case 2:
               {
                  j -= (h-i-i*f-h)%100;
                  g  = (m*l-n-f-g-n-l-g*i)%100;
                  i -= (i*h)%100;
                  g -= (b*l+n*m+j)%100;
                  m -= (g+j+c*d-m-f-n)%100;
                  h -= (f*g+f-g*j*e-n*c-a)%100;
               }
               break;

               default:
               {
                  l += (f-a-e*k-n-k-a)%100;
                  c -= (f-k+g+m*b+g+n+f-c+e)%100;
                  d -= (d*g-d-n*i+f)%100;
                  b += (k*a-b+f-e-j-i+f-n*h+n+l-d)%100;
                  a -= (l+a-n-b+a+e-k)%100;
               }
               }

               if( ++IFcnt[14]%10 )
               {
                  e += (n+c)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  b -= (d+d-c)%100;
                  d -= (a*i+i)%100;
                  f += (a+g-l-f+h+h-l-n*m-l+b)%100;
                  j += (h-e-k*a+e-h+m-f+i-a+g)%100;
                  k -= (h*d-d+n+n-l+b-h+c)%100;
               }
               else
               {
                  e += (d+d-a*j*h)%100;
                  b  = (i-e)%100;
               }
               while( ++WHILEcnt[18]%5 )
               {
                  g += (g-h-c-d+j-h*i*a-e-d)%100;
                  e -= (l+f)%100;
                  b  = (l-d+j+a)%100;
                  i += (f-j+m+n*g+a)%100;
               }
               do
               {
                  g += (f+b-m*i+n)%100;
                  e -= (d-k*i+j*c-c*j+a+g+i+c)%100;
                  e  = (g-g-d-c-b-i)%100;
                  m -= (m-h+a+h*g*d-e+f-i-l-m)%100;
                  e += (h-f-m+n*d-n*g*d-h+e+f*h)%100;
                  b += (m*n*l+j-m*b-n-j-l+a+j-f-g+m)%100;
               } while( ++DOcnt[19]%5 );
            }
            for( ; ++FORcnt[30]%5 ; )
            {
               for( ; ++FORcnt[29]%5 ; )
               {
                  i -= (m*b)%100;
                  g -= (g+e+d-h-l)%100;
                  j -= (l-e-m+c-n+c-h)%100;
               }
               if( ++IFEcnt[19]%2 )
               {
                  c -= (g-b-i*e+f+a+l+g-d-e*k+h)%100;
                  m += (l-c+k-l-g-b-n-h-f+c-e+g+g)%100;
                  e -= (n-f-n-g+e+l-f-n-j)%100;
                  d -= (d+h+j-c+k*c+n*f+c+c+k+f)%100;
               }
               else
               {
                  h -= (m-h)%100;
                  c -= (d*j+j-e+a+b-a+j*f*j+f)%100;
                  l += (j-d*i-m-c+i*c-h+h-d+e+b+c-d)%100;
                  b -= (f-m)%100;
                  a += (j-h+b+e-a-l+m)%100;
               }
               while( ++WHILEcnt[19]%5 )
               {
                  h -= (i-c*i+j-l)%100;
                  f -= (f*d)%100;
                  h -= (n*a)%100;
                  a += (a+d+n+e+g*h-f*j*h-m-b+f-g+a)%100;
                  f += (c-f)%100;
                  c += (j+l+e-l*i-a-b)%100;
               }
               c -= (a-g)%100;
               i -= (h-b*k+m+j*k-a-c+n*i-g+n)%100;
            }
         } while( ++DOcnt[18]%5 );
         h += (c+f-l*l-m+k-e-n)%100;
         j += (i+f*d*i-e+b*j-e-j+j-i)%100;
         m += (h*d-j+c-g+i-c+j+i*e+c+b*c*h)%100;
         b += (f-j-i+n*l+n+f-l+h+i)%100;
      }
      m -= (i-i-a-l-i-m-c-f+f-l)%100;
      n -= (d-j*d*k*f+c+f*n*a-n-n)%100;
      b += (n-h+h-f)%100;
      f -= (e+l*b+m-a+k-i-l+b-h*k)%100;
      b -= (f-g-m*g+c*d-i+a-k-c-b-k+l+j)%100;
   }
   c += (d+i)%100;
   e -= (f-k-n)%100;
   k -= (l+m*m+k+a+b+c+b-e+h)%100;
   i -= (i+k-k+a+k*e*n)%100;
   e += (f+i)%100;
   c -= (k+g+k*n+c+h)%100;
   d += (i+i+n-e-d+e-d+d-b+m-j-i+d)%100;
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
         h += (j+k+h+i-k-n+l+k)%100;
         for( ; ++FORcnt[33]%5 ; )
         {
            
            switch( ++SWcnt[10]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[21]%2 )
               {
                  d  = (g-j+n*l+n-d)%100;
                  m -= (d+n+m+b*e-n*k-n)%100;
                  j += (d+m-n-j+f-n+f)%100;
                  l += (j*h-b-c*n+m-d*d+n-j-m)%100;
                  k -= (n-k-d+e-c-g+b-j+l+j)%100;
               }
               else
               {
                  e += (f*h+i+h+j-n)%100;
                  b += (m+d)%100;
                  a += (i-a-f*f+d-f-n+d+k+l*a+f)%100;
               }
               while( ++WHILEcnt[21]%5 )
               {
                  g -= (f+i-e+m*f+i+j-f+f*a-g)%100;
                  f += (n-a*m+k-e+b+m*e*a)%100;
                  d += (i+b+e+d-n-c)%100;
                  d  = (f*h+j-a*b)%100;
               }
               do
               {
                  b += (m+b-g-n-f*a-k*g-k*m)%100;
                  a -= (l+d-m-n+f+d+d+j*b)%100;
                  d -= (c*a+h-a+f-a+j*a)%100;
                  m  = (g+f-h+e+h)%100;
                  a -= (i-f)%100;
                  e += (d+h-n-j-c+c-k)%100;
               } while( ++DOcnt[21]%5 );
               for( ; ++FORcnt[31]%5 ; )
               {
                  f -= (n+m-m+l+m)%100;
                  b += (h*h)%100;
                  n -= (f+f+d-g+e+k+e-b+j-k)%100;
                  d += (d*e-a+j*g+f-d*k+g)%100;
                  h += (b-f-k-d+f-b*d+i-c+g*d)%100;
               }
               if( ++IFcnt[15]%10 )
               {
                  n -= (b+b+a-m+k+a-d+e+l+f*h-g-k)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[32]%5 ; )
               {
                  h += (l-m-m-k-i+e+c)%100;
                  h += (n*g-f*l*m+e)%100;
                  c -= (a*g)%100;
                  e -= (d-i-i-c-e-g*c*e)%100;
                  i += (b-h-a-n-l-h-n-n-d*k)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  d  = (h*i-h+g+g+e*g*m-c-c+m+n-l-f)%100;
                  h -= (n+n+m*j+e-h+n+i+f)%100;
                  e -= (h+l-a+k-n*a-j-a*i+m+m)%100;
                  g += (d-e+e+f-f-d-f+h+e-k*h+e)%100;
                  h -= (g-m*f+g-b*i+f+j+i+i+d-c*l)%100;
                  e += (i+b+j+e+c-f-g)%100;
               }
               else
               {
                  g += (g-g-g+c*e-m-e-g*l*l-g+j)%100;
                  g += (g*a+f)%100;
                  e += (c*g)%100;
                  j += (c+e-f+n-e-l-k*d-c*j+m-c)%100;
               }
            }
            break;

            case 3:
            {
               while( ++WHILEcnt[22]%5 )
               {
                  j -= (m-g+f-f*k)%100;
                  k -= (g*l)%100;
                  d  = (k*c+f*l*n*d)%100;
               }
               do
               {
                  l += (m+e+k-j-d-a-h+d-h)%100;
                  k += (a+k+d-n-f-n-g*d+f*j+n)%100;
                  j  = (d+g+e-a*g*c+l-k*l-m-f)%100;
                  k += (m+f-l-j*m*b+j)%100;
                  k -= (l-e*a+b-k+b*k+a+c-i+l+l-d)%100;
               } while( ++DOcnt[22]%5 );
               b += (i*c*a-l*m-m*j+g-f+c-a-j+h)%100;
               b -= (h-n+j*l+i*i+a*a-f)%100;
               k += (k-i-b+b)%100;
            }
            break;

            default:
            {
               m -= (m-j-c+b-h+a*c)%100;
               m += (n*j+k*j+a+c-b+a-m+e-j+k-i+f)%100;
               g -= (m-k+c)%100;
               m += (e-d-k+b+d+l+d-i+k)%100;
            }
            }

            j += (k-i*e-e+m*c-a-n)%100;
            l += (i-h*j*f-k+k+d+h)%100;
            g += (g*n+e-n*b-m*h*k-j)%100;
            k -= (h+a-f-b-k-g-g+h)%100;
            h  = (c+b-e-m-h+d*n*i)%100;
         }
         d += (e+a*i*c+f-e-n*e-f*c-g*l-c-h)%100;
         b -= (g-d-n-b+b)%100;
      }
      j -= (i-g+k-l-a+j*k+m)%100;
      l += (i-d+f*k-n*m+c)%100;
      n += (k+a)%100;
      k += (b-g+c+n-d-a+d+m-l+a*h+a-j*e)%100;
   } while( ++DOcnt[20]%5 );
   b -= (f*a)%100;
   h += (k-e-f-h-m+e+f-i*m+n*a-a+c)%100;
   a  = (d+a+l*j+j+g*j+c-d+e-b+e+c-i)%100;
   i += (l*c+j+l-b+h+m-d-a)%100;
   a += (c+i+f+h*l+d-b*h+b-j-a*k-k*c)%100;
   g += (k+c+h+k*c*l+a-i-e+b-a*k-h)%100;
   h  = (l-d-g+e+m+m)%100;
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
                  k -= (h-k*e+d+i+h*h-i-c*i*n-h)%100;
                  f -= (h*n+j-a+a+m-m+d+f-h)%100;
                  e -= (e-l+n+c*n-i-k*l+g+m)%100;
                  g -= (j*i)%100;
                  h -= (g*b-c-d-n-b+n+i)%100;
               }
               else
               {
                  n -= (i-k+g+l+m*n+d+g+l-c+k+l+k-k)%100;
                  d  = (e+l-j*f-b+a+l)%100;
                  f -= (f+g+j+i+k*f-h+e*a)%100;
                  f += (j*a-l-l-c-f-k+m+d)%100;
                  j  = (j+h-b-j+b-n-i+i)%100;
                  i  = (f-i-n-d+g-l)%100;
               }
               while( ++WHILEcnt[24]%5 )
               {
                  h += (d-j-i-m-f+e-f*h+j+j-b+c)%100;
               }
               do
               {
                  j  = (h+f)%100;
                  n -= (k-n)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[17]%10 )
               {
                  d += (a-m+k+n+c*g+g-j*g*i)%100;
                  m += (b-n)%100;
                  k += (l*j+c+d+f-d-i+m)%100;
                  n -= (k*c)%100;
                  g += (h-h)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[23]%5 )
               {
                  m += (i*i+g+b*a)%100;
                  b += (m-g-f+e+g+i+b+l-j+n*f+h+i)%100;
                  j  = (c-m*h-g+e-f+i+f+i+a+m+c+k*b)%100;
                  g += (i+d*i)%100;
                  a -= (g-j+a-a-h-h*l+i)%100;
                  g  = (i*g*c)%100;
               }
               do
               {
                  m += (h-h+g+a)%100;
                  i += (e-e+l+d-k+c-a+n+n+n+e)%100;
                  d -= (g-g-a+d)%100;
                  b -= (c+m*a+b+j+m-b-m+a-m)%100;
                  m -= (i-l+a-m+b-f+b+h*d+n+e-m+j-g)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  a += (l+c-n-g+j+i-g-f)%100;
                  m += (n+a-a-e-k-b*e*i*g-l-l+c)%100;
                  h += (b-i*c-g+g-k*l+e-m)%100;
               }
               for( ; ++FORcnt[35]%5 ; )
               {
                  e += (j+m+d+f-c-i-e+d+n+h-g)%100;
                  e -= (h-f*j*e*m*j+i-f+g-d-h)%100;
                  h += (b-g-b-j-m-a)%100;
                  m -= (d+k*f-l+c-a+c-f-i*n+a-d)%100;
                  e += (i-n-g+g+a+d+j*i-j*n-c+n-i)%100;
               }
            }
            i += (m+a-e*k+n*j+a-h*e+i-b-d-h)%100;
            for( ; ++FORcnt[36]%5 ; )
            {
               
               switch( ++SWcnt[12]%3 )
               {

               case 1:
               {
                  e -= (i-d+l+g+c-j-g-e+i-c)%100;
                  a += (n+f-h-f*j-h-n*k+k-k-f-f)%100;
                  e -= (d-e)%100;
                  g -= (k*i-j-i-l+d*j-k*f)%100;
                  m += (n-c)%100;
                  g -= (d-l+e+i-g-g*d*e*e-e*l*e+f)%100;
               }
               break;

               case 2:
               {
                  c += (f-c-m-c)%100;
                  b -= (f-f+h+c+n-c+l*n-n)%100;
                  f += (n+c-n*b*f*d*l-e-m+d)%100;
                  b  = (d+k-c*k-n-j*b+m+n-h+m+h*a)%100;
                  m += (i+c-a*g-k-g+k-b-e)%100;
               }
               break;

               default:
               {
                  b += (m-e*h+h-f-n+k+d-n+c-b+c+n+j)%100;
                  k += (c*c-k-a+m-b+a+k+h+b*k)%100;
                  f -= (i+l+n+h-f-n+h-b*f+c)%100;
               }
               }

               d += (c-k*g)%100;
               k  = (a-e+b-j-g-j*f*h-j)%100;
               h -= (i+c+d-f+g*l*n*g)%100;
            }
            d  = (d-k-l+c+a+j-j-c-e+b-g*m-b+g)%100;
            k -= (f+a*g)%100;
         }
         f += (a*a-h-i+a+j+k-b*i+d)%100;
         i += (i+m-h)%100;
         l -= (j+j+l-j*b+n+j-h*i*c-m)%100;
         i += (f-c)%100;
      }
      break;

      case 2:
      {
         c += (m+k-k-i*m*i*l)%100;
         e += (l+g-d+e+j-h+h-b-k+i-d*b)%100;
         n -= (j-d)%100;
         e += (c-a)%100;
         n += (l+n-d-n+f)%100;
      }
      break;

      default:
      {
         f += (e-f+i+n-k-a+f+e+k+n+j-i-a-m)%100;
         j += (l+m-i*c-g+g*b+d)%100;
         f -= (h-m+l)%100;
         g  = (i+i+f-h-l*f)%100;
      }
      }

      j += (a-c-k)%100;
      h += (f+k*a*d-b+g*c-g-l-a-e+l)%100;
      f -= (n+j-e*g*g*i+k-h)%100;
      m += (f-b)%100;
      j += (h-i*a-l-n+b+m*b*n-g+n+a*e+f)%100;
   }
   k -= (a+k-n+b*j+a)%100;
   m -= (a+i*n)%100;
   i -= (c+f-c-m*f+c+h+i+d-h)%100;
   b += (d+l-d-j)%100;
   m += (f-j-h+m-e+j*l+j-n)%100;
   a -= (j+g+n-i+n*b-i*a*g*k-i-e)%100;
   d += (f-n+f+c-b-a+e+c-e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[26]%2 )
   {
      g += (g+n*e)%100;
      e -= (d+h*d+d-m*e-d*i*g+f)%100;
      b -= (a+f*c+n*n-a-i-a*f*e+j)%100;
      d += (j*f+f*m-d+m+a-f*k+c)%100;
      l += (g-l*e-c-i-n+d*l+m-l-d*d-g)%100;
      g -= (i-a*c+g*f-a*a-g+b+e+l-h)%100;
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
                  j += (l*b-m-g-h+f*m-k*j+e+e*h)%100;
                  f -= (f-d)%100;
                  b -= (g*g+k+b-l-e-b*m)%100;
                  m += (g-a+f+i+k-c-g-m*n-c*j+n*j*f)%100;
                  b += (g+i-l-j*g)%100;
                  i += (l-b)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  k += (j*k*m-e-a*h+i-l+m-e)%100;
                  g -= (e-k+e-f+c-b)%100;
                  a -= (b+l-c+l-i+m-f-m-e-a*d*c-n)%100;
                  i -= (j*d+j)%100;
                  b -= (c+j-i+n-e)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  f -= (e-n+g*m*n+d-i-f-c+h*f)%100;
                  b += (g-j-i+a*k+l-f-m*a+a+l+g)%100;
                  d += (d-m-g*l+k*j+c+e-b-d+m-f+f)%100;
                  e -= (i+l-i-k+e)%100;
                  m -= (n+i-k*e+l+h*h+g+m*b+g*i)%100;
               }
               else
               {
                  k -= (f-e)%100;
                  n -= (i-e-k-f-e-j)%100;
                  m += (a+c-n*k+e-c-f+g)%100;
               }
               while( ++WHILEcnt[25]%5 )
               {
                  b += (j-c-e+j-i+n+f-e+l-h*i-m)%100;
                  h += (d*j+i*g)%100;
                  c -= (c+j-b-b)%100;
                  d += (n-b)%100;
               }
            }
            do
            {
               f -= (l+c+h-g-f-d+a-m+k-b)%100;
               for( ; ++FORcnt[40]%5 ; )
               {
                  j -= (n+i*g-c-a*e-i+j+h+c-c-e+g-h)%100;
                  g += (n+d-i-b*h-a)%100;
                  a += (g-f+e-i-m*e*f-f-g+n*d+b-g-m)%100;
                  l -= (m+g-l+n)%100;
                  f -= (h-g-i-c+d-h*h+l+m*a)%100;
               }
               
               switch( ++SWcnt[13]%3 )
               {

               case 1:
               {
                  e += (i-d)%100;
               }
               break;

               case 2:
               {
                  n += (k-f*c-l+l-f+k-g*h-c-j+n)%100;
                  a += (d*h*b-e*h)%100;
               }
               break;

               default:
               {
                  l -= (j*c+b)%100;
                  l += (m+f*i+m-c+a+a*m-f+h-b*h-b+f)%100;
                  h -= (d*a-i+n-d*i+i)%100;
                  i += (f+a-j+j*d+k-g*k-h)%100;
                  f -= (f+m)%100;
               }
               }

               if( ++IFcnt[20]%10 )
               {
                  l += (h-c)%100;
                  d += (f-g+k-l+k-c-l*m+c-a-i*j+c)%100;
                  g += (n+a-m*k)%100;
                  f += (m+i-g+d-b)%100;
               }
               b += (j+l*c)%100;
               c += (l+e+k+b*b*n-d-h)%100;
            } while( ++DOcnt[26]%5 );
            d += (k-g-k+g+j+f*f*m-g+b)%100;
            m += (m-m+l-h-j+c+c+e*m-n+g*h)%100;
            i += (n+m)%100;
         } while( ++DOcnt[25]%5 );
         d += (b+k+l+l-n-j+n-d)%100;
         b += (a+g+k-f+b+d+j+h-e+h)%100;
         h += (n*b)%100;
         l  = (i*i+d+c-c*b-g-c)%100;
      }
      i -= (b+c+g+c*f*j)%100;
      h  = (c+d+e)%100;
      n -= (n+d-l*a+h-b+b-h)%100;
      n -= (a*k-c*k+e*a+b)%100;
      j += (l+g+m+a+h-c-d+d+k-h+b)%100;
   }
   j  = (e-l*b-e-i+g-j+m+h+f-k*n+d-j)%100;
   f -= (d+k*j)%100;
   c  = (f*l-h+d-k*f-b)%100;
   e += (i-i*a-k-m*n-e-b*a-h-f)%100;
   f -= (e-f+e*e)%100;
   h += (g*m+g+a+c-f*c+e+f+n*f+k+e)%100;
   e -= (j-d+j*m-d*a+g*i-j-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F13(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[29]%2 )
   {
      d -= (d*f)%100;
      c  = (f+h+f-e)%100;
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
                  k += (l*e+e-f*n-k*f-k*j-j)%100;
                  j -= (n-e*g+m+g+e*i+l+e*i+n+a)%100;
                  i += (i-h+l-b-b+c-a+m+i-n)%100;
                  c -= (l*i-f)%100;
                  i -= (h-h*n-l-c-a*j*c)%100;
                  c  = (m*b+m-f)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  a  = (i*h*l*i-n-e+h)%100;
                  h += (a*n-d*g+j-i*c+e-c)%100;
                  n -= (i+f+g*j+f)%100;
                  f += (b+k*e+a+n+b+c+g)%100;
                  k -= (e+l)%100;
               }
               else
               {
                  c += (g-d+f*d-k*b+h-d-n+h*j+c-d)%100;
                  h += (k-f*m-d*d*f*f-h*m+b+e-k)%100;
                  d -= (j+n+j+e)%100;
                  j -= (n*e-j+n*k*l*g+k-l+f-i+k)%100;
                  g += (e*c-k-l+l+g+g*c-h+j*j-i)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  b += (f+l*i-l+e+e)%100;
                  l += (a-e)%100;
                  h -= (i*n*h+b*j+e-j*l-j-m+h-f*h-k)%100;
                  j -= (f+g+e-a+g)%100;
               }
               do
               {
                  c -= (b-e-h+l-m*e-a-j-e-d*c)%100;
                  a  = (m*l)%100;
                  a -= (l-h-g+b-e*j-a+i-g+c+k)%100;
                  h -= (d+h+d+d+h-j+k*l-e*e)%100;
                  a -= (h-e+k+a*b-l-c-j-d-i)%100;
                  m -= (m+a+f-h-g)%100;
               } while( ++DOcnt[28]%5 );
            }
            if( ++IFcnt[21]%10 )
            {
               h -= (h+l-d+m-k+n-h+a+f-m-f*c)%100;
               for( ; ++FORcnt[43]%5 ; )
               {
                  f -= (j*m*f-a*e*h-c*c+a*j)%100;
                  n -= (l+a-g*b-i-d)%100;
                  h -= (a*c*g+h+e)%100;
               }
               
               switch( ++SWcnt[14]%3 )
               {

               case 1:
               {
                  a -= (j+b*f)%100;
                  i += (a-i-b-k+g+m+h*c+e-j+d+i-f-e)%100;
                  c -= (f+g-i)%100;
                  l -= (g+h-c+g+c+g)%100;
                  c -= (l+a+k+f*e+n+j)%100;
               }
               break;

               case 2:
               {
                  c -= (f*a+l*b)%100;
                  f += (f*n+j*e+d)%100;
                  h += (i-e-b)%100;
                  k -= (j*a*e+f-k-j+e)%100;
               }
               break;

               default:
               {
                  g -= (b-m*g+e-a-k-i+n-m-h+f+c)%100;
                  g -= (i+d-c)%100;
                  n += (a-l)%100;
                  m -= (d+e-h+n+e+n-m+c*m+g)%100;
                  k -= (l*a-d-n*d-m-b+h-g-h*j+e+b)%100;
                  n  = (d-e*c*g+e*n-h*e+m-j+b*m)%100;
               }
               }

               if( ++IFEcnt[28]%2 )
               {
                  i -= (c*j+i-i-i*c)%100;
               }
               else
               {
                  b += (d+l+f*i-n+m)%100;
                  k += (b+n-b)%100;
                  a += (l*n+i-g-l+k-c+h+e*e-e)%100;
                  h -= (i*i-b+j-m-f+g+j+l-k+l-j)%100;
                  d += (m*g+c*a*j+k-c+m-m*k*m+f-d-e)%100;
               }
               m  = (d+m)%100;
            }
            a  = (d+j-k+i+k-l)%100;
            n += (a-m-f-d)%100;
            k -= (f-c)%100;
         } while( ++DOcnt[27]%5 );
         f -= (j*j)%100;
         k += (h+h-k+m)%100;
      }
      n -= (c-a)%100;
      a += (g-h+f*k)%100;
      g -= (f+n*d+i*e-a*m+n)%100;
      n += (n-a*g*c-g-i+j)%100;
   }
   d -= (k*c-h-g-k)%100;
   f += (m-k)%100;
   i -= (b-m*n*a*e-m+e-g)%100;
   h -= (c-d+j-b+b*h+d-m+j-f+h+d+j)%100;
   a -= (n-j+b-f+b+g-g)%100;
   h += (c+m-g)%100;
   k += (a-h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[31]%5 )
   {
      do
      {
         for( ; ++FORcnt[46]%5 ; )
         {
            if( ++IFcnt[22]%10 )
            {
               for( ; ++FORcnt[44]%5 ; )
               {
                  b -= (c-i+l-i*i-j+f+a*j-h-g-d+j-c)%100;
                  k -= (j+n+l*i-f+k-h+d*f-m*d+c*b)%100;
                  h -= (d+k-l+l*i+n+e-b)%100;
               }
               if( ++IFEcnt[30]%2 )
               {
                  l += (c+j+j*k*k*i-d-c+m+d+f-e-k*g)%100;
                  b += (d+l)%100;
                  a  = (c*e+e-h+c*i-m*b*k*g)%100;
                  j += (d-k-e)%100;
               }
               else
               {
                  l += (n*g+n-i*j+d-m+h)%100;
                  n -= (d*e-m-j-a*e+k+k*l-l+i)%100;
                  d += (g-g-h-n-k-f+n-n)%100;
                  f += (e+k-i*i+n-f+k-b-f-h+d+b)%100;
                  e += (d-d-d-c+a-c+j+d-m*c+e-f*b)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  j -= (d+m*c-b+g-m+k+b*e*a)%100;
                  f += (n-d*f-h+f)%100;
                  c += (f+h-n+l*d+n-g*j-f*n*h*k)%100;
                  g -= (a*m+m-n+f+b+f-l+f-e+l*m-h)%100;
                  k -= (i+k+f-g+g-l+e-f*l-j-a*i)%100;
                  i  = (h-j-c+n+l*f-i-d-n-b+k+m-i-k)%100;
               }
               do
               {
                  l -= (a*g)%100;
                  k -= (a-h+g*j-f+i*l-a+j*j+i*c+b*j)%100;
                  l -= (d-l+l+i+f+m*i-i*d)%100;
                  n -= (k-f+b+b-a-l-a*l-e+j+h+j+d)%100;
                  l -= (b+h-e+b*c-c-n-b*e+c-c*m)%100;
               } while( ++DOcnt[30]%5 );
               h -= (i-g)%100;
            }
            for( ; ++FORcnt[45]%5 ; )
            {
               
               switch( ++SWcnt[15]%3 )
               {

               case 1:
               {
                  h -= (a-n)%100;
                  b -= (c+m)%100;
                  k -= (l-g-l+n+d+b)%100;
                  l  = (d-i+g-j-i-e-f-e*m*g+k*n-k-c)%100;
               }
               break;

               case 2:
               {
                  l -= (h+h-d+e*e)%100;
                  b += (g-l*m+m)%100;
                  m  = (j+h+c-c+j-b*c-i+b+a*i+g*n-a)%100;
                  d += (m-c)%100;
                  b -= (c+g-d+j+c-a+h-l+b*n)%100;
                  k -= (k*f*m)%100;
               }
               break;

               default:
               {
                  i -= (j*f-k+f-j-b*n-b-i-k+h+b+b+d)%100;
                  g += (f*e-e*h*d*i)%100;
                  h  = (k-m-m-f)%100;
                  g -= (h-c-i+i+f-a-g*f)%100;
                  e  = (j*i-f)%100;
               }
               }

               if( ++IFcnt[23]%10 )
               {
                  n -= (h+a-h+l+b+c+h+m)%100;
                  e += (n-l+j-g*h*i-f+k)%100;
                  l -= (g+i+a-k-a*c+j+n-k)%100;
               }
               if( ++IFEcnt[31]%2 )
               {
                  j += (b*c-f-h-g+a+l+n*f+g-h+i)%100;
                  n += (d-h+d)%100;
                  b += (n+c+g*e*n+l+i*e-d-n-j)%100;
                  i += (g-k+b-j+i+d-h*j-f-a)%100;
               }
               else
               {
                  g  = (c+g-i)%100;
                  e -= (h*f-e*j+f-f+b-d-j*h-m-m-d)%100;
                  d -= (i+j-g-e*g+c+l-b+k*j*c)%100;
                  g  = (h-g-l+k-k)%100;
                  j += (b+k*i-e-i+m-m-c)%100;
               }
               while( ++WHILEcnt[30]%5 )
               {
                  f += (j-k-g-f-n*i+m*j*n)%100;
                  d -= (g+j)%100;
                  b += (l-c*b+g-n+b)%100;
                  a -= (m+i+c-e+c)%100;
                  b += (k-e+j-n)%100;
                  j -= (a+j*f*j+k)%100;
               }
               d += (i+c-a*k-h*c+l+g+e-i-j-h)%100;
            }
            m -= (n+j*c-c-g+c-e-e-f+j-f-e-d)%100;
            c += (i*k-l-n+c*a+i-i-e-d-f)%100;
            m += (k*b)%100;
            a -= (e+h)%100;
         }
         k += (f+b+e-i+e)%100;
         i += (i-h-b-l-m+d-m+f-h)%100;
         i -= (k-h-n-h*k-h-g-d+b-k+a+b-h-c)%100;
      } while( ++DOcnt[29]%5 );
      l += (d-c+e+b+d-d+b)%100;
      m -= (h+k+c+a*f)%100;
      h -= (b+a-m-l+e+h)%100;
      g -= (g+k)%100;
   }
   f -= (h-l*h-m+j-k*j)%100;
   d += (f*m+l)%100;
   d -= (l*n+m)%100;
   k -= (f+c-a-k+k-d+n*i-e+i+m*j*c)%100;
   b += (k-b+i+l-e)%100;
   k += (g-m)%100;
   b += (c*j-k*f-i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F15(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[49]%5 ; )
      {
         for( ; ++FORcnt[48]%5 ; )
         {
            if( ++IFEcnt[33]%2 )
            {
               
               switch( ++SWcnt[16]%3 )
               {

               case 1:
               {
                  l  = (m+l*d-h*k-j-m)%100;
                  i -= (a*e+i*i+c-i)%100;
                  f -= (h+h*m-n-g+m-i)%100;
                  g += (c+l+a-h-l+n+m-g+f)%100;
               }
               break;

               case 2:
               {
                  h -= (d+g*i+a)%100;
                  n += (h*m)%100;
                  g += (a-j-c*m-k-h+k)%100;
                  e += (i-e-a*m+f*d-h-e*h-m)%100;
                  c -= (n+h+n+d+e)%100;
                  a += (m-m-m+c*h*e*e-f-i*l+k)%100;
               }
               break;

               default:
               {
                  e += (k-n)%100;
                  l += (j-a+l+g)%100;
                  j += (l-n*d+b+c*c+h+l+h)%100;
                  d += (f-e-l-g*j*j-g+c-l)%100;
                  n += (k*d+d-j-i+d*i-f)%100;
               }
               }

               if( ++IFEcnt[32]%2 )
               {
                  l  = (c+d)%100;
                  m -= (g+i+e)%100;
                  e += (h-a+d*a+n+n+e+d-a-f+f-m)%100;
                  m += (f-g+i-g-g-n-l*d+f)%100;
               }
               else
               {
                  g  = (g*d-c*f*m*f)%100;
                  e -= (a+l-e-h+j-h-d-a+h+d-i)%100;
                  n -= (b-m+f+g-c*e-l-e-a+g+h-n)%100;
                  g -= (e*b-n*a+g+j-e+b+b+f*e-f-i)%100;
                  c  = (j+h*b+d+f-g*b+h*l-e)%100;
               }
               while( ++WHILEcnt[33]%5 )
               {
                  d -= (a-g-k)%100;
                  k  = (d*f+g-a-j-l-l+m*i*m)%100;
                  n += (k-n-m)%100;
                  a  = (g+d+l+h-e*m)%100;
                  m -= (a-i-k+h+d*c*i*d*h+l+g-k-l+b)%100;
                  f += (h+m*i+c-a-k-j*d+e+b)%100;
               }
               do
               {
                  a += (e-e*i+m*c-k-j*d*l-g)%100;
                  c += (k+f-d-e-n-b*h-e)%100;
                  f += (l+d-d+e+f*k-c*i*j+d)%100;
                  k -= (k*d-a+g+c*d*h-k*m+m+k-a-l)%100;
                  b += (g+g+k)%100;
               } while( ++DOcnt[33]%5 );
               j += (f-j+c*f*k+f+m+a+d*h-e+f-h)%100;
            }
            else
            {
               while( ++WHILEcnt[32]%5 )
               {
                  m += (b-l-e-j-f+g+e+e-c*l-k)%100;
                  d -= (g+f+e-f-g+f-m-b-b+j-a-c-b+i)%100;
                  g -= (j-n-m-d-n+f*b-j+a+c+k-e+f)%100;
                  k -= (i+l+e)%100;
               }
               do
               {
                  a -= (k+l*d+d-a-g-g-m*l*j+c+i)%100;
                  g -= (n-b+j+f+g+d*d+k-f-a+b-n+b)%100;
                  l += (j+i*b+b+a)%100;
                  c += (m+e-j-m-k+m*b-m-b*g+f-c+m)%100;
                  k += (d-d)%100;
                  j  = (h+e+k-k*n+l)%100;
               } while( ++DOcnt[32]%5 );
               if( ++IFcnt[24]%10 )
               {
                  f += (h+e)%100;
                  a  = (j+h+m*h)%100;
                  g -= (i*h+i-a)%100;
                  a -= (i+n+b-g-e-g-h+k)%100;
                  f -= (k+i-b-l-l*k+n-a*f*f)%100;
               }
               c += (m-e*j-n*n-l+k-c+j+b+d)%100;
               for( ; ++FORcnt[47]%5 ; )
               {
                  h -= (c+b*h+j+e)%100;
                  c  = (j-b+a+c-f-h*g-f+g*g+a*g)%100;
                  h -= (g+f+j*l+d-e-g+h+g)%100;
               }
            }
            k += (n-j-c+f-j+f+m-c+j+a-h)%100;
         }
      }
      j -= (g*k-f-c+j+d+m+i+j+e-j-g)%100;
      e -= (e-b+c-a+i+h-l)%100;
      f += (a-k-j)%100;
      k -= (g+n*a+e*k-e+b)%100;
   } while( ++DOcnt[31]%5 );
   m -= (k+i+g+b)%100;
   j += (j-h)%100;
   f -= (f-d+l)%100;
   b += (c-h+g+i+n+f+c+k-a+j*c)%100;
   k += (d-d+n-g)%100;
   n += (l-f*k*d*k+k)%100;
   i -= (l*f*l+j-m-e*l-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F16(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[53]%5 ; )
   {
      if( ++IFcnt[26]%10 )
      {
         for( ; ++FORcnt[52]%5 ; )
         {
            if( ++IFEcnt[35]%2 )
            {
               if( ++IFEcnt[34]%2 )
               {
                  m -= (g-c-i-c-b-b*e)%100;
                  h -= (n*a-i+d)%100;
                  c += (d+g+l-n+c-f+l-l*i-a+n-f+a-d)%100;
                  e -= (e-b-k+g*g-g-m-i-b-h-f)%100;
                  c -= (g-a*d)%100;
                  b -= (e+f*h-k+c*n*k+b+f)%100;
               }
               else
               {
                  d -= (n+j+a+h-k)%100;
                  d += (a-n-a+j+a-f-i*g)%100;
                  i  = (j+n*h+e+b-l+k*m+h-e)%100;
                  f += (g*i-a*i-m*d+f+k-d+d*f+h)%100;
               }
               while( ++WHILEcnt[35]%5 )
               {
                  l  = (i+e+f-f+m*m-c-a-j+l+c-i)%100;
                  n -= (l+g+k)%100;
                  b  = (c-n)%100;
                  j -= (g+k+f+g+i+i)%100;
                  h -= (e+d-i*c*i)%100;
               }
               do
               {
                  b -= (n-k*d-n*m*g+g)%100;
                  k -= (f-m-k-m-e+c+e+i+m-g-a-i)%100;
                  j -= (i*a*g)%100;
                  k -= (b-j-g)%100;
                  a  = (b+f*k-g*i+d+g-c*n)%100;
               } while( ++DOcnt[35]%5 );
               for( ; ++FORcnt[51]%5 ; )
               {
                  l += (n-k-j+h-m+h-e)%100;
                  g -= (n-e)%100;
                  m -= (m+a)%100;
                  j += (m-l+m+m+c*n+f-f-c*e+d)%100;
               }
               c -= (h+l*m+f-i+n+m+i*b*m-m)%100;
            }
            else
            {
               while( ++WHILEcnt[34]%5 )
               {
                  a -= (i*n+g+n-a)%100;
                  a += (f*h-g-b+c*f-e*n+j)%100;
                  e += (h-e*c+d+a-l+k-f*i)%100;
                  g -= (f-i*h+b-l+b+b-a-i-k-n+n-i)%100;
                  d -= (l*e+a)%100;
               }
               do
               {
                  j += (m*h+c-e+n*c-i+c-b+h-a+a-i+n)%100;
               } while( ++DOcnt[34]%5 );
               j += (k+j*l+m+e+c-f*m-a+h-m+m)%100;
               for( ; ++FORcnt[50]%5 ; )
               {
                  l  = (k+a+k-c-f+j-k+b)%100;
                  b += (j+k+j+h-i*d)%100;
               }
               
               switch( ++SWcnt[17]%4 )
               {

               case 1:
               {
                  a += (n*h)%100;
                  l -= (n+n*g+e+l-a-d+d+d-e-g-f)%100;
                  c += (e-a*d+h+a-m-n-m)%100;
                  n -= (n-d*a+g-n-b-n-a+j+e+k+g+h-h)%100;
                  a -= (d-b*g)%100;
               }
               break;

               case 2:
               {
                  j -= (d+h-h)%100;
                  g += (m-g+m+l)%100;
                  e += (f+m*d+h-n-n+k+e-l+c+f-d-a-j)%100;
                  i += (i*d+f-b+h-j*a)%100;
               }
               break;

               case 3:
               {
                  d -= (l-d+h*j+e+l*g)%100;
                  a += (l-b+i)%100;
                  k += (m-c*h-m+d+k+l-a-b+m)%100;
                  f -= (l-a*i-e-l+m*d-c*j)%100;
                  c += (m-i-d-e+g*b*c-e+k)%100;
                  d += (k-n-m)%100;
               }
               break;

               default:
               {
                  n += (i+a+k+n*k-j)%100;
                  d  = (e+g-b)%100;
                  h += (f-b+f-f-d+m+d+l)%100;
                  b -= (d+n)%100;
                  e -= (j*c-c*e*b+h-b-b)%100;
               }
               }

               if( ++IFcnt[25]%10 )
               {
                  l -= (d+e-a-i*n+n)%100;
                  l += (e-m-k-f+h+h-i+j-k+c-d-e+g)%100;
                  h += (f*d*c*g-k*e*d*e+n+d+l)%100;
               }
            }
            d -= (n+b)%100;
            l -= (a*h-d+b+a)%100;
            f -= (g+e*h-e-i*m)%100;
         }
         l += (j-e-e+a+k+n-n*j+h*n+a-d)%100;
         j += (d-c*j+g*a-d*j-f-b-a-h)%100;
         l  = (a*g+e*j)%100;
         i += (l+n*g*l-e*k+m+c+k)%100;
      }
      l -= (i-e*e+b+j+h*l-a-f+k+k-d+e*n)%100;
      g -= (a+f-h+l*d-n-g-g+j+a+c+a*c-g)%100;
   }
   k += (a-e+i+f-g*d*n+k+g*k*e*k)%100;
   l += (f*m-k-i-a-k*m+h+j-n-l)%100;
   e -= (j*d*h*i*k-l+l)%100;
   g -= (i+l)%100;
   f += (f-d+l+l*d*m-a-c*j)%100;
   m -= (b*b+n+h-k+n+j)%100;
   f -= (i+f-m+l+a-f*m+e+c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F17(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[57]%5 ; )
   {
      if( ++IFEcnt[38]%2 )
      {
         e += (c*g+a-e+e+a+b-i+a+a-a-c-a+k)%100;
         j += (d*f+m*n*g-a-f+i+b)%100;
         e += (i+k-i-i-l-k+m-b-e-m-n)%100;
         e += (h-d*m-c+e*k)%100;
         l -= (d-l-b-c)%100;
      }
      else
      {
         while( ++WHILEcnt[37]%5 )
         {
            do
            {
               if( ++IFcnt[27]%10 )
               {
                  l += (l-e+n+n*d-b+m+m*g+f+g)%100;
                  c -= (m-k+g-b)%100;
                  a  = (l-d+c+n+c+g+d-m-l*j-i+a+f+j)%100;
                  n -= (k+l+e-e-m*g+j*d+a*f)%100;
               }
               e  = (g-g+a*h-f-m-j-a*f+h+i+i)%100;
               for( ; ++FORcnt[54]%5 ; )
               {
                  a  = (i-c-g-i-k*d+k-m-d)%100;
                  k  = (k+f+c-a*h-g+a+g+f)%100;
                  f -= (k-a)%100;
                  h -= (g-j-f-c)%100;
                  d += (a*j-a+h-f*i+c+i)%100;
                  i  = (e-m+l+f+f)%100;
               }
               
               switch( ++SWcnt[18]%3 )
               {

               case 1:
               {
                  a -= (m+m-a*j-n*m-m+a-m)%100;
                  c += (k*e+j-g+a+j*f+a-l-i)%100;
                  c -= (h*f+d+d*k+m+g+a-f+g-h*i)%100;
                  h -= (j+n-h-i+k*j*d+b-h+a+h+l-f-i)%100;
                  e += (a+g*b+b*f+l-b-e-k-f-g)%100;
               }
               break;

               case 2:
               {
                  h += (k+n-i-n+j-h)%100;
               }
               break;

               default:
               {
                  l += (m-b+d+j-d+h-g-f*b+e-i-e)%100;
                  j -= (k*g+n*d+j-a-e-d-i-i+k+f)%100;
               }
               }

               if( ++IFEcnt[36]%2 )
               {
                  b += (d-g-e)%100;
                  d += (g+i*m-g+l-d+m*k-l-h+m-i)%100;
                  l += (b+l-b)%100;
                  i += (f-d-k-a-f)%100;
               }
               else
               {
                  n -= (g+a+k+c+l-n-l*c+l)%100;
                  k -= (j-g+b*d+b*b*b-a-d+l-m*j+l+h)%100;
                  k += (b+c-e)%100;
                  c += (a*n+l-a*c*i+c*c-g+h)%100;
                  n += (e+k+g*f-l+n*b*e)%100;
               }
            } while( ++DOcnt[36]%5 );
            while( ++WHILEcnt[36]%5 )
            {
               do
               {
                  j  = (l-i+m*d+l-h+e+c+e-e-e)%100;
                  a -= (a-b*k-m*m+j*g)%100;
                  i -= (c+a+i+h)%100;
                  b -= (c-h*a+k+a+c+a+a*k-h-j-d)%100;
                  n -= (a-j*b-n+k-f-k*c-d)%100;
               } while( ++DOcnt[37]%5 );
               for( ; ++FORcnt[55]%5 ; )
               {
                  l += (g-a-l+m+l-k-k+b+j-j)%100;
                  g += (a-l-m+a+f+e+c-l*g+k-i-l)%100;
                  c -= (i-b+k+a-f-d+m*h)%100;
               }
               if( ++IFcnt[28]%10 )
               {
                  a -= (h+m*b*b-e+j*m*m*a+b*a-h)%100;
                  a += (k+n-n-j*h+b*b+n*a)%100;
                  d -= (l+m-b-c*c*m+b+m-a-b*j)%100;
                  k += (n-a)%100;
                  m -= (h-j+m+f*l*i+i+i-f)%100;
               }
               for( ; ++FORcnt[56]%5 ; )
               {
                  f += (l+k+k)%100;
                  a -= (j+l-h-i-f+d+h)%100;
                  i += (n+m+a+l+k+d+e-b-n)%100;
                  l  = (b+a+f+h-f)%100;
               }
               if( ++IFEcnt[37]%2 )
               {
                  b -= (m*c+e+j-i*d-m+m-d)%100;
                  j -= (b-l-h-d)%100;
                  e += (l-n+n*k+d-g-m-n-d)%100;
                  f += (g+l+n)%100;
                  d += (c+h+l+h+a*f+l*j*c*e+k)%100;
               }
               else
               {
                  g -= (f+i*g+e+c*f)%100;
                  i += (k-h-c-l-f-i+i)%100;
                  e += (i+m-j+f+m+k-b+a+i-c-j+h*m-b)%100;
                  e -= (m+j)%100;
                  n += (a+a+n-b)%100;
                  j -= (j+b-g*l+c-e-b-c+n*m+g)%100;
               }
               m += (b*d-l+l*a-h-j+i-g-g)%100;
            }
            i -= (j*g)%100;
         }
         j += (g-e+m+e-g)%100;
         k  = (a-a+b-c+c+n-m-c*k*h-b)%100;
         n += (c-l-e*e+b+d*e+i+c+e+g+i-d)%100;
         j -= (g*n*g)%100;
      }
      a  = (c-h-d+h+h+i+k*l-g-f+l-a)%100;
      l += (f*i-h+g+e-c-e+g)%100;
      h += (i+n+i+c)%100;
      b += (m+f)%100;
      l -= (e*b-e)%100;
   }
   j -= (h-n-d-g+g+k-e-c+a*c+h)%100;
   e += (j+j+f+e+l+a+d*c+a-i-i-m-g-g)%100;
   g += (a-l)%100;
   n -= (e-j-m)%100;
   l += (h-k+c*j+i+d+g*f+k*m-m-d)%100;
   e += (m*k)%100;
   l += (f-a-e+h-n+j*e*l+m+c)%100;
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
         m += (k-l*k*l+c-a-l)%100;
         for( ; ++FORcnt[60]%5 ; )
         {
            
            switch( ++SWcnt[19]%3 )
            {

            case 1:
            {
               if( ++IFcnt[29]%10 )
               {
                  i -= (d-i+f*l+l-b)%100;
                  l -= (h+l+e-j+m+c*a)%100;
                  i -= (e*k)%100;
                  f -= (c+f*i*f+c-a+g)%100;
                  b -= (j-a*g+m-k-e-b-e+a*j*i)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  m += (g+i+d+f-a+a+a-l*h+f*e)%100;
                  m -= (m*c+m+l)%100;
                  b -= (e-i-l+n-g+d-j)%100;
                  b += (n*h-n+m-i-n-k)%100;
                  m -= (l-m+h+m+h+d+n)%100;
                  m -= (b-k+n)%100;
               }
               else
               {
                  m -= (e-e+l-g+c+d+b-d)%100;
                  a -= (h+j-c*b-b-f-f+j*f+c+n+m*i-k)%100;
                  k += (i+n*n-j*b+f+g+j+d+l+g-m)%100;
                  d -= (l+b-k+l*f+h-e*c-j)%100;
               }
               while( ++WHILEcnt[38]%5 )
               {
                  l -= (j+j-h-d+b*i-b)%100;
                  j -= (i+d-n-b+e+k+m-i+j-a-a)%100;
                  c += (n*h)%100;
                  a += (n+l-g-i-m-g-i+b-n-a+f-g-e+j)%100;
                  d -= (n*c-a)%100;
               }
            }
            break;

            case 2:
            {
               do
               {
                  g -= (a-i+l*g*c+n*n*l-m+k-e)%100;
                  e -= (m-b-j*n-e+n)%100;
               } while( ++DOcnt[39]%5 );
            }
            break;

            default:
            {
               for( ; ++FORcnt[58]%5 ; )
               {
                  d -= (l-k)%100;
                  d += (g-i)%100;
                  d -= (h-m+c)%100;
                  e -= (n-f)%100;
               }
               for( ; ++FORcnt[59]%5 ; )
               {
                  a += (i+j+k+e)%100;
                  k += (f+h-l+e-e+c-b*l+m-c-a*b+e+l)%100;
                  f += (a+d-m-f)%100;
                  m -= (d*n)%100;
                  n += (h-c)%100;
                  b -= (m*d-n-n-k*j-b+e-l+f+g*l-l)%100;
               }
               if( ++IFEcnt[40]%2 )
               {
                  h -= (k+d)%100;
                  f -= (c+n+m-e-f+i+n-d)%100;
                  g += (k*f+d+n-f-j-f+e-a+k-d-b)%100;
               }
               else
               {
                  h += (l-i-f+j)%100;
                  j -= (h+h-c+l)%100;
                  n  = (b-d-a-f-i-k+c+l-f)%100;
                  c -= (j-g)%100;
                  b -= (e-b+i+g-k-k-h+n)%100;
               }
               while( ++WHILEcnt[39]%5 )
               {
                  j -= (m-m+k-l-n+h-f-e+k)%100;
                  l -= (b*d)%100;
                  h -= (c*i+n+a+l+j+d+c+m*i+l-h*a)%100;
                  h += (l+n+a+h+n+m*m+h+l-g*f-j-k-a)%100;
                  h += (h*k)%100;
               }
               do
               {
                  k -= (a-b*j-a+g)%100;
                  g -= (i+n-g-m*a-d*e)%100;
                  e += (a-g+i-l*a)%100;
                  f -= (l+c+e-h+n-k)%100;
               } while( ++DOcnt[40]%5 );
            }
            }

            if( ++IFcnt[30]%10 )
            {
               h  = (f-c-f-c+l*f*c+e*d-g+m-n+d)%100;
               b -= (f+e-i+c-f-j+m+b)%100;
               n -= (h+i-n+e-i-c+d+e)%100;
               l -= (i*f-g-c-m-n*a+d+l-l+a)%100;
               f -= (k*m+h+m-k-j*b-d-a+f+m+c-d)%100;
               h -= (e-h*g+g+a-j+n+e+f+j-l+i)%100;
            }
            l += (g+m*i)%100;
            g += (b*a-j-m-l-e+h+h+d-g)%100;
            a += (m-l+n+i-b-h-f-f-h*l-a)%100;
         }
         n += (c+n+c-k*j+j+b-n+d-d-e+d-l)%100;
         b += (e+b-k-j*f-g-g+c+m+m*j-g)%100;
         e -= (d*j)%100;
         n -= (j+l+e+c-h*e+m+i)%100;
      } while( ++DOcnt[38]%5 );
      h  = (m+i)%100;
      l -= (h+n)%100;
      a  = (m-g*h*c+e+h-k-l-k*n)%100;
   }
   c  = (m+e+k-l+c*b-n*a-m)%100;
   a += (h+j+n+f+b*n+e-g+l-h-h*l)%100;
   g -= (k*d*h+h+f)%100;
   e  = (f+i-e+j+c*h-f+j*d*g-e+j)%100;
   f += (c-a)%100;
   e += (a+l+c+k*l-k*c+n+c+a+d+b)%100;
   a += (a-k+l-e+f+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F19(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[20]%4 )
   {

   case 1:
   {
      for( ; ++FORcnt[64]%5 ; )
      {
         c  = (b-d+f)%100;
         if( ++IFEcnt[43]%2 )
         {
            d -= (n-b+f+d-e+e-e+n+j-i)%100;
            i += (h-b*e+j)%100;
            e -= (h-a+j+g-g*c+a+e+i-k*e*h)%100;
            i -= (n*d-g-b-d+h-j+c-k+f-n+g+h*i)%100;
            c -= (h+m+i+k-e+a+a+n-m+k)%100;
         }
         else
         {
            while( ++WHILEcnt[42]%5 )
            {
               do
               {
                  m  = (f+b-c+k*i*j*i-n*f-k-n-k*c)%100;
                  l += (l*f+n-d*d-i+a-n-b-j)%100;
                  g -= (j-b)%100;
                  h  = (k*k*j+a*d-e-k-n+j-h)%100;
                  e += (n+i)%100;
               } while( ++DOcnt[41]%5 );
               for( ; ++FORcnt[61]%5 ; )
               {
                  i -= (k-i+n+d)%100;
                  a += (d+h*b)%100;
                  k  = (d+k)%100;
               }
               if( ++IFcnt[31]%10 )
               {
                  k += (d+k-i-j*d-e*b+j+i+d)%100;
                  h += (j+k*k-h-d*h+a*a+l-d-a-f)%100;
                  k -= (k-h+b-f+i+d+d-i-h-k+i)%100;
                  l -= (a-c+f-h*g-g+d-g-e+l*f*j+d)%100;
                  e -= (d-j+g+c*l+j-h)%100;
               }
               for( ; ++FORcnt[62]%5 ; )
               {
                  g -= (k+j-m-m+f+l+c*j+d+k+d-m+c-b)%100;
                  h -= (b-n*j)%100;
                  d += (d*b-m-k+h*g+m)%100;
                  e  = (k*l-n-j+b-k-h*d+e-h)%100;
               }
               if( ++IFEcnt[41]%2 )
               {
                  g -= (k-c*e-g-h+g-g-i+c-g-a*g*n)%100;
                  c -= (h+b-f*e+n-n-d-k+l-m*l-i+a)%100;
                  i += (a+i)%100;
                  j -= (i+g+d+j*d*m)%100;
                  j -= (m*h)%100;
               }
               else
               {
                  a += (n-h-h-f+n+l+l-c)%100;
                  l -= (k+c+b)%100;
                  j -= (l-j-g+e)%100;
                  m -= (k+g)%100;
                  g -= (g-l-c-k-d-h*b*e+c-m+k-k+e+l)%100;
                  c -= (i+h-n-k+f+n)%100;
               }
               while( ++WHILEcnt[41]%5 )
               {
                  a += (m-d)%100;
               }
            }
            do
            {
               a += (g*m-b-k-i-b*b*j-b-j+c)%100;
               for( ; ++FORcnt[63]%5 ; )
               {
                  k -= (n-n+b-j-i*k)%100;
                  h -= (c+l-m-d+n-i-n)%100;
                  n -= (b+e+h*l*n-h-i*d-g-j-b*h)%100;
                  h -= (c+n-g*c+j+d-e*g-l-m-c)%100;
                  c -= (a-n-l-e+j*f*f+i*a-a+j-c+h)%100;
               }
            } while( ++DOcnt[42]%5 );
            
            switch( ++SWcnt[21]%4 )
            {

            case 1:
            {
               if( ++IFcnt[32]%10 )
               {
                  f += (g*l-l+k+e*c-c-e*j)%100;
                  g += (m-b)%100;
                  j += (f-d*b*a+c-e+j-j+d*a)%100;
                  g += (m+m-l-i+i+m+i+n+a+i-m-c+j*f)%100;
                  i -= (a+l+b*e*n-k-g+g+k*b*m)%100;
                  e  = (f+i)%100;
               }
               if( ++IFEcnt[42]%2 )
               {
                  j += (l+b*h+l+f*f*d+m+j*b-j*k+e*m)%100;
                  e -= (m*a+f-m)%100;
                  m += (l-n+d)%100;
               }
               else
               {
                  n += (m*e-h)%100;
                  n += (f+c+h-l+h+m-g*e-k*b*n)%100;
                  f -= (i-m+i)%100;
                  m -= (g+n-g+f-l-h)%100;
                  f += (e*j+m-a-e+c-l-d-m+f-j)%100;
               }
               f -= (c+l+e+c)%100;
               i += (n-i-d-g+n)%100;
            }
            break;

            case 2:
            {
               m += (g-h+a+g-m-a-d+m-k+c*g-h-d)%100;
               m += (a-h)%100;
               n += (g+c+l+i+j+e+m+a+m)%100;
               a += (l+c+m-b+g-k+f-k*k*d-l-i-j+f)%100;
               e  = (j-i+c*e-e*a+j+k+h-j+g)%100;
            }
            break;

            case 3:
            {
               n += (f-f*n-f)%100;
               l -= (f-m)%100;
               h += (e-e)%100;
               m -= (e+g-f*n+l*h-l-a+j-f-i-j)%100;
            }
            break;

            default:
            {
               d -= (g+i)%100;
               i += (i-k+e-l)%100;
               d -= (d*i*n-n+e+f-c+a-f)%100;
               g += (n+g+m-n-g-e-d*f-c*e*e)%100;
               i += (m*b)%100;
               m -= (f*n+i*l)%100;
            }
            }

            n += (g-m-l-j+h-c-b+n+k*l+f-m+g-h)%100;
         }
         a -= (e*a+h)%100;
         k += (e+m*m+l+m*a-g)%100;
         e += (c-k-f-g-j+c)%100;
      }
      b -= (i+h-c-h+k-b)%100;
      m += (k-c+m*d-a+l)%100;
      g += (m-g)%100;
      f -= (m*l+g-e)%100;
   }
   break;

   case 2:
   {
      m  = (c-g+a)%100;
      m += (a*e)%100;
      c += (g*l+h+b-f-m-e-m+d+b+m+h-i*d)%100;
      c += (d*b-a)%100;
      h -= (e+i-g-g+h+e+a+d*a)%100;
   }
   break;

   case 3:
   {
      a -= (l*k)%100;
      i += (l-l*m-e+f*j+m-i-d-k)%100;
      k -= (g+b+j-k-h)%100;
      a += (l*c+d*l*e-k)%100;
   }
   break;

   default:
   {
      i += (a*e-n)%100;
      e += (k*l+m+a*g+h+l+n+i-l)%100;
      j  = (m*e+n-e+l-h*c-k)%100;
      d += (a-j-b-j+e+f-b-k-n-l)%100;
      k -= (m-n+c)%100;
      i  = (h-i*i-b+c+d-d+m+i+a+m*j-j+m)%100;
   }
   }

   b += (a-b-h+l-f+e*l+l*d+d)%100;
   e += (h+b*n+l-d)%100;
   c += (c-a+n)%100;
   d -= (m-g+k-c+j-g+h-i)%100;
   m += (d-m)%100;
   n -= (n+c*c)%100;
   j -= (f-i+c+c)%100;
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
                  d -= (f-h-e+h+n-i-a+d-m+k-l+i+b-i)%100;
                  e -= (a+e+n+l-g+l*b-i-n+g-a+a)%100;
                  i += (d+b)%100;
                  n += (i+k*d-g-i-e-e-e*i+f-f-j)%100;
                  l += (j-a*i)%100;
               }
               else
               {
                  f  = (e+j+b-i*k*j-i)%100;
                  h  = (h+d-a)%100;
                  m -= (g+k-l-m-n+l-g-c-m)%100;
                  a += (e+n*e+n+i*m+n-a+m-l-b-b-n-e)%100;
                  b += (a+d+n+h+b+c+m-j*l+b+d-m*f+b)%100;
                  m -= (l+i-c-b+e-m+h*l-a)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  k  = (b-f+j-e+l)%100;
               }
               do
               {
                  m -= (e*k-i+j+l*c+b)%100;
                  m -= (j-g+j*a*h-a+l)%100;
               } while( ++DOcnt[44]%5 );
               if( ++IFcnt[33]%10 )
               {
                  l -= (a+n)%100;
                  n += (d-d)%100;
                  m += (e-k+k-i+f+c-k)%100;
                  i += (k*j*b-b-h*k-e*d)%100;
                  l -= (f*m-c-k-c*d-d-h)%100;
               }
            }
            n += (d+c*i+c*c)%100;
            for( ; ++FORcnt[66]%5 ; )
            {
               
               switch( ++SWcnt[22]%3 )
               {

               case 1:
               {
                  g += (e+g+k+f+i*k+i)%100;
                  k -= (k*g)%100;
                  l  = (b-l+i-k+f*f-k-h-f-k+f)%100;
                  f += (e-i-i*n-h*a+l-i+g)%100;
                  h -= (j+k*d+a-m-m+g+b-n+g+e*j+c-m)%100;
                  m += (f-h*f+n-c-c-m+n-l-g+f+e+h)%100;
               }
               break;

               case 2:
               {
                  n += (h+f-i+n*c+i)%100;
                  d  = (a+m+j-a-d-h*f+g-d+f-d-h)%100;
                  j -= (f+k+i+c*h+n)%100;
                  h  = (n-k+d+g+j-a*g+i)%100;
                  f += (j+d-a-d+b+a+g+d-a-g+a)%100;
               }
               break;

               default:
               {
                  i += (h+m+d*b*d)%100;
                  f += (m*m-h)%100;
                  n -= (m-h+n*c-k+j+e-m)%100;
               }
               }

               m += (b-b*m-l-f)%100;
               j += (c*j*l+i-a+b+c+c-k)%100;
               j -= (d+j*c*a-e-i+i+i+d-k+e+f-n-d)%100;
            }
            c += (n+d*f-g-h-c+h*b)%100;
            e += (e+l+f+a*b*f-l+i)%100;
         }
         b  = (k+a+d-f+j+c*k+g)%100;
         m += (i-m+e*h+d-g-d+h+j*h*n+f+m+c)%100;
      } while( ++DOcnt[43]%5 );
      f -= (a-g)%100;
      j -= (b+h+b*h+b*l-c+b+b*j-k-k)%100;
      m -= (n-n+f*h-f*c*h+l+n+m-j*b*g)%100;
      k  = (k+e-b-f+a+a*n)%100;
   }
   d -= (l-b+f+a)%100;
   e -= (n*h*e+h*m-m*j)%100;
   d += (n+b-d-n+l-f-k-n-f-a+l+i-c+c)%100;
   m -= (c*f+g+j*m+d+m*l+m)%100;
   j += (i-n)%100;
   j -= (j+a-e-g+c*b*e)%100;
   l -= (m*j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F21(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[46]%2 )
   {
      a -= (d+b+k-b+a+a+k-a-k-e-m+k)%100;
      k -= (m-l-h+j*b-d+d+j*a)%100;
      l -= (m+j+b*f+a*j*f*n+a-d+d+h-g*d)%100;
      k -= (f-k+c+c+c+i-c+h+a-l)%100;
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
                  l -= (m-g+k-a-n-m-g+i*c*a-k+m)%100;
                  l -= (j+l-a-m-m-k-n*k)%100;
                  c -= (a+g)%100;
                  d += (m+f+l+j-i-f-m-b-h*b-b-g+j+a)%100;
                  l -= (i-e)%100;
               }
               for( ; ++FORcnt[68]%5 ; )
               {
                  l += (c+k+j*e*i-l+h+n)%100;
                  m += (j*j+f+d+a-j*k-a-h)%100;
                  d -= (d*i-k-e+f+i*b+a-b*k)%100;
                  d += (d-e*m-b*k-c+n+k*k-i+g)%100;
               }
               if( ++IFEcnt[45]%2 )
               {
                  k  = (g+b-n*c-k+e)%100;
                  a += (j+j-j-k-b+b-m-a+l)%100;
                  l -= (l-i-f*b-f*j)%100;
                  e -= (f-h)%100;
                  l += (c*f-g*n+m-i-j+d-f*d)%100;
               }
               else
               {
                  a -= (d-j-f+j-l-b)%100;
                  h += (k+a+a*j+i-m)%100;
                  g += (k-k-d*i-k-k-j+i+b-c+c+i*f)%100;
                  m += (h-b+l+b+h+f-g+l-l)%100;
                  g  = (d+b+g-h-l-k*e*e-b*m)%100;
                  m -= (g+l+a)%100;
               }
               while( ++WHILEcnt[45]%5 )
               {
                  f -= (g-e-k+b-j+l*g-n-d-j+e)%100;
                  n -= (c-i)%100;
                  k -= (f+e+c*j+b+c+g)%100;
               }
               do
               {
                  l -= (c+j-g-k*j*l+m+g+f*f+c*a*a+h)%100;
                  c -= (d*g+l-h+b-l)%100;
                  h -= (g+i+j-l*d+b-b+c)%100;
                  c += (a-c)%100;
                  d -= (j-g*i*c-k+g)%100;
               } while( ++DOcnt[46]%5 );
            }
            b += (l-l-g-c)%100;
            for( ; ++FORcnt[70]%5 ; )
            {
               
               switch( ++SWcnt[23]%4 )
               {

               case 1:
               {
                  j -= (k-b+j-g-j*n-e-l-c)%100;
                  l += (e-m*e+f-d*c+g+d-f)%100;
                  h += (d-h+j-e+k*g-k)%100;
                  b += (j+h*n*j-d-a-n)%100;
                  b += (e+j+n-l+e-i+g-f*f+h-h)%100;
                  k += (f-m)%100;
               }
               break;

               case 2:
               {
                  b -= (j-e)%100;
                  h -= (n-k+l-b+i*e-e*l*k-f*a)%100;
                  g  = (a-h-c+e)%100;
                  g -= (k-g+d-j-m+g)%100;
                  i += (e-b-g)%100;
               }
               break;

               case 3:
               {
                  h += (i*h*f-n+f-e*n+c-a-f-e-c+h-h)%100;
               }
               break;

               default:
               {
                  b += (d+f+m+n-c+b-b+n+n*l-l-h)%100;
                  a += (d-e-a-m+e*k+g+l-h-m)%100;
               }
               }

               if( ++IFcnt[35]%10 )
               {
                  n -= (g-j*h+n+h-h-c+c+c+i-a-g+n)%100;
                  n += (a+e*b-k+b+g-k+b+n)%100;
                  c += (l+g-m)%100;
                  f -= (h+d+a-n-i-h+k-i+m)%100;
                  d += (i-a+l+d-a+c*a)%100;
               }
               f += (j*f-i-b+d-j+h)%100;
               f -= (l+m)%100;
            }
            i += (k-i+h*k+b+d+j+j-f)%100;
            m -= (k+f-g-n-c)%100;
            i -= (b-k-h*b+e+e-d-j-d*b-a+f)%100;
         } while( ++DOcnt[45]%5 );
         k += (g+h-a)%100;
         i  = (n+c+i-c-k+a+c-j+n+a*g*g)%100;
         c -= (m+e+k-b-b+b-i-m+m*l-l)%100;
      }
      e += (c-c-i+i+g*l+l-c+h*l-g*i-m+a)%100;
      a += (f+i+h-c*n*m+e+a)%100;
      a  = (c+a+h-c+k+b-i-a-f+b*j-a)%100;
      b += (d-c)%100;
   }
   c += (n+f-b+c+l-c*m+g*b+a-e)%100;
   f -= (d+a+j)%100;
   k += (j+c-a-e-n-c-c-l-j-d-e)%100;
   m -= (m+n+i-c-l+l)%100;
   g  = (i-b*e+h*h)%100;
   k  = (a+m-g+j*l-n)%100;
   c -= (c+g+i+i+b*h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F22(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[49]%2 )
   {
      g += (d-m-d)%100;
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
                  k += (f*a-g+l-f*f-c+j-i-i+n+i-h)%100;
                  m -= (e+k-g+l*m)%100;
                  c -= (l*c+m-c*f+f-l-e+j-l-k-c-k-l)%100;
                  e -= (n+i-h-b+d-k*l-n-i+e-f-d)%100;
               }
               if( ++IFEcnt[47]%2 )
               {
                  n -= (l*d-a)%100;
                  j -= (d-l+m+l-a-i*n+l-j)%100;
                  c -= (e*n-k-i+j*f-g+f*j+a*j-c)%100;
                  k += (e+c*d+g-i+h+a)%100;
                  e  = (d-l+n-h+k*e-a)%100;
               }
               else
               {
                  d += (j-h-n+i-g*h*a)%100;
                  n  = (c-d*h+d+d*n+a+g-f-i+c*d-b*g)%100;
                  b -= (l+e)%100;
                  f += (i-j-j+f+g-j*m+d)%100;
                  h -= (j+e*l)%100;
                  e += (e-l-k-l+h)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  a += (e-m+k*f+c+n+l-a*e-j)%100;
                  m += (g+n*c-l+e*b-i*b-g)%100;
                  i += (g+m)%100;
                  a += (d+i-m)%100;
                  e += (d-g+i-e+m)%100;
               }
               do
               {
                  c += (a-e+d-m-k*c-a+j+f-b+k)%100;
                  j -= (j+b+i*j*m+h-c-j)%100;
                  b += (c+a*j*k+e+g-k)%100;
                  a += (e+a+m+f+d-a*b)%100;
               } while( ++DOcnt[48]%5 );
               if( ++IFcnt[36]%10 )
               {
                  a += (g-m+n*d+d-c*d+b)%100;
                  a += (g+d*j+h-d)%100;
                  c += (f-j-j-j*i+n-d-h+m-a+m*k+m-e)%100;
                  h -= (f+a*g-i-e+g)%100;
                  h -= (h-n+k-f-k-j-i-l+l*d+m-m*n+l)%100;
                  h += (c-e+h-b-h)%100;
               }
            }
            n += (m-b+e*n*b)%100;
            for( ; ++FORcnt[73]%5 ; )
            {
               
               switch( ++SWcnt[24]%3 )
               {

               case 1:
               {
                  d += (j+d-h+c*c+g-k)%100;
                  a += (f-i-l+n)%100;
                  e += (b+e-h-a*e-l+b-l+h*h+c)%100;
               }
               break;

               case 2:
               {
                  l -= (i*k+c+a-b+n+d)%100;
                  m += (n*a-e-f)%100;
                  e  = (g-c-a+f*k-m)%100;
                  j -= (k-a-n-n*i+d+e-b+m*m+d+a-n+b)%100;
                  h -= (j-a+n-i+b+d*j)%100;
               }
               break;

               default:
               {
                  a += (d-m+m+a*i+b)%100;
                  m += (a-n+m+h-j-j-c-b+l)%100;
                  h -= (a-f+i+k)%100;
                  d -= (l+e+g+k-d)%100;
               }
               }

               if( ++IFEcnt[48]%2 )
               {
                  i += (e-b-j-e-d+l*j*b+g*j+a+j)%100;
                  a -= (a*j+d+c-c+a+g-n*m+n+l-b)%100;
                  k += (f+n-l-g*l)%100;
                  g -= (h+l+n-i*h+e-e-b*j-e+k)%100;
                  e -= (n+a)%100;
               }
               else
               {
                  j  = (h+b-n-g)%100;
                  h  = (m-n*b*n-j-d-c+i+n+l)%100;
                  c -= (i+c+f+e-h+k)%100;
                  a -= (c-g+m+l+l-i*j-k*f+g*a+e-h)%100;
                  m  = (c+j+n-m-k*m*a+a*m+a*e+c+a)%100;
                  f -= (e*h-h+h+k*f-a+n)%100;
               }
               d += (c*i*h+n-c*b+c-m-a-g-l-h+c)%100;
               g -= (d+n+j+k*b+f*k*e+j+m+c+a-m)%100;
               l -= (g+h-i-i+a-n-j)%100;
            }
         } while( ++DOcnt[47]%5 );
         c += (j-c*m-m)%100;
         c -= (a*c*l+e+a-m*b-c+m-l-n)%100;
         m += (i-i-a*a-b-j+j*l+l)%100;
         n += (g+f)%100;
      }
      i -= (l-h-k*a+k-m*j*i)%100;
      d -= (g-c+k-l-d*a+e-d-d*a-l)%100;
      i += (h-i*e)%100;
      k += (l-c+h*i+c+e+j+f-e-h-f-k-h)%100;
      i -= (d-b+j+a-l+a+a-i-a-b-g)%100;
   }
   d += (i-h+n)%100;
   d -= (d-c-k+f+n+h-m+i-a+f)%100;
   l -= (c+g+a+k-c-f+d+g+f*c+h+f*d)%100;
   k -= (e*c+i+b+a-j+c)%100;
   f -= (k-i+k*l)%100;
   h += (k+m-d+k)%100;
   b += (f+j+n*k+e*m+a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F23(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[51]%5 )
   {
      do
      {
         for( ; ++FORcnt[76]%5 ; )
         {
            if( ++IFcnt[37]%10 )
            {
               for( ; ++FORcnt[74]%5 ; )
               {
                  l += (n+g*a-h-h+c)%100;
                  c -= (a-e+a-n*j)%100;
                  n += (g+e-d*c-n+c+j+f*f)%100;
                  e += (l+d+b)%100;
                  g += (g+h+l-i+a*e+i+m-f)%100;
               }
               if( ++IFEcnt[50]%2 )
               {
                  m  = (m-c-i-g-b+m-k*a-n-l)%100;
                  b += (d+h-c-b-i-k-k-b+f+c+k*i*g)%100;
                  g -= (i+f+c-b-b-a+i+m)%100;
                  e -= (d+k-c+i+b-k-g-f+f*h-e+f)%100;
                  n  = (n+k+a-c-d+e-l+e)%100;
               }
               else
               {
                  i += (f-n-l-e*g-i+d-f-n-f*c+d)%100;
                  l += (n-f)%100;
                  j -= (m-g-i+b+e)%100;
               }
               while( ++WHILEcnt[49]%5 )
               {
                  g += (m-g+b-c-d-i-d-i-b+f+f-f+j)%100;
                  j += (b-d+m*i*h+g-l*i+g+d-g*h)%100;
                  a -= (f+j+d*f)%100;
                  n += (c+k-a+k*n*m+d+j*e)%100;
               }
               do
               {
                  i += (d+j-n-a+m+e)%100;
                  m += (a-l+f*n*h-i+j*m-f-f*b)%100;
                  l -= (c*n*l-k-f+c-l+l+l-h+a-h+k)%100;
                  f -= (l-k+l*m+e-j-d-c-d-h*c)%100;
                  i += (k-c)%100;
                  m -= (k+k+f+d*m+j+g+e+b+b-g-l*g*k)%100;
               } while( ++DOcnt[50]%5 );
               d -= (b*h)%100;
               for( ; ++FORcnt[75]%5 ; )
               {
                  e += (e-d-d+h*n-l*j-h-n+m+j)%100;
                  i -= (g+a+h-n+f*a)%100;
                  j  = (m-h+f+a-l*j-j+m*i*g+k*a-f)%100;
                  a -= (k*k)%100;
                  j += (j*c)%100;
               }
            }
            
            switch( ++SWcnt[25]%3 )
            {

            case 1:
            {
               if( ++IFcnt[38]%10 )
               {
                  g += (f-e+l-a+d-m+j*g-i)%100;
                  n -= (c+b*c+n+i*g*l-b)%100;
                  h += (b+d-j-h-k+a*i-f-n)%100;
                  g -= (g+h-h-b-j)%100;
               }
               if( ++IFEcnt[51]%2 )
               {
                  d += (j*c)%100;
                  i += (b-e-e-c-a-k-m+d)%100;
                  j += (c+f)%100;
                  b -= (b*j-j+i-i-g+h)%100;
                  l -= (g+i)%100;
               }
               else
               {
                  d += (f*e-e)%100;
                  n += (d*g+h+b+j-f-a-g-c-f+m)%100;
                  a  = (b+k-j+d+m-l+c-f+a-b+f*d+i)%100;
                  g += (a+n-i+l+c+c-j+b)%100;
                  d += (c+k*e)%100;
                  m -= (a-d+m*d)%100;
               }
               while( ++WHILEcnt[50]%5 )
               {
                  i += (h+c)%100;
                  n += (a+g+c-b+l-j*c+c+d*m)%100;
                  l += (h-e+g-f+g+g-a-i)%100;
               }
               do
               {
                  g += (m-a+e+d+g-a+b+m*c*c-f)%100;
                  n -= (c*i-b+n)%100;
                  f += (b+i*h+g+d*j-m+j+g)%100;
                  a  = (c*j+e+g-e-n+c*j*d+l*i+g-d)%100;
                  k += (j+h+h*d)%100;
               } while( ++DOcnt[51]%5 );
               n += (j-k-j+n-h-h+i)%100;
            }
            break;

            case 2:
            {
               c -= (n+m+n-j+l+l*f-n+c+f*n-c-h)%100;
               i += (n*g-c+c*a-a)%100;
               m -= (f+k)%100;
               j  = (k+e)%100;
            }
            break;

            default:
            {
               g += (j-j)%100;
               m -= (e-e-f+c+b-f-b+m)%100;
               d -= (e+e)%100;
               h -= (d+b-g+d+n-a+c-f-a)%100;
               n -= (d+l-i-j+j+k-h)%100;
               a += (b*c+l-n+h*k)%100;
            }
            }

            m -= (a-b-j+f*l*d+i-k*i-g+m-m)%100;
            c += (g+g)%100;
         }
         k -= (b-h+f*i*i)%100;
         f += (f-h*l+j-n-d-j-h-b-k)%100;
         h -= (m*h+k-h)%100;
         f += (f-j*n-a-g*l+f+l-a-m+i+f-d)%100;
      } while( ++DOcnt[49]%5 );
      k += (m*g+a+m*h-i)%100;
   }
   m += (k*l-j+d+h+b+i-l+i+h)%100;
   a -= (h+e+c+k*a+m-l+c)%100;
   b -= (e+i+d)%100;
   g -= (c*g-m+c*k-m+j-f+a*h-i+j+f)%100;
   h += (e+k-n+b-h+e)%100;
   l -= (e-j*c-g-i*e)%100;
   g  = (i-a-l-b+l-l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F24(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[80]%5 ; )
   {
      for( ; ++FORcnt[79]%5 ; )
      {
         if( ++IFEcnt[53]%2 )
         {
            k -= (n+h*e-k*g-c-d)%100;
            j += (a-e*e+n+m*k)%100;
            i -= (b-d+n-h+j*k+m-n+c+l-g+i+m*n)%100;
         }
         else
         {
            while( ++WHILEcnt[52]%5 )
            {
               do
               {
                  f -= (i+e*f+i+h+n+e-e+i)%100;
                  e += (i-h+b-f-j*d-i+h-h+b-h)%100;
                  k += (m+j*b+h-j)%100;
                  d  = (h*l-h*g)%100;
               } while( ++DOcnt[52]%5 );
               if( ++IFcnt[39]%10 )
               {
                  f  = (d+b+d*e-f-m)%100;
                  i  = (e-d-j+m-b+f+e-g-d+g*n+l-c)%100;
                  i += (m-l+l+c-k-g-g*j+n-l)%100;
                  b += (g-m-g-n-n-e+l-m)%100;
                  k += (c-g-b-h-m*i)%100;
                  m += (g+g-m-k+k*j-i*g-j*a+k+j-e+g)%100;
               }
               b -= (i-g*i)%100;
               for( ; ++FORcnt[77]%5 ; )
               {
                  b += (n+b-b-g-n+j)%100;
                  a -= (b-f-m+l*l*e+e*f*h+a+h*c+c+n)%100;
                  a -= (l-m-c*j*f)%100;
                  n += (m-e*a*l-f+a+n+b)%100;
                  d += (g-n-f-k-l-b+i*f*i+h*d*g+d)%100;
               }
               
               switch( ++SWcnt[26]%3 )
               {

               case 1:
               {
                  m += (i+f+i-n-c+d+f+c+j-n)%100;
                  c += (n+m)%100;
                  n -= (b-c*c-d-d*j-n+h-f-g-h)%100;
               }
               break;

               case 2:
               {
                  k += (f+i-e-f-i-b+e-g-h-b-l)%100;
                  l += (c+e-b+k+b-e-m+b*k-i+j-a)%100;
                  k  = (b+h-c*g-b+m*g*b-m)%100;
                  i  = (n-d+l+f-a+f*j+a-b+j-e)%100;
                  e  = (j-n+c+k+e)%100;
               }
               break;

               default:
               {
                  k -= (j-g-h-m+h+g)%100;
                  g += (m+l+d+h+m+d*h)%100;
                  b -= (a+m-b+c+d+n-d*e-b+g*n*j)%100;
                  h += (m-l+c-b*j+l*f)%100;
               }
               }

            }
            if( ++IFEcnt[52]%2 )
            {
               f += (h-c-a+n)%100;
               d -= (c+h+e*a-n*e+g+g*c)%100;
               b -= (e+g-g-i-m)%100;
               i += (m+g+j*j*d+i)%100;
               a += (d-c-c-b+i+e+e*g-c+c-n*b*m+j)%100;
            }
            else
            {
               while( ++WHILEcnt[53]%5 )
               {
                  j -= (k*m+g+l+b+i*h*c-k+i-l-f*f-i)%100;
                  b -= (b+n-m-g+e-a+i-c*d-n)%100;
                  c -= (f*g*h-l-f-c-f)%100;
                  a -= (f+i)%100;
                  g -= (i*g-m+l+k-j-g+k+a+k-m-m-e)%100;
               }
               do
               {
                  l += (a+m*k*l+l*a-l-m-l-g+e+k)%100;
                  b += (e-k-h-c+k*g+k)%100;
                  i += (e+l)%100;
                  n -= (l+k+k-c+m)%100;
                  b += (i+a-i+l+g-l-a+k*c+j)%100;
               } while( ++DOcnt[53]%5 );
               for( ; ++FORcnt[78]%5 ; )
               {
                  k -= (d-a)%100;
                  g -= (m-k+k+a+i*k*j-l+c+l)%100;
                  f += (a+d)%100;
                  k += (f-k+c-i+m*c)%100;
               }
               if( ++IFcnt[40]%10 )
               {
                  j -= (l+j+j*c-l+a*g+a-c-b*n-c+k-b)%100;
                  d -= (m+a)%100;
                  b += (b*f-f)%100;
                  f += (h+c-c+a*k*d+f-k-d+e*j+b)%100;
                  f -= (f*b*m-g-m+h*j-c-b-e-i-l+e+k)%100;
                  i += (h*g-e+m-n*m+d+d-l-h+c+b*d*h)%100;
               }
               l -= (i-d*d+c-h+n)%100;
               a -= (c-n)%100;
            }
         }
      }
      a += (e+f-j-n+l+a-n+e+i+e+i)%100;
      b += (f-m+c-h+b*n+k-j*c+b-g+l+h-h)%100;
      k -= (h+k-n+j-l+f-c-i+d-a*n*e+g)%100;
      f -= (m+j*j*a-j*g+j+i*a+m+f-a+k)%100;
   }
   n -= (f+d*j*c+l+i+n+f-c)%100;
   b  = (i+h)%100;
   k -= (k-b-k*m)%100;
   j += (l-e+a*k*d+g-f+k+j*g+n-m)%100;
   g += (c-l-h*f)%100;
   f += (d-a)%100;
   c += (g-i-d+j+l-j-l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F25(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[84]%5 ; )
   {
      if( ++IFEcnt[55]%2 )
      {
         g -= (n-c+b+m*k+a-d)%100;
         k -= (j-h+c*h-l-h-l+b*i*b+c-h)%100;
         d  = (h*d-m-d)%100;
         g  = (m+d)%100;
      }
      else
      {
         while( ++WHILEcnt[55]%5 )
         {
            do
            {
               f += (e*e+f*a-b)%100;
               for( ; ++FORcnt[81]%5 ; )
               {
                  g  = (h-f*l-j+b-g-h-n+h-l*g-l+l)%100;
               }
               
               switch( ++SWcnt[27]%4 )
               {

               case 1:
               {
                  h  = (a+c-h+m-i-b+g+b+j*g+g)%100;
                  d -= (j-m)%100;
               }
               break;

               case 2:
               {
                  d  = (n+e+f*e*h+n-d-j)%100;
                  i -= (h+i+n+n-i-n-f-n)%100;
                  m  = (b-m-f-k-i+b-l-a-l+g+c-f-m+m)%100;
                  k += (k-c-b+b+c+f-j-k-c*a-h*m)%100;
                  l += (j+c-k+f*j-g-f)%100;
               }
               break;

               case 3:
               {
                  e += (j+e+c+e)%100;
                  a -= (l+c+l-c*j*h*j-h*j-d-j+b-f)%100;
                  i += (d*k+h-j-d-b)%100;
                  k  = (l+l-k+f-j+h-d)%100;
               }
               break;

               default:
               {
                  i -= (e-a-n-h+e-l*h-k+m-e*f+m*d)%100;
                  k += (a*d-e+b+c+l*j-e*n)%100;
                  k += (d+b+e)%100;
                  e  = (j*m*c-f+f+n-j-b*g)%100;
                  c -= (a-m)%100;
                  k += (h+k+a+h*d+g+b-k*d-d-g+h)%100;
               }
               }

               if( ++IFcnt[41]%10 )
               {
                  k -= (n+d*b)%100;
                  g -= (m-f+a+n-l+j-l-h-a-h+b+l+e+c)%100;
                  a += (g*c)%100;
                  k += (d-b+g-d-n+k+n+f)%100;
                  i -= (j+b-j+g*k*i-b+l-e-b)%100;
               }
               if( ++IFEcnt[54]%2 )
               {
                  g -= (e+h*f-m-m-f-m)%100;
                  k += (f*l-a+g+j)%100;
                  h  = (h+k+f-k*j*f+j+j+b)%100;
                  e -= (g*m+n*f+i*b)%100;
                  h  = (a-e+i)%100;
               }
               else
               {
                  k += (j*n*f)%100;
                  i -= (j+m+d)%100;
                  k += (k+k*d-h-i+c+l-n+k*g-a-f)%100;
               }
            } while( ++DOcnt[54]%5 );
            while( ++WHILEcnt[54]%5 )
            {
               do
               {
                  h -= (h-k+h+j-l)%100;
                  f += (n+a*a*j+e*l)%100;
                  i -= (i+b+e*d)%100;
                  i -= (i-k*e-h+i+c*g+m-f*n)%100;
                  c += (k-m)%100;
                  f -= (h-l*f-a-h+h*k-k-h-b)%100;
               } while( ++DOcnt[55]%5 );
               for( ; ++FORcnt[82]%5 ; )
               {
                  f += (e-e-c+g+b-k-d-m+a*k+m-c-n)%100;
                  d += (j-c-h-c+j-d-e+n)%100;
                  f  = (a-c+k*h)%100;
                  n += (a+j*h+j)%100;
                  i += (b+f-l*k-k*m*k+m)%100;
               }
               for( ; ++FORcnt[83]%5 ; )
               {
                  d -= (c*l-h+l-b+g+d*h+k-c)%100;
                  e -= (c-c+l*k-d)%100;
                  a  = (c-n+f*g-n-h-i)%100;
                  d -= (f-f-e-g+d-e-j-c-h)%100;
                  b -= (d-d+k-k-e-f-k-j+n+b)%100;
               }
               g += (m+c-e)%100;
            }
            n  = (g-l-a)%100;
            i += (g-b)%100;
            g  = (l-h)%100;
            g -= (h-k)%100;
         }
         b += (n+f)%100;
         e -= (m+n)%100;
         c += (l-l+c-f+k*a*c+i+h-l)%100;
      }
      l  = (f+j-j+c*g)%100;
      g -= (i-m-k+g+i-g-m-c-c+b+d-m+m+h)%100;
      i  = (c-c+k+b)%100;
      b += (k+a-a-n+d+i+b-h+h)%100;
   }
   m -= (l+i+c+m-f*i+h+b-g+e)%100;
   c -= (m-a+j-b-c-g-k+k-m+b-g-d)%100;
   e += (c+i-k+b-a-e*l*n-j+n-e)%100;
   l -= (i-c*k+i-l+i+g+n-g+k-k-a+i+d)%100;
   i -= (k+g-g+k-h*c+n+k-d-b+h)%100;
   k += (m*e-i-e-d*b*h-e+f)%100;
   f += (h*d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F26(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[58]%2 )
   {
      l -= (g-d-a*j*n-k)%100;
      j  = (b+h-g-g+b*b+k)%100;
      m -= (j-h+l+i-f+k-c+a-n-n-a-j+n*l)%100;
      d += (n-g*m)%100;
      g  = (g-f+n)%100;
   }
   else
   {
      while( ++WHILEcnt[58]%5 )
      {
         do
         {
            if( ++IFcnt[42]%10 )
            {
               k += (k+m+b+b)%100;
               for( ; ++FORcnt[85]%5 ; )
               {
                  l += (b*n*f*f+h+k+m*f+g)%100;
                  l += (f-k-l+h*g+h-e-l+g+a-m+n-l)%100;
                  k -= (b+k+n+i-f)%100;
                  n += (n-f-k+f+j+e+a+b+k*f-h-d*j)%100;
               }
               
               switch( ++SWcnt[28]%3 )
               {

               case 1:
               {
                  e += (d-c)%100;
                  k += (h+f*d+k)%100;
                  e += (n-i+j+l*e*k-c+k+n-e*h)%100;
                  a += (h+b)%100;
                  i  = (f-e-l-h+j+g-e-g)%100;
                  b += (h*g)%100;
               }
               break;

               case 2:
               {
                  j += (l*k-g*f-d*b*d)%100;
                  n += (i+m-b-l+k-c*n-d-d+g*e)%100;
                  d -= (g+g+l+h+f-d+b-k-m)%100;
                  m  = (d-f+g+b-e+f+n*a*d-i-i-j)%100;
                  n -= (l-h-g*g*j*b)%100;
               }
               break;

               default:
               {
                  i -= (c*h)%100;
               }
               }

               if( ++IFEcnt[56]%2 )
               {
                  h += (m+n*c*m)%100;
                  i -= (l*k)%100;
                  m -= (b*i+n+c-k+e)%100;
                  c += (b-i+a+e+b*g-j*h-c)%100;
                  a += (j-k+a-h-b-e*i-j)%100;
               }
               else
               {
                  i -= (j-h)%100;
                  m += (g*a*j-a*j*c-d-j+n*g+f+a+h+m)%100;
               }
               while( ++WHILEcnt[56]%5 )
               {
                  g -= (m-l*f+l+c+e-b+j-i)%100;
                  m += (a-l*f*a-f+k-a+h+a)%100;
                  h  = (k-h-h+j+e+c*l*b+i+m*e)%100;
                  a -= (k-k+g+e-d*e-h-c+j-c-b*i)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[86]%5 ; )
               {
                  m += (d+n*h+l*n)%100;
                  b -= (f+n+e*e-b+b-i-c-f*g-b*e+b-k)%100;
                  m += (j+j*l+g-f+m-j+k)%100;
                  l += (g-c+m-a+n+l+i)%100;
                  l -= (l+a+e+b+l-k-k+b*k*h+h-l)%100;
               }
               if( ++IFcnt[43]%10 )
               {
                  l  = (d-g*f+f+n+c+l-a+e+l)%100;
                  c -= (e+d+i*f+c-d+c-f+n+b-h+m+g+h)%100;
                  l += (n-c)%100;
               }
               for( ; ++FORcnt[87]%5 ; )
               {
                  h -= (n-l)%100;
                  e += (l-g*d-a-f+k)%100;
                  e += (n+g-h*h)%100;
                  d += (g*g-n-h*k)%100;
                  n -= (b+l+k*f+m*j+m+a)%100;
               }
               if( ++IFEcnt[57]%2 )
               {
                  d -= (c+h-n-d+i+b-m-a+k-j-m-n-k)%100;
                  h += (b*i+l+l+g)%100;
                  b += (k-m+b-h+b-d-e+e-h*n+g+e+g)%100;
                  b += (a+d)%100;
                  e  = (h+i+l*e-h-a*l-f)%100;
                  f -= (d+h)%100;
               }
               else
               {
                  e += (j-g+f-e-b-k+l-b+b-m-g-f+c-e)%100;
                  n -= (c-a-e*i)%100;
                  k -= (j*c-e)%100;
                  b += (e+j-g-k*a)%100;
               }
               while( ++WHILEcnt[57]%5 )
               {
                  f -= (m-a)%100;
                  c -= (n*m)%100;
                  n += (i*f+f*m)%100;
                  h += (i-e+m*f+j+h)%100;
                  j += (i-b+e-a)%100;
               }
               f += (e+b-i-f-l-b-n+e)%100;
            } while( ++DOcnt[57]%5 );
            f += (j-f-a-n-d-k+m+b*l+j+d+j-d*m)%100;
         } while( ++DOcnt[56]%5 );
         h += (f-l+j-m-n)%100;
         k += (d+a+b+i+e+g+n*j-d)%100;
         m += (k-b+l+m*i+c-d)%100;
         m  = (k-g+f*l+a-n)%100;
      }
      i += (a+a+f+d-f*f-j*d)%100;
      j += (d+f-e-g+k+f-e-j-e-i)%100;
      m += (k+b-f-a+j+n)%100;
      k += (l*n)%100;
      m -= (k-l-g+m)%100;
   }
   n += (f-n*f-h*g)%100;
   g  = (k-m-b*c+c-c*g+n*g-i+a)%100;
   i -= (d-a+l+a-b-e+d*n-j+a+k*l+n+m)%100;
   a -= (f-c-a-e-l)%100;
   d -= (j-g+i+c-j)%100;
   k -= (d-h)%100;
   i -= (a+b+j-m-g+m-m+n*d-l+f-i-j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F27(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      c += (i-m)%100;
      for( ; ++FORcnt[91]%5 ; )
      {
         
         switch( ++SWcnt[29]%3 )
         {

         case 1:
         {
            if( ++IFcnt[44]%10 )
            {
               if( ++IFEcnt[59]%2 )
               {
                  i -= (i-b)%100;
                  c -= (g*d-g-j-e+a+n+n-g)%100;
                  d -= (j+l-a-j-m+j)%100;
                  m -= (f-j)%100;
               }
               else
               {
                  j -= (d+d+d+n+a*l-e*i)%100;
                  l -= (n*d+f-n*h+g*a*b-a*a+m)%100;
                  m -= (h+b-f-j+c+e-f+g-e-b*c-n-d*a)%100;
                  j += (c-m)%100;
                  e  = (j-a)%100;
               }
               while( ++WHILEcnt[59]%5 )
               {
                  b += (h-h+n-f*l+e+l+b-c-n+d*c-n)%100;
                  c  = (j*h)%100;
                  b += (d+c)%100;
                  h += (e+h*f-n)%100;
                  m += (e-e*g)%100;
                  l  = (c-b-k+g*j-b+f*a-k+f*j+d)%100;
               }
               do
               {
                  i -= (c-a)%100;
                  b  = (h+c*l+i-m-n)%100;
                  e -= (h+k+g+f-i+d-l+m-k+n-k+j*c)%100;
                  g -= (f-l)%100;
                  a += (m-m-f*d*c+g+n-e)%100;
               } while( ++DOcnt[59]%5 );
            }
            for( ; ++FORcnt[89]%5 ; )
            {
               for( ; ++FORcnt[88]%5 ; )
               {
                  i -= (k-i-e-h*e+m*g+m*e*a*k-f*c*d)%100;
                  j -= (n-j*g-g-i+e*k-k-k+b*g)%100;
               }
            }
            if( ++IFEcnt[60]%2 )
            {
               
               switch( ++SWcnt[30]%3 )
               {

               case 1:
               {
                  a += (n+g-e+l-e+b-k*h+a+b*e+j)%100;
                  g += (a+k-b)%100;
                  a -= (n+b*f-g-d-g-c-l+e+g-l-m*c-g)%100;
                  d += (j+j+c+k+n+c-f+b-a)%100;
               }
               break;

               case 2:
               {
                  h -= (f*k+n+n-k*e-c+a*l+e-m*f)%100;
                  i += (f+i-b-e-d*k+e*m+j*e+m+i+c)%100;
                  j += (h+k-a-e+n*e+f-g+e-l*h)%100;
                  f -= (c*g-f*m)%100;
                  i += (l+m*i*h-c-g-d)%100;
                  h += (k*g+f-m-f)%100;
               }
               break;

               default:
               {
                  g += (l+d)%100;
                  f -= (b+i*b-c+a-c+d-n*b+i-n-j+n)%100;
                  j -= (g-e)%100;
                  n -= (g-n-e*l-e+j-g-n*d*l)%100;
                  f += (f-d+k+h-j*m*i-d+d-j)%100;
               }
               }

               d -= (c*j+f+m*n+f+b+c+n-a)%100;
               l -= (l*j+e+k+d*i*n*k-i+m*m-m+g)%100;
               g -= (g+h)%100;
               n -= (m+n+n-l-f)%100;
            }
            else
            {
               while( ++WHILEcnt[60]%5 )
               {
                  f += (g+i)%100;
                  h += (g-l)%100;
                  m -= (d*f*g+k+i-i+f-h+e+n+d)%100;
                  f += (k+k*a+c-c-h*a+b)%100;
               }
               do
               {
                  c  = (a-e*k-j)%100;
                  j += (f-e+m*c-j+h-m)%100;
                  k -= (g-l-c-c)%100;
                  g += (l+m*n*n*h+j-d-e*d-l+b+j)%100;
                  h += (d-a*e*a-c-d)%100;
                  k += (e-i-n-h-i*n)%100;
               } while( ++DOcnt[60]%5 );
               if( ++IFcnt[45]%10 )
               {
                  n += (g-k-j+g-h+e)%100;
                  n -= (i+l-h+i+d-g-f+a+b+k)%100;
                  a -= (g+j-l-d+m-m-k-i*d+a+e-n*f)%100;
                  j -= (h+g-a+a-j-g+d+b-c*l+h)%100;
                  b += (b+i-k*c-h-c)%100;
               }
               h -= (g+i*a)%100;
               for( ; ++FORcnt[90]%5 ; )
               {
                  f += (d+k-l-c-c-b+b+d-d)%100;
                  l -= (d-k*n+i)%100;
                  g += (f+f+d+g*m-k+k+j)%100;
               }
            }
            c -= (h-c-i-k+n*m*n*a+c*h)%100;
            n += (h*g+j-l+g-n-b+e+d-a-l+i-j-k)%100;
         }
         break;

         case 2:
         {
            g += (j*m+k-a-i-a+l-c*d-k*e+i-h+h)%100;
            h -= (b+h-k-b)%100;
            b -= (g+e)%100;
            h  = (k+m-c*a+d+j*b+i)%100;
            l += (h*a-m+j+h-h+a+g-e)%100;
         }
         break;

         default:
         {
            h -= (f-b+n-c-i-m+a+i*c*l+j*a-b+g)%100;
            j += (i+h-h+d*i+h+f+f-e*c+i)%100;
            d -= (a+l+j)%100;
            a -= (h+d*e-m)%100;
         }
         }

         j -= (c-e*g*f)%100;
         f  = (l-e-m+f+d+n)%100;
         h  = (b+k+b+m-c*h+m+f+f*d)%100;
         e += (e-k-l+k)%100;
         k += (m-h+l+d)%100;
      }
      f += (a-l+l-f-n*i+l-f+f)%100;
      k -= (g-l+b-g+i+l+a-h+k*b*b)%100;
   } while( ++DOcnt[58]%5 );
   m -= (f-f+a*e-j-j-i+d+c*m)%100;
   m -= (b-h*b*d)%100;
   i += (a+l+l-b+n*j)%100;
   c -= (j+j-b+c)%100;
   n -= (j-j*f*a-k+j-a-b-l-j-g)%100;
   b += (c*m)%100;
   l -= (e-h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F28(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[62]%2 )
   {
      f += (d*i-h+l-d-f+a*i+k-b-n+j+j)%100;
      e -= (g-k-c-h-l*b*i+c+a+n-i*g)%100;
      e -= (g-k+g-l+b*k-k+i)%100;
      k -= (h-j+j*d-b+k*h+g-j*m)%100;
   }
   else
   {
      while( ++WHILEcnt[62]%5 )
      {
         do
         {
            for( ; ++FORcnt[93]%5 ; )
            {
               if( ++IFcnt[46]%10 )
               {
                  i += (n-b-k*n-n*d-n-a-m-a)%100;
                  j += (h+f+m+b-b-i-d-e-g-i+k+l-m-a)%100;
                  d += (g+g+c-c-k+n*h*d)%100;
                  c -= (c+d-c)%100;
               }
               for( ; ++FORcnt[92]%5 ; )
               {
                  j += (c-j-g+f+i-l+k-a+g*j*m+h-f)%100;
                  k -= (m+l-h-b)%100;
                  d -= (j+m+b+e-e-g+g+j-b)%100;
                  g += (h+m*j+b)%100;
                  h  = (d+i+c+a+i*m+m)%100;
                  n += (l-e+f)%100;
               }
               if( ++IFEcnt[61]%2 )
               {
                  b -= (k*j-d+n-j)%100;
               }
               else
               {
                  k += (d+j-k-a-e*f+a-f-m+c+k+m-n+b)%100;
                  m += (d*h-i+b+i+l+g-m+j-f+m+c-f+l)%100;
                  f -= (a-k-m-m-d-h+a*c+h+m)%100;
                  k -= (k-j+k)%100;
                  b -= (j+n-k+n+m*l*e-i-k)%100;
               }
               while( ++WHILEcnt[61]%5 )
               {
                  l += (l+k*a-l*g*l+b*h+j-b+m+m-d-d)%100;
                  f -= (d+g-a-e-e)%100;
               }
               do
               {
                  e += (i*i+d)%100;
                  b -= (i+h*a*c+e)%100;
                  b += (n-i+b*g-h+c+m-k*g-f*d)%100;
                  d += (h+b+n-n*i+e-e+b-g+g+b+j-l*h)%100;
                  a  = (k-e-m*a-k-f+n+k*n-k+g+c)%100;
               } while( ++DOcnt[62]%5 );
            }
            h -= (m*f+c-n*a+m+l)%100;
            for( ; ++FORcnt[94]%5 ; )
            {
               
               switch( ++SWcnt[31]%4 )
               {

               case 1:
               {
                  k -= (e-d)%100;
                  a -= (g*n-f+f-m-e-h+j*b*f)%100;
                  n += (i+b+i+g-k-h+c+c-a-d-j+m)%100;
                  k += (h*a+n-m+g+c-n-n+b*d)%100;
                  c += (k+i+j+k-m+a+n*l+a-e-k-c+i+l)%100;
                  h += (g+b+j+i+f+d*d-m+d*c-d*j)%100;
               }
               break;

               case 2:
               {
                  g -= (a*f)%100;
                  k += (c+h+d*b+l)%100;
                  l -= (g*d+e+c-f-n+a+d+c-n)%100;
                  m += (c-f)%100;
                  d += (g*l+g+h+h-h)%100;
               }
               break;

               case 3:
               {
                  l += (e-e-f-c-l+a-a+n-f-g+m+g+h-n)%100;
                  c -= (k-a-d-d*f-l+i+f*m)%100;
                  i += (f-g-m-h*h-e-k+m+b+b-c-l+l)%100;
               }
               break;

               default:
               {
                  d += (n+b+l+k*c+j-n+a-j+l-g-m+h-l)%100;
                  d -= (k+e*l+j)%100;
                  f += (n+d+g-h-d-e*c+l-f-h*a-h+m)%100;
                  l += (l+i*f-d+m-n-f+e+h+l+b-f-j-j)%100;
                  f += (n-a-j*m-i-m+a-g+n+k+k+h)%100;
               }
               }

               e -= (b-d-k-n+a+e-j-g-f-e)%100;
               l += (l+d+b-n-g+g-j+i-i-i-h-k-l)%100;
               j += (i+n-b*n-e-k*f+d)%100;
            }
         } while( ++DOcnt[61]%5 );
         k += (k*m*n-i-a-b)%100;
         d += (l+b-l+g+f-d*b-j-i*l*c+h)%100;
         k -= (g*b-a+a)%100;
         n += (f-c+h*b+d)%100;
      }
      g -= (d*n)%100;
      b -= (k*e-m+g+d*b-e*f*h+a+b-f+k+h)%100;
      d -= (f-j*i+i)%100;
      c -= (h+c*l*d+b+j+e)%100;
      f += (d-d-n)%100;
   }
   m -= (h+c+e-i+g-m-j+n*i+j*a+k)%100;
   e += (f+l+c+b)%100;
   n += (g+e*e*e*h+j-c*c-a+f+g*i+d*j)%100;
   c -= (e+j-k*n+f-n-d)%100;
   d += (i*i-c*j*j+m+d*a+c-n-d)%100;
   a -= (d-e*d*i*f+m+g)%100;
   c -= (b-i-m-k-f*h+n-d-i)%100;
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
         m += (b+g-n+b-d*k-e*d*d-g)%100;
         n -= (l-a-e-c*c-b-e-h-i-a)%100;
         n -= (l-h*b-l+h-b+l-c-b-h+m*j-c*l)%100;
         c  = (e-b-f-c+a-f-e+b+m+b-f-l*j)%100;
         b += (j*k*d-b)%100;
         f += (a-k+g+m+c)%100;
      }
      else
      {
         while( ++WHILEcnt[64]%5 )
         {
            do
            {
               for( ; ++FORcnt[95]%5 ; )
               {
                  h -= (n-m-n+j-h-j*a-f*k-m*k-g+h)%100;
                  g -= (e-c+j+m)%100;
                  g += (l-n*g+a+f)%100;
                  l += (h-n*g-b-d-m-c-c*g+m-b+a+h)%100;
                  i -= (f+c-g+h)%100;
                  c -= (b*n+g-c*e+n+a-b+n+j+i)%100;
               }
               for( ; ++FORcnt[96]%5 ; )
               {
                  j += (m-g*c*i+b-k*e+m-l-k-a*k)%100;
                  d += (b*m+n)%100;
                  h += (i+m+f+l+k+g+i+i-b+k+d)%100;
                  g  = (g-h*l+g-d*l-n+e-j+a-i)%100;
                  a += (f+f*f*n-i+b)%100;
               }
               if( ++IFEcnt[63]%2 )
               {
                  j += (f-i*j*g*g+m*f*d+b*i+m*c+d-e)%100;
                  n -= (d*b-j+f+i+k+l+d-e-c-a)%100;
                  k -= (k-e+k*h+n)%100;
                  i += (h*d-a-c+d-d)%100;
                  k -= (a+f+e+i-j*d-j-f-i*d-e-l-c*m)%100;
               }
               else
               {
                  h -= (g-l+k-n+d+i+j-i+i+h+n-l+j)%100;
                  l -= (j*l+f*e+h)%100;
                  a += (f+g*k*g+i+j-n-l-m-h-d*e*g)%100;
               }
               while( ++WHILEcnt[63]%5 )
               {
                  c += (j*i)%100;
                  l -= (h+e*i)%100;
                  m -= (i+n)%100;
                  n -= (m*d+a+c-f)%100;
               }
            } while( ++DOcnt[63]%5 );
            do
            {
               if( ++IFcnt[47]%10 )
               {
                  h += (l+b+c+i+m*k-l+l+j*g-f+e+h-n)%100;
                  i -= (i-m)%100;
                  g -= (g+n-m-f-g-i*g-i-f)%100;
                  j -= (k-a-m-b-e+d)%100;
                  l += (g+m+m+f-l-c)%100;
               }
               m += (n+c*j+h*a*m+e-b*c+a+l+n)%100;
               for( ; ++FORcnt[97]%5 ; )
               {
                  l -= (g+h-j*l+n*m-a+k)%100;
               }
               
               switch( ++SWcnt[32]%3 )
               {

               case 1:
               {
                  l -= (e+g+d+n)%100;
                  i += (i-n-g+j*i-n+d-f)%100;
               }
               break;

               case 2:
               {
                  b -= (f*l*h-f-a+l-e-d+m-c+n+n)%100;
                  g -= (g+k+m-d-i*a*a*m-n+j)%100;
                  j  = (b-d-k+b-i+g+m*f*f-d+n+i-n)%100;
                  a += (m*c)%100;
                  h += (e+b-n+b*l-l*i-e-b+j-e+b-k)%100;
               }
               break;

               default:
               {
                  n += (h+d-l-n-m-j*i-m*j-f-h)%100;
                  f += (k*l-i-k-j-d*i-d+i*b+g)%100;
                  f += (k-n-n+k+m*n-a+i)%100;
                  k -= (e+h-j+e+f+l-n)%100;
               }
               }

               h -= (l+i*m-l+n+m+h+c*n+j)%100;
               g  = (g+c+f-a-l*c+n+h-g+f-n+d)%100;
            } while( ++DOcnt[64]%5 );
            e += (c+g+d*b-c-l+n-b-i+j+f+e)%100;
            d += (h+d-c*b*i-j*g-l-c-n-a+g-m)%100;
            f  = (e-k+d-c)%100;
         }
         a -= (g*f+a+n+h)%100;
         n -= (g*a+b+e-g-k+h-i+i+h-e-n)%100;
         g -= (f+g*i-l+e-m*l-a*j)%100;
         e += (b-n-d-c-m*e-n-a+d+n-h+e-n)%100;
      }
      k -= (d-f+f*c)%100;
      k  = (n*h*e-c+f+k-f)%100;
      m += (h+j+l-k+c-m-e+k*a-f)%100;
      f += (l*d*c-n*g-c-l+e)%100;
      h += (l+k-i+a-g-f+d+c-g)%100;
   }
   a += (d+b+h+c*a+n)%100;
   k -= (i-g+n+a)%100;
   g += (a-n-d-d-k*i-h+n+l*e)%100;
   i -= (n*e)%100;
   l -= (i-i-f-i+n-g-i+m+g+b)%100;
   e += (a-m*l-m+g-h*a-l)%100;
   f  = (a*b*k*j+m+n-a+l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F30(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[66]%2 )
   {
      i += (n-k*e*d+f+g-k)%100;
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
                  e += (c+c+g)%100;
                  j += (h-e+g+n-b+l-f+c-d-f+b+a)%100;
                  f += (i+a-f-e+m-i*n+n-m+d-e-f+l)%100;
                  m -= (f+g*d-n+g*m+j)%100;
                  e -= (d-l-k-f-n-c-i+i-j)%100;
                  n += (g-a-g*g*g+h*b+n)%100;
               }
               for( ; ++FORcnt[98]%5 ; )
               {
                  h += (h-d*f*h-a-j+a-b-n-i)%100;
                  g += (g*j-g+f)%100;
                  j += (n+h*h)%100;
                  b += (d+a-j)%100;
                  h -= (a-d-e+c-n)%100;
               }
               if( ++IFEcnt[65]%2 )
               {
                  c -= (c-k*j)%100;
                  l += (e-m)%100;
                  c += (d-h+d+d-f+e-i-i-j-f-i-k+m)%100;
                  a += (i*e+i+k-g+n*m+l+f+n+h-c+m+m)%100;
               }
               else
               {
                  l -= (b-d-l+i+f*k+b+f-e+e+k)%100;
                  m -= (a+a)%100;
                  j -= (a+h-a*g+c+h-k+e-i-k+f+e-j)%100;
                  j -= (f*e)%100;
                  b += (a-m+k-i+m+d)%100;
               }
               while( ++WHILEcnt[65]%5 )
               {
                  h -= (c+b+k*e+a-d-f-c*f-c+l)%100;
                  k += (n-m-a+l+j+k*g-c*c+m*n)%100;
                  m += (l+j+f*f-e-a)%100;
                  g -= (l*b-h+g-f+j-l+a+h-k-f)%100;
                  i -= (l+e*h+m*j-i+f+i-k+f+a)%100;
                  a -= (j*e)%100;
               }
            }
            do
            {
               a += (d*f)%100;
               for( ; ++FORcnt[100]%5 ; )
               {
                  d -= (n*i-f-m+m-h*g+b+d+h-h+m*i-i)%100;
                  h -= (k+k-a+i+m-c+k+a+a+k)%100;
                  i += (h-e-a+h+f)%100;
               }
               
               switch( ++SWcnt[33]%3 )
               {

               case 1:
               {
                  b += (e-a-d-i+d-a-j+b-k-g)%100;
                  d += (j+m-m*n-c+b)%100;
                  g -= (j-f+c*i+a+d+b)%100;
                  i -= (l+c+k-c+n*n-g+g+i+e)%100;
                  h -= (f-l-a+i+l*e-d*j+n+l-e+k)%100;
               }
               break;

               case 2:
               {
                  m  = (k+i+f*g-b-h+n-c+e)%100;
                  b -= (h-k*k+g-b-e-e-g)%100;
                  a += (l*m)%100;
                  b -= (g+g)%100;
               }
               break;

               default:
               {
                  g += (l+f*h-m*j-e-h+h)%100;
                  d -= (b-c-i)%100;
                  m -= (m+e)%100;
                  c -= (l+a+g+e-b-k-l+h-c+a*f-d)%100;
                  i -= (h-j-d)%100;
                  k += (l-c-m-i*n+d+b-i-a+l*h-b-g-k)%100;
               }
               }

               if( ++IFcnt[50]%10 )
               {
                  e += (m-h)%100;
                  m  = (a-b+e*e+i+i+b*n-d+i-c-n)%100;
                  b += (g+f+f-l)%100;
                  a += (j*k-g-l-l+n*i*i+d+k)%100;
                  e  = (k+k*m-g+i+g+h+d-f-g+l*b*j)%100;
               }
               h += (h*c+c*l+d*m-f*k*e+l-c-d-i-g)%100;
            } while( ++DOcnt[66]%5 );
            n -= (k-k+g*a)%100;
            g += (b+h+n+a*l-g-g-l-m+d)%100;
            j -= (c+j-f-e*a+c-f+k-g+k)%100;
         } while( ++DOcnt[65]%5 );
         d += (j-h+j-f+h-e-m-g)%100;
         l  = (a-m)%100;
      }
      l -= (n-i*k+n+e+f-n-l-n)%100;
      b -= (d+n+n-g+b+b+a-j+k+j)%100;
      m += (l+m*m-i+j-i+k-d+c+e-l)%100;
      g += (l+b+n+c-c)%100;
   }
   k += (l*n)%100;
   g -= (c+n+n-i-c*m-c)%100;
   k -= (g+b-m+c+c+j)%100;
   n += (f-g-d-d*h-k)%100;
   b -= (i+d+l-j-k+g+d*k*l*n-g-d)%100;
   c -= (b-m+d+c*m*l*c*m*l+a+c)%100;
   b += (b-n+j+b-n-g-f+l*m+m-a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F31(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[69]%2 )
   {
      b += (j+e*e-b-b)%100;
      i -= (m-j)%100;
      h -= (k+b-k+g+j-l-j-f-m+h)%100;
      a += (g-a-k)%100;
      l -= (i-e+f*m*h*l-c)%100;
      d += (d+f)%100;
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
                  a -= (c-i*g-n-j-a+h)%100;
                  f += (h+l-d)%100;
                  i -= (f*m*f-l*m-n+k*h-i+j*j+j-d)%100;
                  i += (l-b-m+i*n-b+c*l-l+f-h-g)%100;
                  e  = (e*f-c-c*j+i+a-e-g+l*m-n+g)%100;
               }
               if( ++IFEcnt[67]%2 )
               {
                  f -= (h-i-j-l-e+i-f-a-a+a*a+a)%100;
                  i += (d+m+c*i-c-k)%100;
                  h += (h+a-i-a-i+m-a+k-c)%100;
                  b += (l-a-n-b-j+m-a+h)%100;
                  f -= (a-k+l-e+d+n-b-m+b-f-i+n-k)%100;
               }
               else
               {
                  j += (c-d-l-m+d*j*h+m*f+b+b-g+m)%100;
                  n -= (a+e)%100;
                  g -= (l+i)%100;
               }
               while( ++WHILEcnt[67]%5 )
               {
                  g += (e+m-i+i+e+m+b+b+b-h+m)%100;
                  d += (h+b)%100;
                  a -= (a-n+m+n)%100;
                  h -= (g+l+e-k*k-l-d+f*k+d-j*n*f+j)%100;
               }
               do
               {
                  e += (j-h-b+c-c+n)%100;
                  h -= (l+k)%100;
                  k += (b*b*d+c+k)%100;
                  c += (i+k+k*j+l*i-b-k)%100;
                  f += (l+m-d-a-h-l*a-c+j)%100;
                  d  = (k-h+j+h*g-f-c+i+n*h+c-a*f-g)%100;
               } while( ++DOcnt[68]%5 );
               if( ++IFcnt[51]%10 )
               {
                  c -= (h+a+f+b+b+a-k)%100;
                  i += (a*i)%100;
                  m -= (e*m-c-e*n)%100;
                  g += (d+i*b-e+e-i+i-g*g-f)%100;
                  j += (m-n-e*j-l+a+k-f-g+n-a)%100;
               }
               k += (a+j-k-m)%100;
            }
            for( ; ++FORcnt[103]%5 ; )
            {
               
               switch( ++SWcnt[34]%3 )
               {

               case 1:
               {
                  k -= (m-i*j)%100;
                  k -= (l+b+j-f-f+n*h*b-c-k*b+k+e)%100;
                  h += (b+m+b*l+h+i+l-d+i+c)%100;
                  l  = (f+h+g*k+j-a-k-c)%100;
               }
               break;

               case 2:
               {
                  g -= (c-i-m+b+l+n-m)%100;
                  i  = (d*a*g*n+c+j-e-j-c-b+k-h-j-i)%100;
                  j  = (h-j*i+l+n+n*a*e+b+c*k-e)%100;
                  j -= (e+g+l*l+a)%100;
                  e += (d-e+a+a+m+c-n+h-f*d)%100;
                  n += (n-f+n+b-j-n*a+l+g-c)%100;
               }
               break;

               default:
               {
                  m -= (c-c+h-a+m+b+j+c*m+g*h+j*a)%100;
                  a -= (f-e+d+i-j-d-c+i+f+g)%100;
                  f -= (c-h*f*g+m+d*k+a-i-h+d)%100;
                  d += (d*l-f-j*h-n)%100;
                  e -= (f+k-d*e+g+n-k+m-c-l-l+l*e-b)%100;
               }
               }

               if( ++IFEcnt[68]%2 )
               {
                  j += (e-f-j+d+c)%100;
                  d -= (n+j+a-i+n+m*i+n*b+n)%100;
                  e += (n-l+d+k)%100;
                  b += (h-j+f+f-n-m-a+n)%100;
                  k -= (a-f*h*f+k-c+l*i*g-e+a-e+m*d)%100;
               }
               else
               {
                  b  = (n+g)%100;
                  g += (b-b+b+h-e*m+k)%100;
                  b -= (j+f+a*g-g-j*k-g-c+m+j-j)%100;
               }
               while( ++WHILEcnt[68]%5 )
               {
                  h -= (f+l*f-d-e*f*d-c+d+l-c*g-i)%100;
                  f -= (c+c+j)%100;
                  j += (h*c+d)%100;
                  e += (e+a-m*h+e-b)%100;
               }
               m -= (e-k+l*c-e*h*e*n)%100;
               b += (d+g-n*i-c-c+k+k-j+h-m-f)%100;
            }
            m += (a*j+c+g-d+d*j-b-a+g*m)%100;
            k  = (c-h-e+h*c+f*b+h-f*a)%100;
         } while( ++DOcnt[67]%5 );
         e -= (a-f+k-m+d-i+h*k-e*e+a*j+d+j)%100;
         k += (e+b)%100;
         g += (l+l*g*n*d-f+d-n+i+g+d+k*f)%100;
         f -= (i+i*k-k-k+d-g+j-e+j+b-d)%100;
      }
      n  = (d+f-d-i+b-l+a)%100;
   }
   g += (b+j+k+k+l-j)%100;
   b -= (k-j-n+g+h)%100;
   a  = (c*h-j-d-d-g-b+m+k-k+l-l*j*h)%100;
   a -= (d+g-h)%100;
   e -= (d+f-l+k+m-a+f+i-m-l-j-g+d*e)%100;
   j += (d*l+h+c-b+f-b+j+m+e-g)%100;
   h -= (c-m)%100;
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
                  a += (a-j*l+j+d+b+k+e+n*m)%100;
                  d -= (b*a+d+c+k)%100;
                  i += (k*m)%100;
                  c -= (j*f+b-h-n)%100;
                  g  = (e+a+k)%100;
                  a += (c*d+c-k*b-h*i-f*g)%100;
               }
               else
               {
                  j += (b-c*l+a+n*k*e*n+a*b-i-h)%100;
                  d += (k-n)%100;
                  e += (n*j*e-d-m*g-b-m-f+j+m-m*n+c)%100;
                  f -= (e-f+f-m*i-j)%100;
               }
               while( ++WHILEcnt[70]%5 )
               {
                  d -= (g-a+j-l)%100;
                  c -= (d+b+i+c-b-e)%100;
                  m -= (d+h-e-h-d-n*d*g-b-a)%100;
                  k -= (m-e-a+k-n-g+h)%100;
                  h -= (c-f+f)%100;
               }
               do
               {
                  n -= (e+i-e+i+i-j-g-a-l+m)%100;
                  b -= (l-d)%100;
                  l += (c-h)%100;
               } while( ++DOcnt[70]%5 );
               h  = (l+n+e*a+d-a+b*k-m)%100;
               for( ; ++FORcnt[104]%5 ; )
               {
                  n -= (c*g*j+n)%100;
                  l -= (b-i)%100;
                  h -= (l-e*a-n*n+c+l-d-n+n-c+h)%100;
                  j  = (n+e*e+n)%100;
                  b -= (e*k-g+j+e*g+h-f+e+l-m*b)%100;
               }
            }
            
            switch( ++SWcnt[35]%3 )
            {

            case 1:
            {
               if( ++IFcnt[52]%10 )
               {
                  c += (c*k+g-e+h*b-f+m*i-h+b+m-h-h)%100;
                  i += (m*l+g+f+c+h-n-l-c+b*c-c+a)%100;
                  d += (g-j)%100;
                  g += (k*f+b+e*i*g-b-e)%100;
                  i -= (n+m-g)%100;
                  d += (i-f-l+i+d*k*a)%100;
               }
               if( ++IFEcnt[71]%2 )
               {
                  g -= (m+m-n-h*i+m-n+j+j-l-c*n)%100;
                  d -= (h+a+g-l-d*e)%100;
                  d += (l-l)%100;
                  j += (d+m-n-h-j-n-i-e-k-g)%100;
                  k -= (i+b-i-d*f+f-k+n+d-l-b)%100;
               }
               else
               {
                  k -= (a-k+a+i*h)%100;
                  a += (m-a*l-f-h*n)%100;
                  c += (n-i*f+l+n+g-i+m-k*f-k-k-j)%100;
                  h -= (c+d+g+e*n+h+g+d-g+a-f+m)%100;
                  i += (g*c+k)%100;
               }
               while( ++WHILEcnt[71]%5 )
               {
                  d -= (b*n*f*l+m)%100;
                  l -= (j+k-a-n)%100;
                  j += (m-n-f*j+m-j)%100;
                  g -= (l-c-g*i*f+d)%100;
               }
               do
               {
                  k -= (g+a-b-l-g*d-g-k+g-a-i)%100;
                  g += (e+i+i)%100;
                  k += (k+d*n*k+j+l+a+n-h+e+m)%100;
                  m += (m*e)%100;
                  f -= (f-d*l+l+c-a+j-e*n+j*e+n-a)%100;
                  g += (l-b*b-m-e+g-j-h-m*d)%100;
               } while( ++DOcnt[71]%5 );
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[106]%5 ; )
               {
                  e += (j-l-k+c-l-i-h-h*c)%100;
                  i -= (e+c+a-f*b)%100;
                  c += (g-g*a*j+g-h+d+b+n*c+l-h*b)%100;
               }
               i -= (e+a-a*i*g-i+a*k+c)%100;
               b -= (h+e*c*n-e+a+e-h+d+a+a-m-n)%100;
               b -= (e-a)%100;
               d  = (g+e*l+i)%100;
            }
            break;

            default:
            {
               e -= (g-f+i+h+g-b+f+d+n)%100;
               k += (n+d*a-i)%100;
               b += (h+i)%100;
               b += (a+c)%100;
               e -= (f-n*j+j+c+d-k)%100;
            }
            }

         }
      }
      a  = (d-m-d*e*k-d-g+j-c+m-a)%100;
      f  = (f+d+a-b+g-e-d+h*k-b-g)%100;
      k -= (i+d+f)%100;
      f -= (k-l-m+e+m-n-c+b+l*k-f-i+f-c)%100;
   } while( ++DOcnt[69]%5 );
   h -= (h+c+c-d*m)%100;
   n += (f+h)%100;
   h -= (n-g+g-n)%100;
   d += (c+l+c*a+g-b+n+d-k+d-g)%100;
   f += (e-a-k+k+a-b+l+f-m)%100;
   m += (j-g)%100;
   g += (b*c+h-e-i-f-n+i+g-i*g+c+h*g)%100;
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
         b -= (k*j)%100;
         f -= (l-h+m+h)%100;
         g += (j+g-e+b-m-m-d+a+a+g-f+m+g)%100;
      }
      else
      {
         while( ++WHILEcnt[73]%5 )
         {
            do
            {
               if( ++IFcnt[54]%10 )
               {
                  i -= (c+e+f-i-f+b-n*d)%100;
                  i -= (h+a)%100;
               }
            } while( ++DOcnt[72]%5 );
            c -= (c*g*j-l)%100;
            for( ; ++FORcnt[109]%5 ; )
            {
               
               switch( ++SWcnt[36]%3 )
               {

               case 1:
               {
                  e -= (f+c+h+n)%100;
                  h += (c-g+f+f+j-e*h+e+l-c)%100;
                  c -= (j+c)%100;
                  b += (m-i-c-a+a-c+n+n)%100;
               }
               break;

               case 2:
               {
                  l += (a-n*l+a+i-g+d+a+j*a*j+g+g*e)%100;
                  h += (k-k)%100;
                  j -= (l-c*j*c*d+k-d)%100;
                  i -= (j+m+h-b-a)%100;
                  g -= (e+e-a+l+c-d)%100;
                  e -= (k-d+j*j-h+e)%100;
               }
               break;

               default:
               {
                  b += (l-j)%100;
                  g -= (l-h-i*f+h*d+n+k-a-l+i)%100;
                  g -= (e*j+l-c+i-e+b+j-j*a)%100;
                  l += (i-h-e*i+i-b+h+j)%100;
                  c -= (m+a+n-j*f-e+j-g+d-j*k+n)%100;
               }
               }

               if( ++IFEcnt[72]%2 )
               {
                  e += (d-b+b-c-m+b-i+c*a+i*n*l)%100;
                  h -= (j+c+i+d+e+i+l-i)%100;
                  f += (c*c*l*i+a+h+d+b*e)%100;
                  g -= (b-c*m+k*c)%100;
                  h -= (k+g-k-n+d+i+h-n-e+h-f+c-l*h)%100;
               }
               else
               {
                  g += (b+k-n-l+b)%100;
                  g += (l+g)%100;
                  e += (a-i+g*m*g-l-h+k+e-m*l*g+g)%100;
               }
               while( ++WHILEcnt[72]%5 )
               {
                  f += (k-k-n+a+k+k+j+d*d-n+d-f-g)%100;
                  n -= (k+m-e*c+i+e+f*f+i)%100;
                  f += (k+c+b*e-j*m-m*h)%100;
                  b -= (j-e)%100;
               }
               do
               {
                  b -= (k-f+e-f*d-n-f-d-g-m-l-i*k)%100;
                  c += (a+a*e)%100;
                  a -= (a+k-m*n*a*m-m+e)%100;
                  c += (k-j-j+k-c+e)%100;
                  d += (a+a+g+k*i-b-e-h+g+b*b+n+l)%100;
                  i += (l+c+e-m+b+c)%100;
               } while( ++DOcnt[73]%5 );
               for( ; ++FORcnt[108]%5 ; )
               {
                  i -= (b-j)%100;
                  l -= (d-h)%100;
                  c -= (i-j-d-c*b*k-m+j-f+i-m-f-n+m)%100;
                  e -= (j-i-n)%100;
                  m -= (e-k)%100;
               }
            }
            if( ++IFcnt[55]%10 )
            {
               for( ; ++FORcnt[110]%5 ; )
               {
                  e += (k+g-i*n*j+c)%100;
                  b += (d*e+d-h+k*e-b)%100;
                  m -= (b-c*n+i-j*a-h*k)%100;
                  j -= (h-i+f)%100;
               }
               if( ++IFEcnt[73]%2 )
               {
                  g -= (c*j+c+g+e+n+c*h-f-c-n+b*h-j)%100;
                  a += (f+c+e*m+m-e-d-a*m+b+m+e-k)%100;
                  h += (c-m+f+g+d)%100;
                  j -= (i+c-m+f-m-h-b*g+h*c-e)%100;
                  j += (i-l-g-h*k)%100;
               }
               else
               {
                  d -= (g-k*b+h-a+m+g*d*f+h-m+n+n)%100;
                  c += (b+j*h*l)%100;
                  b -= (m+f*k*c*h-b-c-m-b-d)%100;
                  a -= (j-i-m+g*f)%100;
                  h -= (d+k+e)%100;
                  a -= (m*c-c+h-n-c+h-b-n+n+i-m)%100;
               }
               k += (j+l+h-k+m*m+i)%100;
               j -= (n+d+h-n+b-a+c-h+f)%100;
               h -= (j-f-h-j-e-d*c-a)%100;
            }
            d -= (f*d)%100;
         }
         a += (d+h+m)%100;
         g += (i-m-f+e+d+c-f*c+d*e+k+m+f*a)%100;
         g += (l+n-e+g+h*b-f+c*f-a)%100;
         l += (j-m-e*i-l-b-j-h+f+c*l)%100;
         f -= (a-a-i-m+i+j-c)%100;
      }
      m -= (i+j)%100;
      l -= (b+j+l+l-a*l-i)%100;
      c -= (d*f*e+f-c*b-j)%100;
   }
   j += (h+f+m-a+c-g+j*d*f)%100;
   a -= (j-g*e+c-k+c*j)%100;
   f -= (h*i+i*j+a+i-i+i-i-n*l+a)%100;
   i  = (g+l*m+h+f*c*n*e+a-j-f)%100;
   f -= (k-k+i-e+j-b+l+f+m-i*i*c-e)%100;
   b -= (f*h+d)%100;
   c += (f+l-g)%100;
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
         n -= (k*j)%100;
         for( ; ++FORcnt[114]%5 ; )
         {
            
            switch( ++SWcnt[37]%3 )
            {

            case 1:
            {
               if( ++IFcnt[56]%10 )
               {
                  n -= (l-b-e*b-d*h-b*a-f-d+i+j-h)%100;
               }
               if( ++IFEcnt[75]%2 )
               {
                  h -= (f+m-e-c-f+h-m+c+i+m+a+h*i)%100;
                  k -= (c-g-g*d+k+j)%100;
                  g += (d-f+d+e+m)%100;
                  e += (b-m-b+c+l-b-f-h)%100;
                  l -= (l-d-n+g-b*e-l+d-k*j)%100;
               }
               else
               {
                  c -= (j-g*i+b-c-b+a-h-f)%100;
                  c += (j*b-f)%100;
               }
               while( ++WHILEcnt[74]%5 )
               {
                  g -= (b+l*h+g)%100;
                  n -= (i-b)%100;
                  l -= (d*d+g-e+j)%100;
                  g -= (l*a-i-f-c+h+m*n*m-c)%100;
               }
               do
               {
                  f += (l+h-f*f+n-f*f+j-k-a-h+f-e+f)%100;
                  j += (l+l-m+a-j+h*k-g)%100;
                  h += (h+f)%100;
                  i -= (c-a*k+k+a-b+a-c-l)%100;
                  k += (a+k-j-i-c+c+j+i*g+n+a-n+n)%100;
                  f += (c*f*l+a*f+g)%100;
               } while( ++DOcnt[75]%5 );
               for( ; ++FORcnt[112]%5 ; )
               {
                  c -= (e-e+k-m-l*l-l-m)%100;
                  d -= (j-l-d+h*k+g+c-d+k+m*d)%100;
                  d -= (l-e-m)%100;
                  c += (k+e+c+j-m*g-n+b*i)%100;
                  d -= (f-h-f*h+i+n*h-c+l)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[113]%5 ; )
               {
                  m += (f*i+c*g)%100;
                  d  = (e*b*l)%100;
                  i -= (g+k+j)%100;
                  d -= (e-e-k-g)%100;
                  d -= (m+l-l-h+j-h)%100;
               }
               if( ++IFEcnt[76]%2 )
               {
                  g += (k+e+b*j*g-e-f-n*l+i+c+j)%100;
                  i -= (l*e-g-c-f+e+f*e+e+h*b-k-k)%100;
                  m  = (j*m+b-l-m)%100;
                  f  = (i-i-l+l+e+g+l+c*l+g+f-k+l)%100;
                  b -= (a+f-h-c*k*d*i-d+a+e-n+i-j-g)%100;
                  l -= (c+n-i-k*g*a+b-i*b)%100;
               }
               else
               {
                  n  = (j*e)%100;
                  f -= (n-c)%100;
                  l -= (b+e+b*l-e+f)%100;
                  f -= (a+d+a+g-n-i-e-j-j)%100;
               }
               while( ++WHILEcnt[75]%5 )
               {
                  i += (h-e*h*e-b*m+g-e+a-k*l-l+l)%100;
                  c  = (n+g)%100;
                  j  = (n-n-j+l+b+l-c-f-b+j-g)%100;
                  h -= (i*c*g+h)%100;
                  c += (f+c+k+e-j+l-e-i-b+k-f-j-g+g)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  e -= (c+e+m*k+n*l-g+i-j+d)%100;
                  j += (h+d+d-n-a-i-b)%100;
                  k += (k+c+n+b*d-c+i-f-m-a+l+j)%100;
                  k += (m-h+j-k+g*i*l-c+i-i)%100;
               } while( ++DOcnt[76]%5 );
               j -= (d*h+c-d-l+j)%100;
               i  = (e-d+k+e-a+g-c-d*h-h-k)%100;
               i += (l-i-g-i*n+m)%100;
               d += (i*n*e+g+m-k*f*d-b*c-l+n+g-f)%100;
            }
            }

            a -= (f*h-n-g+n-n-j)%100;
            m += (j*k+c-c-i-n+d+f-j-e+a)%100;
            g += (m-l+c+f-e-d)%100;
            l -= (l-d+f+n*c)%100;
            i -= (k*h-b-i*n-i+e-d-m)%100;
         }
         n += (d-b*j-h)%100;
         f -= (h+e+f-g+j*e-e+c-m+d+n-b-k)%100;
      } while( ++DOcnt[74]%5 );
      i -= (l+l+m)%100;
      h -= (b*f-k+j+j+h-f+g-a-d+i)%100;
      c  = (i+j-m-h+g-f+i-b)%100;
      h += (g-g+h*a-c-c-m*k+l-k)%100;
   }
   l += (j*i+n+l+f+e+m+m*m+f+k+k-n-b)%100;
   d += (e+b-m+n-l+l-b+i*j-i)%100;
   d += (l-m+k+k)%100;
   i += (c*b-a+i+l-i-j+b)%100;
   c -= (e+m+b-k)%100;
   a -= (n-a*b-l+d+b-g*g)%100;
   m += (h-a+i-c+e*d+d+a-b-f+a-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F35(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[59]%10 )
   {
      n -= (m+b*k-d+c)%100;
      for( ; ++FORcnt[118]%5 ; )
      {
         
         switch( ++SWcnt[38]%4 )
         {

         case 1:
         {
            if( ++IFEcnt[78]%2 )
            {
               if( ++IFEcnt[77]%2 )
               {
                  l  = (i+f)%100;
                  n -= (b-d-k-i)%100;
                  h += (g*n*i)%100;
                  d += (j+f-i-e+l+n+d*k+l+m-l+i-g-m)%100;
                  k -= (c*g+g)%100;
                  f -= (k+i+g-n)%100;
               }
               else
               {
                  f -= (i*d+f-c+k*g+h*b+l-e+n+m)%100;
                  j += (c-b-f-b-n-d-j-e+i-d)%100;
                  d  = (e-j-a-e-e-c)%100;
                  j += (f*e-a-h+j+f-g+b-c-j-b-f)%100;
               }
               while( ++WHILEcnt[78]%5 )
               {
                  f -= (c-k)%100;
                  n -= (k-h-b-m+f-f*d+j*k+j-f*m+c)%100;
                  a -= (f-j-k+l+c+n+d-d*m+h)%100;
                  g += (l-l*m-n+n-c*f*m+a-c+j)%100;
                  h -= (g+f+e-e-m+g*a+c-e)%100;
               }
               do
               {
                  m  = (d+g+h+f+c)%100;
                  f += (k+l)%100;
                  a += (c-k-b+g+n-d*l-f*g)%100;
               } while( ++DOcnt[78]%5 );
               a += (m-e*d*e-l-n+g+d+h-c-l-g-a)%100;
               for( ; ++FORcnt[117]%5 ; )
               {
                  e -= (d+j-g+h+g+k*m+k+i+f)%100;
                  e -= (k+l-j+b-d)%100;
                  i  = (l-c+i-a+n-c+e)%100;
                  b -= (k-j*m+l+c)%100;
                  b -= (l+c-i+d-l-k-c*j*i-m)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[77]%5 )
               {
                  d -= (i-f-f+k+m+a*n+g-f*b*h*m+d-f)%100;
                  j += (n+i+h+g+e*b*l+f-b-m-m-m)%100;
                  m -= (b+e+j-n-j-f+k*f-e-e-d+e-c)%100;
                  j += (a+a-m+b-e-m*i-a-g+k+i-l+a)%100;
               }
               do
               {
                  c += (l-k-i+m-b+l-b+n*e-b)%100;
                  i += (e-e+n+h*i+g+k*h-e-j+d+h)%100;
                  f += (h+h+c-h-a-a+h+k+n*e)%100;
                  g -= (n-m)%100;
                  h -= (l*g+d-g)%100;
                  b += (d+j-b-b+h+f-n*i-i*g+a+l)%100;
               } while( ++DOcnt[77]%5 );
               for( ; ++FORcnt[115]%5 ; )
               {
                  l -= (c*n-m+g+a-j*a-l*a-m-e*h+l+m)%100;
                  d -= (e-a-g*m*e+j-c)%100;
                  n += (f-n-k+b-b+j-l-b+h+g*i+g+n)%100;
                  l += (i+m-n+f-a+c*a-j-l+i-m)%100;
                  a += (f*f-g-n+j*c)%100;
               }
               if( ++IFcnt[57]%10 )
               {
                  c  = (d*d+n-g+j-c*m*k-n-j*b+j)%100;
               }
               for( ; ++FORcnt[116]%5 ; )
               {
                  g += (d*c+d)%100;
                  n += (l+h*f)%100;
               }
            }
            
            switch( ++SWcnt[39]%3 )
            {

            case 1:
            {
               if( ++IFcnt[58]%10 )
               {
                  b += (a-e-d+a-n+e)%100;
                  j += (g+i-f-f+m-b+e+l*j-d+a)%100;
                  i -= (c+h+c-b-c+c+g)%100;
                  b += (h-m)%100;
                  k += (m-j*i+e+i-b-d)%100;
                  e  = (k+l-d+n+j-c+m*m*d+h+l+j)%100;
               }
               l -= (g*l*n)%100;
               c -= (b-a-f-i-c-l)%100;
               n  = (n+n+j-a*a+a-e+l+n-f-b)%100;
            }
            break;

            case 2:
            {
               b  = (m+e-b*a-k+m-l-g*e)%100;
               c += (k*g+e+m+c-m-l*b)%100;
               n  = (k*a*c+g+d+l+i+j+g+e)%100;
               a -= (j+m+a-n-m*i-k-g+g)%100;
               e += (e*c*g*m*b-k-m*c+a)%100;
            }
            break;

            default:
            {
               f += (n*b-h*i+g+i+b+d*l+d)%100;
               n -= (l-h+c-i+i-g+g*j-m)%100;
               k += (l-i*b-d+c-h+j*c-j-h+m*n-a*a)%100;
               l -= (a*i-n-c-n+h+i+f-c-g+n)%100;
               j += (h-d+h+g-f-i-i-c*n-c+h-g-l)%100;
            }
            }

            i -= (l+l-d-i-g*b*b+l-a)%100;
         }
         break;

         case 2:
         {
            h -= (b-f+i-b-n-h+i-c*m)%100;
            i -= (n*j+n+b*d*g+f*k-i*n-a-i)%100;
            h -= (e+h+l-e+b+a-c+f+a+a)%100;
            m += (a+c)%100;
         }
         break;

         default:
         {
            l -= (b+b)%100;
            c += (g*g+d-f+g+m+i*d+d-e-l-c*k)%100;
            j -= (e+l+f*d+g-f*k+h+h*k+h*l)%100;
            b += (g-b)%100;
            f += (a-d-a)%100;
            e -= (i+a-h-g-a+h*n-c*f+a*j)%100;
         }
         }

         b -= (i*b-e+f*l)%100;
         d -= (m+h)%100;
         m  = (b+d+n+g)%100;
         l -= (d*b-d+l+d-a-k+m+g-a+m)%100;
      }
      l += (l-h+f*h)%100;
      c += (k+b-j-a+d-m)%100;
      c -= (d*j-j+c-n-i)%100;
      c -= (h-c-m*i-k*i)%100;
   }
   j += (b+k-e+i)%100;
   n += (m-n+k-i+e+j)%100;
   e -= (b+c-c)%100;
   a += (a+f-i)%100;
   i += (h+m-k-h+m)%100;
   j += (g*h+l*h*g*d-l*l+n*d-i*m+i)%100;
   m += (k-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F36(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[80]%2 )
   {
      f += (b+b)%100;
      l -= (d*j)%100;
      h += (a-k*f-c-c-d+n+f+g*l-g)%100;
      m -= (i-d-f-b+b-a)%100;
   }
   else
   {
      while( ++WHILEcnt[80]%5 )
      {
         do
         {
            for( ; ++FORcnt[120]%5 ; )
            {
               for( ; ++FORcnt[119]%5 ; )
               {
                  f  = (i*h)%100;
                  l += (f-m)%100;
                  d += (m*f)%100;
                  b += (i+i)%100;
                  h -= (b-n-i*h-j)%100;
                  f += (d+j-k+m+e-n+k-h-a+m+n-d+m)%100;
               }
               if( ++IFEcnt[79]%2 )
               {
                  d += (a-a+m-a-n-i*j-c*j+j+m-m)%100;
               }
               else
               {
                  e -= (a+c-j+e+a+a)%100;
                  j += (e+h-e+i-g-d-l-e)%100;
                  a += (m*j)%100;
                  d -= (m*d*h-d+k)%100;
                  n += (i+h-d+g+j+g+e+l*l)%100;
               }
               while( ++WHILEcnt[79]%5 )
               {
                  i += (l-a)%100;
                  b  = (j*e*c-d)%100;
               }
               do
               {
                  j -= (j-l+b-i*n-f*m+k-g-f*g-b+k)%100;
                  b -= (h-c-b+n*e-i*e-e-d+d*f-i-j-e)%100;
                  c -= (n-i-c-l*c*k*k+b*a)%100;
                  i -= (g+g*e*f)%100;
                  k += (c+b+j-f+c-n)%100;
               } while( ++DOcnt[80]%5 );
            }
            if( ++IFcnt[60]%10 )
            {
               j -= (n-j+m+e*h)%100;
               for( ; ++FORcnt[121]%5 ; )
               {
                  b -= (f+a-d-l+e-c-k-f*i)%100;
                  k += (a-k+m-d+n+g+l+g*c-l-k)%100;
                  f += (b-l-k-h-j)%100;
                  h -= (a+j-h+l+d-f+h-j+i+h+c+j)%100;
                  b -= (g*i+h)%100;
                  d  = (i+i*e+d+a)%100;
               }
               
               switch( ++SWcnt[40]%3 )
               {

               case 1:
               {
                  j -= (j+l+g*d+n-f-g+f+a)%100;
                  f -= (l-b-i-k*d-h*h+b)%100;
                  c += (m-b+j-e-i-j+a+n-b)%100;
                  f += (b+k*i+n*h-k)%100;
                  e  = (a-a-k+b+h+e-c-a*d-e-b+f)%100;
               }
               break;

               case 2:
               {
                  b -= (c*c-m+h-k-m-j-k+i-f+f-h)%100;
                  d -= (j+g-m-k+b-m)%100;
                  l += (a*n)%100;
               }
               break;

               default:
               {
                  k += (a-j+h-a+d+d-n*d-a+b+k*k-d)%100;
                  i += (k+i-f-l+i-h*i*f)%100;
                  l += (m+i+c*h-j)%100;
                  n += (l+e+g-h-i)%100;
                  c -= (n*e+j-m*h-i*n-m-m+m+e+e)%100;
               }
               }

               a += (g+b+b+b+n+c-a-g+k-n)%100;
            }
            b += (e-g+n-e+c+i*a)%100;
            h -= (c-j-i+m-i+i+b-m+a-d-l+f+l*d)%100;
            h += (b-l-g-g-l)%100;
         } while( ++DOcnt[79]%5 );
         d += (k+g-l*e-n-n*b+i+c)%100;
         a += (f*e+k-g-g+e*k-m)%100;
      }
      m += (i*e-l-i)%100;
      g += (a-h+n*a-c-c-j-e*f*h*l*m*j)%100;
      d -= (k-h-g-d-k+i+g+c-k-d+d*j)%100;
      m += (j*b+i+d+k)%100;
   }
   e  = (l-c+g*g+a)%100;
   j += (j+l)%100;
   g -= (e-k+k+f-k-m+d+m-b-m-h+f+a)%100;
   g -= (f+c+n+k+i-j)%100;
   g -= (j-l-i*d-j+b+a-l)%100;
   j -= (f*c+m+f)%100;
   l += (a-c-k+b-n+f-a+m-k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F37(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[83]%2 )
   {
      n += (m+f+e-j+l-k+n)%100;
      i += (l-c+e-n)%100;
      i  = (l*i+h-h*j-l+g)%100;
      g  = (m-b-e+g-i-f-g-c+l-n)%100;
      c -= (i-n+l+e-g)%100;
   }
   else
   {
      while( ++WHILEcnt[82]%5 )
      {
         do
         {
            for( ; ++FORcnt[123]%5 ; )
            {
               if( ++IFcnt[61]%10 )
               {
                  e -= (d-c+c+j+a+a-i+n*h-m-a*c+c)%100;
                  n += (g+i+c+m-c-c+d*n-g-e)%100;
                  j += (b*h+j)%100;
                  e += (g+b+e-m-e-h-l*f-l-e*g)%100;
                  e -= (a*b+j*e)%100;
                  k -= (e+d+l+m+f+l+n*n-d+m-g)%100;
               }
               for( ; ++FORcnt[122]%5 ; )
               {
                  d -= (n-h-g*a+i+f*d-b-i*h-f*c*j+d)%100;
                  l  = (l-d-k)%100;
                  m += (e*e)%100;
                  a -= (j+f)%100;
                  f += (a+b+c+a-d+a-f+i-n+d)%100;
               }
               if( ++IFEcnt[81]%2 )
               {
                  c += (b-h*m*i-b*g+f-n)%100;
                  c -= (a-e+h-j+k-l+i+m*b+a-l*k-e+i)%100;
                  c += (c+l)%100;
                  l += (e*e-g)%100;
                  f  = (m+i+f-m-e-k+f)%100;
               }
               else
               {
                  l -= (d*l-f)%100;
                  e += (j-j-f-l)%100;
                  k += (g*n*m*m*f+h*h+h-h+h+m+h-b*m)%100;
               }
               while( ++WHILEcnt[81]%5 )
               {
                  n += (d-f-n-n)%100;
                  m -= (i-d)%100;
                  h += (a-e-j-j*a-c-d*l+a-e-j-i)%100;
                  d -= (e*c*g-i+h*e)%100;
               }
            }
            do
            {
               l += (c-i+j+l+b-c-g+l*i-c+b-l-a-k)%100;
               for( ; ++FORcnt[124]%5 ; )
               {
                  e  = (d+i-h+n+a+b-m*l)%100;
                  l += (h+l+g)%100;
                  e -= (c-b+j*n-g)%100;
                  m += (h+d)%100;
                  i += (i+i+d-f-c+g+m+d+e+j-j*g)%100;
               }
               
               switch( ++SWcnt[41]%4 )
               {

               case 1:
               {
                  e -= (j+e+i-l-d*i+d*j+a)%100;
               }
               break;

               case 2:
               {
                  n += (c+m-g*c-m+a+b*f-g*g+e)%100;
                  a  = (g+f)%100;
               }
               break;

               case 3:
               {
                  h += (b*k+k-h-b*h+a-a-l)%100;
                  c += (k+c)%100;
                  n -= (a+d)%100;
                  n -= (f*l*a-h-n-l*k+g+h-a+f-l+f)%100;
                  b -= (a-i+c)%100;
               }
               break;

               default:
               {
                  e -= (h-l*a-i-e+c)%100;
                  g -= (c+n-a+f+m+e+i+i-j-e)%100;
                  h += (m*b-i-b+m+h*h-a-c+m+i)%100;
                  n += (g-j*m-g+a-a-a)%100;
               }
               }

               if( ++IFcnt[62]%10 )
               {
                  l -= (a-i-g+k-h*i*g-j-f-j-d)%100;
                  h += (i+c-d+d-l+a+g-k*k-b*k+i)%100;
                  e -= (h-l+a+d*e*e-a)%100;
                  n += (e+l)%100;
                  e += (f-d+j-c-d+n)%100;
                  i += (i+l-c+j+h+g-j+b-b*a+l*m-d)%100;
               }
               if( ++IFEcnt[82]%2 )
               {
                  m -= (k+e+a-m-e+a)%100;
                  c += (k*c*m-l+l*c+e*k+d-l+m)%100;
                  d -= (h+f+l-b+h-a*f+k)%100;
               }
               else
               {
                  n -= (j+n-j+h+l-e-a-h-k-g+b+n-n)%100;
                  b += (i*h+e+k-g-b-e-i-a-n-j-k-e)%100;
                  a  = (b*c)%100;
                  k -= (h-d-f+g-b-l+f+k-h)%100;
                  h -= (i+m+c+l+j-n-g-j)%100;
               }
               d -= (l+i)%100;
            } while( ++DOcnt[82]%5 );
            h -= (i+b+j-a*i)%100;
            d -= (j+g+a-e-d+i*h-n)%100;
            a -= (e*a+n+l+b+i-e+l+a+d-j+f-l)%100;
         } while( ++DOcnt[81]%5 );
         b -= (e-b+a-b*m+g)%100;
         e -= (l-m+i*g*d-h)%100;
         m -= (n*j-h-l)%100;
         b += (a-d*j*d-e+g-d-m+f+c*e-g)%100;
      }
      j -= (k*d-a+b-h-b-e-l-g+n*l*b+m)%100;
      g -= (l-n-a+i+h+g-i-i-l)%100;
      d += (f-i*a-b)%100;
      n -= (n+m)%100;
      k  = (l+j+e-j*i)%100;
   }
   h -= (n-m+d-d*h+d)%100;
   d += (k-b+l-g*j+f)%100;
   c -= (h+n-b+n-i-h+h*h-h-a+b)%100;
   c -= (e-i)%100;
   f += (f-a*e+j+k)%100;
   i += (n+k+b-d+f+g+n)%100;
   c -= (g-k*b-i-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F38(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[85]%5 )
   {
      do
      {
         for( ; ++FORcnt[127]%5 ; )
         {
            for( ; ++FORcnt[125]%5 ; )
            {
               if( ++IFEcnt[84]%2 )
               {
                  f -= (b-f+f-d-h-m+c*m)%100;
                  e += (b*a+j-b+i+a)%100;
                  b += (c-c*m-b)%100;
                  c -= (i-l+l-b-n+b-m*g*m-k-l)%100;
                  h += (j-c-d+i*f-k-k)%100;
                  f -= (n*e*c+f-j+h-l+g+a-i+e)%100;
               }
               else
               {
                  d += (c+a+g*d)%100;
                  e += (j-b)%100;
                  d -= (g-c)%100;
                  h -= (m-j+l+e)%100;
               }
               while( ++WHILEcnt[83]%5 )
               {
                  k += (g-e*b-c+m+d*e+a-e*g*k-m-k-e)%100;
                  h -= (k*b)%100;
                  l -= (c-m*f+f+a+i+g*k+g*d+i*h)%100;
                  c += (a-a+l+d-h-a-e)%100;
                  a  = (c+h*k+c)%100;
               }
               do
               {
                  c += (g*n)%100;
                  l  = (d+b+l+d+h+g)%100;
                  a -= (n-l-l-d+h*j+m+j-m+l)%100;
               } while( ++DOcnt[84]%5 );
               if( ++IFcnt[63]%10 )
               {
                  d -= (i*l+e-k+d+n+l)%100;
                  d -= (i*h-k+f-f+l)%100;
                  a -= (l+d-i-g-m)%100;
                  c += (m+k+g*j-c-i+f)%100;
                  k -= (j*k+k-k)%100;
               }
               k -= (n*c+d-l-n)%100;
            }
            for( ; ++FORcnt[126]%5 ; )
            {
               
               switch( ++SWcnt[42]%3 )
               {

               case 1:
               {
                  l -= (f*c+f*h-b-a)%100;
                  b -= (k+j-c*l-d+f+n*f-d-b)%100;
                  h -= (l*f+d-i*e-m-m+c-m+k)%100;
                  k += (m+e+b+j+b-c*a-d*n+n)%100;
                  b -= (j*g)%100;
                  d -= (l+g-j-a-b+c+d*e)%100;
               }
               break;

               case 2:
               {
                  d -= (k-a-b-f*l-f*a-a+j)%100;
                  f += (k+e)%100;
                  n += (j+n)%100;
                  c  = (a+l-h+k*l-l+j)%100;
                  m += (l+d+h-b-d-g-f-f+j+j)%100;
               }
               break;

               default:
               {
                  i -= (g-b+f-m-c+e+f+l+g+l-m)%100;
               }
               }

               if( ++IFEcnt[85]%2 )
               {
                  h += (i-d*b*d-l-n*m-g-f)%100;
                  e -= (c-c+a-h*n*i*k+g-c+g-a)%100;
                  l += (d+g+d-e+c)%100;
                  e += (a+h+g-f+e*h+l-h*l+f-n+f)%100;
                  j -= (h-l-f+j+c-m+k*j)%100;
               }
               else
               {
                  i += (d*c-j+a-a*f+k-c*f-h+j+e)%100;
                  j += (a-i-m-b+i-a*f-m+m+c*d)%100;
               }
               while( ++WHILEcnt[84]%5 )
               {
                  k += (c-k+f+c-f+g+e-a-h*h+j+k)%100;
                  m += (e-k+l+e+k*l*b-l-g*g+b+a-i*b)%100;
                  i += (l+m*n+g*m+g+g)%100;
                  c  = (k-j-n+i-l+i)%100;
               }
               j += (b-m+c-h+g-j-e)%100;
            }
            c += (g*b-m-j*a-b+a+m)%100;
            i -= (l-b)%100;
            l += (j+i-e+e-b+g)%100;
         }
         b  = (k+b+b-b*c)%100;
         k -= (g+c-d-a)%100;
         l  = (l-k+i-m*n-c-c)%100;
         m += (l-m+g-j+e-l-j-n-d+d)%100;
         f -= (e+d+a)%100;
      } while( ++DOcnt[83]%5 );
      a += (j-a-e-i+f-f-j-e)%100;
      c += (g-e-j)%100;
      c += (j-i-k-k)%100;
   }
   a += (f-n+c*k+f+k)%100;
   c  = (a+d-h-m+b-g+h)%100;
   e -= (e-j)%100;
   l -= (f+m-c-c)%100;
   d -= (h-b-e+n-k-k-j*i*j)%100;
   f  = (e+c+e-d)%100;
   a -= (g-l-n-k-k-c+c-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F39(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[131]%5 ; )
      {
         if( ++IFcnt[65]%10 )
         {
            for( ; ++FORcnt[129]%5 ; )
            {
               if( ++IFEcnt[86]%2 )
               {
                  f -= (l*i+f+l-e-j)%100;
                  m += (n-g+i-e-l+n)%100;
                  f -= (c*l*m-e+m-f*g)%100;
                  f -= (h-h+f+l)%100;
                  a -= (i*g+h+g-m+k+a-j)%100;
                  e -= (c*c+d+i+a+l)%100;
               }
               else
               {
                  d  = (l+b-f)%100;
                  e += (b*a*a*m-g-a-c+f-e*d*m-f-d)%100;
                  i -= (m-j)%100;
                  c -= (j+j*h-i)%100;
               }
               while( ++WHILEcnt[86]%5 )
               {
                  i += (a-b*l)%100;
                  f -= (n-a-j)%100;
                  m -= (m-n-m*h*f+i*b)%100;
                  g -= (b+d)%100;
                  a -= (g-b*h-a-c+c-h-n+k)%100;
               }
               do
               {
                  h += (f+k-l)%100;
                  l  = (g+m)%100;
                  l  = (n-a+g+j)%100;
                  a += (g-l+h+a+d+j+h+j*j+l+l)%100;
                  j -= (h-c+i+a-e*a*j+n)%100;
               } while( ++DOcnt[86]%5 );
               d += (a-l+m*j-l-i+c+m-k+i+b)%100;
               for( ; ++FORcnt[128]%5 ; )
               {
                  n += (j-f)%100;
                  m += (j+e-l+i+l+n+a-l-l+k)%100;
                  a += (f+g-h-h+c-n+b-d-l*e)%100;
                  d += (d-l*d+h-k-m+j+n-h+i-c+f-e)%100;
               }
            }
            
            switch( ++SWcnt[43]%4 )
            {

            case 1:
            {
               if( ++IFcnt[64]%10 )
               {
                  b += (k-m)%100;
                  k += (e+k+i)%100;
                  c += (j+c+l-c*f-h-n+n+m*l-a-g-f)%100;
                  d -= (g-i+k-b+a-g-j-i-i+g+j+m-a)%100;
                  i += (k+l-e-k-i*j*h*i-h*l-g)%100;
               }
               if( ++IFEcnt[87]%2 )
               {
                  d += (h-f)%100;
                  j += (m*l+e-e+f+c-d+e-h-a+k+l*i)%100;
                  n -= (n-i-d-c+d+h+d+h+m*j-a-d)%100;
                  h += (i+f*i-j-a+f+h+b*d*a-f-j+b)%100;
                  b += (a-c+i-h-m+g+k-d-m)%100;
               }
               else
               {
                  k -= (h*j+d+l+f+i*e+j+n)%100;
                  h -= (h+g-f*m*e)%100;
                  l -= (c*a+h+i)%100;
               }
               while( ++WHILEcnt[87]%5 )
               {
                  k += (a+h-b-e+i-e+d*f)%100;
                  k -= (j+g)%100;
                  d += (d-c)%100;
                  c -= (f+g)%100;
               }
               do
               {
                  f += (f+g*b*j)%100;
                  l += (e+j*d+i*c-a*b-g-g)%100;
                  a += (a*i+d+k+g)%100;
                  i -= (k-e)%100;
                  m += (e+d-h*c+l)%100;
                  m -= (m*a-g+b-h-d-h-m-i*f-c+l*k+f)%100;
               } while( ++DOcnt[87]%5 );
               for( ; ++FORcnt[130]%5 ; )
               {
                  k  = (n+l+a)%100;
                  h -= (g-f+g+e-e*a+l+n-i-e*d+f)%100;
                  d += (n-d-m+a+i-n-d*b-e+n+j+f+l+f)%100;
                  h -= (k+b+d-j*k*i+h-a*f+f-f)%100;
                  f += (l*n+a*a+a+i-m+b+m+d-d+g)%100;
               }
               i -= (k-k+n+j-b)%100;
            }
            break;

            case 2:
            {
               l -= (l+j-j+c*a*n*i*b*m+c*f-m+a)%100;
            }
            break;

            case 3:
            {
               h += (h+k-k*l+a-k-b*a*j-e*i+e+j+b)%100;
               l  = (b-b*m*g+j-h+g)%100;
            }
            break;

            default:
            {
               m -= (j-k+k-b)%100;
               a += (i+f-m+b+m-d+e+l-j)%100;
               g -= (k-l)%100;
               e += (h-b)%100;
               a  = (i-f+i-h-i+c-j-m-f-j-e+k*e+k)%100;
            }
            }

            g -= (c-j-k)%100;
         }
         g += (m+j*b*n+c*m+f+l-n)%100;
         g -= (e-c)%100;
         h -= (i-b)%100;
         j += (i+c-k+b+j*n)%100;
      }
      c += (k*c-g+g*m-b-c)%100;
      n += (m-n+c-d*i-i-d+e)%100;
      l -= (i+h-j-n-b-k)%100;
      a  = (f-j-a+i-f*j+l-i)%100;
      e += (f*m-h*c-f)%100;
   } while( ++DOcnt[85]%5 );
   i += (h*h-i-k-h+b-c-g+j-b-m-m+e)%100;
   i += (d-j-i+f-k+n-j+a-e-i-a+j-g-a)%100;
   b += (l+c)%100;
   m  = (n-m-g+d-b+g-d)%100;
   n += (d+m+a+a*c-l-g+l-c+m)%100;
   e -= (a+b+m+k*l+c-h+i)%100;
   h += (k+i+l-c*j+f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F40(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[135]%5 ; )
   {
      if( ++IFEcnt[90]%2 )
      {
         n -= (g-h+e-h+n-j+j*g-d-m)%100;
         b += (l+g*f+l+d*k*b-m+e+n-h-f)%100;
      }
      else
      {
         while( ++WHILEcnt[89]%5 )
         {
            do
            {
               if( ++IFcnt[66]%10 )
               {
                  l += (n+l+h+m*n+d*n-h)%100;
                  i  = (d*d)%100;
                  c += (l+e-j-f+h+g+a+a-b*e+a-i+l)%100;
                  l += (f-a*l-n+l-d-g*e*m+l*c+k*h+b)%100;
                  e += (i+l-d-g*c*k+m-c+j-m*b*g*b+m)%100;
               }
               m -= (k*c)%100;
               for( ; ++FORcnt[132]%5 ; )
               {
                  n -= (b+i)%100;
                  f -= (k-f+g*d-n-a+a-h+h*m+g+b+b)%100;
                  l += (h+k*a)%100;
                  f -= (e+f-l-n+d+c+j)%100;
               }
            } while( ++DOcnt[88]%5 );
            
            switch( ++SWcnt[44]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[88]%2 )
               {
                  m -= (k*j+n+h+a-f+g-k*k+f+e)%100;
                  a -= (c-l+d+c+g)%100;
                  l += (j*m+l+k*j*j+c-f-n+n*g)%100;
                  i += (h-k+a+d*g)%100;
                  l += (f+g-e-h+e*f+a-i)%100;
               }
               else
               {
                  g  = (n*f+a)%100;
                  l -= (m-g-k-a*b*d-i)%100;
                  c -= (k-f-e+c*j*j-d*e-f*j*g+g*f+c)%100;
                  l -= (a+f-h-e-c-i+e+k*a-k+f+h)%100;
                  f -= (c+e-l-l*n)%100;
               }
               while( ++WHILEcnt[88]%5 )
               {
                  f -= (m*k-m+i+e+i-n+l-b-i+j+m+n)%100;
                  e -= (j+c*k-n+e)%100;
                  e += (g-m-k+e+m-j+l*d+b)%100;
                  b += (k-l-k+e+n-m-a-i+f+l*g)%100;
               }
               do
               {
                  i += (m+c+j*g*f+c-n-b+j)%100;
                  d -= (j-b*b-l*b-j-m-c*h)%100;
                  c -= (a+a+g-n-n)%100;
                  n  = (e-b+d+l)%100;
                  h += (k+e)%100;
                  h += (l-i+c)%100;
               } while( ++DOcnt[89]%5 );
               for( ; ++FORcnt[133]%5 ; )
               {
                  f -= (e+c-n*j-h+a+a-k+m+n-h*n)%100;
                  k -= (h*i+d*n-h+d-l-h-m)%100;
                  k += (d*e+g+k)%100;
                  m += (h-h+a-d-a+g-e-i+b)%100;
                  d += (k-j-h*g-h-n+m-k*a*k+n)%100;
               }
               if( ++IFcnt[67]%10 )
               {
                  k += (e-k-c)%100;
                  b += (h+m)%100;
                  a -= (i+d-d*h+b+n-a)%100;
               }
               for( ; ++FORcnt[134]%5 ; )
               {
                  h -= (g-j)%100;
                  i -= (e+g)%100;
                  b  = (d-f)%100;
                  g -= (k*i-i-f*h-d-g*k-f)%100;
                  b += (i+c-c+n-l)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[89]%2 )
               {
                  l += (j*f+d+g+h-h-g+g+l)%100;
                  a -= (g+f*k-d+m*b-a-j+a-e+d*c-f)%100;
                  c -= (h-b*n*d-k-e*l+b-n)%100;
                  f  = (i-b+l*c-c-n*a-c+n-m-k+b-l*g)%100;
                  i -= (a*d+m)%100;
               }
               else
               {
                  g += (e+f+e*c*k*b+f)%100;
                  e -= (i-m)%100;
                  h += (h-g+m)%100;
                  f += (c-e-j-m*k*h+n-k-j-f+h+n-g)%100;
                  k  = (l+k*k*n+l)%100;
                  d += (i-e+c-f+f+j*k)%100;
               }
               c -= (a+d-n-i)%100;
               e -= (i+n)%100;
               a -= (n+e)%100;
            }
            break;

            default:
            {
               n += (m-d*g+h-e+k-m)%100;
            }
            }

            b -= (h+b)%100;
            f += (l-e*b+c+d-k-m+c+c+b)%100;
            f += (j+e)%100;
         }
         e -= (a*a+j+f+a-j+a-i-f+g-h+c)%100;
         m += (j+f+f+n-i-a+n+m+c)%100;
         m -= (b-l-e-d+n*i)%100;
         h -= (e-c-i-j+d+i-f*h+a+k)%100;
         g  = (n-m+n+k-c-g+g+g+e-k*i*a+l)%100;
      }
      a += (l*j)%100;
      n  = (e-k-h+m+m)%100;
      h -= (n+a+b+f+a+b*a*b*c*g-h)%100;
   }
   l -= (i-d-c-f*f-e-k-k-d*g+h+m)%100;
   g += (a-b*i-g)%100;
   m += (f*g-j*a-g*n*n+f+e)%100;
   j += (j*m-j-h+a+d*j+a+f+d+n-j+h+e)%100;
   m -= (g-e*a-k-d-c*a-j+j+d)%100;
   m += (j-e*b-n*n+j+n+b-a+i-j)%100;
   b -= (c+f-b+k+k-k+l)%100;
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
         h += (a+f)%100;
         for( ; ++FORcnt[138]%5 ; )
         {
            
            switch( ++SWcnt[45]%3 )
            {

            case 1:
            {
               if( ++IFcnt[68]%10 )
               {
                  d -= (n*i+a-e*b-a+h-f*b+b*l*g)%100;
                  d -= (f-b-b+m*b-c)%100;
                  c -= (n-k+a-d*c+n-m-n-i)%100;
               }
               if( ++IFEcnt[91]%2 )
               {
                  l -= (c+l+g+b+e+h-c-j-f+d+m)%100;
                  j += (l*g*j-m-l-j+k+e-n-a+d+c+d)%100;
                  j  = (f+k-b-j*i-c+c-m-h+m-c*c-b+e)%100;
                  n += (b-k+a+i-d-c*b-d-f*k)%100;
               }
               else
               {
                  j -= (d*b+c-g+l*b+h*n-k-m+m-n*c)%100;
                  b -= (c-f+f-k+k+k-l+b*b+n+l+f*h*k)%100;
                  e += (n*j-j*e+b-m+i+f-j*l)%100;
                  k -= (h-c-k-k-n+l*a+c-m+m)%100;
                  f -= (j*h)%100;
               }
               while( ++WHILEcnt[90]%5 )
               {
                  f += (i+n-f*j+f-f+e*n+g+a+g-e*n+k)%100;
                  c += (i-d)%100;
                  g += (f+b+l-n+f-f*k-c+b*c*c-e)%100;
                  k += (k+c+f+d-b-n*d-f+g-h+a+f*d)%100;
                  n -= (g-n-a+e+b+c-n*j)%100;
                  h += (g+k-f)%100;
               }
               do
               {
                  n  = (c-d-e+h+f-c+a-d-g+n)%100;
                  c -= (f*j-i+m-i*i*m)%100;
                  c -= (l-n-c*g+m+i+l+c+g+d-b+n*l-m)%100;
                  d -= (f-i*j-h+f*c-i-m-b*n)%100;
                  d -= (c+l)%100;
               } while( ++DOcnt[91]%5 );
               for( ; ++FORcnt[136]%5 ; )
               {
                  f -= (d-l-d+i+k-a+j+h+k+b*c-b-e)%100;
                  i -= (f+e)%100;
                  b += (n*n-a+g-e+a)%100;
                  i -= (e-a)%100;
                  i += (f+m)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[137]%5 ; )
               {
                  e  = (f+m*h+l+c*c*c+e*i-g*j)%100;
                  m  = (k-f-e*d)%100;
                  g -= (k-h+k-a+a+j+c)%100;
                  l -= (h-k)%100;
                  f += (j+f+h-e+d-c+a-l+g-e+a+e)%100;
                  d  = (j-g+d-e*c+e-b+m+i+d+a+a)%100;
               }
               if( ++IFEcnt[92]%2 )
               {
                  b -= (m-n)%100;
                  h += (b-f-n+e+k*h-a+n)%100;
                  c += (h+k+m+d+f-h+k+g-l-m)%100;
               }
               else
               {
                  d -= (n*l-l+f-a-m-c)%100;
                  a += (m-g-m-d-k)%100;
                  m -= (m*k+b*e*b+g-j)%100;
                  a -= (n+h-l+e-f*g-e-f-f)%100;
                  i += (d*n+l*k+l+k-g*h+b+f-e+k+i-g)%100;
               }
               k += (j-a+d-f+i-n*n+m-m*c-h)%100;
               c += (m-n+a+c*a-d*j-c-g+c-l*k-k)%100;
            }
            break;

            default:
            {
               a += (n-f-g-l)%100;
               f += (l*b+f*b*i-b*e+i+e*k-g-k+c*f)%100;
               n -= (l*a-e-g-l+d+d-m-n+a-j+a)%100;
               l -= (n*a+e+a-e*i-b-j+f*g-d*j+b-n)%100;
               b -= (a*e-d-d)%100;
            }
            }

            l -= (b*j-j+m)%100;
            k -= (g-h*d*j+m-k*m-i+n)%100;
            h  = (f+e*n+l+g*g+d-k)%100;
            k -= (n*l+e+f*j+b+k)%100;
            c += (b+n*l+n-e)%100;
         }
         i += (n-f+l*a+a+d+e-j-n-m+m+n+g)%100;
         a += (a*n*e-a-h-l+l*b*f-j+j-e-l)%100;
      } while( ++DOcnt[90]%5 );
      e -= (d-j)%100;
      m  = (d+e-b+e+i+d+n)%100;
      f += (k*d-j-j*n-h-d)%100;
      j -= (k+n*b+b-h+h-c-f)%100;
   }
   b += (n+c-j)%100;
   j += (n-f+a-h-i+d*b-m-m)%100;
   d  = (f+d-n-i-g+j+f-i)%100;
   f -= (a+a-h+k+f-c)%100;
   m += (g-m)%100;
   c += (j+b-i)%100;
   k -= (e-n+h-g-j*g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F42(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[94]%5 )
   {
      do
      {
         if( ++IFcnt[70]%10 )
         {
            c -= (h-j+f-k+f-g+c+n-b-a*f-k*e)%100;
            for( ; ++FORcnt[139]%5 ; )
            {
               
               switch( ++SWcnt[46]%3 )
               {

               case 1:
               {
                  e -= (i-k-g-k-n+c+d+j+n*l+k+c+h+g)%100;
                  a -= (a*c+h+n-n+g)%100;
               }
               break;

               case 2:
               {
                  g -= (i-c*k-e-j-c-m-a+c*i+g+g)%100;
                  b -= (f+m-a-f+g*f-c*d+c+j+m+e)%100;
                  i += (f+b+h+j+h-n)%100;
                  j -= (e*c)%100;
                  e += (f-n+l-i-g+d)%100;
               }
               break;

               default:
               {
                  g -= (g+a-m*e-i+k+n)%100;
                  j -= (d+d+j+b*l)%100;
                  m -= (n*e-a*c+b+a+c-c)%100;
                  i += (d+g+j-h+h+d-d)%100;
               }
               }

            }
            if( ++IFEcnt[94]%2 )
            {
               while( ++WHILEcnt[93]%5 )
               {
                  h  = (g-b-h)%100;
                  a += (e+c+b-f+a-e*h+d-h+b+b-c)%100;
                  b += (j-i-h+a+l+i-n-k+n+c+j*e+a-j)%100;
                  f += (d-e+n)%100;
                  m += (a-n-l+e-a-e)%100;
                  h -= (a*l-b*g+e-k-h*b-n-j+f+n-a-a)%100;
               }
               h += (h-n+j+n)%100;
               g -= (c-l+m-j-n-k*g-j)%100;
               d += (n*f)%100;
            }
            else
            {
               while( ++WHILEcnt[92]%5 )
               {
                  n += (k+b-g+d*n-i+l-b+e)%100;
                  e -= (c+h+d-g-b)%100;
                  h -= (n*n-h-i*e+k-j*f-j)%100;
                  l += (j+b*h+l)%100;
                  h -= (a+l*n-m-k*i+e+j*b+a-e+d+h)%100;
               }
               do
               {
                  e += (a*h+b+h-m*d-h)%100;
                  c -= (h-e)%100;
                  h -= (i-e-n-j+b-d+b+b)%100;
               } while( ++DOcnt[93]%5 );
               for( ; ++FORcnt[140]%5 ; )
               {
                  m += (i+f-m-l-k+n-k-f)%100;
                  b += (k+d*n*e+m)%100;
                  a  = (b-n*n)%100;
                  k += (l+m)%100;
                  h -= (n*n+b+c-n+m+b+b+l)%100;
               }
               if( ++IFcnt[69]%10 )
               {
                  c -= (j+j)%100;
                  f -= (d*e+g-h*d-k-g+g-h+j+e-b)%100;
                  i  = (c-g+a+h-k+d-e+g-f*i)%100;
                  h -= (i*n)%100;
               }
               for( ; ++FORcnt[141]%5 ; )
               {
                  b += (e+d+j-a+a-a-i+n-l*e-f-b)%100;
                  e -= (l*b-n)%100;
                  c -= (e-j+i+a+b+e+l+f+l-l-j)%100;
                  d -= (a*h-b+i-m-g+n-l)%100;
                  g += (c-a*j-n+g-j)%100;
                  d += (g+l+j+e+i)%100;
               }
               if( ++IFEcnt[93]%2 )
               {
                  m -= (l*f-i-d*e*f-f-i+j-b)%100;
                  l -= (a+f+h*g*j+c*a+d)%100;
                  d -= (d+m-a-f-h+l+e-k+h*j-f-c)%100;
                  j += (a+l+i-l*m-e)%100;
                  f += (m+n+d-c+c*a+j+c-l+c-n+m-d)%100;
               }
               else
               {
                  h += (n-l+j+g*k+j+e+e)%100;
                  c += (g+b-a*c+h-e+i-h*m*e)%100;
                  h += (m*e+c+f-n*e-g)%100;
                  g += (d+j-k)%100;
                  n += (a+e-a+m-b+b*e*g-f+k+b+m+e)%100;
               }
            }
            g -= (c-c-g+k+m-l*k-m-i*n+f)%100;
            d -= (l+d+c-k+k+c-c-n)%100;
         }
         f  = (g+i+c*j+c+k+f+i-d-n-g)%100;
         d += (a-l+k-a-i-k-g)%100;
         m += (i-f-e+e+f+l+d+l-c*b)%100;
         f -= (e+m+i-l)%100;
         d -= (d-m+n-b)%100;
      } while( ++DOcnt[92]%5 );
      j += (b+d*h*k+e-b+c-f-j-m+k+b+i)%100;
      n -= (e+i-b+b)%100;
      l -= (c*a)%100;
   }
   c += (j*m-h*h+l+f)%100;
   j -= (l+k+a-a-l+i-f)%100;
   l -= (i*l*a+l-n+k-j)%100;
   c += (b+j)%100;
   i += (n+j-d*m*h+b+a*f+j+k+n-g+g-d)%100;
   j -= (n-g+d+b+c-l*j+c)%100;
   h += (e-i-m+d-h-n*c*e*h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F43(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      g += (e+j-b-g*d-h-g*a+n)%100;
      for( ; ++FORcnt[145]%5 ; )
      {
         
         switch( ++SWcnt[47]%3 )
         {

         case 1:
         {
            if( ++IFcnt[71]%10 )
            {
               if( ++IFEcnt[95]%2 )
               {
                  g -= (c*i+h)%100;
                  c += (b+n+l+g-i)%100;
                  m += (e*g+g)%100;
                  d += (h-f*f-k+n*d*b+h+f)%100;
                  m += (e-b*g-k-f+a+h-k+e-b+c)%100;
               }
               else
               {
                  b -= (i*k+m*k+n)%100;
                  m += (h*k-h+h-n+a-e+f-g+k)%100;
                  h -= (m-g-k+n)%100;
                  k += (k-c-e+e*m*j)%100;
                  b += (m-k)%100;
                  i -= (h+f-a+d*h-e+j)%100;
               }
               while( ++WHILEcnt[95]%5 )
               {
                  g -= (d+f)%100;
               }
               do
               {
                  k += (m*d+k-i-n-a-m+g)%100;
                  c  = (m+i-a*i+g)%100;
               } while( ++DOcnt[95]%5 );
               for( ; ++FORcnt[142]%5 ; )
               {
                  m -= (h-i-c*h+f+a+j+j+m-i-c)%100;
                  j += (i*i+b*m+e+k-d)%100;
                  e -= (c*m-l*g*b-e*g-n*a)%100;
                  g += (h+h*i+a+m+g-a-g-f-m*m-e)%100;
                  h -= (a-l+c+b-f-g+h*l-b+a+a-h-m)%100;
               }
            }
            for( ; ++FORcnt[143]%5 ; )
            {
               if( ++IFEcnt[96]%2 )
               {
                  d += (h+c*f+j+h-n*j-g)%100;
                  c += (h+l*m+e-a+k-m+h)%100;
                  e += (b-g-n*m*c+m-a*j*i*h*i*m*c-h)%100;
                  e += (h-n+b+c+i+g*g*l*f-h-i+k)%100;
                  e -= (l-n+f*b-h+f-c+b-a+n-n)%100;
               }
               else
               {
                  b += (i*n+i+f+f+b+b)%100;
                  n -= (a-j+e*e)%100;
                  h  = (f+h*f)%100;
                  b += (c+m*l+c+b-e)%100;
                  i -= (h+f+f)%100;
                  e += (f-e+c+l+m-b+e+b*k*a+n+n+e)%100;
               }
               while( ++WHILEcnt[96]%5 )
               {
                  d += (j+n*g+m-m+d+e+h+i+k+i-l-l-g)%100;
                  k -= (k*l*j-c+g-k-j+j*b+k-f-l-m+n)%100;
                  h -= (i+l-a+f-m*a-m+a-f+g-d)%100;
               }
               do
               {
                  n -= (i*g-a)%100;
                  i += (l-n)%100;
                  j -= (e+f+d-k+l-b*f+j*b)%100;
                  b -= (m-d-g-d-b*h-e)%100;
                  j += (l+g-g+d*n-m+j-k+l)%100;
               } while( ++DOcnt[96]%5 );
               if( ++IFcnt[72]%10 )
               {
                  a -= (j-n-b+e*f-m-f-j+a+j-a)%100;
                  g  = (g*d)%100;
                  g -= (j-a-j+e*b+m+h*k*e-c*f+i-e*a)%100;
                  e -= (m+e-m+c-e+a+d-f+c+m)%100;
               }
            }
            n -= (e-j-m)%100;
            for( ; ++FORcnt[144]%5 ; )
            {
               
               switch( ++SWcnt[48]%3 )
               {

               case 1:
               {
                  a += (b*m-g*k-g-i*a+a*l-a-g*c-c)%100;
                  j -= (b+b-j-h+n+m+b-l+l-k-a-b-b)%100;
                  i -= (c+m*e+e-j+j+d-i-a-l+k-j+g)%100;
                  g -= (i*j+c+a+d-a+f-c-e)%100;
                  d -= (l*a*f-n*e-b*f+g)%100;
               }
               break;

               case 2:
               {
                  n -= (f*m)%100;
                  g += (j-d-f-a-k*c-j)%100;
                  h -= (f-k+i-f+a-f)%100;
                  c -= (d+b+h-m-n-n*l-j*k*c)%100;
                  j += (i+a*n-m-g*h)%100;
               }
               break;

               default:
               {
                  h -= (j+i+a*e*f*i-k-i)%100;
                  n -= (c+c*f-k+m+n+c*f-l*a-n+d)%100;
                  c -= (e*g+l+f+f+g+f-c-l-f+a-g+i)%100;
                  c += (i-l-d-g+h-c-b-c-n+a-d+j+n-i)%100;
               }
               }

               i  = (b-k-c-l-e+h-m-n-a-m)%100;
               d -= (b-i-d-e+a-m)%100;
               c -= (h+i-h-m+c+d+h)%100;
               k -= (a+n+i*h+h+j-b-d*d-m*l+f)%100;
               i -= (i+h+c+f+j*n+k*d*k-m+i-n)%100;
            }
            b -= (i-c*j*d-e-n+h*k-a+g+l)%100;
         }
         break;

         case 2:
         {
            g -= (a+f-b)%100;
            g += (a-a-d)%100;
            l -= (c*l+a*a+c*j-n-h+a-d-d-n+a-l)%100;
            k -= (h*f-f+e-f-b*m-i+f+g)%100;
            h -= (c+f-j+i+g*e)%100;
            k -= (b+e)%100;
         }
         break;

         default:
         {
            e -= (c+g-k+d+e+e+m)%100;
            g -= (j*g+k+m-m-e+k)%100;
            k += (l-h)%100;
            h += (g-l+a+n)%100;
            a -= (h-h+b-n)%100;
         }
         }

         f  = (m+e+a-k-b-h*b-i*c-f-d-n-m)%100;
         d -= (h-i-e-a+g-n+a+n+m+i-m-n)%100;
      }
      g  = (c+i-i-d)%100;
      h -= (m+h+l)%100;
      h += (f*h+n+m+h*h-a+n+n-l-k)%100;
   } while( ++DOcnt[94]%5 );
   a += (n-i+g+c*g+b-l+b)%100;
   b += (b-c)%100;
   b -= (i+j-b*j+i+a+l-k-d*b-j-f)%100;
   m -= (m+m)%100;
   l -= (k+l-i)%100;
   l -= (a*j-b+i-j+m*l*m+d)%100;
   b += (e*f*k-i-n+f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<105; I++) IFcnt[I]   =0;
   for(I=0; I<140; I++) IFEcnt[I]  =0;
   for(I=0; I<70; I++) SWcnt[I]   =0;
   for(I=0; I<140; I++) WHILEcnt[I]=0;
   for(I=0; I<140; I++) DOcnt[I]   =0;
   for(I=0; I<211; I++) FORcnt[I]  =0;
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

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<73; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 73 << "   Dynamic = " << sum ;
   for(I=sum=0; I<97; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 97 << "   Dynamic = " << sum ;
   for(I=sum=0; I<49; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 49 << "   Dynamic = " << sum ;
   for(I=sum=0; I<97; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 97 << "   Dynamic = " << sum ;
   for(I=sum=0; I<97; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 97 << "   Dynamic = " << sum ;
   for(I=sum=0; I<146; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 146 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}