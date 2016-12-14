#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[43],IFEcnt[57],SWcnt[28],WHILEcnt[57],DOcnt[57],FORcnt[86];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         c += (n+l+e+d-j-l-k-i*d-b)%100;
         k -= (g-b-a+k+f-f*g+f-c-e)%100;
         d += (g-i)%100;
         l -= (a-g+d-k+b+m+k*h-m-f)%100;
         f -= (c-g+e-g+d+b-j-n)%100;
         e -= (k*e)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  c -= (i-i-k+d+f)%100;
                  l -= (c-c*d*e+k-j-c+e*m-a*a)%100;
                  e += (h*m*k-h+e+f+g-f-h)%100;
               }
               c += (e+g*j+i+a*k)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  c += (a-a+c+m-m+f-i-e+l*k+b*f)%100;
                  h -= (k+d+i+m+m+a+f-f-e+n+g+m-g+k)%100;
                  g += (h-c+h*m-h+j*e*e+m)%100;
                  c += (d+e*c-b-l+j+a*k)%100;
                  d += (b+k*b-d-l)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  m -= (l-j)%100;
                  n  = (d-e-c*a-m*d-f-b)%100;
                  g -= (j+m+j+c-e)%100;
                  h -= (g+d+h-k)%100;
               }
               break;

               case 2:
               {
                  l += (a-a-f*j+i*j-c+a)%100;
                  c += (g+j-m-g+d*f+b-n)%100;
                  e += (e-m-c*l*m-i)%100;
                  l -= (n-l-g-a-g)%100;
                  i += (g+l*h*d-n*l)%100;
                  n -= (b*e-l-m-d+h-i+d-l+c*h)%100;
               }
               break;

               default:
               {
                  g -= (i*b+n*k*f-b-h-i-n-m)%100;
                  m += (e+i)%100;
                  d += (k-k-d*j)%100;
                  m += (g+n+b-h+a+e+l-d+l*l-n+j*i-b)%100;
                  b -= (k-e-m*g-a-l-a-g+f)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  l += (b-g+e+h-i*k-m-m*l*l+n+i*l)%100;
                  m -= (i-c)%100;
               }
               else
               {
                  g  = (k*e*h+k+f+g*d-k+d+e+c-j)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  l -= (e-i-l+d-n-m)%100;
                  e  = (e*k*g-m+f+h+m-a-m-n*i)%100;
                  e -= (k+k-n)%100;
                  k -= (b+a+k*e+f+i)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  i -= (a*i+i-i-f+j-n)%100;
                  f += (k-f-j-b-f+f*d-d-d-f)%100;
                  d  = (m+f+h-n)%100;
                  b += (n+k-f*k-d-f-c+j-i-a-d+g-b)%100;
                  h += (f-m*e)%100;
                  j += (f-m-c*d+a+e-a-b)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  c -= (d+h+m-j*e+f)%100;
                  g -= (n+h+k+b-h+m*l*i+i-l-f-f-c)%100;
                  b  = (j+k*h-l+b+j-f*n-c*n*j)%100;
                  m += (g-e-i*f+n-j*k-f+l-i*d-f-b)%100;
                  b -= (j*k-n+k*n*g-d+c-c-h+h)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  j -= (h-k-h*g-l-c+j)%100;
                  k -= (b*b-b*l-h-i+a)%100;
                  l += (c+f+m-g+b+i)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  j += (f*g+h+n+n-m+c)%100;
                  e += (h-f-l+l+g-a-e-a+i*e+k-j+m-e)%100;
                  b += (f-k*d-l+e)%100;
                  j += (f-l)%100;
               }
               else
               {
                  k -= (n*n-h-c+f+k+a-a-m)%100;
                  g += (k*j+a+c-a-h-i-a*b*c+a+a-b-c)%100;
                  l += (g-g+k+h-g+l*l*c+l+n-a-a-b)%100;
                  a -= (j+f+f*e*h+b+i+a+m-i+c+j)%100;
                  k -= (e+m-k-c-e+a*h+c*n-h+c)%100;
               }
            }
            b -= (b-a-i+e+k+h-a*i-b+l*g-b)%100;
            a -= (a+h+k-g)%100;
            a += (b-k+f+d)%100;
            c += (c-g-g)%100;
         }
         g -= (g*d+h+d+i+f-e-d)%100;
         a += (f+n-f+b+e*a+i-g+n+j*l-h-b+a)%100;
         c  = (m+i+h)%100;
      }
      k += (f+n+h*j+f+h-c-n*b-c-i)%100;
      c -= (l-i*i*m+j)%100;
      g += (a-e-i-h+m)%100;
      i += (l+k*j-g*d-i)%100;
   }
   n += (h-l+a+k+c+c-m*h-h-i-l-b+n)%100;
   a += (d-j+d*j*j-h-b-d-f-f+n*l+e-b)%100;
   c += (l-e-n+d+i-n*b*e+d)%100;
   b  = (h+c)%100;
   j += (c*b+a-g)%100;
   m -= (k-j+n+d*k-h-k-d)%100;
   h += (a*h+j-b+b+l+f-k+g-n+h+f-c-e)%100;
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
         k -= (f+d+j+d-h-m+f-l*d-e-j*l)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%4 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  g += (c+d*a-c+b)%100;
                  l -= (l-c-l+k+e*h*c)%100;
                  f -= (l*h*n*h-h+c*h+j+a)%100;
                  l += (n*i*a+m-g+d)%100;
                  d -= (b+g)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  k += (d*e)%100;
                  k += (a*n)%100;
                  e -= (h*h-e+k*c*m+k+k*i-h+d-f)%100;
                  l += (c+g)%100;
                  l -= (l-h-i-m*i*g*l+f)%100;
               }
               else
               {
                  m += (n+j+j-i)%100;
                  b -= (l+b*i+b-i+h+d-l*g+n*l+m+c)%100;
                  k += (m+d-b-c-f+a*f)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  d -= (l-f+j-c)%100;
                  d -= (e+k+n-f*d-e)%100;
                  g += (c+b-b+b-h+m*k-a*m*h-a+l+c)%100;
                  g += (l*a+d+a)%100;
               }
               do
               {
                  g -= (h+k-j+f*h-c*f+g*d*e)%100;
                  m += (m-c-f*f-a-a-h+d-l-h-i-g+d)%100;
                  e -= (c-h+h-h+i+n)%100;
                  k -= (e+d+a+n+f)%100;
                  c += (m+c*g-c+l)%100;
                  b -= (i-g-c-k-c+m-i+n)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  i  = (d+a-n+d-n*j*f+j+d)%100;
                  c += (l-g*j+m-g+d+e)%100;
                  n -= (c-f-c*c+b+d+l+k+h*g)%100;
                  n += (a+a-c-m)%100;
                  m -= (k*h-l+d-k)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  g += (i-a+l-d*d-j-i*d+f+m-g-a-f)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  d += (b-i+i*h+k-n+a-a-l*f)%100;
                  b += (g+l-j-d+m-l+d+j*f+j-k)%100;
                  g += (a-g)%100;
                  m -= (d+g+i*e-n-a+l*j*a+m*j+c+g)%100;
               }
               else
               {
                  g += (a-b-a+n)%100;
                  e  = (c+i)%100;
                  a += (f-i+n+c-l-h-f+f+h)%100;
                  l += (h-g)%100;
                  j -= (h+m)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  g  = (b-m-n+g+m+n-i+f-c+c-e+d)%100;
                  n += (c+d)%100;
                  f  = (c+l-h*c*e-a-l+k)%100;
                  k += (f-e-n+d+m-j-a+g-b+j+i*e+n)%100;
                  d += (f*e*j)%100;
                  g += (a-e-h)%100;
               }
            }
            break;

            case 3:
            {
               do
               {
                  l -= (n-e-i+m-c)%100;
                  k -= (d-f*e+g*b+l+g*b*a*n*d-h+f-f)%100;
                  a -= (n*e+i)%100;
               } while( ++DOcnt[4]%5 );
               e  = (d*a*n*i-j-i+j+c+g-a+c+n)%100;
               c -= (n-b+e-g*l-i*h+n-j*j-l*f+k+a)%100;
               d -= (j*c)%100;
               e += (f-d-k+h)%100;
            }
            break;

            default:
            {
               m  = (d-l+j-a-a)%100;
               n += (m-j*d*d+h+h*l)%100;
               d -= (j-e-e+j-b+g*i*j+h-c)%100;
               m -= (f-e+j-e-h*i+a-f-b+k-m-l*g)%100;
               m  = (f-k*c-d)%100;
            }
            }

            i -= (c+f+d)%100;
            b += (j+c+n-e-n-b)%100;
            h -= (b-f-n-i-m+m*m-i-m)%100;
         }
         k += (l-b+i)%100;
         m += (a*e+e*e+i-j*m+d*f+d+h+n+b-d)%100;
         f -= (l-g-l-f*g-b+m+h*g)%100;
      } while( ++DOcnt[2]%5 );
      f += (m-d-f+k*d-a+a+i-e+g)%100;
      f += (e*k+e-c-d-b-e+b)%100;
      g -= (k+e+m+a-n-k-h*e*e+j+f+l)%100;
      e -= (k-m-i-b-b-g-l-d-n*f+a-n+i)%100;
   }
   i += (k-m-m+a-f*c)%100;
   m += (m*d+j*b-f-g*g*m)%100;
   h -= (b+b-e-n+d*j*j+n+a+k*k-f+k-g)%100;
   m += (e+n-g)%100;
   g += (k-f*l+n-m+d)%100;
   a += (c*a*j+h*n-c+j+a*e+j*h*n*a)%100;
   n -= (b-b*l+e*h-f-m+i-a+f+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[4]%10 )
   {
      a += (k-b+k-h)%100;
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
                  d -= (a+m*m+d-d+f+b)%100;
                  j += (m-c-l+f-n-b+d*h+j-h+c*j)%100;
                  a  = (e-n-h+g+h-k-h-i-f-b-f*b)%100;
                  i += (j-g-k*m-g*a)%100;
                  b -= (k-l-e+m)%100;
               }
               else
               {
                  b += (a+c+k*l-l+k*m-e*h*b-j+c)%100;
                  a -= (c-d-h-l*n*c)%100;
                  f += (f+l-c+n+k+d+e-m-d-b)%100;
                  b -= (h*h+a*b-i-l)%100;
                  g += (f-f-i*k*m-f-e+g+n)%100;
                  n -= (h*m+f)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  c += (i+n-e-i-e*a+c-c+i-k+h-f)%100;
               }
               do
               {
                  a -= (d*l+h+l-h*c-i+k-d-n-n+m*i)%100;
                  k -= (j*n+c-g+a+e+h-b)%100;
               } while( ++DOcnt[6]%5 );
               k += (n-b-b+m-f-j*i*c)%100;
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  e += (h+k-d+f+b+d+b-f+j+f-b*c)%100;
                  i -= (m-c+h*a+c*a*k*j*d*a*j)%100;
                  b -= (g+a-l-m-c*f+l-f+n)%100;
                  b += (d+m+a-a*l+f+h+n+f+h-e+j-j)%100;
               }
               do
               {
                  a += (j-h-h+f-b+g-j-a*d)%100;
                  h -= (g+g*g-c-j-a*k-m+i*h-h*k*m-d)%100;
                  j += (d-k+c-m-k-c)%100;
                  c -= (l+n+h+f-l*k+d)%100;
                  k += (b+d-f+b)%100;
                  l -= (d+j-f+n+k-n+n*h-l-e+i)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  h += (i-b)%100;
                  a += (i-b-k*j-k+i+h-k+c+a+c*l-d)%100;
                  i += (n+k*b+b+l-b)%100;
                  h += (l-k*e-n-n+f-k+k)%100;
                  n += (b*h+f-l*l-b*f-f-h-b+h+b)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  e += (b*h-h-m-h+f-n+g)%100;
                  d += (g+k*a)%100;
                  j -= (e+b+n*k+b-i+n+m+e-f)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  h  = (h*h*a-d-j-h*g+i-e-f)%100;
                  j  = (h-m+e*k+f-d-c+e-g+j+a+m)%100;
                  d -= (d+a)%100;
                  b -= (k*g-c+d)%100;
                  f -= (n+n-k+l)%100;
               }
            }
            for( ; ++FORcnt[9]%5 ; )
            {
               
               switch( ++SWcnt[3]%3 )
               {

               case 1:
               {
                  l += (n-a+a)%100;
                  h -= (k+i+g*k+h)%100;
                  n -= (j+j+m-c*a+i+b*f+d+l*h-m)%100;
                  k -= (l-e-n*k+i-k)%100;
               }
               break;

               case 2:
               {
                  k -= (n-a+e-j+b-k-n-a-a+h+j-n)%100;
                  h += (e+n+b-b)%100;
                  i += (d*f)%100;
                  b -= (b-c-n*d*i+k-k-j-f-n*b-n-e)%100;
                  g  = (k-c*l*m+c)%100;
                  m -= (m+b)%100;
               }
               break;

               default:
               {
                  a -= (m+l*l*e-a+e-f-d*f-l)%100;
                  a += (a+f*f*m*d*j-m-b*j*n-b)%100;
                  j  = (l+d+i-c-f-g+k+a+c+h-i*j-d-c)%100;
                  c -= (e-b)%100;
                  n += (f-d*e+i+l*m-f+i-e)%100;
               }
               }

               e -= (k*d+d+m+n-n-k-c*l-a)%100;
               n += (h+e-i+f+g+d-f*i*k+b-c+l-d-c)%100;
               d += (f+c+a+c)%100;
               m -= (h+i)%100;
            }
            h += (i*f+m*l+m-g+e*e-f+i+j+e*d)%100;
            f += (g-b-c*b+k+j+g-a*b*c-c+m)%100;
            e += (d+k+j+i+n+b*g-k+n-i)%100;
         }
         break;

         case 2:
         {
            j += (l-e+m*b*h+b-l-e+d*f)%100;
            b += (i-j-m-c-a-d-c+a+a-g)%100;
            g -= (m+f*n+n-a-j*m)%100;
         }
         break;

         default:
         {
            b += (b-n-d*c*l-a+n+h+k)%100;
            m -= (m-d+g+l*h*k+c)%100;
            a += (e-d+k+e+b-k-m-j)%100;
            e += (m+k-k*c)%100;
            b += (m-n-d)%100;
         }
         }

         n -= (c*d-e-k+l+l*e-n*n)%100;
         j += (g*n-k+g*e-j*k+m+d-c-l-l-l)%100;
         l += (h*l-l-j-i+f*i-n+i+h-m+d)%100;
         c += (b*k)%100;
         j -= (a*k+i*a-l+n-b-h)%100;
      }
      e += (n*j*a+b-d-m-i+k-c+b+n*e-c)%100;
      h  = (d+b+k+i-k-b+k-f-d-b+f*g-l)%100;
   }
   g += (j+h-a*i+m+b-d-f-f-l-n)%100;
   l -= (i-n-l-m-h-a-l)%100;
   f  = (l-f-e-b-b+m)%100;
   k += (j+k-b+b+j+d*j-k+m*g+j+f+n+k)%100;
   e += (g+d)%100;
   g += (h*n)%100;
   i -= (i-j-i-a*l-e-f+e*k*k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F4(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[6]%10 )
   {
      if( ++IFEcnt[8]%2 )
      {
         g += (d-n+g+k)%100;
         j += (e+j-c-b+f)%100;
         i += (i*l+i-f+g-h)%100;
         l  = (f-i*l+g)%100;
      }
      else
      {
         while( ++WHILEcnt[8]%5 )
         {
            do
            {
               for( ; ++FORcnt[11]%5 ; )
               {
                  g += (g-d+e-e*l+l)%100;
                  g += (c-n)%100;
                  j  = (e-j+m-f+k-g*l)%100;
                  a -= (k-b+j+f+f)%100;
               }
               for( ; ++FORcnt[12]%5 ; )
               {
                  h  = (g+l+j+l*j-f)%100;
                  b += (k*i+e)%100;
                  i -= (k+h*d-g+e*l+i-b-d+d*c+c)%100;
                  c += (b-i-n+e-d+e)%100;
                  d -= (e+f)%100;
                  i  = (b*b+g+b+j-g)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  k -= (b+b-h*g+n+d+k+k)%100;
                  m += (a+k)%100;
                  n += (g+a-j*l+n*l+l)%100;
               }
               else
               {
                  b += (c*k)%100;
                  i -= (i-l+i+b+l-l*d-c-d*l+d)%100;
                  k  = (g+a+n-k+a*e-g)%100;
                  l -= (i*l)%100;
                  a -= (g-e+f+e-e)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  b -= (l*j+k+d-e*k-g)%100;
                  f -= (k+m-c+m+f+a-k-n)%100;
                  n -= (m+b)%100;
                  l += (b+m)%100;
                  n -= (n*d-a-i)%100;
               }
               do
               {
                  g += (k-l*i-l*k)%100;
                  e -= (e+i+n+i+f)%100;
                  k  = (a+e-j+e)%100;
                  a += (d*m-j-c)%100;
               } while( ++DOcnt[8]%5 );
            } while( ++DOcnt[7]%5 );
            if( ++IFcnt[5]%10 )
            {
               b += (j-d)%100;
               for( ; ++FORcnt[13]%5 ; )
               {
                  g -= (c-h)%100;
                  g -= (b+m+g-h-f-n-d-m+n+d)%100;
                  f -= (f+f+n)%100;
                  h += (b*i-d-e*n-l-k+n-m-f-e+a-d-l)%100;
                  b += (m+i)%100;
               }
               
               switch( ++SWcnt[4]%3 )
               {

               case 1:
               {
                  a -= (d+j)%100;
               }
               break;

               case 2:
               {
                  h  = (b+d-f*i-l+m+a-a)%100;
                  g  = (a+m*m+l-d)%100;
               }
               break;

               default:
               {
                  i += (f-d-f*b-b*c*d+e)%100;
                  b -= (e*h*g-e*c-h+c*m+j-i)%100;
                  b -= (k-b-k-k)%100;
                  n += (e+k*g-d+m)%100;
                  a -= (i-g)%100;
               }
               }

               c -= (n+i-n-d)%100;
               g += (b+b+b+a*m-i)%100;
               n += (d-b-k+e-l-m+i+n-a+m-n-n)%100;
            }
            k += (a+k+c-m-c-a-c-n+b)%100;
            m += (m+l)%100;
            d -= (l-m+e-h-c+h-j+i*l*k-j)%100;
         }
         f -= (e+e-b+h)%100;
         e -= (c-a-a-k*d+b)%100;
         l += (d-a-n+e+l)%100;
         d -= (i*e*c*c*a+b+m*e)%100;
         c += (m-b-l-i-n)%100;
      }
      d -= (f+i+j)%100;
      l  = (e-i*h-e*i*d+b)%100;
      j -= (c+a)%100;
   }
   g += (m-c)%100;
   k  = (h-g-d*d+k*g)%100;
   c -= (a-g+c)%100;
   g -= (c+k)%100;
   m  = (j-f+i-j+c+h-c-m+a-g-g)%100;
   g -= (h+m)%100;
   c -= (d+c*n-f*j*i*m+c-c+h+n*k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[10]%2 )
   {
      i += (d-m+m+j)%100;
      a += (e*h+a-e)%100;
      j -= (g+n-l+b-a+d-e+g*m)%100;
      d += (g-i+f+b-m-c*h-i-m*d-h-d-e+k)%100;
      n -= (i-f+d+k+g)%100;
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
                  j += (a*n+f-f-f-h*k+g)%100;
                  k -= (j*b+c-f*m*j)%100;
                  m -= (i+n-e+i+j+f+e*a*f-i-l)%100;
                  l += (b*g-a-m-h-n-c-h)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  h += (j+a*a+j-i+f+d-n)%100;
                  h -= (b-d)%100;
                  l  = (m*j-a-j-b*f-h)%100;
                  b -= (m*i-i)%100;
                  c -= (f-c*k+b-g+n+c-j*h+b-f-e+g+b)%100;
                  i -= (m+d+l-k*c+g+k-e-j+m)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  d += (b+e+b-a-d+a-l-k*g)%100;
                  b -= (m-a+i-n-n-i*l+a+j-d*k)%100;
                  e += (d+a+n+i+c+a)%100;
                  e += (i-g*k+j+j+d+i*m-e+m-n-n)%100;
                  c -= (g*l*a*m-d*h-l-e+b+e)%100;
               }
               else
               {
                  d  = (g+c-j-k)%100;
                  l += (e-h)%100;
                  n -= (m-e+c-m-h+l+b*n-j+m+k)%100;
                  e += (f+e+a*m-b+a+k-e+i-n+d-l)%100;
                  m  = (a*e)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  i  = (h+a+a+m+m*k-n*k+e+i-b-h-n)%100;
                  k -= (g+i+b+i*n-k+k+m+l+h-c*l+i)%100;
                  b += (l-g+g-g*k)%100;
                  f -= (j*c+l)%100;
               }
               do
               {
                  n -= (n-l+c-l-i*k-j)%100;
                  n -= (i+c*c-a+i*k-f+i)%100;
                  f -= (g-b*f+i+b-g+a-f)%100;
                  b -= (k+g)%100;
                  j += (j*c+e+c+n-k-a)%100;
                  i -= (n+d+k+l-k+a)%100;
               } while( ++DOcnt[10]%5 );
            }
            m -= (h+d)%100;
            for( ; ++FORcnt[16]%5 ; )
            {
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  c -= (f-k-e+n-n)%100;
                  a += (k+j*b-h)%100;
                  n += (l+d-b-a*i+d*b+n-a-h-h)%100;
               }
               break;

               case 2:
               {
                  i -= (j+d*f-h+k-f-l-m*a-i-j-n-l+f)%100;
                  l += (i-e)%100;
                  m -= (f-d)%100;
                  d += (e+j)%100;
                  f += (a-k*e+i-n-n+b)%100;
               }
               break;

               default:
               {
                  e  = (i-j-n-a-h*l-a)%100;
                  j -= (g+f+m+i*f-k+i+b-l+f*h+b+g)%100;
                  c += (a-l*l*e*n+f+i*f+l+m-i+i-k-h)%100;
                  b += (h+e-a+h)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  c -= (m-j*h+h+n-c*a+h*d+e-j+h-f+e)%100;
                  g -= (f+k-f*l+j-k+d-f*b)%100;
                  f -= (l+i)%100;
                  h += (m+a-k*j+b+j-d)%100;
                  d += (f+f-a)%100;
                  a += (d*c-m)%100;
               }
               l += (d-j-e-m+k*a*f-d-a-k-i+n)%100;
               b -= (l*i-k-c-c-c)%100;
               l -= (m+m*b-f-j*a)%100;
            }
         } while( ++DOcnt[9]%5 );
         g -= (k-f-a+k-n*n+e+f+n+b)%100;
         n += (d+a-m-m-h+d-c+b-i)%100;
         k -= (n+h-c*h-k*f+k)%100;
         b += (b-a+l-h+j-f+l)%100;
      }
      m += (h-c+j*d-h*h-l*g-i-m-h*f-d*d)%100;
      g += (a-j-k*b-c)%100;
      b += (j*n)%100;
      f += (g+g-e+b-h)%100;
      e += (g+g+l-j)%100;
   }
   d += (i*j-e+n*b)%100;
   h -= (h+e+j)%100;
   i -= (h*j+g*m*a-h-l+i+k-c)%100;
   d += (b+f*c-b+e+h-m)%100;
   i  = (b*m*f-i+j)%100;
   c += (h+d-a+j+h-l-d*i-d)%100;
   g += (d*d+n+e+j-k+c+g+c+l-g+a+f-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F6(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[13]%2 )
   {
      k += (m+h)%100;
      l += (d+e+g+h+n*f-h)%100;
      k -= (b-a-f-j-c+e)%100;
      d  = (a-f*l+l+g+f*e)%100;
      l += (l+f-a-h*a+f+n-e-f*b*h+i)%100;
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
                  h += (b+j-g+l-a+b-d-d+m*h+m-h)%100;
                  i += (n-k+k+d-n)%100;
                  g += (d-n-e-a-c*e-b+m+f)%100;
                  m -= (j*h*g+m-k+i-h+a-l)%100;
                  e += (f+j+g-e*i-k*j+k+k-f+f)%100;
                  g -= (j+j-k*c+b-i)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  d += (e-c*e+k+j-i*a-a-h-a-n+g+l)%100;
                  g -= (i+n-f-g-a*b-n)%100;
                  i  = (j+m+f*i-j*n-h*a-d-i-g-g+g-d)%100;
               }
               else
               {
                  c -= (e+m*b+f*a+d+l+k+i-i+f-l-h+f)%100;
                  l  = (d+e+b+j+c-g*e+d*d+m*b-i+a*m)%100;
                  j += (c-k*c+c+f-l-n+a)%100;
                  m  = (m+a+g-b-l+g+m-l-k+k)%100;
                  b += (d+g-e-k+e-i+k+e+e-e*g-e)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  e += (a+b+h+l*b*a+i-i-d*g+k+l+d)%100;
                  n += (k-k-b*b-c-b)%100;
                  i += (d+l+l*l+b-g+e+a+n-h+l*f)%100;
                  c -= (f-n+k*d-m-c+i+g*f+e*c-e)%100;
                  a -= (n-a-b+d-i*d+m-m-e+m+d+f+d+g)%100;
               }
               do
               {
                  j -= (l+h)%100;
                  j  = (f-f*c-l-j-m*f-n*d*h+h+k-b+m)%100;
                  n += (j-g-b-g*f+i+e-b-j+l-m*n-g-a)%100;
                  m += (e-h+m*m+m*e*i+f)%100;
               } while( ++DOcnt[12]%5 );
            }
            if( ++IFcnt[9]%10 )
            {
               d += (k+f-b+l-e-d+h+k+h-h*f-a+h+c)%100;
               for( ; ++FORcnt[19]%5 ; )
               {
                  f -= (f-j-c-h)%100;
                  h  = (l-d*c-a+d)%100;
                  a -= (l-g+e*d*l-m)%100;
                  e += (g+h+c*c-g-b)%100;
                  b  = (k-g+k+i+e+d-k-i-f)%100;
               }
               
               switch( ++SWcnt[6]%3 )
               {

               case 1:
               {
                  b  = (b-m+e*a+h+l-b-a)%100;
                  c += (n+d-h)%100;
                  k += (e+b-f-j*j+d)%100;
                  a -= (i+m*i-i+n+m*n+a)%100;
                  n -= (e-k+c+n-d-b+e*i-a+a+i)%100;
               }
               break;

               case 2:
               {
                  n -= (l+i+b-f-k*b*i-g+k+j*m)%100;
                  g -= (i*n+c+n-b+j+l+h+e+c-c+l-n)%100;
                  d += (m*a+i*m*a-c+g+i-c+g)%100;
                  h += (m-l*d-d+g*k+f+n+j*i+b)%100;
               }
               break;

               default:
               {
                  k += (b+b-d+c+b*d+g-d*e*n-i-n)%100;
                  b += (i-l-k*j+h-n+h+f)%100;
                  a += (c-n+j+f*a*j+b*i-e-i)%100;
                  f  = (l-m-f*l*h*a*a+j-m+h+n-l)%100;
                  a  = (n-a+d+e+h-k*b+l+c-l-j+k+f*d)%100;
                  m += (n*c-d*b-n+i-e*g*h-b-k-g)%100;
               }
               }

               if( ++IFEcnt[12]%2 )
               {
                  n -= (k*b-m+e-m*g-h+e-f+l*b*g*h*c)%100;
                  j -= (f*e+c*a-k*i*f*f+g)%100;
                  a -= (h-e-m+c)%100;
               }
               else
               {
                  n -= (c+l+j*j+m+d+i*n+a-c)%100;
                  c -= (f-i-d+e+d+c*e+b)%100;
                  a += (m+h+k+e*j*d+k+c+f+c)%100;
                  g += (j+a+m-j+n*e+f+m-h-j+b*l-d*d)%100;
                  b -= (f*l*d*m-d*l-g*f+f+h+k-e-b)%100;
               }
               b -= (l+f-e-m+h-d-b*j-n-e)%100;
               l += (g+a-i-h+l-f)%100;
            }
            b += (c-k)%100;
            n -= (d-c*c-m-e-i+h-b+n*e)%100;
            a += (k+a-e-m+l-e-n*h+m-i-i+i+a)%100;
         } while( ++DOcnt[11]%5 );
         m += (m+f-h-j*e-c)%100;
      }
   }
   l += (k+e-f-i+e+n-m-g*l+n*n)%100;
   d -= (g*a-d+e-b+k+a-a+d+h+a-b)%100;
   l -= (d-d+h+n+g)%100;
   j -= (l-a-a-g+j)%100;
   i += (f-n-d-g*f*h)%100;
   g -= (a+i+h+l-a+h-h*c-n+a*m+e-h)%100;
   g += (m+g-j-i-g-a-c-h-m)%100;
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
                  k += (l+b+b+l+k+b*d+a+e)%100;
                  m -= (b*n+a-b+m+g*a-j+i+a+b)%100;
               }
            }
            if( ++IFEcnt[15]%2 )
            {
               if( ++IFcnt[11]%10 )
               {
                  d -= (e-e-d-f*a-j-m+l*a+i+a+c-j-n)%100;
                  c += (i-j+k-c+f+d*k*m)%100;
                  b  = (n*i)%100;
                  l += (f*j*m-i+i-a+k)%100;
                  f  = (g-b-m-l-n)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  m -= (n+a-f-k-c+l-i*f*d)%100;
                  m  = (b-k+g*l-n*g-i+a+m-b-l-m-h)%100;
                  c += (l+f*l-k-n-e-b)%100;
                  b += (d+n-n+i-i-j-f-f*j*m)%100;
               }
               else
               {
                  m += (g+i)%100;
                  a  = (j+b+b+h-e+j+i+i+k+n*g)%100;
                  l -= (m+e-k-e-j-g)%100;
                  h -= (k+k*h)%100;
                  b -= (a-a-i-m*e*f-l+b*h-h-m-a+d+i)%100;
               }
               while( ++WHILEcnt[14]%5 )
               {
                  d -= (d-b+b-k+i)%100;
                  n -= (k+b-a+k-a+d*m-g+j+l-n+n+l+m)%100;
                  f  = (i*a-i-d*l-k+c+m)%100;
                  j -= (b+d-n+l)%100;
                  m -= (a+m+n-b+e+c)%100;
                  i -= (c-f)%100;
               }
               do
               {
                  h -= (n+l+d)%100;
                  n -= (e-h-c*f-c*i-b*e-a-a-c-k+e)%100;
                  e += (c+m+l*a*e)%100;
                  g  = (h-h+i+b*i*m*j+k)%100;
                  j += (d-g-n*h*l+n+g*f+d-j-k)%100;
               } while( ++DOcnt[15]%5 );
               h += (n*n*k+d+f-d+i+d-g+n+c+n+m+a)%100;
               c += (f+k-j)%100;
            }
            else
            {
               while( ++WHILEcnt[13]%5 )
               {
                  l += (c-a+i-c-n-k+g+b)%100;
                  b  = (c+f-e-f-b-m+n-c*n+b*a)%100;
                  m -= (j-k-l+n-g+k*g+e-e+m*d+d+h)%100;
                  e -= (a-d+l+j+g-a*h-g-f*g)%100;
               }
               do
               {
                  d += (d-b*n+l-n-n*i+c+l+n+h)%100;
                  g += (f-h+i+k+a+b)%100;
                  f -= (d*b-i-i-d-e-a-k-a*b)%100;
                  i += (j*k+l+e*j+g+m-b-m+l+i+l)%100;
                  g -= (g+j+e+a+h*j-b+g+n+a-j*f+k)%100;
                  g -= (n+k*e+m-l*j-e)%100;
               } while( ++DOcnt[14]%5 );
               a += (n-f)%100;
               for( ; ++FORcnt[21]%5 ; )
               {
                  a -= (f-n-c+n-g+h*a-i)%100;
                  g += (k+m+m-m+m+f-j-n-j+f+n-a-h)%100;
                  c -= (a-h-c-e+b+g)%100;
                  b  = (c-g+f*i+b*e+a)%100;
                  n -= (j*h)%100;
               }
               
               switch( ++SWcnt[7]%3 )
               {

               case 1:
               {
                  k -= (m*h-j+d-j+c*b-a-l-a-g)%100;
                  j += (i*d*e+k-b-f+j*b+g+h-c)%100;
                  c += (l+b+d+n-d-a)%100;
               }
               break;

               case 2:
               {
                  g -= (j-j-a-f+i-l-n-a)%100;
                  h += (c+m+l*e+m-i)%100;
                  g -= (e-g-g-m+j+a-k-c)%100;
                  g += (d*b-f+l-a+e-m+c*b*l*k)%100;
                  e -= (h+f-c*h-c+c+n-f-i+e+c)%100;
               }
               break;

               default:
               {
                  h  = (k-i-d*i*m-n+l-b-e-m+b)%100;
                  b -= (l+e+n+m+k+a+k+g+d+g*g)%100;
                  i += (e-e)%100;
                  n -= (c+c-f+b-c*e)%100;
               }
               }

            }
            f += (k+c-b-a+c*n-a+g*f-d)%100;
            d -= (a+a*d*d-m-c*m+b*b+e-d+h+n)%100;
            b += (b+g-f*l-g+b*b-h+c-b-m-m-d*c)%100;
         }
         i -= (a-l+h-j*f)%100;
         d -= (b+i-a+l-b-j+d)%100;
         j += (c-m*f-j*e-i*f)%100;
         g -= (n-h)%100;
         d += (e-a+f*i-a*m+k+m+a-g+f)%100;
      } while( ++DOcnt[13]%5 );
      j  = (e+f-k-b*i-c+k)%100;
      k -= (f-e*d-g+e)%100;
      g += (i-j+n*k*c)%100;
   }
   g += (c+e+c-h*k*j+l-f)%100;
   h -= (g-k+d+b*g*h*j)%100;
   e += (a+d-i)%100;
   n -= (j*b+c+h)%100;
   f += (a-a*i*k*d+a+m+h+j-i-k)%100;
   m -= (n+f)%100;
   g += (h*n*n-a-h*k+a+c+n-b)%100;
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
            k -= (e-l)%100;
            j += (n+b-n+h+b+f-m+a*c+b)%100;
            i -= (l+b-k-i*b*d-n-c+h+g-m)%100;
            n -= (h+b-f+e*i-c-k*c)%100;
         }
         else
         {
            while( ++WHILEcnt[16]%5 )
            {
               do
               {
                  m -= (d*b+b-i)%100;
                  m += (h+b-b+k*e+a+l-f)%100;
                  k -= (e-f*n-l+f)%100;
                  d -= (e-c+g*h+h+j*l+m)%100;
                  h -= (j+h+n+n-c-f-m-f*h*n*m*e)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  i -= (m+k+i+i*e+g-e*a)%100;
               }
               e += (e-g-m+c-f*d-g+i)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  e -= (g-k-e+i)%100;
                  m  = (j*e-c+m+k*i+j+k+d+g)%100;
               }
               
               switch( ++SWcnt[8]%4 )
               {

               case 1:
               {
                  h -= (b-b-c-f-a-j*l*m+f-e)%100;
                  n  = (a*h-d-e-g-l+k-f-b-c+k)%100;
                  g += (n+m)%100;
                  l += (h*d+c+m*a*a-l+n+c+m-l)%100;
                  n += (f-f*j-i*h+g*k)%100;
               }
               break;

               case 2:
               {
                  d += (g+l)%100;
                  n += (l*m-c-e-i)%100;
                  d += (e-m-i)%100;
                  i += (j+e+a+i-k+g-c)%100;
               }
               break;

               case 3:
               {
                  j -= (f-k+h+k+i*k+d+e+g-k+k-a-l*a)%100;
                  m -= (i*d+b-h-n+e-h+n-b-h-g+f+h)%100;
                  d += (m+c-d-f+n-i+b+b+a-l)%100;
                  e += (f-g-l-g*e-m+h)%100;
                  b -= (h-k)%100;
                  d += (e-m*g-m-c-d+n+e)%100;
               }
               break;

               default:
               {
                  e  = (b-j*k+b*d)%100;
                  k -= (a*d-j-j-c+a+i-e*b+j+k+f+k-b)%100;
                  h += (i+e+c-h+m+m+f-b-i)%100;
                  f += (g-e-c*d-j+m*e*n*d+j-f+h)%100;
                  b -= (g+n-h+k+i+k-m+n)%100;
               }
               }

               if( ++IFEcnt[16]%2 )
               {
                  g -= (a-h-l+e-e-l)%100;
                  a -= (b-m*m+g+k-h-l*b-k)%100;
                  n  = (e-j*h-c-b*b*e*n*f-g+l+f+i)%100;
                  i -= (f-f-k-i-k-f)%100;
                  i -= (a-k-b)%100;
               }
               else
               {
                  c -= (f+c-b+g+m-j-m+k)%100;
                  b += (l*a+g+a+j*a+n+j*b+f+b+c+e+m)%100;
                  c += (m-e-l-h*c-h+n*k-b-h)%100;
               }
            }
            while( ++WHILEcnt[17]%5 )
            {
               do
               {
                  c += (c-n+f*n-b+g+d*h+k*g-d-e)%100;
                  m += (b-h+l*m+l-i+c+j*m-e)%100;
                  c -= (g*i-k-m-a-a)%100;
                  f += (i*k*n)%100;
                  d  = (m+c-m+k*h-g+g+b-l*l+e)%100;
                  e  = (f*c)%100;
               } while( ++DOcnt[17]%5 );
               for( ; ++FORcnt[24]%5 ; )
               {
                  m  = (c+g+j-m+d+j-i+h-g+f)%100;
                  b += (f-a)%100;
                  m += (m-i-i)%100;
                  h += (c*i-k+b*i-i-c*a+k+a)%100;
                  m -= (d+e-k-c+f-g*i*b-j-b+n+g)%100;
               }
               if( ++IFcnt[13]%10 )
               {
                  f += (l+l+j+a+i+m*j-f+f)%100;
                  e += (l-m+n+b+f*j*a+a)%100;
                  g -= (a+b+i+n-i-j+c*h)%100;
                  e -= (m-n*j)%100;
                  i += (b-h+k-f+i+i*g+n+l)%100;
               }
               m -= (b+j-g*d+a+b+i+n-e*g-k+e*g)%100;
            }
            b += (d+c-c-f+j-j+c-d+g-g-k+a)%100;
            c  = (i*h+a-i*m-f+d+l*g*g-b)%100;
         }
         f -= (k-d+d)%100;
         g -= (b-i-c-m*h-e*e-f-j+b*l+n-m)%100;
         j -= (e+n-g+h-f-i)%100;
         h -= (m*e-a+g+b-k-i-k*h+k+c*d-g)%100;
      }
      h  = (a+m-c)%100;
      b -= (l-c*g+f+n+l+a+c+d-g)%100;
   }
   n += (d+g-f*l)%100;
   c -= (j+f+c*d*h*e+b+m-g-e+h)%100;
   f += (h+g-h*f-l+b*j-l-k-g+f+f+j)%100;
   k -= (i+e+e+n-m-c-f*l+i*a)%100;
   l -= (m-n*f+d*g+i+h-k-h-c)%100;
   e -= (h+g)%100;
   n += (c+a*f-b-c+n+k-b-a)%100;
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
         f += (b-c)%100;
         i -= (n*d-m-i-d+j*j+e+i)%100;
         d -= (a-n)%100;
         i -= (l-k+c+j-b+k-c+a+f+m)%100;
         m -= (c+g-m-j+d-i-b+e*e+k+f-d-n*d)%100;
      }
      else
      {
         while( ++WHILEcnt[19]%5 )
         {
            do
            {
               l += (f+j+n*m-i)%100;
               for( ; ++FORcnt[27]%5 ; )
               {
                  a -= (j+b)%100;
                  m += (b*b+l+b*d+g-n+d+h)%100;
                  d += (m*h+d-e)%100;
                  i -= (l+i*j+i+l-a-m+l-k-f*d+c-g)%100;
               }
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  a -= (i+c+e*g)%100;
                  j  = (k-i-e+h-f+f+e*f+k-e-c)%100;
                  e += (b-i)%100;
                  b += (k+c-n*n-m-n-l+n+j+j+e-k+i)%100;
                  g += (d+a+f*a+a*f+f)%100;
                  k -= (g+f+c-k*d+g*f+h*j)%100;
               }
               break;

               case 2:
               {
                  n += (c*g*f-g*j+c+l)%100;
                  e -= (j+j-e+a)%100;
                  e -= (c+l-f*h)%100;
                  n -= (l-g+f*g-f+j+m-n*c)%100;
                  n += (g+d)%100;
               }
               break;

               default:
               {
                  i -= (e+a*d+k-l*m+d-i-e-m*a)%100;
               }
               }

               if( ++IFcnt[14]%10 )
               {
                  e -= (e+b)%100;
                  f += (a-l+b+f-b)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  i -= (n*f+n-m-c-m+g*c)%100;
                  k -= (j+j-j+k+g-j-k+d+m-j)%100;
                  g -= (i+i+j-b+h+g)%100;
                  l += (l+f-a-m)%100;
               }
               else
               {
                  g -= (g-l*m+m-c+f*k+n)%100;
                  g  = (b-g-f-m+e-g)%100;
                  b  = (c-e+a+g+d+l)%100;
                  d += (e+m)%100;
                  b  = (h*a-a+i)%100;
               }
            } while( ++DOcnt[18]%5 );
            while( ++WHILEcnt[18]%5 )
            {
               do
               {
                  b += (e+m+l-c-j*c*f+f*b)%100;
                  f  = (d-g-l*k*d+c-j-b+a+h+e)%100;
                  j -= (k+e+e*f-i-d-e*g-m+n-b-m*e*f)%100;
                  h -= (d-c-i+k-l+m+f*f)%100;
                  a -= (n*a)%100;
               } while( ++DOcnt[19]%5 );
               for( ; ++FORcnt[28]%5 ; )
               {
                  c += (a-g-m*c*b+l*h-j*h-h-j-a)%100;
                  a += (b-l)%100;
                  c -= (e-k)%100;
               }
               for( ; ++FORcnt[29]%5 ; )
               {
                  b -= (g+e)%100;
                  f += (h-k-j-k)%100;
                  j += (i*j-m+g*l+l+g-c)%100;
                  j -= (h-g-g+h*f-l+f)%100;
                  b -= (e+m-l-c+m*d+c)%100;
               }
               if( ++IFEcnt[19]%2 )
               {
                  e  = (f-j+e-f+h)%100;
                  a -= (k-f-a)%100;
                  i -= (f+e*i)%100;
                  k -= (e-k-m*k+a+a*c-f-n+k+d-d)%100;
                  k += (h-g)%100;
                  l += (b*f-i+k*g*j+i+m)%100;
               }
               else
               {
                  e += (h-h+n-e*g-a+b+n-k)%100;
                  g += (k*b-i-j*h-h+k*h+m)%100;
                  l -= (n+n)%100;
                  f += (l*k-f-i-h*j)%100;
               }
               e -= (k+h+h*g)%100;
               d += (l-n+g-l+m)%100;
            }
            i  = (c-l+c+m+h)%100;
         }
         m += (j+d+j-i)%100;
         f -= (d*c+i)%100;
         j -= (g+n)%100;
         n -= (j-f)%100;
      }
      a += (c+i-c+a+a+l+h+b-c*g+n+g-d+i)%100;
      h -= (i+b)%100;
      b -= (b+k-f-n-j+e-m)%100;
      e -= (d+i)%100;
      n -= (a+i-e+k*c+e+i)%100;
   }
   e -= (c*k*c+b*d-n*h-m+g)%100;
   k += (n+e+d-b-l-a-l+g*e*c*d-n-f)%100;
   k -= (i+l+g-f*i+f-g+m-g)%100;
   m += (c+k-c+m+e*e-c)%100;
   b  = (f*h*i-k*j-n+h-g-m-a+n+b-n)%100;
   i  = (l+m-d)%100;
   i -= (c-g*k*k+a+i-b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F10(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[21]%5 )
   {
      do
      {
         if( ++IFcnt[16]%10 )
         {
            d -= (m-d-k*j)%100;
            for( ; ++FORcnt[32]%5 ; )
            {
               
               switch( ++SWcnt[10]%4 )
               {

               case 1:
               {
                  d  = (g-n*g-j*l)%100;
                  j -= (c*a+f-b+d-l+e+f-d-n-i*c-f)%100;
                  j += (i+g*k-i)%100;
               }
               break;

               case 2:
               {
                  a += (i*j)%100;
                  d += (e+b+f-i+m+c-m+f+i+e)%100;
                  a -= (e-i-k+k-l-h-k*b+j-b)%100;
                  n += (n+a+d)%100;
                  a -= (e+h-d+f+g)%100;
               }
               break;

               case 3:
               {
                  a -= (d+c-n-l-a+l-e-c+j+j*c*f+i-e)%100;
                  a += (a+e+g-c+m-k+e-n-j+m-n+c)%100;
                  e += (d+d)%100;
                  m += (c+f+e-m*k-h+n*l-h+j)%100;
               }
               break;

               default:
               {
                  b -= (e+m+m-d)%100;
                  a -= (i+b-c-f*n-g*i+a-b)%100;
                  h  = (j+j+b*e-m*m+h+m+b)%100;
                  c += (l-g*h-k-h*k-j-a-c-f)%100;
                  j -= (j+l*d*j-m+a*d+b*n)%100;
                  h -= (i*h+d-j*c)%100;
               }
               }

               if( ++IFEcnt[21]%2 )
               {
                  b -= (c-d*h*l+j-d+l*c+e)%100;
               }
               else
               {
                  h += (g*e)%100;
                  g += (b+g)%100;
                  a += (n+g-k+i)%100;
                  h -= (h-d+e-a)%100;
                  g += (e-e+m+l)%100;
               }
               while( ++WHILEcnt[20]%5 )
               {
                  k += (k*k+d-g-m+e+l*d)%100;
                  c += (m+e-m+j-c*m-e-d+d-g)%100;
               }
               do
               {
                  m  = (m+n*a-n*k+n+b+a-m-d-n-n)%100;
                  f  = (d-f-h-n-j)%100;
                  j -= (k-e+h-b-k-c)%100;
                  c += (c-g+i+h-k-j*f-a-m+k)%100;
                  n += (c*j-j+g-l*g-e-i+j+e)%100;
               } while( ++DOcnt[21]%5 );
               for( ; ++FORcnt[31]%5 ; )
               {
                  i += (i-b*k*m+d*l-c-h+h-e)%100;
                  n -= (k*l*a*c)%100;
                  i += (e+h+k)%100;
                  i += (e+f-f*e+h)%100;
               }
            }
            if( ++IFcnt[15]%10 )
            {
               for( ; ++FORcnt[33]%5 ; )
               {
                  k -= (k-e-a*n+d*j-j-d+l)%100;
                  c -= (n+c-l-m+j-m+b+j+h-h)%100;
                  e -= (d*m+g*m+g*n+f)%100;
                  n  = (h-i-n-l+a-f+b-i-b+d-c-h)%100;
                  d += (a*j+e+n-h-c)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  d -= (e+e+j+e+m*h*a+m-e+d-c)%100;
                  h -= (d+i)%100;
                  j  = (m*f*a-g-n-a)%100;
                  j  = (g-m+k-n+f)%100;
                  e -= (a+b+c-a*i-e-l)%100;
               }
               else
               {
                  m -= (k*n*a-g+n+a+i*c-d+l-d)%100;
                  h -= (n*d+e+l+n-g)%100;
                  g += (i-f+e*e-a*e+l*e*i-n+g)%100;
               }
               f -= (b+i-k+b+e+a*m-f)%100;
               l += (m*l+g+f-l-g*d+d-m+f+m*j+b)%100;
               k += (j*f+d+j+b+d-f-g-k*i*i-e)%100;
               a += (g-j+l*n+c)%100;
            }
            i  = (h*g*k-i+h)%100;
            m -= (j+d+k*d-e+m+h+i-m)%100;
            d += (j-i+b-g+l-m-c)%100;
         }
         b -= (b+l-n-l*h*c-k+f-l-k*j-n*d+i)%100;
         h -= (n-h+n-n*k)%100;
         m += (m-f*j+l*h+b+b*j)%100;
      } while( ++DOcnt[20]%5 );
      b += (h-k)%100;
      f += (m+n-m-h-c-k*a-g*c+f*e*m-a)%100;
      n -= (i-c*g*c+n-a-k-i-m-l-b+b)%100;
      n -= (a-d-h-h+e+b*g*a*l+f)%100;
   }
   l -= (d-a+f+h-k)%100;
   k += (n*l*h-d+m+e+j+l-k-n-c+c)%100;
   d  = (e-l-k*i-a+g+c-a)%100;
   k += (c-g-h+a*m)%100;
   c  = (c+k*l*a+c+n+i+m*k*j-m*i+l*d)%100;
   e += (m+m-c-k+e*b+f+i*g+l-h)%100;
   d += (e-m-k+d*d*g+n*g*j-h)%100;
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
         j += (n+g-m-d)%100;
         for( ; ++FORcnt[36]%5 ; )
         {
            
            switch( ++SWcnt[11]%4 )
            {

            case 1:
            {
               if( ++IFcnt[17]%10 )
               {
                  d += (l+a-i*i-n-m+j)%100;
                  e -= (g-n+f+l-l*g+j+a-a*f*f+f)%100;
                  n += (e+c-j-e+k+g+k+e-j+g-b)%100;
                  l -= (d-a+k*b*g+c+f+l)%100;
               }
               if( ++IFEcnt[23]%2 )
               {
                  a += (d*e-d-i-d-j-l+l+b-k+b-m-c+i)%100;
                  m -= (c+n*f-d+f-e+f+b)%100;
                  i -= (f*c+b-j-b+g-f-g)%100;
                  d  = (a+g+c-k*f+d+b+b+b-i-k)%100;
                  a -= (f+n*h-m-f-n-i-m*e+n)%100;
               }
               else
               {
                  l += (n+f+e+h-g-a+k-k)%100;
                  b -= (h+e-a-d*l-n-a+k+i*e)%100;
                  d += (f+b-i+d-l+k-g*g+m+e-f+g+a)%100;
                  e -= (i-c*h*e+m*h+j)%100;
                  c += (n+i-a-g)%100;
                  l  = (g+d)%100;
               }
               while( ++WHILEcnt[22]%5 )
               {
                  a += (n+k-g)%100;
                  j += (n+f-e+i-f-g*b-d*c*c+f-i)%100;
                  b += (k*n*j+m-g-l*c+m*i*b+a+b)%100;
               }
               do
               {
                  g -= (e*g*g-h-l-l-l+e-d+d-h)%100;
                  j -= (f+d+b+m)%100;
                  h += (k-h+a+l+j+c-i+k-i*i)%100;
                  g -= (h-m-d-b+f*l-d*c-g-c*i+f-a)%100;
                  a += (a-b-h*g*c+n*b+f+k)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  c += (a-n-b-l-l-b)%100;
                  j -= (g+a+g-h-g-f-h+c+n-e-i*k-k)%100;
                  d += (n+g*k)%100;
                  i  = (l+h-k-j+m*f-j-f)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[35]%5 ; )
               {
                  d -= (f*b)%100;
                  m += (f-k-b+i-e)%100;
                  m += (n+j-m+i+n+k+c)%100;
                  m += (m*g*j*d+i+c-d+i+b-g*e*n)%100;
                  d -= (h+e)%100;
               }
               if( ++IFEcnt[24]%2 )
               {
                  k += (b+n+a)%100;
                  b -= (e+l-n+g*l-m*l-e-a+e-i)%100;
               }
               else
               {
                  a += (e-c)%100;
               }
               while( ++WHILEcnt[23]%5 )
               {
                  j -= (h+f-n+n)%100;
                  e -= (n*l+l)%100;
                  b += (b-i*d+j-f-l*h)%100;
                  l  = (n+f+a+d-k-n+g-n+k+e-f+h)%100;
                  a -= (l+i+j*m)%100;
               }
               do
               {
                  m -= (c+f)%100;
                  i -= (g+a+d*c+f+j)%100;
                  g += (g+e+l*l+f+m-m-g+j*d*k+e)%100;
                  d -= (g-m*k-m-k+c)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[18]%10 )
               {
                  j -= (f-d*n-d*d*g+m+i-n*m-l)%100;
                  d -= (c*c-g*f+m+j-f)%100;
                  m += (l-f-n)%100;
                  c += (d-l+f-k+f)%100;
                  d -= (m+f-h-n+e+i+d*n-g+k)%100;
                  h -= (l+f+m-l-a)%100;
               }
               b -= (k+g-b-c-n+g-n*g)%100;
            }
            break;

            case 3:
            {
               i += (c+l-j-n+b+e+d-n*j)%100;
               c += (a+b+g-b+h+g+e+m)%100;
               n -= (g+k*d*l+a-f+b-b+l-c)%100;
               d += (f+e+m+i+m+j*f+b+f-j)%100;
               k -= (e+k-f*n-m-b+e-e+b-c*l+a)%100;
            }
            break;

            default:
            {
               g  = (h-g-i*f*l-k+d+g-f-k*f+n*a)%100;
               l -= (k+m)%100;
               m -= (h-n-f)%100;
            }
            }

            h += (g-m+h-d+c+n*h)%100;
            c += (c*n*j-i*l)%100;
            a -= (b-m-a*j+e)%100;
            f  = (b-c+c-b-i-b+a*c-b-e+j+c*c)%100;
         }
         m -= (e-e-i-e*i-j-b-i-g)%100;
         b += (b-f+n-l-h*j*h+a+n-m+i)%100;
         h -= (g+g+h-j-l+b+k+n+e*f+l+b+m-d)%100;
         b += (g-b)%100;
      } while( ++DOcnt[22]%5 );
      e += (n-d)%100;
      g -= (b+g*j+d-b)%100;
      a += (a+k*d-m*h+b+i)%100;
   }
   l += (c-k+m+c+c+k*a-c+d*h+b)%100;
   j -= (b+g-g*k-k+d)%100;
   k += (l+k-l-g+k+k+f+m-d-m-d-e)%100;
   a -= (j-l+j-b-m-n+k)%100;
   k += (i-e*e-j+i+e*i)%100;
   e -= (b-a)%100;
   k  = (k*k-b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[40]%5 ; )
   {
      
      switch( ++SWcnt[12]%3 )
      {

      case 1:
      {
         if( ++IFEcnt[26]%2 )
         {
            j += (j-i*c*n-f)%100;
            h -= (l-i-g-d+i)%100;
            j += (d+g+k-b*b-l+h+b-n-j)%100;
            g -= (e+a+b+f-a)%100;
         }
         else
         {
            while( ++WHILEcnt[25]%5 )
            {
               do
               {
                  i -= (d+d*h+l+b+c+k*f-j+g-c-j)%100;
                  e -= (i-i+i-j+m-l+i)%100;
                  f += (c+l+g)%100;
                  h += (l-d-l+n-l+m-k*n)%100;
                  h += (i-a-i+a+b-d-d+i-d+h)%100;
               } while( ++DOcnt[25]%5 );
               for( ; ++FORcnt[37]%5 ; )
               {
                  e += (b-h*n+e-h-h-i)%100;
                  n -= (b-g-m+e*e-d*m-l-a)%100;
                  f -= (c+h+l)%100;
                  n += (l*a+b-c-k*c*k)%100;
               }
               if( ++IFcnt[19]%10 )
               {
                  e -= (g-c-n+k*h*e+c+i)%100;
                  l += (n-k*a-i+l)%100;
                  i -= (k+e+k-c*c-l*d*l)%100;
                  b -= (n-f+j)%100;
                  n -= (j*e-k-b)%100;
                  k -= (a-e+e+i*e-h-j*n-i+l+e*l*h+f)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  a += (n*e-j+f+n-j*j+a-f*d)%100;
                  i -= (n*j+l-c+l+c+c-g-m*e-d)%100;
                  f += (g*i*g-g+j+n*a-i)%100;
                  f -= (k+m)%100;
                  e -= (f*k*b-m-l+b+g+g*a*f-e-h*e-g)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  e -= (g+e+b*i*d-k*g+j*a+d-a)%100;
                  k += (f-i-h+m+c+h)%100;
                  e += (b+i-b-l+d-b+a+i-c+a)%100;
                  m -= (e*i+m+e-g-l-l*l-j+c-a*l-f*l)%100;
                  i -= (d-c*f-e+m-j-g+b+m-b+a+n)%100;
               }
               else
               {
                  l -= (b-j*k+k-d-j+m+b+j)%100;
                  m  = (i*l+g+j+f*a+f-e)%100;
                  e += (g-e+n+e)%100;
               }
            }
            while( ++WHILEcnt[26]%5 )
            {
               do
               {
                  n -= (d-m*n)%100;
                  d  = (k+b*i-a-g+m*n-d-d+k+h-j+h*j)%100;
                  b -= (a*b-a*g-l+i+c-e-f+b+m-a+c-e)%100;
                  m  = (e+m+m)%100;
                  m += (n-d-b+m-m*f+c+b-g*e*j)%100;
                  m -= (a*d*h+i-m-b)%100;
               } while( ++DOcnt[26]%5 );
               n  = (b*b*b-m+n-a)%100;
               for( ; ++FORcnt[39]%5 ; )
               {
                  n -= (d+i*f+d-k+j*f-g*a+e*n+l+c)%100;
                  e += (b+g+k-f-h-i-d+n+f+e+k-k-g)%100;
                  k += (e*g+b+h)%100;
                  c -= (k+h*a*n+c*g*n+i)%100;
                  c -= (n+k+d+h*n-e-h*d-n+l)%100;
               }
               
               switch( ++SWcnt[13]%3 )
               {

               case 1:
               {
                  c -= (j-n+j-i-k)%100;
               }
               break;

               case 2:
               {
                  d -= (j-c-i-g+h+a)%100;
                  j += (m+g)%100;
               }
               break;

               default:
               {
                  i -= (a+e-f+j*b)%100;
                  a += (e+l+d)%100;
                  b -= (k+e+h)%100;
                  c += (c-c-c-i-f+a-d+n-a*i-m)%100;
                  n += (h+e+d+b*j-k)%100;
               }
               }

            }
            m += (b-f*m+h-k-a)%100;
            d += (e-h+m-c+g*g+m-e+f-f+n+k)%100;
            j -= (n+a*f-i+e+e-a+e*j)%100;
            i -= (a+h+i+j)%100;
         }
         b += (m*n-f-e+f)%100;
         h += (b-j*i+j+a-n*i-e*i+a+c*j-j-c)%100;
         c  = (h+n+h-m*c-e-i-f+g)%100;
      }
      break;

      case 2:
      {
         f -= (e*f-a*n*l+l-l+n-m+l+f+g*b)%100;
         b += (a+k-k-h+n*h-a+b*d)%100;
         g += (k*c*d*j-k+a+e-k-i-j+f+b)%100;
         h += (l+m)%100;
         j  = (g-d-l-e+k*g)%100;
         m += (m+b-h+n-b+h+a*m-b-a+d)%100;
      }
      break;

      default:
      {
         h  = (i+a+l-j-m+c*e-h+j)%100;
         h  = (k-k+l-c-l+a-l)%100;
         j += (h-n)%100;
         n += (e+g-b+h*a+j)%100;
         l -= (f+b+g+j+n+m-b+d-l-a-m)%100;
      }
      }

      a += (n-c+d)%100;
      l += (a+n-n)%100;
      c += (g*b-i+j-m)%100;
      k += (m*j+i*k+g+m+a-i+n-m+a+e-k-j)%100;
   }
   h -= (n-j+b+l+l-l)%100;
   h += (k-d+g+g-c-j-n+n+k+d+j-n)%100;
   k += (c-m+a+i+m-b-e+f+g)%100;
   f -= (k-h-j+g-k*m)%100;
   f += (g-h+l*c-f+a-n-e-d-i+k+h+a*h)%100;
   k -= (j-n-i-n-l*h-g-d+h+e)%100;
   k -= (n+b+b+b+n+d+c+c+l)%100;
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
         f -= (i+d-a-g-f-f-n)%100;
         e  = (g+l)%100;
      }
      else
      {
         while( ++WHILEcnt[28]%5 )
         {
            do
            {
               for( ; ++FORcnt[41]%5 ; )
               {
                  l  = (d*e)%100;
                  e -= (m-j-j-g-m*h*a)%100;
                  h += (i+n-f+b-k)%100;
                  d -= (f+a+d-k)%100;
                  j -= (h+k*c+k+i*d-d+n-e+m-e+a-j)%100;
               }
               for( ; ++FORcnt[42]%5 ; )
               {
                  e  = (i+j+e+i-b-a)%100;
                  j += (f-c+m-m-i*n+n*b-e)%100;
                  f -= (k*e)%100;
                  e += (c-a)%100;
                  j += (g+n*j-h*k*g+n+b-e*n)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  g += (g+f-h-a)%100;
                  f += (d-h+k+d-g+h+h-a+h)%100;
                  i  = (n+d+f+n-h+b-f-j*m-i+i+a-a+h)%100;
                  b += (j+a+b*j+f+n-m+i+e+h+e)%100;
                  k += (a+f+j+j-l-m)%100;
                  l -= (h-d-n+n)%100;
               }
               else
               {
                  a += (m-i-f-d-m+i+h-k-d+e-l-a-f)%100;
                  j  = (a*d+c-b)%100;
                  b -= (f*c-g)%100;
                  j -= (g-n+c-e-e+c-b-b-g+m+g)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  n  = (j+k-c)%100;
                  d -= (g-a+l*n+d+e+i)%100;
                  l += (m*n-a+l-m-h*d*g-n*n+a)%100;
                  e -= (e+d-c-c+n)%100;
                  c += (a+k+a-k+m-l-n+d+l-b-m-n)%100;
               }
               do
               {
                  e -= (f*n)%100;
                  h -= (h*g-c-d*i*h*g+j*a-k)%100;
                  i -= (b*h+n)%100;
               } while( ++DOcnt[28]%5 );
               if( ++IFcnt[20]%10 )
               {
                  h += (l*l*c*a*c)%100;
                  j -= (d-d-i)%100;
                  i += (f+m+k-d-f)%100;
                  f += (a-j*a*a)%100;
                  i  = (i*d)%100;
               }
            } while( ++DOcnt[27]%5 );
            g += (l+m-k+h)%100;
            for( ; ++FORcnt[43]%5 ; )
            {
               
               switch( ++SWcnt[14]%3 )
               {

               case 1:
               {
                  j -= (n-g-n-h-d-c-h+j-h+n)%100;
                  n += (d-a-d)%100;
                  k -= (e+j)%100;
                  m += (k+j-k+d-m)%100;
                  f -= (b+f-d-h)%100;
                  g  = (e+f+i+c*l+c+h*i*i)%100;
               }
               break;

               case 2:
               {
                  c += (i+m+k+g+a-j-h+m+e)%100;
                  h -= (d-i*n*i*g*l+a+g-d*h)%100;
                  k += (i*g*l+d+f+f-h-a-j*b+g*h-c-g)%100;
                  l += (m-e-f)%100;
                  m += (b+n)%100;
               }
               break;

               default:
               {
                  m -= (i+e-g+j+f+k+n+h*h)%100;
               }
               }

               a -= (d*l-l-m*m-k-a-a*i-f-b-a)%100;
               e += (k+g-d*g-e*i-i-e-d-n)%100;
               k += (m-c-g*k*b*h)%100;
            }
            g += (m+d-j*g+e-k-h*b+g*c-k+i)%100;
         }
         d -= (h+b*h+h+i*m*k+j-m-f-j+j)%100;
         k -= (j+l-k-l+g-h+a-n-m-h+j*l-l-n)%100;
         b += (e+m+n*h+j*f-c-b*a-m-f+h-c+b)%100;
         i += (e-n*l-e-c-e+m*m+h)%100;
      }
      a += (m*n)%100;
      m -= (f*a+k)%100;
   }
   g += (g*g*m+h+n)%100;
   j -= (i-n+k+a*i-i+k-m+j*l-k)%100;
   h  = (d+f-j-n+e-m+f-a-l*m+k+f-g)%100;
   a -= (l+f-i+f+m+j+g)%100;
   n += (m-h+l-a)%100;
   l += (i+e+b-b+f-l-g*h+n)%100;
   c  = (e-h-f+a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[30]%2 )
   {
      j += (n+f+b-l+k-a*g+k)%100;
      i  = (k+l)%100;
      l -= (l*d-f+f*b-j*b)%100;
      a += (k+e+c*d-d+c+j-g+g*i-n)%100;
      l += (b*e+g-j-g+n*k)%100;
      d += (i*e-f+i+j)%100;
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
                  h  = (g-e*n-c-e+l+j*a+j-f)%100;
                  k += (g-e*k-d-d*i-i+g+n*g-d+n*n-h)%100;
                  f  = (d-i+f+h-d-l+l+f-f)%100;
               }
               for( ; ++FORcnt[44]%5 ; )
               {
                  i -= (i+m)%100;
                  n -= (g-e+i+j*n*l+k+n)%100;
                  k -= (h+m+l+n+g+m+d-e*k*l-a+c+d+b)%100;
                  e += (b+n+l)%100;
                  m += (j+l-g+e-i-g-m-i-l-a)%100;
               }
               if( ++IFEcnt[29]%2 )
               {
                  j -= (h*n*j*e-e-f)%100;
                  c -= (m+l)%100;
                  i  = (k*a-i*n*c+g-n-i-i)%100;
                  a -= (g-e-g)%100;
                  i -= (h*i*d-h-n-l+e+e+g+b-f)%100;
                  h -= (a*i-b-b+c*k*n*g-g-j*j)%100;
               }
               else
               {
                  h -= (j+d*d*e+d+j*j)%100;
                  e -= (d-h)%100;
                  f -= (e-k-k-f+n-j-n-n+h)%100;
                  b += (c-n)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  l += (c-k-e*b+d-b-g+e+g+f-m-g-g-b)%100;
                  b += (a+l+a+n)%100;
                  k -= (n-i-a+n-c)%100;
                  c += (d+f)%100;
                  k -= (f-m+n+b+e-j-k-l-h+d-g)%100;
               }
               do
               {
                  n += (c+j-l*j-a+h*f-j-j)%100;
                  l  = (c+g)%100;
                  g  = (i-n)%100;
                  k += (d-h-d+k-e*l-i+b+k)%100;
                  h += (f-i+l)%100;
               } while( ++DOcnt[30]%5 );
            }
            h -= (h+j+b-e+e+a+f-h)%100;
            for( ; ++FORcnt[46]%5 ; )
            {
               
               switch( ++SWcnt[15]%4 )
               {

               case 1:
               {
                  m += (e+i-i-e+k+g-j+d+h)%100;
                  c += (k*m-e-j*h-l-m*a-m-l+m-i+d)%100;
                  a += (e+n)%100;
                  h -= (d-e)%100;
                  m += (h+n-b*i+c+d+k*h)%100;
                  b -= (h+b+c+d*a*f+b)%100;
               }
               break;

               case 2:
               {
                  h -= (c-b+e+d-l-m*e-g)%100;
                  c -= (c-h)%100;
                  k -= (d*j+d-n-e*n)%100;
                  h += (e+l-h)%100;
                  f += (j+j*k-h*i+e-n-e-e-l+g-c-h*j)%100;
               }
               break;

               case 3:
               {
                  i += (b*h+d-f-h+n+b-g+c+m+n+d+b)%100;
                  k += (i*k*b+n-n-n-h)%100;
                  d += (k+c-j-m-n*j*a+g+j+d-g-f+b)%100;
               }
               break;

               default:
               {
                  c  = (g+b-i+k)%100;
                  b += (h-k+j*b+a+g*b+j+f)%100;
                  e -= (j*j*j+e+f-c+c-m+a*d)%100;
                  f  = (m+i-k+c+a*g+d)%100;
                  g -= (d+e-c*i+h+h-l)%100;
               }
               }

               if( ++IFcnt[23]%10 )
               {
                  e += (i-k-l-e+m-c-a)%100;
                  e -= (l-m)%100;
                  a -= (g*e-d+a-e*j-k+f+b-h*d+g-c)%100;
                  k -= (g-h-l-m-e+a-m+c+a-i-d+a)%100;
               }
               k += (j-m)%100;
               n -= (b+l-n)%100;
            }
            j  = (g+c)%100;
            g -= (n*g*h*f)%100;
            e -= (m-i+b-b+g*h+l)%100;
         } while( ++DOcnt[29]%5 );
         a -= (b+l-i-n-n-c+g-a)%100;
         c += (j+n*a-g-d*e-h-k-j+j)%100;
         i += (l-k+m+h+b+n)%100;
      }
      n -= (a-e*e+j*c+m-m-l-n-f-a-c+j)%100;
      f += (h+b*k-i-c-b-c)%100;
      f -= (g-h+e+n*h-n+i+n-m*c+k+n-n)%100;
      h -= (e-a-d+b-d-f)%100;
   }
   d += (e+h+e*m*l-j+a-h+a*h*i)%100;
   h += (b-b+i+g*m-g+c+g-e-n)%100;
   c += (i*e)%100;
   m -= (e+j*b+f+e*b+m-b-n*n*b+d+l)%100;
   n -= (j-k)%100;
   g += (i*a)%100;
   e += (g+i+j-c+f-d-h*k*f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F15(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[33]%2 )
   {
      g -= (e*b*j-a*h+h+d*g+n+g+h-f)%100;
      a += (e*n-l*f)%100;
      j -= (d+f-d+l-g*k)%100;
      j += (m*g)%100;
      d -= (f+e+m-m+h)%100;
   }
   else
   {
      while( ++WHILEcnt[32]%5 )
      {
         do
         {
            for( ; ++FORcnt[48]%5 ; )
            {
               for( ; ++FORcnt[47]%5 ; )
               {
                  g += (j*l-f+e*e-f+i+l-n-m)%100;
                  n += (h-j-k+g+f+b-m-d)%100;
                  n  = (i-n-k*d-f*l)%100;
                  e -= (d-d+l+h+l)%100;
               }
               if( ++IFEcnt[31]%2 )
               {
                  c -= (n-l+h-h-b-b*i+f+c)%100;
                  i += (k-n+f+l+i+c)%100;
                  c += (e+g-g*k-b+n+i)%100;
                  k -= (a+g+a+j-g)%100;
                  f -= (n*n+f+b*h+l)%100;
               }
               else
               {
                  n -= (d+f-a-f-i-c+k*i-m-d+j-c)%100;
                  b -= (e*l)%100;
                  d += (m+e-b-i+c*m*j-n*j-g*e)%100;
                  j += (f+c+m*b)%100;
                  d -= (h+c*c*m-k-g)%100;
                  i += (c-j)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  i -= (e-g-g)%100;
                  d += (a-m-a*i*c+f*g*m-d*i)%100;
                  i -= (a-j+g*m+j)%100;
               }
               do
               {
                  c += (h-m+k)%100;
                  f -= (b-j*i+d-a-c*g+e)%100;
                  a -= (d-a-a+i-m+f-g*h+a-d-b+k+m)%100;
                  g += (l*m+k-b-c-c-a*l-l+j+m)%100;
                  m -= (f*c+a+i-e-m*j+e*c+l)%100;
               } while( ++DOcnt[32]%5 );
               if( ++IFcnt[24]%10 )
               {
                  d += (b+l-j-c)%100;
                  d += (e*m+b-n+a*g*a+k-h*b*g-k-a-l)%100;
                  l -= (b+j)%100;
                  l -= (j-e-n+e+k)%100;
               }
            }
            g += (g*m)%100;
         } while( ++DOcnt[31]%5 );
      }
      for( ; ++FORcnt[50]%5 ; )
      {
         
         switch( ++SWcnt[16]%3 )
         {

         case 1:
         {
            if( ++IFEcnt[32]%2 )
            {
               l += (m-g*k-g-g-n+a-d+c-m-m)%100;
               m += (j*g+l+f+m*m-d+l+i+e+d)%100;
               a += (c+e)%100;
               g += (c+g+a+d+k+k+e-m-j*c-h+i+f*m)%100;
               m += (j-m-m*g*b-n+n+i*g+d-a*h*l+n)%100;
            }
            else
            {
               while( ++WHILEcnt[33]%5 )
               {
                  n += (c-d-d+m)%100;
                  b += (m+m-f-e*i*m-h)%100;
                  j -= (g-e)%100;
                  d -= (n-b*e-i-n-f)%100;
               }
               do
               {
                  g -= (m*j-k-m*i*k-h-h+l*l+c)%100;
                  g += (c+e+j*g-l-a-f+b+c)%100;
                  l -= (c-l*c+c-n+i+d-k*c-n)%100;
                  l += (j+j+k+m-f-l)%100;
                  l += (e+g-d-c+h-c+f-b)%100;
                  c -= (g+f+k-j*g*e-a)%100;
               } while( ++DOcnt[33]%5 );
               for( ; ++FORcnt[49]%5 ; )
               {
                  n += (g*a)%100;
                  n  = (f*g)%100;
                  d  = (g*f+b+f-k*n-i*a*h-b+a-g)%100;
                  d  = (a+d+g+a-f-c+d-b+b-l-b)%100;
                  l += (h+i*f+c*e)%100;
               }
               if( ++IFcnt[25]%10 )
               {
                  a -= (f-e-a+a-n+g-b)%100;
                  j -= (k*d+g-c*c*i*f-c*i)%100;
                  g += (f-h*g-a-k*j+j+i+h+m*g+l-a*g)%100;
               }
               m -= (n+c-l+n)%100;
            }
            c += (e+b+n-b+i)%100;
            n += (c+d+a-m+l-m)%100;
            b -= (e+g-k)%100;
            b -= (m+g+f)%100;
         }
         break;

         case 2:
         {
            m -= (d+e+h-c*a-a+h-k+n-h*k-j)%100;
            i += (j+f+e+c*b*n+i-g+m-d+k+d-k)%100;
            a -= (d*l)%100;
            e -= (i*f+g-k+b+c-e*n-e*j)%100;
         }
         break;

         default:
         {
            a -= (n+k-f-e+l)%100;
            g  = (l+m-b+j+f-d-k+a)%100;
            f += (b-k+c-c+n+m-n*i*d+m+h+e+d*e)%100;
            g += (a+a+h-h)%100;
            l += (m-l-f+b-n*g+j-l+h-n-j-a)%100;
            j += (n+c-h+b-a*b+f+l-e-b)%100;
         }
         }

         k += (b-a+b+f)%100;
         m += (i-k+f+e)%100;
         e += (k+i*j-d-h-e*e-i*f+i-l-c+e-k)%100;
         k  = (a-m-k-f)%100;
         d -= (c-m+m-d-l-n*c-b)%100;
      }
      b += (j-n+h+b-n-j+g+f+i+k)%100;
      h -= (b+n*c+l*c-l+g+d+m+l+d*a+h*g)%100;
      g -= (n+d*f*l-j*d-g)%100;
   }
   i += (e-a-b+g-a)%100;
   h += (e-d*n-i-b-j-g+g+b*c+g+j*b)%100;
   n += (f+a-l*i-j*e*d-m-f-h+l)%100;
   b -= (b-k+b-k-m-j+e*l+n)%100;
   b += (n-b-h-n-k*m-m-l+d-j)%100;
   g += (e+h+b)%100;
   c -= (e-g+c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F16(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[53]%5 ; )
   {
      if( ++IFEcnt[35]%2 )
      {
         k += (n-c-m)%100;
         e -= (j-i+g-i+h+m-c+i-e+a+k)%100;
         j += (g+d+h+d+m-k*b-c+c+f+i-i-b)%100;
         g -= (a-d+k*e+c)%100;
         h -= (g+e-b*k)%100;
      }
      else
      {
         while( ++WHILEcnt[35]%5 )
         {
            do
            {
               b += (f+m+b-g*f-n+k-k+m*g-d-i)%100;
               for( ; ++FORcnt[51]%5 ; )
               {
                  b -= (e*c*n+b-g+k*h*h)%100;
                  a += (h-a+h+h+b+l)%100;
                  b += (m-g-l-e-n*f-c)%100;
                  j -= (c+c+k*k)%100;
                  m += (i*b-e+e+g-b+j*f-m*j-b-f-d-h)%100;
                  c  = (l-c+a+l-i*f-e*k+n-f*c-j)%100;
               }
               
               switch( ++SWcnt[17]%3 )
               {

               case 1:
               {
                  e += (f+c)%100;
                  i -= (b-a)%100;
                  j += (e+k+k)%100;
                  m  = (l-i-n-k*h+g*f-c-i+n-a)%100;
                  e += (m+l)%100;
               }
               break;

               case 2:
               {
                  b -= (j*f*g+c)%100;
                  l -= (h*f*f+k+c)%100;
                  h += (g-k-d+f*h-g)%100;
               }
               break;

               default:
               {
                  b += (n-d+g+k+d-b)%100;
                  b  = (k-n+g+i*g*g-n+h+e+f)%100;
                  f  = (f*h-e+m)%100;
                  b -= (h+f+m-d*d+d*b-e)%100;
                  i -= (n-n*h+g*a+l)%100;
               }
               }

               if( ++IFcnt[26]%10 )
               {
                  g += (g-m-h-n*e+d+h-h-e)%100;
                  g -= (h+f)%100;
                  k += (d+f+c)%100;
                  n  = (f+f*g)%100;
               }
            } while( ++DOcnt[34]%5 );
            if( ++IFEcnt[34]%2 )
            {
               j += (n-a*n-m-m*i+h*n*f+i-g-l)%100;
               l += (e-e-d+i-f)%100;
               h += (f+d+n+i+d+k*m-g)%100;
               m -= (d-g-d-a+a*f+f+h+l+f+g)%100;
               c += (b*i*j+k+i-n*d*e-c*h+l)%100;
               c += (c*h+i-i-i+c-c-m-a-b-g+c-g)%100;
            }
            else
            {
               while( ++WHILEcnt[34]%5 )
               {
                  i -= (c-i-l-l+b+j+e-j)%100;
                  a  = (k+i-l-f+i-m-a-d-a)%100;
                  b += (e-a-k+m+c*e*c-b+n+i+b)%100;
                  m -= (h-g)%100;
                  n  = (k+b*h-h+e+m*m*l+m-f*e-h-m+d)%100;
               }
               do
               {
                  c += (a*f)%100;
                  m -= (j+f*j-j-g+n-f+c-a+d*b-f+e*l)%100;
                  b -= (l+l-l+d)%100;
                  l += (g+b+f*d-d+a*h-e-f)%100;
                  i += (b-d+c+g*n+e+j*a-c*e)%100;
               } while( ++DOcnt[35]%5 );
               for( ; ++FORcnt[52]%5 ; )
               {
                  c += (g-h-f)%100;
                  j -= (l-c+b-j-c*h-i-m-j*e-j)%100;
                  m += (b+l+g)%100;
                  f -= (f*g)%100;
               }
               b -= (g-m)%100;
               h -= (f+k*m)%100;
               m += (e-b+b*j+k+l)%100;
            }
            i += (c+n*h-j+j*d-j+i+m-l-e*g+e-h)%100;
            a -= (g*j-b+a-c*k-b)%100;
            d += (c*f*b+b+l-m*n+l+l-h-d)%100;
         }
         n -= (e+c-i*a+j+j-f-h*j-c+j+c-i-l)%100;
      }
   }
   k += (i-g-c-l*h-l-h+e+l+f*m+e)%100;
   e -= (f-m-g*l+n+g+e+i-k*k-l*i+c)%100;
   j += (d-h)%100;
   l += (d-f*m+e-n*a+b+m-e-h-j)%100;
   c += (g*j*a-b+f-g*b*d+d-d*g)%100;
   m -= (m+b+a*a+f-a+j+e-g+k+n-m-g+n)%100;
   a += (a+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F17(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[57]%5 ; )
   {
      if( ++IFEcnt[37]%2 )
      {
         d += (d-l-i-d+l)%100;
         a -= (j*k+c+c-i-e+n+g-c+b)%100;
         l += (e+l*i*h*a+a+d*m)%100;
         l += (d-j+c+d-n-b+a-a-a)%100;
         i += (d-c*e-g+i*l-f)%100;
      }
      else
      {
         while( ++WHILEcnt[37]%5 )
         {
            do
            {
               if( ++IFcnt[27]%10 )
               {
                  h -= (l*k-k)%100;
                  i  = (n*c+d-l+d*c*j)%100;
                  c += (f*i+l)%100;
                  i += (a+j)%100;
                  l -= (j-e)%100;
               }
               c += (i+h+j+m+m-b+g+g*d-d+f*g*n+l)%100;
               for( ; ++FORcnt[54]%5 ; )
               {
                  a -= (l+j-i+a+j-l+i-e+h*c)%100;
               }
               
               switch( ++SWcnt[18]%3 )
               {

               case 1:
               {
                  l += (l+g-m+j-c*a*b-m+h)%100;
                  f -= (g-g-i+c*m-h*f-f*d+a+f+m+j-m)%100;
               }
               break;

               case 2:
               {
                  k -= (a+c+i)%100;
                  k += (m-n+i+f*e+c+a+n+c+i+e*k-g-h)%100;
                  a -= (e*a+b+b-l)%100;
                  h += (b+l*a+d+l+f*n+n)%100;
                  i += (i+f-m-e-g-j+n-i+a-i-b*d-c)%100;
               }
               break;

               default:
               {
                  e -= (m*i+b*e+d+a-e-n)%100;
                  l += (g-e-e-g-h-i-n*c-g+b+c-k)%100;
                  f += (c*j)%100;
                  n -= (f*a)%100;
               }
               }

               if( ++IFEcnt[36]%2 )
               {
                  b -= (f+a-k+n+g*n-k-j-n-k+e)%100;
                  c -= (f-n)%100;
                  j += (l-h-f*m-d+i+d)%100;
                  d -= (a+f*k)%100;
                  a += (c-l+c*c-a+i+a-c*f-k+m-c-d)%100;
               }
               else
               {
                  c -= (g+k+g+f-b+l*d+g-l+a-d-d)%100;
                  a += (k+b+f+l-k-g-b-g)%100;
                  i += (e+i*e-d*f-a-b+k)%100;
                  b += (j-l-e-h+k+a+m*e*j-h-f+c)%100;
                  d += (b-i)%100;
                  i += (c+g-n*d-d+m-k+n-h+d-h*g-f)%100;
               }
               while( ++WHILEcnt[36]%5 )
               {
                  m -= (b-g)%100;
                  f -= (i-f-a-c)%100;
                  l += (d*c-l)%100;
               }
            } while( ++DOcnt[36]%5 );
            do
            {
               for( ; ++FORcnt[55]%5 ; )
               {
                  b += (h+h-l*j-g-n+e+g*c+c+e*b-c)%100;
                  m -= (i+h-f-b+g+c+a*d+l+l+a+i+l+h)%100;
                  i += (k*j+d+k+a+i+g-a+l+j+j)%100;
                  c -= (h-f-b-n-c-c-l*g*b*d-g)%100;
               }
               if( ++IFcnt[28]%10 )
               {
                  e += (c*e*h-i+n-l)%100;
                  b += (f*e+i-i+b)%100;
                  c += (l-i)%100;
                  h -= (d*l+m+b-c)%100;
                  l += (b-k+g-d*g-k+h*d-e*g-b+a-i*c)%100;
                  m -= (e+c-b+h+k-g-m+b-f*a-l+e+f-c)%100;
               }
               for( ; ++FORcnt[56]%5 ; )
               {
                  e -= (m+f*e+c)%100;
                  b -= (j-c-l*n+k)%100;
                  i -= (i+j*h-i*h+m-e*b+e-c)%100;
                  c += (l+m-m-m+a-i-l+d+e)%100;
                  f += (m*g-j-b-a-n+d*l+c+i-k)%100;
               }
               m += (m-b+g)%100;
               i += (a-m*k-i-j-f*l+b+a*k*f+k+g)%100;
            } while( ++DOcnt[37]%5 );
            h -= (c*m-d*c)%100;
            f -= (g+l-b-a+h+l+h+k-f+d+c-d-g*c)%100;
         }
         e += (a*f-a+l+j+e-b-g+g-h*n*g)%100;
         a += (c-f*l+f-a-c-d-d-a-d+m-f*k)%100;
         a += (l*n-i)%100;
         k += (n+g)%100;
      }
      j -= (a-g+g*l*m+d+d*j+f-f+d)%100;
      m -= (b-m-e-b*b+b*c+j-d-a*b-f)%100;
   }
   l += (n*e+g+h+g-m-n+j*k+d+j)%100;
   a  = (d-m)%100;
   c += (h*j-a-k-m*g-h-n-b-m*h)%100;
   i -= (k+i-f-i*g-j*k+e-b*h)%100;
   k  = (j-i+f-m*f*g*f*b+f)%100;
   a -= (n-j)%100;
   e += (b-f-a+c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<43; I++) IFcnt[I]   =0;
   for(I=0; I<57; I++) IFEcnt[I]  =0;
   for(I=0; I<28; I++) SWcnt[I]   =0;
   for(I=0; I<57; I++) WHILEcnt[I]=0;
   for(I=0; I<57; I++) DOcnt[I]   =0;
   for(I=0; I<86; I++) FORcnt[I]  =0;
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

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      if( ++IFEcnt[38]%2 )
      {
         f -= (e-m+h)%100;
         h += (m+d*g*n)%100;
         a += (d*b+d*b-j*j+d+e+e-i+g+a+l-m)%100;
         b += (h-b+n)%100;
         j += (b+k-c*j-m*h)%100;
      }
      else
      {
         while( ++WHILEcnt[38]%5 )
         {
            do
            {
               k -= (g-g-k*d-e+i)%100;
               for( ; ++FORcnt[58]%5 ; )
               {
                  n -= (d*b-e+i-k-i+c-l+e-f)%100;
                  a += (n*h+m+e-a-m-k)%100;
                  a -= (m+i*g-a+d+l+a-g-e+i)%100;
               }
               
               switch( ++SWcnt[19]%3 )
               {

               case 1:
               {
                  e += (a*j-d)%100;
                  n -= (h-g+l+i+l-l+c)%100;
                  i += (c+i-n*g-j+h*a+h+k+k+n+c+j)%100;
                  a += (i-e)%100;
                  j += (c+n-e+h*c)%100;
               }
               break;

               case 2:
               {
                  i += (l+j-a+c+j-g*a-e*c)%100;
                  f += (a-m+b-d+h*a)%100;
                  c += (e+g)%100;
                  b -= (g+b-k*i-c-b+l+d+e+d)%100;
               }
               break;

               default:
               {
                  a += (l+k-c+b-h-a+m-a-e)%100;
                  m -= (i+f*m+h*h+e+g-n)%100;
                  e -= (b+a)%100;
                  n += (f*f+b+h+a+d-n)%100;
                  j -= (l-l)%100;
                  n  = (g-d-n+j-c+a+g-n-f-n-b-d-d-d)%100;
               }
               }

               m -= (f-d)%100;
               m -= (k+f+l+a+a+j+j-c+n*l)%100;
            } while( ++DOcnt[38]%5 );
            n += (n*l-j+k-c+i-h-f-d+m)%100;
            m -= (g-e-g-d*g*n+a)%100;
            c += (j-m)%100;
            h += (k+i+b-m)%100;
            f += (e+e+g-a-n+a-m+e-d-k-m+f+c+h)%100;
         }
         i += (b+e+l+b*e+m+k-d*j)%100;
         n += (c-n)%100;
         l -= (a+a)%100;
      }
      c  = (i+n-k+k+n+k)%100;
      c -= (f*k*g)%100;
      n -= (f*g+e-c+h+b-l)%100;
      i -= (g+m+c-l*n)%100;
      e += (h-n)%100;
      e -= (n+l*l+i*c*h+g*b-h*c-n+d*b-h)%100;
      n -= (a-h-i-c+g+h+j-d+f-l*k+n+n)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<29; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 29 << "   Dynamic = " << sum ;
   for(I=sum=0; I<39; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 39 << "   Dynamic = " << sum ;
   for(I=sum=0; I<20; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 20 << "   Dynamic = " << sum ;
   for(I=sum=0; I<39; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 39 << "   Dynamic = " << sum ;
   for(I=sum=0; I<39; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 39 << "   Dynamic = " << sum ;
   for(I=sum=0; I<59; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 59 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}