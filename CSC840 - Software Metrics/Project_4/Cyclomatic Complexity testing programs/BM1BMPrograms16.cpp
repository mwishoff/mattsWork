#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[76],IFEcnt[102],SWcnt[51],WHILEcnt[102],DOcnt[102],FORcnt[153];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         a -= (e-n)%100;
         a -= (l-j-a+l-i)%100;
         k -= (f-a-g+h)%100;
         n -= (c+m-e+a-c-e*m+b+h-g*m-f+a*l)%100;
         l -= (b*b)%100;
         a += (j+j+b-a+n-l+j-l+a*a-a-a+d)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  i -= (f-f+m*d+e-e+g-a-m+j-a+a-c)%100;
                  n += (i-g+h*l-m-j+a*k-j)%100;
                  f -= (j-l-d-h-n+i+e+l-j+h*i*m*e)%100;
               }
               i  = (j-f+j+c)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  d -= (n-j)%100;
                  k -= (l-b+i*f*j+l-h+d+e-a)%100;
                  c += (i*n+d-f-a*d-n+m)%100;
                  f += (n-f+f+g-m+d*l*i)%100;
                  f  = (b-j-k-k-g*l+c-h+j-f*a+a)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  f += (a-a-n+i)%100;
                  n  = (k+k*e-a-l)%100;
                  c -= (n-n-c+c-f+b-n-b*j+c-g+k+c-h)%100;
                  k -= (k*e-i+i+a-i*i+j)%100;
               }
               break;

               case 2:
               {
                  h  = (e-l*k-l+i*h+b-g+c+f+d+h*b)%100;
                  c  = (l-c+f*l+a-g*i*j-f)%100;
                  m += (m+e-i*m+e+n+b-j-c+i+g)%100;
                  d += (l+g+j-n-m*l-f)%100;
                  e += (i-d*h+m+b-n)%100;
                  l  = (j+m*d-d*d*m+b+g+d)%100;
               }
               break;

               default:
               {
                  k += (e-l*g+m+k-k*n-n-d+j+d)%100;
                  e  = (b+j+m-e-a-n-g-b-j)%100;
                  i += (b+g+i+d*b*j-l)%100;
                  d  = (e+l+i+f*c-a-f-d-l+i+h)%100;
                  j -= (b-j*d-l+i-g-a*h-n*d)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  g -= (n+e-i+i-k-j+h-g+a)%100;
                  l -= (b-i*m-m)%100;
               }
               else
               {
                  j += (e+c+f+h-c+i+k*n*d-g+m*b+d*c)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  i += (i*b+a-d*k)%100;
                  n -= (k*h-a+h*m*n+m*d+j-n+e+k-c)%100;
                  n += (i-h+a-h-i)%100;
                  l  = (h-d+f-g-j+i-c-c-d+f+a+h-h*h)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  e += (d*e+k+d-m+h*l*m*h+a+n+n*a+l)%100;
                  a += (a*d+g-n+l*n+d+k)%100;
                  n -= (c-j)%100;
                  e += (n+c)%100;
                  m += (f*b-b-l+e+k+a-e-c-l+l-g)%100;
                  k -= (j*m+k-l+b+m*g*d-d)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  a += (e+b-d)%100;
                  c -= (h+j+h+n+n*d)%100;
                  k += (a-l+n+a+c-d-i*l+c+h-c)%100;
                  g += (e-d)%100;
                  d += (a+i-n+g)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  c += (d-d*i)%100;
                  k += (l-d+f-b+d-b-a-g-a+e)%100;
                  j += (b-f)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  g += (k-d)%100;
                  h += (d-a)%100;
                  a -= (b*e+b+f+h+a*d*j-i-k)%100;
                  j += (i-n-i*d+a-h*f+e)%100;
               }
               else
               {
                  b += (l-k+k+a-l-n+m-g-g*g-a)%100;
                  i -= (l+l*m)%100;
                  m += (a-a+c-j+m+h+n+m*d-a)%100;
                  b += (i*a-i+g+h-n*l+c+g-j+l+j+m*e)%100;
                  j += (m-g+e-b-f+k+d-l-e+j-j+g-l-b)%100;
               }
            }
            e -= (h*c-a-e-f*n+k)%100;
            n += (b+e+i+f-e*k)%100;
            e += (f-n+l-a*n-i+c*m-d-g-c+m-h-m)%100;
            c  = (c+k+f*h-k)%100;
         }
         g -= (i*i*b-b+k-g-g*a+d*e*a)%100;
         j  = (i+l)%100;
         n -= (a+j-d*g-i+g-f)%100;
      }
      c += (n+l)%100;
      n -= (b+n-j*j-g+f-d+a*c+l+h)%100;
      g -= (c+c-h-m+i+b+g+j*c-d-i)%100;
      h += (g+h*k+g*h-n-d-b)%100;
   }
   k -= (m+d-g+g-c-a+l*h+e)%100;
   j -= (b+j)%100;
   k -= (c-a+e*i)%100;
   m -= (f*i+m*d+b-i*b+g+l)%100;
   a  = (e-i*i-l)%100;
   l -= (l+m-f-l*i)%100;
   m -= (j-f)%100;
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
         m -= (j*f+i*k*n+h-l*k-c*j)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%3 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  j += (c-c)%100;
                  d += (k+g*m*i+k-l-j*d+a-h+d+a)%100;
                  f -= (f+j+f*b)%100;
                  c  = (f+c+h+k*d)%100;
                  d += (m*e)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  d -= (b-b+e+e+e+g-l*k-h+e)%100;
                  g -= (l+c+g+f+h)%100;
                  n  = (c*b*k*i+e-l-a)%100;
                  k -= (h+i+f+d+e)%100;
                  f += (j-a*a-n-l+h-k-n-g-f+d-b-k+k)%100;
               }
               else
               {
                  e += (e*d-h-m*c*h+i)%100;
                  f += (h+j-b)%100;
                  m += (l*a+d*i-d+m)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  e += (j-i+e+a*j-k+d-j+j+e-m-d-m+d)%100;
                  c += (b-l*e*m+m+g+d+b-h+f-b-h+j)%100;
                  e -= (f*f-f-m*j-c-a-k)%100;
                  e += (g-k-l*b*j+d-n-b-e-a-c-n+d)%100;
               }
               do
               {
                  f -= (l-m*i+d+m)%100;
                  j -= (h-f*e+b-m-c*c)%100;
                  j -= (i-e)%100;
                  k -= (g*m)%100;
                  a -= (c-k+l)%100;
                  f -= (m-j-e-d+b-e-k-m)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  n -= (e*e+c-c+i*l*h-e+j-a-c+a)%100;
                  b += (d+k)%100;
                  i += (c-f+g+f-d+l+l*b+h-e+i-g*b)%100;
                  a  = (b+i-i-d+i*i+j+f+e-a-i-c-b+f)%100;
                  j += (a-i-d)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  f += (h+d+c-h-n-n+b*c*m+b*a-c*m-i)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  c -= (b+i*h*h)%100;
                  i += (i+b-k+l-e-f+a-d-e-l-c)%100;
                  n += (g-m)%100;
                  b  = (j+j*c-g*f+f+n-n+k+d+j+c)%100;
               }
               else
               {
                  j += (a-m*b+j-f)%100;
                  b -= (c-l+j-d+d)%100;
                  m += (h-g-b+k-n)%100;
                  d += (k+d+e+i+h-f+b-l+d-f-m-a+k*n)%100;
                  n += (a+e-h-d)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  d += (e-g+i+m-m-c)%100;
                  g += (l*k-e-a-e+f*b+g-i*k-h-f-l)%100;
                  f -= (d-h+i-h*l)%100;
                  l += (b+a-m)%100;
                  e -= (k+e)%100;
                  j -= (b-d*f+m-i+d-j+m)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  g += (a+a)%100;
                  n -= (b-a+g+m+k-f-m+m+a-m)%100;
                  e += (a+i+f+c+b*c-a+l+a*j-n*l+i-n)%100;
               } while( ++DOcnt[4]%5 );
               j -= (m*d+g+d*i-f*k+c-b+d-j+f-n)%100;
               e -= (b+l-h*h+c*e+m+h)%100;
               d  = (i-b+e-j+l-j-m*l+e+h-g+b-g)%100;
               k  = (m-n*i*f+j-k+k+c-n+c+g)%100;
            }
            }

            a -= (k-c)%100;
            d  = (c-g-h-g-e-n+c*e-j-j*i+k)%100;
            a -= (f-j-m*j-f*a)%100;
         }
         i += (j-i-l*a+b-h+d-c+f)%100;
         m -= (b+d*b+a+f-l+m+f-j+l*m+n+d-i)%100;
         j -= (k+a-m*e-k+b-k+b-k-h*f)%100;
      } while( ++DOcnt[2]%5 );
      c -= (g-n+e-h-e-j-k+n)%100;
      e -= (f-i-l+a+j-i+l+j-b*l)%100;
      d += (b*b+b+b)%100;
      f -= (i+b-d-k*l*j)%100;
   }
   e += (h-k+e+i-k+l+e+n+m+i+k*i*n-a)%100;
   l -= (d+n)%100;
   n += (i+e+n+l-d+j-c)%100;
   l += (i-a+j-a-f-m-b-b-i-b*l-e)%100;
   k += (c+l+l-n-k-k+d+e-j-f)%100;
   h -= (i+e-i+d+e*b+f-j-b-b*a)%100;
   i -= (h+a*i+j-k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[5]%10 )
   {
      m += (f*f-e*m+c-j-c)%100;
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
                  b  = (l*g+i-b+m+n-d*f*c)%100;
                  f += (d+m*e)%100;
                  a -= (g+k)%100;
                  h -= (n+e)%100;
                  g  = (c*n+m-n-c-h*e+n-g*k*f)%100;
                  i += (l+m+e-l-b-e+n)%100;
               }
               else
               {
                  c += (h+i-c+d-d-d-i)%100;
                  f -= (e+a)%100;
                  b += (b-c*h*j)%100;
                  e -= (g-e-d+a-a-a-b+e+i-f-c+m-a-m)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  m += (h+i+b-m)%100;
                  f += (k-e-g-a-i)%100;
                  f -= (h-h)%100;
                  n -= (d-a)%100;
                  k -= (f-a+b+k+b*b+m-i)%100;
               }
               do
               {
                  l += (i+g-a-j*b+g*c-g*f*m+g+k-k+d)%100;
               } while( ++DOcnt[6]%5 );
               j -= (h+n-n+k*i-d)%100;
               for( ; ++FORcnt[9]%5 ; )
               {
                  e -= (a*e-n*f-c-l-a+g*k-b+d)%100;
                  e += (k+c-m+l+g-h+g*n+j+c*e+j*i+b)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  f += (e-k+i+k+g*m+k-h-j-l-g+l+a)%100;
                  h  = (c+i-i+a+c-l*n-g+g-f)%100;
                  e += (i+d+b+c-m*i)%100;
                  j += (g*f)%100;
                  h -= (c+h+a-c+b-b*f*g-m*e-m-c*n-a)%100;
               }
               do
               {
                  b -= (b*f-j+l-j+f+e-h)%100;
                  j += (n+i-h-c+f+d+l-b)%100;
                  h += (g-h+h-e+a+m-e+n-m)%100;
                  d -= (f*j+a*g+b*g*i-m-i*f+m+n)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  j -= (l+f+a-l*k)%100;
                  e -= (a-g+j+b-a+g*a-h*n-m+j-i)%100;
                  n -= (c-e-m+i-j+f+c+h-d+n+e-g+h)%100;
                  m += (a-a)%100;
                  k -= (b-d-g+f+l-f-a+k+f*d-e-d-a)%100;
                  h += (j-m*g-l-m-i-h*g)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  e += (d+j)%100;
                  h += (e+f+h+f+m)%100;
                  a += (d-h+l+b-a-b-j)%100;
                  d  = (m+e-g*h-j-k-g-f)%100;
                  d -= (n-d-c*j-d-g+b*b-c-g)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  j += (n-e-m+e+m-m)%100;
                  d -= (l-l+a+n*m-i-b+n-j)%100;
                  g += (l+j*j+b+l-m)%100;
               }
            }
            
            switch( ++SWcnt[3]%4 )
            {

            case 1:
            {
               if( ++IFcnt[4]%10 )
               {
                  b += (n+b+g-h+n-c-g*h)%100;
                  a -= (a-h-c-m+d-b*g-l+n+m+g)%100;
                  j += (f+l*c+m+g+j+n-j-g*e-h-m+l+n)%100;
                  a  = (f-l+j-i-i)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  e += (g+d-a+b+n*g-b-i*e)%100;
                  j += (m+j*g*c-b*m+i-a-a+c*e+e-h+b)%100;
                  e  = (i+d+h*c-f)%100;
                  e += (f-n-g-l-i*f+d-f+h-b)%100;
                  m += (m+c-m+g+c*f+f+j)%100;
               }
               else
               {
                  c -= (e-c)%100;
                  j -= (b+d-n)%100;
                  k -= (k-l-c-m*m-k*h*k+g*b+a)%100;
                  n -= (d+h-k*h*g-j+i*i-a)%100;
                  l  = (b*h+k+l*c+j+h)%100;
                  m -= (k+h*m+b)%100;
               }
               n -= (b+n)%100;
               e  = (b+i)%100;
               d -= (e-m-c-n+g+a*g*b-a-d*a*a)%100;
            }
            break;

            case 2:
            {
               l += (e+d*d-j-d-d)%100;
               d += (c+c-b)%100;
               m  = (g-a+b-i-n-l)%100;
            }
            break;

            case 3:
            {
               a -= (m+g-n-f-b+a-h-j-k-b-g+m+a)%100;
               c -= (l+f-m-b-a+l+d-l-k-e)%100;
               f  = (k-b)%100;
               d -= (a+f*i)%100;
               g += (g*l*n-i+h+b+k)%100;
            }
            break;

            default:
            {
               e -= (e+h+k-e-j)%100;
               d += (f*n*h+j+d*f-h-h)%100;
               i += (b-n-l+l+h-e)%100;
               h += (k*l*i*m+a*k-g+m*n*e+h+f)%100;
            }
            }

            m -= (f-b-e-d-g-a-i-d+b)%100;
            m -= (c+i+d*l*c)%100;
            b += (c-h*d+d*n)%100;
            k += (e+i+i+j+l-e-l-c-m+k-n-k-m)%100;
         }
         break;

         case 2:
         {
            j -= (i-m-g+f+c+f+a-h)%100;
            c += (i*k)%100;
            h += (n-f-a+g+c-e+f+d+m-c-g+i)%100;
            j += (j-f+b+a*e-n+k+l-e*n-e)%100;
            m -= (k+i+k-b-l)%100;
            e -= (a+d-m+n-n+l+f+j+j+l*h-e+l-j)%100;
         }
         break;

         case 3:
         {
            l += (c+d-i)%100;
            e += (a+j-g-g+k-g-c-c-j+b)%100;
            e  = (n-i*a-b+c+l+m+n-b*a+j)%100;
            j -= (n*l-l-j)%100;
            g += (d+f+c-n+e-g*h+e+j)%100;
         }
         break;

         default:
         {
            l += (l*a+b+g)%100;
            k += (m+d+c-a*h-j)%100;
            n += (d-c-j)%100;
            c += (n*h-h+g+j-m+m+h*l+h)%100;
            b += (c*b-d+j+g-l-k+j*h*h-m+h*i+c)%100;
         }
         }

         l -= (c+m-i-c+j+b-h+n)%100;
         d += (a*l-b-c)%100;
         h  = (f+k)%100;
      }
      n += (c-b*c+c+d+j)%100;
      l -= (m+d*b-i)%100;
      g += (h+i*e+i*k)%100;
   }
   l -= (f*n)%100;
   k += (e+f-m+a+a*j*k-a+n+b*i+n-b)%100;
   k += (f*f+e-f+j-h+c*a*j+c*b)%100;
   f += (i+h-d-n+i*i+b*i-f*d+i)%100;
   g += (m+m+k+k-h-m+d*e+b+j*n+c)%100;
   k -= (k+m+m+k)%100;
   e += (e-k+h-c+f+f-j+c+a)%100;
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
         for( ; ++FORcnt[12]%5 ; )
         {
            for( ; ++FORcnt[11]%5 ; )
            {
               if( ++IFEcnt[8]%2 )
               {
                  h -= (a+g-g*k-n-l-g+g+f-h-n-m*g)%100;
                  d -= (k+g*h-i-c-f-m+l-k*g)%100;
                  f += (b-e-e*d-m+l+n-h-i-b-n)%100;
                  d -= (m+m)%100;
               }
               else
               {
                  j -= (g+k-f+g+e*h+l+b+j+a)%100;
                  f += (c+f+k-j-a+m+a-b*b+g)%100;
                  d += (n-m)%100;
                  e += (k+i*g+b+d+j-b-f)%100;
                  l += (c+j+g+n*f-l+f+c-d+i+e*l+b+m)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  g -= (k*k+f*n-b*k-m-g*c*a*k-a*j-d)%100;
                  i -= (d-k)%100;
                  g += (k*f)%100;
                  l += (b-a-c+n-b*f-k*g+a-h+c)%100;
                  f += (f-f+e+j)%100;
                  l += (i+b*c-k-i*n+d-c+h-m)%100;
               }
               do
               {
                  m -= (e-a*i+a-d*d+f*c+d-i-i+e-d-h)%100;
                  c += (n-a+e*b-h-a+c)%100;
                  h += (m+a)%100;
                  n += (g+a)%100;
                  n -= (n-i-e-i-j-a+j)%100;
               } while( ++DOcnt[8]%5 );
            }
            if( ++IFcnt[6]%10 )
            {
               n -= (d-a-m+c+h)%100;
            }
            m -= (e+b-b+g-j+i-m*l-f-l-f+h)%100;
            h += (e+h-i+c-a*c-g-d*b*e+h+e)%100;
            i += (c-c+g-a-n)%100;
         }
         c += (i*b-d+k*j+i)%100;
         n -= (a+c*f-e-g+b+a+j-i+n+f-m+b)%100;
         c -= (e+e-j+l*i*k*c+e+i)%100;
         b += (j-n-n+d-m-a-g+b+g*c-e-a)%100;
         n += (n+a-i)%100;
      } while( ++DOcnt[7]%5 );
      h -= (f*b*f+l-c+j-d+n-f-g)%100;
      m  = (h-m)%100;
      f += (e-c*g+d-j+i-e)%100;
   }
   d -= (i*j+b-c+k-d+b-b-g+j-f+d+a*b)%100;
   b -= (e+f)%100;
   j -= (l-h+k-f-e+i+g*e)%100;
   l -= (f-m*j)%100;
   e += (m-n+h-l+f*c+m-h+m+l-d-k)%100;
   j -= (j+k+b-m-i*b)%100;
   c -= (l+k+d+l+g-n+g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[16]%5 ; )
   {
      
      switch( ++SWcnt[4]%3 )
      {

      case 1:
      {
         if( ++IFEcnt[10]%2 )
         {
            m += (f*j-g-d-m)%100;
            j -= (e+h+m-f)%100;
            l -= (a+m+m-j*b)%100;
            b -= (b+e-m-b*e*m*k*g-e)%100;
            g -= (d-n)%100;
            n -= (g+n*g-i+b-g-e+n-l+m+e-f+f)%100;
         }
         else
         {
            while( ++WHILEcnt[10]%5 )
            {
               do
               {
                  h += (n-i+g+e-m-j+g+f+k*c-l-j-n)%100;
                  g += (g-g+m*l+j+b+n*e-l+k+e+n+k*d)%100;
                  k += (l*l+g+c-c-g-i)%100;
                  h -= (k-h*g)%100;
                  m += (l+c-f+h+n-g+j+a-a+d-b+l-m-h)%100;
               } while( ++DOcnt[9]%5 );
               for( ; ++FORcnt[13]%5 ; )
               {
                  h -= (e*g+m+k*f-a+h+c)%100;
                  e -= (i-n+i+n+h)%100;
                  j -= (n-d-e*g+l-k+g-i-j+f+e-b*d+k)%100;
               }
               if( ++IFcnt[7]%10 )
               {
                  g -= (k+k-g+l-a-f+l+a-e+i)%100;
                  i += (h-d+l-g-m*j-j+k+g+j-e-b-c+j)%100;
                  b -= (j-d-m-i*a+a)%100;
                  m += (i+l-n-d)%100;
                  i += (d+i*k+a-b-g*n-k*l-b+e-h+n-k)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  n -= (l*g+a*i+j-d*j-g+f)%100;
                  e -= (k-e+i-n+c-m*b+g+f-c-a)%100;
                  e += (d+h*d*e+f*e+d-g-j)%100;
                  l -= (d*f+i*l)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  b += (c-b+e*d-a-h-g*j+f)%100;
                  d -= (j+k+d-g-d+g-n+n+i-k)%100;
                  n += (n+j-h+k)%100;
                  a += (d+d-c)%100;
                  g -= (m*i+j-i+m-d-n+d*k-c*h*k*j)%100;
               }
               else
               {
                  b += (h-a)%100;
                  d += (f-d+g+b-n*g*g-l+c-a-f)%100;
                  i += (c*e-i-k*l-g)%100;
                  e -= (m-a-f+l-j-m*m+h-f*k-f+a)%100;
                  d -= (h-d-e*k*g-b-m+e-k)%100;
                  l -= (b+i+n+b+e+k+a)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  e -= (f-h-h+e+b+i+n-k*f)%100;
                  a += (j+f+i+h+a-c+f)%100;
                  m -= (i+c-c*l*a+k*f-h+c+f)%100;
                  b += (e-l+c-n-b+n+m+e+k+l-m)%100;
                  j  = (f+j-m)%100;
               }
            }
            do
            {
               a += (g*k-h+h-n-c+h+e*f+i-g)%100;
               for( ; ++FORcnt[15]%5 ; )
               {
                  h += (e*n*e-i+g-k-h*b+a)%100;
                  m -= (l-k+c-c-n+c+k+l-j-d+b-c*k)%100;
                  f += (g-l*m+e)%100;
                  e -= (f*e-c+e-h-h-k+h)%100;
                  b += (f+k*l+b+g+g+c*g-c+c-i*h)%100;
                  a -= (a*l+j-d)%100;
               }
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  j += (k+a+n-a+i-k-b)%100;
                  n -= (m-j+k)%100;
                  l -= (l*g*d+e+b+j+h-e-l)%100;
                  g += (j+b-h)%100;
                  b += (n+m-j+k-h-l+i-m-m+a*b-e*g)%100;
               }
               break;

               case 2:
               {
                  h -= (j*j-g)%100;
                  h  = (a-a*b-m+k-c+k*f-i+j+n+l*d)%100;
                  d += (i*f+a+n+l-e)%100;
               }
               break;

               default:
               {
                  d += (j-c+n*j-b+j-i*b-k-b)%100;
                  k += (h+j*g-a*b-g-l-b+m-h+i+c*f+d)%100;
                  l -= (k*c+a*b)%100;
                  e += (f-g+h-h-n*d-d-n-b+l+l*l+a)%100;
                  f  = (a+g+f-n+g-n+b+h-c+g-g-l+b+e)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  g -= (g-e)%100;
                  c += (b-c+m-m-b-n+b-a-n)%100;
                  i -= (h+e-j-b+h-n*a-f-j-h-j*j*i-f)%100;
                  g += (l+b*g+l*k*m*g)%100;
               }
            } while( ++DOcnt[10]%5 );
            b -= (k-m+c-m*j*m-c-g-h)%100;
            f -= (l*a-k-b+j+h-a)%100;
         }
         g += (m+h-m+e)%100;
         d -= (n-k-f-e+m)%100;
         d -= (c-m)%100;
         j  = (e-i+g+i-a+a)%100;
      }
      break;

      case 2:
      {
         g += (b*a-b)%100;
         m -= (b+m-a-e*m+a-f*n-c-f-k-e)%100;
         h -= (a+g-m+c-b*n-c-h-m-h+e*e)%100;
         m -= (m-g*h-m+b+h*b+g-l)%100;
         d += (f-j*m+a*k+k-b+f)%100;
      }
      break;

      default:
      {
         c += (l+l-d-i+f)%100;
      }
      }

      m -= (a-g+m-i+n+n+e-d-n)%100;
   }
   l -= (b*k-e+e+m-e-k+m-k-f*k*l)%100;
   j -= (a-e*m-i-l-b-g-d-a+g*l)%100;
   c += (i-f-m+d+k-d+d-e*j-f*a*i)%100;
   c -= (h-c*f*f-f-h*b-b*g-c)%100;
   f -= (i+k*f*k+a*d+d*f*e*h-h+f)%100;
   c -= (m-h+h+j+a-h+g+d+j*h-a)%100;
   e  = (k*g-c+h-k-g+m*j+b-j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F6(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[13]%2 )
   {
      k += (b-a-k)%100;
      n -= (m-g-f*i-a+h+a*a-d)%100;
      i -= (g-a-a-a-n+m+a+f-c-e-h*d*d)%100;
      d += (n*j-k+e-i*n-n+e-c*g)%100;
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
                  c -= (j+j-m+m-a-d-f+c-k+c)%100;
                  c += (e+e+e-a+f+k+j+j-e+g-i)%100;
                  n -= (i+b+l+h*h+b+d*d-k*l+l-i*m+g)%100;
                  d  = (m-h*a-c*c)%100;
                  g -= (j*h+e+i+b+n+l)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  f  = (e*b*n+j+e+n+h)%100;
                  k -= (c-k*c-n+d+k-c-h-b+j+h+k)%100;
                  f -= (g-i-a+j+d+k+k+h-f*b+c+i+b-f)%100;
                  d += (n-l-m-i-e-n-e-a*j-b)%100;
                  k += (m-c-a*m*n+f+g-n-f+n-g+j)%100;
               }
               else
               {
                  m += (n+l+j-g-l-a+m+k-e-l*m-a-d)%100;
                  b -= (i*d+h-c-l-c*i+a*b*n+j*m*n+l)%100;
                  h -= (l*m)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  c += (f*k-f*l-h-n*n+d+h)%100;
                  a  = (f-e+j*m-b)%100;
                  h += (g+n+a)%100;
                  g += (a+j-d)%100;
               }
               do
               {
                  g += (a*m+k*k-d-i-i+k)%100;
                  k += (k*m-h-l*j*k*f-g-d+a-h)%100;
                  b += (d-a+f+e-g+k-g-d*d-c)%100;
                  l += (e+m+h-d-e-j*n-k*n+f)%100;
                  m -= (j+l*a-f+g+i+j-h-e)%100;
                  n -= (g-i+n*f-b+n-g-b*f*j-k)%100;
               } while( ++DOcnt[12]%5 );
               if( ++IFcnt[9]%10 )
               {
                  a += (f-l)%100;
                  f += (m+i+c+a+b-j-f-e)%100;
                  f -= (e+i-d+h+k*i-k-g)%100;
                  d += (i+i*f-e*b-n-h+g)%100;
                  n -= (f+e*m+b-n-e-d+l+a*k-l)%100;
               }
               f  = (k+c-l-g+i+a+l)%100;
            }
            for( ; ++FORcnt[19]%5 ; )
            {
               
               switch( ++SWcnt[6]%3 )
               {

               case 1:
               {
                  n += (b*k+a+g-n+c-k-f+l-b+f-a*j)%100;
                  e -= (l+i*n*g-d-b+f+d*n-g+l)%100;
                  c -= (e+d)%100;
                  c += (l+b+k-l*b-a)%100;
               }
               break;

               case 2:
               {
                  g -= (c*a*d+j-c+g-b+n-g+a+l)%100;
                  i -= (c-c-h-k*f)%100;
                  g += (b+f)%100;
                  n += (h+e-m)%100;
                  e += (a+i+c*n*h+i)%100;
                  g -= (b*a+j*h-h-k+f-e*e+g+h)%100;
               }
               break;

               default:
               {
                  l -= (e-m+l-n+h*j-c-c-g)%100;
                  i  = (i-b*i-i+k+d-g+a*h+b-m*l*b-d)%100;
                  d += (c-n+l-n*k-e-e)%100;
                  g += (k*l+a+i+m+h-n*b+f+l+f+f-b+g)%100;
                  l -= (j*b-j+j+n+i+f-e+d)%100;
               }
               }

               if( ++IFEcnt[12]%2 )
               {
                  c += (b+i+d+h+h-m*j-c+l)%100;
                  c += (c-d+c-k-i+g)%100;
                  h -= (c+g*g+n-n+b-d*m+l)%100;
                  a -= (b*b+m-k+c)%100;
                  n -= (d+e-b+m+f+i)%100;
               }
               else
               {
                  j -= (e-f)%100;
                  l -= (b-e-c+c-g-c-g+m*h*l+k+e-c)%100;
                  k  = (h-c-l-j+h-e+f+e*e+g)%100;
               }
               b += (e+n-j+l*j+k*c*e-e*a+h+j*m)%100;
               m  = (d-b+j-b-a-b+a+a)%100;
               n += (m-h-c+a-f+i-f*e-l+c*l+m+g+g)%100;
            }
            d -= (e+d+h+f-f*d)%100;
            c += (j-g)%100;
         } while( ++DOcnt[11]%5 );
         l -= (n-h-i)%100;
         f -= (n+k*d*m+l-a+f+i)%100;
         n += (e-k+h+h)%100;
         k += (g*i+k*c-c-a+h-m*c-a+i-f)%100;
      }
      i += (n-l-m-i+f-c-b-e-h*k+f-f+c)%100;
   }
   g -= (d-i-k*a+n*i+f)%100;
   j += (l+m-a-c*f*b)%100;
   b += (m+b+i-l)%100;
   m  = (f-n*j+c*h-b-j-j+b-f+l*i-m)%100;
   l -= (e*c+a+c-m+b-f*b+l+e+d+b+c-e)%100;
   l  = (e+m+n*e-c+g-f+g-k+k+a-i)%100;
   a -= (e-k+n-d-e-l+m+c+g+d)%100;
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
                  k -= (h+k+m+d-b-h-e+d)%100;
                  c -= (g-n+h+n-d*i*m-m)%100;
                  i -= (e+a-a+j-g-a+f+m*a*h-f)%100;
                  l += (d+m-l+g-e*h-f-l-h*c-l)%100;
                  c -= (l-i+n+j-h)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  f += (l*m+a-e)%100;
                  d -= (g*k+l-j)%100;
                  a -= (i-f+i+d+i-j+j-l+n)%100;
                  k += (j+c)%100;
                  m += (h-i*j-m*b+h+a+n-g-h*f*d)%100;
                  c -= (h-b-c-n*l-n)%100;
               }
               else
               {
                  g  = (l-d+g*i+a+d*m+b-f+c)%100;
                  i += (b-f*k*i+m+c-k+k-g-h)%100;
                  d += (i+n-i-i-j-j+d-m-f-k)%100;
                  h -= (g-b+d-j+m+c*n+j*f+b)%100;
               }
            }
         }
         while( ++WHILEcnt[14]%5 )
         {
            do
            {
               i -= (g-j)%100;
               for( ; ++FORcnt[22]%5 ; )
               {
                  g  = (c+i+c+l+f+g+c+g*m+g)%100;
                  k -= (d-m+g+i-e-n-n+n+l+n-l-n-h-a)%100;
                  e  = (n+e-l+l-l*j-f-m+i-m+c-d+g)%100;
                  b -= (h*i-h*g-k)%100;
                  b += (l+m)%100;
               }
               
               switch( ++SWcnt[7]%3 )
               {

               case 1:
               {
                  n += (j*d)%100;
                  e -= (f*f-k-f+b*h-a-k+h+m-e-k*b)%100;
                  d -= (k+n-g*a)%100;
                  h += (n-n*l*d)%100;
               }
               break;

               case 2:
               {
                  e += (i-k-g*f*n+b*i+a-a+i*c-m*b)%100;
                  g -= (j+l+n*c-c+l)%100;
                  c += (i*j*g+g+f)%100;
                  m += (a+e+b-h+b+m)%100;
                  c += (a*d-m+n-g*l*b)%100;
                  d -= (n*b+g*m-m)%100;
               }
               break;

               default:
               {
                  k  = (m-k+g-d+k*i-n)%100;
                  n -= (b+g*m)%100;
                  n += (f+c-g-h+b+d*l*g-h+j)%100;
                  e -= (n+e-e-n-j-n)%100;
                  f += (m*b-k+i+m-f+h)%100;
               }
               }

            } while( ++DOcnt[14]%5 );
            if( ++IFcnt[11]%10 )
            {
               if( ++IFEcnt[15]%2 )
               {
                  n += (i*c+f+k+f-m-e)%100;
                  n -= (b*g-h+l+f*e*i-k-k*j)%100;
                  f  = (h+c*m+d*n*n+j-h*g-h*m-b-k)%100;
                  g  = (d-n+f+k)%100;
                  n -= (l*j-b*c+f-d*l+d+i+a+n-d+g)%100;
                  j += (j*k-c+c-k-m-c-h+j+a+f-f)%100;
               }
               else
               {
                  g += (h+j-a*a)%100;
                  k -= (a+g+c)%100;
                  h  = (g*f-h*e-m+m+a*a*i+i+d-l)%100;
                  l += (e-j+i-f*g+j)%100;
               }
               while( ++WHILEcnt[13]%5 )
               {
                  f -= (j*m*c+n-m-g)%100;
                  m += (e+e)%100;
                  e += (b-i-b+f*h+g-g-b*l+k+e+i-h+h)%100;
                  k += (h+d+d+n+c-a-d)%100;
                  l -= (a*f)%100;
               }
               l += (i*f)%100;
               i += (m-i+i*c-i+c*h+m+e*g)%100;
               h += (b-m+b*g+m-b-a)%100;
            }
            k += (i-a-j)%100;
            e -= (g-f-d-i)%100;
            d  = (n-g+k+b+j-d*l*n-e)%100;
         }
         f += (j*j+e*n+c-j-d+i+e+k-n)%100;
         b -= (h+e+i+m*i-l+k+e-b*b)%100;
         k -= (a-e-n+h*h+d-g+d+d+b+e+d-l+a)%100;
      } while( ++DOcnt[13]%5 );
      m -= (n+d)%100;
      b -= (m+b-g*d-j*f*n)%100;
      i -= (k-f*k-c)%100;
      a += (d+m-i+g-m+h-i-a*n+m+k*i+d)%100;
      j -= (i+a+m-a-d-j-d+i)%100;
   }
   c -= (f+g-j-l)%100;
   b  = (h+b+h*f-m+f+n)%100;
   m  = (l+l+k+k-j+c+h-k-c+f*h*a+d)%100;
   f  = (b-n-k)%100;
   e -= (e+m+b*n*i+m+i)%100;
   e -= (k*f+g-k-d-g)%100;
   k += (k+a-b-g*l*l-k+g)%100;
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
                  c += (g-d+n+a+k)%100;
                  l -= (j*l+f+d+a+i+h*d*b)%100;
                  j -= (i+a+c+d*h-a*n-a*g-f+e)%100;
                  i += (h+a*g+h-g+g-d)%100;
                  d -= (a*i+n+m-a+g-n-d-b+h+h+k*b)%100;
                  m -= (l*h-m*m+g-j)%100;
               }
               else
               {
                  a += (j+l-d-d*m*b*a-c)%100;
                  e -= (h+h+a+f-c-j-h*f-a)%100;
                  i += (g-b+m-l-d+e*b-b-m*h*g-l-l)%100;
                  n  = (g-j)%100;
               }
               while( ++WHILEcnt[17]%5 )
               {
                  d -= (d-n-k+f+l-k-n*g+n+c*g+k+l+e)%100;
                  k += (l*e+c*d+b)%100;
                  b -= (b+i*i+l*d-b-k+f+l+c+i-m)%100;
                  i -= (l-h+n-k-j-a-c-b+h*i-g)%100;
                  d += (f-d-b+e)%100;
               }
               do
               {
                  f -= (a-e+l*k-d)%100;
                  c += (l+e-d+i*i*l+m+b+e-m-e+i*h)%100;
                  i += (l*k+k)%100;
                  d += (n*g*d-b-c*c-m-m-a-e+f+l)%100;
                  k += (k-b+n*e-n-h+a+d-n-c-b+g-f-m)%100;
               } while( ++DOcnt[17]%5 );
               e -= (c-n-d+n-f-l+g*k*b-l+d-i+a)%100;
               h -= (d*n)%100;
            }
            else
            {
               while( ++WHILEcnt[16]%5 )
               {
                  k -= (f-h-e-d-d+d+n-h-d-n)%100;
                  b -= (k-d-m-h*l+c-e+m*n-e)%100;
                  b -= (j+k+h-k-b-c)%100;
                  l -= (c*i+b-d+d-n-l*i+h+h+l+m+m+g)%100;
                  m -= (g-e+j*k+j*b)%100;
               }
               do
               {
                  k += (i-c-g*m+h-d*j-c-h-h+e+i+l+f)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  j += (g+e-e+f-c+c*j-b-g*d-l-n)%100;
                  m  = (g+n)%100;
               }
               i -= (j-g+h)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  e += (i-i*f-a-b*f-h-h*h*f+b-i)%100;
                  j  = (e+e)%100;
                  n += (l+m)%100;
                  a += (a*k-l-i*i+n*g)%100;
                  j += (j*h-j)%100;
               }
               
               switch( ++SWcnt[8]%4 )
               {

               case 1:
               {
                  g += (f*a)%100;
                  f += (n+h+i)%100;
                  l -= (g+m+l*l+j)%100;
                  i -= (c-g+a-b*b-c+f+j)%100;
               }
               break;

               case 2:
               {
                  n -= (k-h-h*b-h-e+a+h*k+j-h-h-n-a)%100;
                  g -= (c-c*g-h)%100;
                  d += (b*d+k-j+a-m)%100;
                  a += (n+g)%100;
                  n -= (k*h+e-j-d-a)%100;
                  h -= (e-m-m*a-d*c+h-l-h+g+i-d+e*g)%100;
               }
               break;

               case 3:
               {
                  m -= (d-g+j-i-l-l)%100;
                  c -= (g-m*j-k)%100;
                  m -= (b-m+b+g-e+m*j*c+n+k)%100;
                  e -= (h*l-e+a-m)%100;
                  e -= (l-a)%100;
               }
               break;

               default:
               {
                  b -= (i-j+l-g-h-d+l+f)%100;
                  g -= (i-h)%100;
                  k += (h+m+k*h-n-h)%100;
               }
               }

            }
            m -= (e+b+g-k-a+h+n+k-f+k-n)%100;
            a -= (l-m+f-d)%100;
            c -= (h*m*k+e)%100;
         }
         f -= (f+i+k+c+g+m+f*e-l+l-m*a-g-e)%100;
         j += (j+g*k+j*j+c+n-c+c*i+b+l-k+m)%100;
         e -= (b+f*l-l+g-i*k)%100;
         e += (g+d)%100;
      }
      f -= (f-e+h+f+h-c-f+m-d+j)%100;
      e += (h+a-n-g-h-c+e+n-k)%100;
   } while( ++DOcnt[15]%5 );
   n += (e-k+k*c-f*d)%100;
   g -= (i-n-e+l-g-j-g+c+k*c)%100;
   f -= (b+g+g-n+h+n+l*h+l-b+h*d-b-a)%100;
   m += (g-i+l-i+n-n-j)%100;
   k -= (d+d*c*d*l+j*h-c-i-d-e*c+e)%100;
   i += (a-j)%100;
   e += (n-b-a+l*c+g-n)%100;
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
                  k += (d-a+f)%100;
                  j += (j*d+m*m*c*h*f*d-d-k-l+b-f)%100;
                  d -= (a-e+g*d+e-h*h+c-i-d+f-b*b)%100;
                  e += (j+j-l)%100;
                  c += (a+e-j-b-j+d*m+a+m+m)%100;
               }
               
               switch( ++SWcnt[9]%4 )
               {

               case 1:
               {
                  d -= (i-l+d+c-m+c+n*h-k+m)%100;
               }
               break;

               case 2:
               {
                  j -= (c*l+b-d+l)%100;
                  l += (d+j)%100;
               }
               break;

               case 3:
               {
                  n -= (m+m-i+i*b+k*b-k*e)%100;
                  l  = (g-h)%100;
                  n -= (j+g-h-g+a-h+l-h-n*a+k*k)%100;
                  j -= (h+g-i)%100;
                  n -= (h-m-m*b+l+a+h-a-e-n+n+i-j*f)%100;
               }
               break;

               default:
               {
                  b += (a-f)%100;
                  h -= (k-e+i+d+k-l-g-f-a-c*c*m-e+j)%100;
                  b -= (c*c+k+m+j-n)%100;
                  l += (d-i)%100;
               }
               }

               if( ++IFcnt[13]%10 )
               {
                  l -= (a-f-j*k-k-h+k+j+k-n+n+m)%100;
                  l -= (b-i+f+m)%100;
                  l += (g-e-j)%100;
                  n += (b+k*l+e+c*m+b*j-c-i-e-j*n*j)%100;
                  g -= (b-n+m*i-i-k-g-j*j+h)%100;
                  h -= (a+j)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  e += (i-e-a+e-d+h*g)%100;
                  g -= (i-j)%100;
                  a  = (m-a-j+e+i+f*m+h)%100;
               }
               else
               {
                  m += (m+e+d*l-f-c-i)%100;
                  a += (g-d)%100;
                  h += (i+j+e-h+n-k)%100;
                  j += (f*c+k+m-g+h+e-f*n+n*j*i*h)%100;
                  m -= (g-l+f-g+k)%100;
               }
               while( ++WHILEcnt[19]%5 )
               {
                  m += (b+n+k-c+a-d+h+g+n)%100;
                  b += (g+g+j+j)%100;
                  d += (k-h+b-d+d*h+m+f+k+e)%100;
                  h  = (e-e+l+k+j*m+e-i-c-a*j*e-n-d)%100;
                  i -= (i+a+h*g+g-m-a*f+k+f-m)%100;
               }
               do
               {
                  c -= (j+j+j+b+m-f-h+l+k*i+n-n*m)%100;
                  d -= (c+n)%100;
                  g -= (a-f+i*f-a-n-g)%100;
                  l -= (l+f-d-m-f-a)%100;
               } while( ++DOcnt[19]%5 );
            }
            else
            {
               while( ++WHILEcnt[18]%5 )
               {
                  a -= (m+g*a+h+d*n)%100;
                  m -= (d+f-a+h-g+e+h*m)%100;
                  j -= (a-n-e-n+m+m*i-c+a)%100;
                  f += (k+k+m-h+f+f-i*m*b-h-m-l)%100;
                  m += (c+c*e+g+h+n-m-m-b+i)%100;
               }
               do
               {
                  a -= (a-c+l+i+d*h)%100;
                  k += (k-f*n-b-i)%100;
                  c -= (e+h-c+l-j+d+b*a*b)%100;
                  b += (c+j+e+f+a*i)%100;
               } while( ++DOcnt[18]%5 );
               a += (f+e-j*k-d-j*e-m*c-m-b+j)%100;
            }
            for( ; ++FORcnt[28]%5 ; )
            {
               for( ; ++FORcnt[27]%5 ; )
               {
                  a += (m+c*h+a)%100;
                  i -= (n-i+j-f+g+n+n+b-i*e+j-d+k-j)%100;
                  f += (d-g+c-i*c-e-f+n+m+l+k-j+h-h)%100;
                  e -= (b-j-b-k-n+k+b+e*m+n-g-f*d+n)%100;
                  d += (j*j+m-e+f*j-c-d+k+c*c)%100;
               }
               d -= (j-d-l-f*f+b)%100;
               h  = (e+c)%100;
               f += (l-n-g*m)%100;
               j  = (m*j+j-n+g*j-g-k+j-j)%100;
               g -= (c*c+i*b-l-b-j+k+a+n+j)%100;
            }
            h += (b+a-e-e)%100;
            i -= (k-c)%100;
            d -= (e-h*l-m-b)%100;
         }
         l += (b+h)%100;
         n -= (i*n+h*c*c-d+f-i+j-f+i)%100;
         m += (f-e)%100;
         d  = (e-j)%100;
         f -= (c+b-h+c+m)%100;
      }
      a += (i-a-k+l)%100;
      g -= (h+c+g-h-k+n-l+h-j+e-k)%100;
      k -= (g-n-n-l-c*g-e+b*n*c*n+a)%100;
   }
   n += (b-e+h-j)%100;
   n += (k+i+m-f-m+b+g+e*d-a-c*k)%100;
   j  = (a*k)%100;
   a += (d+j-k+f+d+l-d*b)%100;
   e -= (c-k-n+m-j*f+j-l+c+c+b+e+j)%100;
   c += (c*k*c*h+g*e*e)%100;
   f -= (e+f+i+d*h+c*c-g+l+j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F10(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[22]%2 )
   {
      h -= (k+g)%100;
      f += (c*n+h+i+f-h*d*g-m+d*g-i-k+a)%100;
      c -= (i-e*n-b+c-i+c+c+e+n)%100;
      l += (f-k+g)%100;
   }
   else
   {
      while( ++WHILEcnt[21]%5 )
      {
         do
         {
            if( ++IFcnt[15]%10 )
            {
               c += (k*i)%100;
               for( ; ++FORcnt[31]%5 ; )
               {
                  h -= (g+k+e*l-e-b-j-f-n*b+h+a-i)%100;
                  l -= (n-n-m+c+i-n*l-m*b+c+l)%100;
                  b += (f+b+e+n+j*b+h-i+f-m-l*b-g)%100;
               }
               
               switch( ++SWcnt[10]%3 )
               {

               case 1:
               {
                  d += (m-h+g*l-f*e+m+j-j-l)%100;
                  j -= (n+i+j*e*a*d*c-l)%100;
                  a -= (k-h+k-j-c-g-a-f)%100;
                  d += (h+h*d-h-k+b+k*d*j+h*d)%100;
                  n -= (i*k+c-e-n+c-a-h+h)%100;
               }
               break;

               case 2:
               {
                  l += (m+i-h+n-h+c-j+d*d+l+h-k*j)%100;
                  l -= (g*f)%100;
                  f -= (l+a+k)%100;
                  d += (l+e+f+l+a-k+a-l+d+l)%100;
               }
               break;

               default:
               {
                  h += (j-m-h*h-m-g+n)%100;
                  d += (n+f+a+c-a-m*i*i*l-e)%100;
                  k -= (d-n-g)%100;
                  a -= (g*h)%100;
                  i -= (k*b)%100;
                  l += (b*g*n-f*h+b+m)%100;
               }
               }

               if( ++IFEcnt[20]%2 )
               {
                  n -= (f-b-f-l*a-c-c-b)%100;
               }
               else
               {
                  j += (j-k-j+g+d*c)%100;
                  n += (e-h*a)%100;
                  i += (h-k-d-d-g*m-e+l)%100;
                  a += (h+g)%100;
                  f += (a*e-a-b+m-c-n-c+j+l)%100;
               }
               while( ++WHILEcnt[20]%5 )
               {
                  b -= (k+c+i+i+n+i+l*d+d-c-g-k)%100;
                  n  = (l+f)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[32]%5 ; )
               {
                  c -= (e-b+l+n)%100;
                  n += (f+j+f)%100;
                  b -= (h-k+h+a+j*f+l+n-m+b)%100;
                  e += (l-i*k*m+m+g*j+f+b-n-i+j-f)%100;
               }
               if( ++IFcnt[16]%10 )
               {
                  k += (k+c)%100;
                  l += (c-e*f)%100;
                  n += (f+k+b-j+g-g-k-j+h+m+l*n-g)%100;
                  d += (g+c+a-l+i)%100;
                  d += (l*f)%100;
                  d += (m*i-c+d*i-h+k)%100;
               }
               for( ; ++FORcnt[33]%5 ; )
               {
                  b += (i-f-g+k+m-k+k+h*n+l)%100;
                  c -= (b+d)%100;
                  g += (l-f+j+e-h-m+d+e-m+g*n-e)%100;
                  n -= (k+h-e+e-m*i-e-c+c+i-b+b)%100;
                  l += (i+n-m-c-n+k-g)%100;
               }
               if( ++IFEcnt[21]%2 )
               {
                  d -= (l-h)%100;
                  a += (e-b+i-f*j+h)%100;
                  e -= (f*e+i*n)%100;
                  n -= (g-d)%100;
                  b  = (d-c*j*a+g+k+h*k-n-n-b)%100;
               }
               else
               {
                  n -= (g+b+n-b)%100;
                  c  = (d+k)%100;
                  n += (b-k+k-n-m*g+l-a+d-m-b)%100;
               }
               e -= (b-n-j)%100;
            } while( ++DOcnt[21]%5 );
            e  = (k+e+g+b-e+b*g+l-h*f+e*g)%100;
            h += (n*f+h-n*a-b)%100;
            k -= (c-g*l-g+j-j-l*h-g+i+a*c+m)%100;
            k -= (f-a-c*d+a+n+e-k+n*i-l+f-g)%100;
         } while( ++DOcnt[20]%5 );
         k += (l-j-j-h+j+g-n-b+e)%100;
         c += (l+a+n+a+h)%100;
         h += (c-n+i+g-f+f*l-b-f*e*c-a*k+d)%100;
      }
      d += (b*m+l-j+l+e)%100;
      f -= (n+j-e+f-i)%100;
      n -= (k*g+d-g-h-e+k)%100;
      g -= (k*n+f*g+k*a-h)%100;
   }
   j -= (i-i+j-m+k+e*h*m+g)%100;
   j += (n-g)%100;
   l += (m-e-h*h*f-i*m*k-n+k+i+m-n)%100;
   h += (n-l)%100;
   m -= (b-h)%100;
   c -= (g+h-l-c+a-g+i+l-l)%100;
   j -= (g+m-e*j+m+d-k)%100;
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
         e += (d+a+j-f*g+h+e+h)%100;
         for( ; ++FORcnt[36]%5 ; )
         {
            
            switch( ++SWcnt[11]%3 )
            {

            case 1:
            {
               if( ++IFcnt[17]%10 )
               {
                  n += (a-i+g+g+g)%100;
                  g -= (d*k-b*d+b-b)%100;
                  e  = (k+g-j*b+a)%100;
                  f  = (b*a-i*i*d*k-j)%100;
                  n  = (j+d-g-k-j-h-l+f-d+f*a+d+i)%100;
                  l -= (m*g*l*d+c-n*c+d+i-f-c-h)%100;
               }
               if( ++IFEcnt[23]%2 )
               {
                  g -= (g-l*c+i-m+a*d+a*d-d*j-k)%100;
                  m += (e*b-a+i+g-b)%100;
                  b += (m+e-b*i-g)%100;
               }
               else
               {
                  m -= (e*n-f-g+f-n+g+n+b+c-i-e)%100;
                  h -= (d+n-j+d*n*g-b*j+k+e)%100;
                  d -= (m+g*j-d)%100;
                  m += (k+a+i*n-k+m+k*e*m)%100;
                  n  = (g-f-b*f-i+e-e+k+n*e)%100;
               }
               while( ++WHILEcnt[22]%5 )
               {
                  i -= (k*a-c-c+n+e-h-h+e+h*b+i-d+j)%100;
                  a += (g+k)%100;
                  a -= (j-c)%100;
                  a -= (g+l+l+f+c-h+d-g+l)%100;
                  g  = (f*f+k)%100;
               }
               do
               {
                  l += (k-b+h-i*c-g+b*j-j-c+k-c)%100;
                  n -= (h*l-h+l-i+m*a+i-d-h)%100;
                  f -= (k*e+d+d-m+e-d-a-f)%100;
                  m -= (b*a*b+n-i+f-f-i-k)%100;
               } while( ++DOcnt[23]%5 );
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[34]%5 ; )
               {
                  e += (e-j+g-c-n+l*f)%100;
                  l += (e*j-f*g+g*d*b*k+c+l)%100;
                  l += (l+j-l-i)%100;
                  e += (h-n*b*a-i+n+c-a*d*n*j-l-n*d)%100;
                  g -= (m-j)%100;
               }
               for( ; ++FORcnt[35]%5 ; )
               {
                  n -= (i+i*k-g+h+l+d-j*i+n-b)%100;
               }
               if( ++IFEcnt[24]%2 )
               {
                  a -= (j+d-g+a*l+j+l*j+d*i)%100;
                  f -= (d-n-a+h+i+c)%100;
                  k += (h*a+g+l)%100;
                  b -= (m*h*d)%100;
                  a += (h*m+k+d+n*i+k*m+m*j-d-e)%100;
               }
               else
               {
                  a += (f+e+g-i+h*e+l*f)%100;
                  e += (c-i+d-n*d-d+c+k+k)%100;
               }
               while( ++WHILEcnt[23]%5 )
               {
                  g -= (l-a+i+l+l-n+b+b-i+j*i*h+a-f)%100;
                  l += (b*j*h-d-j+i+b+b+a*k-a)%100;
                  f -= (l-c+f+j+d+h-h*e*l+k*i)%100;
                  g += (l-f+e*m+m-i*f-d)%100;
               }
               do
               {
                  f += (e+k)%100;
                  h += (n+m*e*b-i)%100;
                  g += (d+n-e)%100;
                  i += (c*a-c+c+f+k)%100;
                  k += (m*f*j-a+n-k)%100;
                  h += (i-k-b-b+i+n)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[18]%10 )
               {
                  b -= (g+e)%100;
                  k += (d-g-k*a*i-b+m+f-j*c)%100;
                  e += (n*c+m+e-n*i+l)%100;
                  l -= (g-b+n)%100;
                  g += (k-f-b)%100;
               }
            }
            break;

            default:
            {
               e -= (n-m)%100;
               l -= (j+a-h-g-c-h-i*n-b-i+g)%100;
               k += (d+g-c)%100;
            }
            }

            j += (h-d+d-b+i+a-m+m-l)%100;
            h  = (n-d+f-d+g-b-k*f-h*d-b*h)%100;
            h += (i*j+k-e-e)%100;
            l -= (n+d+i+b)%100;
         }
         f += (m+g-m*h+n*b-c-g)%100;
         l += (k+f-n*f-a+e-m-m)%100;
         k -= (k-n+f-d*m)%100;
      } while( ++DOcnt[22]%5 );
      k += (b-i)%100;
      m -= (m+g+g-h-a*e-i-a+g-m*h-j*a+l)%100;
      j -= (k+l-b+a*m+e-c+l+j+n-h+l-b)%100;
      g -= (k+b+e-k)%100;
      i += (j-l+d-i+l-l*d*f-c*a*n*l)%100;
   }
   i -= (h-d+e-l-e-h-e+a*k+l*b-m*a)%100;
   a -= (f-i*i+j+e-c-c-j)%100;
   c -= (b+d)%100;
   n  = (a*m+j*f+n-j+k+c*m)%100;
   m -= (g+n-l-m+b-a-h+g)%100;
   b += (a+k-g+e*n+n+f-g)%100;
   g  = (i-n*n+b+e)%100;
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
         i += (g+b+l+i-d+c*m+l+l-d*f*h+l)%100;
         if( ++IFEcnt[26]%2 )
         {
            e -= (c*d-g+k+i-e*k+j*i*d+e*l-h-f)%100;
            c -= (a+l*m*h-h+i+n-n+d-n-i+c)%100;
            d += (f+k+a-h+m)%100;
            n -= (a+j+k-m)%100;
         }
         else
         {
            while( ++WHILEcnt[25]%5 )
            {
               do
               {
                  b += (d-g-e-h-f+k)%100;
                  b -= (l-g+e+l-e)%100;
                  i += (k-l-k-m*n-c-j+e)%100;
                  l -= (n-e+l+f-g-k-a*g-k-m+k*d+l*i)%100;
                  m -= (d*h-h*a+a+h-j)%100;
               } while( ++DOcnt[25]%5 );
               for( ; ++FORcnt[37]%5 ; )
               {
                  f += (n+g-l+i-l+c*k+d-b)%100;
                  n += (l+n*a-m*m)%100;
                  e  = (m-g*a+b*a+n+g-b)%100;
                  a -= (k+c+a+n*f-b+j*i+k-k)%100;
               }
               if( ++IFcnt[19]%10 )
               {
                  j -= (g+b*f+j+h*g+g+h-h-j)%100;
                  i += (i-b*f+j+m-m*a+a+f+i+n*g+d)%100;
                  c -= (k*j*g+l*l-j+k+f-n-b)%100;
                  n -= (d-c*e+h*e*e-a+n-l+m-n)%100;
                  b -= (f+n+n*a+i+n+f)%100;
                  i += (b*h+e-g+f-g)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  b += (j-g+g*c-j*b-l+m*n-k*g-l-g)%100;
                  n -= (h+k*h+l-a*k-b-l+m)%100;
                  i += (g+d+a-a+e+g-d-n-j+a+n)%100;
                  d -= (c+f-j+d-h-j-n)%100;
                  d -= (j+h)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  j -= (j*n-d*c+d-h*c-i+k)%100;
                  l -= (b-b-d+a+b-m*i*l*h-c)%100;
                  g += (d-l+f-b+n-f+e+m-e-j+e)%100;
                  g -= (e*d-j-b)%100;
                  f -= (f+i*l+k*g+l+d-m*d+b+b+n-l)%100;
               }
               else
               {
                  k -= (m*e+i-h)%100;
                  e  = (a+j+c*k+l-m)%100;
                  g += (b-m+h-a+n*a-e*m*i*h)%100;
               }
            }
            while( ++WHILEcnt[26]%5 )
            {
               do
               {
                  i -= (i*n-e*a-a-b)%100;
                  c += (e-h)%100;
                  j += (d-i)%100;
                  b  = (b-e-k+c*b)%100;
                  g  = (j-d+g*e)%100;
                  h += (j+j+i*i*n-n+l-d-b+h)%100;
               } while( ++DOcnt[26]%5 );
               a += (c+m)%100;
               for( ; ++FORcnt[39]%5 ; )
               {
                  n += (k+d+f+h*f-g)%100;
                  j  = (d+g+m+j-f)%100;
                  b += (i+h-d-h-a-k+i*l+i+h-i)%100;
                  g += (b-m-g+e+m*f+b+e-e+g*b+h-m)%100;
                  k -= (j*h-f+l+h+k+h)%100;
               }
               
               switch( ++SWcnt[13]%3 )
               {

               case 1:
               {
                  g += (l-a-f+d-h+h*i-k-f+j+f*i+j)%100;
               }
               break;

               case 2:
               {
                  f += (c+e)%100;
                  d -= (j+h*n+j-j+l)%100;
               }
               break;

               default:
               {
                  n -= (f*i-i+d)%100;
                  e -= (i*e)%100;
                  a -= (h-c*h+l+m-g-h+j-m-b+a-m)%100;
                  d  = (a-c+b-k*a-f+j+e-h-i-i+i-g+k)%100;
                  c  = (l+e-m)%100;
               }
               }

            }
            f -= (b*h*a+n+n+b*j+b+h+k+e*f-n)%100;
            m -= (l+g-l*c)%100;
            k -= (h+e+b-k+a-e*i-i-j)%100;
            n -= (i+g+c+e-c+c-a-n-a-l+l-b*f+b)%100;
         }
         e += (g*i+f-j-i+n-i-k)%100;
         e += (i-a-h*i-m*a-b+i+a+k-h-c)%100;
      }
      f -= (n+d+n+g*m)%100;
      h -= (c-j-h-a)%100;
      j += (h-m-f)%100;
      j -= (c*e+e*i+m+l-b+j-k-c-d-m-m)%100;
   }
   break;

   case 2:
   {
      m += (h-e+d*d-k+j*g)%100;
      c -= (f-i+m*d+e-m+a-l*d-c-h-i)%100;
      i -= (m-d)%100;
      n -= (l+g-b*f-m-l+l+m-g+j*h*g-d+a)%100;
      h += (n*g+a-b*h*i+k*k)%100;
      n -= (k-m+e-b-h+e-e)%100;
   }
   break;

   default:
   {
      n += (f-f+f-j-g-m*k+f)%100;
      c  = (n*m-b-k*m*l-k)%100;
      m -= (d-b+d+h*a-c*h)%100;
      n -= (i-n+k*a-d+j-h*n+h-d*l*n-i*n)%100;
      n += (m-c)%100;
   }
   }

   b -= (k-n+i-b*b-a+i)%100;
   f  = (f-c+c+j-l-i+a*l)%100;
   i += (b+c+m+b-c+c+i+e-l+d+l)%100;
   n += (m+b-e-b+d-g+j+i-c+f-d-l)%100;
   h += (e-i+i*e+i-a*k+g+d*k*l+e+n*e)%100;
   b += (f-n-i*d*b-m*k+d*g-c-c-a-c+g)%100;
   h  = (a+f)%100;
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
         b += (i-d)%100;
         h += (n-m*i*j+i+k-d+h-n-m-n)%100;
      }
      else
      {
         while( ++WHILEcnt[28]%5 )
         {
            do
            {
               for( ; ++FORcnt[41]%5 ; )
               {
                  i -= (j+e*i-f-c-b*c+j-h-m+k+h*c)%100;
                  c -= (l+l-i*i-m*c*h-j*h+f-f-j)%100;
                  c -= (j+j-f+a-c*m-e-d+n)%100;
                  k -= (h+n+h*g)%100;
                  g += (f+a-d-i*a)%100;
               }
               for( ; ++FORcnt[42]%5 ; )
               {
                  g -= (a-l+l-f-b-f-m*j-l-c)%100;
                  d  = (e+e)%100;
                  k -= (l-f-m*g*b+k-h-m*n+b-n*m*b)%100;
                  k -= (c+i-n-a-m+c-b)%100;
                  f += (i-k-d-f+f*f)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  j -= (j+e+l-b+n-f-k-c+n+d*g-l-k)%100;
                  n += (h*k+j+n)%100;
                  l += (n+g)%100;
                  j += (m-c+m-m+e+f-m)%100;
                  i -= (c-j*e*b+b-h+f+e+l+a-g)%100;
                  k -= (a-g-e+e+e-a-i-g*h-c+h*g*h)%100;
               }
               else
               {
                  e += (m*l+b-k)%100;
                  f += (f+f)%100;
                  b -= (k*i+n*i-e+j+j-g*k+h)%100;
                  l -= (a+g+d+c-k)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  e -= (i+m-l*d-i*b-j+k-h-d-n)%100;
                  g -= (n+m+b+d*m+f*a*e-g*j+i)%100;
                  d -= (n+e+f-a-n*f*i)%100;
                  m -= (c-l-n-f*n-j-g*a*m+e+h-b)%100;
                  k += (d+f*c+h+e+n)%100;
               }
               do
               {
                  g -= (i-c-j+k)%100;
                  g -= (a-e-m+i*i-f-n+m)%100;
                  g += (n-e*l+l*e)%100;
               } while( ++DOcnt[28]%5 );
               if( ++IFcnt[20]%10 )
               {
                  g  = (a+c-g*j+m-f+e-c+b-b-n-n-m)%100;
                  k  = (g-f-e*h+g+m-k+j-d)%100;
                  f  = (g-f-l-g-d)%100;
                  i -= (e+l-m*k-f+d*a+b+e+n)%100;
                  e += (j+e+d-l*m+k)%100;
               }
            } while( ++DOcnt[27]%5 );
            i += (g-g-c-l-a*a-e+i-a-e)%100;
            for( ; ++FORcnt[43]%5 ; )
            {
               
               switch( ++SWcnt[14]%3 )
               {

               case 1:
               {
                  e += (b+f*a-n)%100;
                  b += (h+i+h*j+l-e+i-i-c-g)%100;
                  g -= (m-k+a-k-d-d)%100;
                  i += (b-g)%100;
                  a  = (n+k-n+e-n)%100;
                  f -= (j-j-d-l-j+j+c-l+n-g-c-h+c)%100;
               }
               break;

               case 2:
               {
                  b -= (c+i-j+d+n*l)%100;
                  d -= (i+f+i+i+g-h-j-f*i*c)%100;
                  h += (d-i*d-i+m*m-i-j+m*g*f)%100;
                  g  = (b*k+e+f-k-d+i+d+g*b-g)%100;
                  l += (k+l-f+b-e+d*e)%100;
               }
               break;

               default:
               {
                  a -= (l+i*l+d)%100;
               }
               }

               c -= (a+e+k-h+h)%100;
               d += (d-k+a+k*m*m+i+c*i-a-f-h)%100;
               i -= (b+h-n-c+l+f-l*m-j-k)%100;
            }
            k -= (c-a+k+k)%100;
         }
         f  = (e-l+e-e)%100;
         k -= (h-a)%100;
         e -= (n-i+f-j-b*m+e)%100;
         e -= (d-i-b*n*a*c)%100;
      }
      b += (e-n)%100;
      a  = (c-f+f+h+e+a)%100;
   }
   f -= (j+d*f*f-m+d+i-h+c-k-l-c-d)%100;
   a += (n+i*n-c*j+c+f-l+c)%100;
   f -= (l+m*l+c)%100;
   e -= (m-n+i-i-k+n-g+n-b*e)%100;
   d -= (h-l)%100;
   h += (c*g*g-j+m-a+i)%100;
   j -= (b+a-e-c+g-h-h+f-m-m*g*c-c*j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[30]%2 )
   {
      i -= (f+f-c-g-c*h+n-e)%100;
      k += (l+m+h+k-b+k)%100;
      k += (m*c+k+a-k)%100;
      b -= (m+d-i*g*e)%100;
      j -= (m-b+g-e+b*a)%100;
      c += (m-l+k-d*b-n)%100;
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
                  l += (i*d-i-i-b*f+e*m+j-a-k-n)%100;
                  c += (j+k+j-f-e*h)%100;
                  g -= (a*l+f*c+k-n)%100;
               }
               for( ; ++FORcnt[44]%5 ; )
               {
                  d += (m-a+a*i)%100;
                  k -= (j*m*f+g+n+c-b)%100;
                  m -= (g-i-i*f*a*h)%100;
                  e -= (k-k*l+a)%100;
                  b -= (h+c+g-i+m-i*l*i)%100;
               }
               if( ++IFEcnt[29]%2 )
               {
                  g -= (a-j-m-b+f-k*e+k+d-a*b)%100;
                  m -= (b-i-d+b)%100;
                  n += (g+g*a)%100;
                  j += (d-e+i+k+m+d+j*h+b+h*l)%100;
                  f -= (c*c-m*n*k-n-l-m-j-f*c+h+n)%100;
                  a -= (b-f*f*i+a*j*b*g*a)%100;
               }
               else
               {
                  k -= (k*h-f*d)%100;
                  g  = (k*e-d+d-f*b-a*m+k+f-l*h-j)%100;
                  j -= (m*n+d)%100;
                  i -= (c+m-b-e-n+e*c-k+a*b+b*e+k)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  b += (m*i-d)%100;
                  j += (f-j-n*b+f-a-n+j+b)%100;
                  f -= (g-e-l+e*n*b-h)%100;
                  k -= (f*d-d+g*a-a-c-d*l*b)%100;
                  n -= (k+c-k+e-m-e-a-h)%100;
               }
               do
               {
                  g += (j+e-g+j-h-e-h*n+l)%100;
                  c -= (a*b)%100;
                  a  = (n+j+a-b+l*g-g+m-d-n+g*l)%100;
                  d += (f+k-j-l-h)%100;
                  n -= (n-l+g-n-l+f)%100;
               } while( ++DOcnt[30]%5 );
            }
            h -= (i*h*n)%100;
            for( ; ++FORcnt[46]%5 ; )
            {
               
               switch( ++SWcnt[15]%4 )
               {

               case 1:
               {
                  e += (m-m-f+c-d+n+i-f*d)%100;
                  b  = (h*d+k+c*e-m)%100;
                  n -= (c-k-h*d+i-k+i*i+d-n+j)%100;
                  e += (i+b+e-g-c*m-n*c-h)%100;
                  g  = (c+e-d+j+c-n-d-l*e)%100;
                  b  = (g+e+e+h+i-e+m*a+b-g-g-d)%100;
               }
               break;

               case 2:
               {
                  b += (g-a+d-g+g*a-c)%100;
                  e += (e-f-c*g-l+i)%100;
                  j += (b-l-k+m)%100;
                  b -= (f-i+h+h+j*e-i-j+h+a-c+m-f)%100;
                  l  = (l-e-h+f*f-b+f*b*n+h-j)%100;
               }
               break;

               case 3:
               {
                  m -= (i-c-b-f-h*b-b+h-i*h-n+m)%100;
                  d -= (d-m-a-b+f)%100;
                  h += (m-f+l+d+g-m*l-g+i+m-e+e*c)%100;
               }
               break;

               default:
               {
                  h += (m-c+g-l+k-n-a+k)%100;
                  c += (l-j)%100;
                  n += (n+m-d+l)%100;
                  m -= (f*d-l-m-k-h+b-k-d+m+l)%100;
                  a += (m+l-h+h-c+d+c*m*g*f-k+g-n-l)%100;
               }
               }

               if( ++IFcnt[23]%10 )
               {
                  d += (g+k)%100;
                  b -= (e*e-l-a+i+f-j*d-l-d+b)%100;
                  e -= (h+a+h+m)%100;
                  f -= (h-i*j+a+d-h+j-k+e)%100;
               }
               j -= (c-j-d-m*g+c-i-m-d-m+m+a*b)%100;
               j -= (h-a*n-n+l-j)%100;
            }
            d += (n-d-a+c-d+j-e+n)%100;
            d -= (a+l*f-i+l)%100;
            j -= (h-n+e-b-n-j-c+g)%100;
         } while( ++DOcnt[29]%5 );
         m -= (h+b+g-b+c-f+n-h-j+j)%100;
         l += (a+m-j+e*c*j*g-f*g*g)%100;
         c -= (h-b-h+i+c*f-b)%100;
      }
      c += (f+l+n*d+n*f+e-f)%100;
      k += (g-h+l)%100;
      g += (h+f-e+k-i-d-j+h-d+f-j+e*l-h)%100;
      l += (m-k-h-l-a-a-j+d+h*j+j+b-b)%100;
   }
   l += (j-g+k+d-f)%100;
   f -= (k+m+i+c+n*n+d*k*b*c*f+g)%100;
   b -= (h*b-e)%100;
   e += (e-d-m*f-k+j*b)%100;
   n -= (i-a+m*l*f+b-l-k+m*n-i+b)%100;
   m -= (n*a+b+j*l-g+f+e-k+c+c-d*l)%100;
   b += (d-d*k+l+f-g+i+g*n-n-e+i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F15(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[33]%2 )
   {
      n -= (h+l-e-e+m-m+g-h+g+f*b)%100;
      f -= (b-b-i*f-f*k)%100;
      j += (k-l-k-k+g+c+m-m+l*m)%100;
      k -= (m+i+m+d+a+m+b*d-i)%100;
      c += (k+m+h)%100;
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
                  c += (f*n+e*n+m+n-n)%100;
                  i += (l+g-c+c+k*h+k-a)%100;
                  e += (l+c-d+l+a-j)%100;
                  a += (n*c-e+m-e*k+a+f*g+b-e+k+h+a)%100;
               }
               if( ++IFEcnt[31]%2 )
               {
                  j  = (f*b-d-j-j*e*a-l+g-j+e)%100;
                  b -= (c+b)%100;
                  c -= (g*k-g-i+l-m-k*n-l*k)%100;
                  e += (a+h+h-i+e)%100;
                  h  = (e+f-h*b*m*f*c+k+g-n*k)%100;
               }
               else
               {
                  g -= (l*e*c-j+h+d+k)%100;
                  k -= (i+k-l-a-g-i-g-a-d+b)%100;
                  n += (n*i*k+k)%100;
                  e  = (e*e+n-i*n-e+a+b)%100;
                  h  = (g-f-d*c*e-a*b+b+d+n)%100;
                  g += (e-n-d-m+d+k+e*b*f*f-k+m-g)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  h += (k-n*k-b-e*h*k-j*d*k+m)%100;
                  a -= (k+d*d+d-n-i-b-j)%100;
                  l -= (a*g+h*a+m*l-j+l+c-m-e+b)%100;
               }
               do
               {
                  d -= (b+l*f-i+l-k+f*m)%100;
                  l -= (k-k-n+j+f+d*j)%100;
                  b -= (b*d-d*e-b-j*k-j*m+m-j+i)%100;
                  a -= (a-k-a-e+g+n*h*i-f-n+b-b+e-f)%100;
                  d -= (d-g)%100;
               } while( ++DOcnt[32]%5 );
               if( ++IFcnt[24]%10 )
               {
                  i -= (m+e)%100;
                  h -= (g-m-a-b+f-j)%100;
                  l -= (g-d-l*k+g+i)%100;
                  c += (k+f+h+l)%100;
               }
            }
            m -= (a-i+b+c-h+k*b*g-g-d*m)%100;
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
               f += (e-d)%100;
               n -= (a+j-j-n+k-d-g-l+b)%100;
               i -= (g+h-l-i)%100;
               l += (c+d*f+g-n-a-k)%100;
               f -= (h+a*c+h-c+h-i+a)%100;
            }
            else
            {
               while( ++WHILEcnt[33]%5 )
               {
                  c -= (e+c-i+l+c+d+f+b+g)%100;
                  d -= (g+k+n+h)%100;
                  c -= (b-d)%100;
                  g  = (a+h+g+c*f+m+h-g-j-n-a-g-c+f)%100;
               }
               do
               {
                  i += (d+j-n+d-h+i*j-g*h-l*a)%100;
                  m  = (b+m+i+a-m+d+j-d-j)%100;
                  m -= (g-g-g*k+d*a)%100;
                  k += (a*i-g+k+k-l)%100;
                  m += (h-n)%100;
                  g += (n+e-k*j-a-i+a+a+b*a-d)%100;
               } while( ++DOcnt[33]%5 );
               for( ; ++FORcnt[49]%5 ; )
               {
                  m -= (b-m*a+c+f-f-d)%100;
                  l += (e+l-d-i*l+i-d+a-e-e*e+l)%100;
                  c += (a+j-b+h+n*b-i-a*n+b-k-m+c+i)%100;
                  l += (c*a-n+d+i-n-h+c+a*h+h-j-i-m)%100;
                  g += (j-i)%100;
               }
               if( ++IFcnt[25]%10 )
               {
                  b += (b+j-b+c+d*g-h*m*g-e+g)%100;
                  a += (j-d+j*f*a*d-f+b)%100;
                  g += (b+g+m+g-h-b+l-g+j)%100;
               }
               l += (m*a+g-a-a+i-e)%100;
            }
            b += (m-f+l+g+m-n)%100;
            m += (f+n-k-b-l-h-k-j-h)%100;
            l += (l*j)%100;
            k += (c-k-g)%100;
         }
         break;

         case 2:
         {
            l -= (f-k*a-a+b)%100;
            k -= (n+g-i+m-d+l*a+b-a+d*e-h)%100;
            d -= (b-f)%100;
            i += (a-b-j+k*k+f+m+g+h*m*c+m)%100;
         }
         break;

         default:
         {
            n += (f*a*h)%100;
            c -= (d*m*d+l-e+i)%100;
            h += (i*n-g-a+e+e-j)%100;
            c += (j-n-m+l-i-h+k-f)%100;
            d += (d-a-n+c-f-e-g-g*b)%100;
            h += (e+c+c*h+d+m*f-g+j*j+e*i-c)%100;
         }
         }

         c += (m-j+m-n-g-f)%100;
         l -= (b+j*i-m*g-k-n+d)%100;
         j -= (k+d*m-l-f)%100;
         e -= (n-d+a-l+a-f*n)%100;
         a += (n+i)%100;
      }
      g -= (n-e-h)%100;
      k += (c-h+h)%100;
      l += (k-m*l+c*j+f+j-i-l-d+j+m*a)%100;
   }
   k += (b+n)%100;
   k += (a-k*g-i+g-l+e*c+h)%100;
   b -= (b+j+k-n-j+c*c*f)%100;
   a -= (f-l-f*j+h+f+i-e-j+a*f+b+k)%100;
   b += (c-d-k*g+g-k+b-d*b+i+j)%100;
   c  = (n-b+n*k-m)%100;
   f += (d+m+h*b-d+n+k+l+a-k)%100;
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
         k -= (k-i-b-i+f+h*h-i+a-k*f)%100;
         m += (n+l+h-g*e-e+e*i-n+j+i+e-a+g)%100;
         b += (e+i*g)%100;
         i += (a*a+c+i+h+h+l+j*e+d+b)%100;
         d -= (a+c*c*d-c+b+j*b-i+a-d-e)%100;
      }
      else
      {
         while( ++WHILEcnt[35]%5 )
         {
            do
            {
               d += (b+g-e)%100;
               for( ; ++FORcnt[51]%5 ; )
               {
                  j += (i+k-k+a+l+j*g)%100;
                  b -= (k+n)%100;
                  m += (k-d-b+d)%100;
                  g -= (f*j-f-g*g+m-n+c*e+b-h*a*i)%100;
                  a -= (f+k-l+n*i-h-e-k*e)%100;
                  l += (g-j-b-b+n)%100;
               }
               
               switch( ++SWcnt[17]%3 )
               {

               case 1:
               {
                  a -= (b*n-a-m+i)%100;
                  d += (e+h)%100;
                  g -= (l*n-f*g+e+e-a+b*b-d*c-a+a)%100;
                  g += (d-g*a-m-e*l+h)%100;
                  f += (j+n-d+b-a*f+j+l*d-f*n-b)%100;
               }
               break;

               case 2:
               {
                  a += (e-h-i+c*b-n-d*a+j-f-i-e)%100;
                  b += (i-g-f-f*m+k-c)%100;
                  n -= (n-g-e*i+n+a-g)%100;
               }
               break;

               default:
               {
                  d += (b*l+n-m*i*f+a+k-h+g+h)%100;
                  e += (f-d+j-l-a*k-l)%100;
                  i -= (k+i-m+d)%100;
                  i += (f-e)%100;
                  f  = (k-i-h-g-l+h+i-e+n-d+n*a-b*k)%100;
               }
               }

               if( ++IFcnt[26]%10 )
               {
                  i += (e+e)%100;
                  g -= (g+n+b*a-l-m+c-n-i-k*h+m)%100;
                  g -= (n+e*b+b*l)%100;
                  l -= (i+l*a+j+e-k+n+m+d+f-i*e+b-g)%100;
               }
            } while( ++DOcnt[34]%5 );
            if( ++IFEcnt[34]%2 )
            {
               m -= (b*m-g+h)%100;
               f -= (n*m+c+c+d-j+h-b+a+g+m+c-h*h)%100;
               b -= (e-n+e+c-e+b-e+l-k-a-j+f-g-j)%100;
               h -= (m+i-c)%100;
               c += (c*h-d+e*k+h-l+l+g-g-c-i-k+a)%100;
               h -= (e+g-h*j-l-e-h)%100;
            }
            else
            {
               while( ++WHILEcnt[34]%5 )
               {
                  c += (j+k)%100;
                  b += (f+b+g-b-c+b)%100;
                  j += (f+l+k-g+m+e*i*m+l-b+k+a*a+a)%100;
                  k -= (e-h+l-h-d)%100;
                  d += (c-n-h+j+k-n+l+a+k-h-k+f)%100;
               }
               do
               {
                  k += (b+e+a+d+n-b+f-f*i-d)%100;
                  a  = (a-m*h*g+k+b+l+n+f+g-d+a-k+m)%100;
                  h  = (b+k-h+c*g+d-g+b+g*f+i)%100;
                  g -= (c+d+a-e-e-k)%100;
                  f += (e+g-g-m*n-h*e-m*b*i-e*l)%100;
               } while( ++DOcnt[35]%5 );
               for( ; ++FORcnt[52]%5 ; )
               {
                  i += (g+g-g-b+f*a+m+i-n)%100;
                  a  = (m*k+g+l+m-e*a+d-e)%100;
                  n -= (a*d)%100;
                  b += (d*g-n+i+b-n-f-g*m*i+j)%100;
               }
               d -= (i-a+d*n+l*k*b+k+g)%100;
               i -= (m-m+k+j-b-n+m-c)%100;
               n += (l*j+c-b-e-e-g+i)%100;
            }
            a -= (g-c-m*h+d+f-i)%100;
            n -= (c+e-l+h+g)%100;
            b -= (c-l-c*m-a-i+a-b+m+a*e)%100;
         }
         e  = (i+g+c-n-b-k-a+b+k)%100;
      }
   }
   l += (l*f-l+m-g+j+i-d-b+c+d-e+g)%100;
   m  = (a-n+a-f-i+f+f+j-a-k-l+g+h)%100;
   h += (d*l+j-n-n+a+l+c-f+f+a-d+g*i)%100;
   l -= (f+c-e-a+a)%100;
   d -= (a-b+i*a-e-f-a)%100;
   e -= (j+d*m)%100;
   a  = (f-m+k+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F17(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[56]%5 ; )
   {
      if( ++IFEcnt[37]%2 )
      {
         g += (g*i+f*k+i+i)%100;
         e -= (f-l-f-i-c*n-d*d+m)%100;
         d -= (f-a+e+e+m-l-a*b-g*e-a+f)%100;
         e -= (m-h-h+f-f)%100;
         j += (e-j+e+h+f+f-n+h-e+a*a+g)%100;
      }
      else
      {
         while( ++WHILEcnt[37]%5 )
         {
            do
            {
               if( ++IFcnt[27]%10 )
               {
                  f += (n+m)%100;
                  e += (l+i+c-h+m-k-e+l+e-a-d-i+l)%100;
                  l -= (g+g*j+n*g+d-l-k+l*f+f+n)%100;
                  e -= (g+g+b-a*g)%100;
                  i -= (g+d-k-d+c+n-n)%100;
               }
               g  = (e*m*j+a+f+a-j-i+k)%100;
               for( ; ++FORcnt[54]%5 ; )
               {
                  e -= (g-m+f-l+d-h+j-m+l*n*c+b)%100;
               }
               
               switch( ++SWcnt[18]%4 )
               {

               case 1:
               {
                  e += (m-g+k*j-e*c-j-d+m)%100;
                  c -= (f-c)%100;
               }
               break;

               case 2:
               {
                  m -= (i+b+m+j-m-m-k-i*n+n-j+n-m)%100;
                  j += (a-l*c)%100;
                  e += (j*h+k+d-l*b*k-f+i-c+m*e*d)%100;
                  c -= (b-c+b+d+i+a+i+h+h-a)%100;
                  l += (j+l)%100;
               }
               break;

               case 3:
               {
                  f -= (e+d)%100;
                  i += (i+k*f*k+f+m)%100;
                  l += (g*m+g-m+i*f*k-e-l+i-i+a-i*d)%100;
                  c  = (b-h+i-c)%100;
               }
               break;

               default:
               {
                  k -= (f*m-a+n+j)%100;
                  b -= (k*l+g+g)%100;
                  m -= (l+l+l*k-d-l+n+h-k-i-g-g*h+f)%100;
                  d -= (b+j+j+h)%100;
                  a += (m*e)%100;
                  c  = (m-e*m*a-f+e)%100;
               }
               }

               if( ++IFEcnt[36]%2 )
               {
                  h -= (d+l)%100;
                  f += (i+d-g+j+i+f+i-c-f+e-c-m+n)%100;
                  l -= (g+e)%100;
               }
               else
               {
                  l += (d+c+h-l+i-l+a+d)%100;
                  g += (k-n-j+c-f-g*d*d*f-g-d*n-n)%100;
                  i += (m+l)%100;
                  e += (f+b*n-f-m+f)%100;
                  d -= (d-j-k*h+k+h-i+e-g*e+n-n+c+j)%100;
               }
               while( ++WHILEcnt[36]%5 )
               {
                  a += (h+d-n)%100;
                  e -= (i-a-c-n-g-j+b*m*m+n-d)%100;
                  e += (b*i)%100;
                  b += (a-b*b-b)%100;
                  c -= (c+j+m+j-k)%100;
               }
            } while( ++DOcnt[36]%5 );
            do
            {
               for( ; ++FORcnt[55]%5 ; )
               {
                  b -= (f+i+n*m+c+g*i-m*j-a*e-a-j)%100;
                  j -= (d-h+a-m+g)%100;
                  h -= (b-f*m+e*j-d-j-a+b-f-a*g-i+g)%100;
                  d -= (j*a+b-g-j+i*n)%100;
                  j -= (i*k)%100;
                  k  = (f+a+n*k-n-e+b)%100;
               }
               if( ++IFcnt[28]%10 )
               {
                  b += (m-j-g*c*k)%100;
                  f += (a-l+d-a+i+k+l+g-f)%100;
                  j += (a-l-d-n+h+i)%100;
                  j -= (g+b+b-e*i-l-k-n-n*m)%100;
                  f -= (h+j-e-h-e-e*c*h*k+l)%100;
               }
               e  = (b+a-j-e+n+d)%100;
               l += (h-n+b-b-h-g+k)%100;
            } while( ++DOcnt[37]%5 );
            d -= (n*n-e-j-f*g-m*j*a-f+n)%100;
            m += (j+n+a-j+j*a)%100;
         }
         i -= (c-i+i+m-f-m-a-g)%100;
         g -= (j-j-l)%100;
         d += (n-l+a-g+i*c*g-n*m*j-n-d+k*b)%100;
         k -= (j+l+a*h*b-f-c+c+b+j-b+m)%100;
      }
      f -= (g-m*m*f-e)%100;
      e += (l+d*f-h+k-g*f+k*j-l*i+j+d)%100;
   }
   f += (h+f-l+a-j)%100;
   a += (d-n+f-n-h+d+g+g+f-m-d-n)%100;
   n -= (n-i+c-b-h+l-b*b-a-f+c+l+f-g)%100;
   g += (e+c+j-n+a)%100;
   b -= (e-k+l+c*n-h*i*f*n+m*h+l+h+b)%100;
   c += (b-b-n+h+g*f*k+n*m+l*k)%100;
   k -= (l-i-k-k+f)%100;
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
         g  = (h+j+l*i*b+f+a+n)%100;
         e -= (m+e*j+f*d+d+g+b-j+i-a+e-a)%100;
         l -= (m-f+k+h-k+k+a+m-f+i+l+a-f-k)%100;
         j += (h*m-e-k)%100;
         h -= (d-i-j)%100;
         h -= (n-j-f+k+d+e*l-i+h)%100;
      }
      else
      {
         while( ++WHILEcnt[39]%5 )
         {
            do
            {
               b += (b-l-g+d+e*g+m*a-e+b*j-n-h)%100;
               for( ; ++FORcnt[57]%5 ; )
               {
                  c += (f*f-l+l-a-c-e-b+n+f-f+g)%100;
                  h -= (e-k+f-m*m+m-g-c*m-i-l)%100;
                  k -= (c+m+i*j-i*k+e-f+b+m+f)%100;
                  b -= (e-g-a+n*b-k*k-h+k-f)%100;
                  k += (h-d-a+k)%100;
               }
               
               switch( ++SWcnt[19]%3 )
               {

               case 1:
               {
                  g += (b*l+f*b+m+d)%100;
                  a -= (i-c)%100;
                  g += (l+m-l+d-l+a)%100;
                  m += (f+d-h+k-j+d+g)%100;
               }
               break;

               case 2:
               {
                  a -= (l-e-a-b+l-i+d+b-k*j-k+f)%100;
                  i -= (i*k+g-d)%100;
                  i += (b-b+i+b-a+a+m-j*k+j+k+a-c)%100;
                  c -= (i*a-j+j-j+c-a+b+a+i-f)%100;
                  h -= (k+m+c+m+m-n-m-b+j+k+c+h-m-c)%100;
                  j += (h-i+m)%100;
               }
               break;

               default:
               {
                  a -= (d+g+n+m+l)%100;
                  h += (m-g)%100;
                  b -= (m+c-m-e*a+g+j-e+h+j)%100;
                  i += (n*a+n-h-l+j+h+l+g-k)%100;
                  e += (h+g+d*n-e-a+b-c+h+i-k+d+l*f)%100;
               }
               }

            } while( ++DOcnt[38]%5 );
            if( ++IFcnt[29]%10 )
            {
               if( ++IFEcnt[38]%2 )
               {
                  e += (m+k*c+m-f)%100;
                  d -= (c-h+g*h+m*i+k+e-k-m)%100;
                  b -= (n*b+e+f+m*j+l-b+a*h+k-m)%100;
                  i += (n-f)%100;
                  i += (n*f-i-g*i+n+k-l-e-f+e)%100;
               }
               else
               {
                  c += (a-c-k-c+b+d-f)%100;
                  m += (j+j+l-a)%100;
               }
            }
            while( ++WHILEcnt[38]%5 )
            {
               do
               {
                  m -= (m-j+d-c-n-i-e)%100;
                  f -= (e+m+i+m)%100;
                  n += (n-b-j+e*h-h*i-l+h-d-n)%100;
                  k -= (m*f-k+e-c+m+e)%100;
                  k += (l*j-i+f+i-c-m)%100;
                  n -= (j+a-b*h+k+j-i+c+e+e+i)%100;
               } while( ++DOcnt[39]%5 );
               for( ; ++FORcnt[58]%5 ; )
               {
                  e += (h+m)%100;
                  j -= (c+l+n-j)%100;
                  l += (m-j-n+h)%100;
                  i += (d+h*m)%100;
                  n += (j-i+d*i+c*e*e-h+h-j+c-k-k)%100;
               }
               for( ; ++FORcnt[59]%5 ; )
               {
                  j += (j-l-h+h-m+c)%100;
                  j += (g-b*g*l+d-k+m+b*e)%100;
                  h += (l+e*g+a-b+b-f+d+d)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  i -= (n+h+g*g)%100;
                  g -= (i+c-f)%100;
                  n -= (g*g-f)%100;
                  c += (a+d-e*e-n-e*m+d-b+c*n+e)%100;
               }
               else
               {
                  f -= (m*h+n+n)%100;
                  m += (n-c+c+l-c*g*f+h)%100;
                  d -= (k-h-n*l+h-b+l*l)%100;
                  e += (c+g-h+g-g*i+a-e*h)%100;
                  j  = (n+k*a-a+i-d+j-n-a+g*h+b)%100;
               }
            }
            j += (a*c*i*j+f+c)%100;
            b -= (j-c+e-k+i-c+n)%100;
         }
         d -= (n*h+n+e+l-g*d-d*c+h*d*c)%100;
         l += (n-c+j*i)%100;
         k -= (d-m-l-i)%100;
         i -= (d-h-f-c-m*k*a+k+n-m-m)%100;
         g -= (f-k+f+c*d-g*b+n-g)%100;
      }
      e -= (c+h)%100;
      j -= (b+k+f-h+c)%100;
      i += (f*n-n-j-f-n*e+g+d+f+g)%100;
   }
   m  = (m+j-h-i+n+f-f-c)%100;
   g += (g*i+l+c*b-m+g-m+j-h+l-j+d*b)%100;
   a += (j*j*d*c-l-m+b-g-m+m)%100;
   c += (a-m*a+k*c-c-k+l*c-d-e)%100;
   a -= (b+f+n+e-l*b-b)%100;
   j -= (a*f*f+c*b+e)%100;
   d -= (c+d-g+j+m+b-d-i)%100;
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
            a -= (i-m+a+d-i-a*f*f+h*m*e+c*f+i)%100;
            for( ; ++FORcnt[62]%5 ; )
            {
               
               switch( ++SWcnt[20]%4 )
               {

               case 1:
               {
                  m -= (b+g-l+i+i-j+j-g-k-e*d+k*k)%100;
                  c += (e*l*m+b-c-d-m+k+l*a+i+a+n)%100;
                  n += (g+b-h-d-f*a-m+b+l-g-g-b-j)%100;
                  a -= (d+m-g*c+i)%100;
                  d += (d-l+k+f)%100;
               }
               break;

               case 2:
               {
                  g += (d-i+i)%100;
                  n += (a-d*e-k+e+d-m-k+j)%100;
                  f += (g+f+i-l*l*h-g-i)%100;
               }
               break;

               case 3:
               {
                  f -= (l-l-j+j*f-d+c*j*l-b)%100;
                  b += (m+f+d-k-b+j-n-e+i)%100;
                  n -= (m-c+f-i-c*d-e-f+h-h+a+m+e)%100;
                  c -= (m*a+f)%100;
                  k -= (m*d-j+h+l)%100;
               }
               break;

               default:
               {
                  f -= (d+d-m+c-c+h-k+j+b+n+g)%100;
                  g += (n+i-b+i*k-m)%100;
                  m += (i-a+g-d-k*i-b)%100;
                  l += (d+j-g-b+c*c-f+f-n+m)%100;
               }
               }

               if( ++IFEcnt[41]%2 )
               {
                  h  = (c-b+g-k*j-f-h+j*l-d-j-l)%100;
                  e -= (k+c+a+e-j*c-g)%100;
                  d += (j+k)%100;
                  e += (c-f)%100;
                  l += (c-g+m-l*d+a)%100;
               }
               else
               {
                  k += (h+m*h-a-a-f-f+a)%100;
                  a += (g-n+n+n+a+f-i-a+i-i*h)%100;
                  i += (f+f+j-h)%100;
                  e -= (n-g*f-j-n-j-e-k*i-m+b)%100;
                  m -= (n+a+b-m*a-d-b+l+i+a)%100;
                  n -= (c+m+d+a-n)%100;
               }
               while( ++WHILEcnt[40]%5 )
               {
                  g -= (c-f*m*i+h-a+f-d+b-j+b)%100;
               }
               do
               {
                  j  = (n-k*k-h-m+j+a-j*d+m-a-b+k-n)%100;
                  k  = (h*a+m-f-h+n+k-i+i+n)%100;
               } while( ++DOcnt[41]%5 );
               for( ; ++FORcnt[61]%5 ; )
               {
                  a += (l-k-n+d+e*j+n+c+a*b+c-c-g-b)%100;
                  b  = (h-a-j*l+j+e+c*a-a+n+j*n)%100;
                  j -= (k*c)%100;
                  l -= (b*j*d-f+b*n+m+j*n)%100;
                  h += (k+l*j+f+a+l+b-j+c)%100;
               }
               if( ++IFcnt[30]%10 )
               {
                  j += (e-e-e*d-n)%100;
                  j += (i-i-n+l*j)%100;
                  h -= (d+a)%100;
                  b += (h-m+m-d+c+k*n-b-j*c+e*f+a)%100;
               }
            }
            for( ; ++FORcnt[63]%5 ; )
            {
               if( ++IFEcnt[42]%2 )
               {
                  d += (b+d*l+b+h-d-m+f)%100;
                  e += (b+a)%100;
                  j -= (h-h*l+b*b)%100;
               }
               else
               {
                  g += (h-b-g+a+j-h*n)%100;
                  l -= (m*h+i*b+h-j*h+m)%100;
                  h -= (j-h*f+c-d)%100;
                  f -= (n-f+a+n+g-d-j*e+c-a*j+l*j*e)%100;
                  l -= (i+f)%100;
               }
               k += (k-l-h-a-d*l-f+g-h+e+n+f)%100;
               b -= (i+c+d-a*l-m*c+n+e-a-h-d*i-h)%100;
               l += (k+j)%100;
               f -= (h-a)%100;
               k -= (f+k*i-e-b+l+f)%100;
            }
            k += (j*c-n+j-n-a+i-h*c-i)%100;
         }
         f -= (e-m*n+j-c+m-c*d-c-h)%100;
         n -= (l-h-h-i+c-n-j+i+c+d)%100;
         l += (h-h+j-k*n-a-k*l+b)%100;
         h -= (e-l-g+j+g+l+e+g+e)%100;
      } while( ++DOcnt[40]%5 );
      e += (a+i-b+b*d-e)%100;
      g -= (g+h-m+h-i*f-e*b)%100;
      h -= (f-k+j-i+l)%100;
      i += (h+e-j+e-j+j)%100;
   }
   k -= (l+n+j*c)%100;
   f += (k+g-j+f+c+a+m+c)%100;
   b += (d+g+b-e-a-m+i-a)%100;
   h -= (n*b+b-b+a+i+n)%100;
   d += (c+m+d-n+g+n-n+f*k)%100;
   g += (f+l-k+a+i+i-c+j+c+b*l+a*e-m)%100;
   d -= (i-j+m+l)%100;
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
         f += (m+e-d-j*g-g-e+m-m-n*j+e-l)%100;
         for( ; ++FORcnt[66]%5 ; )
         {
            
            switch( ++SWcnt[21]%3 )
            {

            case 1:
            {
               if( ++IFcnt[32]%10 )
               {
                  k += (k+d)%100;
                  i += (n*d-g+d+m-i-a+d+e+k-a+i)%100;
                  n += (b*c*j+a*a-j*i-c-m-m-l+a)%100;
                  h += (c+d+c+h-m-j-k+k+a*i-k-d+i)%100;
                  i -= (j-m)%100;
               }
               if( ++IFEcnt[43]%2 )
               {
                  f  = (j-f*e+m+d*m-a+e+j*n-e)%100;
                  k += (d-d-k-h*i-h+b)%100;
                  m  = (e-l*c)%100;
                  l += (e+e+a-i+i-j-i+l-e+j*m-l+f)%100;
                  b -= (a+e-h*n-l-j*b+b*h*i-m-k)%100;
                  e -= (e*h+e+m+n-d*l+n-j)%100;
               }
               else
               {
                  j -= (c+l-c)%100;
                  a += (i-j+e+g)%100;
                  a += (f+d-f+m+e)%100;
                  e -= (b-i*c-c+j)%100;
               }
               while( ++WHILEcnt[42]%5 )
               {
                  a += (e-f+c+d-l+g-b+a+g+i*l-c)%100;
                  m -= (l-d-k-n*e*a-j+b+h-c+l)%100;
                  a -= (g*e-l+f-l+e-f+h*l-g-b)%100;
                  h -= (h+j+g*h)%100;
                  f -= (j+g-h*h-k-c-h+f-m+d+a+f)%100;
               }
               do
               {
                  n -= (f-c-j-g)%100;
                  d  = (e-c)%100;
                  e  = (k+k-f+g-i)%100;
               } while( ++DOcnt[43]%5 );
               for( ; ++FORcnt[64]%5 ; )
               {
                  b -= (e+d)%100;
                  l -= (i-d-d)%100;
                  e += (n-l*l-g*l-a)%100;
                  j -= (n*g-k+l+m*h-b-g)%100;
                  g -= (j*l+h+g-b+i-b-c+d+k-i+b)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[65]%5 ; )
               {
                  j += (k+a*f-i+e*h-e)%100;
                  h += (d-m*f*l+e-n+d+k-g)%100;
                  d -= (h+k*b-h-d+a-a*e-h+i+h)%100;
                  a -= (l-h+c-l)%100;
                  c -= (i*n)%100;
                  n += (i*k+n+j*e-k*i*h+m+i*m-m+j+d)%100;
               }
               if( ++IFEcnt[44]%2 )
               {
                  l += (a+k*l-n+l-c*d-c+l-i)%100;
               }
               else
               {
                  l -= (i-b-e)%100;
                  i += (e+f-c+c-d+j-c-m)%100;
                  d  = (i+b-d+k+h+g-n+h-b+g+h+b*c-i)%100;
                  b -= (a*j-e-m*k-m-a+d-j)%100;
                  k += (n-j*n*e)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  j -= (e*m)%100;
                  b += (m*c+g*i-c+l*l-m*e*k+n)%100;
               }
               do
               {
                  n -= (e+n-g-k+h*l+a+l-h+h+i+f-k+h)%100;
                  l -= (a+m)%100;
                  n -= (h-b-l-b*f-m)%100;
                  h  = (g*j+l*d-m+l+k-b-e)%100;
                  n -= (m-g+n)%100;
               } while( ++DOcnt[44]%5 );
            }
            break;

            default:
            {
               if( ++IFcnt[33]%10 )
               {
                  n -= (e-g+k+b*e)%100;
                  h -= (d+j-k*m*f)%100;
                  g -= (n+l)%100;
                  b -= (e-f*h*i*a)%100;
                  h -= (a-d-c-f-j+b)%100;
                  f  = (e-i+d+k+k-d*c-c)%100;
               }
               m += (h-j*k)%100;
               n += (b+l-c+c+n-g+i+l+e)%100;
               a -= (g-m+l+j-f+l-i-c+e-i)%100;
            }
            }

            a -= (h-j-i-a)%100;
            m -= (j*i-l+e+d+b*e+e+h)%100;
            j  = (m+l+d-m-f-g-c-k)%100;
            g += (l*i-b)%100;
            c += (b-g*k-e+n*g+h)%100;
         }
         k -= (n+g-e+b*f-m+g-n-l*k+f-k*d)%100;
         l -= (i+j*m+k+h-b*k-b+k*l-e*l)%100;
      } while( ++DOcnt[42]%5 );
      l += (f-a+e-l)%100;
      h -= (g+m-i+n-d+n+f)%100;
      h -= (g+e)%100;
      g += (b*f-k+g+a-a+c+h+i*c-l)%100;
   }
   h += (d+m-b-h+e*h)%100;
   h -= (d+m-l+m-d-i-f*k)%100;
   j -= (e+n-l+d-k-n-j+d-a-g*a+e-a-m)%100;
   e -= (d+g-h*g+j-i+k*m+f-b*c+h+i+k)%100;
   g -= (j*e)%100;
   g += (j*l+j*g*m+c*d+e+b-k-n+g)%100;
   k -= (l*c*h*f*i-l)%100;
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
         h -= (f-m-a*k*k-j-g+m)%100;
         if( ++IFEcnt[46]%2 )
         {
            n -= (l*k-n*e+i+i)%100;
            l += (d+l)%100;
            m -= (j-k*j-n-c-m)%100;
            m += (j-h)%100;
            l += (k+i-i*e-n)%100;
         }
         else
         {
            while( ++WHILEcnt[45]%5 )
            {
               do
               {
                  i -= (h+k+g+j+m)%100;
                  b -= (n-g+j-a+l+b+l+h-i+a+g*k*f)%100;
                  b += (d-a-a-c-j)%100;
                  j  = (i*c-b-l-m-j+c)%100;
                  h += (k*i*h-a-g)%100;
                  b -= (d-k*j*f-c+d+k-i*a-b+c-l+n)%100;
               } while( ++DOcnt[45]%5 );
               for( ; ++FORcnt[67]%5 ; )
               {
                  b -= (k+l)%100;
                  h -= (l+n+e+j)%100;
                  i -= (h+a)%100;
                  g += (b-b-f-b-j+e*m-l*i+j)%100;
                  i += (i+n*k+n+n+a-f+k-c+h*c+d)%100;
               }
               if( ++IFcnt[34]%10 )
               {
                  g -= (h+j)%100;
                  a -= (i-d-i+l-d)%100;
                  a += (k*j*e)%100;
                  k += (g+m-l-g-j+b-l+e+a-m-c-m*d)%100;
                  i  = (g-a+g-k*l-a+l+a-i+k+i)%100;
               }
               for( ; ++FORcnt[68]%5 ; )
               {
                  h -= (n-d-m*k*i+h*d+l-e-j-h*c+g-j)%100;
                  c += (n+g-m*i+n-e*g+n)%100;
                  e += (a*e-f-a-e-j*a)%100;
                  i -= (a+i+e-l-b)%100;
               }
            }
            if( ++IFEcnt[45]%2 )
            {
               d += (i+h-b-i-c*l*l*i-d*m*a+l)%100;
               n  = (g*d*k+f+a-i+b*i*d+b-h*e)%100;
            }
            else
            {
               while( ++WHILEcnt[46]%5 )
               {
                  e -= (f+j)%100;
                  i -= (l+d-l-e+g)%100;
                  j -= (h-d-d-d*g-k+d-a-i-l*d)%100;
                  c += (j+k-b)%100;
                  j  = (c+l-e-n+c)%100;
               }
               do
               {
                  a  = (f*b*l-d-j)%100;
                  b -= (g+j*k*a+b+n+h*d)%100;
                  l += (e*e-f+n*h-l+e-h)%100;
               } while( ++DOcnt[46]%5 );
               k += (e-a-i-n-m+d-e*h*c+f)%100;
               for( ; ++FORcnt[69]%5 ; )
               {
                  n -= (f+k+i+b+c*c-j-i+e+i-c-c*e+j)%100;
                  m -= (k*c+l*c+j-l+d-n+n+g)%100;
                  d += (d+n+i+l*d-i*l*f*g-h*g)%100;
                  m += (d+j+f-m-g+g+k-l*c-f-h-e+f+c)%100;
                  l += (k*g+h-a-n*i-k)%100;
               }
               
               switch( ++SWcnt[23]%4 )
               {

               case 1:
               {
                  n += (i-m*l*e-k*m+e)%100;
                  f -= (i-f-b-k*n-d*n-n+m*l+h-n+l+k)%100;
                  f += (e-j-k)%100;
                  m += (k+h+f)%100;
               }
               break;

               case 2:
               {
                  g -= (l+g+g+e*g-b*n+a-c-l*c-a+k)%100;
                  f -= (b-l+a+j)%100;
                  b -= (a-a+j-h+l-a*c+i*n+c+l*c-d-f)%100;
                  b -= (j+a)%100;
                  h -= (c+a+e+c-h*i*g+b+a)%100;
                  m  = (j-h*h*m-d+f*f*k+d+a-d-e)%100;
               }
               break;

               case 3:
               {
                  i -= (h-i+a-j*k*k-n+a-f-k+m*f-l)%100;
                  n += (c+i-k-i*c-b*j-b+a)%100;
                  l -= (l-i)%100;
                  m += (h-c*g+e-b+e-f-c+g-i-i-k)%100;
                  n += (h-g+k-j*m+b+l)%100;
               }
               break;

               default:
               {
                  i += (n-n-b-g-c-n+j*k)%100;
               }
               }

               j -= (i-m-j)%100;
            }
            b -= (m+g-f*a-i-f-a+n*k*g+c+j+n)%100;
            e  = (k-i+l+g*c+h+g+e-j+b-j*g+e*j)%100;
            f -= (g-e-b-i+f-a-g-h+d+e+b-f-b)%100;
         }
         b += (d+n-d+l+d-c-b*e-k-g-f)%100;
      }
      d -= (b-e+g-e)%100;
      j  = (l+j+c+l-g-h-h+g)%100;
      a += (e-k-l+m)%100;
      f -= (j-b)%100;
   }
   break;

   case 2:
   {
      n += (d*d-d-m+m-i+e+n-c-c)%100;
      h += (j-c)%100;
      n -= (d+b-l*g)%100;
      l += (f-n+d-d-m-d)%100;
   }
   break;

   case 3:
   {
      l += (l-d+c+m-h+d+e+e+h*m+n*e+m)%100;
      e  = (b-h+a+f-j*e+e*b)%100;
      j -= (e+d*a+a*f*h+j+g+m-d)%100;
      a -= (g+i*e+e+e-h*n*f+g*c+d-i*f)%100;
      m -= (c+i+c+m-c*a+d+j+a+n+g+d)%100;
      e -= (k+j-l-h*i-b*b+l+n-b+a)%100;
   }
   break;

   default:
   {
      l -= (j-h-m*d+m-j-l+d-g-e-g+e*k)%100;
      k += (f*h-c-a-g)%100;
      l += (f+c-b-e+c+m-b-h+j-i-i+b+a)%100;
      c -= (c-b*n-n*a-a+l-l)%100;
      c += (d-b-e*c*d-b-f)%100;
   }
   }

   h -= (a+g)%100;
   g -= (k-h*e+m-k*n-a+j*l+c+c+i)%100;
   e -= (e+c-g+i)%100;
   b -= (i+k)%100;
   n  = (e+h*b+j-i+a*j+e*a+d-h-b+g)%100;
   b += (i-j-c+e-j)%100;
   l -= (m*d+d-l-b+b-m*n+b-f)%100;
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
         m -= (a*h-d-d-f+n+n+j*h+n-l+f)%100;
         i += (k-i-c-g+b)%100;
      }
      else
      {
         while( ++WHILEcnt[48]%5 )
         {
            do
            {
               for( ; ++FORcnt[71]%5 ; )
               {
                  l -= (c+b)%100;
                  h  = (h*j-h+j+a)%100;
                  l += (c-l-l+h+d+b+i)%100;
                  c += (n+g+h-n-a+b)%100;
                  c -= (n-c)%100;
               }
               for( ; ++FORcnt[72]%5 ; )
               {
                  e  = (i*g-a)%100;
                  a -= (n-b*a+a-m)%100;
                  h -= (i*b-c+d-c-g+b+e+e+i-k+f)%100;
                  j -= (g*e)%100;
                  n -= (m+b+g*j*i-l+l-d-g-h-l-n-n-b)%100;
               }
               if( ++IFEcnt[47]%2 )
               {
                  j -= (k-l*n-m-l)%100;
                  l -= (b*h-c+d-l+l+g+b*f*g-f+l-e-m)%100;
                  b += (l+e-a*b+e+e-f-a*e)%100;
                  k += (c-f-f+j+m-h*d-n-m-l+d-g+a)%100;
                  h -= (m*e-j)%100;
                  f -= (l+b+f-a-g-f-k*j*f*h-i-j+b)%100;
               }
               else
               {
                  l += (b-m*e-g)%100;
                  k -= (m+j+k-c-a+f+f)%100;
                  n += (h+g-l+d+a+b-e*c+d-i)%100;
                  h += (g-l+c+g*f+n+b+m-c-e)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  g -= (e+b*l+a*g+b-a-k)%100;
                  g -= (f-c+n*d*n+h+e-c*e-m-h)%100;
                  f  = (i-d-k*h+b)%100;
                  d += (d*a+f-f-n+h)%100;
                  f += (l+m+l*h-e+d-a-e+b+f)%100;
               }
               do
               {
                  g += (a-j)%100;
                  j += (i+c+e+c+i)%100;
                  a -= (i-f+l-i+c*h*c-l+d+e*n)%100;
               } while( ++DOcnt[48]%5 );
               if( ++IFcnt[35]%10 )
               {
                  n -= (g+a)%100;
                  e += (g-n+l*b*l-b+i)%100;
                  i -= (k-l-k-c+n-j+h*f+a-f)%100;
                  f -= (g*h+a+k*n-h-k+n+b-j+e-b)%100;
                  e += (l*e+e-c+n+d+j)%100;
               }
            } while( ++DOcnt[47]%5 );
            i -= (e-e+f-i)%100;
            for( ; ++FORcnt[73]%5 ; )
            {
               
               switch( ++SWcnt[24]%3 )
               {

               case 1:
               {
                  f += (e-h+b)%100;
                  d += (e+i-b-k+j-f+c+g+d)%100;
                  f -= (j-l+b+e*h*k-d+f-e-m*i-j-n-e)%100;
                  c -= (a+m-g+e+g+j)%100;
                  i += (g+m+l+g+e-m+h+n)%100;
                  e -= (h-h+h+i-a+h-h-c*l+g+c*n+c-f)%100;
               }
               break;

               case 2:
               {
                  h  = (l*l-f*l-i+a+c-e-i-k)%100;
                  f += (c-l)%100;
                  m += (l-i)%100;
                  k -= (i-k*h*e)%100;
                  g += (c+b-j+a+h-l-a*j+b-m+e+b)%100;
               }
               break;

               default:
               {
                  k += (c-d-d-g*l-d-e+c+k+k-j+a-m)%100;
               }
               }

               n += (j+l)%100;
               i -= (f*b+k-g)%100;
               d -= (m-j+m+n)%100;
            }
            l += (j-j-k+l+h*b+l*l+j+d-c-h-k-n)%100;
         }
         n  = (l-j-b-k*m+g+e+a+i)%100;
         l -= (m-c-d+e+c*c*e)%100;
         m += (e+i*f+k-h+i*d+i-g-m-m-n)%100;
         i -= (j+d+l-a-l*a)%100;
      }
      n -= (n+c-h+j-g*k+f*j-i+d+g)%100;
      b += (d-i)%100;
   }
   m += (h-e-g*i*m*j-j-m+n+h*g+d)%100;
   a += (d-m-d+d-f+e+c*n+a+a*m-h-m-f)%100;
   e -= (m+e+l*e+e*d-n-j+h-k+g)%100;
   k -= (f-g-c+e*d+d+g+n+i*m)%100;
   l -= (j*g+a-i-m*i*n-k+e-m+f)%100;
   d -= (c-b*h+l+a+i)%100;
   f -= (j-k-h+g-e*c*c+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F23(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[50]%2 )
   {
      d += (d*n-k*n+g*h+m-m*f*m-j-g-n)%100;
      g -= (h+a+e+g-g-n*k+j-m-i+i)%100;
      a -= (a+m-k-c+n*c+b+n-h-d-n+d-m*k)%100;
      e += (e-k-g+m+h-g)%100;
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
                  f -= (k+h-k*l*l*j-f+d-f-i*f-c+b)%100;
                  i += (m-a-j-g-b+h)%100;
                  e -= (k-i-j)%100;
               }
               for( ; ++FORcnt[74]%5 ; )
               {
                  n -= (a+g)%100;
                  b -= (b-i+n*k+a-d-i+j)%100;
                  n -= (b-d-l+g+a)%100;
                  e += (g+n*e+b-a-h+h)%100;
                  i += (g-c)%100;
               }
               if( ++IFEcnt[49]%2 )
               {
                  l += (a-e-n+i+e-m)%100;
                  h += (i*b-e*k+g-b*l-d*m-j+l-j+d)%100;
                  d  = (l+c-m-n*m+g-n-m-l+m+b+h*b)%100;
                  g  = (g*e+c+i)%100;
                  g  = (e*k*b+c-c-g+a+c)%100;
                  n += (b+e*d-l+j*k+c-k)%100;
               }
               else
               {
                  n += (n-h)%100;
                  k += (e+f)%100;
                  g += (i*j)%100;
                  e -= (i-m*h-h+a)%100;
               }
               while( ++WHILEcnt[49]%5 )
               {
                  g -= (f+j+i)%100;
                  j += (h-l-b-d-a*d-h-n)%100;
                  c -= (m-d-b)%100;
                  e += (i-d-i+m+c)%100;
                  m += (m-h*l-j+e-j-k+c)%100;
               }
               do
               {
                  h += (i*f)%100;
                  c -= (c+b*e+i-g+g*l+d)%100;
                  a -= (h-d-k*b-b-k*d+j-g-d+g)%100;
                  i += (l-i+n-j-h*m*c-c+i+e-g)%100;
                  m  = (g*n)%100;
               } while( ++DOcnt[50]%5 );
            }
            m -= (j-e)%100;
            for( ; ++FORcnt[76]%5 ; )
            {
               
               switch( ++SWcnt[25]%4 )
               {

               case 1:
               {
                  g += (g-c+c+j-i-g+k*g+e-g*b)%100;
                  e -= (m+d+b-c*g*k-c+j-a+j+j)%100;
                  n -= (a-c*l-a+b+n+g)%100;
                  h  = (j-k+d)%100;
                  a -= (d*i+b+j)%100;
                  i -= (b-g-g-k+a*m+i+l+i*i*j+f-n)%100;
               }
               break;

               case 2:
               {
                  l -= (f+l+i*d-k)%100;
                  a += (e-j-g*d+e-n)%100;
                  f += (h+e-b*m*a)%100;
                  f += (k-h-i)%100;
                  a += (k*l)%100;
               }
               break;

               case 3:
               {
                  h  = (m-c*c)%100;
                  i  = (a-n-d+b+n+l*l*h+a-k+d+e+k-k)%100;
                  a -= (j-g)%100;
               }
               break;

               default:
               {
                  m += (c+n-g+h+n+h*d+m+f)%100;
                  h += (k+c*k+g)%100;
                  h += (c-l+j*b-h-i-f)%100;
                  e -= (d*l*k)%100;
                  i += (a+l+n*n+n-d+d+n+k)%100;
               }
               }

               n += (l-l+f+i-h-j-g+n+b-d+i)%100;
               c += (m-l+i+n-n-c-h+i-l+c-d)%100;
               a  = (n-k)%100;
            }
            k  = (b-i+m*n+e+l-g+g+h)%100;
            g += (c+i*a*f+l+d)%100;
            l  = (e*f-e-e+c-d*c+c-c*b)%100;
         } while( ++DOcnt[49]%5 );
         j -= (c+i+b*e-l*m+l*c*i-m*j+d)%100;
         i -= (j-m)%100;
         i += (k+c+l+i-f*k+l+l+h+g-f*b-n-c)%100;
      }
      m += (g-m-i-f+a-e+l-f-i-c-l)%100;
      n -= (l+k*e+m-h-h+c-g-i-f*b-d)%100;
      f -= (d+g-l+b+k+e+f-c-m)%100;
      d  = (i+f)%100;
   }
   c += (c*b-a*g+j+h-g+c)%100;
   n += (j*e*g+i-h+n*d+a*a+n+e+d)%100;
   c -= (a-a+l*h+l+m-k+e-l+b)%100;
   e -= (f-m+m-m+h+n+a+g-f-f*j-h+h)%100;
   k += (f+k)%100;
   l += (h*n-h)%100;
   i -= (l-l+i-j-i+m+b-a+d-l-b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F24(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[39]%10 )
   {
      if( ++IFEcnt[53]%2 )
      {
         a -= (d*d)%100;
         b -= (d+i-c*b+f+b*m+k+h-e)%100;
         h += (l+j-e+k+k-f-c+f+c+m*i-l-a)%100;
         g -= (g-e-e+m+c)%100;
      }
      else
      {
         while( ++WHILEcnt[51]%5 )
         {
            do
            {
               for( ; ++FORcnt[77]%5 ; )
               {
                  g += (n+i+g+c*c)%100;
                  k -= (n*d+a*f-g)%100;
                  m -= (i+e+b+i-c-i+i+j*k+b-b+m+l-c)%100;
                  f -= (h+m+h-n+n*c*l-g+b+a-m+g+c*b)%100;
                  j -= (e*e*g-n+i+a+a+n-e-d-b+b-k)%100;
               }
               for( ; ++FORcnt[78]%5 ; )
               {
                  h += (a*m+k)%100;
                  k -= (b+a-i-l)%100;
                  i += (m+g+a)%100;
                  d += (i-c+j*f-i-a-d-b-c)%100;
               }
            } while( ++DOcnt[51]%5 );
         }
         if( ++IFEcnt[52]%2 )
         {
            g += (d*j-k*e+g+c*a*k)%100;
            a += (b-e+k+j+g-m-l*l+l)%100;
            c  = (g*c)%100;
            d -= (d-e+l+b)%100;
            c -= (k+m+f+i)%100;
         }
         else
         {
            while( ++WHILEcnt[52]%5 )
            {
               do
               {
                  g += (e*k+n-k*l-g*e*e)%100;
                  m += (g-i+a)%100;
                  i += (a+h-e-e+h+h)%100;
               } while( ++DOcnt[52]%5 );
               if( ++IFcnt[38]%10 )
               {
                  j += (a-e*k+l+g*d*m+n+d*n-a)%100;
                  e += (a-l-g*m)%100;
                  m += (c+d*k+k*i-l+c-n-d+e-e-e)%100;
                  b += (g*l+h+i-a+l-b-l-e+b-h+e)%100;
                  i -= (b-g+e*i+c-l)%100;
               }
               h -= (e+c-a+g-e+l-i-l+e*k)%100;
               for( ; ++FORcnt[79]%5 ; )
               {
                  b += (n-m-k*g-n-k-i+a-b-j+b-e+a)%100;
                  a -= (f-n+f-m-f+f)%100;
                  h -= (n+g*g*m+n-l-b)%100;
                  a += (n*b+m*l+d+d+f+e-k+f*a-g+i)%100;
               }
               
               switch( ++SWcnt[26]%3 )
               {

               case 1:
               {
                  m += (m-g)%100;
                  i += (k-m*k-i+g-k+i)%100;
                  j -= (j+g+e*j)%100;
                  m -= (c+c+e*d-d+g*i)%100;
                  l  = (e-h-e+e-i+i*m*f-e)%100;
                  d -= (f-j-l+n+b-c*m-e)%100;
               }
               break;

               case 2:
               {
                  g -= (f*l-c-a-m-h*n-h-n+f-n)%100;
                  l += (a-j-c+i+e-g-k-a+c*b+a)%100;
                  a += (i-j+a*j-d-b)%100;
                  j  = (j+j*d-m-g-h-k*g+i+e+g-i*k)%100;
                  b -= (n-l)%100;
               }
               break;

               default:
               {
                  k  = (a+l*g-l-g+d-d-j-i-f-m+g-e+n)%100;
                  e -= (i*m-n-i+k*c-l*b-j+a+n-e-j-k)%100;
                  d -= (h-m+e*g+d*c-a*c-l+d-c-l+e)%100;
                  i += (j+l+m-l)%100;
                  i += (a-k+e-d+f-l*f+i*i+h-l*g)%100;
               }
               }

            }
            if( ++IFEcnt[51]%2 )
            {
               f -= (g+l+e+a-f*e)%100;
               n -= (h+i-b+c-f)%100;
               g -= (d-l*f-m+n-k-j+e-c*k+j-c*a)%100;
            }
            else
            {
               while( ++WHILEcnt[53]%5 )
               {
                  g += (g+i-l)%100;
                  d -= (b-e+n-f+n+k-d-f)%100;
                  i += (d-b-d+h+n+a+i-j-m-c-n)%100;
                  g -= (g+k+f+j*h+d-l-e-f-k-g+b+f-e)%100;
                  d -= (i+b+b*i-d-k*m)%100;
                  k += (j+m+n*m*b+f-j-n+l)%100;
               }
               do
               {
                  e += (l*b*e*n+n*c+j-c+l)%100;
                  g += (c+n+f-h+h*k*j+c-a*j+a*i)%100;
                  a -= (l-j+f-i+n*i+h+e)%100;
                  h  = (a-b-e-g+g-f+f-i+f+d-b-h*a+e)%100;
                  k -= (g-d+k+n-i*f*k+j-j+i-b)%100;
               } while( ++DOcnt[53]%5 );
               k += (i-e-e+c-l-d+a+h-g)%100;
               i -= (b+l)%100;
            }
            h += (c*h*h+f-g-b+g+d-j)%100;
            e -= (c*a-j*n-g+f+l+d*h*f-h-f)%100;
            g += (d+i+d)%100;
            k -= (m+i)%100;
         }
         g -= (k+e-d+h*k-b-b+b-h-a-d+n)%100;
         c -= (i-i)%100;
         i -= (j+c)%100;
      }
      j -= (k-e*g+m-e-n-n*h)%100;
      a -= (f+d*k+f-j-k-g-j-d+n-e)%100;
      f -= (j-n+i-m+j-i-i*h+m-a)%100;
      l += (c-g*c+m+k+f-k*k-g+k+h+h)%100;
      h -= (k-a)%100;
   }
   e += (n+f-k-h-j-h*l+c)%100;
   f += (m-i-a+b-j*m-h-n+d+b-k+b-l-m)%100;
   l  = (k+j+l*a)%100;
   f -= (n*h-c*i+c-m+m-k*d)%100;
   b -= (h-m*n-b+g+m-d+c-k-g+d+f)%100;
   e -= (e+i)%100;
   j -= (c+b-h+n*j+e*n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F25(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[82]%5 ; )
   {
      if( ++IFcnt[41]%10 )
      {
         for( ; ++FORcnt[81]%5 ; )
         {
            if( ++IFEcnt[55]%2 )
            {
               b += (f+l)%100;
               for( ; ++FORcnt[80]%5 ; )
               {
                  l -= (a*g*e+i-f-a-n+b-h*l+k+g-l-f)%100;
                  b -= (h*b*m-n+e-a-g-i*l-g+b-f+e)%100;
                  g -= (e*c+c*n*b+j*e-k)%100;
                  b -= (m-c+m-e+h-k*b+l*g+k)%100;
                  c += (a-j-a-d*l-f+i-i)%100;
               }
               
               switch( ++SWcnt[27]%4 )
               {

               case 1:
               {
                  k += (l-e+k+b*m+l-e-h-d-e-d)%100;
                  l += (n+d-h+a)%100;
                  n += (e*m+h+l-h+h+m-h+h)%100;
               }
               break;

               case 2:
               {
                  g -= (d+a-d+h-e+k-b+d+c+l+l)%100;
                  f -= (c*i+a*b*e-c)%100;
                  a += (h-h-l*n*m)%100;
                  n -= (m-e*a-b-e-m+h+b+d+a-f+j-g-f)%100;
                  c -= (k+m+d)%100;
               }
               break;

               case 3:
               {
                  a += (j-j)%100;
                  j -= (d+f)%100;
                  m += (a+l+c)%100;
                  g -= (f-i*n+a+e+n+m*h-m*b+n-n-j-b)%100;
               }
               break;

               default:
               {
                  k += (c*g+f)%100;
                  i += (m-j*h-b+a-j+f+h-g-i+h)%100;
                  d  = (i-l)%100;
                  d -= (e*f-j+n-e*i-a-a-i+d)%100;
                  i  = (n+n+k+e+h)%100;
                  e += (d*k*c*c*g-e+j-b)%100;
               }
               }

               if( ++IFcnt[40]%10 )
               {
                  f += (b-h*n-d)%100;
                  d += (n+h+l-m-j-n+m)%100;
                  h -= (m*k+g+j+e+c*g+h)%100;
                  e += (f-n+g+a-n*d+f)%100;
                  d -= (d+m+d*j+a-j*m)%100;
               }
               if( ++IFEcnt[54]%2 )
               {
                  h += (d*a-g+e+c*j-c+k+b+g-c*j+d)%100;
                  a  = (n-b-g-e)%100;
                  n -= (m-h-h*i*i-h)%100;
                  d += (e+j-a+m*i+i-n+n*g)%100;
               }
               else
               {
                  f -= (d+b*b+g*d*e+d+a-k)%100;
                  d -= (d-b-l+j+l+l-f-c-k-a)%100;
                  k += (h+m+l-k*l*d-e-c-j-k)%100;
                  m -= (b-b-e)%100;
                  k += (g-f)%100;
               }
               l += (d+i)%100;
            }
            else
            {
               while( ++WHILEcnt[54]%5 )
               {
                  e  = (m+b-a-h-f+i+h+k)%100;
                  a += (f+g-b+j-a-m+l+e-m-i+a+d+a-g)%100;
                  f += (k+n-c-b)%100;
                  d -= (d-h+l-j)%100;
                  j += (l+c-k-i*n-h-l-a+f+f-e-a+e)%100;
               }
               do
               {
                  j += (d+m)%100;
                  e += (m+c*n-e-c+m*n)%100;
                  h -= (d-b)%100;
                  n += (n-i+l+b-j-k+m+i-h-l)%100;
               } while( ++DOcnt[54]%5 );
            }
         }
         d += (f-g+k)%100;
         j += (b+f+j-k)%100;
         i -= (e+j-n+i*j+l+g-i-n*j*j*l+j+m)%100;
         h += (a-b+i-j+h*n+j)%100;
      }
      j += (j-g)%100;
      n += (d+c-g-n+h*g)%100;
      k += (g-g-g+n*l)%100;
      d += (g-d*i+m-a-b*n*a-m+l-e-e*i)%100;
      l += (e-l+h+g-f-a+c+d-b)%100;
   }
   l -= (c+j*g-i*a)%100;
   l += (h-j+l+e-l-l*k*i)%100;
   i -= (c-a*m-c+n)%100;
   g -= (l-b*d+l+g*d*i-n*l-c-k*k-c)%100;
   e -= (n*a-b+m*f+a-g+j-j*g+b+i-c+b)%100;
   f += (a-l-j)%100;
   f += (f+n+h+d+h-n-l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F26(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[57]%5 )
   {
      do
      {
         for( ; ++FORcnt[85]%5 ; )
         {
            for( ; ++FORcnt[83]%5 ; )
            {
               if( ++IFEcnt[56]%2 )
               {
                  k += (k*d+k-k-n-i+n)%100;
                  m -= (c-c+f)%100;
                  a -= (m*i+d-i-n)%100;
                  d  = (c+e*d+l+k)%100;
                  j  = (j-e*j+n-i-f-h-d+i*b+f+h)%100;
                  c -= (h+b*j+l-g*m+b+d+e-i)%100;
               }
               else
               {
                  k  = (j+f+b-g*k)%100;
                  m += (m*c*n-f+e*m-b-c*i-b-c)%100;
                  j -= (h-c+h+j-c-n*c+h-b*g+c)%100;
                  h += (n+m+e-h*l*e-f-m+h)%100;
               }
               while( ++WHILEcnt[55]%5 )
               {
                  d += (i*l+b-k-d*a-f+a-g+m)%100;
                  h -= (j-h+i+e-b-a-f+e*c+d+h+n)%100;
                  h -= (j+l+a*a+g)%100;
                  i += (a-m-k+j+b+n+g)%100;
                  g += (g+f-g+e*j+g-c*j+g*k+d+l-l-a)%100;
               }
               do
               {
                  g -= (j-f-l-c+g-d-i*e*b-b-a-h+f-i)%100;
               } while( ++DOcnt[56]%5 );
               if( ++IFcnt[42]%10 )
               {
                  n -= (c*c-m-e-i-m-f*e-g)%100;
                  j += (h-n+c-c-n+l+b-j*c+g)%100;
               }
               m += (d+f*i+l)%100;
            }
            for( ; ++FORcnt[84]%5 ; )
            {
               
               switch( ++SWcnt[28]%3 )
               {

               case 1:
               {
                  i -= (c+n)%100;
                  j += (n-n+c-n+k-h+g+g*e)%100;
                  c -= (l-n+d*f-a*j)%100;
                  a -= (j-f-i*e-j*a+e-j*b-n+l)%100;
               }
               break;

               case 2:
               {
                  f -= (k+f)%100;
                  a += (i+h+b-f)%100;
                  c += (e+g+l-f*g)%100;
                  f -= (a+g)%100;
                  i += (g*h-d-l*i-m+e+m)%100;
                  m += (c*f+a-j-h)%100;
               }
               break;

               default:
               {
                  d -= (a*k*a-e*l-l+d-l+k+c)%100;
                  e -= (k-k+k)%100;
                  m += (g-m+i-b+a+d-d*l*d-d+h+n-e+h)%100;
                  g += (m-d)%100;
                  i += (g+h)%100;
               }
               }

               if( ++IFEcnt[57]%2 )
               {
                  f -= (b*n+g+e+d*b-d-b-h)%100;
                  i -= (c+g*b)%100;
                  n -= (b+l+f+f)%100;
                  k -= (c+h-a+n+k-g+h+e*f+l+l-a)%100;
                  f  = (j+f*c+l*i+b+f+f+j*b)%100;
               }
               else
               {
                  a -= (e-c+l-h-e)%100;
                  c += (i*j*i+c+m*f)%100;
                  d -= (m-i*h-a-g+i*i*b)%100;
               }
               while( ++WHILEcnt[56]%5 )
               {
                  i += (j+b+m+b-k-c+b)%100;
                  f += (m+g*a+d-h+e+b-c+m+n+m-a*j)%100;
                  b += (i*i+g)%100;
                  a += (m+m-h-b-m-i-i-i+g+k+e*d)%100;
               }
               do
               {
                  f += (a+g+d*k+f+k+m+f+g-n+g)%100;
                  a -= (c+m+n-b+n+a*d-g+m+n-i-a)%100;
                  k -= (i-e)%100;
                  f -= (g+l+h+j+d*n+m+c-m-d-i-f)%100;
                  c += (h-e+b-f*b+c-c-b*n)%100;
                  f -= (e-i)%100;
               } while( ++DOcnt[57]%5 );
               i -= (l-b-n*e-f+c+l*i*i)%100;
            }
            m += (c-a-k-j)%100;
         }
         i  = (k+h+g+i+f+j+i*g+l+b+i*d+c*h)%100;
         i -= (b*l-k+a+d-k-h+a+g)%100;
         n += (c*b+b*c-c*k)%100;
         c += (e+l+c)%100;
      } while( ++DOcnt[55]%5 );
      h -= (l-n-f*a)%100;
      j -= (g*h)%100;
      c += (d*i*g-f*e+a-m)%100;
      e -= (c-k+f-m+h*g+b)%100;
      e += (l*d+f*k)%100;
   }
   c += (b+h+n)%100;
   l += (h*b*b*c-l+d)%100;
   n += (n+h)%100;
   a -= (g*h-m*a+d+f)%100;
   k -= (b+f)%100;
   i += (e+d*c-a)%100;
   h -= (h*l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F27(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[90]%5 ; )
   {
      if( ++IFcnt[44]%10 )
      {
         for( ; ++FORcnt[89]%5 ; )
         {
            if( ++IFEcnt[59]%2 )
            {
               if( ++IFEcnt[58]%2 )
               {
                  c += (b-g+f*g+f+k+k*g+m+g+k)%100;
                  n += (e+f+b+f+e*k+d*e-e-j+c)%100;
                  i -= (k*m)%100;
                  n += (m+k+l-l+c-d+l+j-k+a+m)%100;
               }
               else
               {
                  b  = (n-b)%100;
                  i -= (a+b-e-n+b+a-c*b+l+n*f+i+a-e)%100;
                  a += (i*g*k+i-f+m)%100;
                  k -= (l+k)%100;
                  a += (h+m-e)%100;
               }
               while( ++WHILEcnt[59]%5 )
               {
                  h -= (k+l*j+a+n+c*h+c)%100;
                  i += (f-i*l*j*i+b+g*n+g-i+j-l)%100;
                  h -= (d+n+n*h+k+f-j)%100;
                  i += (n+f-f+c-m)%100;
                  k += (l*m)%100;
                  b -= (d+j-h*k+a+n-g+l-h)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[58]%5 )
               {
                  i += (c-e+h*n)%100;
                  k += (b-d)%100;
                  j -= (f+j*c-n-i-c-f)%100;
                  j += (b+l-a+c)%100;
                  i -= (k-c-l-m+f+c-i*d*e-b-c-l*h-a)%100;
               }
               do
               {
                  a += (h+h-d*h-e)%100;
                  k += (l+f-c-f+i+i*c-k-g-l)%100;
                  g += (l*f-c*h*i)%100;
               } while( ++DOcnt[58]%5 );
               n += (m+g+b-m+i-g-i+l)%100;
               for( ; ++FORcnt[86]%5 ; )
               {
                  a += (e-f)%100;
                  f -= (n-e+h+j-e-n-m-h+h-k+g-i-a)%100;
                  f += (l+a*c-l+n-k)%100;
                  m -= (l-i*d+c+l)%100;
                  a -= (m-l-i+h+a)%100;
               }
               
               switch( ++SWcnt[29]%3 )
               {

               case 1:
               {
                  l += (l-c+l-m-j*b*j-n-f+m-c*n-k*k)%100;
                  j += (a-f+j*a*e-e*f*a*n*c*k+m+n)%100;
                  d += (k+m+d-k+d-e)%100;
                  n -= (d+f+k-e*n-h-g+k+l)%100;
               }
               break;

               case 2:
               {
                  j += (i+e)%100;
                  e += (g-n+l-e)%100;
                  g -= (d-a+b+i-l)%100;
                  b -= (c+c+a)%100;
                  i += (m-b+i*b-e+a+h-b-b+b+d*k)%100;
                  j += (g*k+c*d-g*n+l-m-f-i)%100;
               }
               break;

               default:
               {
                  a -= (h+d+e-k+m+c-d*m*e*m-c+h-k-b)%100;
                  n += (l+b+d)%100;
                  g  = (k+m+d*h-f*l+l)%100;
                  c += (f-m-c-b*j+e)%100;
                  m -= (m*k)%100;
               }
               }

               if( ++IFcnt[43]%10 )
               {
                  l -= (j-n+k+a*a-j+d-n-k*d)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[87]%5 ; )
               {
                  f -= (h-c-j*g*h+g*k-e-i*k+b*k-h+e)%100;
                  e += (c+e+c*a*h*k-b-n-h)%100;
                  f += (c+c+j)%100;
               }
               for( ; ++FORcnt[88]%5 ; )
               {
                  h += (k+b-f*c-g+a+f+j-n-k+f-f)%100;
                  c -= (c+d-b+j)%100;
                  k += (h-c+k+n-h+i-i-c*b)%100;
                  n -= (i*m-b+a-j+n-i-c+i)%100;
                  i -= (l+a-f+h-g+g*b+m-g)%100;
               }
               n += (c+h+j*f*b-g+f)%100;
               h -= (h+g*c+l-g+e+f-m-c)%100;
               m -= (h-b+a+d-k*h*e+k-c)%100;
            } while( ++DOcnt[59]%5 );
            h  = (b*i)%100;
            d  = (f+a+i-g+c)%100;
         }
         g += (i+k-m*g-f*e*i-n*a+n)%100;
         k -= (n*k-h-j)%100;
         n += (d-e)%100;
         j += (g-b)%100;
      }
      h += (d-f-d-g+b-l-n-n+h+j+a*d-j*h)%100;
      i += (m+a+k*a-n*h+j+j-l*c)%100;
      n -= (k+f+j+e-e+e-b-f+c-b*j+c*k)%100;
      i -= (k+d-e-i+f*e+g)%100;
   }
   k += (k-c-e-m-n*m+i-c+e-h*b*j*l+c)%100;
   a += (l-e-d-f*f+k+k+m)%100;
   e += (c-l+c+h+g+i-m)%100;
   a -= (a-e)%100;
   k += (f-f-m+n)%100;
   m += (b+b+e+b-b+k-a+n*b)%100;
   j += (m+k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F28(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[62]%2 )
   {
      n += (c*d+n-m*k-h+a*e-m-i+k-m+g-m)%100;
      h += (i-e+n+f-h-f-b-h-i)%100;
      a -= (c-f*i)%100;
   }
   else
   {
      while( ++WHILEcnt[61]%5 )
      {
         do
         {
            if( ++IFcnt[45]%10 )
            {
               d -= (j*k-l*k*n*j-h+g-d+f*m+g+d*e)%100;
               for( ; ++FORcnt[91]%5 ; )
               {
                  b += (h*a)%100;
                  e -= (h-g-a-e-m*g-d)%100;
                  a -= (c+c-l+i+l+e+e-b-g-d-l+a+e)%100;
                  l -= (i*a-i*a-g+e-b-c*n-j+a-b+b-k)%100;
               }
               
               switch( ++SWcnt[30]%4 )
               {

               case 1:
               {
                  k += (g-i-j+e+a+d*c-j*e*g+g+c)%100;
                  n  = (b-b-a-i+k+l+g+l-b+a)%100;
                  g += (c*f)%100;
                  b += (c+h-n)%100;
                  k += (h-d+l)%100;
                  m -= (b+i-k+h-d+l-a*f)%100;
               }
               break;

               case 2:
               {
                  n += (e-h-c+d-g+m+h+a+f*c-m-n+j+c)%100;
                  n -= (e-a-m-h)%100;
                  b += (n+c*j-e+k+f)%100;
                  c  = (f*h)%100;
                  n += (l*a)%100;
               }
               break;

               case 3:
               {
                  b -= (j-i+j+g-e+i*b*n-f)%100;
                  m  = (j-e*m*k*e)%100;
                  j += (d+h+f+n-a-a+k)%100;
               }
               break;

               default:
               {
                  b += (a-j-l-i)%100;
                  i += (n+f)%100;
                  n -= (d+g*e+e+f-m-j+j*j+a-n*c-a)%100;
                  f -= (k+c-k*g*f-a-m*f+j)%100;
                  n -= (e-d-a+f+b)%100;
               }
               }

               if( ++IFEcnt[60]%2 )
               {
                  a += (c-d+l+m)%100;
                  g += (e-h+i*i-f+k*n+f*b*c-n)%100;
                  e += (i*m+e+f*h)%100;
                  c  = (k-i+h+i+n)%100;
                  i -= (i-k+j+b+m+b-i)%100;
                  h += (l+d-n*b)%100;
               }
               else
               {
                  d -= (e+d-a+m*e-m-j-j+h+d-j+i)%100;
                  j -= (j*j+b*c+n+l+m*e*n+c*i)%100;
                  c -= (l*m-j-g+k*b*m*e-n)%100;
                  d  = (e+l*j*b*h+i+k*j+a+l)%100;
               }
               while( ++WHILEcnt[60]%5 )
               {
                  l -= (d-c-l)%100;
                  j -= (k+i)%100;
                  l += (j-f+b-h-f+m+l*a-i+g+a)%100;
                  a -= (h*i+a*n*b)%100;
                  k += (f+c+d-j-b-c-j*i+j+h*b-c-k*i)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[92]%5 ; )
               {
                  i -= (b-a-k+c)%100;
                  f -= (k-j-a+d+f-h-f*b*f+b+l-n-n)%100;
               }
            } while( ++DOcnt[61]%5 );
            if( ++IFcnt[46]%10 )
            {
               for( ; ++FORcnt[93]%5 ; )
               {
                  j += (l-b+b+i-b+l)%100;
                  i += (j+i)%100;
                  d  = (f+e*k-l-l+h+h-n*a-b*j-j)%100;
                  m -= (a-f-g-d-e*l-e*k)%100;
               }
               if( ++IFEcnt[61]%2 )
               {
                  h += (f+m)%100;
                  g += (h+f*h)%100;
                  j += (f-a*a*m*h)%100;
                  i += (l-j-g-f-n-l-a*n+d-g+l+e*h-j)%100;
                  j += (k-j+g+c)%100;
               }
               else
               {
                  e += (m+g*d-d-d-c-f)%100;
                  j += (b-g+a*i*k+n-d-j+a)%100;
                  i += (h-h+d)%100;
                  f -= (m+a+d+f*n)%100;
                  m += (k+g*j-c+h-e+a+n-e-j+b)%100;
                  c -= (m+g+j)%100;
               }
               b += (k*i*n+g-d+d*n+f-f)%100;
               f += (i+d+j-c-e-b)%100;
               h -= (i*b*h)%100;
            }
            l += (f*n+b-h*k+j+n+b)%100;
            c -= (g*d)%100;
         } while( ++DOcnt[60]%5 );
         a -= (b+g-j-k-a)%100;
         e -= (g+e-j*l+i)%100;
         h -= (n+k*h+i*n-j*c+e*n*b-b)%100;
         m -= (c-h+b-d-n-e+j-h-f)%100;
         h -= (m-k*k+c-n*b+i+f)%100;
      }
      j -= (d+f+f+e+h)%100;
      j -= (i-h-f-j+c+b-f)%100;
      a -= (k*j)%100;
   }
   g += (i+g-d+k+h*l-m-m)%100;
   m += (g-g+i-c-l+n*h)%100;
   m -= (b+k+f-e-f-e+m-l)%100;
   d  = (g+n-m*c-d*f*n+e+i-g+m)%100;
   d += (e*l+k+f-g-e+i-g+n+c)%100;
   e -= (k-c*b+d+l)%100;
   e -= (e-g-l+a+g+b-c-b+l*h+m+h-b+a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F29(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[64]%5 )
   {
      do
      {
         j -= (d*f+c)%100;
         for( ; ++FORcnt[96]%5 ; )
         {
            
            switch( ++SWcnt[31]%4 )
            {

            case 1:
            {
               if( ++IFcnt[47]%10 )
               {
                  e -= (k+e-k-d+k+f-j-f*m-j+e*j)%100;
                  k += (e*m-l)%100;
                  g -= (f+m-b-j+c-a+g)%100;
                  i -= (c-a*b-h*g*b-j*m)%100;
                  g -= (b*g)%100;
               }
               if( ++IFEcnt[63]%2 )
               {
                  m += (d+g-d-j+b-a+i-b-c*i)%100;
                  g -= (e-n-a+b+m+e+a-e-n+f-l-g)%100;
                  f -= (b-f-m*f*a+j*g+e+j)%100;
                  j -= (h+g-l+m+h+d*l+a+n+d+k+j)%100;
                  e += (a+c*f-g+l*h*c+i+j+h)%100;
                  h += (g-l+k+i*g*f)%100;
               }
               else
               {
                  d -= (l-e+j-k-h-l+n+a-c-f*j*l)%100;
                  m += (d+l-g+d*n+d+d*b+d-l)%100;
                  i -= (f-a*k-n*e-l-k+n+f-a)%100;
                  d += (n-c+e+a+d-b*f-h+l+j-l-k-n)%100;
               }
               while( ++WHILEcnt[62]%5 )
               {
                  k += (d+f+g)%100;
                  k  = (g*e-h+f-e+n+b)%100;
                  l += (n*n-k+l-n+k)%100;
                  f  = (g+c-m*h)%100;
                  g -= (m+l+j+b+e*k)%100;
               }
               do
               {
                  k += (b+m-g-f-h*i*c*d*k*a+f+m)%100;
                  b -= (g-h-m-n-e+k-k-h-j-b-e)%100;
                  f += (m+i*l+b+c+i+e-e)%100;
               } while( ++DOcnt[63]%5 );
               for( ; ++FORcnt[94]%5 ; )
               {
                  n -= (h*k-h-a+k+m-n-j+l+l*n)%100;
                  h  = (f+l-d)%100;
                  d -= (i+d+g-b*g+j-i-g-k-i-i-c)%100;
                  d -= (j+c+e+m+h-h+c+b-c+m-c+i+e)%100;
                  a -= (h-f+d*g-d-k+e-i*i+e-d)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[95]%5 ; )
               {
                  n -= (b-c)%100;
                  b -= (f-c+i-n-d+m+m-n+j-k)%100;
                  k -= (i+c*k-k-i*e-g+l+g+f+g-b)%100;
                  b -= (i+b+j-b*a+n-n-c-m)%100;
                  j -= (j-f+h+b-h-i+n*a*b+f-i+f)%100;
                  c += (g*k+n*c+b-n+b*m*m-g)%100;
               }
               if( ++IFEcnt[64]%2 )
               {
                  b -= (b+f+f+n+k*n+c+e-h+j)%100;
               }
               else
               {
                  f += (a-k-n+n-b-j*h*m-k+f-f+c)%100;
                  c -= (l+m*f*b+c-e+l*e-g+j+l+l*h)%100;
                  b -= (k-h+m+m*g+a)%100;
                  a += (j-k-d-f*d+f-b*g+d+h+e-d)%100;
                  k += (f*k)%100;
               }
               while( ++WHILEcnt[63]%5 )
               {
                  e -= (c-n-l+i)%100;
                  b -= (m*m)%100;
               }
               do
               {
                  a -= (a+j+n*a-i*g*k-f)%100;
                  j += (k+h*e+c+c+m-m+m*m-f+a*h)%100;
                  j += (g*j+l*b+h-k-l*d-h)%100;
                  n += (m*h+h+i-e-j*l+c*i)%100;
                  j -= (l-b*m+n)%100;
               } while( ++DOcnt[64]%5 );
            }
            break;

            case 3:
            {
               if( ++IFcnt[48]%10 )
               {
                  a += (n*e+e-i+c+e)%100;
                  k += (b+d+a*l*b)%100;
                  e += (j-k+j+g+d*k*i-k+j-d-f)%100;
                  a -= (n*h+b*b+d*g+c-b)%100;
                  n -= (g+d-e+n-n-k-n-e-m+g+a*l)%100;
                  k += (k-m-k-i+e*i-b*l+l*b+a)%100;
               }
               d += (c+e*h*c-c*k+g-f-b-a)%100;
               f += (j-m-g+n)%100;
               c -= (e-l)%100;
            }
            break;

            default:
            {
               n -= (m+e-f+k+d-e*e*a)%100;
               b += (f*c-m*h+a*f-j-j-e)%100;
               b += (l+i+e+d-d*a-k+k)%100;
               a += (k+l-d*e)%100;
               m += (b+m+i*h)%100;
            }
            }

            m += (n+m+n-l)%100;
            n -= (d+d+g+b)%100;
            l -= (f-j+h+d-l+k*m-c*f+m+k+j)%100;
            c -= (g+b)%100;
            l -= (d+k*g)%100;
         }
         f += (l+g+k+a-m+n-i)%100;
         f -= (k*n+m-e-k+j)%100;
      } while( ++DOcnt[62]%5 );
      f  = (d+b-f+l*l+c)%100;
      f -= (n+a-f*f-n-f*i-h-g-c)%100;
      e += (k*b)%100;
      j += (k-l+g*c+e-m+f+c*e*k+g*l)%100;
   }
   b -= (k*b-d+f+i-l)%100;
   g -= (f+e*g+b-a-g+i-g+c)%100;
   d  = (l+h+i-c*e-e*b+i+n+b+g)%100;
   i -= (d-f-i-g*l*m-n-d*i*f+l-d+i-i)%100;
   d  = (n-d+n-a+e+c-g+c-n*c-n+n)%100;
   e += (h-m-j+e)%100;
   n += (m-j+d*b*e-e-m+n-i-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F30(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[32]%3 )
   {

   case 1:
   {
      for( ; ++FORcnt[100]%5 ; )
      {
         d -= (c+g+i+d-j+n+c+e-j-a*k*j+d*c)%100;
         if( ++IFEcnt[66]%2 )
         {
            i += (c+n-j*e*k-d+g-b-m-k*b*c*e)%100;
            c += (h+i+n-b+e)%100;
            d += (a-h+a-d+e+j)%100;
            k -= (i+j*e+l-h*m-j*i-d*m-a+j)%100;
            m  = (d+m-n+e-n-a-c+k-d+f-f+b*l)%100;
         }
         else
         {
            while( ++WHILEcnt[66]%5 )
            {
               do
               {
                  i += (c-d*b-b+n+m-h-l)%100;
                  k += (f-i-g+l-n*f-m+g-m)%100;
                  a += (l+e+n+a-b-b-d-g+d+f+i+j+d)%100;
                  b -= (d*i-l)%100;
                  b += (m+f+k-h)%100;
               } while( ++DOcnt[65]%5 );
               for( ; ++FORcnt[97]%5 ; )
               {
                  m  = (m+m+d-f)%100;
                  g += (j-m-m-a)%100;
                  d -= (d*m+e-a+l-j-a*c)%100;
                  k += (h*d)%100;
                  b  = (a+b*k)%100;
               }
               if( ++IFcnt[49]%10 )
               {
                  h  = (n+b)%100;
                  l += (c-l)%100;
                  h += (m+h)%100;
                  j -= (m+i*m-f-i-m+e-n-m)%100;
               }
               for( ; ++FORcnt[98]%5 ; )
               {
                  c  = (d-l+c-k-b*l)%100;
                  k -= (m+m+b-l+k+f+j-a-n-d+d+f+d)%100;
                  m += (c+g+f+m+i+k-c)%100;
                  b -= (i-e*g+n)%100;
                  g += (d+f*a-i+l+l+e)%100;
                  g += (b+b+k+m-a+a-m)%100;
               }
               if( ++IFEcnt[65]%2 )
               {
                  j += (k-g-d*g-h+i+b+g+l*e-k)%100;
                  n += (i-e)%100;
                  m += (m-k+e+c-n-e+k*d*b)%100;
               }
               else
               {
                  j -= (b*f-e+j*f+n*g-k+h*b)%100;
                  i -= (e-e*l*b-f*k-g-c+n-f*b)%100;
                  m += (m+d+f+e*c-l-b+i+e)%100;
                  g -= (d-b*m)%100;
                  l -= (h*l-d+f-d-m*a*l*i+b+b+e)%100;
               }
               while( ++WHILEcnt[65]%5 )
               {
                  j += (l-k*e-g+n+g+d*b+b)%100;
                  d -= (a+n*i-h+e+g*m-n-g-j+n)%100;
                  n -= (j-m+f+c*j*m+n-n+e)%100;
                  b += (a+b)%100;
                  g += (c*i-e+e+b+j-n)%100;
               }
            }
            do
            {
               l -= (m+j+d-m-c+l-d-i-c+e-l)%100;
               for( ; ++FORcnt[99]%5 ; )
               {
                  f  = (k-m-i-l+n+c*d*b-m-n+i)%100;
                  e += (b+m+g*i-c+d-l)%100;
                  b  = (j+e+d+l+d)%100;
                  b -= (g+a-m*g-l+m+l-f)%100;
                  c += (i+n-k+a*d-d-f+n*m+m+f)%100;
                  f += (k*l)%100;
               }
               
               switch( ++SWcnt[33]%3 )
               {

               case 1:
               {
                  m -= (i+m+i)%100;
                  a -= (m+f+n)%100;
                  m -= (n-m+h+b*j*i*h-a*c+m-c-n-j)%100;
                  m -= (i+k+j-i*k+k*d+l)%100;
                  m += (e*a+a-a-l+l-l+b)%100;
               }
               break;

               case 2:
               {
                  c += (m+i-m-b-a+d+k)%100;
               }
               break;

               default:
               {
                  d += (b*m+i-m*f*e*m-m+e-d*d*n+l)%100;
                  h += (g-g+a-a+l+n+a+c+l)%100;
               }
               }

               i -= (d-h*i+h*j*c*i-l-e+h+j)%100;
            } while( ++DOcnt[66]%5 );
            a += (b+a+n-h*m*a-g-m+d*b*h)%100;
            d -= (j+n-g+c-l*l)%100;
         }
         n += (l-d*j)%100;
         i -= (h-c-c*h+m)%100;
         a += (f*n+c+d-h-a*m*e*n+d-b-k-e*l)%100;
      }
      g -= (h-e*i*m+j-m*n-m*l+m*h)%100;
      f += (n+a*d+b)%100;
   }
   break;

   case 2:
   {
      j -= (j+f-a*a-j-i)%100;
      l += (c*i)%100;
      a -= (e-a+i+l-d+k+k+k+l-h+a*k)%100;
      k -= (f-m*g*a*e-k-a-e-a*g-l+f-b+d)%100;
   }
   break;

   default:
   {
      m -= (b-k+e*m-b-f+l+n+i+h)%100;
      l -= (d*l*b+h+e+h-f+g+j+n-b)%100;
      k += (a*i*a+b*k-l-j*m)%100;
      c  = (l-j)%100;
      f += (k-k+b-a-j+b+c)%100;
      g -= (a*m)%100;
   }
   }

   h += (b+k-h-e-c-l*f-n-b-f-e)%100;
   j -= (k-m*a+e+d)%100;
   c += (g+c-m*i*g+f-h-f+a)%100;
   d -= (g-b)%100;
   h += (c+e-c*i+c)%100;
   n += (a+c-d*l-h-j*i+d+n)%100;
   j += (a-j+k-c-i-g*g-d-n-j-f+f+i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F31(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[51]%10 )
   {
      if( ++IFEcnt[68]%2 )
      {
         n  = (l+i)%100;
      }
      else
      {
         while( ++WHILEcnt[68]%5 )
         {
            do
            {
               for( ; ++FORcnt[101]%5 ; )
               {
                  b += (b+j+l-n-n-b-f-e-c*d-e*a*m+m)%100;
                  f  = (l-a-i+i+m+k+j+b)%100;
                  j += (n*n)%100;
                  i -= (g+n-c-b*i-m+i+c+l-n*j-h)%100;
                  j += (n-e-d+b-e+m-b-f-k-a*i-j+n-b)%100;
                  e -= (m+a+h-l-j+a)%100;
               }
               for( ; ++FORcnt[102]%5 ; )
               {
                  d += (a-e-l)%100;
                  e += (g-n+b-e+h+c+a*j+f+d)%100;
                  m += (c-e-f-n-e-d+h*h+i)%100;
                  b -= (c+h*a-f*e-l+a-i-k+m-g+g+f-h)%100;
                  n -= (l*c+e-c+m*n-f+c-c-i)%100;
               }
               if( ++IFEcnt[67]%2 )
               {
                  d  = (c*d-j-e*f+a*h-b+k*d+k-n+k-l)%100;
                  m += (n-i+f+n-l+d+j+a)%100;
                  f -= (b+j+g*j*c+n-m-n*n)%100;
                  f += (g+b-d-d+i+k-k)%100;
               }
               else
               {
                  b -= (a-h*i*i+b+d+h-j*l+j-e)%100;
                  b -= (e+l)%100;
                  k -= (f-d-c-n*k-d+k+a)%100;
                  i += (i+m)%100;
                  n -= (l+m+h-e+i*d*d-k-a-a+n-b-j-b)%100;
               }
               while( ++WHILEcnt[67]%5 )
               {
                  g += (i-f-h*e*h+g+a+e+g+m-m*c-c)%100;
                  l += (f*d-i-c+n-j+e*f-b-h)%100;
                  b += (b+b)%100;
                  h  = (b+l)%100;
                  l -= (a-n+g+e+m+i+d+a)%100;
                  m += (f+f*c*n*d-h-n)%100;
               }
            } while( ++DOcnt[67]%5 );
            do
            {
               if( ++IFcnt[50]%10 )
               {
                  e += (k+l+a*c-h+j-b*a-i+d)%100;
                  d -= (n+k-b-i-a)%100;
                  j += (n-e-l+j-a+k-c-l+i-e+f)%100;
               }
               c  = (b+h)%100;
               for( ; ++FORcnt[103]%5 ; )
               {
                  i += (n*k-a-a-b*g+n*f+c*m+n)%100;
                  f  = (d*i-j+n*n-g+e+k+j-l+g-d+k+m)%100;
                  k += (a+d+d-f+c-l+d+c+g+g)%100;
                  k -= (f+j-b+l*b*i+c+j-k+c)%100;
                  c += (b+n)%100;
               }
               
               switch( ++SWcnt[34]%3 )
               {

               case 1:
               {
                  k += (l+b-n*k+i-d-f-b)%100;
                  i -= (i-i-j+c+h+d-h+a+l-a+c+k-f)%100;
                  a -= (h-g-m-l+c-j-l)%100;
                  b -= (n*n+l)%100;
               }
               break;

               case 2:
               {
                  d += (c+c*n)%100;
                  m -= (m*n-m-m+g*n)%100;
                  k += (b+h+k*f-n+f+e-a+a)%100;
                  k -= (b*i+d-n-l+m-f*f+d-b-j+n+c)%100;
                  i += (c*g*k*n+g*g-j-n-h*b)%100;
                  n += (g+m-l)%100;
               }
               break;

               default:
               {
                  n += (f+b-d+m-e+f-b*c+j*l)%100;
                  h -= (c+i-e*g+b-h-c+b+n+a-e)%100;
                  j  = (c+f+m-h*a*c)%100;
                  b -= (e-g-c+j-e-n+g+i)%100;
                  c += (f+b-l-g*m*e*e-l+m*f+m)%100;
               }
               }

               c  = (b*g-f-a+d*d+e+i-f)%100;
            } while( ++DOcnt[68]%5 );
            l -= (j*f-g-l*b*d-b+m+d-i)%100;
            h += (g+b)%100;
            j += (g+c*j)%100;
         }
         h += (j*g+b*m-g+e-l*h+a)%100;
         e  = (i*d+f-i-b*a+b+d)%100;
      }
      k  = (a-e+h-i*l-n-k*d+d+i)%100;
      n -= (a-j*f-i+g+j+d)%100;
      j  = (b-j+i-b*g-f+h-f-h+e+j-j-l+f)%100;
      a -= (d-g+i-g*f+e-i)%100;
   }
   l -= (d-c+l+l+b)%100;
   j  = (i+j+l+j+c)%100;
   f += (c*f+h-e+c-d*i*g-j*n-b*h-j+k)%100;
   i += (i+c)%100;
   e += (l*a+g-m+h)%100;
   d += (m+g-c*a-l-d-g-h)%100;
   d += (c+b+m-g+e+d+j-b*d*d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<76; I++) IFcnt[I]   =0;
   for(I=0; I<102; I++) IFEcnt[I]  =0;
   for(I=0; I<51; I++) SWcnt[I]   =0;
   for(I=0; I<102; I++) WHILEcnt[I]=0;
   for(I=0; I<102; I++) DOcnt[I]   =0;
   for(I=0; I<153; I++) FORcnt[I]  =0;
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

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      if( ++IFEcnt[69]%2 )
      {
         h  = (j*m+h-l-f*h)%100;
         f -= (f-e*m+k-b-b*h+d)%100;
         c  = (c-m)%100;
         f += (d-n*f+c*i-i+f-d*i-l+f)%100;
         b += (k-g-d*n-j+k-k+f*k+f+k*g*c)%100;
      }
      else
      {
         while( ++WHILEcnt[69]%5 )
         {
            do
            {
               for( ; ++FORcnt[104]%5 ; )
               {
                  f += (i*i-b+j+f-g+l*l-k*g*j-c)%100;
                  c += (l+c+c-h+h*f-b+l*i+c*n)%100;
                  f -= (a+n*i-d+b-l+a*d+h+j*m-b)%100;
                  b += (j+f-b+f+d+b*n-i*n-n)%100;
                  l -= (m-f-d+l-f*a-a+i+g+k-j)%100;
                  n += (g*j*d*g+h+a-d)%100;
               }
               i += (c+k+n+l-h*g+e+b-g+j)%100;
               k += (h-a+e*h*n-a)%100;
               d += (d-l-b-m-j-k-h*i-a+n)%100;
            } while( ++DOcnt[69]%5 );
            n += (b+b+k)%100;
            c  = (m*n+g*a*b+i-h-k+c-b+e-f)%100;
            l -= (c+c+h-k-i-b*c-i-c-l)%100;
            f -= (n+j+a+d-j*m-h-i+l-f+f+h-n-i)%100;
         }
         e += (c*e*h+f+a+f+n-c-e-g-a-m+m)%100;
      }
      c += (h*g+g+m-i-m*j*k+d*i+l-i+e-b)%100;
      k += (a-b+l-a*h)%100;
      b += (d+h)%100;
      k -= (d+i+e+f-c+i+c-e-k-g)%100;
      n -= (m-k*e)%100;
      m += (e+d+i-m-f-c*e-b-j)%100;
      d += (c+h-b*d*m+e*n-h+e)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<52; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 52 << "   Dynamic = " << sum ;
   for(I=sum=0; I<70; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 70 << "   Dynamic = " << sum ;
   for(I=sum=0; I<35; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 35 << "   Dynamic = " << sum ;
   for(I=sum=0; I<70; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 70 << "   Dynamic = " << sum ;
   for(I=sum=0; I<70; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 70 << "   Dynamic = " << sum ;
   for(I=sum=0; I<105; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 105 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}