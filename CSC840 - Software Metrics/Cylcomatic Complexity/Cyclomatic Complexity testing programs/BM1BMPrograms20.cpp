#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[96],IFEcnt[128],SWcnt[64],WHILEcnt[128],DOcnt[128],FORcnt[192];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         c += (c-k*i+e+f*k*g+l)%100;
         g -= (n+n*k+j*n+d+e+k+k*c*d)%100;
         m -= (c-g-g*m+g-i+a-h*n+g-h+j)%100;
         e += (g+m+e+i+i-a+j+a)%100;
         c += (j+k-n*b-m+d-m+e*c*b*f-j+a)%100;
         m -= (e+a+m+c*h+f+h+g)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  e -= (l+e+g)%100;
                  d -= (f*d)%100;
                  a -= (c-k+l+j)%100;
               }
               l -= (e+g+c*e-e+h*l+e)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  c -= (a-d-j*a+h*c-c-k*f-a)%100;
                  l -= (j*j*e+b+f+f+c*b)%100;
                  k -= (a+h+g-i*l+i)%100;
                  e += (m-g+j*a*j+d+c+b)%100;
                  a += (f-b+j+j+k*k-c-g+l*l-d-a*j*g)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  h += (m+m-e*i+c-m-b)%100;
                  l += (e-m+c-h+g-h-i*m)%100;
                  c += (b-m+m+a-g+h+a)%100;
                  b += (f+g+b+l-e+b+d+g+g-a*e)%100;
               }
               break;

               case 2:
               {
                  e -= (c-g-l-k)%100;
                  f -= (l-f-l-j-k-k+f-g-c)%100;
                  a += (l*j*c+b-e+f+d-m*f+a+f)%100;
                  l += (l-i)%100;
                  b -= (b+b+d+h)%100;
                  b += (e-n-g+c-m)%100;
               }
               break;

               default:
               {
                  h -= (b*g)%100;
                  k -= (f*e+c-d)%100;
                  h += (d-j-e+i+e+b+c*c-g-g+n+b)%100;
                  f -= (e*h-a-c-l*i-a+i+j-j+l)%100;
                  f  = (i*f+f-l-d+i-d-i+k-m-i*c+g*c)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  h -= (a-k+f+d+n+a+g*d+n+i)%100;
                  k += (j+f*d+j-l-l*d+a+l)%100;
               }
               else
               {
                  l  = (g+a+n)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  c += (g+d-g+e-b*g+h+g+k-c-h*i+n-f)%100;
                  j += (i-e)%100;
                  k -= (c-d+b-g*m*d+a*n+n*f*e+l-i)%100;
                  f -= (k*b*k*f-n-k*a+f-e)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  k -= (b-g*m+h*c+m*m*f*d-j-k-i*d)%100;
                  a -= (e+e+h-a+e-b+c)%100;
                  n += (j-j*m+a*i+k-g+b+l-h+j*l-m)%100;
                  m += (h-b-k*e*g-c-h+l-c*d+d+m)%100;
                  d  = (b-j-b+e-l*n)%100;
                  g -= (g+b-m*m-k)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  j += (l-b-g-a-j)%100;
                  g -= (g+c)%100;
                  n += (i+c*e+c*n)%100;
                  j -= (d+j-b+h)%100;
                  h += (b+e-l-d-b*d*f*d-c+c)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  b -= (f*n)%100;
                  l += (g+e-h-k+l+i*n-b*l+d+n)%100;
                  d += (a-g-l)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  f  = (g+f*e*j-g+k*g)%100;
                  c -= (m-b*m-l-g*e-g+h-n*b-e*h)%100;
                  f -= (a-c+h+n+g+k+j+h*l+h-h)%100;
                  j += (i+c*g+d-c-h-d*b-b)%100;
               }
               else
               {
                  h += (b+m-c-h-g+l-e+h+f)%100;
                  j += (n-g+d*h-c*n-l+d+g-e+n-j)%100;
                  n -= (b-d-n+j)%100;
                  d -= (k-d-a-g-n-g+c-d+g)%100;
                  a -= (g-b+c+d)%100;
               }
            }
            k += (m+i)%100;
            f += (l+m-a-b+h-k+d)%100;
            n  = (c-m)%100;
            n  = (f-k-h+d-n-h+e+n*n)%100;
         }
         m += (c*m-c+m*a+m+d+i-g)%100;
         g -= (d-b+k)%100;
         k += (c-f+a-m-a-n-c-c-m)%100;
      }
      d += (c-i)%100;
      l += (g-e-k-k+l)%100;
      l += (b-a+g+j+b)%100;
      e -= (c+d-g)%100;
   }
   b += (b+l)%100;
   e -= (j+c*i)%100;
   g -= (m+m*f+k*n-f-b)%100;
   m -= (h*i-b-l+i-l*g*n+n-g+f)%100;
   h += (j-l)%100;
   a += (k+l-f+i+e+b-k+n*b+k)%100;
   e -= (b+l+k+m)%100;
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
         k -= (a*j)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%4 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  f += (d*m-f*d*i-j*b)%100;
                  l -= (k+i+l+d+b*m+c+f+m-b-a+j-n)%100;
                  j += (g+a+i-d-l*j+a+b-g-a*k-a*b)%100;
                  m += (a-f)%100;
                  h -= (j-g+g+m-b-e+g)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  l -= (e+j*k-f-m+f-c*f-d+f)%100;
                  j += (g-h)%100;
                  l -= (d-j+j+g-n-l-c)%100;
                  a -= (a+e-m*d)%100;
                  b -= (g*l+i+d)%100;
               }
               else
               {
                  h += (c-e-f)%100;
                  d -= (a+g-m-l-m+b*i)%100;
                  j += (f-c-e-b*h*h*n-l+e+k+n+g-j)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  b += (e-f-l+c)%100;
                  d -= (g*f+h-k-k-c)%100;
                  i -= (g-g+d+l+b+l)%100;
                  b += (f+l-m+i-b-k-a+h-k)%100;
               }
               do
               {
                  c -= (d+i*l+g-j*d*f-c*j+h-d+g-e-m)%100;
                  k  = (j-l-d+n-g-m-i)%100;
                  l  = (a+l+d-l*c+g-c)%100;
                  k -= (i-k)%100;
                  j  = (i-h-d-b-d+e-h*g*g)%100;
                  c += (a*c*f+h-m+h+a+c-m)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  e += (l*e)%100;
                  a -= (j*f+a-b+i-f+n)%100;
                  b -= (m*c-b-c-i-g)%100;
                  l  = (l-c+d+i+b+c-a+f-d+m-a)%100;
                  b += (d-j*a-b+e*d)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  f += (c+g)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  e -= (n+a+l+e)%100;
                  f += (j-j+i+g-b+h)%100;
                  d -= (i-d+n-i*d)%100;
                  n += (k+n*i*d-a-b+f+l+c+m)%100;
               }
               else
               {
                  n -= (i-a*i+l-c)%100;
                  n += (c*g+g*a-e+i-b-a*m-n+g-m)%100;
                  d -= (a+d+i+g*a-h+d-g)%100;
                  d -= (n+m-l*b*i-k*n+a-l-j+n)%100;
                  a -= (j+h-n*m-k+c+h-g+k+m-j)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  m += (d+c+a-g+j+m-f+d+f+i+l+b*g)%100;
                  j -= (d-e+f+g-i+n)%100;
                  i += (f-g+i)%100;
                  c -= (n-d)%100;
                  l -= (j*j+j+b+l-f-a-m-k)%100;
                  k += (b-k+d-g+j+c*h-f)%100;
               }
            }
            break;

            case 3:
            {
               do
               {
                  k += (b+g)%100;
                  l += (c+n-a*g*i+g+e)%100;
                  j -= (j+i)%100;
               } while( ++DOcnt[4]%5 );
               i += (f-n-m-j+e+h+i-k-d)%100;
               j += (a+c-c+l+n-g+j*g-b-n)%100;
               k += (k*n*k+j+b+g-a-c+g+k-k+g-c)%100;
               b -= (n*g)%100;
            }
            break;

            default:
            {
               i += (n+i+g+g+h*d*b-e-j*c*b-n-f+g)%100;
               h -= (f*a+c-j+f+a+e-i-f+h-g-l)%100;
               j  = (f+h+n*b)%100;
               f += (k*c)%100;
               c -= (n+e+g*f*d*a-g-d*m-a)%100;
            }
            }

            h += (b+h)%100;
            i += (h+n-e+d+k-k-g-a*f)%100;
            l -= (c+d+n)%100;
         }
         k += (n+f*h+l)%100;
         c += (m*d-g-h*g-m+h-i)%100;
         n += (h*n-j+g+m+b)%100;
      } while( ++DOcnt[2]%5 );
      m -= (m-i-k)%100;
      m -= (m-f-g)%100;
      e -= (h-h)%100;
      i += (j+m*b-b-c+f-j+l-h+m+g-n+j)%100;
   }
   b += (m-d+h+d*i*m+d+f-c*i+a-n-c+b)%100;
   h -= (g-e*n-d+n-c+j+f)%100;
   n -= (m+e+g+g-j-l-c-a*l+g-f*b+d*l)%100;
   g -= (i+h)%100;
   h += (l-k)%100;
   n += (k-h)%100;
   c -= (e+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[4]%10 )
   {
      k -= (l+n-h-g+m*n-k+m-i-n)%100;
      for( ; ++FORcnt[10]%5 ; )
      {
         
         switch( ++SWcnt[2]%4 )
         {

         case 1:
         {
            if( ++IFEcnt[6]%2 )
            {
               if( ++IFEcnt[5]%2 )
               {
                  a -= (i+a+a+c)%100;
                  k -= (f+d+a*c-b+d+k+k*h+j+d*m*c)%100;
                  e += (b*b*c+c+m*a)%100;
                  h += (l-b+b-a-f)%100;
                  g += (h*a*f+k)%100;
               }
               else
               {
                  a -= (n-d+h-i+g-e-c-h+a+g-j+i)%100;
                  n += (d-b)%100;
                  a -= (l+g-e-m-m+g+b+k*g+i+d+b-l-a)%100;
                  d += (b+m-b+j-n)%100;
                  g -= (f*k-f*i-f*l+b-m+c-a+f+l-g+g)%100;
                  j += (b+d-l*i*m-e+j+j+h+m-k-d*g-b)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  g += (n-f-c-b*l*k*b)%100;
               }
               do
               {
                  m -= (e+d-a+d-b+i-n+n-l-b-e*d)%100;
                  j -= (j+b*b-j*e+k*g-i+l*d+k+m-c-e)%100;
               } while( ++DOcnt[6]%5 );
               m += (c*b-j+c-j+m-h-j)%100;
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  n -= (h*e-b-f-b*i-j)%100;
                  j += (g+b)%100;
                  a -= (j+e+a-d+i)%100;
                  b += (g+d-d*d-k*b+b)%100;
               }
               do
               {
                  h -= (c+e-g-l-k-m*m-n-d*f+b*i+b)%100;
                  n += (d+j)%100;
                  j += (c-h-j-c+e+f)%100;
                  j -= (n+n+a*b+j-e)%100;
                  g += (d*k)%100;
                  f += (j-a-j+a*b-d*j+g+k-b+g-a+n)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  g += (g-i+b+b*g-i+d+c+j)%100;
                  m -= (g*n-m+j*j+h+m*h-d*k-g+l)%100;
                  k += (l+c-m-i+k-f*m-e+n-a*h-i)%100;
                  d -= (d*b*f-g-d-k+c+m)%100;
                  g += (f+a+b+m+j*i+a+d+g*b-a-j)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  b += (l+k+n+i-j-b+d*h+e+m)%100;
                  g += (b+e-b-i-e*l+d+h+l+g-f)%100;
                  h += (h*m+a+n+g+b*d-m+a)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  d -= (c*l-e-f*h-e-l+a-h*l)%100;
                  l -= (d+a*n)%100;
                  d += (j+i+n+f*b+i-m*n+c+c-n+d+b-i)%100;
                  d -= (n*b)%100;
                  j -= (i-a*g*f+a-n)%100;
               }
            }
            for( ; ++FORcnt[9]%5 ; )
            {
               
               switch( ++SWcnt[3]%3 )
               {

               case 1:
               {
                  e += (g-c-f-h-h+g*h-n)%100;
                  d += (d*h+j+c+i-i+b+l-g+l+l+i*b-l)%100;
                  m += (i+i-m-n-k*f-m+m-i-n)%100;
                  m -= (d*h+b+k*n-c-m-a-i-b+f)%100;
               }
               break;

               case 2:
               {
                  g += (e-d+h+h+a*e+c-e+d)%100;
                  g -= (f-c+l-c)%100;
                  f -= (m+d-m+f)%100;
                  j -= (f-l-b-f*h*c-f+a)%100;
                  k += (c+b*l+h)%100;
                  h += (c+h+k*j+n)%100;
               }
               break;

               default:
               {
                  d  = (d+g)%100;
                  f += (j*f+l+c-g+g-j+i-a*f)%100;
                  h -= (m-l)%100;
                  g += (e+g)%100;
                  g -= (k-l-h+f-l*d)%100;
               }
               }

               e -= (n+n+e+g+b+b+g+m+f)%100;
               g -= (i-b-a*l*a-g-l-i+e+h+e*m-b)%100;
               h += (j-g-h+h-k-k+h-m+l+b-e+a-m)%100;
               j -= (k+c+g-e+d)%100;
            }
            i  = (k+k*i-l+l+f*h*b-d*g-l-c)%100;
            e -= (m+h-i+f)%100;
            h += (a+h-c-n*j-k-d+k+g*n-i)%100;
         }
         break;

         case 2:
         {
            n -= (n-d-n-d-h-k+l+k-g-l*b+n)%100;
            m -= (k+f+i-h+c+f*j)%100;
            m += (e+f+f-g*k)%100;
         }
         break;

         default:
         {
            n -= (m*b*e-c+i+h-b+m*g)%100;
            k -= (i+i-m+a+k+n-a)%100;
            a  = (h-m+l+c-f-j+j+k-h*h+h+i-g-f)%100;
            e += (m-c-j+b-g+k*j-i+c+k)%100;
            g += (e+a*a+m+h*l+h*h-g+c+e-f)%100;
         }
         }

         c += (f*m-a*j)%100;
         m += (g-l-f-j+g-n*m+h-k*e-j*k+b)%100;
         l += (g+a-a-c-j-l-m*m-l+f*h-b-j*e)%100;
         n += (a+d-a-f-b*e*f-e-i-a-m*g-d+j)%100;
         a += (d+e*g+d+h+h-f-l+i+h)%100;
      }
      f -= (e-j*f-k-h+j+i+d+c+l*l+j+f+k)%100;
      n -= (c-c*d+b+m*a-n)%100;
   }
   m += (k+c-e*h-a+c-g-i-b+i+l*e-c)%100;
   n -= (b+i+i+i-c+k+i-m)%100;
   i += (d-k-g-m*g+n-m-n)%100;
   a  = (m+i+n)%100;
   e -= (l-i)%100;
   m  = (d+b-g+h+d-c*a+b*j+i)%100;
   i += (d*c)%100;
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
         i += (j-g-g+d-h-f*g-j)%100;
         i  = (e-m-d-m+j+c+k-k*a-n+a+l+l+b)%100;
         c -= (g+e*i-e+e)%100;
         k += (n-m+n+l-g*f+l-k*a+k-i-k-e)%100;
      }
      else
      {
         while( ++WHILEcnt[8]%5 )
         {
            do
            {
               for( ; ++FORcnt[11]%5 ; )
               {
                  h -= (c-i-e+e-a*f-k-k-h+a-c-e)%100;
                  l += (b-g*h-m-j+m-n+m*h+d)%100;
                  e -= (h-n-e*j)%100;
                  c += (k+g-d*h*n)%100;
               }
               for( ; ++FORcnt[12]%5 ; )
               {
                  j += (h+l+b-d+a+e-b-l*e)%100;
                  b -= (l+n-h-m-d-g+m*d-c+m*g-l)%100;
                  h  = (g-h-e-c+g+i+f+f*d-n+e-i*e)%100;
                  g += (d-k*k-j+b+g-g*j)%100;
                  l -= (d-e-f-l)%100;
                  k -= (g-i-a*n-f+h)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  i += (b+m-f+a-d-n)%100;
                  h += (h+f+a+i-g-l)%100;
                  n += (a*a+k*h)%100;
               }
               else
               {
                  e += (n+j-n+f+d+b)%100;
                  e -= (e*c*m-b-h-f+g+m-m-f+n-i*b)%100;
                  e += (e-j+e*j+h*f-a+d+c+d+l+h+a)%100;
                  n -= (d+m+m*j+h*i-a-j*l)%100;
                  k -= (e+a-d+a*m-g-h*j+e*c*k+j*c)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  d += (a*c-a-n+c-e+n+a*d)%100;
                  m -= (h*k-j*l-b+f-l)%100;
                  f += (f-j+k-h+j+k+d+b*h+g-f+a)%100;
                  g += (h-l*c-a+h)%100;
                  h += (m+k+d-k*h+b+l+l+g-b+b)%100;
               }
               do
               {
                  c -= (h*j+m-g+h)%100;
                  a += (d-a+n+c-a)%100;
                  d -= (m+g-j+i+c-h)%100;
                  a -= (d-d+c)%100;
               } while( ++DOcnt[8]%5 );
            } while( ++DOcnt[7]%5 );
            if( ++IFcnt[5]%10 )
            {
               d += (e+m)%100;
               for( ; ++FORcnt[13]%5 ; )
               {
                  b -= (l-j+k*b-c-c+f+c)%100;
                  a += (h+a-n-i+i*c*k-n)%100;
                  k -= (h-c*e+k-n-c*l*k)%100;
                  k -= (g-b*j+a+j+j-h-j-h+l*n)%100;
                  d -= (a-d+j+g+b+h+b*f)%100;
               }
               
               switch( ++SWcnt[4]%3 )
               {

               case 1:
               {
                  e += (m+a-b+n-a*i+b)%100;
               }
               break;

               case 2:
               {
                  d += (k-i-i+k*g-n*b-i)%100;
                  m -= (f*m+m*h-k+h-c-j+i*j)%100;
               }
               break;

               default:
               {
                  l -= (h+b*d-a-e+g+j+e*b)%100;
                  e += (a+g-l-g-f-m-e+f-a)%100;
                  n += (d*n)%100;
                  l  = (e-k+j+n-n-h-k*j+n+e*f+b+m)%100;
                  l += (i+f+g+b+h+j-l-g-a)%100;
               }
               }

               a  = (i-f+f+b+h+m-e*d*f-f-j+a+j)%100;
               l -= (k-c-n+g-i-i+j+g-i-b-i+g-j)%100;
               m -= (h+l*a-k)%100;
            }
            c += (b+a+d*a-m-e*c-c-h*l-c+a)%100;
            b += (b*l*d*e+m)%100;
            d -= (l+n+h*f-k-f+g*h*b+l+e*m)%100;
         }
         n -= (h-c+n-e*b-f+d-n+f-g+k-f)%100;
         m += (h*f*h-h+g-m*c*j-c*c*h+l)%100;
         h += (b*i)%100;
         b -= (d-c-j-k+c-f*b*l+m*l*d+a)%100;
         d  = (g+m-i*d+h+k+i)%100;
      }
      c += (b-g-a-f*k+e-d)%100;
      n -= (c-m)%100;
      f += (a+f-n-j-m*j+a+n*a+f+a-h+k-d)%100;
   }
   b += (k*l+j-l)%100;
   d += (i-h*i*f-k-i-a*d-k*h+j*a-d)%100;
   n += (b-e-d+f-c-n*i+j-e-d*b+j+g*l)%100;
   a -= (j+m-f*m+a-m*k+e*f+d)%100;
   c += (e*a+n-g+l+f*e-a)%100;
   k += (f-j+g*d-f*n)%100;
   f -= (a+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[10]%2 )
   {
      m -= (h*e-i-d-g+k+k-d-j)%100;
      c -= (n-m*b-c*k+k+j+c-f+i+i)%100;
      l -= (b-c+e+j)%100;
      m -= (b-n)%100;
      a -= (f*m)%100;
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
                  f += (e-a+i)%100;
                  a += (a-c)%100;
                  i += (k+n+e+c-e-l+i)%100;
                  n += (k+a+f*h+f-g-h+k*e)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  h -= (d*l-g+e-f*a-f+h-k+l-d+h*f*c)%100;
                  d -= (e+m+a+g*i+n-d+m-f*j*e)%100;
                  b -= (j+n-g*d-l*f+d-f-j+a)%100;
                  i += (c+j-c)%100;
                  b -= (a-k-j+c*g)%100;
                  b += (k+m-c+i+b-g*b-n+f-j+l-j+f*k)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  i -= (f-g)%100;
                  i += (h-n)%100;
                  n += (e+m*m+c)%100;
                  j -= (k+m+i*k+n*g*k-c)%100;
                  i += (a-g-k*g-m+i+l+n+g*i*n-e)%100;
               }
               else
               {
                  d += (b+k+m)%100;
                  b += (j*b+g-l+c+l)%100;
                  j -= (a+j+k+j*a*n+c-g)%100;
                  g  = (j-m+g-g-k-m*a+f-j)%100;
                  b -= (f+j*a)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  a += (k*l*d-a-a+i-j+j+h)%100;
                  c += (f*b-a-n+i)%100;
                  l -= (l*d-l+a+n-k*l*d)%100;
                  f -= (j+i)%100;
               }
               do
               {
                  b += (h-d*d-b*c-c+k+h)%100;
                  c  = (l*d-h-n*b*m+a+i-d*f+c+d+h*n)%100;
                  e += (h-g*g+a-e*h+n-c*b+d+n+l-n)%100;
                  k += (a-j+h*i+a-c-d-i*m-e*h+j+l*m)%100;
                  d += (e-l)%100;
                  m -= (j-d)%100;
               } while( ++DOcnt[10]%5 );
            }
            l -= (l+j)%100;
            for( ; ++FORcnt[16]%5 ; )
            {
               
               switch( ++SWcnt[5]%4 )
               {

               case 1:
               {
                  h += (m+c-n+b+g-n+h-a-h+d-d)%100;
                  m += (g-m-l-c-m+a+k+j+g*g-c+g+a)%100;
                  g  = (j*l)%100;
               }
               break;

               case 2:
               {
                  g += (c+j*k-g-a-g*h*f+f+a+d*a)%100;
                  h  = (f*k*m-k-e-c-n-l)%100;
                  j -= (m-f-j)%100;
                  m -= (k-m-b*d-g-m+i-d+j-a-a-m)%100;
                  n += (j-e-d-n-b)%100;
               }
               break;

               case 3:
               {
                  c -= (m-k-c+f+l-d*b+k-e)%100;
                  d -= (h+h-h-n+h+e+g+a)%100;
                  e -= (c+d+d+f+j)%100;
                  l -= (j-c+e+a*b*l-g-k-h+b+h)%100;
               }
               break;

               default:
               {
                  i -= (h+i+h+d*b*a*d+c-g-c+k+f-f-b)%100;
                  a  = (g-c*g+f+l)%100;
                  i -= (b-d*k)%100;
                  d -= (n*m-c+n-e)%100;
                  c += (i*b+n*f*b)%100;
                  d -= (k-j)%100;
               }
               }

               i -= (b*h*c*i+g+l-i*n*l+g-d-g+k+g)%100;
               j -= (m+c)%100;
               c -= (l-c+e-l+m-l-e+h-b-j+e*n+a)%100;
               d += (n+e+m+d+i-b-b+d-i+n-n-b+c+b)%100;
            }
         } while( ++DOcnt[9]%5 );
         n  = (b+b*h-j)%100;
         a += (b-e-f+k+b*m)%100;
         i += (l-c+e-h-h+n*b-k-f+m+j-f)%100;
         k -= (l-k+l*i-f+f-h-c*l-i-c+l-b)%100;
      }
      i += (j-f+a*j*h)%100;
      j -= (b-i-l+d+c+k-e*h+a+n+j*g)%100;
      d += (h-f*b+b-c+f+e+f*c*f)%100;
      c += (m-l-i-e*e)%100;
      b += (e-b*m+m+a-a-e*k-e+j-m)%100;
   }
   a -= (i+c+c+j+h+l-l-n*c-k)%100;
   a += (b-n-a-j)%100;
   c += (f*g-b+h-i-f-h-c)%100;
   l += (c-e+n+c-h*d+a-d+g*c-n-m*g)%100;
   g += (k+l+b-e+c)%100;
   b -= (b-a*k+e-j-f)%100;
   e += (f-b+m+g*f+i+h-a-k-g-c*b)%100;
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
         i += (d-m-l-d)%100;
         c -= (l-c+h+b*b*e+g*d*e)%100;
         f += (f+f-k-a)%100;
      }
      else
      {
         while( ++WHILEcnt[12]%5 )
         {
            do
            {
               for( ; ++FORcnt[17]%5 ; )
               {
                  a -= (i+g-m-b-g-n+l+l+g-n*d-k+l)%100;
                  b  = (l+n)%100;
                  l -= (n-k)%100;
                  e += (j*n+d)%100;
                  i += (c-d-j-l+h*j-f-h+a-l*f*m+b)%100;
                  i += (g+j)%100;
               }
               for( ; ++FORcnt[18]%5 ; )
               {
                  h += (j*l+n*n+j-d+n*b)%100;
                  i -= (b+n-l-c+c+d+e-i+n*f-h-l-c)%100;
                  l += (f*j)%100;
                  c += (a-f*f*i)%100;
                  i -= (a*k*m)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  i -= (i-l-c+d-k+g*l-j-n-e)%100;
                  n -= (i+d+d-k-h)%100;
                  f -= (c+g-a*k+k)%100;
                  b -= (a-f*i+f)%100;
                  a += (k*e-a+b*l*c*b)%100;
               }
               else
               {
                  g += (h-l)%100;
                  h -= (e-m-d-g+m-i+c-b-j*h-b)%100;
                  j += (e-b)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  f += (d-c-a*f*k+f*d*i+l-e*j-e)%100;
                  l -= (j-g+e-e+l+b*g+c)%100;
                  n -= (c-g-e-g-e-n)%100;
                  m += (b-l*a+d-g*d-k-d+l*c+m+h-b)%100;
               }
            } while( ++DOcnt[11]%5 );
            do
            {
               if( ++IFcnt[8]%10 )
               {
                  i -= (n+l+d-i-i-e-i-h-c-f-e+a)%100;
                  b -= (a-b+g-e+c)%100;
                  e -= (j*m*l*m+g+l+b+f-i*n)%100;
                  m -= (e-i)%100;
                  h -= (b-i+b+c*m-i)%100;
               }
               g -= (c-f-k)%100;
               for( ; ++FORcnt[19]%5 ; )
               {
                  e += (n*k*k-g-b-m-j-f+e-h-j+n)%100;
                  n  = (e-n-a-l+c)%100;
                  l += (f*b-g*c-e+k-m-l-m)%100;
                  d -= (d*b-a+l+e+l*h+m*b-c+k)%100;
                  a -= (d+b+g-b*j*k*g*g-e+d)%100;
               }
               
               switch( ++SWcnt[6]%3 )
               {

               case 1:
               {
                  h -= (f*a+g*b-j+l-n+h+a-j)%100;
                  d -= (j*b-d+n-g-b*g-m-j+n*h*e)%100;
                  m -= (a+d*h)%100;
                  f += (l-d+m+d-i+k*n-i-n+j+h+d)%100;
               }
               break;

               case 2:
               {
                  m -= (h+e*b-j*a-n-k-f+c)%100;
                  g -= (l-m-a)%100;
                  j -= (j+e+b-b+k*g+f*e-g)%100;
                  d -= (i+n+g+f-f+g*l-d-l-b-l+k)%100;
                  k += (l+f-l+n)%100;
                  j += (i-i+b+m-k*a+f-c+j*e*k)%100;
               }
               break;

               default:
               {
                  k += (a*l)%100;
                  e -= (l-j)%100;
                  d -= (d+d*m+e)%100;
                  d += (c*j)%100;
                  g -= (j-k+m-a-d+m-j*h+i-d*m-m+d*h)%100;
               }
               }

               f -= (h+n-a+m-l-a*c+d-d)%100;
               b -= (i+g+c-g)%100;
            } while( ++DOcnt[12]%5 );
            b += (g+e*a+b)%100;
            l += (a-n-j+d)%100;
            c -= (c*b*n+g)%100;
         }
         m += (b-c)%100;
      }
   }
   h += (m-c)%100;
   d -= (l+j-m)%100;
   j -= (k-f+g+m*l*d+b+g+f)%100;
   j += (k-c+m+j+c+f-e+n*a)%100;
   g += (k+n)%100;
   m -= (e*h*n-h*k+l-l-i-k*h+j+a)%100;
   h += (l+g+j+l-h+i+h-m*b-e+f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F7(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[15]%2 )
   {
      f += (f*k+f+l+l+f-g-m+n)%100;
      k -= (b+l)%100;
      l -= (n+m-i*i)%100;
      i += (g-f-c-m+c)%100;
      a += (h+h*a-l-m+f)%100;
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
                  l -= (d+b*b-f*f-l+a-h+i)%100;
               }
               for( ; ++FORcnt[20]%5 ; )
               {
                  l += (a-k-m)%100;
                  j += (k+h+k+d+m-k+g+n*a*i*h*h*k*c)%100;
               }
               if( ++IFEcnt[13]%2 )
               {
                  j  = (j-f*n*i-b+d)%100;
                  c -= (g+m-n-j*c*j-g)%100;
                  j -= (c*d+g-j-e-b-n-f+a-l+l-e+f*k)%100;
                  d += (g*k-a+l+e-c+i-g)%100;
               }
               else
               {
                  a += (n-h-n-a*g*j+n*e+e+m-d+l+g+g)%100;
                  l -= (i+d-a*i-f+a+b+g)%100;
                  g += (m*c+h)%100;
                  m += (e+n-l+c-a-k-c*n*l-a-m*a+h)%100;
                  e -= (c-a-g)%100;
               }
               while( ++WHILEcnt[13]%5 )
               {
                  f  = (b+j+g+i*a-d-a*m+l-f*j+m)%100;
                  m += (d+i+j*h+d-m-k+f-l+f+k*a*e)%100;
                  n -= (l*m)%100;
                  n -= (n-e-c)%100;
                  j -= (m+d)%100;
                  m -= (i-m)%100;
               }
               do
               {
                  g += (l*j+n)%100;
                  c  = (a+g+g-n*l)%100;
                  n -= (c-j-i-c+n)%100;
                  m += (i-j+i-a+n+l+i-h)%100;
                  c += (i-c-g)%100;
               } while( ++DOcnt[14]%5 );
            }
            h -= (j+d-c)%100;
            for( ; ++FORcnt[22]%5 ; )
            {
               
               switch( ++SWcnt[7]%4 )
               {

               case 1:
               {
                  m += (i+g-e-h+g+k-b+m+i*m)%100;
                  l -= (b-c+b-g+j-m*k)%100;
                  f += (f-i+i-n-f)%100;
                  h += (i*h-a*d)%100;
                  a += (a+f-j+h)%100;
               }
               break;

               case 2:
               {
                  b -= (b+f*j+h)%100;
                  m += (b+d-j-f+j+h-g*a-e)%100;
                  e  = (c+f)%100;
                  g -= (j-k*e+f-i-l-c*d*k+n+l*n-f-f)%100;
               }
               break;

               case 3:
               {
                  m += (a*i-d-n*f-d+f+i-b)%100;
                  j -= (m+i)%100;
                  i += (m-m-g-i-m+d+g*i+n-k+h+n+k)%100;
                  i += (n*n-c+c+n-n-e-i-f+f*e)%100;
                  h -= (g-b-m+i*c)%100;
                  i -= (f+h-d-g)%100;
               }
               break;

               default:
               {
                  b -= (h+c+a-l)%100;
                  l -= (k-i+j+i*h-c+e-n+h-f-i)%100;
                  d  = (h*c-b+j-b-i-a-a-a+l-a-g+c-g)%100;
                  i += (c+a*h+d+f+h-g+g+g+i*a*c)%100;
                  f -= (f-n+g-f*a+f)%100;
               }
               }

               if( ++IFcnt[11]%10 )
               {
                  i += (b+h+l+f*l-k-f+n-h*h)%100;
                  f -= (g+f*h*i-n)%100;
                  e  = (m+n+n)%100;
                  k += (g-g-k+k+d-l-m)%100;
                  l += (c+h-j+i-i-f*j*j*k*g)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  i += (f-l-k*g+j*n-a+j+e+k*d)%100;
                  b += (g-n+e*g*i-m-d+k)%100;
                  c += (b-b-j)%100;
                  g -= (g-k*i+d*b+m+i+a)%100;
                  j += (n+c*b*m)%100;
                  l -= (m-a-m+c-e+b)%100;
               }
               else
               {
                  e += (i+c-h+k+e*e+k*i+b+e+h-h)%100;
                  g -= (i+g-f+i-j)%100;
                  l += (f+e+a+l-g+b+d-m)%100;
                  c += (j-k+i-g+b-b+g+i-f-f+n+k)%100;
               }
            }
            i += (l-n+a+i-b*a+h)%100;
            j += (n-l*g-c+c-h+m-g+m*g)%100;
            k += (b+l-h+j*i*i*b-n-l)%100;
         } while( ++DOcnt[13]%5 );
         j += (f+g+h+f+d-c+n*f+d)%100;
         h  = (k+h*i-k-j-m)%100;
         e  = (d-g-n-j+k-e)%100;
      }
      a  = (i-f+a+h-l-d-g*j)%100;
      i -= (h-k-n-j-f+k-l)%100;
      c += (f*d+k+a+h*f*e+f+e+f)%100;
      i -= (b+f*g-d-c-m-a-a-i*f+b)%100;
   }
   n -= (g-a+a-i+k+f-n*h-a+g+d)%100;
   j += (l*m+n+a+n-c-j+l*l*d)%100;
   j -= (l+i+h+c-d-i+a-a+i+n)%100;
   a -= (e-e+g+a-a-d-j-m)%100;
   f += (k-g*f-h+d)%100;
   l += (n+m+a+g)%100;
   d += (c-e-k+g)%100;
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
                  n -= (f*c+l-d+c)%100;
               }
               else
               {
                  e -= (f+g)%100;
                  a -= (n+m+b+g-c*b-d+e+a-b)%100;
                  h -= (c+h+c-d-j+a*e)%100;
                  g -= (h+a+e*k-c-c-l+l-e+i*g-g)%100;
                  l  = (c*e+a)%100;
               }
               while( ++WHILEcnt[15]%5 )
               {
                  n += (g+i-i-m)%100;
                  k -= (e+d+e)%100;
               }
               do
               {
                  f -= (i-a*n-m-m-i-i+j)%100;
                  k -= (n-d+i-b+c+h*c+k-h+n+a+l-m+l)%100;
                  b += (m*n*n+f-j)%100;
                  e -= (d*n+e+l+i+m+g-h*b+h+i+a*k)%100;
                  e += (m-j+l)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  n += (m*c-n*n+i-k*j*b)%100;
                  h += (j+a)%100;
                  k += (a+e+a+k-h*n*l*j-n-m*g)%100;
                  e -= (a+c+f-e-b+h)%100;
               }
               g -= (m-k+k-h+i-n-n+e*a+a-l*i-l)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  j -= (b-n-i-k+c-j-c+l-k+c)%100;
                  m += (l+c+i-b-l)%100;
                  j += (b+d+i+m*m-l)%100;
                  d += (a+k-l+e*k*k*h+h*l+l-j*k*b*k)%100;
                  f += (j*n-k*g)%100;
                  d -= (k-b+l)%100;
               }
            }
            
            switch( ++SWcnt[8]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[17]%2 )
               {
                  i += (c+m-c-d-c+j-f-b)%100;
                  c  = (n*f)%100;
                  f -= (n-n)%100;
                  f  = (j-e+b*b*i-i-h+b+c-f)%100;
                  a += (j+k-l*g-f*g+k-d+h-m+f*e)%100;
               }
               else
               {
                  e -= (i-h*k+g+b*k+b+m-e)%100;
                  m  = (i-c+i+n*e*g-n)%100;
                  k -= (k+j+f-j-j+m+l-h-f+h)%100;
               }
               while( ++WHILEcnt[16]%5 )
               {
                  c  = (n-c*i)%100;
                  h += (b-l+k+e+b-b+m*d-f)%100;
                  c -= (h-m*h-h*d-e-b-f)%100;
                  g += (m-l-l+d-a+a-b-a-n)%100;
               }
               do
               {
                  j  = (b*f-a-e*j*g-f*m*b+e)%100;
                  e += (g*j)%100;
                  h += (m-n-n+d*d+m-j-b)%100;
                  g -= (c+b+l-l)%100;
                  i += (e-b+f+f-e-n*f-m-e-e+c*f+i*f)%100;
                  g += (h+h*d+h+g+l+l*h*b+h-h*g-l+h)%100;
               } while( ++DOcnt[17]%5 );
               for( ; ++FORcnt[25]%5 ; )
               {
                  h -= (e-h)%100;
                  e -= (j-m*k+a+d*g-c+n*g-m+g)%100;
                  g -= (c+j-j-i-m-h+g)%100;
                  d += (j+f)%100;
                  i += (c+k-d-c+c)%100;
               }
               if( ++IFcnt[13]%10 )
               {
                  a += (j+h-m-n+n-j-e*f-j-g+j-e-m)%100;
                  j  = (a-l+m-k-i-d+h-b-g-f*j*i*b+c)%100;
                  e -= (c+j-k+d*n-n+f*d-m)%100;
                  j += (m+g*m+c-e-n-i-j-e+c+a-g)%100;
                  a -= (d-n)%100;
               }
            }
            break;

            case 2:
            {
               b += (c-a)%100;
               d -= (l+b*j+h*f-a-n+n*h*k-k+b)%100;
               g -= (m-j-c)%100;
               i  = (j*n*b)%100;
            }
            break;

            default:
            {
               k += (h+i+h+g-f)%100;
               m += (c*j-e+h-j)%100;
               n += (i+k*l+h*n*k)%100;
               f  = (i-f+l+h+b-j+m+b*m*j+n+g)%100;
               k -= (j*f-m+m)%100;
               h += (h+a*d-j+l*n+b+i)%100;
            }
            }

            g  = (a+k-d+f+i*h-b+c+i)%100;
            g += (d-a-g+g-m+h-j)%100;
         }
         c += (d+n-b*g-b+a+l+i)%100;
         f += (a+l+f-d+n-h*h)%100;
         b += (h-m-n-m-e+j+b+g-g-l+h*i)%100;
         h -= (a-e*l+h+e*i+h*i+a*m)%100;
      } while( ++DOcnt[15]%5 );
      d -= (m+i*d*i-l-d+f)%100;
      k  = (d*g+c+l+l-k+k+j-k)%100;
   }
   g  = (j-k+j*d-e-e+c+b-h+a-b-h)%100;
   n -= (g-n-a-b+e)%100;
   c += (g+e)%100;
   k  = (i-b+l+d+i-k+a*i+b)%100;
   l += (k+a-n+d+n*f-b*h+j+c+a-b-g)%100;
   f -= (g+i+m)%100;
   f += (l-k-d-a)%100;
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
         j += (c*j)%100;
         e += (i*b+j-h*g-c-j*i+h+b*n)%100;
         l += (j+n)%100;
         g += (l-m+j*l-d-j)%100;
         k -= (j*i+f+n+m)%100;
      }
      else
      {
         while( ++WHILEcnt[19]%5 )
         {
            do
            {
               j -= (n-k*k*h+k-a)%100;
               for( ; ++FORcnt[27]%5 ; )
               {
                  n -= (d-l-c)%100;
                  d -= (g*l)%100;
                  b  = (e-m-c+n+b-l+d+e-e-a)%100;
                  h  = (a-d+k+c-b-a+c+k)%100;
                  a += (e-g-a+m+e+l+d+k-h*l+m*b-m)%100;
                  m  = (m-i-k+e+k*k-b+k-e*h+e-h+f)%100;
               }
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  b -= (h-f)%100;
                  g -= (m-m-n*c-c+g*n-g+f-n-h+k)%100;
                  e -= (b-b-j+l+n+m-k*k-c+m+k-l-a-h)%100;
                  i  = (k+l)%100;
                  h -= (b-f-f)%100;
               }
               break;

               case 2:
               {
                  f -= (m-g-k*m)%100;
               }
               break;

               default:
               {
                  i += (d-k-k-b)%100;
                  k -= (e+a-b*g+k*l-m-n+f*m+f+d*b-k)%100;
               }
               }

               if( ++IFcnt[14]%10 )
               {
                  a -= (n*n-m)%100;
                  j += (c*k-e-f+d+e+m-e*e*f+k*m+k)%100;
                  b += (j+g+h-c+a-g+a*j+a+f-h+k*b-n)%100;
                  n += (h-m)%100;
                  c += (b+i-b-h+l-m-f+j-a-j)%100;
               }
            } while( ++DOcnt[18]%5 );
            if( ++IFEcnt[19]%2 )
            {
               if( ++IFEcnt[18]%2 )
               {
                  b += (m-a*d-e+b+n*m+a*l*m-k+b+b)%100;
                  l  = (k+i+m-m+d)%100;
                  c  = (d-a+k-m+e+c+f*b+c*f-h+n*j)%100;
                  i -= (h+i-a-g)%100;
                  l -= (a+c+g-d-d+l+k-i+n+b*h+i*f+a)%100;
               }
               else
               {
                  g += (c+b-d*l-f-d-c-f*i)%100;
                  e -= (g-m+i)%100;
                  n += (l*k)%100;
                  j  = (d-f)%100;
                  i += (f+a-d*d*l*f-a-c)%100;
                  k += (a+d*l-m-b-a+k-j+a-i*j-i)%100;
               }
               m += (c+i+b+d-k-b+h+e)%100;
               d += (g-h-c-d-k+g+l-i*g-n+i)%100;
               a -= (m-m+c*l*e-m-c)%100;
            }
            else
            {
               while( ++WHILEcnt[18]%5 )
               {
                  k -= (b+a*h*c+c+j*a+i+b-b-g-g+d)%100;
                  e  = (l-n)%100;
                  l -= (f+f+j)%100;
                  m += (j-a-d+g+m-n-b+k+n+j+f-c-f+l)%100;
                  m += (a+j*m+a*h*h-a+n+h-d-e-n)%100;
                  c  = (g+a*h*h-k+j-j-f+f-g+a*a*l*e)%100;
               }
               do
               {
                  n += (c+g)%100;
                  l -= (e*j-b-k*m+l-a+e*m+d)%100;
                  g -= (l+m-k-m-k*n+k-d)%100;
                  n -= (d+k-f)%100;
                  n += (a*l)%100;
               } while( ++DOcnt[19]%5 );
               for( ; ++FORcnt[28]%5 ; )
               {
                  b += (g-m-f-a)%100;
                  c -= (c+h+j-m+d-n*h+j-d-l*i+a)%100;
                  l -= (b+f*m-m-c-j-h-d-g+e+f-c+n)%100;
               }
               for( ; ++FORcnt[29]%5 ; )
               {
                  l += (n+h-f-n-a-j-g+k)%100;
                  d  = (i+m+m-l-n+e-g-d+e+k+n+b-l*l)%100;
                  j -= (m+a*m+c-l*j+j+c-e-h-f-i)%100;
                  l -= (e+e+i-a-h+a*n-k+i*j-m*e-f)%100;
                  n -= (d-g-c-g)%100;
               }
            }
            a -= (k+a-c+i-f+b+c*g-g+k)%100;
            f -= (j*a*m-k+a*h-e-d)%100;
            i -= (e+d+k-g+b-l-h-d)%100;
         }
         j  = (a-n*a+e*d-j-k-n+d*m)%100;
         n += (d*e+f+f-b-i-i*f+h+k-a)%100;
      }
      h += (d+g-j-m+j-j-l-e-f-g-h)%100;
      k -= (c*l+a-i-m+l-m)%100;
      k -= (c+c-f+h*c+g-e-e*e)%100;
      g  = (j-i+e*b-l-c)%100;
   }
   i -= (d-f+f-h+k*n+b)%100;
   a  = (l+a-d)%100;
   l += (c-g)%100;
   k -= (h*a+f+h+a+c-g-d*c+h-k-m)%100;
   n -= (f*a*h)%100;
   a  = (f-c)%100;
   k += (j+b-b-m+e*n*b)%100;
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
            k -= (k+m-a-g+a+f+a-k+i+b+k-c)%100;
            for( ; ++FORcnt[31]%5 ; )
            {
               
               switch( ++SWcnt[10]%3 )
               {

               case 1:
               {
                  n += (h+b-b)%100;
                  i -= (a+h)%100;
                  b += (f+a-d+g+b+d*i+e+h-a*c+i)%100;
                  h += (k*a*h+h*b-a-f+m)%100;
                  k += (n+l*f+k-i+i*h-m+g-i+i-h+k-i)%100;
               }
               break;

               case 2:
               {
                  k -= (e-m+m+e*d-h-c+n-i+i)%100;
                  i  = (d-n*b-g+h+d-a+g+i*m+k+i-d)%100;
                  h += (h*g+j-m-h)%100;
                  e  = (b*e*a-n-c-h+i-g-d+c+m-j)%100;
               }
               break;

               default:
               {
                  l -= (a+g)%100;
                  n += (c*g+j+i+n-j*i*h-d+d)%100;
                  h -= (k-d)%100;
                  h -= (k*d+a)%100;
                  e += (n+g+d*i+c+e*e*n-k-g+k-h+l)%100;
                  k -= (b*b*g+b+n+d*h+e-a-a*h)%100;
               }
               }

               if( ++IFEcnt[21]%2 )
               {
                  n += (d-l)%100;
               }
               else
               {
                  m  = (c-g+l+i*n-j)%100;
                  g  = (g-l-j+a)%100;
                  c += (n-f+e+f*e-l-m-e+f-e+l-h+e)%100;
                  n += (f+a-l+b+n+f+m+b*l+f+h+j*h-c)%100;
                  g  = (j-m+e+h+g+m-j+c-d-l)%100;
               }
               while( ++WHILEcnt[20]%5 )
               {
                  m += (n+b+n)%100;
                  e += (k-a*m-b+j+g-m-n+c*m+b+l-e)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[32]%5 ; )
               {
                  a  = (n*m-h*l*n+d-e+g+n-a-a)%100;
                  k -= (m-e-n)%100;
                  c += (k+e+n-j-g+i+b*a-n)%100;
                  e -= (c+g-a-i+j+g-j*d+j+e+b)%100;
               }
               if( ++IFcnt[15]%10 )
               {
                  b += (d-d+n+g+h-l-j)%100;
                  k += (a-g+l)%100;
                  e -= (e-a+n-i+i+j+m*i-f-c+h-n-g-i)%100;
                  j += (h+b+a-b*h+j*a-i-n+a-i)%100;
                  k += (d-l)%100;
                  c -= (j-n)%100;
               }
               for( ; ++FORcnt[33]%5 ; )
               {
                  g += (d-l+d-i+n-m-g+d)%100;
                  l -= (h-g*d+k)%100;
                  d -= (l-k-a+e*d*a*k-a+h)%100;
                  b  = (b-b*d+l+l-i*m+f+b-m+j-e)%100;
                  n -= (c-i+a+j-e+b-k-f)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  e += (b*j+b-e+g+g-l-g-h-j)%100;
                  k -= (c-l*c+h-b-n-b+d-l*c-l*i)%100;
                  l -= (e+k+c-n-i*m-g*f-j+l+c-g)%100;
                  n += (l-i-e+h-d-k+l+g)%100;
                  j -= (a+m+b*i*f*b+d)%100;
               }
               else
               {
                  d += (d-h+m+b-g*l)%100;
                  l -= (b-n*h-b-h*n-m+c+g-g)%100;
                  h += (k-d-a-f+d*h*h*n+k+g-h-d)%100;
               }
               f += (h-f+i+d+f+f+n+e+a)%100;
            } while( ++DOcnt[21]%5 );
            m += (h+g)%100;
            g += (h-g*l*h-j-j-m)%100;
         }
         i -= (j-i*k-a*h*e+n-a-j-c-n-h+k-b)%100;
         k += (n+j-d+l+m*m*m*m+b)%100;
         d  = (k*c+i-b-m)%100;
         k += (k*e*g-i+f-d*a+a-a)%100;
         h += (l+h-f-h+k*d-i-f*g+a-g+m-n)%100;
      } while( ++DOcnt[20]%5 );
      b += (c-k+c-f-n+j)%100;
      k += (c+e+e)%100;
      h += (e-l)%100;
   }
   n += (g*d-b-b-j+l)%100;
   l -= (k+j*d+m)%100;
   a += (e+h*e-i+b+h-m-i-k+d)%100;
   n += (d-k*j+i)%100;
   l -= (e-k-l*n-k-e*c+m*a+i+f-j-l)%100;
   m -= (e-h*i-k*n+l-k)%100;
   n  = (l-c+n*m-m+b-h+a+a)%100;
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
         h += (f-b*a+l)%100;
         for( ; ++FORcnt[36]%5 ; )
         {
            
            switch( ++SWcnt[11]%3 )
            {

            case 1:
            {
               if( ++IFcnt[17]%10 )
               {
                  k += (n+i*k+e+l-i+m+e)%100;
                  b += (i+d-f-f-l+g*g-i*a)%100;
                  c -= (a+m)%100;
                  d -= (f*k+n*j*f+n)%100;
               }
               if( ++IFEcnt[23]%2 )
               {
                  b -= (k+h-m+g*i-i-h+n-f-a)%100;
                  c += (a-d-b*d-h-l-m+c+c*i+j+d)%100;
                  m -= (c-h-m+j*n+e*b*d-h)%100;
                  j += (e+d-k*b*h)%100;
                  l -= (g+d)%100;
               }
               else
               {
                  g -= (i-j+n)%100;
                  h += (i+d)%100;
                  m -= (j-b*n-j+n-g*g-l-g-m*h+a-h+c)%100;
                  f -= (m*n*c+l*a+b+f+j*m+g+l-i*g)%100;
                  d -= (c+f-f+c-m)%100;
                  h  = (e-c)%100;
               }
               while( ++WHILEcnt[22]%5 )
               {
                  g += (e+m)%100;
                  k -= (j+h-a+f-m+m-b-j+a+i)%100;
                  i -= (c+h-g+c+e-j-m-l-m)%100;
               }
               do
               {
                  b += (c+n+i*b+l-b+h-a+m*i+f*e-c-j)%100;
                  m -= (c*f+m+l*g-m+e-g+j+c)%100;
                  k  = (i-n+d-k+d-h)%100;
                  i += (f*i+k+n)%100;
                  g += (b+i-k-e-d-d+a*e+d+d)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  f -= (a-l*f+c+d+a+f-h-g-a-n+k)%100;
                  a -= (b+b)%100;
                  e -= (a+n+i*c+m+k-f*g+g*h*b-i)%100;
                  c += (n-n*d*i-m-i*h*e-l-a+c-d-l)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[35]%5 ; )
               {
                  m -= (g+l)%100;
                  e -= (d-k+g+j+b)%100;
                  m += (c+g)%100;
                  k -= (a+m-n+f+g+e)%100;
                  g  = (n*a+a-f-c-i-d-k-i)%100;
               }
               if( ++IFEcnt[24]%2 )
               {
                  n -= (f+i-b-e)%100;
                  i += (n+g+e*j+n)%100;
               }
               else
               {
                  k += (a*k+c-a+d)%100;
               }
               while( ++WHILEcnt[23]%5 )
               {
                  b -= (j*k*n*l*f+j-k-m+m*f*a-i*g)%100;
                  l += (h+i*n*f+h+l+a*i-j+c+h+d+b+l)%100;
                  i -= (f+a)%100;
                  c  = (b*k+n+l*e+l+a-d-f*a+m+j*n-b)%100;
                  g += (h-l)%100;
               }
               do
               {
                  d += (b+c-d+e+i+k+h+e-m+a-i)%100;
                  h -= (d-n-j+f-l*n+f*m*n+d)%100;
                  c -= (k+k*a-k-n+g+k+d-c+f)%100;
                  j += (j*a+m+f-h+f-f+j*h-i)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[18]%10 )
               {
                  c += (l-m+e+f+h)%100;
                  h += (g*j-h*j+d-n-h-j+d*m+n-n+d+f)%100;
                  i -= (e-a+m+g+h-j)%100;
                  k += (h+j+j-n-d+k+a+n)%100;
                  h -= (g*k+e-g-e+m)%100;
                  c += (k-f-l+g+b-h-e+c)%100;
               }
               b += (d+c)%100;
            }
            break;

            default:
            {
               b -= (e-j*f*i+m-c+c-j)%100;
               b += (k-i+l+m+h-m*c+h-g+c-k-c)%100;
               a  = (a+n-c*a+m)%100;
               j -= (d+j+d+m-l+m)%100;
               b  = (m+f+m-g*i-h*j)%100;
            }
            }

            l -= (n*g+a)%100;
            c += (k+k-e+i+d-l+e+d-i-j+m+h*m)%100;
            b -= (e-i+m*i-i-e-n+m-n+m+j+n-k+d)%100;
            j += (j-n+b+l*d-e-h+g)%100;
         }
         l -= (i+j*g*e+j+c+a*m+i)%100;
         l += (i*n-h*n+d-j+c*g)%100;
         i += (k-n+m-k)%100;
         g -= (b+d-d-n-b)%100;
      } while( ++DOcnt[22]%5 );
      j += (c+d-n-f*d+n+j*l+j+f-j-m-j*k)%100;
      n -= (f+c+c-l)%100;
      i -= (m+a)%100;
   }
   f += (m*i)%100;
   a -= (b-e*l-e+b-i)%100;
   k += (g+k+l*i-a*h)%100;
   j -= (a+c*i*k*n*b+h-g-b+e*l)%100;
   e -= (k-l+h+b-d+b-g+m-f+f-d*j-i)%100;
   h += (e-a)%100;
   j -= (l+k-g+c*f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[40]%5 ; )
   {
      
      switch( ++SWcnt[12]%4 )
      {

      case 1:
      {
         if( ++IFEcnt[26]%2 )
         {
            h += (k-k*m-i-k+g-a*e+c*d+k)%100;
            j -= (g+g*j-h*c-h-l+i+b+b+c+e+h)%100;
            e -= (a+j-d-n+n-d-f*b-e+a-j-n+d+l)%100;
            e -= (g-k*m+k+b+g*b*n+e-n)%100;
         }
         else
         {
            while( ++WHILEcnt[26]%5 )
            {
               do
               {
                  h  = (a*k*d-b*d-d-m+e+c*j-a-h)%100;
                  i -= (n-h*d-g+e-m+f-g*e*c+a-e+g+e)%100;
                  n -= (l*e*l+i-j*j+f+k)%100;
                  a -= (j-c-b-b+i+f+h)%100;
                  l += (h-a*f-d*a+k-b-h-n)%100;
               } while( ++DOcnt[25]%5 );
               for( ; ++FORcnt[37]%5 ; )
               {
                  f -= (b+i+n+m)%100;
                  m  = (g+d-l*i)%100;
                  b -= (d-l+a+n+j-j-a*c+c)%100;
                  f -= (n+b+c+l)%100;
                  h -= (d-f+n-d+n-g+f*d-e-n-m)%100;
               }
               if( ++IFcnt[19]%10 )
               {
                  j -= (c+m-m-k-j-d+k+e-d-j+i)%100;
                  g -= (m-n*f+n+h-n+l-g+j+k-i)%100;
                  k += (i*g-l-m+m*n-d-m*e)%100;
                  d += (d-i-a-j)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  b -= (h*k*k-m-h+m*n*f+a-j-a)%100;
                  e += (h-n*g-i+n+a-g+n-n*d-a-e-m)%100;
                  h += (n*m+m-k*l-m-l+m)%100;
                  f -= (a-k+l-a+i+h+d+d+d)%100;
                  d -= (k-a*e*l+f-l-n-e*n)%100;
                  a += (i*i+h+h-l-k*g+i)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  d -= (i-a*d-k+c*b-l+k*c+n+l*h+h)%100;
                  f += (n*e*l-j+a-g-k-i+c+l+j+h+d-g)%100;
                  i -= (i-i+i+e-c-d+k-e*m+a+n-m)%100;
               }
               else
               {
                  k -= (n-m*j+f-i+i-j+g*a-f+m+j-m)%100;
                  f -= (b-a)%100;
                  a -= (d+d+j+h-a-k+l+h-b+n*d-f*n)%100;
                  c -= (f+j-m+i-e-b-m+g*j+j+f-b)%100;
                  a += (m+n+c-g+i-n+f+n+i-m+d+c)%100;
               }
               while( ++WHILEcnt[25]%5 )
               {
                  l  = (i+e-n+h*l+k*e+b+k)%100;
                  n -= (c-b+h-k-b-e*j+e+g-n+m+m+f)%100;
                  c += (i-i+n-h-k-m*g+d+l+n+h*k+l-d)%100;
                  k += (m*b+f+g-h+e-l+h-b*f-j)%100;
                  d += (a+g)%100;
               }
            }
            do
            {
               n -= (b+h+n-m-j+b)%100;
               for( ; ++FORcnt[39]%5 ; )
               {
                  m += (d-e-a-f)%100;
                  d  = (h-i)%100;
                  e += (d-c)%100;
                  g += (g+e)%100;
                  m += (c+m-j-b-b+m+f)%100;
                  b += (n-m+h)%100;
               }
               
               switch( ++SWcnt[13]%3 )
               {

               case 1:
               {
                  m -= (j+d-k)%100;
                  e += (f-i-g+d-f*a)%100;
                  k += (f+c+a+h-b+d+l+c+j-h+k+m)%100;
                  n -= (b-n+g-f+l+e+b*m-c+i+k-d)%100;
                  n += (b-m-i+n+e-d-g-c+e-l*f-m*n)%100;
               }
               break;

               case 2:
               {
                  k -= (f+l-g-i-l-l)%100;
               }
               break;

               default:
               {
                  j -= (k+k+k-e+h+k*a+l*i*g)%100;
                  e += (e+k)%100;
               }
               }

               if( ++IFcnt[20]%10 )
               {
                  i += (j+b+f-g-h+l*f-n)%100;
                  l -= (k+m*h+h-k+k-n+j+l-b)%100;
                  n += (b+m+h+j+f*i-m)%100;
                  c += (e*l)%100;
                  n += (i*g+d+m-a-c-e+g-e-k+h+c-a)%100;
               }
            } while( ++DOcnt[26]%5 );
            e -= (f+l*h*d+g+e*n*j-m*e*m-e-l)%100;
            n -= (m+h-f*d+k-i)%100;
         }
         c -= (k+j-i+m+b*b)%100;
         k -= (e-c*k+n)%100;
         j += (a+k+i)%100;
         m -= (j-h-n-g-k+b*h*k+b)%100;
      }
      break;

      case 2:
      {
         m -= (d*c-b-j-m)%100;
         n += (k*l*e-l+g+k+b-c)%100;
         n += (i-e-l+g+i+j-c-f-n*b*n*m*l+g)%100;
         b -= (m-g)%100;
         n -= (k+d-k*n-a+f+d)%100;
         m -= (h+c-a-c-b-g+i)%100;
      }
      break;

      default:
      {
         k -= (k+f*a+l*n+i-f-c*f+k+h)%100;
         g -= (c-l+j+d+e*a)%100;
         g -= (b-i-i+g)%100;
         j += (k+h+a-n+n+k*e-f*h+i)%100;
         n += (g+m+h-d-h-e+m-d+a+e+f+l)%100;
      }
      }

      m += (b-k*k+j-h+i+i-b-f*a+d-n)%100;
      m += (c-j+j*f*b-n+i*a+a)%100;
   }
   c += (k+f-i*k-n-g-n+a-f+g-b)%100;
   k -= (d+g+m+b-e-c*l)%100;
   a += (k*n+j-c+d*d+f+n+k)%100;
   k += (l-n+e-f*n-d+i+l-k+l-k)%100;
   m -= (b+k+e*f-j+c+d*a-d+c)%100;
   m -= (e-l*b*l-k-i)%100;
   d += (m+b*n-b+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F13(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[28]%2 )
   {
      i -= (j-d*c+j*h+b*c-b+e*l)%100;
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
                  d += (a*b-a*l+c+f+j*h+h+d*a-d-e+d)%100;
                  c -= (n+k+h-c+d)%100;
                  h -= (m*j-h-c+n+e-n*n-l+c+l-m-g+a)%100;
                  a -= (e-j*c*d+g*d*e+l*l*k*m*j+c-d)%100;
                  e -= (a-m-b)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  a += (c-b-a)%100;
                  k += (b+f*j-i)%100;
                  k += (b-d+l)%100;
                  h -= (g+n+k*h+b)%100;
               }
               else
               {
                  f -= (i+b+c*e+m+e-f)%100;
                  d += (h+b)%100;
                  g -= (k-e+g-d+b-n-i+n-h+h*h)%100;
                  k += (h-h-k-b-e+k*c-l+i)%100;
                  i -= (k+h*g-h+m*h-i-h*l-h-b-b*c)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  n -= (l+d)%100;
                  c += (c*n)%100;
                  c  = (k*h-j-f-d+m+j-n+g+i-a)%100;
                  i -= (d*h-a-f+b-a)%100;
                  b -= (n-l)%100;
                  d += (j-j+f-i+k-k*m+m*d+d)%100;
               }
               do
               {
                  k -= (a+b*f*b-d+n-h)%100;
                  k -= (h*a-f)%100;
                  i += (n*g)%100;
                  g -= (i*e+d+j)%100;
                  i += (n-c+c)%100;
               } while( ++DOcnt[28]%5 );
               if( ++IFcnt[21]%10 )
               {
                  l -= (d+d*k-f-a+a*k*m-i+i-g*b-b)%100;
                  b -= (d+j+j*a+e*e+c*a+l+l-e-h+g)%100;
                  c -= (a+i-m+c*g+h)%100;
               }
               j  = (d-k)%100;
            }
            for( ; ++FORcnt[43]%5 ; )
            {
               
               switch( ++SWcnt[14]%3 )
               {

               case 1:
               {
                  m += (h+g-i-n+b+m+f-h-m-m-a)%100;
                  l -= (j*d*d+l-e*g+a)%100;
                  n -= (h+e-j*d-k)%100;
                  l  = (j+d)%100;
               }
               break;

               case 2:
               {
                  d -= (m-n+d-i*k-l*n*c-a)%100;
                  a += (j-g)%100;
                  h += (a+n-b)%100;
                  d += (h*l-n-k+e-l-g*b+b-m*d+k+m)%100;
                  n += (j+k-l+d-g-b-c-d+g+i+h)%100;
                  l += (k-c-l+e*k*a*g*f+d*m+c-n-c)%100;
               }
               break;

               default:
               {
                  d += (c*c-j)%100;
                  e += (a+a+c-g-b-h*j-d-c)%100;
                  m -= (j+g)%100;
                  n -= (k-j*c+b+m-j*k+f+b)%100;
                  i  = (k*h+m+g-l)%100;
               }
               }

               e -= (h+d)%100;
               j  = (c-f-g-h)%100;
               d += (d-h+j-b)%100;
               m -= (c+e+k+i-j+a-k-g*h*c-h-d)%100;
            }
            d += (f-e*l+b+l+l*j+l+m)%100;
            c += (g+a-b-h*n+j+c*g)%100;
         } while( ++DOcnt[27]%5 );
         n += (m-l*e-e-c-i-d)%100;
         e -= (k-n-c-a-f+g+i-f+l-h-b-f)%100;
         d -= (f-f-g+c*g-m*c*i+l-f)%100;
         n += (e-i+d-c+i+b*i-c)%100;
      }
      b -= (j-n-m-e-g)%100;
      b += (a*a+k*n-b+h+b-k)%100;
   }
   i += (k-d+e-h*l-j+k*l*h)%100;
   f += (h+m-c*c-b+k)%100;
   b -= (d*m+h-d+d-i-i-h+f-j)%100;
   e -= (i*g-e+l+k-n*k)%100;
   m -= (g-d+j*b*e-e+e)%100;
   j -= (g*g)%100;
   f += (i+i+m-j+g+a+n+m*l-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[31]%2 )
   {
      f -= (c-k+h-k+m*j+d-n+f-d-m+b)%100;
      b += (d-b+h-h+k+g+n+l+b+b-k)%100;
      b += (l*f-a-c+m*e*m+n-k)%100;
      h  = (f-h-n+e+k*d-b*k-k-n*d-b*g-n)%100;
      f += (i-i-f+k-f+g-l*j*d)%100;
      i += (c-g*c-d+n*c*d+c-i-a)%100;
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
                  k += (n-n+i-c+a+j*d+k+c+l-n*f)%100;
                  l -= (n+a+h-c+e)%100;
                  c  = (e+k+j+b-f*c+g-h*l*f-c+l+l)%100;
                  h += (f*l+g*l+d-f+k+d-n*d*j)%100;
                  j -= (c*n)%100;
               }
               for( ; ++FORcnt[44]%5 ; )
               {
                  a -= (j-k*f+a+f+k*k-b)%100;
                  h += (m-i+c*j+a)%100;
                  a += (m*i)%100;
               }
               if( ++IFEcnt[29]%2 )
               {
                  i += (h*e)%100;
                  n -= (h-h*b+k-m+e-l+n*d)%100;
                  b += (c-h+i-e-j*d-e-a+g+l*d-k)%100;
                  a -= (b+n*k-f+a+l*c-i)%100;
               }
               else
               {
                  n -= (m+j+g+f-j-d+b-e+a+i*d-a+m)%100;
                  f += (l*f)%100;
                  l += (f*b)%100;
                  k  = (j-j)%100;
                  m  = (f-i)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  k += (e+g*d-e*l+j-e+d-c)%100;
                  h += (k+e)%100;
                  m += (f*k)%100;
                  f  = (i+d-k*i-i+d*j-k)%100;
                  m -= (k*n*b+c)%100;
                  a += (c-h+e*n+c-l-b+d+i)%100;
               }
               do
               {
                  n  = (e*j*b*k+h)%100;
                  g += (l+d*d-f+f+a-n+k-f)%100;
                  h += (e-g-c)%100;
                  b -= (c+a+e+c+c-c+f+b-f-h+k+f)%100;
                  j += (l-l-l-g-j+k)%100;
               } while( ++DOcnt[30]%5 );
               h -= (f-g-i+f-l*e-j-g+b-d+n+g-j)%100;
            }
            for( ; ++FORcnt[46]%5 ; )
            {
               
               switch( ++SWcnt[15]%3 )
               {

               case 1:
               {
                  b -= (n+h*d)%100;
                  l += (m+h-k+m-d+g)%100;
                  k  = (m-j+j-j-m*k-e*f*n-i)%100;
                  c += (c+i+e+c-d*l*g-b+d-l-h-l+n)%100;
               }
               break;

               case 2:
               {
                  a  = (g+b*l+m)%100;
                  a -= (k*d+m+d+a+e+i-g-f-f+g)%100;
                  g -= (j-g+l*h+d+h-d-h+i-n-j*j+b+n)%100;
                  c += (i*d-m-b*i*a-b-n-g+h+g-n*j)%100;
                  b -= (j+j)%100;
                  b -= (g-g-h-n-a)%100;
               }
               break;

               default:
               {
                  b += (f+m+m+b-f-d*a-e-d-c+f)%100;
                  j -= (g-m+c-a+l+i-d*c-k-e+f)%100;
                  i  = (j*a-i-l)%100;
                  l -= (m+j+i+g-f-h*f+n+n+n)%100;
                  k  = (f-i)%100;
               }
               }

               if( ++IFcnt[23]%10 )
               {
                  e -= (f+b+h+g+j+l-g*e-b*a*j)%100;
                  k -= (g-i-d+f-e+g-n+i*n+d*b-n*h-j)%100;
                  d += (h+m-f*h-l*d-f*m+e)%100;
               }
               if( ++IFEcnt[30]%2 )
               {
                  m += (d+l+c+a+b+d)%100;
                  f -= (k+d*i-c+g-e+f-g+m-n)%100;
                  m -= (c-b-e)%100;
                  a -= (k-g*a-m+e-j-k-a+j*i)%100;
               }
               else
               {
                  c -= (b+i+f-h*e-n*j)%100;
                  d -= (g-b*h-g*e-a-b*a*a-a+j-a)%100;
                  f  = (i-m-a-l)%100;
                  c -= (e-g-l)%100;
                  i -= (k+m+f)%100;
               }
               l  = (e-b-n+f+i-e+e-c+d*b+g*g+e)%100;
               n -= (c+i+g-c+e)%100;
            }
            a -= (i+f*l)%100;
            l += (n+m+j+d+g*e-g)%100;
         } while( ++DOcnt[29]%5 );
         e -= (a-k-m*g+g-k)%100;
         c -= (d+n-d-d-g-j*a+b*i*d+i)%100;
         l  = (l-a+h*n*b)%100;
         l -= (c-f-e-j-d-l)%100;
      }
      j  = (d-d*g*a-j*n-m-k-f-k+f*g+l*e)%100;
   }
   c -= (n+j+b-n*a*f)%100;
   n += (l*h-g-h-h)%100;
   a -= (i+i*d-h+f-j)%100;
   b -= (m*j)%100;
   g += (e*b-e-m*m+l)%100;
   g += (d-e-d+k)%100;
   h -= (k+j*e+b-a*c*n*b+m-d+e)%100;
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
                  a -= (n+f)%100;
                  g -= (n+i-d-h-i)%100;
                  e += (g+e-h+l-c+k*l+b+e+e)%100;
                  a -= (k-h+l*g)%100;
                  i += (m-c+n+b*j-l+i+h-c-c-i+i)%100;
                  e += (i*j)%100;
               }
               else
               {
                  m += (b+f+a+i)%100;
                  b += (b-b+c+l-h*j+l+n-j*h)%100;
                  c += (h+l+k*m-l*a+c+f+b-n+h+c+n-l)%100;
                  c  = (c-g)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  a += (c*l-h-c*m+a-k-g-i+l)%100;
                  n += (n-h+h-c*i-l+j)%100;
                  e += (d+l+i*h-k+i*b-e+a+d)%100;
                  g -= (e-l-l-i+l*c-i)%100;
                  h -= (h+i*c+l+g*j-g)%100;
               }
               do
               {
                  k -= (c+c-c)%100;
                  j -= (a*c+l-g+k+b-b)%100;
                  d += (k*n)%100;
               } while( ++DOcnt[32]%5 );
               if( ++IFcnt[24]%10 )
               {
                  a -= (c-d+g-a+l-b-c-i-l+b-n+n+a)%100;
                  g -= (m+d-a*h+c-a-a-a*b)%100;
                  c -= (i*h+i+l+k+l+k-n-n-b+k+e+n)%100;
                  d -= (l*h-g+g+n+c*f-i-c-c*g-h-i)%100;
                  k -= (j-c-g*d+j+c-d-a-g+g*d-n-l)%100;
               }
               b -= (k*i-h*e+n+i+k+e-e*k+e-f)%100;
            }
            for( ; ++FORcnt[48]%5 ; )
            {
               
               switch( ++SWcnt[16]%3 )
               {

               case 1:
               {
                  n  = (a+a+j+i*i+n*l-g)%100;
                  m -= (b+e+c+n*b+c-m+d)%100;
                  d -= (c+h+f)%100;
                  g += (b+h-i*f*d+h+l+k+k-g-c+j)%100;
                  g += (m+m-d*i-j)%100;
                  a -= (g+n+b-k+f*c*m*h-l+g-d-l)%100;
               }
               break;

               case 2:
               {
                  a += (j+g*i-d+a*e+c+b-l*f-h+a-f-k)%100;
                  b -= (a+b-b+g-e*l-n+l-h-m-g-g)%100;
                  l += (f+h-j+c+b+e-j+l*e-d*b-j-g+m)%100;
                  i += (b*c-a+j+a)%100;
                  n -= (n*i-e-g-g+k-l)%100;
               }
               break;

               default:
               {
                  f += (m+a)%100;
                  m += (m+a+n-f+g)%100;
                  d += (l+i+n+k*n+f+b+j-e-e-h+l+g)%100;
                  a -= (m-c-h-c*l+h-b-h)%100;
                  d -= (m+e+f-m-f+k-b-l+k)%100;
               }
               }

               if( ++IFEcnt[33]%2 )
               {
                  c -= (k*d*j*c+n-f+a-k*l)%100;
                  h += (h-g-f*j+f-b+f-m-l*e-h+j)%100;
                  b += (d+i-i+j*e-a-a+e+c-c+d)%100;
                  g -= (g+i*e-a-d+b+g-b-e-e-b-e*g)%100;
                  i += (l+g)%100;
                  j += (f+h-n*c-d*l-e+e-c-i+m*f)%100;
               }
               else
               {
                  e -= (i-n*h+g*l+f+d-c-n-l-h+f+c)%100;
                  j += (h+h-f+a-j*h*i+f-i+l)%100;
                  e += (a+a+i+m+m+j-e+j-e)%100;
                  b -= (a*n-j+b-d-h+e)%100;
               }
               while( ++WHILEcnt[32]%5 )
               {
                  j += (h-n)%100;
                  h -= (e+h-i*e-c+c+l)%100;
                  a += (l-e-a+f-k-i*i*c-g)%100;
                  m += (i-b*d*d+i-b-h+k+g-f+a)%100;
                  c += (c+k)%100;
               }
               n += (f+h+e-i-m-a+n-k+j)%100;
            }
         }
      } while( ++DOcnt[31]%5 );
      f += (j+f-j-c)%100;
      j  = (m-l-k-m+b-n-d+a*b-n)%100;
      m -= (e+n)%100;
      b -= (j+c+l+e+g+d-f+c)%100;
   }
   d += (k-c*i-m)%100;
   m += (j+j*j+b-b*j*f-i)%100;
   a -= (d-l+h*g-c+n-n)%100;
   n += (a-e+l)%100;
   c += (d-a-i+b-j*j)%100;
   c -= (d-m-i-d-g-d-f-n)%100;
   n += (k+i)%100;
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
                  l -= (f+g-a+b*b+c-g*d-c+c)%100;
               }
               else
               {
                  b += (e*d+k+n*k*a)%100;
                  d += (c-c)%100;
                  j -= (g-h*c+i+d+m*i-f-m+f+b-m-b)%100;
                  j += (f+a+m+i*a-d+i+f*e+c+h+g-b+m)%100;
                  m  = (m-i)%100;
               }
               while( ++WHILEcnt[34]%5 )
               {
                  b -= (g-h-l+l-l+l+e+l-h*d*n*c*j)%100;
                  e += (j+c-b+f+d-n+j-l+d-i)%100;
               }
               do
               {
                  j += (a-d)%100;
                  j += (b-m-j+n+c*e+h)%100;
                  a += (k+e-i-h+h-i+j-h-g+i+f)%100;
                  a -= (d+j+a-k-m+k-l-k-h+h+g)%100;
                  e -= (c+m-n)%100;
               } while( ++DOcnt[34]%5 );
               b += (a+i+n+i-d*a-n+j+h-b-f-g+j)%100;
               for( ; ++FORcnt[50]%5 ; )
               {
                  a -= (b-e-h-c+h)%100;
                  g  = (h-h+g-f+b*d-f+n*b-n-k)%100;
                  m += (e-k-h*i)%100;
                  l -= (k*b-k+c+h-l)%100;
               }
               
               switch( ++SWcnt[17]%4 )
               {

               case 1:
               {
                  k += (c+g*a-n+i-f+g+e+f+c+f-f-m-d)%100;
                  k += (n+h+e*h-m-g-k+d*g*m*e+l+j)%100;
                  l += (i-c-n+h-h*g+m)%100;
                  g += (l+m)%100;
                  k += (c+b-c+j+i+d+b)%100;
                  b -= (i-i+m*h+d+l*e+d-g)%100;
               }
               break;

               case 2:
               {
                  m  = (l-e+n+f+f+d+k)%100;
                  m += (k+l+c+k+j+l+b)%100;
                  h  = (k-c-g+k-b-d*d+k)%100;
                  k -= (e-h+m-i-i*h)%100;
                  a += (c-k+m+a-d-l+g*k-e*l+k+b-b-g)%100;
               }
               break;

               case 3:
               {
                  m -= (c+n)%100;
                  k -= (k+d)%100;
                  c -= (b+m-l)%100;
               }
               break;

               default:
               {
                  e += (g+n+n+h*l-i)%100;
                  b -= (m*m)%100;
                  b -= (e+j*g+m)%100;
                  g -= (i+i)%100;
                  m += (b-a+f-m-d+n)%100;
               }
               }

            }
            if( ++IFcnt[25]%10 )
            {
               if( ++IFEcnt[35]%2 )
               {
                  e  = (e+i*i-n*k-n+b+i*n*g-c+g*g-d)%100;
                  i += (a+k-m+f-n*n+h+b)%100;
                  j -= (n-e-a-d-k+a-e-i*i)%100;
                  g -= (f+a-k+h+h*g-i-k-f+i)%100;
                  n += (d*m-n+b-l*c)%100;
               }
               else
               {
                  g += (b*e*a+l*g+d)%100;
                  c  = (b+m)%100;
                  d -= (n-b*i+b-f+n-m+b+n-l+a)%100;
                  l -= (h+m*n-a+j+m)%100;
                  n += (k+h+e+b+k*k+h*k*n+g+n-g)%100;
                  f -= (i*l+g-g-j*k+h*h-f+d-b*k-i+d)%100;
               }
               while( ++WHILEcnt[35]%5 )
               {
                  e += (j+m+a-k+l+l)%100;
                  h -= (f-m-b+m-k+n-h+i-l-j-i)%100;
                  l -= (h-b+g*a*c+j)%100;
                  h += (f+f-g-b+a-h-h+i*m-l+j-n)%100;
                  b -= (f+j-n+n-e-d-j)%100;
               }
               do
               {
                  j -= (b-i)%100;
                  h += (j+f)%100;
                  c += (i+k*j*h-d+h*i-l+g+h-m-d+g+f)%100;
                  j  = (h-m+m+f*n+l+i+j+l+l-g+g+g)%100;
               } while( ++DOcnt[35]%5 );
               g -= (n-e+e+g*f)%100;
            }
            k += (d*e+i-k+e-g+k-c+d)%100;
            f += (m+c*b-g-e)%100;
         }
         c += (j-a+b-g+f-f+i+n*d)%100;
         c -= (f+e-a-a+l*j)%100;
         c += (m-f+d*j*m+e+n-g*a-m+m+m)%100;
         h -= (b-j*e*h+g)%100;
      }
      k  = (i+m-e-k-a-h+h+i*b-a-k-f-g*c)%100;
      n += (m+b+e*j*j-g*l*m+l-n)%100;
   } while( ++DOcnt[33]%5 );
   c -= (n-k)%100;
   k -= (h*k*f-k*i-n-b+d*h-i-f-f+d)%100;
   a -= (a-a)%100;
   l -= (e-f*n)%100;
   n += (g-n+f-j-i-i-d+l+b+f+f*f*a)%100;
   c -= (e-l)%100;
   b -= (l-f-d*c*a-a+a+e)%100;
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
            h -= (b*k+i-g-a+j-i+k)%100;
            f += (k*m)%100;
            c += (l+g)%100;
            l -= (k+j*g-c-f-c+e*i-d*a)%100;
         }
         else
         {
            while( ++WHILEcnt[36]%5 )
            {
               do
               {
                  m += (a-b-h+j-j+c+m-g+m-l)%100;
                  j -= (e*e+d*f+d)%100;
                  e += (l-c)%100;
                  m += (k-b)%100;
               } while( ++DOcnt[36]%5 );
               if( ++IFcnt[27]%10 )
               {
                  m -= (a+n)%100;
                  i -= (l-k+k-d*g*d*c)%100;
                  n += (b-f)%100;
                  d -= (e+h*a-h)%100;
                  b += (f-f-d)%100;
                  b -= (m-f+b-b-c+m+h-g-n+c)%100;
               }
               j += (m*b)%100;
               for( ; ++FORcnt[53]%5 ; )
               {
                  d -= (g+f-k)%100;
                  i += (b-b-b*i*c)%100;
                  n -= (l+a+h-h-k*d+c-i-n-a-b+j-j)%100;
                  b -= (h+n*e+a+g)%100;
                  i += (j+c-j-n)%100;
               }
               
               switch( ++SWcnt[18]%3 )
               {

               case 1:
               {
                  k -= (a*j-a+i+j+k-c*i*b)%100;
               }
               break;

               case 2:
               {
                  n -= (d*i-a*h+g-c+j*f-i-b-e*k+i-c)%100;
                  k += (j-i+a-l+a-n*m-e-e)%100;
               }
               break;

               default:
               {
                  f += (l+i)%100;
                  l += (c+a-l-c+i-d+d+g-d-d-i-n+h-m)%100;
                  i += (h+i-g-j-l+b+h-i-c-e+i)%100;
                  k -= (f*h+n*d*m-a)%100;
                  d += (j-c-n+h*m*j-c-h)%100;
               }
               }

            }
            if( ++IFEcnt[37]%2 )
            {
               for( ; ++FORcnt[55]%5 ; )
               {
                  n += (l+j-i-k-m*b*f+i-g-j+g-m+k-h)%100;
                  b += (i*m)%100;
                  a += (e+h*c+l+b)%100;
                  n += (e-d+c-h)%100;
                  n += (m+m)%100;
                  j -= (i+d-d+m-h+f+j+d+f+m)%100;
               }
               if( ++IFEcnt[36]%2 )
               {
                  h += (d+h-m)%100;
                  c += (i-h*e-b+m)%100;
                  e -= (i+b-h*i+b+l+i+c+j)%100;
                  n -= (g+i*j-d+h+f)%100;
                  c  = (f+h+l-b*m-g*a)%100;
               }
               else
               {
                  i -= (a*e-g-d+n-h-m+l+e*b)%100;
                  g -= (f+c-f+h-a+n-e+i+l+b)%100;
                  m += (h-b+f-h*c+n+h*l+c-k)%100;
                  g += (c+g*b)%100;
                  g -= (f-c-a)%100;
               }
               i += (i-l+k+i-m-j)%100;
               c += (b+e-g*g+j-j*b+f)%100;
            }
            else
            {
               while( ++WHILEcnt[37]%5 )
               {
                  l += (k*n+b*n-e-b-b+b)%100;
                  i -= (d-a*m*l-j+h-j+d-j-m-g*h)%100;
                  a += (k+g-c+d-e-d)%100;
                  d -= (h*d+f-m+m)%100;
                  m -= (i-k-h-d+l+g+g+e*g+f+m*e-h-e)%100;
                  c += (l+j-l)%100;
               }
               do
               {
                  e += (k*i*m+a-l-k-h+g-j-k)%100;
                  c -= (i-e+i+l*a+c-n+d+d-d+j-h)%100;
                  g -= (f+b)%100;
                  m -= (b+f*l-i+a*e)%100;
                  j -= (c*e)%100;
               } while( ++DOcnt[37]%5 );
               for( ; ++FORcnt[54]%5 ; )
               {
                  h += (l+e)%100;
                  f += (d+h*g+k-a)%100;
                  i += (m+c-h-j*b+n*a-a+g-d)%100;
               }
               if( ++IFcnt[28]%10 )
               {
                  i -= (l*h+a+g*c-f+l-n-m)%100;
                  a += (a+h-m)%100;
                  c -= (b*b)%100;
                  b += (e*g+l*f-j-b-k+b*a-m)%100;
                  b -= (j-k+e-c+a)%100;
               }
            }
            n -= (h+g-j*n-m-b+k*g*g)%100;
         }
         g -= (m+k)%100;
         e -= (b-j+i)%100;
         k += (l+n-n-k-a)%100;
         a += (m-a+b-i*g+g*l+d+l)%100;
      }
      c += (l*b-d-i)%100;
      l -= (a-d-b+m+h+g+a-e*g+b)%100;
      e += (c-l+g+g-m*b)%100;
      l += (n-b)%100;
      c -= (m-c*n-c+l+f*n-j)%100;
   }
   l += (d*i*k-g-f+a*i)%100;
   f -= (l+j-g+m*j-e-e)%100;
   k -= (m-l)%100;
   f += (j+b-a+c-b-b*h-a+i-e-n-f-k)%100;
   c += (a*i-g)%100;
   i -= (j-l-h-i*i-d)%100;
   f -= (c+a-g*i+h+a+m+n*g+b-b-b)%100;
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
         e -= (f+m-n+m-d*h-h-b)%100;
         for( ; ++FORcnt[60]%5 ; )
         {
            
            switch( ++SWcnt[19]%3 )
            {

            case 1:
            {
               if( ++IFcnt[29]%10 )
               {
                  l  = (h+e-b)%100;
                  j  = (k*i-b-f-b-l*i-l)%100;
                  h -= (n+k+k-i*h*f-i-k-d+j*b*m+c-l)%100;
                  k += (d*j+f*h+f+k-k)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  n -= (h-l-c+b*k+l+j+f+e-l+b*b-i+m)%100;
                  d -= (b*i-n-k*l-c-j+m*m+e)%100;
                  g -= (d-l+i)%100;
                  l -= (f*k+a)%100;
                  a -= (f+k-h*i+b*f+f)%100;
               }
               else
               {
                  i += (d+l-a+l-m-m*d-g*h+i-k-e*n+b)%100;
                  j += (g-n)%100;
                  c -= (l+i)%100;
                  h -= (d+a-l+h+g)%100;
                  j += (e+a+g*k+h)%100;
                  j += (h-n*a-b)%100;
               }
               while( ++WHILEcnt[38]%5 )
               {
                  d += (m*m+n-h-l*f+c-i)%100;
               }
               do
               {
                  f += (h+c-e-k-k)%100;
                  m += (j+i+j-b+k-a+g+n)%100;
               } while( ++DOcnt[39]%5 );
               for( ; ++FORcnt[58]%5 ; )
               {
                  f += (d*c*h*i+j-e-h+a-m+d*b)%100;
                  b -= (f-c-e-b+m+d+m*m-f+c+m)%100;
                  h += (m-f*c+k-c)%100;
                  n += (e-m-h)%100;
                  k -= (g+g*m+e)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[59]%5 ; )
               {
                  k  = (a-l-j+h*a*m-l-m+j+g-c-h-l+h)%100;
                  m += (j+d-i)%100;
                  i -= (c*h+i*k*h-b-g-m+c-n+f-c-h*f)%100;
                  h -= (h+m+b-h-j*n+l-l+i+c+a+l+k-d)%100;
                  j -= (f*g+j+i-m*m*g*b+l-a-f-d)%100;
                  l -= (n-b*l)%100;
               }
               if( ++IFEcnt[40]%2 )
               {
                  c -= (f-n+n-m)%100;
                  a -= (b+f+k-i-k-h)%100;
                  a -= (g-e+f-a-i+l+d*a-g-j)%100;
               }
               else
               {
                  a  = (m+i+m-f-j)%100;
                  a += (m+n+j+b+k)%100;
                  k -= (n-j-d+m+a-e)%100;
                  n  = (m-a+e-j-m*a*i)%100;
                  i += (i+d+k-a-n*n-n+m-l-j+h*i+i)%100;
               }
               while( ++WHILEcnt[39]%5 )
               {
                  g += (j+j+m-b+d+g+g+n-e*h*g+b*a)%100;
                  f -= (m+l-n-c*i+n-m-c*j+e*n)%100;
                  l -= (h*b-i+i-j-e-j+i-c*b+l-h-i)%100;
                  i += (g+k-k-f+k+j+d+i+c-a+d*f)%100;
                  e -= (a+n-i+d-b+k)%100;
               }
               do
               {
                  c += (d+m*e-m+h-i*c+c-f-m+k-d)%100;
                  l -= (a*e-a-e-n+n+g+c-a+e*d)%100;
                  c  = (i+a+j-l+a+c-d+n*g+b-n+a-i+k)%100;
                  j -= (m-e+h-a)%100;
               } while( ++DOcnt[40]%5 );
            }
            break;

            default:
            {
               m -= (g-n-b+a-b+k*h+a+n+f+f)%100;
               a += (d-g+a*d-j+j-g-e+j*b+j-i-i)%100;
               k += (c-f+k+c+d+k+g+d-m+a+k*n*n+k)%100;
               d -= (g*f*c+b+m+b)%100;
               f -= (e+b-m+i)%100;
               f -= (n+j+c*m-f-e-j-i-i-a-c-e)%100;
            }
            }

            d -= (n+n+d-d*h+i+n-n)%100;
            l  = (n-h-d+m)%100;
         }
         g += (l+j-j+l+a+e)%100;
         b += (g-j-h*d-m-n+c*d*b-m*b)%100;
         a += (j+k-d-e+m-l+d)%100;
      } while( ++DOcnt[38]%5 );
      a -= (i*e-e+a+a+k+d+i*j-i*b)%100;
      m += (a+i+n-b-f*n+f+d)%100;
      m += (d+b-j+l*l-l-k-b-c-i)%100;
      c -= (b-h-c+f+d-g+j)%100;
      e -= (h-j)%100;
   }
   h += (g-i*h-m-b-n)%100;
   n -= (m*i*m+g+n-b-c*h+i)%100;
   k += (h-i-g-g*l-f+e+c)%100;
   a -= (a-g+i*k+c*d)%100;
   l += (g+c*d-g)%100;
   d += (l-k*i+j-h+e+b+a+n+g+l-l-i*i)%100;
   g  = (k-m-n-m*k-c-e-f-g+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F19(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[31]%10 )
   {
      i  = (m-l-a+g*j-d-i-g+g)%100;
      for( ; ++FORcnt[64]%5 ; )
      {
         
         switch( ++SWcnt[20]%3 )
         {

         case 1:
         {
            if( ++IFEcnt[42]%2 )
            {
               while( ++WHILEcnt[42]%5 )
               {
                  k  = (m*a-n-h+a*a)%100;
                  d -= (m-f+b+j-k+d-f-j+g+n-n)%100;
                  j  = (m-k*g-l+k+a-g+n*f-e+n-e-d*h)%100;
                  k -= (h-i+i)%100;
                  f -= (b*i-e-g*j-g+n-j-h+d+f-a)%100;
               }
               do
               {
                  h += (a+l+c+l*n*l)%100;
                  e += (j*f*d*k+g-m-c-d-e-b*h+n-h+j)%100;
                  a  = (a+n-f-b-a+d+n+d+g+l*m-g-c)%100;
                  b += (n*m)%100;
               } while( ++DOcnt[42]%5 );
            }
            else
            {
               while( ++WHILEcnt[41]%5 )
               {
                  g -= (m-n+l-i-n+k*e-e-j+m*b+c*i)%100;
                  i += (h-g-f-i+c+j+n-h+b+n)%100;
                  b -= (j-l-g+i-j-g+c+a*m+j*f+g)%100;
                  k  = (l-n-l+a+a+d*b-f+f-i+i-j+c*n)%100;
                  a += (b+b*l+n-j+i+h*c+j-h-m*k)%100;
               }
               do
               {
                  m += (f+l-e-g)%100;
                  h -= (g*h)%100;
                  d += (d+k+a*h)%100;
               } while( ++DOcnt[41]%5 );
               for( ; ++FORcnt[61]%5 ; )
               {
                  f -= (c+b+i*a-d*h+g-a*c*b)%100;
                  h += (m*d-d-e-k)%100;
                  a += (c+a-b-e-c-g+d*g-e*h-n+a)%100;
                  e -= (b+l-i+e*m-l)%100;
                  d += (c-m)%100;
               }
               if( ++IFcnt[30]%10 )
               {
                  d += (g*g+e*m+n-l-g+a*d+f-m+g+i)%100;
                  f += (m-e-b+f*m+f*g-e)%100;
                  e -= (i+b+m+m+d+n+n)%100;
                  m += (b*a+h-n+g*h*i-b+m-n-m+b)%100;
               }
               for( ; ++FORcnt[62]%5 ; )
               {
                  i -= (b+m+f+j+j+m*e)%100;
                  l -= (j+f+n-g*c-d*d-j*f+d-f-b)%100;
                  e -= (k*i+a-h+e-n)%100;
                  d -= (j*m+n*c+n)%100;
                  n -= (n+f-m+i+m+d-c+e-j+k+b+l-g)%100;
                  j += (i-f+j)%100;
               }
               if( ++IFEcnt[41]%2 )
               {
                  l -= (i+a*f+i-e+h-f-c)%100;
               }
               else
               {
                  l -= (c+n*d+f+k*h-k+k)%100;
                  i -= (k+a*l)%100;
                  k  = (g*b*n+e-j-b+b+e+a*a)%100;
                  n += (i+h)%100;
                  n -= (l+a-a)%100;
               }
            }
            f -= (l-f-n-j)%100;
            for( ; ++FORcnt[63]%5 ; )
            {
               
               switch( ++SWcnt[21]%3 )
               {

               case 1:
               {
                  e += (d-b+a+h-l-c-h+g+b-e+c+k-j)%100;
                  e -= (c-i-i*k-d+n*b)%100;
                  k -= (i+e)%100;
                  c -= (l-k+f)%100;
                  b += (g+h-e-j-c+e-d+j+g+e+l)%100;
               }
               break;

               case 2:
               {
                  j += (i-m-a+d+d*f+h-j+k+d-h)%100;
                  h += (h*e+k-a+l+k+l-n-k*h+e*d-d-n)%100;
                  j += (e+b+f+m+m+h+j+i)%100;
               }
               break;

               default:
               {
                  g -= (n-e+e-n-g)%100;
                  l  = (c+e)%100;
                  e -= (n-m+b+i*a*a-c)%100;
                  k += (a*g+l+l+h*c-h-l-m+l*m)%100;
                  n -= (d-f-l-m-a-b+m-k)%100;
               }
               }

               b -= (l-m+d+f+l+m-b+d+l)%100;
               g -= (j+g+k*k*i+h-j-f-f+f-l+k+l)%100;
               n  = (b-m+l-f+c+a-m+d-k+d*n)%100;
               d += (c*i*a+h-f-b+m+f*a*a*h-n+l+c)%100;
               l += (d-c+c)%100;
            }
            a += (d-h+b+a+m+g+c+j+m+m-f-d-d)%100;
         }
         break;

         case 2:
         {
            a  = (b+i-l-j+j-m)%100;
            b -= (k-j+h+d-j*a-k+f-i-c+c-c)%100;
            l += (g+j)%100;
            i -= (e+b-i+b*d*f)%100;
         }
         break;

         default:
         {
            d += (f-c-c+d-c)%100;
            d -= (g-f+h*n+h*g*f)%100;
            g -= (k+k+f+m-h+d*n)%100;
            e += (b-a+e+b-i+g-c+d-a+n+g-d-i*a)%100;
            b -= (k-a)%100;
            a += (m-m*l+l*a+j+n)%100;
         }
         }

         m -= (c-g+b)%100;
         g += (g-a+g*i*h-c)%100;
         j -= (l+g+f+e+b-m-g)%100;
         l -= (m-g-n*f-c+k*c*b-n+f+m-d)%100;
      }
      i += (g+b+d+j-n*n)%100;
      d += (j*f)%100;
      c += (a-l-c)%100;
   }
   i += (c+e+d*b-c+l+n-c+a*g+d+j-j+d)%100;
   a -= (n*c-j*f-k+d+h-g+c-b-k)%100;
   i -= (n+b)%100;
   b += (l-e-m*h+b-l*c+d+e-i)%100;
   g -= (h+a*n+a+d*b)%100;
   g += (n-a*i+j+h+n-c-a-l+m-h)%100;
   b -= (a+k-j-m-h-b-n*l-j-m+a-h+c)%100;
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
         n += (h+i+l*b-e*a-n*g*l-h*h+g+g+a)%100;
         f += (j+e-a-i-i*i+k*i-m+j-a+g-h+a)%100;
         i += (a-m-c+l-i-l-n)%100;
         d -= (m-k+l-l+d-h+i*d)%100;
         m -= (d+i*j+f+a+n*m)%100;
      }
      else
      {
         while( ++WHILEcnt[44]%5 )
         {
            do
            {
               for( ; ++FORcnt[65]%5 ; )
               {
                  b += (l-d+e+i+l-l+e-n-n+k-k+f)%100;
                  f += (g*d+n-j+b+i-j)%100;
                  c -= (n*j+l)%100;
                  f -= (d*c+e*k+c*d+n-d*i+l*e)%100;
                  f += (b-i+k+n-k-d-e-i*j+a+e*d)%100;
               }
               for( ; ++FORcnt[66]%5 ; )
               {
                  f += (m-i-l-e-b-i*i-m)%100;
                  a += (n-a)%100;
                  i += (j*g+e-a-e+c-h-a)%100;
               }
               if( ++IFEcnt[43]%2 )
               {
                  e -= (e-l-b-a*k-j-a+i-h-e-i-a+l)%100;
                  k -= (i*a*h-f+j-g)%100;
                  a -= (j+d*d*m+h+g)%100;
                  l -= (b-n)%100;
               }
               else
               {
                  j += (d+b+i+g+m-d+j*i-l+a+h+a)%100;
                  n -= (b-n)%100;
                  d += (m*j+e*k+f+e+m-h-b+c+c+f+a)%100;
                  e -= (i-k-g*m)%100;
                  m += (c+i)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  c += (a-f*c-i+e)%100;
                  c += (d+m+f-a-k*d+g-h+m-h*a)%100;
                  m += (f-j-j+j+j-e)%100;
                  d += (e-n-l*h+c+d*j+l+g+g+k-c)%100;
                  g -= (d*j+b-d*j+d*i+n*m*b+g+i)%100;
                  c -= (j*c*d)%100;
               }
               do
               {
                  e += (h+b-c+b-c+n+l+f-n-m-a+c+a)%100;
                  c += (g+j+k-g*b-f+k-d*h-c)%100;
                  j += (l+c+l-i+m)%100;
                  f += (j-b*a+m+a)%100;
                  n -= (e*e+g+b*a-b*h-g)%100;
               } while( ++DOcnt[44]%5 );
               if( ++IFcnt[32]%10 )
               {
                  n += (h+b-c-e+a*j+m)%100;
               }
            } while( ++DOcnt[43]%5 );
            d -= (j*d-m*e+e+c*d-e*j-b)%100;
            for( ; ++FORcnt[67]%5 ; )
            {
               
               switch( ++SWcnt[22]%3 )
               {

               case 1:
               {
                  n -= (c+i+l*d-g*c)%100;
                  b += (i+a+n-f-h+e*c*b+e-a*d+e-m)%100;
                  d += (c+m+k+k-l-d+g-h*f+n+a)%100;
                  n += (m*i+k-d+g+b+b)%100;
                  h += (m+h-g+g)%100;
               }
               break;

               case 2:
               {
                  b += (k+c)%100;
                  m -= (l-i)%100;
                  j += (c-k-g*i+h-g+a-g-d-j)%100;
                  l += (a+d+k*l*h-g+k-c-f-f+k)%100;
               }
               break;

               default:
               {
                  c -= (l-k+h-j-j+a+n+b+d-k-d)%100;
                  e += (c-h-b+c+i-n-n*a+d)%100;
                  i += (h+k-k-j-e+b+g-f)%100;
                  i -= (l+f-h*i*g-k+d)%100;
                  g -= (h+n-a-a)%100;
                  l -= (j-l*a+h-i-d-b*l)%100;
               }
               }

               g += (e-j-g+d*d)%100;
            }
            b  = (i+d+e*d-m*e-e-c)%100;
         }
         h  = (k*j)%100;
         b += (i+l+a+d*m-a*c*m+j-h+h)%100;
         l += (f-h-d-h*n+m-k)%100;
         i += (e+d+k+c)%100;
      }
      a += (a-m*f-g-j+k+e-b+i+c+i+a*n*i)%100;
      e += (b*i+c)%100;
      c += (b-e-j*e-k*b*i*f-e*m-i+h)%100;
      d += (n+k+h-k*l-f*d*l)%100;
   }
   d -= (e+l*m-b-a-a+l*c-e+e+m-d*a)%100;
   b += (b*b*h+f+l)%100;
   h += (i-a-c+n+j-j-g+f-m+d*e*f+j+d)%100;
   h += (c+h)%100;
   c -= (l+a+g-d-l-a*d+k)%100;
   j -= (j*h+g-j-b-i-f)%100;
   c += (b+b-m+b-b+k*k*f+a-i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F21(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[47]%2 )
   {
      e += (c-h+e+d+k-j-f+n)%100;
      g -= (d*m+m)%100;
      j += (a-b*h+h+a+g)%100;
      b += (e*j-i+a+b*n+j+m-f-h)%100;
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
                  c += (d-h-e*l+j*b-c-f+f+j)%100;
                  l += (d*g)%100;
                  c -= (f-b+k-j+i-f)%100;
                  n += (e+b-d+a+l+d*e)%100;
                  l  = (c-c+f-j+g-h*i*f)%100;
               }
               for( ; ++FORcnt[68]%5 ; )
               {
                  m  = (a-f+f+f+m+i-i*e-e+n+m+e-e+e)%100;
                  i += (i-n)%100;
                  d += (i+c-i*m+b+m-f-b-h-k*m+l+b+d)%100;
                  j -= (j+i-j*e+g*i-d)%100;
                  m -= (j+i*d+l-e+f+e-a)%100;
               }
               if( ++IFEcnt[45]%2 )
               {
                  n += (e-m-m-h+m-m+n+j-c)%100;
                  e -= (j-h-j+j+m+h)%100;
                  e -= (b+g-h)%100;
                  i += (k+m+f+k-n+m+l-k-b)%100;
                  d -= (m-n-j-a-i-n-d-g)%100;
                  h += (m+i-h+a+f-e+e)%100;
               }
               else
               {
                  n -= (k+l*a-f+c+a)%100;
                  b += (l*j+b+e+l+j+a-j-e*i-i-c*i+l)%100;
                  e -= (m-f+e)%100;
                  a += (d+b-c)%100;
               }
               while( ++WHILEcnt[45]%5 )
               {
                  e -= (c+i*d-b+e)%100;
                  n += (h-f+b-a*k+g*l)%100;
                  b -= (i+g+a+e+f+g-d)%100;
                  l += (b-m+c+b)%100;
                  d += (e-m*e-l+h+m*m+e)%100;
               }
               do
               {
                  k += (d*f)%100;
                  l += (i-b+h*k-g+c+a-n+j-a+n)%100;
                  d += (h*b+h+a-j+b-h+h+b-a+d+b)%100;
               } while( ++DOcnt[46]%5 );
               b  = (j+f)%100;
            }
            for( ; ++FORcnt[70]%5 ; )
            {
               
               switch( ++SWcnt[23]%3 )
               {

               case 1:
               {
                  h -= (n+f*d+d-k*b-f)%100;
                  a -= (f-h+l-d*a*k*j+b*m+e-g-i*a+c)%100;
                  m  = (i*j+m-h-b)%100;
                  a += (j-h*j)%100;
               }
               break;

               case 2:
               {
                  a -= (n-f-n*h-d)%100;
                  c -= (j-l-g-c)%100;
                  b -= (h-h+h*c*m)%100;
                  i -= (g+a-f-a-m-a-l+n)%100;
                  j += (d*j)%100;
                  h += (m+m)%100;
               }
               break;

               default:
               {
                  n -= (d-i+d-m+a-h+h)%100;
                  g += (e-b+k+e*h-h*n+h-e*l-k)%100;
                  f  = (i+h-d-g+f+c-k+a)%100;
                  n -= (h-g+f+h-m-i*i+n-j+j-f-n+c)%100;
                  g += (m+k+k-b+i-d)%100;
               }
               }

               if( ++IFcnt[35]%10 )
               {
                  g -= (d+h*k-n)%100;
               }
               if( ++IFEcnt[46]%2 )
               {
                  m  = (h*b+l)%100;
                  b += (n-c+e+e+k*n*e-d+e-l-b+k+j+k)%100;
                  g += (j-f-e+a+j+n-j-f-i)%100;
                  k -= (n+e*f+h-j)%100;
                  i -= (n-d*j*k+h-n+k+j+d*h)%100;
               }
               else
               {
                  l += (e+d)%100;
                  c += (b+b*n-j+k)%100;
               }
               d += (m-n-c+d+a-h*f-m)%100;
               e -= (e-b)%100;
            }
            d -= (h*g-e-c+j-m*h)%100;
            l += (a*i+i*n+i-c*i+g-a+e-k*h*f)%100;
         } while( ++DOcnt[45]%5 );
         n += (h*d+h+i*e-k-b+m)%100;
         e -= (k+j*k-k+j*j+c+a-m+f*k)%100;
         i -= (k+i+d-a-a)%100;
         i += (g+f+i*h+a+e*f*e*d-f-l+n-n)%100;
      }
      g += (n-e*f*n-e*b+a*a)%100;
      n -= (i+b-m-b+n)%100;
   }
   a += (k+a+h-g+b)%100;
   d += (l+c-k-g-c*e)%100;
   a += (n-k*c)%100;
   c += (f-g-m-e-g)%100;
   l -= (c*k-c+a-i)%100;
   b -= (h+f*a-i+j+n+f-b-l+l+j+g)%100;
   e  = (k-j-d-b+m+d+i-c*h+d+k-g)%100;
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
                  n -= (l*l+g+a*e*l+l*j*e+e-j-k-g*b)%100;
                  n += (h*d+b+a-i-j+g+e+e*k-a)%100;
                  b += (l+c+h+b)%100;
                  j -= (g+c+b)%100;
                  g -= (a-a-f+c*b-i-l)%100;
                  b += (k*c+e+g+e-l-k-d+a-n+d)%100;
               }
               else
               {
                  g -= (d-l-b+k*k+h+b*l-d+l)%100;
                  j -= (a+m-g-l-g*n-m*n-i-i-l+k)%100;
                  a += (i+d+d+j+c+m)%100;
                  g -= (l*f*j-e-e-j*k+k*a)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  h  = (d*g-a+c-e-j+j-g+j*l+i)%100;
                  f -= (m-l-a-n-b)%100;
                  f += (b+f)%100;
                  g -= (n+g*j-l+k-i-k+a+e*g+b)%100;
                  a += (n+c*f)%100;
               }
               do
               {
                  f += (c-j-a+n-h+e-a+b-d)%100;
                  f  = (k+m-n+e*l+f+i*a)%100;
                  d -= (f+j*k)%100;
                  g -= (m+d+h-k+d+e-l+j*f-n+j+d-b)%100;
                  m -= (d+n)%100;
               } while( ++DOcnt[48]%5 );
               if( ++IFcnt[36]%10 )
               {
                  m += (n+j)%100;
                  m += (j-i-j+g-j*h+l+j*l)%100;
                  a += (h+j+l)%100;
                  b += (n-b+f+g+g-j-f+c*c-l*i*i*e+e)%100;
               }
               m += (m-k*j-g+m+k-i-c+d-i)%100;
            }
            for( ; ++FORcnt[72]%5 ; )
            {
               
               switch( ++SWcnt[24]%4 )
               {

               case 1:
               {
                  k -= (b-i+l-e-g*d-c-h+l+a*c)%100;
                  m += (m-k-d+d+n+a)%100;
                  h  = (l-e-e+e+i+c*j+i-i)%100;
                  g -= (k+a)%100;
                  h -= (h-h-c)%100;
               }
               break;

               case 2:
               {
                  l -= (h+j-n+e-m-f)%100;
                  k -= (n*g+e-e)%100;
                  l  = (d-c+l-g-m-d+g+d)%100;
               }
               break;

               case 3:
               {
                  d -= (i+a+g-l*j*f+h-g)%100;
                  e -= (m*g+d-b-h+h*c+i+f-f-g-i+i-i)%100;
                  h -= (k-m+b-m-k-k-b*n*d)%100;
                  k += (d*e-j-k+j-e*f-c)%100;
                  d  = (g+n+b+e-d+i*h-b-e-a)%100;
               }
               break;

               default:
               {
                  b -= (h-h*e*i+j)%100;
                  g -= (j-a+l-c*h+j+j)%100;
                  h  = (g+l+b+j+g*d-j-e*j-d)%100;
                  d += (b-b+f-m+f+m*d-c-m-b-h)%100;
               }
               }

               if( ++IFEcnt[49]%2 )
               {
                  k -= (e*l*c*g-n*c-c-b+d)%100;
                  l += (k*e+d+a+m-d-b-k-c)%100;
                  d -= (d-g+i)%100;
                  j  = (k*l*j-m-a+m-d-n+f)%100;
                  i  = (k+n)%100;
               }
               else
               {
                  h += (m+i+b+d+k+h+m+c+l+k-j-c*n+m)%100;
                  n += (c+e*e-n+f-l-e+j*e)%100;
                  k -= (b+h*l+b+h-j-b*g)%100;
                  e -= (l-j-j+k+h+m*g+c*g-j-n-a)%100;
                  a -= (d+i*h*c*n+c-g+m-i)%100;
                  f += (b+n-m+j+c)%100;
               }
               d += (c*n)%100;
               b += (h-l*a-a)%100;
               c  = (c-d-c)%100;
               f += (b-k)%100;
            }
            i -= (i*m+l+d+k-a-n+i+k-i-d-i)%100;
         }
         f -= (e-e)%100;
         i += (a+e-m*k+g)%100;
         e += (b-d+f-g+g-e-k-h*c+d+a)%100;
         b  = (f+h)%100;
      } while( ++DOcnt[47]%5 );
      l -= (c*e)%100;
      b -= (l+i-n+i-k-d-b+a*i)%100;
      j += (e-c*k*j*m*n-n-n-e-d+g+i)%100;
      a += (g*a)%100;
      g  = (h+g)%100;
   }
   g -= (c-i+j-d-a-b-a-a)%100;
   d += (f+g*k-h*b+e-m*f*g*h-n*e-d-a)%100;
   h += (a*d)%100;
   a += (c-i*b-i+j-n-d+e*i)%100;
   j -= (f+b*h-k-g-h+n*d*n*a-a-b)%100;
   k += (m+n+l-n*b*n*a+l-c-n)%100;
   d -= (n-n+a+l*a-d+a+d+a-g+n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F23(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[50]%5 )
   {
      do
      {
         for( ; ++FORcnt[76]%5 ; )
         {
            if( ++IFcnt[37]%10 )
            {
               for( ; ++FORcnt[74]%5 ; )
               {
                  j  = (j-h-c+j-e-e*f)%100;
                  c += (d+k-a)%100;
                  f -= (l+b+h*g*n+f-i-g-n-k)%100;
                  j -= (f+e+j*e*b-f+m+n-a-d-b+b-f*l)%100;
                  b += (e*h+m*n+k-i*b*l-c)%100;
                  m -= (k+b*m*d+l-g)%100;
               }
               if( ++IFEcnt[50]%2 )
               {
                  f += (d-a+c-c+f-j*b+a-j*n-j-h+d+g)%100;
                  a  = (i-l-n)%100;
                  i -= (h-m-l-e-c-m-l-c+c)%100;
               }
               else
               {
                  h -= (d+c)%100;
                  f -= (c*h-g+h+g-n+c+d+a+m*k-f*e)%100;
                  e  = (g-d-e+j+i*n-f*c+b-c-f)%100;
                  d -= (k-g+i*d+h)%100;
                  a += (i+i+c+n-m+i+i*n+m*k+n-b-c+f)%100;
               }
               while( ++WHILEcnt[49]%5 )
               {
                  c -= (h-a-i+e-g*b-j*m+c)%100;
                  f  = (g-i+c-e-e)%100;
                  d += (l+a+e+f+d+f)%100;
                  c += (k*e)%100;
                  d -= (j-j-d-k-a*k+a*e)%100;
               }
               do
               {
                  e -= (a-k-b+b-l)%100;
                  l -= (c-l+c+i+b)%100;
                  k -= (n*d-i+d+h+b+b*h)%100;
                  i += (g*i)%100;
               } while( ++DOcnt[50]%5 );
            }
            m -= (h+c+m+k-k-l-h)%100;
            for( ; ++FORcnt[75]%5 ; )
            {
               
               switch( ++SWcnt[25]%3 )
               {

               case 1:
               {
                  i += (m*j-g-b)%100;
                  a  = (g-a+c+e-c-h)%100;
                  i -= (l-l+h+f+g+d*j-a)%100;
                  a -= (j+a)%100;
                  f -= (a-h)%100;
               }
               break;

               case 2:
               {
                  l -= (c-j)%100;
                  j -= (n+l*f+l-i-c-h+a+d+e)%100;
                  i -= (g-l+d+m-m+e-k*k-e-l+e+e*j)%100;
                  f -= (e+f-f+n+c+l*a+m-h)%100;
                  j += (l+m-h+a+g*b)%100;
               }
               break;

               default:
               {
                  c -= (e-g)%100;
                  l += (h-f)%100;
                  n += (b+m+l-g)%100;
                  g += (h+k*m*h*m-e-j*b-h+k-f)%100;
               }
               }

               if( ++IFcnt[38]%10 )
               {
                  b -= (m*a-f-n+m-l)%100;
                  h -= (d*a-g-i-l-a-e+j-i-f+b)%100;
                  l -= (a-k+g+j+n)%100;
                  e += (b+k-m-g+c*l+c+c*c+k-a*e+m+n)%100;
                  c += (k*g)%100;
                  g -= (c+e-d*n+k*i+j-g*j-h*g*m)%100;
               }
               if( ++IFEcnt[51]%2 )
               {
                  k -= (a-g+g+d-f+n)%100;
                  c += (m-n-a-e-a-h-h*k+n-f+n)%100;
                  i += (m-f-k*g+h-a+h-l+c+g+b-m-i)%100;
               }
               else
               {
                  j += (h-e+e+l-i-d-i-k)%100;
                  l  = (e+g+c*a+f+l+g+n-a)%100;
                  l -= (d+i+m*i+d+c+j-c)%100;
                  i -= (k-h*i*l)%100;
                  e -= (g+c)%100;
               }
               f += (d-h-d+n-j)%100;
               e += (l+n-b-j-e-l-f+n+c+l)%100;
               l += (d-m)%100;
            }
            k  = (j*i+m+m*n-n+h-f)%100;
            j += (k+m+b+g+g+a)%100;
         }
         e += (j*g+a+m-g*j+d)%100;
      } while( ++DOcnt[49]%5 );
   }
   c -= (e-e-c-i+d+a*f-i+m-b-e)%100;
   e += (f*d*g)%100;
   c -= (e-i+f-k-c*d+n)%100;
   m -= (e*i+h+h+d-g-a-k+e-f+h-e*m*j)%100;
   d -= (n+g*k-f+j*a+c+b-f+a)%100;
   m -= (d-b+d+c+g+k-f)%100;
   n += (f-a*g+b-j-b-m-a-m-k+c*i)%100;
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
         for( ; ++FORcnt[81]%5 ; )
         {
            for( ; ++FORcnt[77]%5 ; )
            {
               if( ++IFEcnt[52]%2 )
               {
                  n -= (m+f)%100;
                  a -= (a+b-m-j+h+l+m-j)%100;
               }
               else
               {
                  a -= (c-m+h+l*i-n-f-c*f-i+e*l+d)%100;
               }
               while( ++WHILEcnt[51]%5 )
               {
                  h -= (h*i)%100;
                  f -= (l-f-b-g+j*e+n*i-g*f-n)%100;
                  j += (l-k*g-n*e+c*e+b-j*b+n+n+d)%100;
                  b += (i+j)%100;
                  d -= (e-j-m-b+m*a*f+d+f-k*e+j)%100;
               }
               do
               {
                  b -= (m*b+e*l+l+d-c+l+f-j-e-n+i)%100;
                  n += (n-d+l-d-m-k+g+a-h+k)%100;
                  i += (m+m+n+j*l+l+i*h*k+n*c*i)%100;
                  n  = (j-i-i+n+l*k-c+l-j+i-d-c-e+f)%100;
               } while( ++DOcnt[52]%5 );
               if( ++IFcnt[39]%10 )
               {
                  l -= (h+k*n-m-f-l-d+i*e)%100;
                  m += (i*g-n)%100;
                  l  = (k+k-f+k+a+l-g-n-k*i*a+n-k*c)%100;
                  g += (j+m*h)%100;
                  h += (m+a+f-n+h-i-i*n)%100;
                  e -= (e+l*m*g-i-h*m)%100;
               }
               m += (i*f-m-c-e+j+g*d-c)%100;
            }
            for( ; ++FORcnt[79]%5 ; )
            {
               
               switch( ++SWcnt[26]%3 )
               {

               case 1:
               {
                  d -= (c+c)%100;
                  j += (k-h-j+n+e-i-l+f-g-e+d-d+m+c)%100;
                  g -= (j+a)%100;
               }
               break;

               case 2:
               {
                  f  = (d+g+a+d-h-j+m+k+e-i-c)%100;
                  a -= (e-l*a*k+k+e-i-e+k-h+b-n+e-j)%100;
                  i += (a+i)%100;
                  b  = (d-c-h+a-b-i+a+b*d+f)%100;
                  d -= (g*f-l+l-d+a+b+j)%100;
               }
               break;

               default:
               {
                  h -= (a*k-g-b-k-l+e*a-l-c-k+g+d+n)%100;
                  d += (i-h-g+c)%100;
                  i += (f*a-e+a+a-i+j)%100;
                  d += (h-h*n-i+i+l+c-h)%100;
               }
               }

               if( ++IFEcnt[53]%2 )
               {
                  c += (g*g+m-k+l-d*f-m)%100;
                  d -= (e-k-g-n+h+m-m*f-c+h)%100;
                  b += (a-k-h-b+l-l+i-l+k*e+f+h+g)%100;
                  b += (d*h*c*j-j+h*b*a+b)%100;
                  e += (a+b+i-f)%100;
               }
               else
               {
                  a -= (a*l-f+f-g-b*m-i+m*l-c+h)%100;
                  f  = (j+b)%100;
                  n -= (c*i+l+a*f-i+h-b*h)%100;
                  k += (n+b)%100;
                  e -= (m+f+i*c-h-f-i+k*c-l-d-b)%100;
                  a -= (b*h-l*i-f+i)%100;
               }
               while( ++WHILEcnt[52]%5 )
               {
                  j -= (j+d-m)%100;
                  g -= (a*e-d+i*m-f-k*n+b+d+j*l)%100;
                  b -= (e-l+n+e)%100;
                  h -= (i+d-i-j+a-h+e-k)%100;
                  l += (d+k-k+g+h-l+g+n+l)%100;
               }
               do
               {
                  m += (d*b+n+f+f-l*f-k-c+a+d-m-c-a)%100;
                  e  = (c-n+b+j*c)%100;
                  i += (a-d-h+m*i-j*m+l)%100;
                  l += (f+b-i*d+j-j-e-h*k*l)%100;
               } while( ++DOcnt[53]%5 );
               for( ; ++FORcnt[78]%5 ; )
               {
                  m -= (j+a)%100;
                  c  = (g-g-b+i*g+g+l+b-e+h-j-j-b)%100;
                  m -= (k-i)%100;
                  b  = (l+l*e-f+e+c*i+e*a+j-d)%100;
                  f -= (k*k*d+j*c)%100;
                  j -= (j-n+i)%100;
               }
            }
            if( ++IFcnt[40]%10 )
            {
               for( ; ++FORcnt[80]%5 ; )
               {
                  d -= (h*i+e*f+c+b)%100;
                  i += (m-c+l*h+b+i+b+i+k+l+c+b+a-l)%100;
                  n += (h*l-b*g+i+k*l-m)%100;
               }
               a -= (n+e+f-k-g-e+e-e*n-g+k-h+h)%100;
               d += (f+g-m-l-i*k+d-m)%100;
               b -= (b+d-n-g-i-a+l+c)%100;
               f  = (h-n-k+l+i+g-f+i+g-e)%100;
            }
            h -= (b-c-b-c-j+i-d*n+h*c-h)%100;
            b += (e+d*g-b+k-a+h+i+d-h-c*e+h*a)%100;
            m  = (m+c)%100;
         }
         a += (l-j)%100;
         k += (d+a-e+f+c-c-n+h+a-e-f-f+c)%100;
         c -= (b-i-k+d+g-i+k*c*d+g+f*d+d)%100;
      } while( ++DOcnt[51]%5 );
      k -= (h-h*c+d+d+i*e)%100;
      f  = (j-g-b+k-n+k-j+g+b)%100;
      a -= (m+d-e-a-k-a*e+d-a)%100;
      c -= (j+d+c+a-i-d-l)%100;
   }
   h -= (f+h)%100;
   c -= (d+d-e+b-f+b+n)%100;
   l += (h-c*a-d)%100;
   j += (m*i*c+n-d-b*b+m+m-m*d-i)%100;
   d  = (j+h)%100;
   m -= (m+a)%100;
   g += (f+g*h*b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F25(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[56]%2 )
   {
      j -= (c*g+d*i+m-j+f+a-l-d-f+b)%100;
      f -= (k+g-m+k+a*m*g+b-b+g+j+n)%100;
      e -= (d+l-i-e-a+m+d-j-j-c+n-m-d+e)%100;
      l -= (b+c)%100;
      h -= (i+d-f-b-c+c+m-f-i+m+n*n*e+b)%100;
      a += (n+c+d-c+i+b+m*n*n-g+j)%100;
   }
   else
   {
      while( ++WHILEcnt[56]%5 )
      {
         do
         {
            c += (e-b*h-c+l-l*b-h-d)%100;
            for( ; ++FORcnt[82]%5 ; )
            {
               
               switch( ++SWcnt[27]%3 )
               {

               case 1:
               {
                  c -= (i+e-n+d-m+h*d)%100;
               }
               break;

               case 2:
               {
                  l -= (k-g+e-n+c+f+f)%100;
                  k -= (j+h*m+c*i+d+g-h*e+h-g+j*e)%100;
               }
               break;

               default:
               {
                  l += (e+j)%100;
                  d += (f-l-h-h-f+j-b*g*c+n-d+k*h*i)%100;
                  g += (e+n*l*g)%100;
                  m += (k+g)%100;
                  a += (j+f-k+k-b-f-b-i-c)%100;
               }
               }

               if( ++IFcnt[41]%10 )
               {
                  e -= (e+d+j-j-k+f+m+e+a)%100;
                  j += (l-i)%100;
                  l  = (i+b-a*k+b)%100;
                  i -= (k+g-d*e-c)%100;
               }
               if( ++IFEcnt[54]%2 )
               {
                  c += (b-j*c-k+a-d*i-c+d+d)%100;
                  b += (b*l*h*i-a)%100;
                  e -= (n+n-l)%100;
                  m -= (b*h-a-j-e-d+b*m)%100;
                  l += (m-l)%100;
               }
               else
               {
                  h += (b+b-e+n)%100;
                  d -= (h-j)%100;
                  g -= (j+e-l+n+c+j*k-b+n)%100;
                  k += (c+g-i-g-i-h-n-d+j*f-j-g-l)%100;
                  i -= (g-a+g-m-g-m-g-c-d)%100;
                  g -= (b+c-c+e*j*j-k+g+e+k+n-f+f-b)%100;
               }
               while( ++WHILEcnt[54]%5 )
               {
                  c += (g*e-b*e+j-g+h+a+d*k-g-k+i)%100;
                  m += (j+m-i+m-k+k+g-i+k-b-n+j)%100;
                  d += (a-h)%100;
               }
               do
               {
                  d += (d*d+j*l+j+e*c-d*m*i-j-g-d-l)%100;
                  n += (f-l-d-g+n*d)%100;
                  e -= (k*c*l*g-n-m-m)%100;
                  j -= (j-k+k+f+a+h*d+k)%100;
                  n += (d+k-e+e)%100;
               } while( ++DOcnt[55]%5 );
            }
            for( ; ++FORcnt[84]%5 ; )
            {
               for( ; ++FORcnt[83]%5 ; )
               {
                  a -= (n*k-a+e-e*g-j-d)%100;
                  c  = (n-n+c-m-e-f-c*g+l-c+e+j)%100;
                  k += (m-l*l-d-m+d-j)%100;
                  l -= (d-h+m*d-j-a+h+a*b-e+i-d+l+k)%100;
                  f -= (f-n+n-a-n-j)%100;
                  c -= (d+f+c-n+d+a-m*f)%100;
               }
               if( ++IFEcnt[55]%2 )
               {
                  m += (m-l+h+i+a*n-k+j-i-l+c-h-c-n)%100;
                  j += (l+h*f+a+i-e-m)%100;
                  g += (m-e*i)%100;
                  b -= (b+b+a+f-f)%100;
                  d += (m*g*a-a+e+d*a-i-b+g*g*j-g+d)%100;
               }
               else
               {
                  n -= (g-j+c*l+g-g+e-e*e-i)%100;
                  l -= (h+i+a+k+l+e+f+j)%100;
                  k += (l-c+g-c-l-n+d*l)%100;
                  a  = (k+j+b-l+f-l-j+l+n)%100;
                  g += (g-n-k+e-e-m-c+k)%100;
               }
               while( ++WHILEcnt[55]%5 )
               {
                  d += (f-m)%100;
                  n -= (a+f+b+n+n+d-e+g+f*e-h+a)%100;
                  h -= (k+b*d-d*j*d+d)%100;
                  j += (d+j-k+k)%100;
               }
               m += (g-m+i-e-n)%100;
            }
            i -= (m-i*e*d+l-d+n-j-g*c+m-g)%100;
            m -= (e-b+l*e+b-a-g*l-h-n-d)%100;
            i  = (d+d)%100;
         } while( ++DOcnt[54]%5 );
         l += (m-c-h+h+j-d+g-e-i-m-b)%100;
         m += (g*a)%100;
         d += (f*b)%100;
      }
      m -= (f*a+a-a+b-j+m-a-g-h-h)%100;
      i -= (a*c+j+n+b*n-g-m*d)%100;
      j += (b+h*c+k-b+e-d-d-b+h)%100;
      g -= (a+i+k-h*a+e*g+c-k+e*a*k-a)%100;
   }
   b += (j-l*j-b-b+i)%100;
   n += (n+k)%100;
   g -= (k+n)%100;
   l  = (d-g-m+k-c)%100;
   c -= (d+d*l+g+j-n*k)%100;
   h -= (d+b+k+g-n+k)%100;
   n -= (b*n+m-c-h+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F26(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      if( ++IFcnt[43]%10 )
      {
         c  = (h-h)%100;
         for( ; ++FORcnt[87]%5 ; )
         {
            
            switch( ++SWcnt[28]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[57]%2 )
               {
                  n += (j-n+h-n+b-f*n*i+e-f-n+h)%100;
                  l -= (c*h-a-f)%100;
                  e -= (c-f+d*n-h-d+k+c+k)%100;
                  n  = (f-d-n*d-n+l)%100;
                  n += (j+n+h)%100;
               }
               else
               {
                  h -= (d+k)%100;
                  j -= (l+m)%100;
                  a -= (i+h*b-h*e*b*a+b-n-n)%100;
                  l  = (c+c-j+i+f-b*l*g+n)%100;
                  b += (i+m+e-f+h*i+i-e+b*a-k-e+g)%100;
                  j -= (k+d)%100;
               }
               while( ++WHILEcnt[57]%5 )
               {
                  d += (k+k+e-e-c*n+b-f-f-d+j-n-g)%100;
               }
               do
               {
                  i += (e-e*i-h*e-k+n*c*c+c+h+k*e)%100;
                  l += (m+f)%100;
               } while( ++DOcnt[57]%5 );
               for( ; ++FORcnt[85]%5 ; )
               {
                  e  = (b+f+a+j*k+g*a*j)%100;
                  l -= (n*h+a+m-c+a+h)%100;
                  g  = (k+j-b+l-e*g+n+d+c)%100;
                  b += (l-i)%100;
                  f -= (g+d+b)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFcnt[42]%10 )
               {
                  f += (g-d+j-k*d*f-a*m-h+h+h-i-f)%100;
                  b  = (b+e)%100;
                  c -= (h*j+l*f*h+i+d*c+l-k*n)%100;
                  j += (n+e+g+g+c-d-a)%100;
                  g -= (c-h*a+d)%100;
                  j += (c*c+f-n-g)%100;
               }
               for( ; ++FORcnt[86]%5 ; )
               {
                  g -= (j-m+i+c+h+d*e-n+d+c-a+e-f)%100;
                  k += (f+b-g+m*h-j+b+n-l+g)%100;
                  f -= (k+k-e-j-f*g+i-n-a-j*j+i-d)%100;
                  m += (e+a)%100;
                  b += (k*b+l*m-k-l+b+k)%100;
               }
               if( ++IFEcnt[58]%2 )
               {
                  c += (i+i)%100;
                  f -= (l-j+g*d)%100;
                  d -= (e-m-g+d*f*g-d+j+i-m+k)%100;
                  f -= (n-f-e-a-b+g-c+m+e-d+f-g*m)%100;
                  l -= (l+f)%100;
               }
               else
               {
                  c += (g+k*b+a-g+n+m+m+g+e-d*m-d)%100;
                  k -= (d-n*g+j*f*d-h*a+m+l+i)%100;
                  g -= (l-b+b-j-d+a+b*d+a-b-a-a)%100;
               }
               while( ++WHILEcnt[58]%5 )
               {
                  f += (d-m)%100;
                  l += (j-c*k+j*k+d-i+b+d*j-m+c+j)%100;
                  m -= (c-i*e-j-f+c+g)%100;
                  d += (g*j+e+i-n+l*e-b+l-m)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  c -= (h+i-c-k+b)%100;
                  f -= (d-i*h)%100;
                  j += (k-f+d-g*e)%100;
                  c += (k+f+i*f-i+e+l+h-e*j*l*c-f+i)%100;
                  j += (e+m-b-i+e+h+c+e-e-f-h)%100;
               } while( ++DOcnt[58]%5 );
               g += (n+e-h-g-f+l*g+e-n+b*j+l-g+e)%100;
               c -= (m-i*b*f-f+f+l+g)%100;
               j  = (h-m*m+l-d*f*g)%100;
               d += (l+c+n+l-l*h+g*m+h+f+j-k+k*i)%100;
               h -= (e+h+b-a+m)%100;
            }
            }

            e  = (n-l+f-i-b+j)%100;
            g += (h*a-a-k-g+c+l-k*f)%100;
            m -= (j+f*f-i+c+d-g-b)%100;
            l += (l+e-a)%100;
         }
         g -= (k-n+c+a-b-b)%100;
      }
      b -= (n-f)%100;
      k += (a-i-e*k-j+i*k-i+k-e-g*m)%100;
      e -= (c*k+k+l+g+j-i+b)%100;
      l += (g-d-h)%100;
   } while( ++DOcnt[56]%5 );
   g -= (g*l+j+e+d-l+c*l)%100;
   b -= (d-c*d+e+b*b*a+k*f-m-m-n*k+f)%100;
   e -= (f-g+d+f*j+b-b+n*n+c-f+j-h+m)%100;
   a  = (h+j*k*l-a-f+d-i)%100;
   i -= (e-f*e-a+f-m-j+n-a-f-i)%100;
   f += (g-e)%100;
   d  = (e-l*f+g-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F27(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[29]%3 )
   {

   case 1:
   {
      for( ; ++FORcnt[91]%5 ; )
      {
         n -= (c+d-b+b+b+m-c+g-h-i+c*f-e+e)%100;
         if( ++IFcnt[45]%10 )
         {
            if( ++IFEcnt[60]%2 )
            {
               while( ++WHILEcnt[60]%5 )
               {
                  n  = (m*l+n+c-g+l*j-d+m+m)%100;
                  f  = (i-g-a*i)%100;
                  i += (c*h*c*a-a*d-d+c*j+n+e-h*f+l)%100;
                  j += (k*l-f+b+b-d-b*f)%100;
                  d += (d+h-c*d-j+i-d+e)%100;
               }
               do
               {
                  f -= (g+j+j+c-n-c)%100;
                  a -= (a+h+n-h-k-h+l+k+l)%100;
                  k -= (h+m-c-c*j-i)%100;
                  e -= (g+f-f*k+j+m+l-k)%100;
               } while( ++DOcnt[60]%5 );
            }
            else
            {
               while( ++WHILEcnt[59]%5 )
               {
                  h -= (l+e-a*a-e)%100;
                  a -= (d+l)%100;
                  b -= (b+i+j*a-f+k)%100;
               }
               do
               {
                  e += (f*f)%100;
                  e -= (a-h+c-c+d+c*b+i+j)%100;
                  d += (c-i)%100;
                  a -= (k-i+a+n-d+b+g-f*b-a-m+a+c)%100;
                  g += (f*c-d-a+g+k)%100;
               } while( ++DOcnt[59]%5 );
               for( ; ++FORcnt[88]%5 ; )
               {
                  i -= (k-h+m*g-m*b*b-c+k*m)%100;
                  c -= (l+h*j+f-h*j*f+f+b-g-h+g+e)%100;
                  c -= (d+l)%100;
                  m -= (g*d-d+m*c-e*m-k-f*l)%100;
               }
               for( ; ++FORcnt[89]%5 ; )
               {
                  k += (h*f+n*a-a+n)%100;
                  e -= (f-l+a+n+l-h-c)%100;
                  b += (k+e+g*i-f-e-c)%100;
                  k += (h+i-c+l+j-k*a*l-f-h*l-a+h)%100;
                  d += (l*e-n*b+i+j-h+g-j+i)%100;
                  n  = (k+c-i-k-m*h-d*n*a-a+c*k-n+n)%100;
               }
               if( ++IFEcnt[59]%2 )
               {
                  g -= (f-g+f+g-b+b)%100;
               }
               else
               {
                  g -= (g+c+h-h+e+k)%100;
                  j -= (f-f-m)%100;
                  j -= (d-d*k-b+n-m)%100;
                  d -= (j-f*e-m*d-a*h*c-d+c)%100;
                  a += (a+a+d+m+g-k+b*i-e-a+e+n)%100;
               }
            }
            if( ++IFcnt[44]%10 )
            {
               k += (h-i-m*k*f-n+d+i-c*b-i)%100;
               for( ; ++FORcnt[90]%5 ; )
               {
                  e -= (b*b+g*m*e*i+d)%100;
                  f += (j+k*j-h+d)%100;
                  e += (j+a-b*g+g+c+g+c-l+c-k-l)%100;
                  i -= (h+c-h-c)%100;
                  m  = (g-i*a+a+d+h-l*b*d+h)%100;
               }
               
               switch( ++SWcnt[30]%3 )
               {

               case 1:
               {
                  a += (d-e*g*c+k*m+k-i-f+h+d*g+g-k)%100;
                  b -= (h*b)%100;
                  f += (m*g+i*b*j-g*l)%100;
               }
               break;

               case 2:
               {
                  g -= (j-l-g+f*f-j+a+l)%100;
                  d += (l-e*n+e+h-e+d+g+d-g-e-c+n-l)%100;
                  e += (e+a-f-h-d*i-e+k)%100;
                  b += (l-i*j-h*c+f-b-n)%100;
                  f -= (f+h)%100;
               }
               break;

               default:
               {
                  a += (j-l-m-m-i)%100;
                  a -= (b-m-h*a*f-d-b*k*a*i)%100;
                  b += (m+k)%100;
                  j += (f+l+m-l)%100;
               }
               }

               d  = (n+e+n*a-l-m-i-d-f-b)%100;
               m += (g-c-i)%100;
               j -= (e-a+i+m+n+g-j+d*e)%100;
            }
            n  = (i+i-e+k+i*l)%100;
            m -= (a+g)%100;
            a -= (a*n-h+g*i)%100;
            n -= (b*a*j*b*g+m-c*k-d*g*d-l)%100;
         }
         d += (g+n*n-c-f*g*f+j)%100;
         e -= (l-h-c+m+b+l+e*e*d+h-b)%100;
      }
      b -= (e-c+c-l-l-d-m-j+l-m-l)%100;
      i -= (a*k)%100;
      c -= (g+e+b*n+h+l-a+i)%100;
      i -= (n-l+j-a+g)%100;
   }
   break;

   case 2:
   {
      a -= (h-i+i)%100;
      f += (f-e+m)%100;
      j -= (n-g-f*i+b-g)%100;
      g  = (d-b*f-k-a-f*h+g+i-c-j+e*m+g)%100;
      c += (i+e-a+h-k*a+d+g-e)%100;
      j -= (h*m+c*e+m-d*l+i-d-h-j+n*c+m)%100;
   }
   break;

   default:
   {
      k -= (m-l-c*f+h-d*k*g*b-h+c)%100;
      a -= (m-d)%100;
      g += (c-e-i+j)%100;
      j -= (m+k-k+e-i+h*e*l-m)%100;
      b -= (k*h+j-a-j-n-k+c)%100;
   }
   }

   i -= (f*n)%100;
   h -= (n-h*a+j*k*a-l+i+a+m)%100;
   a += (a+i+b+a-m*a+e-j)%100;
   a += (n*c)%100;
   n -= (n+a+i+f*h-j+g-m+a-a-d-e+d*i)%100;
   b += (j-c-l+f-n-i+a-a-f)%100;
   d  = (l-j-n+n+l*c+b-i*h-m+g-c+c-b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F28(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[62]%2 )
   {
      f += (d+a-d+g-h*j-f+a-h+d-e+e)%100;
      e += (e*g+g+l+d-h-e*k-m+d)%100;
      a -= (h-j)%100;
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
                  a += (h-i+h*j-c-l-b+j-j+h-i*m*i)%100;
                  n -= (f+h-a+e+m+c*k)%100;
                  i += (a-n-f*n-h)%100;
               }
               for( ; ++FORcnt[92]%5 ; )
               {
                  n  = (n+a+l)%100;
                  d -= (g-n+f-a-m+d-b)%100;
                  b += (g*b)%100;
                  n += (a+l-j)%100;
                  l += (j+a+l+c-g*g-b-l+f+i-l)%100;
               }
               if( ++IFEcnt[61]%2 )
               {
                  k -= (n+m-m+c+c-e-h+c-n*e+c-e-c)%100;
                  k -= (b-c)%100;
                  m -= (l+g+h*f*h-a)%100;
                  k += (i-a+m+j-k-i+n-g+n+i-n+f*d)%100;
                  f -= (b+h*l)%100;
                  l += (e-j+m+a+m*n)%100;
               }
               else
               {
                  l -= (i+g*h-h+f-h+f+c+c+l)%100;
                  k += (c+c-d+a-k-c-m-l+j+c*a-d+i+d)%100;
                  g -= (l+j-c-g+n)%100;
                  d += (h-h-d+n)%100;
               }
               while( ++WHILEcnt[61]%5 )
               {
                  l -= (i-g+k)%100;
                  k  = (k*a-k+e*k+n-b+c-n-d)%100;
                  c += (g*h)%100;
                  e += (m+g+f+l*l+g-d+e+d*a+h*k+j+d)%100;
                  h += (n-a*d-m-e*b+b-d*d)%100;
               }
               do
               {
                  a -= (j+i+a*d-i+e+a+l+j-h)%100;
               } while( ++DOcnt[62]%5 );
            }
            m  = (n-g+n+i+b)%100;
            for( ; ++FORcnt[94]%5 ; )
            {
               
               switch( ++SWcnt[31]%3 )
               {

               case 1:
               {
                  n -= (g-f)%100;
                  c += (f-e-h+l*e*f-h-i*k+j)%100;
                  l += (m-b-n*d+e-e*i-k+l-e-b+d+j)%100;
                  h += (i+j)%100;
                  n -= (a+m-g+d*c+a-b+i)%100;
               }
               break;

               case 2:
               {
                  a -= (h*j-m+b-c-j)%100;
                  h += (k-n)%100;
                  k  = (f+f*c*b-b-j*g*i*f)%100;
                  b += (h-f-h)%100;
               }
               break;

               default:
               {
                  l -= (a+l-l-a+d-k+a*e)%100;
                  i -= (b*c)%100;
                  h += (n-f)%100;
                  n += (d-n*i)%100;
                  i -= (a-n-k+c-a+j-e)%100;
                  c += (e-g-e*d+e-k)%100;
               }
               }

               if( ++IFcnt[47]%10 )
               {
                  n -= (n-b+b-i+g+d-l*j-h+a-n+c+f-c)%100;
                  d -= (f+n*b+b-b-n-g)%100;
                  b += (n+e+g-i+c-b*i)%100;
                  i -= (h+f+c+k)%100;
                  d -= (f-c-d-d+i+c-f-g+k-i+a)%100;
               }
            }
            j -= (i*n)%100;
            n += (b+n+h-i+h*h*j-e*b-h+k*b*m+k)%100;
            m -= (h+n*l+c-g-b+d*h)%100;
         } while( ++DOcnt[61]%5 );
         d += (h+i*i+a+e*i-d+k+d-f-e)%100;
         c += (a*g+d-e)%100;
         m -= (c+l-h-b+g*m+e*n-k+c+d-n)%100;
      }
      d  = (d-a)%100;
      m -= (b*l)%100;
      f -= (h*l-k*b+m+c+a*m*d*k-k+l)%100;
      a += (g-d*h+n*b+i+e-l-j-g)%100;
   }
   j -= (e+e-k*f-a*n-d+b+a*l)%100;
   b += (j*l)%100;
   h -= (h-j-b+e+i-c*l-m+h-c)%100;
   j += (c+a*h-n*e*a+l*f+l-e-a)%100;
   k += (k*l-c-e+j-a-e*l*k)%100;
   k += (l+l*i*c+i*l-b*m+h-n*i-a+l+c)%100;
   l += (f+a-c+j*i+l-a+g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F29(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[65]%2 )
   {
      e -= (g-c-k+j-b-m-i+m+k+i-l+i)%100;
      g += (j+a)%100;
      a -= (b+e*f-k)%100;
      l -= (a+a-k-c*b-j*c*m+m+a*b)%100;
      h  = (a+m*d-g-j-d-d-h+j-g)%100;
      c -= (h+n*n*a+m+n-b-k+e+b+g+c)%100;
   }
   else
   {
      while( ++WHILEcnt[65]%5 )
      {
         do
         {
            for( ; ++FORcnt[96]%5 ; )
            {
               for( ; ++FORcnt[95]%5 ; )
               {
                  c  = (k+g-c-g+d+h+c-h-a*a)%100;
                  h -= (i-a-c+i-i*n-d+n)%100;
                  d -= (a+i-b+m+a*j)%100;
                  h += (l-f-m-b*h+j-e)%100;
                  b  = (a+f-h+n-l*b*b*n*l*b)%100;
               }
               if( ++IFEcnt[63]%2 )
               {
                  a += (a*n)%100;
                  m += (b+a+n*b+i*f+g)%100;
                  d  = (e+c+g-n+g+g*c-j-c*j+b)%100;
                  n -= (d-f+k+d-d*e+g-e-h)%100;
                  b += (c+e+m-a*b)%100;
                  m  = (e*d-l+n+a-k*e*n+n+h+k+b+f)%100;
               }
               else
               {
                  i += (n+d-e-l-n)%100;
                  f -= (e-b+n+j+i)%100;
                  n -= (g-a+l+d-d-f-n-n-j*h+b+m)%100;
                  e += (c+b-j-i+l)%100;
               }
               while( ++WHILEcnt[63]%5 )
               {
                  k -= (m*j*i-c-j+f-k+e-g+f-f*m*n+h)%100;
                  g -= (d*b)%100;
                  l += (i*b-j*n+i*k-m+h+e-e+i*l+h+j)%100;
                  m += (l+c-m*c*g-l+e-l+h*i-g+j)%100;
                  b -= (a+k*b+l+l-k+d+b+g+j+f+n)%100;
               }
               do
               {
                  f += (e+f*g*d+l)%100;
                  e -= (j+b-i-m)%100;
                  k += (m+n-l)%100;
               } while( ++DOcnt[64]%5 );
               if( ++IFcnt[48]%10 )
               {
                  h += (e+a+h+h+b-d+k+k+j)%100;
                  f -= (c*h+i+c*c+d+c)%100;
                  h  = (c-i+d-a*d-k*c+c-l)%100;
                  f -= (b+i+k-e+j*c-m-f-a-b-h-k+f)%100;
                  j += (m*f-d+a*g+d*e*f+l-j-d*e)%100;
               }
            }
            l += (h-m-m+l+c)%100;
            for( ; ++FORcnt[97]%5 ; )
            {
               
               switch( ++SWcnt[32]%3 )
               {

               case 1:
               {
                  k += (f+a+e-d)%100;
                  c -= (i-h*g+m-n+j)%100;
                  a  = (g+g*l+a-e*d+i+c-g-h*m+c)%100;
                  j -= (e*b)%100;
                  d += (b-d*c+i)%100;
                  n += (a-g-j-f*b+m-l+g*h+k-i)%100;
               }
               break;

               case 2:
               {
                  k -= (b-l+l+n-k*b+m)%100;
                  f  = (i+n-l+i*c+l*f-l*m+h-a-j*k*h)%100;
                  l += (m+j)%100;
                  d -= (c*h+b-a-a-n-f+c*f-d-f-c-m)%100;
                  c -= (j*a-a)%100;
               }
               break;

               default:
               {
                  a += (i*b-e-b*m+l-f-g-c-a)%100;
               }
               }

               if( ++IFEcnt[64]%2 )
               {
                  h -= (l+l*i+l+j*h*l-m-b)%100;
                  l += (h-m-e*n+i+c+e)%100;
                  f -= (l-m-m-c*e-f-c)%100;
                  b -= (c-m-i+c+f*b+l*h+f-j-g+j-j)%100;
                  k += (j-l-h+h*a)%100;
               }
               else
               {
                  n -= (d-k+k-b+n)%100;
                  n += (a-f)%100;
               }
               while( ++WHILEcnt[64]%5 )
               {
                  b  = (g*n+f*j+m*n-n-f+l+i-b-h-d)%100;
                  a += (a+i+d*b*f+f+k-h*k)%100;
                  b += (i*n-h)%100;
                  g  = (c+b+h-m*j-h-k)%100;
               }
               g -= (j-a+e+d+f-n+f+f+f+c+d+n)%100;
            }
            e += (e+a+d+e+f+b+c+h)%100;
            a  = (l+b+i-g*j*a*h*m-i+j-l+h)%100;
            c -= (g-l+h-l+a*j+l-d-d+b-l-h-f*f)%100;
         } while( ++DOcnt[63]%5 );
         k  = (k+m)%100;
         l -= (i-n+m+a-l+n-g)%100;
         h += (n-a+g+k-m-a-d*k-d-n+c)%100;
      }
      l += (e-g-g-g*a-l-n)%100;
      n += (i+e-f-j-b-k-b+m+l)%100;
      j -= (f-i+l+e)%100;
      d -= (h-e*h-f+j-d+l-n-n+b+e-a)%100;
   }
   a  = (l+i+d+b+j*k+n*h+d+m)%100;
   h -= (c-e)%100;
   c -= (i+h+m+f+a+d-m+c-d*b-f-h)%100;
   m  = (k+a+a+h+d+i+d*k*h)%100;
   c += (a*c+m*m-m+a*i-m*l-l+h-i)%100;
   g  = (f*l-a-a+f*k-d+e+e+f-c)%100;
   j -= (j+h)%100;
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
         if( ++IFcnt[50]%10 )
         {
            for( ; ++FORcnt[98]%5 ; )
            {
               if( ++IFEcnt[66]%2 )
               {
                  n -= (i-n-k+i+j+b+h*m-a-a-j+j*h-m)%100;
                  n -= (k-i-n-h+d+l-k-h*b)%100;
                  h += (n*l+a+m*e-c+g*i-f*c)%100;
                  n += (l*b-e+c)%100;
                  h -= (m-m-a)%100;
               }
               else
               {
                  a -= (h*c-j*a+f-m+b+m+d*n-b)%100;
                  k += (h+c*j-m+g-j-j+h*l+h-l)%100;
                  a += (b-j*i*m+e)%100;
                  c -= (g+l*g*i-l)%100;
                  h -= (n+j-i-k)%100;
                  k += (n*a+d-e+d-a+b+l+k+i+h)%100;
               }
               while( ++WHILEcnt[66]%5 )
               {
                  d += (j+j+h+b+n+l*l)%100;
                  e -= (m-f+c*h-m+c-c-h+n*l)%100;
                  n -= (m+m*a+d+i-b+g-i+h*b+d)%100;
                  k += (l+a-l+h+k-m+b+j+g-i*c-b*a+c)%100;
                  l -= (d+b*a-n*c-g*f)%100;
               }
               do
               {
                  n += (g*b-d)%100;
                  c += (a+j)%100;
                  k += (m+d+e*f+m-h-g+f+n)%100;
                  j  = (g-k)%100;
               } while( ++DOcnt[66]%5 );
               n += (g+d+i+d*g-f+h+f-m)%100;
            }
            for( ; ++FORcnt[99]%5 ; )
            {
               
               switch( ++SWcnt[33]%3 )
               {

               case 1:
               {
                  g -= (b+b-b+f+g-c+m+l-d+e-g-h-f)%100;
                  n -= (g+m*m-k)%100;
                  b += (n-b-j-f-m*c-l*k)%100;
                  f -= (c+d+g-d*h*a)%100;
                  m -= (m*g+l*m*c)%100;
               }
               break;

               case 2:
               {
                  d += (b+e+g*k)%100;
                  i -= (k+c-i-n-m*g-c-b-h-f+g)%100;
                  e -= (i+f+i+d+i+i+f+b*b-e+i+l*h)%100;
               }
               break;

               default:
               {
                  a -= (l*m-f-d*a+k*j*a*i-g-h*j+h)%100;
                  i += (j-g+c-f*e+h*g+c+j)%100;
                  i -= (c+d+e*k-g)%100;
                  j -= (i+m)%100;
                  f += (m*a-a*c*l+l-h)%100;
               }
               }

               if( ++IFcnt[49]%10 )
               {
                  n -= (d-c-a)%100;
                  n += (d+b)%100;
                  k += (i-h*l+i-i-b*n-h)%100;
                  k -= (h-h)%100;
               }
               if( ++IFEcnt[67]%2 )
               {
                  l -= (h*n)%100;
                  l += (m+h)%100;
                  g -= (c*i+k*e-i*a*i+n-n+h*d-l+b*h)%100;
                  c  = (a-l+c-c-c-m-l+f)%100;
                  d -= (f-e-c-c-i)%100;
               }
               else
               {
                  f -= (d-b+b*n+g+i*n-k*f+j+k+l*i)%100;
                  h -= (c+f+d+h+n)%100;
                  l -= (j+a*d*f-j+n*g*m-l*j-n)%100;
                  a -= (k-l)%100;
                  d -= (k-c*e+i)%100;
                  m += (k*l*g+b-e+d+j+k-k+h+d*n+n)%100;
               }
               while( ++WHILEcnt[67]%5 )
               {
                  m += (b+f)%100;
               }
               do
               {
                  f += (h-e-b+b+e*i+f)%100;
                  e += (k+m-n-i+k)%100;
               } while( ++DOcnt[67]%5 );
               m -= (h-d-h-m-f-b+d*d-g-l*l-h)%100;
            }
            m += (m-g+m+h+f+m*m+h+b+k+n+c+n+a)%100;
            d -= (d-j+m*f)%100;
            j += (e+a-l-c*m+g*m+l+f+c+e+m+c-a)%100;
         }
         n -= (n*b+h*g+j*m*n+h+b-f-m*e-n+a)%100;
         n += (j-n)%100;
      }
      a -= (i+m-b-c-f+b*i-m-j)%100;
      f -= (h+b-f)%100;
      f  = (c+a-m+c-a-c+i*f+a-a-d-j)%100;
      n  = (l+l)%100;
   } while( ++DOcnt[65]%5 );
   i += (i+l-i-j)%100;
   f  = (h-b+b-k*c*d+f-i-e+n)%100;
   m -= (j+i-n-k+n-i-f+l-e*m+i)%100;
   i += (n-l*l-k+k-f*e+d-l+m)%100;
   k += (f+m*j+g+b+j+m-f*e+d+j)%100;
   l += (n+m*i*j-k-c-f+l*n+m-d)%100;
   c -= (f*g-n-l*f-h-d*k+j-b-m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F31(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[105]%5 ; )
   {
      for( ; ++FORcnt[104]%5 ; )
      {
         if( ++IFEcnt[69]%2 )
         {
            f -= (a*i-d+f*b+d-g+e-e-n-i)%100;
         }
         else
         {
            while( ++WHILEcnt[68]%5 )
            {
               do
               {
                  h += (h-n+i+f)%100;
                  m -= (b+i+a*g-g+m-k+a-d-d)%100;
                  h += (b+e-n+c+g)%100;
               } while( ++DOcnt[68]%5 );
               if( ++IFcnt[51]%10 )
               {
                  f -= (b*n+m-h*f-d*m)%100;
                  g += (h+j*k-m+d-c)%100;
                  k -= (m-e+m+m+d+f*l)%100;
                  d += (f-f+k-b+k*j+b+m+j-c+e)%100;
                  c -= (d+k)%100;
               }
               e  = (n-f)%100;
               for( ; ++FORcnt[101]%5 ; )
               {
                  c += (n+e-g+c+m-i-a-n-h*i+d-n+n+i)%100;
                  l += (j+n)%100;
                  b += (f-e+j+g+c+a+a*b*e*b+a*l)%100;
                  j += (h+m-l+i-g*k+l-d+m+e-a-b+g)%100;
               }
               
               switch( ++SWcnt[34]%4 )
               {

               case 1:
               {
                  j -= (e-h)%100;
                  j += (f+i+n+b*d-n+n-j-n-i+b)%100;
                  c -= (l+m*d-a+c+n+a-a*e-e*k+g-l+c)%100;
                  l += (d-d-k*d+l+b+l-j+c)%100;
                  m -= (j-d+e+k*i-e-h+l-g+c)%100;
                  e -= (g-g+g+g*i+l+l-c+n*m-g-b)%100;
               }
               break;

               case 2:
               {
                  j -= (a-h+l-d+b-b-h-i)%100;
                  d -= (e-i-b+n+e*h+n*e-g*d+l+e)%100;
                  h -= (d-h)%100;
                  b  = (m+a+l+i)%100;
                  g += (e-d)%100;
               }
               break;

               case 3:
               {
                  a -= (d-a+e-j-f-g-f+i-a)%100;
                  k += (h-e+k+j-n)%100;
                  l -= (l-j-k-j-m-e-m*f-g)%100;
                  k -= (c-b+j*k*f+i+l+i)%100;
                  n += (h*h*k*h-a-a-f*l-f+i-j-i-b)%100;
               }
               break;

               default:
               {
                  f += (k-n+i+g*l-i-j+h-k-g*a-d-g+f)%100;
                  m  = (d+g+h*d)%100;
                  c += (l-d*l-n+k)%100;
                  i += (d-j*f+d+h-i+i+a*d+l*l)%100;
               }
               }

            }
            if( ++IFEcnt[68]%2 )
            {
               b -= (j*h*k-a+b*n+l+j+b)%100;
               h += (d*n+j+a+d*i+e+j-h*j*l+k)%100;
               e += (c-g-h*i+g-f*k+d)%100;
               k += (n-a+m+h-g*b)%100;
               h += (l*h)%100;
            }
            else
            {
               while( ++WHILEcnt[69]%5 )
               {
                  b += (f+a*l-a*k*a-c-m+d+j-b+l-k-n)%100;
                  n -= (i+j-m*j-n-m+h*d*b*c-e+d+e)%100;
                  c += (h+m-b+h-h-j+h+l+f+b-l)%100;
                  g  = (l-e)%100;
                  h -= (h-n-j*b-i+m-h*i)%100;
               }
               do
               {
                  m += (k+g-n-g+f*g+f-d)%100;
                  k -= (i-m-c-f+l+g)%100;
                  e += (i-c-e-i-j-c-a+h*c*k+f+i-l*j)%100;
               } while( ++DOcnt[69]%5 );
               for( ; ++FORcnt[102]%5 ; )
               {
                  n -= (k*e)%100;
                  i += (f-n+a+j+d)%100;
                  l += (a-f-j-c-j*h)%100;
                  h += (i*j)%100;
                  a -= (d*g-l+g-k-d+a-d+h+a-d)%100;
               }
               if( ++IFcnt[52]%10 )
               {
                  c -= (e-f)%100;
                  a -= (j-f+d*j-b-c-i+a)%100;
                  n += (f+b+a)%100;
                  n += (j-n+b-d+d+l)%100;
               }
               for( ; ++FORcnt[103]%5 ; )
               {
                  a -= (g-m*a-h-k-n-d*i+e+h-f)%100;
                  c += (j*k+m+c+h-b-l)%100;
                  n += (n+i+a-n*n+j-l+j+h+i)%100;
                  n -= (d-l+h-a-e+j+i-g+l+m*j+l+j-b)%100;
                  k -= (f+n-j+n+d-a+c-f+b)%100;
                  n += (l+i+a-g+g*l-n-l-j-d-m-a-f+i)%100;
               }
               m -= (j+g-f+e-k+e-f*m+c)%100;
            }
            f += (m*i-k-m+j)%100;
            a += (j+j+f-k-b*g+e-j*k-h+l-l+h+l)%100;
            l -= (d*k-l+a-n+n-h*c-e+c)%100;
            b -= (f*n-n-l-m-g+a*k+l-m+b)%100;
         }
         g  = (d+m)%100;
         h -= (c*d-l*h-k-j-n+m-e+b-j)%100;
         l -= (j-a-f+f+a-j-a)%100;
      }
      f -= (e+l+j-l*n-c-b-a-i-m+i)%100;
      b += (m-h)%100;
      b  = (c+b+e-g+a+e+f)%100;
      h += (m-i-f*m+d+d+a*j*l-l-f)%100;
   }
   n += (d+l*n-g-k+c*g*d)%100;
   l -= (b*j-h-h+l-k*k+i*g-k)%100;
   g += (l-f)%100;
   c -= (f-j)%100;
   e -= (l-l-i+j+b*j*n)%100;
   l -= (f-m-c*j*h*c-e+g+a+d+c+d-i)%100;
   h -= (e-b-j+g+j*n-c-a+k+l+e-a-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F32(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[72]%2 )
   {
      e += (k*g*h-d+a+j-g-d+h*a-c-a)%100;
      c += (c-l*l+k+l-d-b+b)%100;
      n += (h-e-c+a)%100;
      i -= (h-j-b+c)%100;
   }
   else
   {
      while( ++WHILEcnt[71]%5 )
      {
         do
         {
            c += (g-f-f+h-a-g+b-g*b-c-a-a-m)%100;
            for( ; ++FORcnt[107]%5 ; )
            {
               
               switch( ++SWcnt[35]%3 )
               {

               case 1:
               {
                  c += (i+a+j-l)%100;
                  h += (d-g)%100;
                  j -= (b-k)%100;
                  d -= (d*n*e-k)%100;
                  m  = (f-k-c)%100;
               }
               break;

               case 2:
               {
                  m += (n+b-j-d-l)%100;
                  l -= (k+f+c+l*f)%100;
                  j -= (a+i+j+c-c+a-c+c-k*c*b)%100;
               }
               break;

               default:
               {
                  c += (l+e)%100;
                  a += (b*m+i)%100;
                  a += (i+j-c-h-b*e+h+b-e+d-b-g*n)%100;
                  a -= (i-d)%100;
                  k += (n+b-m-i+b*j*h+b-d-i*l-m*k+h)%100;
               }
               }

               if( ++IFcnt[53]%10 )
               {
                  d += (l-g+j-k-a-g*k*h)%100;
                  e += (d*e*n+a-a+f-h+c+f-f)%100;
                  d += (g-m+n*k*n)%100;
                  n += (c+f*j-i*m+e-m+i+k+d+m)%100;
               }
               if( ++IFEcnt[70]%2 )
               {
                  l -= (l+j-b-c-h+g-b-m+d-a*h-j*d+f)%100;
                  h -= (b+j*d-k-j+g*f+i*h-n+j)%100;
                  j -= (a+b)%100;
                  d -= (g-k-e+a+k*n-m-d+i)%100;
                  m -= (f-m*b-g+a+l+h+g+h+k+n)%100;
               }
               else
               {
                  k += (d*h+m+g-m-h*b*h+m*l)%100;
                  c -= (f+j)%100;
                  n += (a*b-a+a+h*f)%100;
                  f -= (l-g+f-f-g*b*m+h+m-f)%100;
                  j -= (h-i+f+j+h-n+m-c-a+g*c+f-n)%100;
                  f -= (i+k-f+l-a*g-d*l+f*g)%100;
               }
               while( ++WHILEcnt[70]%5 )
               {
                  e += (n+n-e*l*n+c+i+b*b*i-b)%100;
                  c -= (f+h-l+l+e+n-a)%100;
                  a -= (k+m+l-d-m+m+f+f-l+c+d*l+h)%100;
                  d -= (g+h)%100;
                  c  = (g*d+h+e)%100;
               }
               do
               {
                  h += (k+c)%100;
                  g += (a-j+j-f)%100;
                  f -= (e-i-g+k)%100;
                  c += (d-e-n+k-l-k-c+f-b+k*a*i-i-f)%100;
               } while( ++DOcnt[71]%5 );
               for( ; ++FORcnt[106]%5 ; )
               {
                  k -= (h-n)%100;
                  j += (l-h+n*m+f-c-j+c+d+h)%100;
                  b  = (l+h+j*n+l+j)%100;
                  h += (b-n)%100;
                  f -= (h+a+b-i*j-e+h-l+k*f*i-n*c)%100;
                  g += (h-g*k*m*j*i*f+a*l-k)%100;
               }
            }
            for( ; ++FORcnt[108]%5 ; )
            {
               if( ++IFEcnt[71]%2 )
               {
                  i += (i+a+f-k-b)%100;
                  d += (k+m-n*e+j-k*k+f+j-i)%100;
                  k += (h+f-j-h)%100;
                  k += (b+i)%100;
                  i -= (l+l)%100;
               }
               else
               {
                  h  = (i-l*n-i+e+f+b-h-k+a*h)%100;
                  n -= (d-m-n-e-k+i-k+n)%100;
                  f += (i+h+f-j)%100;
               }
               m -= (e+e-d-e)%100;
               f -= (n-e+i-c-b+m-n+e-n-i-g-a)%100;
               f += (l*b*h+e+b-c+n-c+h+f+c)%100;
               k += (c-g*f-e+f+m-g+m+a)%100;
            }
            e -= (a-d-f*e*j-f+h*l-b+n*k*d)%100;
         } while( ++DOcnt[70]%5 );
         n -= (e+g*c+j-m-d+j-f-h+d+c-j-e-a)%100;
         d += (g+f-a-h*b-b+c)%100;
         a -= (n*g+h-a+m-g-i+g)%100;
         c += (g-n-j+k+l+h+g-l-e+i)%100;
      }
      e += (l-i+f+a+n+l+c+j-d+m+n+m*j)%100;
   }
   e -= (d-d*m*l*i+j-m-l+j-g*g-f-f)%100;
   j += (n-h-e+a)%100;
   b += (a+k*i*b+h+l-l+f+c+j-n)%100;
   f -= (m-k-k-k+g-a+k+g)%100;
   c += (h-j-d+k-m+b*e-m-h+b*i+d)%100;
   g -= (e-m+c-l+m+f-e)%100;
   k += (e+a-a*f-d+h-n-b*k+n-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F33(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[74]%5 )
   {
      do
      {
         if( ++IFcnt[54]%10 )
         {
            d += (j*i+b+d*e+j-b+j)%100;
         }
         for( ; ++FORcnt[111]%5 ; )
         {
            
            switch( ++SWcnt[36]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[73]%2 )
               {
                  n += (c+i-b*l-m+h+d*g+b+k+i-d+k+k)%100;
                  g -= (i-g-j-f-a-k-d-m*g-d*d)%100;
                  i += (g*e*m-l+k)%100;
                  f -= (d-c*n-e-m-j+k-f-c)%100;
                  m += (f-m+g-k+a-d-k+i*a-a-a+d+j+l)%100;
                  d += (d-h)%100;
               }
               else
               {
                  m  = (a+n+f+g+m-d-i+k-d+b-n)%100;
                  l += (j+k+d+a*f)%100;
                  n += (c*n+l)%100;
                  m += (k*e-e-h+b*f*m+a*g*l)%100;
               }
               while( ++WHILEcnt[72]%5 )
               {
                  f += (c-d+a-h-l+h*e+b-a)%100;
                  i += (c*h+h-m-j)%100;
                  d += (m-l+g*f-l-d*b*g+i-b+j)%100;
                  j -= (c-h*k-h-l+c*k*d+k)%100;
                  c  = (j-m*n*c)%100;
               }
               do
               {
                  h += (f-h-a)%100;
                  c += (m-m+i*g)%100;
                  m -= (j*h+l*n-a-b+b+l-n)%100;
               } while( ++DOcnt[73]%5 );
               for( ; ++FORcnt[109]%5 ; )
               {
                  f  = (d+j)%100;
                  c -= (k*d)%100;
                  k += (k+e+a+i-m-k+e+d+g)%100;
                  k -= (a+m-h-h-c-a+i*k-g+c-g)%100;
                  m -= (b-b-e+g-i-g+c-a-g+n+f-e)%100;
               }
               if( ++IFcnt[55]%10 )
               {
                  b -= (k-l+h-a*j)%100;
                  c += (b+f)%100;
                  e += (l-f*g+n*d*h-e-n)%100;
                  c += (k+f-n-m*k-a+a+j+g+l)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[110]%5 ; )
               {
                  m -= (d*f+g+n+n*f)%100;
                  n += (k-e+j)%100;
                  c += (j+d)%100;
                  m += (f-f*k)%100;
                  m += (i+n+c*f*n-h+h*m-h+c+j-g)%100;
               }
               if( ++IFEcnt[74]%2 )
               {
                  f -= (a+m)%100;
                  j += (i+h)%100;
                  i += (l-b*d-m-g)%100;
                  a -= (m+j-a*f+m+j-a*l)%100;
               }
               else
               {
                  h += (d-g+k+m-j)%100;
                  c += (l+f*f+d*m+g-a+b+h*l*k-d*k)%100;
                  h += (e-j+b-b+h-j+e+d-l*c*k-g)%100;
                  j += (j*a)%100;
                  j += (n-d-j*j-f-c*n)%100;
               }
               while( ++WHILEcnt[73]%5 )
               {
                  k += (l*a-l-n-c-m+f*m-d-i-k+m)%100;
                  e += (c-k*d)%100;
                  k -= (l*a-j-k-j-n*m*i)%100;
                  k += (e-l*a-m)%100;
                  m += (b+l-j-n*d-l-g-k-f+a)%100;
                  e -= (c-i-i+l+e+l-m-l+l-f)%100;
               }
               do
               {
                  i -= (l-h-n+c+k-d+a*l-l-n)%100;
                  b -= (a-j+l*l+l+h)%100;
                  c += (d*e-f*j-i-l+b+b+g*j-n+f*g)%100;
                  k -= (e-h-d+l+m-b-i-m+c*l+b+h*h-b)%100;
                  n -= (f*j+i-n*e+b+m*j-m)%100;
               } while( ++DOcnt[74]%5 );
               l -= (m+d+h-e)%100;
               e -= (c+h-i+i*h+d*c+g-l+d+g)%100;
            }
            break;

            default:
            {
               h  = (d-h+b*m-n*g-e*j+h)%100;
               a += (d-f-c-j-c+i+a+e-i-c)%100;
               d -= (b+l-f*e-d+l*n+d)%100;
            }
            }

            k -= (d-l-j)%100;
         }
         n -= (h+d)%100;
         j += (m+b)%100;
         d -= (a+a-k+b+a)%100;
      } while( ++DOcnt[72]%5 );
      m -= (l+a+k+d+f+k-m-m-e-f-i+l*a)%100;
      g -= (l-h-g-j-k+a+k+g+m+i*b-n)%100;
      b -= (l-n+b+n-j-n-j)%100;
      j += (c*g)%100;
      e += (i+j+m)%100;
   }
   a -= (b*l+j+d-h-g)%100;
   e -= (g+g*b-m+h-a-f-d+n-i*b)%100;
   i -= (h+n-c-i+d)%100;
   d -= (b+c+c*d+m+f)%100;
   d += (d*a*j+e-i+h-h+d+e+m)%100;
   m -= (a*n+c-m+d+f+h+i*j*e-n)%100;
   n -= (n+c+m+j-l+f-h-l+b+a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F34(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[37]%3 )
   {

   case 1:
   {
      for( ; ++FORcnt[115]%5 ; )
      {
         d -= (k-j*k*j+b-b*d+e+c-n)%100;
         if( ++IFcnt[57]%10 )
         {
            if( ++IFEcnt[76]%2 )
            {
               while( ++WHILEcnt[76]%5 )
               {
                  d += (g*h+h-m)%100;
                  l += (a-f-a-m-j-e*h-c*j+f+k)%100;
                  m -= (m*h-d+d+m+j+a-j-n)%100;
                  e += (i-n-k*h+d-l+g-c-l+a+j*c+e)%100;
                  c -= (b+a+m*m*c-b+g)%100;
               }
               do
               {
                  b -= (a-d-l)%100;
                  e += (e-f*i+e+k+m-m+k+i-j-g*e-i+a)%100;
                  m += (j+n*e+j+b-k+h+f-e)%100;
                  e += (h*c+h*j*a+c*g+a*i-e)%100;
               } while( ++DOcnt[76]%5 );
               if( ++IFcnt[56]%10 )
               {
                  d -= (n+n+m*f-g+b+c)%100;
                  k -= (j*c+h+i+i-f)%100;
                  a  = (l+m-k-j*d)%100;
                  i -= (m*g+e-e)%100;
                  k -= (b+n-i*j+g*d*f)%100;
                  i -= (c*m*c+j-h-l-a*a-k+a*c)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[75]%5 )
               {
                  a -= (a+g*b*e-j-j*h-f-i+k)%100;
               }
               do
               {
                  l += (d-m*d+i-i-m-m)%100;
                  b += (m*c-i+f*k-f-i+d+d+i-k+h*a)%100;
               } while( ++DOcnt[75]%5 );
               for( ; ++FORcnt[112]%5 ; )
               {
                  m -= (g-c-d-j-a-l*b*a+b)%100;
                  d  = (h-b-c+a*e+i)%100;
                  b -= (f-d+g)%100;
                  c -= (c-m-n+m-j)%100;
                  b -= (j-g-j-e-e-d+h-a+a-i-k)%100;
               }
               for( ; ++FORcnt[113]%5 ; )
               {
                  c -= (c-e*d+k-e*d*n-l+j-k+c+i-i)%100;
                  f -= (e+a+a*f*m*d-h+k)%100;
                  c += (i-i-d-h*k+l*a+d+l)%100;
                  i -= (k+a-n-a*h-d-a-h-b)%100;
               }
               if( ++IFEcnt[75]%2 )
               {
                  e += (k-g*e+h+i*a+h+f+i+l-d+e)%100;
                  n -= (j-m+h+l+b+i*e+d*j-j-f*m-h)%100;
                  j -= (k+h-e-f-m-h+n-d+j)%100;
                  j -= (h-e*f*b+j-g-b-f-c)%100;
                  m -= (j+a*h-i+k+g-g+d-m*n-i)%100;
               }
               else
               {
                  b -= (a+i-b*l-c*f+k*c+i*c*j-f-a-k)%100;
                  g += (b+a-l+e+i-a+m+h*n-j+f+l*a)%100;
                  g += (b*f+c-h+e+d-c*c*f-b+k-j)%100;
                  g -= (n*l*c+l*l+f*g+j*a+d+l)%100;
                  j -= (e*m+i-k-k+e*l-i-l-a+k+b+n+n)%100;
                  j -= (a+b-k-m-e+e+a+d-f-f-g-c-b)%100;
               }
            }
            a += (g-j+n+g+h-d*m-h)%100;
            for( ; ++FORcnt[114]%5 ; )
            {
               
               switch( ++SWcnt[38]%3 )
               {

               case 1:
               {
                  d -= (e+n-c+i*h+n)%100;
                  d -= (m-a*i+e-e-n+e-i-i)%100;
                  l -= (e*h-e-j)%100;
                  h += (k+l+e-n)%100;
                  l -= (m-i+j-l-e-d-a+c-l+m-h*e-m+i)%100;
               }
               break;

               case 2:
               {
                  m -= (j*m-h*g-e+d-n+g+j+f+i+l+k)%100;
                  h -= (g*g)%100;
                  j  = (f-a*h)%100;
                  k += (c-n+j-e+g-n+f)%100;
               }
               break;

               default:
               {
                  i += (c-i*k*h)%100;
                  j -= (n*h-k-h*i+m)%100;
                  b += (l*b+b+n+l*f-l-n+m+n+c*m+f-k)%100;
                  d -= (l-j*b-e+l*i+k)%100;
                  f += (b-h-i*m+n+m+n-i+m*b+l+c-e)%100;
                  h += (e*j-c*n*f-a-g-f-l+n+l+c+g-f)%100;
               }
               }

               d += (h+h)%100;
               n -= (n-g-l+j+j*h+f+j+c*d-f)%100;
               j -= (g*c+g+k)%100;
               n += (f-c-g-j-e-n+e+l-b+h*a)%100;
            }
            h += (i+h*j+e-d-l+i+n*n+m*n-a)%100;
            d += (f-e+e-j-g)%100;
            n += (h+h-j-n*b-d)%100;
         }
         d += (f-n+k*h+l*d*i+b-l)%100;
         d  = (f-n+g*i+a*a)%100;
      }
      h  = (c+h+k+j+g*j+a-c+l+b+h+i-j)%100;
      h  = (k+c-h)%100;
      a += (m+a-b-l+i-i*a*e-c+i-i-d)%100;
      a -= (g+g-g+d*e+l-j+f-k*c-l*l-l*j)%100;
   }
   break;

   case 2:
   {
      k += (k*h*l-h*a*k+c-e+h+n+d+j-i-l)%100;
      b -= (a-k-h-k*d-i*k*c-e+h*m-a-f)%100;
      b -= (m+h-e-j*l)%100;
      f -= (g-b+j+b-g*b+m-b*e*e+l-a+d+j)%100;
      m -= (e*e+g+k)%100;
   }
   break;

   default:
   {
      k -= (b+h-l+n-g+l+j+j+l*j+j)%100;
      j += (m+f+g*e+j*j-k*n-c)%100;
      l  = (c-f)%100;
   }
   }

   l -= (c*k)%100;
   m += (a+k)%100;
   d -= (e+n+g)%100;
   d -= (g+i-c*f-e-h+l+i-d+a*g)%100;
   n += (i*c-l*k+g-h)%100;
   c -= (a-m-n)%100;
   l  = (f+c-j-j+c+n+e+e-k*k+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F35(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[78]%2 )
   {
      h += (f+c+j*d-h-m-d)%100;
      g -= (l+a+k-e+b-b+h+b)%100;
      l -= (f*e*b+a*c*k+l)%100;
      b += (i-b*g*c+m-j-j+c+h+d-k+m-f)%100;
      c += (a*e)%100;
   }
   else
   {
      while( ++WHILEcnt[78]%5 )
      {
         do
         {
            for( ; ++FORcnt[117]%5 ; )
            {
               if( ++IFcnt[58]%10 )
               {
                  i -= (e-b)%100;
               }
               for( ; ++FORcnt[116]%5 ; )
               {
                  n -= (m-k*l+n*n-n)%100;
                  n  = (k-k-e-f-c*h+i-i+e+g+i)%100;
               }
               if( ++IFEcnt[77]%2 )
               {
                  g -= (n+g-b*k*f-c)%100;
                  g -= (i+m-a+i+d+m-l-m*i+b)%100;
                  l -= (e-i-m)%100;
                  j += (g*c-e-g+k-a+c*g-a-m*i)%100;
               }
               else
               {
                  j -= (h+e+a+h-h+m-e+j*g-n-i-f+e)%100;
                  f += (e-b)%100;
                  d -= (d-k)%100;
                  i += (i+a-e-c*b-i-i-k)%100;
                  b += (j-e+m*k*c*k+g*c+n)%100;
               }
               while( ++WHILEcnt[77]%5 )
               {
                  i -= (a+k-e-i-j*j-k+a+j+l-m-k)%100;
                  c  = (a*i+c-d+i*f)%100;
                  f += (i-l+n-f*d+g-h+l-h-f-n*n-d)%100;
                  h += (m*g)%100;
                  e += (c*h-l+h)%100;
                  g -= (l+d-l-i+l+c*d)%100;
               }
               do
               {
                  m += (g+n)%100;
                  f += (i*i+m-c*b+l+e-k+n)%100;
                  m -= (e*e-d-h+m)%100;
                  a += (l+e+l+l+i)%100;
                  a += (b*i+f+k+d+n+i*f-b-h+c)%100;
               } while( ++DOcnt[78]%5 );
            }
            j -= (b-a)%100;
            for( ; ++FORcnt[118]%5 ; )
            {
               
               switch( ++SWcnt[39]%3 )
               {

               case 1:
               {
                  j -= (d-a-f)%100;
                  i += (i-j*d*m+e*f*h-e-h)%100;
                  m += (c-f+j)%100;
                  m -= (m-m)%100;
                  b -= (b-n-b-j+k-a)%100;
               }
               break;

               case 2:
               {
                  m -= (f+h*f-j+j-a*m+c*b+m-m-b*l*n)%100;
                  e += (e+g+f+k-c+j-b+l*c-l)%100;
                  a += (d*i-c+m*m-i*g+b*i*n+b-l*n)%100;
                  c += (e-k)%100;
               }
               break;

               default:
               {
                  l += (h-i*f-e)%100;
                  n += (n+n-k+a*c+l-k*k+a*m-a+c-g-m)%100;
                  b -= (a*n*c+j-j-k-n*e*j-m*n-n+i)%100;
                  d += (i+a)%100;
                  j += (c*m*m+l+n-j+m-j-f+f-d+g-i*k)%100;
                  e -= (k*c)%100;
               }
               }

               g -= (e-d+c-h-c+l-f*d)%100;
               n  = (i+k)%100;
            }
            c += (m-f+n+g-b+e+b*d+l+n-d+a+e-a)%100;
            l -= (h-m+g+l+k)%100;
            d += (n+i+j-a*a+j*n+b)%100;
         } while( ++DOcnt[77]%5 );
         c += (k-n+m+d)%100;
         f -= (l*d-i-m-m)%100;
         e -= (d*c-i+j)%100;
      }
      k -= (f+f+m-e-k+l-l-a-m+i-d+d*f)%100;
      c -= (c-m-g-e-c)%100;
      k -= (l*e)%100;
      i += (k-a+n-b+i+e*j+m*g)%100;
   }
   e += (g-k+m-b-h+l+b+k+l)%100;
   m -= (g-g*c+n-c+m-m-n)%100;
   g -= (n-l)%100;
   e -= (m-b+b-k-c+k-g*b*j+g+h+i+j)%100;
   l  = (f*h-e+k-l*n+j*j+f+f*f-a*a)%100;
   n -= (b-c)%100;
   c -= (i*d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F36(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[60]%10 )
   {
      if( ++IFEcnt[81]%2 )
      {
         h += (c+l*h)%100;
         i += (g-a+h+h-a+i)%100;
         d += (b+b-m-f*g-e-b+d*l*h-f*n)%100;
         n -= (d-d-c-j+m+f*k*a-g+j*j+a*l+b)%100;
         l += (g+i-h*b+a+b)%100;
      }
      else
      {
         while( ++WHILEcnt[81]%5 )
         {
            do
            {
               for( ; ++FORcnt[119]%5 ; )
               {
                  m += (f-l+k-f-c-a-a)%100;
                  l -= (f-k-d+b+a-g+f*n-l*d+k)%100;
                  e += (f-j+b+b-g+i+c+i*k)%100;
               }
               for( ; ++FORcnt[120]%5 ; )
               {
                  h -= (b+f+e*j+h-g-h+i*l+m)%100;
                  i += (l-m-f)%100;
                  h -= (n-i)%100;
                  c += (h-m-d-k-i*f-l+a-j+j-g-n+a+j)%100;
                  i -= (j+b-a-n*j-g-e-i-h-c*b)%100;
               }
               if( ++IFEcnt[79]%2 )
               {
                  e += (e*n-h+b-e*k-l-k-d-k+h+f-f-g)%100;
                  g -= (i+d*k*l+j+f-c+m-n+k-l*n-l*n)%100;
                  i  = (i*l+n+g)%100;
                  g += (c-g-h+h-f)%100;
                  g  = (a+j-d-h)%100;
                  m  = (g+j)%100;
               }
               else
               {
                  f += (e-i*j+c-a-e)%100;
                  g -= (f+k+c)%100;
                  l += (l-c-i+c-j-h+j+i)%100;
                  i += (e+n+a*g-i-g*l+b+c)%100;
               }
               while( ++WHILEcnt[79]%5 )
               {
                  i -= (n-i*c+f)%100;
                  n -= (j+n*m*i-d*m+c*a)%100;
                  m -= (d-c+g+b+b+c+d+g+f-a-m*a+d+n)%100;
                  d += (f+e+j-i-a)%100;
                  d -= (h+d-b*c*a-c+g)%100;
               }
               do
               {
                  j -= (a-c+d)%100;
               } while( ++DOcnt[80]%5 );
            } while( ++DOcnt[79]%5 );
            if( ++IFcnt[59]%10 )
            {
               i += (n-e-h-g+k)%100;
               for( ; ++FORcnt[121]%5 ; )
               {
                  j -= (b+d-i+e-b+g)%100;
                  e += (k+g-l-c+g*c-k-l)%100;
                  g += (n+c)%100;
                  l  = (c-e+i-i)%100;
                  c += (k-i+i+n*g-h+c-l-b+a*h*h)%100;
               }
            }
            
            switch( ++SWcnt[40]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[80]%2 )
               {
                  m -= (e-j*h*i*n-j-g+j-a-d-n-k)%100;
                  e -= (h-a)%100;
                  j -= (m-c+n+i+g+h)%100;
                  n  = (e+l)%100;
                  n -= (k-b-b-h+k-n*f)%100;
               }
               else
               {
                  l -= (k+h+m-e+l*k+b*m)%100;
                  b -= (h*m+c+j+n+g*i-i-c-k-j)%100;
                  e -= (k-j+e+j-n+l*b-k+f*i)%100;
                  i -= (e-l*e+n+b-m+b*e-m)%100;
                  m -= (b-i+l+i-f-n+m*c+j+c+a*j-b)%100;
                  e += (i+m+f)%100;
               }
               while( ++WHILEcnt[80]%5 )
               {
                  j -= (j-g)%100;
                  e -= (m*l-k)%100;
                  g -= (n+m-e+h+f+c-l+l-d-f)%100;
               }
               do
               {
                  h -= (i+a+i-m-g+m*m-c-i)%100;
                  c += (f-c-f-c-a-n+g*n+j*g*m)%100;
                  g -= (l+a+m*d-k*m+d-i+i+c)%100;
                  f += (l+c)%100;
                  l  = (f-i-d+n*a)%100;
               } while( ++DOcnt[81]%5 );
               e += (k*f*f+a*d-l-j-b-d+b-a*f+m)%100;
            }
            break;

            case 2:
            {
               c -= (j-g)%100;
               c += (e+n+i)%100;
               c -= (d*c-d+d-a-b-a+m-c-e+n)%100;
               e  = (l-f+m)%100;
            }
            break;

            default:
            {
               h += (g-c)%100;
               l -= (b+i)%100;
               b -= (e-h*n)%100;
               d += (a+b)%100;
               i -= (n+c+m-b+f+a-n-b)%100;
               l += (k*k-j-b*b+g+k+f-b+h-i-n+j)%100;
            }
            }

            d -= (n*c+m-l*h+h+b*e+m)%100;
            e -= (n-k-j*b+l+m+m*k-a+i+g-n*d+n)%100;
            f  = (b-d*i*n-l)%100;
         }
         l += (k+d+n+f+n)%100;
         f += (c*i*k-a-d-d-j-d-n-b)%100;
         c += (f+a+n-d-c*b*k+b+m-g+m)%100;
      }
      h += (n-h+e-j+n+f)%100;
      e += (f+h-i+j)%100;
      c += (j+f+d-m+n*h-e-m*m*d)%100;
      c += (a+c)%100;
   }
   n -= (e*h-j-h+l+i)%100;
   g += (g-l-h-j-l*g+l+l-d+g-j)%100;
   b -= (f+b+i-a)%100;
   b += (d+i+e+m-h)%100;
   h  = (l-i)%100;
   m -= (e+d+i-n-h*e+k-n)%100;
   e -= (i-l+f-h-i-h-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F37(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[124]%5 ; )
   {
      if( ++IFcnt[62]%10 )
      {
         for( ; ++FORcnt[123]%5 ; )
         {
            if( ++IFEcnt[83]%2 )
            {
               if( ++IFcnt[61]%10 )
               {
                  k -= (m-h+b+j+d*a+a-b-m)%100;
                  l += (b-m)%100;
                  e += (m*l)%100;
                  l -= (j+g+i-i)%100;
                  j -= (l+a*i-e+b-a+m-n*j-k)%100;
               }
               if( ++IFEcnt[82]%2 )
               {
                  g -= (h+f)%100;
                  f -= (m*l-l+i*l+d+j+k-b+k+m*f)%100;
                  j -= (n-i*c)%100;
                  l  = (c+i-f-l+a+h-n-f-h-f+f+a)%100;
                  e -= (f-f+n-f+g+m+j-b*n+d-e)%100;
                  a -= (f-g-n-c*d*l+a-b+h+k-k-f)%100;
               }
               else
               {
                  c += (c+n)%100;
                  a -= (k-k-d)%100;
                  h += (h-g-f-b+e-k+l)%100;
                  i  = (l-k-n+e-i-k)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[82]%5 )
               {
                  e -= (k+m-g)%100;
                  j -= (m*k+h+j+k+j-n*d-k-m-n)%100;
                  e -= (n+l*f*i+j+j-k-m+l*b)%100;
               }
               do
               {
                  d += (b-d-n-b-f-b+d-c*g-n)%100;
                  d += (i*e-m)%100;
                  l -= (l+b-e-l+e+e+e-c-d)%100;
                  d += (i-m+f+h-c+h+k+a-g+l-g+b+j)%100;
                  e += (m*f-c-b+k-n-n+g*g-e+f+m*i-e)%100;
               } while( ++DOcnt[82]%5 );
               h -= (j-m+d-m*j-k-d-i)%100;
               for( ; ++FORcnt[122]%5 ; )
               {
                  m += (i+a+a-k+m-b+f+m-d-k-m*c-e+a)%100;
                  a -= (i+a*c+a+f+f+n-e*f)%100;
                  f += (m+d*b-n*b-b-d+l-g+j+j+g+d)%100;
                  i += (a+f+g-h-b+l-k-k*h)%100;
               }
               
               switch( ++SWcnt[41]%3 )
               {

               case 1:
               {
                  e -= (i*c*e*d-f*n*a+m+a+h-c)%100;
                  k -= (l+j-i-i+h+k-j*i-d-a-h+a+e)%100;
                  c += (j+e+n*a*m)%100;
                  h -= (a+d+j-k+h+m-l-c+h-n+j)%100;
                  c -= (f+a-g+f+j)%100;
                  j -= (k+i-b*f-e-f-g-e)%100;
               }
               break;

               case 2:
               {
                  l -= (m+m-h-a*a+a-i+g+b+e-m-d*i)%100;
                  a -= (n+g-e-f+f*b-a-f)%100;
                  k  = (e+h*k+k+b*e+g-f-g+e*n-j+h)%100;
                  k -= (c+n-g-m-b-g-f-e*n+l-f-j*m)%100;
                  m -= (e-j*i+g+n-g+g*a)%100;
               }
               break;

               default:
               {
                  l += (c-l+n-h+j-m)%100;
               }
               }

            }
            while( ++WHILEcnt[83]%5 )
            {
               do
               {
                  j += (f+l-m-k+c+g-k*k+c+f+d)%100;
                  j  = (l+c+h*c+k-n-a-j*m*n)%100;
                  c -= (b*g+h-h-m*j+a-g+d-f+l+i)%100;
               } while( ++DOcnt[83]%5 );
               m += (j*i*c+n+d-j*d+l-b-g)%100;
               k -= (m+h)%100;
               g -= (k*m+b-m+e*g+e+n)%100;
               c -= (f*c+n+k+e-g+g+a-d+n)%100;
            }
            e  = (b+d-k*e-j*c-d-k+j-c)%100;
            a  = (a*d)%100;
            k += (g-d)%100;
            f -= (f+d+a-b+i+i+a*i+c+b*i*k)%100;
         }
         e += (m-f)%100;
         h  = (b*d-k)%100;
         k += (k+d-m)%100;
      }
      h += (n+n+b+f*j*e-b-h-e*k+n)%100;
      l += (l*e*l*n+i-f+k)%100;
      e -= (k-i+e)%100;
      a += (f-j-j*d+j+c*f*g+a+b*h-c+b)%100;
   }
   a -= (c*c+a-l-a)%100;
   a += (k-e*l-b*h-n+f+a+d*j+c+a)%100;
   n -= (k+e*b-c+h-e-k+n-k-g-n+d-c)%100;
   k += (k-e+d*l-c*n-g*d-m-f-k+n)%100;
   d += (c-a*c+h+b+j-f*a+l-k*h-n-d)%100;
   c  = (a-d+e+f-h-c*n+c-g)%100;
   n -= (d-h+e-l*c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F38(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[129]%5 ; )
   {
      for( ; ++FORcnt[128]%5 ; )
      {
         if( ++IFEcnt[85]%2 )
         {
            l -= (b+c-m)%100;
            b += (k+k+m+c-f*j*i)%100;
            k -= (n+a-f+i-n*n*l-j*n-a)%100;
            h += (a*b)%100;
            k += (b+l-b+n*b*i-b+f+b+i)%100;
            e -= (f-a+m*l+g+d*h-k+h+j+f)%100;
         }
         else
         {
            while( ++WHILEcnt[84]%5 )
            {
               do
               {
                  l += (i+d*m+l+k-m-k-a+g-j+k)%100;
                  n += (j-j*c+h+n-a-g)%100;
                  j += (i+h-e-n+a*i-i+a-c)%100;
                  k  = (l-f)%100;
                  j  = (b+j)%100;
               } while( ++DOcnt[84]%5 );
               if( ++IFcnt[63]%10 )
               {
                  g += (d-h+n-n-h-e-e-l-i)%100;
                  j += (m+k-h*l+l*h*n+d-i-a)%100;
                  m -= (c+a+m+g*a+e-c-m*g-l-c*h*k+k)%100;
                  g -= (k+e-k*n-n)%100;
               }
               m += (a+a+g+n+c+f-e-d+d)%100;
               for( ; ++FORcnt[125]%5 ; )
               {
                  e += (n-h+h-l+g*i)%100;
                  b += (f*l+g*d*h+c+i*n-b+n+g+h+i-a)%100;
                  l -= (h-l*m-i+m+i*i*h-m*n+m)%100;
                  e -= (k-d+j+m+m)%100;
                  b -= (d-k+b*d-k)%100;
                  n  = (g-m+l+k)%100;
               }
               
               switch( ++SWcnt[42]%3 )
               {

               case 1:
               {
                  f += (m+d+d*f-b)%100;
                  b -= (l+f+c-b+n-g-h)%100;
                  k -= (e*j)%100;
                  l += (f+d-h-d+i-f*l-b*e+g*e+m)%100;
                  d -= (a+c-b+d*f-j-i*g*g-b-e-g)%100;
               }
               break;

               case 2:
               {
                  e += (d+m+e+c*c)%100;
                  k -= (i-d-i+a*n-b+d-f+a-e*k*j+h+l)%100;
                  b += (m*k-g-a)%100;
               }
               break;

               default:
               {
                  f += (c+f-n*n+f)%100;
                  d += (l-d*g+d+h-g*a+j-a*j+i-n-c)%100;
                  h -= (j-h)%100;
                  a -= (k+m*k)%100;
                  m  = (b-c-n+e*h-c*c-i)%100;
               }
               }

            }
            if( ++IFEcnt[84]%2 )
            {
               for( ; ++FORcnt[127]%5 ; )
               {
                  b += (i-k-a*m-c+m-j+h)%100;
                  i -= (b-i-l+e-c*h*a-g+d-l-n-i)%100;
                  n -= (m-h*l+l+e-h+n-b)%100;
                  i -= (d-j*h-l+b+e+i-e-h*b-j+n-n-g)%100;
               }
               c += (k-c+c-h)%100;
               n += (l-f-c*h+n-g)%100;
               e += (n+m+b)%100;
               b += (l*b-a+m+l+g-j-n+f-n)%100;
            }
            else
            {
               while( ++WHILEcnt[85]%5 )
               {
                  m += (b+b+c)%100;
                  f += (i*j*g+i)%100;
                  f -= (d*g)%100;
                  c  = (i+a+e-d-f+c*h-d+k-m-c*a-m-e)%100;
                  h  = (f+a-m-c-f)%100;
                  n += (a-a+l*d+k)%100;
               }
               do
               {
                  d += (c+g+g-c-i*h-h-f+d-c-k+e-f)%100;
                  c += (i-c*k+a*e-e+n+l)%100;
                  k -= (k-a*m-n+g*j-d)%100;
                  a -= (b+k-m-k)%100;
                  f += (b+k*i)%100;
               } while( ++DOcnt[85]%5 );
               for( ; ++FORcnt[126]%5 ; )
               {
                  k += (a-m-g+d+k+h*n)%100;
               }
               if( ++IFcnt[64]%10 )
               {
                  i -= (e*f+l*n-h)%100;
                  b -= (b*c-l-c-b+k+d)%100;
               }
            }
            k  = (i+a*d+m-k-g*f+b+i+g*b-b*i-n)%100;
            h -= (i+n-e+h+b-f-g-m-n-m*f)%100;
            a -= (c+n*c-e+d+d-j*b-m)%100;
            d += (i-f-n-n+c+c)%100;
         }
         h  = (j+m*b-i)%100;
         c += (a*l+e-a+h+m+e-i-i)%100;
         k  = (a*b-n+i*e-d*b+d*l+f*n+n*f)%100;
      }
      i -= (l+h*f*n-n*c-c+f-e+k-k*n+f)%100;
      f -= (l+a+k)%100;
      e  = (g-h)%100;
      m -= (c*e+c+c-a*e*e-c*g-c-f-m*a-i)%100;
   }
   a += (h+c+j-m-g*i-l+l-j+n)%100;
   f += (e*n+m*m)%100;
   i += (h+f+l-k-c*m-k*a)%100;
   l += (l*f*m+e*d-c+c)%100;
   e -= (l-f+e)%100;
   j -= (a-f-b-e+m+a+i)%100;
   g += (h+m-h+a-a+i*k+b+b-l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F39(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[87]%2 )
   {
      f += (c-f*h-f*e-n)%100;
   }
   else
   {
      while( ++WHILEcnt[87]%5 )
      {
         do
         {
            i -= (l-c+a+m-l+b+k+m)%100;
            for( ; ++FORcnt[130]%5 ; )
            {
               
               switch( ++SWcnt[43]%4 )
               {

               case 1:
               {
                  e -= (a+d*e*f-m-g+g-h+j-i-m-h*f)%100;
                  f -= (l*k-j-f-l)%100;
                  d -= (i*i-i+d)%100;
                  j -= (m+h+f*k*k-k+j+b+d+j*h-e*h+f)%100;
                  h += (c*i-i-n+l-i*a+c-c+f+e)%100;
                  d += (g-e-j+n*n+c+f*f*g+m-f+l-g+c)%100;
               }
               break;

               case 2:
               {
                  f -= (f-f-k-a)%100;
                  l -= (e+d*a+k-l-l+k+f*d+h-h)%100;
                  g += (k*b+n*i+j+j-d+b-g-e)%100;
                  e += (d-c+c-l+c-i*e)%100;
                  n += (f+g+e+b-f-e+a)%100;
               }
               break;

               case 3:
               {
                  g += (j+d+f-j+m-b+j+h-j-j)%100;
                  e += (d-b)%100;
                  l += (c+j-i*d-a-b+f)%100;
                  l -= (i+j+k+i*h-d-k*d+e+d)%100;
                  g -= (f+j+a)%100;
               }
               break;

               default:
               {
                  i -= (k+b-n-k-i*k-l-c-m-c+j*n+e)%100;
                  l += (g-n-l-d-b+f-f-l-a-i-e)%100;
                  j -= (h+n*j*b-a-i-l-j-m-k)%100;
                  f -= (g-h)%100;
               }
               }

               if( ++IFcnt[65]%10 )
               {
                  n -= (k-e+b*f+n*n)%100;
                  l -= (m+e*d+c+j-b+d*d+j-g*i)%100;
                  n -= (h*b-k-d+b+d+h-n)%100;
                  d += (a+j)%100;
                  n -= (e+a*d-b+k-h-d)%100;
                  e += (j+n-g*i-c-f+i+g+k-j+c+n*n)%100;
               }
               if( ++IFEcnt[86]%2 )
               {
                  i -= (b+f)%100;
                  f -= (i+b+f-i+h*i*f-b)%100;
                  f += (l+h+h-j-c+d+m*m-n+l)%100;
               }
               else
               {
                  c += (k*i-j*n-c*d-l)%100;
                  j -= (l-d-e-g+m*a-c*n+i-a*b*a-f)%100;
                  l -= (l-f)%100;
                  b += (f*h-i+m-e-e)%100;
                  i -= (m+m-a)%100;
               }
               while( ++WHILEcnt[86]%5 )
               {
                  c -= (b-b-e-k-a+a*i+n-m-l*l)%100;
                  b += (e+j)%100;
                  d -= (i+c+i+c+e+n+f-e)%100;
                  k -= (g+c)%100;
                  l -= (e-j-c-d-f-m+f+i-c+f-j-d+j+k)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[131]%5 ; )
               {
                  b -= (k-c-a-n)%100;
                  n += (n-i*l-d-n+a)%100;
                  f += (e*k-b*l-g*a-d-n-g)%100;
                  f += (k-n-j-b-h+g+m*k+h+n-h-i+n*i)%100;
                  k += (k-i)%100;
                  d += (h*k+g+n-l*f)%100;
               }
               for( ; ++FORcnt[132]%5 ; )
               {
                  c -= (g-m-f*k+m+c)%100;
                  f += (j-l+g-h+c+k-a-g-c)%100;
                  g += (j-e-n*j+k-f+j)%100;
                  i -= (j+j*f-h+a-n-f*c*m+m-l)%100;
                  b -= (l+m)%100;
               }
               b -= (h-a+a-n+g*i-c+i*f)%100;
               j += (k-i-n*g-h*l+b+l+e-g)%100;
            } while( ++DOcnt[87]%5 );
            e += (m-j)%100;
            i -= (b*g-a*e+c-m+i-l-m-g+f)%100;
         } while( ++DOcnt[86]%5 );
         k -= (a-j)%100;
         g += (e+n-h-i+k+i-l)%100;
      }
      f -= (j-c+b-l+k-b+d*c-i-a-m*e-b)%100;
      c += (l+a-c-a+n)%100;
      i -= (m+d)%100;
      f += (e*b+a-m*c+i+e-g-c*l*i-i+m)%100;
   }
   d -= (c+n-m-n-i+h+h+m-h*e+g+j-f+h)%100;
   i += (a*k+a+c*k*i*n-c-b)%100;
   a -= (f+g-i+d+n-f+d+a)%100;
   e += (d+g*a+k-j*h-h-g*h+i)%100;
   d += (m*f)%100;
   l -= (i-n+j+h-j+m-b)%100;
   l += (c-a+a+n-c-c-h+e+g-m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<96; I++) IFcnt[I]   =0;
   for(I=0; I<128; I++) IFEcnt[I]  =0;
   for(I=0; I<64; I++) SWcnt[I]   =0;
   for(I=0; I<128; I++) WHILEcnt[I]=0;
   for(I=0; I<128; I++) DOcnt[I]   =0;
   for(I=0; I<192; I++) FORcnt[I]  =0;
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

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      if( ++IFEcnt[88]%2 )
      {
         n -= (h-e-g*d*g-b-j+f-m+f)%100;
         f -= (k+a+j+b-d-b)%100;
         e += (h-f)%100;
         k -= (c+c)%100;
         b -= (i+l*c*f-i*d-a*i-b-n+j-j)%100;
      }
      else
      {
         while( ++WHILEcnt[88]%5 )
         {
            do
            {
               if( ++IFcnt[66]%10 )
               {
                  e += (m+c+c*n-b-d+h-h)%100;
                  h -= (n+b*c+j+g-j-e+h-g)%100;
                  i -= (j+a-c+m-n-f-i+b)%100;
                  m += (m+j)%100;
                  f += (f+l-k-d+a+n-l)%100;
                  b -= (b-m-g+l+i-c)%100;
               }
               j  = (e+b)%100;
               j -= (f-k+m+k+a+d)%100;
               a += (f-m)%100;
            } while( ++DOcnt[88]%5 );
            e -= (i*h*j*b*e+c+a)%100;
            n += (a*h+b-n*c-g-b*m-b-k+c)%100;
            i += (g*l+b-b-i+m*b*h)%100;
            m += (i-l+e)%100;
         }
         i -= (f-g)%100;
      }
      j -= (c*h+h-h+a-m-j+g-h+g)%100;
      h -= (a*e+g+k-b-m+m-h*h-g*e*a)%100;
      m  = (h-n*b+m-i+h+n*e*l*i-a)%100;
      b -= (a*m*j-k*e-c+f*l-k*k)%100;
      i += (n-c-d)%100;
      c -= (e-i)%100;
      b += (i-n+g*l+g+a*e+g-b-i-a-k-b-b)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<67; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 67 << "   Dynamic = " << sum ;
   for(I=sum=0; I<89; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 89 << "   Dynamic = " << sum ;
   for(I=sum=0; I<44; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 44 << "   Dynamic = " << sum ;
   for(I=sum=0; I<89; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 89 << "   Dynamic = " << sum ;
   for(I=sum=0; I<89; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 89 << "   Dynamic = " << sum ;
   for(I=sum=0; I<133; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 133 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}