#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[62],IFEcnt[83],SWcnt[41],WHILEcnt[83],DOcnt[83],FORcnt[124];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         c -= (c+g)%100;
         e  = (h-l-i-l+i-m+d+h+g+j*d+h+c)%100;
         h -= (e*l-m-e-h+e+h-k-g+h-f*i)%100;
         h += (j-k-l+f+c*c)%100;
         d -= (b-d-g+f*i+l+m+k-e+d+g-c)%100;
         d += (h*b*g-j-g+g-n)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  k -= (j+l+g)%100;
                  g -= (m+j)%100;
                  m -= (d+m-k+l+m+b-e*g+j)%100;
               }
               a += (g*b+b+c+d-g-f*k)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  b += (k+g*e-h*c*i-h+m*g-f)%100;
                  a += (h-f-h)%100;
                  d += (e+j+e-f-f-b-j-e-g)%100;
                  m += (j-k-i*h+h*a-a)%100;
                  k  = (d*d+h-b+e+k-i-d+m+n*e-e+c)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  b  = (l-b-e+l-n*i*h-d-c+n*d+i)%100;
                  j += (d-e+h+i-m*a+g-a*b*f-k*f)%100;
                  h -= (c*e+a-h-f+n*e+i+n-d+e-l-k)%100;
                  j -= (e*b-i-f-b*n*b-c+e-n+i-d)%100;
               }
               break;

               case 2:
               {
                  m -= (k*j)%100;
                  g += (h+e*h+n-j-d*h-l-f+c-l-a)%100;
                  l += (b-b+e-e-l+a+i-d+l*i+b-m-d-i)%100;
                  b -= (e+n-c)%100;
                  e += (m+i+e-l+e+b*l-k+f+n-h)%100;
                  c -= (h-m*h*a-i-d-h*m)%100;
               }
               break;

               default:
               {
                  j -= (i*b*h+d*m-j+h-j+l)%100;
                  d -= (i-g-g-g+i-e-i-i+i+c*h)%100;
                  i -= (a+k-c-l)%100;
                  e  = (g-k+m-i*k*b-a+g+n+e*b-a-h)%100;
                  e += (j-d+l-f+m+d*i*a+n*c-n-f)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  a -= (i-a-h)%100;
                  c += (c+k+g*d-k)%100;
               }
               else
               {
                  b -= (a*n*a-f*i+n+i+a)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  l -= (j+n+a+f-b-a+i+l*e*c)%100;
                  a -= (m-m)%100;
                  d -= (d+f-i*h-d-c)%100;
                  a -= (a*n+i+n-b-f+m+k+c-j-e+b)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  d -= (a*h)%100;
                  k -= (i-e)%100;
                  a -= (g+k+l+g+m+d-j-h*i*b+b-f)%100;
                  k -= (d-e+j+h-a-g+d-h-k*a*j)%100;
                  m  = (c+d+m-h-f)%100;
                  d -= (a-d-l*f-b+m-d)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  j -= (a+m)%100;
                  h += (b+a-b+i*j+m)%100;
                  d += (j+i-a+d)%100;
                  i -= (b-b+d+e-k-k+k+j*j-i*j-e-h+a)%100;
                  e -= (b+c-k)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  e -= (k-a-h+e-b-l)%100;
                  f -= (l+l+l-d*l-l+k)%100;
                  g -= (h-l-n+i)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  e -= (f*m-i-h-i+l+c-l+b)%100;
                  g += (f+f+b-b-b+b*b+d*j+d-h+k)%100;
                  h -= (c+i-c-g+e+a+e-e+j*j+i-b*i*c)%100;
                  h  = (k*a-e-e+k-b+a+i-i+e-h)%100;
               }
               else
               {
                  f += (l-j+n-h+j+e+m-b)%100;
                  i -= (f+e)%100;
                  b += (n-h-j*m-l+c+e)%100;
                  l -= (e*f*g+e+d+a+k-a+a+m-i-i-c)%100;
                  i += (j-j*m+l+j+h-d*f)%100;
               }
            }
            a += (e+b+j+a+k+f-c+d+l)%100;
            j -= (j*c*a*a-h*f-e+i+l+g-j+l-d)%100;
            d  = (g*n)%100;
            n -= (b*h*d+h*b-k-i*h)%100;
         }
         l -= (k+k+d-l-i+i)%100;
         i -= (m-a-f-g-n*m+g+n-j*a)%100;
         m -= (j*f-g*b*a-j-a+l+j+k+f-d)%100;
      }
      d -= (j+e-h+i)%100;
      f += (m+n+a+k-i-e-e+m-e+d)%100;
      i -= (i-i+a-n-d-k*n+d-c*b)%100;
      l -= (c+l)%100;
   }
   d -= (g+b+d-h+c-l+j+k-d+e)%100;
   f += (a+e)%100;
   l -= (b-m-a-f-g+b)%100;
   e -= (d+m*b*k+h+n+a+b+k*j+h*e+d-e)%100;
   k -= (f+n*c-c-b*l)%100;
   m += (g-f-g-j-l-c*n+h-k)%100;
   m += (m-l)%100;
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
         e += (f*g+i+m-d-a*h-k-a-i-n)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%3 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  m -= (n-h)%100;
                  b -= (k+e+e*c*j-d-f+g*a)%100;
                  j -= (m+n+c+l+i-c-h-i-g*a)%100;
                  l -= (l-h)%100;
                  b -= (i+e+a)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  a += (h*j-b-b-m-e*g-d+n*n-c)%100;
                  l -= (d-k*c-k+c*c+d*c-l-a+n)%100;
                  k -= (i+g+e*k*n+f*b-a-n-a-i+e-g-a)%100;
                  b += (l-g-h+n+n)%100;
                  n += (h-m+b+g-a)%100;
               }
               else
               {
                  l -= (b-f-a*a-n)%100;
                  j  = (k+a*c)%100;
                  b += (n-n+h-k*g-g*a-e-c*k+c)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  b += (b-l+k*a-i-i)%100;
                  i -= (m-j)%100;
                  b += (e+f)%100;
                  d -= (c+m)%100;
               }
               do
               {
                  j += (c-g-h-i)%100;
                  d -= (a-a*f*l*m+i+k)%100;
                  f -= (k+c-e)%100;
                  h -= (h+g)%100;
                  n += (b+m*e*b-e+k+a-e*d+n+a+k)%100;
                  l += (j+n)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  i -= (j-g)%100;
                  d  = (e+m*l-f+h)%100;
                  l -= (d*c*h+f-m+h+d+l+a)%100;
                  k += (e+c*m-l-i-b-g+h)%100;
                  f -= (h+m+c-k-l*d+k-m+j+k-a)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  h += (c+j*d+a-e-m+m*h+k+h-j-j-j*g)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  i += (m-b+n)%100;
                  h -= (j-f*b-i*m-e-i-a+h-c-h)%100;
                  e -= (e+e+k)%100;
                  m += (m+c)%100;
               }
               else
               {
                  g += (c-j)%100;
                  m  = (g-a+b+j-i)%100;
                  f += (f+f)%100;
                  h += (b-e+c*m-j+e+c*c-n+d+f-b*k)%100;
                  a -= (e+d*g*e*e+c-c+c*m*f-a+a+j-j)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  m -= (f*h+d-c-l)%100;
                  c += (m*i*j*e-c*l*g+j-a+a-e-i*e*a)%100;
                  b += (c+e-a+i)%100;
                  m += (c+c-a+i+b)%100;
                  j -= (d-g*h*j+l-d*m-i+c-g+b)%100;
                  a -= (j+a+k-c-g-l+a+n)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  m -= (c-d)%100;
                  j  = (n+d+d+c*h*c-c-l-j-j)%100;
                  g -= (m*d-g+c+d-m)%100;
               } while( ++DOcnt[4]%5 );
               f  = (i+c-j*g-c)%100;
               j -= (c-f-a-i)%100;
               l -= (m*k*f+m-m+l-h+b*f-n-e)%100;
               h += (k+m-f+i*c*i-n-f+b*f+b-e*a)%100;
            }
            }

            i += (f*h+m-d*d-b-h-l-g-j-h)%100;
            m -= (i-m+e+f+e-d-l-h-e+e+g+f)%100;
            n -= (j+a+b+m-k-h+e+i+l*k*k-j*m+n)%100;
         }
         e -= (i+e+f+b*e-e-n-h)%100;
         g += (l+d-i-j)%100;
         j += (h+d)%100;
      } while( ++DOcnt[2]%5 );
      g += (l+i)%100;
      d -= (m+a-a*a+c*d-m-c-c+e-k)%100;
      a += (h+c-b+i-d+g-k+g*c-k-k*g)%100;
      j -= (b-c+f+g*c+j+h-l-d+f+j)%100;
   }
   k += (e+h)%100;
   n += (k+i+i+a+c*k+i)%100;
   j -= (j+h-h+b-j*j-m-h-j+e-l+i+h)%100;
   d += (g-m)%100;
   a -= (c-e-e+n)%100;
   b += (a*n)%100;
   m  = (f+a*j+j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[5]%10 )
   {
      k += (c-l*d)%100;
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
                  f += (l+e)%100;
                  l += (m+k-n+h+n-k*i+h*k)%100;
                  m += (d+l+g*l)%100;
                  l += (h*e)%100;
                  a += (a+b*k+c-n+g+j*c)%100;
                  l -= (e-c)%100;
               }
               else
               {
                  d += (l+n*k-a-g-b-i+i*a+c-j*i)%100;
                  c += (h-i-l*i+c)%100;
                  d -= (m-m-i+d*e+b-c+j)%100;
                  e += (k+g+a-a*j)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  j  = (e-e)%100;
                  k -= (m-b+j-j+d+i+d*l)%100;
                  a -= (d*g-i*g)%100;
                  m -= (m+k+a*e)%100;
                  i += (n+b+j+f-g)%100;
               }
               do
               {
                  g += (f+g-l-b+n)%100;
               } while( ++DOcnt[6]%5 );
               g -= (l*b+m-n-j-d*j)%100;
               for( ; ++FORcnt[9]%5 ; )
               {
                  i += (b-c-m*a-j-f+k+f-b-k+c)%100;
                  e -= (g+k*c-d)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  j -= (d-h+e-g*c+k+n-c-k-a-h)%100;
                  k += (e-j-h-b-h-h+e+e+a-n+h)%100;
                  k  = (b-g+m-b+b-l+c+e-j*c)%100;
                  m  = (j+n)%100;
                  g  = (a+h*k+a*c*a-m)%100;
               }
               do
               {
                  f  = (c+n)%100;
                  e -= (k-i-n-a+e-m-d)%100;
                  j += (h-a+j-d+i)%100;
                  k -= (a*g*j-k)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  c += (m-g+j-k+k+b-a-f-g-m-b+i)%100;
                  l  = (e+n)%100;
                  h += (i-e-i+e-a+e+a-f-d)%100;
                  h += (b-c+h-f+g+h)%100;
                  b += (c-f+j+k-g-i-j-b-l-f-f-k-l)%100;
                  d += (c-c)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  b  = (h*h-d+k+l-e+g+d+k*l-h)%100;
                  l  = (l-m)%100;
                  a += (c*m+m+b*d+m-g+b+b*l+e*a)%100;
                  g -= (f-e*b+b*m-f*g-d)%100;
                  a -= (e+a*i+h*d-m-e*f+l)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  j  = (a-b*a+d*a*f+i-e*c+i+e+l-i*l)%100;
                  c -= (n+h-e-l+k-g-j+m-c*e*d-i*g)%100;
                  a -= (k+b-k)%100;
               }
            }
            
            switch( ++SWcnt[3]%4 )
            {

            case 1:
            {
               if( ++IFcnt[4]%10 )
               {
                  m -= (f+g*e+g-m-n)%100;
                  n -= (a+d*b*b+c-e+g+a*f+d-g*k*i)%100;
                  i  = (a+a-j+l*d-f+n+a)%100;
                  j -= (l*i-g+b+h-b-f-f+l*b-g+g-m-m)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  i -= (f-b-i)%100;
                  i += (a-g*j+b-g*a*i)%100;
                  f -= (l*k+a+l)%100;
                  e  = (l*m*l*k-j*a-n*c+f*g-b+c)%100;
                  g += (h-m-h*h*g-e+i+e-f*j+h-f)%100;
               }
               else
               {
                  c -= (m-f-n-k+j*j-a+d*k-b+e+m+n)%100;
                  m  = (b-k-i*k+b-n-g+n+a+c-b+d)%100;
                  h += (b*i-a*e-l+a-n+k-g-e)%100;
                  i -= (m-a+f-i+e-m-a-l)%100;
                  a -= (b+f+i*f+i)%100;
                  k -= (b+f+n*l*k-j+f+e-j+j-k*d+b)%100;
               }
               a += (f*h-e*m+b-b-i)%100;
               a += (h-c+c-c-l-e-f+n+g-k+k)%100;
               n  = (g-m+k)%100;
            }
            break;

            case 2:
            {
               g += (a*l-m)%100;
               l -= (f+e-e+l+m-c-i+c)%100;
               e  = (e+n)%100;
            }
            break;

            case 3:
            {
               m += (c-h+d+j)%100;
               l += (b+e+n+l-k+g+c*b+m*j)%100;
               i += (c*g*b)%100;
               l -= (c-h)%100;
               m  = (c+e+j-b-c-h)%100;
            }
            break;

            default:
            {
               k -= (m-n*i*h*d)%100;
               a -= (k+m-i*f+c-f)%100;
               i  = (m+k-b-g-k*e+d+b+l+g+j*c+d)%100;
               i += (e-e*l+g)%100;
            }
            }

            m -= (a*l-m-c+l)%100;
            g -= (n+l)%100;
            i += (n+j*e+b+j+n-j*j-c+n-a*b)%100;
            m += (f*n*m-a-j+g)%100;
         }
         break;

         case 2:
         {
            f += (j-m*n-m-i-b+f)%100;
            h  = (b-l+d*c+g+b)%100;
            e -= (j-h*d-m*i)%100;
            g -= (a*b*l+f+g*g)%100;
            b -= (k-l*g+d-d+e+f+d-d+a-c-a+g-j)%100;
            h += (g+f-b+l*j-a*b-j)%100;
         }
         break;

         case 3:
         {
            k += (c+n-c-b+c*j*g-f+j+k)%100;
            h -= (n+d-l)%100;
            c -= (g+j-b*c-f-n*m)%100;
            e += (e+n+b)%100;
            h += (g-k+d*e+l*c+c*e-h-h*f-c-e)%100;
         }
         break;

         default:
         {
            d -= (c+g-a+j*c-g*j+m*a-g-a+h+c)%100;
            c -= (i+i)%100;
            c  = (n-b+i+l+n-m*c-l+c)%100;
            e -= (i-b)%100;
            h -= (b+m+j+e+m-c-c+g+l-j+g-l)%100;
         }
         }

         n += (d+d*i+a+h+j+a+e-k+i)%100;
         e -= (j-e-m*d+l+h+g-f+k+h-d)%100;
         k += (m-n*c+j*a+f*c+a-f+a+n)%100;
      }
      k += (n+c*a*b+h-b-m+h+e*m*m+n)%100;
      a += (j-n+g*e+m+n)%100;
      a -= (i-g+k+m+j-n+k-i+d+b+l)%100;
   }
   e -= (j+h-f)%100;
   d -= (m*b-m+k-i+m-g-g-j-k+f)%100;
   e  = (k+k)%100;
   b += (h*k+d)%100;
   m += (i+k-n+a-j*i+n-d+a*l*a*e)%100;
   b -= (b+j+i-c*k+f+c+k*l-c+j*c-a)%100;
   j -= (c+e-b+i*h*g+k-l-h-k+j)%100;
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
                  j -= (g-j+h-c*d*n*b)%100;
                  d += (n-c+m+j*l)%100;
                  h -= (d+a*f-e*e-j*m)%100;
                  l -= (d*h+h)%100;
               }
               else
               {
                  n -= (g-g+a*a)%100;
                  e -= (a+c-j+l*h+c-m-b+h-a*e+m*a)%100;
                  e += (d*m+e-f)%100;
                  d -= (m+c-l)%100;
                  f += (c+a-f-c+b+m+i*h*b-m)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  j += (l*a-i+l-b+a)%100;
                  j -= (n*l)%100;
                  n -= (k*e-d-g+c*a)%100;
                  k += (e+f+i-l-l*d+n+c+n-i-h+b+b)%100;
                  c -= (d+e-n)%100;
                  b -= (l+j*g-l+d-e-c-f-a+d+k*l+e-j)%100;
               }
               do
               {
                  h -= (c+d-c-k-a+j-a+j-h)%100;
                  f += (d*g)%100;
                  i += (n-i)%100;
                  g += (h*d)%100;
                  k -= (c*i-i-n-g-b-b-l)%100;
               } while( ++DOcnt[8]%5 );
            }
            if( ++IFcnt[6]%10 )
            {
               g -= (m*a*e+b-h)%100;
            }
            i  = (i-a+n-g+m-g+d)%100;
            m  = (f*n-n+k+m+l*c-d)%100;
            g -= (l-f+m-b+l-k)%100;
         }
         e += (c+f)%100;
         m += (l*b+n*d+n*h*m*f+m-h*e-g-h)%100;
         b -= (f+e-a+f*n-a)%100;
         d -= (j+l-f-j-i)%100;
         l += (f-d*m*f-c+n+e+m*c+h)%100;
      } while( ++DOcnt[7]%5 );
      c -= (l+l)%100;
      b += (b+g-g+j+b+e-j+c+h*b*g-l)%100;
      b += (c-c*i)%100;
   }
   b -= (k+g-k-c)%100;
   n  = (f-j+g-g+f*b-k*j+m+j+h-k-e)%100;
   a += (d+h*d*a)%100;
   b += (f-c+g*k-k+c*b-d+b*i)%100;
   n -= (m*n+n*e*d*n-m+a+f-n-j)%100;
   h -= (h*a+c+l+m*m-c-e+k+d-h-m)%100;
   a -= (a-a*i*j-n*f+n+j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[16]%5 ; )
   {
      
      switch( ++SWcnt[4]%4 )
      {

      case 1:
      {
         if( ++IFEcnt[10]%2 )
         {
            g -= (i+e+j-l+i-n*n+b+i*b-a)%100;
            n -= (k+k)%100;
            d -= (m-h*n*k+h-j+f-g+i)%100;
            n -= (d*i-e)%100;
            d += (c+n+l+m+m*h+g-h)%100;
            c -= (f*h-k)%100;
         }
         else
         {
            while( ++WHILEcnt[10]%5 )
            {
               do
               {
                  d += (h+j*k+f-i)%100;
                  a -= (g-a*n-a-h-h+l-m-b*k+n*b+g)%100;
                  l += (f+n+b*b*e-f+b+d-n+b-c+h-c)%100;
                  m += (h+b+n*n)%100;
                  c -= (b*l+m-k+b+f*e-l+h-g-k+l+a-n)%100;
               } while( ++DOcnt[9]%5 );
               for( ; ++FORcnt[13]%5 ; )
               {
                  g += (d+j-a+d-b-e+b-b+j*e-d+d+n)%100;
                  l -= (l+e+a+e-c-l-a-m-e)%100;
                  d += (a-e+n+h-m-n-j+k+d-k-e+j-h-a)%100;
               }
               if( ++IFcnt[7]%10 )
               {
                  j += (e*g+h-g-d+l+f-a-l-l*e-m+e*i)%100;
                  n += (f-a*e)%100;
                  m -= (j+h+b+a*n+i-f)%100;
                  j -= (n-a+b*i-n*e*l*b*d)%100;
                  k -= (h-k-d)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  m -= (b-k)%100;
                  n -= (a+i)%100;
                  g -= (n-a*k*g)%100;
                  e += (h+d*f*g+b-c*b-j+n*h)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  g -= (b*l-k+l+d+i*k+j+f)%100;
                  g += (k+j+c+i+i+l)%100;
                  e -= (n-k-m-j-a-k+m+m*n*d+f)%100;
                  h -= (e+i)%100;
                  n += (j+h+m-m-e+c-f+l-a-a+i-b*g-g)%100;
               }
               else
               {
                  b  = (h*i+j)%100;
                  h -= (k+j+j)%100;
                  l  = (e-j+b+l-f+i-k+j)%100;
                  j += (a-c-f+e+g+f)%100;
                  k += (g+c-c-b+g-j+g*c+e-d-l-b-h)%100;
                  a += (j-a-d*h-i+c)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  n -= (i-k*b)%100;
                  c -= (a+k+l-b*e-b-h+f-f-e+j*b-n-i)%100;
                  e += (e-b+n+h-i+g-f+h+f)%100;
                  h += (e+c+j+h-k+i-f*h+e-k*m)%100;
                  i -= (m-d+e-i+a+h-h*j-f+a)%100;
               }
            }
            do
            {
               n -= (d+a)%100;
               for( ; ++FORcnt[15]%5 ; )
               {
                  e -= (h-m-n)%100;
                  a -= (j*c)%100;
                  e += (f+k+k+b+j+f-g)%100;
                  f += (g-m)%100;
                  n  = (m*c*e-e+g-g-d+k+h+a+l)%100;
                  i += (f+c-n+f*c-h)%100;
               }
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  c += (h+n+m+m*g*j-f+g-m-h-e)%100;
                  i  = (n*c-i-b-i*l*g+c)%100;
                  f += (g-k+h+b+k+f-h+d+m*h)%100;
                  m += (d-j-d+e+d+n-c-n+g*m*e-k+k)%100;
                  i += (f*f-l+g-h*c*m+l+f-j+g-h)%100;
               }
               break;

               case 2:
               {
                  g += (h*j)%100;
                  c -= (d+a+m*k-d-d-d)%100;
                  i  = (h+n)%100;
               }
               break;

               default:
               {
                  g -= (h-l+l)%100;
                  i += (j+k+n+c*k-a+d-d)%100;
                  g -= (d-f*g+k+f*l+i-m)%100;
                  j -= (f+n)%100;
                  f += (k*f)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  d += (c+g-f+h)%100;
                  d -= (b-j-b-j-j-k)%100;
                  c += (h+n+j-j*b+h-i)%100;
                  l += (k+h-l-m+e*i+c+f+a+d-k-j-e)%100;
               }
            } while( ++DOcnt[10]%5 );
            i -= (m+i)%100;
            m -= (l+e-c*c*e+n-n+h-a+a-i+n+l*j)%100;
         }
         g += (f-g-d+n-i-f+n*c-d-g*c+l+b-n)%100;
         j -= (d-c)%100;
         l += (i+m-n-g-b-g-h*k+e*g-c)%100;
         k -= (b-k+f*k-c*g*d+f+b+c-d)%100;
      }
      break;

      case 2:
      {
         a  = (k*d*c+e)%100;
         i -= (h+b-f-m)%100;
         i -= (j+j+g+b+n+j*j+b-k+m-b+h+n+f)%100;
         n += (m-j*k-c-i+m)%100;
         a += (j+g)%100;
      }
      break;

      default:
      {
         e += (c+b+j+g-n+g)%100;
      }
      }

      m  = (m-n+k+j-k)%100;
   }
   g -= (j*c-h-l+e-g-m-j-i+e+n-a)%100;
   i += (f-f-e+e-n+b-i-b+k)%100;
   k += (e+k-l-i*l+m)%100;
   m  = (j-e-a+e)%100;
   c += (h+k-e+d)%100;
   g += (j+k-b-i*h*l+g-k*k-k*k*f+g)%100;
   i += (c*g*m+d+g-h+e-b-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F6(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[13]%2 )
   {
      d -= (k-h+k+k*b+h+j+k+e*l+j)%100;
      f += (e+a+a-g+h-f+e+k+j)%100;
      h -= (n-j+k*a)%100;
      k -= (h-e*f+e-c*m-c)%100;
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
                  g += (m-b+e-c+h*l+k-j-j+j)%100;
                  e += (c-b-b-e+m)%100;
                  m -= (k-e*d+n-m)%100;
                  e -= (l-d)%100;
                  h -= (d*m)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  l -= (b-b+n-f+b+i+d+m+e-d-j-f)%100;
                  g  = (h*g+i-c+h*g-f-i+m*i-m-b+m)%100;
                  b  = (f*i+f-i-h+b+e-k+m-m-b+e)%100;
                  d -= (h-j+f-n+l+m+g)%100;
                  g -= (a-i-e*n-n*l-c*n)%100;
               }
               else
               {
                  g -= (j+k)%100;
                  a -= (j-l)%100;
                  i  = (d+e-b)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  j -= (h-d*n+f+l+e-l*e-f-h*j+b)%100;
                  c += (d+k+e-m*f*g-h-l)%100;
                  g += (m-h-b)%100;
                  f -= (m+f-h+l+n)%100;
               }
               do
               {
                  k += (f+a-g+l*d-i)%100;
                  f += (k+f+n+n-a*i+i+b+b-f+e*b)%100;
                  e += (e-h)%100;
                  b += (m*g-c-c+k-j*b-i+n+h)%100;
                  i += (m-i+b*i)%100;
                  b -= (d-l*h+d)%100;
               } while( ++DOcnt[12]%5 );
               if( ++IFcnt[9]%10 )
               {
                  c += (c-n-h-h-b+b)%100;
                  g -= (k+k)%100;
                  k -= (i-d+k-h+m-f+j+c+k*l)%100;
                  d += (j+k*m)%100;
                  f -= (h-g-g*i+j-b+l)%100;
               }
               i += (f-d+i-c+f-b-m+n-f-n+h+g-n+f)%100;
            }
            for( ; ++FORcnt[19]%5 ; )
            {
               
               switch( ++SWcnt[6]%3 )
               {

               case 1:
               {
                  m += (f+l-b-l*m+l+m+j+a+l-k)%100;
                  j += (n-i*b-m+e+g-n)%100;
                  l -= (c+c-i-g-h-j-m+a*i-n-l+h)%100;
                  i  = (j-g-g-b*d-i)%100;
               }
               break;

               case 2:
               {
                  a -= (g+i*d+c*c*i*i*h)%100;
                  k += (k*d-m-c+g-h-m-n*c+h-g-m-e)%100;
                  j += (j+n-h+e*c+h+i+i*b-f*b-i+j*e)%100;
                  i -= (d-m*j*e-i-d-h+j-a*l-l)%100;
                  f += (k-k+c-k*i-e*e*a+g+a+k+a*l-e)%100;
                  g -= (m+f-h)%100;
               }
               break;

               default:
               {
                  h += (n+h)%100;
                  n += (k*b+d+g*e*b+j-a*l+h+a)%100;
                  c -= (i-j+a-n+a*m+c)%100;
                  f += (n-c+d+l*i-f)%100;
                  j += (c*k)%100;
               }
               }

               if( ++IFEcnt[12]%2 )
               {
                  d += (a*g-m)%100;
                  h += (h*m*d-f+b*a*k-e+f-d-i-i*i-b)%100;
                  e += (n+n+b+n+i)%100;
                  a -= (i+j*k*c*h*d*n-m+c-d*b-g-c)%100;
                  d += (i-f-l-l*i-j-i+k+n*i-l)%100;
               }
               else
               {
                  l += (h-d-f*a-l+d+d*n-l+i+k-n-c)%100;
                  i -= (d-d+m-e+h*c+a+g+m*h+d-e-j)%100;
                  a -= (i*i-d+j-e*f)%100;
               }
               l  = (b-m-h+l+i+m)%100;
               f -= (g-c*b+j*l)%100;
               g -= (c-f)%100;
            }
            d  = (g+l+a-k*a-m-j+h*a*g-g+h*b*d)%100;
            j += (i-n)%100;
         } while( ++DOcnt[11]%5 );
         g += (g+k-g-l-j-b-d+n*g-c)%100;
         b += (d-j+d-e+f+h-l*i-l*j-j+n)%100;
         d += (n-c-b-h-f+k-m+d)%100;
         b -= (f+k+k-f-g+i-b+n)%100;
      }
      e += (l-l)%100;
   }
   k -= (e-k-l+h*c+b-e+c+k+d-b-k+h)%100;
   g -= (b*m-a+c-a)%100;
   f -= (g+b+f-d*k+j-b-i*k+b-k)%100;
   a += (a-d+j+e+c-n+f+m+n+a*k-n+a)%100;
   e += (m+g-i-m+e+d+e-e-c+a-a+i)%100;
   f += (a+a)%100;
   d += (j-f-b*g+d)%100;
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
                  k += (m-m+b-j-i-m)%100;
                  m -= (c+e-d-i+c-k-c-b*b+j-g*d-d-b)%100;
                  f += (e+f)%100;
                  h  = (k+j-d)%100;
                  k += (b*c)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  c -= (b-i*g+e-m)%100;
                  i += (j-j+b-h-c-i-g-a+i*g-l-d-b)%100;
                  g -= (i-k*h-a-g-g*m-j*i+b)%100;
                  k += (a*b+b+h*a)%100;
                  b  = (d-h+g+c)%100;
                  d -= (n*f+h*k*m)%100;
               }
               else
               {
                  l += (c+m-a+f-j+m)%100;
                  d += (g*h*j-a*k-b)%100;
                  n += (f-e*f+h)%100;
                  a -= (e*d)%100;
               }
            }
         }
         while( ++WHILEcnt[14]%5 )
         {
            do
            {
               c += (g+m+l+j-m*m-m)%100;
               for( ; ++FORcnt[22]%5 ; )
               {
                  n -= (c-n*m*l-f*m+h-i+l-k+l)%100;
                  c -= (m-h-m*m-l*j-k*i)%100;
                  k += (h+k-l+a*b-l*m-f-h*g+e)%100;
                  n  = (i+e-n-i-n+e+l+h-f-h+i+b-n)%100;
                  d -= (n+m)%100;
               }
               
               switch( ++SWcnt[7]%3 )
               {

               case 1:
               {
                  b += (i+l-h+e+a-h-d-e+e)%100;
                  c += (g*l)%100;
                  a += (m*i+d-l)%100;
                  c -= (e-k*n-l*d*d-n+e-k+k+c-h-h-m)%100;
               }
               break;

               case 2:
               {
                  j -= (n+j*a-c)%100;
                  d -= (m-g+d-a*l*b-e)%100;
                  f  = (m-a+d*i+j*m-b-m*f*g-b)%100;
                  j += (m+i)%100;
                  f += (a+a)%100;
                  k -= (c-b+i+f+g-g)%100;
               }
               break;

               default:
               {
                  l -= (b*m-b)%100;
                  j += (h+j)%100;
                  j += (n-n-l+f-k*b-i*a-f)%100;
                  j -= (a-d*l-i-c+h*m+k-f-n)%100;
                  c -= (f+g+m+m+f-d+l-h-n-c-e+n)%100;
               }
               }

            } while( ++DOcnt[14]%5 );
            if( ++IFcnt[11]%10 )
            {
               if( ++IFEcnt[15]%2 )
               {
                  g  = (c+l-e*c-a-i+a-l-l*j+d)%100;
                  j  = (a*e-f+g+j+h-g+e-k*c-j-f-j-h)%100;
                  k += (i*h+a*g-e+m*n*g-e-i+m*g)%100;
                  j += (l+n+l-f+c-f+a-a+k*e)%100;
                  n  = (f+f+f-f+m-a+g+j*g)%100;
                  c -= (l*d+e+a-n+c-l-f+m+n-f*i)%100;
               }
               else
               {
                  d -= (h-m-b-l-f+j-f+c+a)%100;
                  g += (m-l-i*h+f)%100;
                  e -= (n+f-j*b)%100;
                  h  = (a-c-c+h)%100;
               }
               while( ++WHILEcnt[13]%5 )
               {
                  n += (k-m*l+k*l)%100;
                  d += (i+i*a+i-f-f+e*j+b-i+e)%100;
                  g -= (l+n-d+m)%100;
                  c -= (d-f)%100;
                  h += (g-j-k+e+n-g-l-j*e)%100;
               }
               e += (i*b+m-n-m-b+d-d+a*f-i)%100;
               d -= (f-j*c-g-b+i+e-b-m*j-k+d-j)%100;
               h -= (a+k*a)%100;
            }
            a -= (h+i-m+e*g-a*c-d-h-h-e)%100;
            b += (i+a-i-d-b-m+i+f-c+g-k+m+b)%100;
            a -= (m-g*a-l+d*e+c+f*g+e*e*d-m-l)%100;
         }
         k  = (k*h+m+f+j+a-m-k-a-n*b+f)%100;
         f += (n*l-l)%100;
         n -= (j-m-n+l-a+d-m-j+n-f+h)%100;
      } while( ++DOcnt[13]%5 );
      j -= (e-k-j-d-f+i+c)%100;
      i  = (k-h+j*e+l)%100;
      m -= (m-j-c+e)%100;
      h  = (l-h)%100;
      a += (a*m-k-c+m+c*d)%100;
   }
   n  = (i-c)%100;
   j  = (k+j)%100;
   b -= (b+c-e-k*k-b-d)%100;
   d -= (h-f+h+j-m-i*i)%100;
   a -= (i+a-i+d-k*d*e+f+f+e)%100;
   j -= (d-l-b+d*h*i-l+k+f*h)%100;
   h += (l+d+j+h+d-h+g*j+i+g+a*d)%100;
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
                  a += (l-n*e-d+f+f+k+l*d+f*m+n-f)%100;
                  a += (f+i*j)%100;
                  d -= (j-a*c*e*l+d+h-j+c+b+b)%100;
                  c -= (b*k*h+b*b*c*l-g+k)%100;
               }
               else
               {
                  b -= (f-k+j+b+n*d-i-m-e-j+a*j+c)%100;
                  l  = (d+h+k-g-g+m*a-d+d-l*c)%100;
                  b -= (j+d-k+j+g*l+k-j-j+c)%100;
                  h -= (h+f+k+k-d-k-j+c+d+c)%100;
                  k -= (b+d-l+g*h)%100;
               }
               while( ++WHILEcnt[17]%5 )
               {
                  b -= (e+d)%100;
                  m += (f+e*n*m+l+j*c+f+c*j-m*l*i-a)%100;
                  b += (i-i+m-f+d+a-i+n-i-l)%100;
                  f -= (e+g+i)%100;
                  j += (k+j+m-b*l)%100;
                  i -= (e*a*e-d+m-b-m+d)%100;
               }
               do
               {
                  e -= (n*g)%100;
                  d += (f-d-m+g)%100;
                  k -= (e+h-k-a+n+j-h-k*j+m-c)%100;
                  d += (m+c-a*k-f+d+c-k+h)%100;
                  e -= (k*c+i*c+i)%100;
               } while( ++DOcnt[17]%5 );
            }
            else
            {
               while( ++WHILEcnt[16]%5 )
               {
                  c -= (l-j*m*l+e-c+b+m+d+i+l-g)%100;
                  c  = (b-e-b-g+l+b-m*f*k-l-d-n)%100;
                  b += (i-l+m*g-i+m)%100;
                  b -= (k-b+e+b+m+f+a+i+i+g-l*h-g)%100;
                  b -= (e+b)%100;
               }
               do
               {
                  n  = (e+e-k-l-a-h-m-a+e+i-j)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  g += (g-l-c+h-a-k-k)%100;
                  k  = (j+n+a-k*f+k+m+d-g)%100;
               }
               l -= (m+j+l*g*g-j-k*d+g-m+n)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  c -= (c*i-n-c*n+d+i+f+m+c+d)%100;
                  h += (c+j-d+e-i)%100;
                  b -= (m-k+g-j*k+a+e*m+m-c+k*b)%100;
                  m -= (e+h+j-b+h-m)%100;
                  i  = (a+g-k*g+d+l-m)%100;
               }
               
               switch( ++SWcnt[8]%3 )
               {

               case 1:
               {
                  e  = (g+d*c-c)%100;
                  i -= (b-k-a-d+a+e*i)%100;
                  g += (k*g-b+a*n+a+f)%100;
                  k -= (c*b+k+e+b)%100;
               }
               break;

               case 2:
               {
                  l += (a-n*e+f*l-l+a+l+c+m)%100;
                  f -= (n-m+e+i*b+l+m)%100;
                  k  = (j-k+j+a*i+j-b-l)%100;
                  j += (e-i*d+h+g)%100;
                  k -= (d+g-n-d-k-i-e*j)%100;
                  b -= (a-n+l-f+h-k+c-k+m-b)%100;
               }
               break;

               default:
               {
                  h += (n+d+h-c)%100;
                  c += (b*g*b-j+k-h+b-k-l+m-d+c-d-c)%100;
                  f += (i-l+g+b-i+h)%100;
                  l  = (a-f)%100;
                  i += (n*c-m+e-c+d-c-a-e-e+c+m*k)%100;
               }
               }

            }
            for( ; ++FORcnt[24]%5 ; )
            {
               m  = (g-f)%100;
               a += (f-i)%100;
               n += (f+b-f+e*l)%100;
               c += (e+f+k*c+h+n-m)%100;
               f += (m+i-h*f+c+i-h+h*b)%100;
            }
            f  = (e+f+a*i-f+j*d-m-j*i-a)%100;
            f -= (k-f*g+c*a-b-l-d+i+l+i*k*b+i)%100;
         }
         e += (f+h-i*h)%100;
         e -= (g+a)%100;
         c += (l+m-c+c+n)%100;
         n += (a*f*f+l-m*l)%100;
      }
      a += (b-e-d*n-m+g+k-k*h+e-d+e+i)%100;
      g -= (m-c-i*d*h+m+g-i+n-m-e*e+d*c)%100;
   } while( ++DOcnt[15]%5 );
   b += (l-e-c+j*e-b+b*d+n-e+e)%100;
   c -= (n+i+d+k*h+c-l-c-f)%100;
   g -= (m*c-c*h)%100;
   d -= (g+i-k*g-j-d)%100;
   c += (l+c-h-m+b+a)%100;
   i -= (b+h-b)%100;
   h -= (d+e)%100;
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
            i -= (l+j-f+k-f+f*k-n+a-d-c)%100;
            m  = (c+a-e)%100;
            m -= (g+h+k+e-l*d+a*d*b-d+k*f-k*j)%100;
            f -= (g+i-h+j+g*f+c-h-e)%100;
            k -= (f-k-e-b+c-b-c+h-f+b+c+j-j+l)%100;
         }
         else
         {
            while( ++WHILEcnt[18]%5 )
            {
               do
               {
                  a  = (b-h+h-c)%100;
                  f  = (l-d)%100;
                  j -= (c+h+k+f-n*f+b-j-c+b*l-e)%100;
                  k += (l+h)%100;
                  i += (f-i+g+j-n+c-m-d+h+n-d*g*f+n)%100;
               } while( ++DOcnt[18]%5 );
               j -= (b+i-b-e+d+g)%100;
               for( ; ++FORcnt[27]%5 ; )
               {
                  a -= (m-g-c+g-c+b-c*n+f+g-e-a-m*b)%100;
                  c -= (b+i-a)%100;
                  d -= (h+e*d-b+n*n*n-n+d+c-b-e-j)%100;
                  k -= (k+i*d-e-i*i+d-j+e+j+e*b)%100;
               }
            }
            
            switch( ++SWcnt[9]%3 )
            {

            case 1:
            {
               if( ++IFcnt[13]%10 )
               {
                  c += (m-b-b-c+e*d)%100;
                  a -= (f+f+k-g-i+b-h-j+j-h)%100;
                  m += (l+l*d*i-k-f+c-f*b-e-k+a-a)%100;
                  d += (h+l+c+i)%100;
                  j -= (h-g)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  c += (k*f-e+b)%100;
                  e -= (g+d-g*g+g-d+n-k+g+n-e+e-b-h)%100;
               }
               else
               {
                  d -= (k*a+g-b)%100;
               }
               while( ++WHILEcnt[19]%5 )
               {
                  j += (b-m-l+c-g-c*g-e+g-h)%100;
                  k -= (l-b-i-a+l+n*n+j*n-n+d-f)%100;
                  g += (k-e-g-d+g+n+b*m)%100;
                  e -= (a*g-n)%100;
                  e  = (b-f-j*n-c)%100;
               }
               do
               {
                  k -= (n-e+a+n)%100;
                  i += (c-a+a-l*i+k-h-a)%100;
                  g += (e-j-e-i-b-h)%100;
                  i += (i-n*a-l+l+n+d-i*c-c+i+n)%100;
               } while( ++DOcnt[19]%5 );
               for( ; ++FORcnt[28]%5 ; )
               {
                  c -= (m-m+a+a+j+n+k)%100;
                  f += (f*n-m*a-j-l-l-b+n+f*a-h-b)%100;
                  m -= (a+g*j-l+d+a*e*f-k*g*n*b-d-i)%100;
                  j -= (k-a+l+c+e*j*a+n+k+h-f)%100;
                  b -= (l*a-g-e-n+n+m-n-f-h+b+k)%100;
                  e += (j*m-j*a-g-j+b-k+n-k+m)%100;
               }
               for( ; ++FORcnt[29]%5 ; )
               {
                  l += (f-d+d-c-g-j-e+f-g*h)%100;
                  g += (j+f-n-d+e-e+f-a-m+l+j+c+h)%100;
                  f -= (f+l+k)%100;
                  c -= (m*n*f*l)%100;
                  d += (k+d-l+a)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[19]%2 )
               {
                  j += (e+m-h+j*j-j-b*g*h+k*n*j-a+f)%100;
                  b -= (h+k-c+k-n-k+e+n-h*k)%100;
                  i += (n*n)%100;
                  g += (h-a+b-i*e-d)%100;
               }
               else
               {
                  e += (b-i+c*i-m+d-h+i*g*a-b+b-d-j)%100;
                  a -= (a+a*a+m+j+b-k-d*g*b-c*b+l-l)%100;
                  n -= (i-c)%100;
                  h -= (h*d*m+f-f+a-e*e-n-a*g)%100;
                  g += (j*m*a*h*n-j+l-k+g+a+d-e+i-d)%100;
               }
               while( ++WHILEcnt[20]%5 )
               {
                  d -= (i+j+f+g+h-a*i+d)%100;
                  f -= (l*f-i+d*g)%100;
                  l += (f*e-b*l-l+j-g+c+a)%100;
                  c -= (a-k-i*g-i-l+e-m-l+k)%100;
                  a -= (n+l*f+n-b+j)%100;
                  l  = (n-c-f+i*n-k+a*h-k+j-c-i-c)%100;
               }
               k -= (b-a)%100;
            }
            break;

            default:
            {
               g  = (b+n+d-c+b+h*l+h+b+a+l+h+m)%100;
               h -= (c+h*m+n-b-l*l*l+k+a)%100;
               f += (e*l)%100;
               h += (b-e*h+a+j+e*e-n*m+k-m-b-i)%100;
               m -= (k+b*b-a-b+l-a*l*g*k-h*b)%100;
            }
            }

            k += (n+e+a-c)%100;
            e += (b+g)%100;
            l -= (d+m-g-k-g+g*i+j-i+n+i+b+l)%100;
         }
         f += (c-j-h*i-n*j-b-e+j-i)%100;
         f -= (j-h-f*c*b*l*b-i)%100;
         e -= (i+l+b+d-i)%100;
         d -= (m-b-f+i-i-i+d-e)%100;
         h += (k-f-k+j-h+e+g-m+e+j*f*h+e)%100;
      }
      a  = (k*i-g-e-h-a-l+f+l*c*h)%100;
      h += (j+k-c-d+g*d-i*j)%100;
      h += (l-k-j-a+g+n+n-g-b+f+b+m)%100;
   }
   b += (n+b*e+g-f-e+j-h+k+l+l-l*m)%100;
   d += (f-a*e)%100;
   n -= (k+e)%100;
   n -= (h+i+m*k-c+l*b-k-e+g*g+k-j)%100;
   j += (n+j*m+n-k-h+n*g)%100;
   n -= (l+e*m+b*h+l-l*f-e-n+d*f+i)%100;
   c -= (n+e*b-n*c+f*g*h-h)%100;
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
         d += (e-d-b+d+d)%100;
         for( ; ++FORcnt[33]%5 ; )
         {
            
            switch( ++SWcnt[10]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[21]%2 )
               {
                  f -= (c*b-n-l+f-f+k-c+d)%100;
                  m -= (a+i-k-n-c-i*i-e-k+h-j)%100;
                  n -= (k+f+l+m)%100;
                  h -= (j-f-l-n-l+l-e*f-h-l*d+c*d+c)%100;
               }
               else
               {
                  c += (b-e-c+d)%100;
                  f += (m*i-g-n+f)%100;
                  i -= (i+g-l-l+k+f*f-h-b+c+j-j-c)%100;
                  j -= (g-j*l+n+k-f+a+j-h+l+l)%100;
                  f += (f-f-k)%100;
               }
               while( ++WHILEcnt[21]%5 )
               {
                  n += (h*i-b-a)%100;
                  k  = (h-a-k*b*h*e-n)%100;
                  l -= (g+d*n-e+a-d+n-m*f*e*d+m)%100;
                  e += (i-m+n-h-h-k*a)%100;
                  m -= (m-n-j-e-g+d+i-g-j+g-j+a)%100;
                  n  = (j+j-b+m-n*a-n+n*e+h)%100;
               }
               do
               {
                  k  = (d+d+e-h+h+j-h+i*m-n-h-j)%100;
                  i -= (b*i-d+n)%100;
                  j += (e-d*k)%100;
                  e += (i+a-e*c*j-m)%100;
                  m -= (e-f)%100;
               } while( ++DOcnt[21]%5 );
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[31]%5 ; )
               {
                  g += (f+m*j-c+d+b-m+c-k+g*l)%100;
                  k -= (e+b*c*k-b+k+l+k+f)%100;
               }
            }
            break;

            default:
            {
               if( ++IFcnt[15]%10 )
               {
                  l += (f+m+n+b-l-f*f-h-h+a-i-a+i)%100;
                  l -= (a+a)%100;
                  e -= (b+d*e-c-i)%100;
                  n -= (e-i+h-f*d-h-c+h)%100;
               }
               for( ; ++FORcnt[32]%5 ; )
               {
                  l  = (m+h)%100;
                  d += (e+b)%100;
                  a -= (b+i*d+b-k+j+e+b+g-b+l)%100;
                  e -= (j+b)%100;
                  c -= (m-l+e-m*c*i-h-i+d+e)%100;
                  j -= (a-l+k-n+f*b-f-n-a+f+e)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  b += (e-e+b+c-g-n-g-b+i+g+m)%100;
                  g -= (k*l+i+c-j-d+a+c)%100;
                  h -= (k*f*m-f+m+b+j+b+m-m-j+l)%100;
               }
               else
               {
                  k -= (j+d*l-m-g-a-g+i)%100;
                  i += (e-i+f-k+n+n-g-g-c-l+j)%100;
                  k -= (l+l+f+n-g+j-l)%100;
                  i += (c*f+k)%100;
                  l -= (f+a*h-g+i+k+h*d+i)%100;
               }
               while( ++WHILEcnt[22]%5 )
               {
                  g -= (d-n+a-m-e+k)%100;
                  c -= (l+j+m-f-m*k-f-f-f+e-h-c)%100;
                  f  = (g*j+f*a-l*h-b*d+m-a+d)%100;
                  a += (j-n-n+k+h*f+f+l)%100;
                  m += (k-g)%100;
               }
               n  = (j*b)%100;
            }
            }

            k += (k-m-a*h+j+j+b+m+i)%100;
            k -= (a+m*m+e-f-a+m*c-n+e)%100;
            l -= (j-h)%100;
            d -= (l-k-n+h-k+i+m-i+h+b)%100;
         }
         k += (e+c+e+n+g*k+l)%100;
         m += (m-h)%100;
         j += (d+k+n+d)%100;
         a  = (i+g)%100;
      }
      m -= (b+f+e-i*a*j+k-h-h+g-h+i)%100;
      j += (a+b*g+i-l+c-e-a-e+i)%100;
      f += (j+c-m)%100;
   } while( ++DOcnt[20]%5 );
   g -= (c+a+f+d-k*k+d+k+j)%100;
   m += (b*i+e*b+d-c+n-j*b)%100;
   d += (n-d-b-b-b*e+f)%100;
   e -= (j*l*g)%100;
   c -= (m+e-n+n+n-l*h+b*e*n-n+b)%100;
   c  = (b+l-c+h-m-h*j-e)%100;
   c += (c*i+d*j+h-h-e-e+d-m-h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F11(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      n  = (n-f)%100;
      for( ; ++FORcnt[37]%5 ; )
      {
         
         switch( ++SWcnt[11]%4 )
         {

         case 1:
         {
            if( ++IFcnt[17]%10 )
            {
               if( ++IFEcnt[23]%2 )
               {
                  k -= (i*a+c+a*b+h*n+e-n*g-c)%100;
                  f  = (c+n+k+e*g-j)%100;
                  h  = (f+k-g)%100;
                  c += (a*d)%100;
                  m += (c+k*b)%100;
                  j += (a+b+i-c*f-a-j-j-b-a*n)%100;
               }
               else
               {
                  n  = (n-j*h-a-f-k+m-c*j)%100;
                  n += (i-c-n+c+e+i)%100;
                  h  = (l+m+k+h*i)%100;
                  a -= (c+e-a*d-a-i+b)%100;
               }
               while( ++WHILEcnt[23]%5 )
               {
                  h  = (f-a+f-a+k*b-g)%100;
                  c -= (a-l+l+j+b+d)%100;
                  c -= (m*a*f-e-i*i)%100;
                  b -= (h-d+l+e+h+f-m-c-a+i*f-c-k)%100;
                  n += (k*c-c+l*c-f-f+c+n-g-a*l)%100;
               }
               do
               {
                  b += (f-f*b-j*d-e+k-h)%100;
                  f -= (n+m+i-b*m+d-d)%100;
                  m += (l*a)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  i += (n+b-l)%100;
                  i += (n-h)%100;
                  i -= (d-n-n-e)%100;
                  a += (f+k*c+m*j+n+c)%100;
                  g += (g-b-f-l+b*k-b-k+f-k-j-k+m)%100;
               }
               for( ; ++FORcnt[35]%5 ; )
               {
                  a -= (c+l-d*m+k+g+c+j-h-e+m*n+h+a)%100;
                  b += (b-m-a-m+k*k+b*b-i-h+f)%100;
                  e -= (d+c*f*h+n-h*l-h+k-d+l)%100;
                  k  = (i+a-e+c*j+h)%100;
               }
            }
            if( ++IFEcnt[24]%2 )
            {
               a -= (h-j)%100;
               f -= (b*j)%100;
               a += (b-m*h-e+c-l-f+i)%100;
            }
            else
            {
               while( ++WHILEcnt[24]%5 )
               {
                  g -= (g-d+f+g+a*n*f+a+c+f)%100;
                  a += (b+d-c)%100;
                  k += (j+g+g+d*n-a)%100;
                  g -= (m*j-n-h*l+i*g+n*k+b+d*c)%100;
                  e += (h-k)%100;
               }
               do
               {
                  f -= (d+d+b-h+e+f-m-k+f-c)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[18]%10 )
               {
                  c += (m-j*g)%100;
                  h += (i-l+d+h-c-h-b*c-g*l)%100;
               }
               j -= (g*n+c+g+c-f*c-k-d-h*n*m)%100;
               for( ; ++FORcnt[36]%5 ; )
               {
                  a += (d*e-n+a-f+g*i+b+l+n*d-l-d)%100;
                  b -= (h-l-i)%100;
                  c += (d*b-n+h+k-m+i*m+h+g)%100;
                  a -= (l*h+e+b+m*a-k)%100;
                  d += (k+k*e+i*f*e)%100;
               }
               
               switch( ++SWcnt[12]%3 )
               {

               case 1:
               {
                  a  = (i*h+d*d*k+n-j+f*j+f+d-a*a)%100;
                  b -= (m+b-f+e-m*a)%100;
                  d += (g-j-k-e+h*d+m+n*a-g)%100;
                  n -= (e-k+e*g*k*d+m-l+b+a+m*f)%100;
               }
               break;

               case 2:
               {
                  n -= (c+h-d*h-a-h*d*g+k)%100;
                  b  = (n+n+c+d-i-k+a-h)%100;
                  j -= (g+f+f+e-d+n-g*d+n*g)%100;
                  n += (k-e-c+f+f+i+g-i-i*a+f)%100;
                  e -= (f+a-i+g+i-d-d+b-m-b+n-c)%100;
                  i -= (g-a+b-m-b*n+j+j*j-l*k)%100;
               }
               break;

               default:
               {
                  a -= (h-m+c+b+c+i-h+b*g-e-j-k)%100;
                  m -= (e+k)%100;
                  h  = (c+m+h-n+l-h-g-j*l)%100;
                  f += (g*k)%100;
                  m += (n+f-f+l-f)%100;
               }
               }

            }
            k -= (d*k+d*g-h)%100;
            b -= (l-a+h-f-b-c-l*i)%100;
            k += (b-l-e+f-d-j-g+f)%100;
         }
         break;

         case 2:
         {
            e += (c*f+b*m+f*e-k*c*g*e)%100;
            l += (c-b)%100;
            c -= (m-g*c+m)%100;
            e  = (k-i)%100;
            h -= (m*h-e-c-c-f+d-c-f+g*h+h*j)%100;
         }
         break;

         default:
         {
            h += (b+h+h-c+i+i-f-g*d)%100;
            m -= (k+j*m+l-a+j*e*i+b+f)%100;
            h += (l*e-c+g+j+e+k*b+j-n*b*f)%100;
            f += (g+n-b*i*c*e-e+a-l-e)%100;
         }
         }

         l += (h+c)%100;
         a  = (m-n*a*f-c+b-b*b-b*i+g-e-n)%100;
         b  = (c+g-j+b*g*i-g-i+i)%100;
         l += (l+l-n+l-j-k+b-i*d+i+g*e+f)%100;
         e -= (l-e-m-h+l)%100;
      }
      c += (e+n+e+h+k+c)%100;
      i -= (a+h*e+a+e+j-l+k+j)%100;
   } while( ++DOcnt[22]%5 );
   g -= (g-n*c-m-h)%100;
   e += (f+h-g*k*h+j*l-e-h*k+c)%100;
   l += (h-l*g+c)%100;
   g -= (b*c+i)%100;
   j += (g+k+i+j*i-e-e-n+k+d+a+d+c-e)%100;
   k -= (f+c-g)%100;
   m  = (j+l*g*k-g+b-f+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[26]%2 )
   {
      j += (i+h+f-l+n-d+f-i+m)%100;
      l += (e-l-d+g+l+e-n)%100;
      d  = (h+b*n-g+k*a*b-f+n)%100;
      b += (d*n-c-d)%100;
      a  = (k+l+b+i-d+k-e+a+k)%100;
      f += (d-g+g*j-g-l*n-i+j*m-c+m+l-h)%100;
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
                  a += (a-e-k+j+c)%100;
                  k += (l-g+i-m+l-a-c+d*f-f-c+k)%100;
                  n -= (g+g-b-e+h+c*l*l-g-l*e-d)%100;
                  d += (h*l-e+h+h)%100;
                  f += (d+i+a+f-f+g+c+d)%100;
                  a += (c-c*h*i*d+c-j+f+j)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  e += (a+m)%100;
                  j += (j+f*i+d*g-j-h*f-g)%100;
                  f  = (k+m-l-g-n-g+h-a-m*j*j)%100;
                  e -= (g-k+m+g-k)%100;
                  k -= (h+g-a)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  e -= (n*c-h-e+d)%100;
                  e += (g-l*m+n-a)%100;
                  m += (l+a*j*g*l-b+j+d-g+k+g+b)%100;
                  d += (j+h+a+h-l-j-k+g-h+f-g-l+h-i)%100;
                  m -= (c+l-d+j-g+j+h+j+e-n)%100;
               }
               else
               {
                  m -= (n+a-h-n+c+i+b*f-i+m-m)%100;
                  m -= (h*m*l*e*b-a-f+m)%100;
                  h += (e+c*d+a-j)%100;
               }
               while( ++WHILEcnt[25]%5 )
               {
                  c += (d-n-b+m+l+m)%100;
                  j += (d+m-c-m-d)%100;
                  a += (a-e+g-d-k-j+c-i+k*n+b)%100;
                  m -= (e*l+a-j+a)%100;
               }
            }
            do
            {
               e += (k+f+c-h-a-h+b-m+b*n*a-i*n+m)%100;
               for( ; ++FORcnt[40]%5 ; )
               {
                  h += (h-f*n-b-l)%100;
                  d  = (i-k*i-e+k-l)%100;
                  j  = (j-d*m-f+n+f-d+k-n+l)%100;
                  a += (k-k-l-l*l+b-b-d)%100;
                  l -= (n-e+j*n+c-j-j+d-e+m+e+h+g)%100;
               }
               
               switch( ++SWcnt[13]%3 )
               {

               case 1:
               {
                  k += (h+m-c+k+b-h)%100;
               }
               break;

               case 2:
               {
                  f  = (n-m-e+e+d*c-n+d)%100;
                  h += (h*f+l-j*m-d-e*l-i+n*n+h-i)%100;
               }
               break;

               default:
               {
                  k += (n+n+j-g-f+e)%100;
                  h -= (d*e*a+m+g+k-c-d+i-d+i-k*d)%100;
                  n  = (e-e)%100;
                  h += (c-c+d+n+n-j-a+h-e-e)%100;
                  m -= (c*g-m+f*b+d*g)%100;
               }
               }

               if( ++IFcnt[20]%10 )
               {
                  i += (e*n)%100;
                  j -= (b+d+i*a-k-i+d*c*a)%100;
                  f += (f+m*m*d+d+j)%100;
                  l  = (n*c*j+k+f-b+n*h-b-g+g+a-c-b)%100;
               }
               a += (d+n)%100;
               c -= (h+d)%100;
            } while( ++DOcnt[26]%5 );
            n += (g*l-e)%100;
            n += (k-n-e*m*j-b-i)%100;
            i += (k+h+h+a-j-d-c*g+k-k+f+n-j+c)%100;
         } while( ++DOcnt[25]%5 );
         h -= (f-k*d-e+e*c+g+i)%100;
         j -= (a+k)%100;
         b += (c-j+g+l*b*k+d+m+j-d+k*l*h)%100;
         b -= (b-g*e*k+j-c+n-e)%100;
      }
      h -= (b+d-m*i)%100;
      n += (d+e-a+j+e-e*g*f)%100;
      b += (f-m*f-a+g-i*b-k+j-c+b+f)%100;
      c -= (c*h-l*k-a*a*k-n+h-g+j+g-e)%100;
      m += (l+n)%100;
   }
   k -= (b+f+e*e+g-k-h)%100;
   g += (k-k+c)%100;
   i += (n+h*k*e+c-m*e)%100;
   g += (b-i)%100;
   j -= (b*h+f-i-j-j+g+k-i-i)%100;
   k += (i-g-l-c*f-e-h+e*k+f-b-a-m)%100;
   n += (b+l*i+m+b-e+e+e-m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F13(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[29]%2 )
   {
      d += (j*j-d)%100;
      h -= (i-k-m*b*d-f+h-j)%100;
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
                  m -= (a*d+h+g-n*i-f+g-n-d)%100;
                  c += (b-g+h-c+h-a)%100;
                  i += (b-f+d)%100;
                  g -= (i*b)%100;
                  m += (h+h-i+i-e+f-l-c+c+j-h)%100;
                  e -= (n-d-n+j*b-i+f+n+c)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  f += (g+f-b*d)%100;
                  l -= (n-d-d+a+a+e-b+d-n-g+n)%100;
                  l -= (j-j-n*f*j*d*i+d+j)%100;
                  l += (l+c+c+l+d*d-n*i-c+f*a)%100;
                  h -= (n-a+k+j+a+j+h+d-h+d+f)%100;
               }
               else
               {
                  c -= (j*e-e)%100;
                  d -= (k-f+n)%100;
                  d -= (j-e+g+f)%100;
                  e -= (d-b-d*l-c)%100;
                  b += (h-l-m-h-h*d*d*e+e*k*d)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  f += (e+n+i+d+n+k+a*n-d-l)%100;
                  c += (c+e*h+f+j+m-l-b*b-a+j+e)%100;
                  k -= (h+h+i+l-b-l-m)%100;
                  n += (h+e+l-e)%100;
               }
               do
               {
                  m -= (m-n-m*b)%100;
                  h += (c+k*h-a+h-i*c*d-k+a-e-c+c)%100;
                  l -= (e+h+d+h-b+k*a-h-g*m*i-g+a+f)%100;
                  h -= (a+h-k+b*k*n-d)%100;
                  n -= (a*a)%100;
                  j -= (e*g+b)%100;
               } while( ++DOcnt[28]%5 );
            }
            if( ++IFcnt[21]%10 )
            {
               j += (m-g*h+i)%100;
               for( ; ++FORcnt[43]%5 ; )
               {
                  d -= (i-l+h-i*l-a-a+i-i+a)%100;
                  c -= (d-i)%100;
                  k -= (m+l+h+m-a-c+c+k+i-i-h)%100;
               }
               
               switch( ++SWcnt[14]%3 )
               {

               case 1:
               {
                  e += (h+n-k*m+g+l)%100;
                  f  = (m+f)%100;
                  g -= (e-n*n+i-m-b*e-i)%100;
                  h += (b*b-e-b+a-a-h*n+k*d+a-m*k-i)%100;
                  a += (m+c*h+l+c*b+n+h+j+g)%100;
               }
               break;

               case 2:
               {
                  k += (f+c+f)%100;
                  j  = (f-i+f+l-i+m)%100;
                  b += (c+m*e*c+m+j-a*k*d-f)%100;
                  m += (c+b)%100;
               }
               break;

               default:
               {
                  i  = (l-h-l)%100;
                  k += (m-e*c)%100;
                  l -= (f-b+c+k+b+h+b+a+e-i)%100;
                  d -= (e-i-b-f+h+g-a+d-i*e*b-d-a+j)%100;
                  l -= (m+i-e-b*m*f+n+k*e-f*e-f-e-j)%100;
                  h += (k-m-g+n-c-e-b-h-n*c-b+e)%100;
               }
               }

               if( ++IFEcnt[28]%2 )
               {
                  a  = (g-i)%100;
               }
               else
               {
                  l += (n+i+m*e+f+e-k*e-l+j)%100;
                  l += (c-g+d-h+d+j*g*e-h*k-j-j)%100;
                  b += (f-n-c+g+g-k+l+d+l*h+b-l)%100;
                  d += (e+e-f*h*b+j*m)%100;
                  m += (a*j-f-b+d+m+k*b+j)%100;
               }
               g += (l-f-c*a+d+h-c+a+b-i+f*c*h-n)%100;
            }
            g -= (h+f*k+l-l-j*j-e*f*l)%100;
            h -= (f+d-b-n+n+b-l+i+e*f)%100;
            a -= (c+n)%100;
         } while( ++DOcnt[27]%5 );
         f -= (e-m)%100;
         j += (d-c-c-j+k-d+g-l)%100;
      }
      g -= (d+m*l)%100;
      d += (k-m+b)%100;
      f -= (c*m)%100;
      g  = (i+m*b+j)%100;
   }
   l -= (g+j*k-m)%100;
   c -= (i-h+g+d+l)%100;
   e += (i*i-e+h+c*f+e+c-h+a*m+c)%100;
   b -= (c+e-a-c-m-j-h+l)%100;
   a -= (f-b+g*c-l*l)%100;
   j += (l+j+j+h-k+b+f-m)%100;
   j += (a+a-e*j+i-c+i)%100;
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
                  m -= (m-g+k-f-m+k-f*j+i*j-m*f)%100;
                  f -= (i-a+h-h-n*e+h-e+g)%100;
                  n += (j-h-j+g*j)%100;
               }
               if( ++IFEcnt[30]%2 )
               {
                  i += (e*f+h-j+m-f+f-g-d+c-k-g-b*e)%100;
                  g += (e*a+m-l-h*k+i-h+j-e-n+b)%100;
                  e -= (f*k*b)%100;
                  i += (h+b-e-d-j-l-i-k-j+h*g+j*g-a)%100;
               }
               else
               {
                  f -= (m*d*f*j-a+d)%100;
                  g -= (i+m*e-g-g-m*h+f-d-f*e*m*l)%100;
                  j -= (j*h-m*e*i+b+e-i*i-c-b)%100;
                  l += (f*c+m-k+i+a+c)%100;
                  b -= (j+a-k-b-c)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  n  = (e+f-a+i-a-d-a-c-l+l)%100;
                  b += (h+i)%100;
                  f += (c+k*h-l*f-m+m*b+a+a+j-c)%100;
                  i -= (d*h-g*m*l+h-h-b+d+i+b-f-l)%100;
                  k += (b-l-l-n-c+c-b+l+d+n-j-i)%100;
                  n -= (m-c-i*l-b+j+h+d+k+b+a-b*k)%100;
               }
               do
               {
                  k += (b-b*n-c-h*m)%100;
                  n += (i*m+g*k-a+h-c+a*m-c-l-a)%100;
                  i -= (l+m-m+f)%100;
                  h  = (h*k-d+e-k-j-g)%100;
                  k  = (h-i+a-a+i-c+k*b)%100;
               } while( ++DOcnt[30]%5 );
               h += (e+d-b-c*m*g+a*j)%100;
            }
            for( ; ++FORcnt[45]%5 ; )
            {
               
               switch( ++SWcnt[15]%3 )
               {

               case 1:
               {
                  n -= (n-n)%100;
                  f -= (f+c*l)%100;
                  d += (e-n-i-f+l+c-l)%100;
                  e += (n-d+j*g*e+k+l-k-d)%100;
               }
               break;

               case 2:
               {
                  c += (b+e-l+f)%100;
                  i -= (b-c-i-n-h+m+a*b+d-m+n)%100;
                  e += (m-l+j-d+k-h)%100;
                  k  = (l+h+a-c*i-h+l-n-e*j+n*m)%100;
                  j -= (a-g+f-l+c+g-g-b*d-k*m*l)%100;
                  g -= (b-c-f+g-n+e+c-e-g*g)%100;
               }
               break;

               default:
               {
                  g -= (h-b-h-c-f+f*d-l+j)%100;
                  k  = (m*d-e-i*m*m-j-e*n*g)%100;
                  g -= (d+n*h)%100;
                  l -= (h-l-i)%100;
                  f -= (g*i+d*h-i*j-k-e*h+e+h*f)%100;
               }
               }

               if( ++IFcnt[23]%10 )
               {
                  e -= (m+m-c+k*c+n-c+n-b*i)%100;
                  l -= (e-h)%100;
                  e -= (k*n-a-l-d)%100;
               }
               if( ++IFEcnt[31]%2 )
               {
                  i += (h+e+k-d+b-m)%100;
                  j -= (e-k-b-l+h-g-j-m-m)%100;
                  b -= (k*c-a-b+b*g+d+b+a)%100;
                  c -= (j*j+f-j-i)%100;
               }
               else
               {
                  j  = (d*m)%100;
                  b -= (c+a*h-a)%100;
                  l -= (a+k+c+a+b*d-d-f-m+f-g-e)%100;
                  k += (l+f+m+l+b-e*l-n+l-e-f+j)%100;
                  l -= (n*g+d-k+i+a+n*n*e*a*e*e-k)%100;
               }
               while( ++WHILEcnt[30]%5 )
               {
                  b -= (c+k+c)%100;
                  a += (i+g-i+e+l-k*d-c+k)%100;
                  l += (j+m+n+a-l-f+a+i-i*l+d+n*m)%100;
                  i += (j+i-f+a+k-c+c)%100;
                  g += (m+h-g*b-e*m+j)%100;
                  c -= (h-h-i+f*e+g*e)%100;
               }
               a += (h-g)%100;
            }
            e -= (l-h+f*f+l-h+n-k+g-l*e-k*a)%100;
            k += (c*d+i+n-i+g-f*j-e-n-f*g+b)%100;
            j += (g-k-c+m+d-n*b)%100;
            c += (g-d)%100;
         }
         b += (b*d+g+h-n*c+e+e-g-b+c+h+h)%100;
         f -= (m-m*k+c*b+i-i)%100;
         h -= (k+a-h+m-h-e-i*i-b-d+d+a)%100;
      } while( ++DOcnt[29]%5 );
      g += (b+k-d)%100;
      g += (e-n)%100;
      e -= (n*h+c-g-l-c-h+g*d-l)%100;
      n += (h-l-g+f+n-a-b+e+g+j-k+f)%100;
   }
   f += (e+h+a-a)%100;
   d -= (f-c*j+c+g-j-k+e+f-l-a+a)%100;
   e += (a-n+n-m+f-a-b*i*g*n)%100;
   c += (j+g-b+h+h+l-b)%100;
   g += (j+c*j+j-i+c-h*i*c*h)%100;
   l -= (k-a)%100;
   a -= (m+e+j+h+k-m+h+a+i)%100;
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
                  k += (a-d+j-g-h*a+l-b-c*n+k-l)%100;
                  e += (g*j)%100;
                  c -= (e+f+l-g+b+g+c+c*m-j*m-l-l)%100;
                  f -= (j*a+j)%100;
               }
               break;

               case 2:
               {
                  g += (a+n+c+m-k*b*d+l)%100;
                  d += (h*m-g-j-i+d-b+n+m+j+e)%100;
                  m -= (h+h)%100;
                  l -= (c-e-d*l)%100;
                  c += (n-a-k)%100;
                  n -= (m-n)%100;
               }
               break;

               default:
               {
                  c -= (j+m-m*i-e-j-e*k)%100;
                  l -= (a-n*i)%100;
                  k  = (n+e*i-j*l+g*g+k+f)%100;
                  a += (a-g+l+a+j+a-k+j-c-j*e*m+h)%100;
                  i -= (f-i*d+g+f-e-f*l)%100;
               }
               }

               if( ++IFEcnt[32]%2 )
               {
                  n  = (l-b*g+e-a*b-a-k*m-g)%100;
                  n  = (b*m*e-b-i*m+d-f*m-j-e+e+c+l)%100;
                  m += (h-c+i*f)%100;
                  b += (m+d*c*a)%100;
               }
               else
               {
                  l += (e+j-c*b+d-l*m-c+n+i+d-f-c*c)%100;
                  g += (d-d-e+h-h*f+d+k-d-l)%100;
                  d -= (a-f)%100;
                  k += (j+k*c-m+k+e-f-k+b-k-b)%100;
                  g += (c+d-k+i-b+j+k)%100;
               }
               while( ++WHILEcnt[33]%5 )
               {
                  j  = (d+a*n-i+m-d+k-f*e)%100;
                  j  = (a+k+m-m+a+e+n-b-c+j)%100;
                  i -= (k-k+c+k+h-e-n+l-f*i-i-h+g)%100;
                  b -= (b+k-g*l)%100;
                  f -= (c+e-d+a+m*i+m+c-g+n*b+i)%100;
                  c += (j+n)%100;
               }
               do
               {
                  i -= (f-j*b+n+g*e*e-f+l-f+n-k+m*g)%100;
                  n += (c-b-j+g-h*f*g)%100;
                  i -= (b-k+h*g-b-g*m+e-c+a+b*g)%100;
                  d -= (n*m+g*g-g-k-e-i+k-m+f-c-b*i)%100;
                  l += (j-h-j*g+m+n*d+e-f-k+n-i)%100;
               } while( ++DOcnt[33]%5 );
               e -= (k+l+h*i*m+e*k*e-c-g+g+k-d)%100;
            }
            else
            {
               while( ++WHILEcnt[32]%5 )
               {
                  n += (i+a-f*a)%100;
                  e += (k+j+d+n-a-g-m*k*k+i*j)%100;
                  f -= (i-a*h+e-a+i-e*n*c-m-e*j+d)%100;
                  d += (n-b-c*b+i*l+g-j+h*l)%100;
               }
               do
               {
                  j -= (e-b)%100;
                  j -= (j+e+l+l-l+c+f)%100;
                  l += (m*h-g-l*j+k*k-e*k)%100;
                  e -= (h-k-f)%100;
                  a += (b-i+g+g-c-j-b+a*k+l-h)%100;
                  n -= (a-n+g-g*c+m*g*n)%100;
               } while( ++DOcnt[32]%5 );
               if( ++IFcnt[24]%10 )
               {
                  e -= (c-l+e-a-f*k+e+g-e-e*m-j*e+b)%100;
                  h -= (i+h+g*a*n+l-c-f)%100;
                  d -= (l-h*b-e-k+h-i-k+e*i+f*n-l-k)%100;
                  d -= (h-i*g-d-c)%100;
                  j -= (k+h+l+j-g-n+c*e+l)%100;
               }
               a += (d-i*c+e*b*m-g*b-a+c*c)%100;
               for( ; ++FORcnt[47]%5 ; )
               {
                  h  = (c-n-d*e*n+a+m)%100;
                  m -= (e+k+a)%100;
                  j += (e-g*n*b-j-c-g+k-j-h-h)%100;
               }
            }
            n  = (d-h)%100;
         }
      }
      m += (n+c+d+m-i+c-f-e*e*j*b)%100;
      n -= (a*f+j)%100;
      m -= (m-f+e-e+d*a+k+n+f)%100;
      l -= (h*f)%100;
   } while( ++DOcnt[31]%5 );
   e -= (a*k*a-h-h-e+i-l+n+g+d)%100;
   h -= (i-m*j-a+i*d*d+c+h+n+c+c-j-g)%100;
   k += (a+i-j+a-f-c*n-g+g+b-h*k+l)%100;
   k -= (b-g+b-c-b*i-l-b*b+b-m+e*c)%100;
   a += (b*d-m-c+i)%100;
   c += (c+b)%100;
   c += (m-m+d-b*d+n-h*l-n-g-n+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F16(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[54]%5 ; )
   {
      if( ++IFcnt[26]%10 )
      {
         for( ; ++FORcnt[53]%5 ; )
         {
            if( ++IFEcnt[35]%2 )
            {
               if( ++IFEcnt[34]%2 )
               {
                  b += (h+j+b-a+m-f+h+n-k+i-e-m)%100;
                  d += (e+k-f)%100;
                  a += (f+k)%100;
                  j -= (g-m)%100;
               }
               else
               {
                  c -= (b-d-c*e-f-h-k-f-m-c-j)%100;
                  c += (m+b-m*f+b*a-i+k*b-c*m)%100;
                  i  = (l+i)%100;
                  a += (i-a+i+m*i-k)%100;
                  k += (h+n+i+c+c-k-m+b-m-h-m)%100;
               }
               while( ++WHILEcnt[35]%5 )
               {
                  b += (i-g*g+e-g-m-m+d-k-j)%100;
                  f  = (e+m)%100;
                  g -= (j-e-a*c+d-a-f-n*g+k+k+a-c)%100;
                  b -= (e+b+d+j-l*m-j)%100;
                  j += (k*g*c-n-d+e)%100;
                  l -= (e+k)%100;
               }
               do
               {
                  e -= (k-m-h+j+c+m-f-l+m-d)%100;
                  a -= (j-h-k*n-h)%100;
                  j -= (b+i+h)%100;
                  i -= (d*g+k-i*h-l+f*b-h+l-e-h-f*n)%100;
                  g += (n+n-e+j-e+g+l+d+h)%100;
               } while( ++DOcnt[35]%5 );
            }
            else
            {
               while( ++WHILEcnt[34]%5 )
               {
                  k += (i*j+n-f)%100;
                  g += (g*e+i-m-g)%100;
                  d  = (c-j+g*n+d+k+g-l-l)%100;
                  e += (l+n+j-m*k+i+l)%100;
                  f -= (c+m-m+l*l-e-l+j)%100;
               }
               do
               {
                  l += (m*f+h-c-i*g*g+c+k-g+m*f+l)%100;
               } while( ++DOcnt[34]%5 );
               j += (k+f+l-h-e+n-g+i)%100;
               for( ; ++FORcnt[50]%5 ; )
               {
                  b -= (e-i)%100;
                  k += (i*l+b*n-i*m+d*b*c+c)%100;
               }
               
               switch( ++SWcnt[17]%3 )
               {

               case 1:
               {
                  k += (n-a+b*m+k-k+k-k*g)%100;
                  b += (a*a-c-m+l+l)%100;
                  n -= (c-c*n+k-e+m+d-a-g)%100;
                  n -= (c+n+f*f-b*d-e-g+g+c+d*j)%100;
                  f -= (h+a-f+b*f*c+d+d+f-b-m*l-h+f)%100;
               }
               break;

               case 2:
               {
                  n -= (b+m-l+l)%100;
                  j -= (n+j-e-g*g+a-k-j)%100;
                  a -= (b-a+f*l-l-d-j+d-a-c+a*n+f)%100;
                  l -= (f+m-c)%100;
               }
               break;

               default:
               {
                  l  = (a-a+e*a+h)%100;
                  g += (g+h-d+h+m)%100;
                  h += (n-n*h*k+h-k-i-l+n+j)%100;
                  f += (e+d+m+n-m-b*l*g)%100;
                  h += (a-h)%100;
                  j += (n+b+n*f-h*c+b*c-b-a+a+n*h)%100;
               }
               }

               if( ++IFcnt[25]%10 )
               {
                  a += (n+e+n-d-c+g-h*h-f+d*j)%100;
                  g -= (b+k-k-b-c+m*g+n+l-j)%100;
                  n -= (n-b+g)%100;
                  f -= (a-e-b+i+h+m+e+l+e)%100;
                  e -= (d*l*f+m-c+h)%100;
               }
            }
            for( ; ++FORcnt[52]%5 ; )
            {
               for( ; ++FORcnt[51]%5 ; )
               {
                  g += (j-h*g+j+h-f-g*l*n-k-n+b+d)%100;
                  h += (j-i-j-a+j+c-f+c+n-m-d)%100;
                  e += (n-d+j+a+j-m)%100;
                  b += (c*k)%100;
               }
               if( ++IFEcnt[36]%2 )
               {
                  b += (b+l)%100;
                  h += (n+i+a-e*g-i-n+h+g-e-c-j)%100;
                  g += (a*a+a)%100;
                  b -= (b-h*i)%100;
                  a += (f-n)%100;
               }
               else
               {
                  n += (l+d+h)%100;
                  k += (j*k)%100;
                  m += (n-f+f+m+b+e-k*d+b+k*m+c*i)%100;
                  m -= (f-j-d+f-l+b+a-b+i-m+b*n)%100;
                  k -= (b*d+n)%100;
                  m += (d+b+l-b)%100;
               }
               a += (l*m*g+j)%100;
               i -= (f-h*f-j-c+h-i-j-h*n-a-f)%100;
               e += (m-b-f*e*i*b*j-c-j*l+h)%100;
            }
            k += (c+j+c+c+b+k+i*n-n+f-f-g*h)%100;
            m  = (b+b+d+f*n+b*m+a)%100;
         }
         f -= (d-h-g-h+j*g-h)%100;
         l -= (b+e*a+n+n-n-m+n-n)%100;
         b -= (d+j-e-k+e-c+f-f)%100;
         h += (i-n-b)%100;
      }
      e -= (n+f*k-m-b+h)%100;
      c -= (k+k*a+n+n*n-b*m-c)%100;
   }
   a -= (c-k+f-i*m-f-i*n-c*h*n+m-m)%100;
   k -= (e+d-h)%100;
   e -= (k-l-k*b-i+k)%100;
   n -= (d-n-h*b-m)%100;
   l -= (k+i*h-n-m-b-e-n)%100;
   d -= (j*g-d*a)%100;
   c += (f-f+d-e*d-f-a-i*l+n+m-m)%100;
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
            l -= (l*c+n-k+c+c-a-j)%100;
            for( ; ++FORcnt[56]%5 ; )
            {
               
               switch( ++SWcnt[18]%4 )
               {

               case 1:
               {
                  d += (f+j*k+i-e)%100;
                  c += (j-k)%100;
                  c -= (n+b-m-d)%100;
                  a += (m+l-k)%100;
                  h += (d+a*a+j-g+i+b-m-n+l*m+g+d)%100;
               }
               break;

               case 2:
               {
                  h -= (e-j-j+b-g+g-b-n+c*m-e*l)%100;
               }
               break;

               case 3:
               {
                  f += (f+m-n)%100;
                  b -= (n-n-j-e-b+n-e-j+e-g-i+j+j*n)%100;
               }
               break;

               default:
               {
                  b += (n*k+i+d+h+a+b*a-l-n-f-k)%100;
                  j += (n*m+f-j-k-g)%100;
                  d += (n*m+e-h-f+i-j)%100;
                  d -= (k+e)%100;
                  d -= (k+k-j+d*a-l-k+e-m*n-f+f+c+i)%100;
               }
               }

               if( ++IFEcnt[37]%2 )
               {
                  e += (l+j+l-k+l-b*j*c-j-k)%100;
                  a += (h+h+j+n*g+i-k*g)%100;
                  k -= (d+c+c*g*n-g+i*a-h-k-k*g)%100;
                  d -= (d-m*a-m+j)%100;
                  h += (b+i+i-i*d+j*b-b*e)%100;
                  k -= (i-m*f-h*m-n)%100;
               }
               else
               {
                  l += (c+b*m-g+i)%100;
                  n -= (e-j+e-l-n+n+j*b+e+c-f+j-l+f)%100;
                  l += (f*l-n-m+i*f+c+m)%100;
                  i  = (c+d)%100;
               }
               while( ++WHILEcnt[36]%5 )
               {
                  h -= (j-j)%100;
                  f -= (f*f-j-j*a+n+b+a)%100;
                  c += (k+c+i*f-e)%100;
                  a -= (f*b)%100;
                  b -= (m+i*h*a*e+d-f*f-m-i-a-h*c-l)%100;
               }
               do
               {
                  h += (n+a+j+l*e+f+b*d)%100;
                  b += (f+n+a-c+a-n-l*k)%100;
                  j += (n*f*a-d-j*k-i+e*a+f-m*b)%100;
               } while( ++DOcnt[37]%5 );
               for( ; ++FORcnt[55]%5 ; )
               {
                  e -= (k-l+g+a+d*l+f-a)%100;
                  n -= (e-m)%100;
                  g -= (e-f+h*c-n-n-m*m+g-a+n)%100;
                  b  = (a-h-k*a-a)%100;
                  j += (m-m*e+j)%100;
               }
               if( ++IFcnt[27]%10 )
               {
                  g -= (k+f+m)%100;
                  b += (j*j*g+k-j-k+k-k-k+i)%100;
                  c += (a-b+k-i+l-d)%100;
                  j += (c-g+e+b-n+m-e-e-l+h+n*a)%100;
               }
            }
            for( ; ++FORcnt[57]%5 ; )
            {
               if( ++IFEcnt[38]%2 )
               {
                  e  = (l*n+g+h-n+m+d)%100;
                  j += (d-j-b*m-i+j+l+g-e-a)%100;
                  m += (f-i+d+h+d*h*d-i-n*h-l-e)%100;
                  f += (i-i-i-f-n-g+n*i-k+k+b-c)%100;
                  e -= (e-d-h+e+a+b)%100;
               }
               else
               {
                  b -= (b+m+g+h*c*l-j+e+h-e+g*n)%100;
                  n -= (d*k-h)%100;
                  j -= (a+j-f-m+c+h+m+a-a+d-l+g)%100;
                  l += (b+e-f-l+m)%100;
                  a -= (c+j-g+l+g+i+i*b)%100;
               }
               g -= (d+k-m*l+f*g-h-a-i)%100;
               n -= (c+e)%100;
               i += (m-k*l+k+h-b-c*c+n*n*m+d-m)%100;
               j -= (a-l+h*e+m+h+f-k-m)%100;
               l  = (j+n)%100;
            }
            h -= (i+f-e)%100;
         }
         e += (d+d+m)%100;
         l  = (a-a+f+m*i-h)%100;
         g -= (e*e-l+l+h-j)%100;
         j -= (d-g)%100;
      } while( ++DOcnt[36]%5 );
      j += (a+n*a)%100;
      i  = (b+f+n-g-n)%100;
   }
   m += (b-l-h+n+g+e+k+l-f+h*c)%100;
   b -= (b+k+j*c+d-h-i*g-c-i+a+b)%100;
   i -= (a+i*h-d+n*e-h*h-b*a-i*i+n)%100;
   l -= (n-i-i-i+i-c)%100;
   d += (f+k-e*g)%100;
   i += (j-g)%100;
   h -= (h+g-h-h+k+d+l+c+b-b*d)%100;
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
         n -= (c+d+l-e*h-d+n+l-m)%100;
         for( ; ++FORcnt[60]%5 ; )
         {
            
            switch( ++SWcnt[19]%3 )
            {

            case 1:
            {
               if( ++IFcnt[29]%10 )
               {
                  i -= (c-e+l-k-g+b-l-g-c-l+c-j)%100;
                  l -= (l-a+g)%100;
                  i += (j+b)%100;
                  m += (g+b-f-n+g+e+e)%100;
                  b -= (j*a+b+f+n+l*k*g-e+e+g-j)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  l += (b+c-f+a)%100;
                  k -= (n+e+i*j-k+m+f-n*h-b)%100;
                  m -= (h-g)%100;
                  l += (d+l*g+i+e-e+f)%100;
                  e += (l*n-c-n-d+e+d-i)%100;
                  l += (e+i-k*n*c-e*d+e*b-i)%100;
               }
               else
               {
                  l -= (k+e-a-f+n+i-f-c+d-b-c)%100;
                  i += (n-i-m+k+j-l*e-h-a-l-l*a*d+j)%100;
                  d -= (l-g*n*f-d+g*k+b+g+l)%100;
                  c += (g-i*j-g+h-m-c+l-m-a*b+n*j)%100;
               }
               while( ++WHILEcnt[38]%5 )
               {
                  b += (h*e-f+n*j-j*f-j-j-i+a)%100;
                  k += (c-b*e-d-i)%100;
                  g += (d-g+l+m*d+e+h+k*m)%100;
                  i -= (c*m-m+a*k+e*b-f+f+f)%100;
                  g -= (b*c*e+n+m)%100;
               }
            }
            break;

            case 2:
            {
               do
               {
                  e -= (g-m-e+c-n-f)%100;
                  c += (d+f+h+a+n+i+c-i)%100;
               } while( ++DOcnt[39]%5 );
            }
            break;

            default:
            {
               for( ; ++FORcnt[58]%5 ; )
               {
                  l  = (h+l*e-n-f+i-d-c)%100;
                  g -= (m*g-g-b+b+g+f*e*d+c+g)%100;
                  d += (h+f+h+f-b+f-a+l-a*g-h+e-e)%100;
                  c -= (m-j+b-k+e-n*a)%100;
               }
               for( ; ++FORcnt[59]%5 ; )
               {
                  g -= (g-g*h+l-e+a-m+c)%100;
                  h += (k+f-d+m-b+i+b+l-g+h+j*b+e)%100;
                  m += (f-h-n-c-b*e+j-b*d*d)%100;
                  b += (g+c+h-m-n-k+i+n+d+b-a-c+f*a)%100;
                  f -= (a+a*f)%100;
                  k += (l-d-d-j)%100;
               }
               if( ++IFEcnt[40]%2 )
               {
                  a += (g-f+m+e*e+c*c*l*c*n)%100;
                  f -= (a-g+l+k+g+j)%100;
                  e  = (h-e-a)%100;
               }
               else
               {
                  m += (b-n-g+c*k+b-e*m+f*i+f)%100;
                  d += (j*e-l-d*n+i-n-j+f)%100;
                  i -= (f-a-d+g+m-a-g+k+h-g)%100;
                  n -= (a*a*b+j*k)%100;
                  f  = (b*a-m-g)%100;
               }
               while( ++WHILEcnt[39]%5 )
               {
                  d -= (l+m)%100;
                  d -= (c+l-d+h-m+a-n-a+i-c-e-n-a)%100;
                  g -= (j+d+c-k)%100;
                  a -= (n*d+g+i+d+b*a+h-e-m+l*l-k-f)%100;
                  e += (j+n+g-j-k)%100;
               }
               do
               {
                  i += (e-m-a*l*j-a-e+a*j*c-h+a-d-h)%100;
                  j  = (m+c-e-e*a-g-i-g-k-l+h*j)%100;
                  b += (g-d)%100;
                  l -= (k+i-c*h-a-d*a+i-e*m)%100;
               } while( ++DOcnt[40]%5 );
            }
            }

            if( ++IFcnt[30]%10 )
            {
               h += (a*g+m*l-h)%100;
               e -= (f-b)%100;
               l -= (e*l-m*f-d+j-f-j)%100;
               g -= (m+d-g-g+g)%100;
               d -= (f-i*d+d*l*f*c-h+g)%100;
               g -= (l+g+c-e+k)%100;
            }
            j += (j*b-i+c+l-j-a+e-f-g-k+b)%100;
            n += (f-f-d-f+d-e+k)%100;
            k += (c+i)%100;
         }
         n -= (f+h-e+f-f-m-f-m-b-e-f)%100;
         k -= (i+d-h+n-j-a*c+n+c+a+n+d-i*l)%100;
         c += (e+n+m+g-c*g+m-i+i-i+h-b*n)%100;
         c -= (g-h*i+g+j-h)%100;
      } while( ++DOcnt[38]%5 );
      j += (g+a+m+e+l*h*l-m)%100;
      j -= (f-j+m)%100;
      k -= (b-g)%100;
   }
   k += (c*n*d+m)%100;
   b -= (h-i)%100;
   d += (c+f+g+h*b-m+c+a+f+k+d-f+h-d)%100;
   f += (e+k-i-h)%100;
   n  = (h+d)%100;
   h -= (c+n)%100;
   d += (m*e*j-k-h-i-j-m-k-k*i)%100;
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
      for( ; ++FORcnt[64]%5 ; )
      {
         g -= (f-a+i+j)%100;
         if( ++IFEcnt[43]%2 )
         {
            b += (c*j-c+d-j-j+n-i-i-c)%100;
            b += (b-l)%100;
            l -= (m*l+e*g+g+c-a*c*g-a+l-c+b+j)%100;
            e += (c-n+i-n*d-f-c+n+c)%100;
            d += (g*d-f-n+k+l+m)%100;
         }
         else
         {
            while( ++WHILEcnt[42]%5 )
            {
               do
               {
                  m -= (c*a-l)%100;
                  g -= (l+h)%100;
                  b -= (c+d-i+f*a-l*m-d+n)%100;
                  j -= (d+h-n*n*i)%100;
                  c -= (h-i-a)%100;
               } while( ++DOcnt[41]%5 );
               for( ; ++FORcnt[61]%5 ; )
               {
                  b -= (b+n+n+d+k-n-d*c-h)%100;
                  n -= (g-m)%100;
                  h -= (f-i)%100;
               }
               if( ++IFcnt[31]%10 )
               {
                  b += (d-c*h-i+i-k-k+d+g+d-g*a-l)%100;
                  b  = (g+c+m*h-l*n*n*m-l+e+m+j)%100;
                  n += (n-k+j-i-e*c-j+l-f)%100;
                  m += (d*n-k*g*f*g-b-j*c-e-n)%100;
                  j -= (e+m*b-m+e-d*l+b+g+n)%100;
               }
               for( ; ++FORcnt[62]%5 ; )
               {
                  n += (n-l+n-b+j-d*a-c-k*a-n)%100;
                  i -= (d+h-c-g+k*i+d*a+a+l-g*m+h+g)%100;
                  c -= (a*l-d-i-k-e-h+f+i*k+g)%100;
                  f -= (g+k-i+k*a+h*m+m*f+b)%100;
               }
               if( ++IFEcnt[41]%2 )
               {
                  a -= (m+n-k+b+b)%100;
                  n += (e+f*d)%100;
                  f  = (n*d+i+b)%100;
                  j += (a+d+b+m+d-h*f+c-n-j*g*m)%100;
                  l -= (e-a+n-i)%100;
               }
               else
               {
                  j -= (b-f+c+n)%100;
                  f -= (g+k-l+e-j+b)%100;
                  i += (n+f-g*b-j*e*n+e-h)%100;
                  e += (h*f)%100;
                  b += (f-f+l-n+d-n-l-k*b-f+m)%100;
                  g  = (b+c-i*e+j+g)%100;
               }
               while( ++WHILEcnt[41]%5 )
               {
                  c  = (n*i-m*m-k*n+h*h)%100;
               }
            }
            do
            {
               b += (e-d*i-m*c-j+m-b*d-a-m-k*e)%100;
               for( ; ++FORcnt[63]%5 ; )
               {
                  i -= (e-g-a+d+c-l-e-d)%100;
                  k -= (l+j+f-l*l-j-j+c+c)%100;
                  c  = (d-l+j)%100;
                  d += (h-e*m-f*f-c+g+g+m-c*d)%100;
                  h -= (e-k+l-e+f-k)%100;
               }
            } while( ++DOcnt[42]%5 );
            
            switch( ++SWcnt[21]%4 )
            {

            case 1:
            {
               if( ++IFcnt[32]%10 )
               {
                  e += (k+n*m)%100;
                  h  = (m-g-i+f-l*j-k-d)%100;
                  n += (m+e-f+n+l-b-d*l+i+i*k+e)%100;
                  h  = (i*i+g-l)%100;
                  d -= (g-b-e)%100;
                  i -= (c*i*n-c-k+e*g-c-f*a*d-b)%100;
               }
               if( ++IFEcnt[42]%2 )
               {
                  i -= (l-n+j+a-n-e+n-d+e+l+c-n+f)%100;
                  d -= (n*l+g-d-l+n)%100;
                  d -= (d*d-m+b+k-e-g+d-l-g-e)%100;
               }
               else
               {
                  h += (h-e-d+m+n+m-e*l-k+i+n+j+g)%100;
                  b += (m*n+e*j+h-b-c-m*f-l+m)%100;
                  c += (n-i-j-f*g*g-m+b+n-a)%100;
                  m += (i-d+l-h*j*b+m+b-j-n+e)%100;
                  d += (c+i-c-e-b+n-e+d*e-e+b+f+d)%100;
               }
               e -= (j*l+g*h+c-g+m*k-h-j*e-h+k)%100;
               l -= (k*d-c+f*a-d)%100;
            }
            break;

            case 2:
            {
               b -= (i-b+d*b-i+h*l+d-n+h+g+l-e)%100;
               j += (g-i+e+c*n-c-a-l+f*d)%100;
               c -= (m-a*c+a+l+k+c+k+k-b-h)%100;
               m += (k+l+i-e-f+j+n*m+n*d*n-l+d*a)%100;
               b += (j+c-a+b*i-g*k+k+l-h)%100;
            }
            break;

            case 3:
            {
               c += (l+n)%100;
               a -= (b-i-c+b-l*f*j-n)%100;
               g += (e*c*m)%100;
               l -= (b+n*l*l*a*c+f-d-b+a+k*m)%100;
            }
            break;

            default:
            {
               m += (m-h-n+k*g*m-n-f+b*j+g+a-c)%100;
               a -= (d*a-g-a*c-j+a-b-f)%100;
               h -= (h-h+k-c)%100;
               e -= (b-b+n*h+a)%100;
               m -= (j-f-k+e*d-n+g)%100;
               k  = (j+j+j)%100;
            }
            }

            c  = (b*c+d-f-l+f*i+m+e-h*n-i*f+h)%100;
         }
         m += (e+j-k+n+m+f)%100;
         b += (e-n+f-f-k-e-a+f-h-j-m+n+b)%100;
         h -= (a-a)%100;
      }
      e -= (e-c*l-a)%100;
      d += (k+m*g+h*f+g*c)%100;
      i -= (i+i+e+c+n+k+j*b-j+h*e*m-h)%100;
      g -= (e*c-f+n+j-a+g-i*n+j+b+f)%100;
   }
   break;

   case 2:
   {
      h -= (n-c+e+b-b+a*g+b)%100;
      b -= (d*c)%100;
      a -= (i-k)%100;
      f += (l+g*n-j)%100;
      k -= (j+b+f*c+h+f)%100;
   }
   break;

   case 3:
   {
      l -= (l+i*k-h)%100;
      k += (c*f+f-i+b+c*k-j*l-b+f)%100;
      h += (e+c+j+c-h+e+j-l+n*j-c+l*i*n)%100;
      n -= (g+h+c+f-b)%100;
   }
   break;

   default:
   {
      a += (f-a-b+m-c*m)%100;
      g += (f-h+m+l+c+g+d*b+n-c-j+i*m-k)%100;
      b += (b-a+i-e+c*n+k+j+a+a*d*h-a)%100;
      e += (h-k-j-i+l+g-e)%100;
      n += (f+i+m-b*m-k*n+j)%100;
      d -= (c-j*j+a+c)%100;
   }
   }

   l  = (n*m*h+b)%100;
   b += (m-m*c+f-b)%100;
   i  = (f+c-d+l)%100;
   a -= (b+j*f+l*g+c-e+g*j-k-l)%100;
   k += (f-d-a*g-h)%100;
   a += (f+m)%100;
   a += (h+f-i*m+e-b*g-n+n)%100;
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
                  m += (b+l-m-d+k)%100;
                  f  = (k+b-g*h)%100;
                  l -= (d-g-l-l)%100;
                  h -= (i-k*m*a)%100;
                  j += (n*k*d+j+m-m-f-m+j*i-a-m)%100;
               }
               else
               {
                  b += (h-n-n)%100;
                  a -= (h-l-i+i+f*a+i-f)%100;
                  j += (e-h-d-c-h+h-f-g+b+n-k-b-g)%100;
                  f  = (a+m+i-g+j-j)%100;
                  g += (e*m-n+n+m+k-c*h-m+d-l+e+f*d)%100;
                  j += (d*h-c-e+m*i-e*b)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  k += (n-a-l)%100;
               }
               do
               {
                  d -= (l*b*d-m-h-f-l*m)%100;
                  j -= (b+d*j)%100;
               } while( ++DOcnt[44]%5 );
               if( ++IFcnt[33]%10 )
               {
                  f += (f*h+f+c)%100;
                  e += (l+b-b-f-h*d-m+g*j-m)%100;
                  i -= (e-c+l-n-l*e+h+b-k*d)%100;
                  i += (n-j-g+k+b-g*l-e)%100;
                  k -= (k*j+n*a+l+b*m-b-m-g)%100;
               }
            }
            l -= (k*n+c+h-d-a+j-b+i+a)%100;
            for( ; ++FORcnt[66]%5 ; )
            {
               
               switch( ++SWcnt[22]%3 )
               {

               case 1:
               {
                  g += (i*n)%100;
                  j -= (c-g)%100;
                  e -= (h+k)%100;
                  g -= (h-f*a-g-h)%100;
                  a += (l*k-c-j*a+j-n*d-e-m-f)%100;
                  f += (n-f-c+a-a)%100;
               }
               break;

               case 2:
               {
                  h += (h+i-j+b+l)%100;
                  j -= (d-l-h+j+k*m-e-k+d)%100;
                  c  = (h+g+h-m)%100;
                  h += (b*j*c-m*b+e)%100;
                  a += (k*d-g+k)%100;
               }
               break;

               default:
               {
                  c += (m+j-i+j*i)%100;
                  l += (j+i+l-c-f+j+h)%100;
                  b += (l+j-i-f*e*f+f+k+g-b+b)%100;
               }
               }

               a -= (i+i+h*m-a-e-g*j-j+b-g)%100;
               e += (f-m+i-c-k*k*m-c+f-b+i)%100;
               e -= (k+a+k*m+d)%100;
            }
            e += (h+h*h+b-g*j+h+k-d+k-j)%100;
            k -= (d+e)%100;
         }
         c += (b+i)%100;
         n += (e+f-a*a+f*i*h)%100;
      } while( ++DOcnt[43]%5 );
      n += (e+m+n-e+n)%100;
      i -= (f-b+d)%100;
      m -= (j+j+g-k*n+c*k*c-m-d)%100;
      n -= (a-j+i+l-l-i*m-c-j)%100;
   }
   i += (e*l+n+l-n+g+h+k)%100;
   d -= (f*h-a*g+k+c)%100;
   m  = (f+d+d+j*b+i+h-h+h)%100;
   b -= (g+m)%100;
   i += (e*j+b-i+i-h+l+j-c+b-g*h)%100;
   l += (m-f-b-g+g-h-j)%100;
   e += (h-m*k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F21(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[47]%2 )
   {
      e += (c-i+b-b*e+l-d*l-b+i*b+f+l)%100;
      b += (f+f-j-m-n-j-j+m)%100;
      b  = (n-m)%100;
      c += (b-h-l*f*f-e*d+j)%100;
      i += (b+d)%100;
      b += (n+i+g+m-a-l-g+g+l*b)%100;
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
                  j += (k*j-c+j*c+h+k-i+l-e-c-m+e*i)%100;
                  e += (f-h+c+b-j+j-i-n)%100;
                  k -= (f*l*n-k*l+b+c+i+h-c-f*i)%100;
                  a -= (j*m+f+m)%100;
                  f -= (d+e+n*g*b-f-e)%100;
               }
               for( ; ++FORcnt[68]%5 ; )
               {
                  f += (a+c*b-i*j-n-c-j-j*m+k-m+h+k)%100;
                  d -= (n*c+k+e)%100;
                  g -= (d-l+n*f)%100;
                  n  = (a*f)%100;
               }
               if( ++IFEcnt[45]%2 )
               {
                  a  = (b*n-h)%100;
                  l -= (k-g)%100;
                  a -= (a+e+a+i+d-i+j*f-k-i*f-n-j-m)%100;
                  a += (b+c)%100;
                  m -= (h+g)%100;
               }
               else
               {
                  m -= (i-h)%100;
                  f += (j+g-c+n+b-i-f*k-n+e)%100;
                  f += (f+a*m*i+k*c+i-f*g-l-i-h+e)%100;
                  a -= (h+a-h+a+e+d+d-h)%100;
                  l += (d-l+l)%100;
                  h -= (m-g*g-m-a-c+k+d*i)%100;
               }
               while( ++WHILEcnt[45]%5 )
               {
                  d  = (k-c)%100;
                  j += (f-a*i-n-a*i+b-k*e-k-h+f)%100;
                  f  = (j*b+f)%100;
               }
               do
               {
                  c += (h+h-i)%100;
                  e += (c*n-h+k+i*n)%100;
                  f += (f*d*h+n-i-l+l)%100;
                  b += (m*k+g)%100;
                  l  = (m+d+l-b+a-n+i)%100;
               } while( ++DOcnt[46]%5 );
            }
            a += (n*d+d+c*l+c+k+j)%100;
            for( ; ++FORcnt[70]%5 ; )
            {
               
               switch( ++SWcnt[23]%3 )
               {

               case 1:
               {
                  m += (k-i+a*g+g-b-c*i-g-n-l+b+k)%100;
                  m += (j-m-e*i+h+l-l+a-c+h+n+j-e+i)%100;
                  h += (j-d*i+h-m-c)%100;
                  f -= (d+h+f)%100;
                  d += (n-d-m*n+n+b-d*i-j*h+a+i)%100;
                  a += (n*d)%100;
               }
               break;

               case 2:
               {
                  c -= (i-h*a+e-a+i-f+j+c-g-k)%100;
                  m -= (m+e-c)%100;
                  h  = (e+h)%100;
                  f -= (j+d+m+a+i)%100;
                  i -= (b*j+e*d)%100;
               }
               break;

               default:
               {
                  m += (k*j+m*l-h*d-b-k*h-a+i+h+h)%100;
               }
               }

               if( ++IFcnt[35]%10 )
               {
                  h += (e-j*n-c+c+a*f-n-d-b-g)%100;
                  n += (b-d+h-e-l*i-h-b+g-f+h-n)%100;
               }
               if( ++IFEcnt[46]%2 )
               {
                  g -= (n*e*n+e*f+i*c*e+g-g-f)%100;
                  a -= (e*i*c+n+a*d-n+g-b*k*f+b*a*n)%100;
                  k -= (l*i+f+n*b+n*d*l-l-a+h*h-f)%100;
                  c += (i*b-k-f+h)%100;
               }
               else
               {
                  h += (g+m*b+e*b)%100;
                  c  = (e+n+m+j-a-f-b+b*d)%100;
                  l -= (g+i-i*h-f+f+n+b-f+j-c+j*m)%100;
                  n += (f*j+c-e+d)%100;
                  m  = (a+f)%100;
               }
               l += (b+i+a)%100;
            }
            a -= (m+h*i-c-b+k+d-j-e-l+e-n+e)%100;
            e -= (n*e-a)%100;
            e += (f+n-g-n-j+b+j-k+n-d-e+f+f)%100;
         } while( ++DOcnt[45]%5 );
         d -= (m-j-h-d*k-d-n)%100;
         k -= (b+a*k+b-b+j)%100;
         f += (l-l-k*g*n*i)%100;
      }
      b -= (h*k*k-k+b)%100;
      a += (i+e+m+e-a-a+k*e)%100;
      f -= (k-g-i-j-l-m)%100;
      i += (m*a-l+j-d+l+i)%100;
   }
   j += (j+f+c-l-b+e*j*e*l-f)%100;
   e += (d+m-c*k-i-f+a-j*l+n-k*i-n-a)%100;
   j -= (f+j+k-h*l+b-g*e+d+k*l+a+e-l)%100;
   l += (a+h+j-f)%100;
   g -= (j+g+h+l-e+j-e+h-m)%100;
   k -= (c+j+c-b*l)%100;
   f -= (k*b-i*i+l*c)%100;
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
                  n -= (j-n)%100;
                  h -= (n+c+j-f+m+e+h-e-h*n)%100;
                  h  = (b-e+e-j)%100;
                  a -= (i*h-c-m-b)%100;
                  i += (c*i-m*h+i*h-n*d+f+m+d)%100;
               }
               else
               {
                  k -= (n*l*i+c+m*d*c+k-d+c*e)%100;
                  n += (b-c-c)%100;
                  h -= (e*i*j-h-b-k-e-k)%100;
                  n += (d-j+n+i)%100;
                  m += (i+n)%100;
                  g -= (g+h)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  g -= (l-f+a+e+f+j-g)%100;
                  n -= (j-c+f-b-h-f)%100;
                  c += (h-f-j+d-b-i*l)%100;
                  a  = (a*e-f+c+c+f-i+f+g*e-c-k)%100;
                  a += (k+a-d-j+m+g+m-k*k-l-j+l+j)%100;
               }
               do
               {
                  f -= (n*f*l-g-l+m+g+b+l-b-f+f)%100;
                  c -= (n+a+m-l-l)%100;
                  k += (a+d-f+m+b+e+g)%100;
                  c  = (a+l+f*e+l-e+k*d*e)%100;
               } while( ++DOcnt[48]%5 );
               if( ++IFcnt[36]%10 )
               {
                  h -= (k+e-h*i+n-a-m+l+h+g)%100;
                  i += (a+i+j)%100;
                  d += (n*h)%100;
                  j += (m*h+l*b+i-a+e+e-n-a)%100;
                  k  = (a*n+d*e-h+b+j+b-d+j*a)%100;
                  m += (b-m*h+e+k*m-c-b)%100;
               }
            }
            h += (j*m)%100;
            for( ; ++FORcnt[72]%5 ; )
            {
               
               switch( ++SWcnt[24]%4 )
               {

               case 1:
               {
                  k += (m-l*l*e)%100;
                  d -= (h-b+g+i+h*h*j-e-h+d+a*d-b-k)%100;
                  n += (e-a+f+e-n-a-n*k-a*f)%100;
               }
               break;

               case 2:
               {
                  a += (g+f-l-e+i+j*c)%100;
                  j += (l-j-d-n*n-j)%100;
                  c  = (n*n*k+a*e-j)%100;
                  m -= (i*h-f-n-f+h*m-l-h)%100;
                  c += (h+k-f-c+e*a-c-n+j)%100;
               }
               break;

               case 3:
               {
                  i += (n*i-m-g-m+l+m*e*a)%100;
                  e -= (l+e*b-i+g+e-l)%100;
                  b += (h+g+g-k+j+a-c+h+f-l)%100;
                  h += (m*a+c-e*h*b-j-e-j*n-g-f-b)%100;
               }
               break;

               default:
               {
                  l += (c+f)%100;
                  h -= (d+k)%100;
                  n += (m-d-b-f+f*g+g*n+l+d-n-c*h-d)%100;
                  g -= (n+a+c-a-l*g)%100;
                  n += (c-n*d-h-a*k)%100;
                  e  = (k+i+i-k-m+j-h-j)%100;
               }
               }

               b += (e-k-m)%100;
               e  = (d*c-b*m+e*j+l)%100;
               l += (a+d+j*c-n-j)%100;
               a -= (c+j*b+d-l+j-h+a*k+g)%100;
            }
            c -= (m*i-n+k*g)%100;
            m  = (l*i*f*k-j)%100;
         }
         m += (d-a-f-f*b)%100;
         k -= (g+a*j-d-l-g-f*l*b+c+m-a-j*l)%100;
      } while( ++DOcnt[47]%5 );
      g += (e-n+b-e*a+d+c+k+l-m-m-m-b*i)%100;
      f -= (h*n+k+l*a-i+c-h+d)%100;
      g -= (n+i+m+f+l-m+k*h*d-l-m-n+n)%100;
      n -= (m+c)%100;
   }
   a += (k*f*e-b-m)%100;
   l += (b-a+m-f*b*c*n)%100;
   h -= (f+b*m*h+f+h)%100;
   n += (l+g-d-h-a+c*e+g-a)%100;
   n -= (j*m*d-h+m+d*f-c)%100;
   b -= (k+i-f+h-j+l+l-f+h+k+k+n+a)%100;
   j -= (f-m+l+j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F23(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[51]%2 )
   {
      h += (j*g+f-l+a-e*l-c+l+i+m+n+b)%100;
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
                  e += (b-i+b-g*n-i-g+a+m+e+k*j+c)%100;
                  n -= (f+i)%100;
                  g -= (e-b-a+g-i*f+n+a)%100;
                  d -= (b+j-a+c-m-g*n-a+m+d+g-l+l)%100;
               }
               for( ; ++FORcnt[74]%5 ; )
               {
                  f += (c+f+l-g*h+m*h-m+l-k)%100;
                  g += (c+l+n+g+l+a-i+f)%100;
                  b -= (b-n+g)%100;
                  e -= (g+i+l*a-d)%100;
                  i += (j-i-a+k-a+k+i-a-e+n)%100;
                  e  = (c+d-f*h-i*d)%100;
               }
               if( ++IFEcnt[49]%2 )
               {
                  c  = (f+m-c-n+k+e+f)%100;
                  j += (g*k*f-k*n*l+d+i+k-f*a+a-i+i)%100;
                  l -= (d-g+n*i+b-e-b-d+d)%100;
               }
               else
               {
                  d -= (h+c-c)%100;
                  g += (e+h+e+g+a*j+k*i)%100;
                  l -= (n+f)%100;
                  m += (b+f-g-n+n)%100;
                  n -= (l+j*l-f)%100;
               }
               while( ++WHILEcnt[49]%5 )
               {
                  g += (b*f-b*k+k*g+e-f*e+k-l-e)%100;
                  k -= (b*d-d-k*l+n-l+g+g-e-d+m+a)%100;
                  i  = (h-a)%100;
                  h -= (l*c+d-b*f-a*e+l)%100;
                  h -= (b+n*k+l+m+a*b*m+m-e+d+e)%100;
               }
               do
               {
                  b += (d-f-k*b+h-n)%100;
                  d -= (a+b-e)%100;
                  g += (n+c*h*c-c-d-k-g-l+c*h-k-a)%100;
                  h += (i+i+c+i+f+c-a)%100;
               } while( ++DOcnt[50]%5 );
            }
            e += (n-a+b+l)%100;
         } while( ++DOcnt[49]%5 );
      }
      for( ; ++FORcnt[78]%5 ; )
      {
         
         switch( ++SWcnt[25]%3 )
         {

         case 1:
         {
            if( ++IFcnt[38]%10 )
            {
               if( ++IFEcnt[50]%2 )
               {
                  m  = (m-d-n)%100;
                  l  = (c+h+n+n*d+e-f+i-h+e)%100;
                  h += (c-m)%100;
                  h += (n-e-k*j+m*l-b+m-l)%100;
                  d -= (m+e-h-a-e*c-j+e*d+a*n)%100;
                  g -= (m+e*g)%100;
               }
               else
               {
                  f -= (l*h-f-j-k-l)%100;
                  b += (l-f+i+g*l+c-e-d-k-l-h-h-b)%100;
                  h -= (g-m)%100;
                  n -= (m*h)%100;
               }
               while( ++WHILEcnt[51]%5 )
               {
                  b += (l+f-b+g+d-n+j)%100;
                  c += (k+d*k-m-b-k-k-n-h*g-c+h+k)%100;
                  a += (m*b-d+k-a+h*g*h-l-b+a+d+f)%100;
                  g -= (f-e)%100;
                  d -= (d-g*g+f-h-j-c*i+a-a-n)%100;
               }
               do
               {
                  i += (a*c-i+b-l+a*b+a-d+f)%100;
                  e += (g+c*d)%100;
                  f += (c-g+h+l*e-k+e-f)%100;
               } while( ++DOcnt[51]%5 );
               for( ; ++FORcnt[76]%5 ; )
               {
                  c -= (a-e*g-l-m-d-n+b-l+l-g-n)%100;
                  g -= (f+b*i*f*a*a*d-g+m-b-c+g-m)%100;
                  j  = (k+c)%100;
                  i  = (d-b+j*d+a)%100;
                  f -= (e-g-m)%100;
               }
               for( ; ++FORcnt[77]%5 ; )
               {
                  h += (n-j*b*j)%100;
                  n += (c+c-b+f-c+k+c+e*j+b)%100;
                  i += (f*m)%100;
                  c += (d+g-a*g+f*k-c+d-f-a)%100;
               }
            }
            a -= (e+m+d+c-j-k-g)%100;
            f -= (j-j-i-c+f+h+g)%100;
            a += (m+n+j)%100;
            a += (k*j)%100;
         }
         break;

         case 2:
         {
            i -= (m-g+l*j*c+g*h-h-k-a-m+h)%100;
            j += (n+c-n-n-m-b+b-j-c+d-l*b-c)%100;
            j += (l-f-d-c-l*i+j)%100;
            j  = (l+c*n+a-a-a)%100;
            f += (j-i+i)%100;
            m += (i-b*c+k-d-l)%100;
         }
         break;

         default:
         {
            i += (d-b+i+d)%100;
            b -= (m-b+n*c-l-h-c+l+f*f)%100;
            h += (b+d*k+c*m*g+j*i*g-k+c-i+i+k)%100;
            f += (h-j-l+f-e*m-c*e)%100;
            l -= (a+n*e)%100;
         }
         }

         j += (l*f+m+j-k*h+m-j+d+c+n*f*n+l)%100;
         g -= (d-n+c-h+c-j-c)%100;
         j += (e+c)%100;
         a -= (e-c-b)%100;
         g  = (f+h)%100;
      }
      j -= (f-a+a+c-j-d+g*c-b)%100;
      h -= (e*k-d)%100;
      c += (i-n+i+b*n+f-j+a-i)%100;
   }
   k -= (d-d)%100;
   f -= (c*e-b-b-n+m)%100;
   n -= (a*j*k)%100;
   a -= (h+c-k-d+m+e*d*l-i-f+l*i+d)%100;
   i -= (c+k*e+c+l+h-e-c*b+c)%100;
   k -= (a*e+k)%100;
   k += (j+a-f-f+d+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F24(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[53]%2 )
   {
      i += (g-d+e+k+b+l)%100;
      l -= (h+k-m)%100;
      i += (i-n+l+j-e)%100;
   }
   else
   {
      while( ++WHILEcnt[53]%5 )
      {
         do
         {
            if( ++IFcnt[39]%10 )
            {
               i -= (n-n+h-j+n*j-d+a+c-l)%100;
               for( ; ++FORcnt[79]%5 ; )
               {
                  e -= (d-c)%100;
                  h -= (f-g+k*e+l)%100;
                  g -= (d+f+i+f-d-g-n*b-k)%100;
                  i += (f*f*m+e)%100;
                  j -= (j+e-n+e-l-g*i*c)%100;
               }
               
               switch( ++SWcnt[26]%3 )
               {

               case 1:
               {
                  d -= (b*a+a+n)%100;
                  j += (f-f+n)%100;
                  e += (a+c-e-n+b-i*c)%100;
               }
               break;

               case 2:
               {
                  f -= (j+a*f+m-j+k*l*e-e)%100;
                  f -= (m-n+n*b+c*l-m-l+i)%100;
                  j += (c+e+b)%100;
                  g -= (i*l*l-a+n-n-d+e+k*m-l)%100;
                  d  = (f+h-d+j*a+l+a+n-n-j-k*f-a)%100;
               }
               break;

               default:
               {
                  n += (f-n*f*b+g+i-c-g+l*l-m-k)%100;
                  j -= (e+c*n*i+n-b-c-h*d)%100;
                  h -= (g-c*a+h+h+b+k+m*f-d-c-l-a)%100;
                  f -= (b+c-h+d-c+g-n-j-g)%100;
               }
               }

               if( ++IFEcnt[52]%2 )
               {
                  h -= (m-c)%100;
                  b  = (j+f)%100;
                  g += (l*m)%100;
                  j += (n-j+k-a-n+f-n+c)%100;
                  c += (j-g+g+b+n*i+a+h+g)%100;
               }
               else
               {
                  g  = (f*k+f+i)%100;
                  a -= (f-n*m+d)%100;
                  f += (l+c)%100;
                  l += (h-f+d-h+i-j*e)%100;
                  n  = (j-k*g*l*f-f+i*k-b)%100;
                  b -= (i-d-e*n+e+m+l+k)%100;
               }
               while( ++WHILEcnt[52]%5 )
               {
                  m -= (c+a+i+e)%100;
                  i -= (f*c-e-a-b+k-b-h)%100;
                  l += (l+k*k-n+n)%100;
                  d += (h+d+g-k)%100;
                  e  = (c*e-l-m+g+k)%100;
               }
               do
               {
                  m += (f-d-c+e+h*b-g-n)%100;
                  f += (d-e)%100;
                  e += (k*c-n+a+a*f+k-b-f-e-m)%100;
                  m  = (l*j*n-m-d*e-g-k+k)%100;
               } while( ++DOcnt[53]%5 );
            }
            for( ; ++FORcnt[80]%5 ; )
            {
               if( ++IFcnt[40]%10 )
               {
                  l -= (h+m+e-d-n-c*a+n+j-l)%100;
                  a -= (m-d+f+a+n-e)%100;
                  d -= (i-n)%100;
                  d  = (j-h)%100;
                  j -= (d-a+h+h+l-a-l+h*l)%100;
               }
               i -= (l-n)%100;
               i -= (i*e)%100;
               a  = (f+a+b-e)%100;
               d += (h-a-i*m+h*g*b)%100;
               n -= (i-c)%100;
            }
            k -= (l+k+n-g+i-l-d*c+n*a+c-i)%100;
            n  = (j-k-e-k+e-a-h+j-k*c)%100;
         } while( ++DOcnt[52]%5 );
         m += (h*i*d*n+b+k*e-b)%100;
         l += (c*b*d*a-d)%100;
         n -= (i*d-c+d-j+a+l-d+a+m+k*m-a+k)%100;
         g -= (l+k+c+j-d*n+h*c+k+i)%100;
      }
      a += (l+g+h-f+b+j+a)%100;
   }
   a += (c-e+f-j-h-j)%100;
   g += (m*m+a*l-f-m+h-f)%100;
   g -= (c+g*i)%100;
   a  = (c+a*e)%100;
   a -= (d*g*g+l+a+l+i*e+j-h*n+d)%100;
   i -= (k-k+f-a-m-d-g+a*n+k+j+g-e*j)%100;
   k  = (b-d-d-m+e*h-f+g+c-b+l+k-l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F25(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[84]%5 ; )
   {
      if( ++IFEcnt[56]%2 )
      {
         h -= (e*n+n*l*k+l)%100;
         e += (m+j*f+f+d-n)%100;
         c += (k+b+c+b*n-d*b*a-i*n*k+e-h)%100;
         d += (e*l-l*a+n*e-j*f+g*l)%100;
         c -= (e*h-b+e-f+l-c-l-n-f+b)%100;
         b += (h+k-k-g+j+k-j*j+c-h*g)%100;
      }
      else
      {
         while( ++WHILEcnt[55]%5 )
         {
            do
            {
               b -= (f+a+h-c-k-n-e-e-a-g+b)%100;
               for( ; ++FORcnt[81]%5 ; )
               {
                  c += (b-d-e+d-l+k*e+h+b)%100;
               }
               
               switch( ++SWcnt[27]%3 )
               {

               case 1:
               {
                  m -= (h+h-h+a-g-f-i+a+g+g-g)%100;
                  c  = (i*a-b+n*l-e*c)%100;
               }
               break;

               case 2:
               {
                  k -= (f-k*n-g*h*j+c*d+i*l+n-m*e+j)%100;
                  l += (f+b+l)%100;
                  k -= (m+a-b*a+n+d*l)%100;
                  c += (f+g*f*f-a)%100;
                  c -= (a-c*e)%100;
               }
               break;

               default:
               {
                  e += (i*d)%100;
                  g -= (m+l-c-h*k+g-d+j-e+d)%100;
                  n += (g-b+j+j+b+k+g+a*e+c-a)%100;
                  a  = (e+d+m+i*k-n-l-j+c+m*m-f-n+m)%100;
               }
               }

               if( ++IFcnt[41]%10 )
               {
                  g -= (k*a)%100;
                  d += (k+k-c+f-j)%100;
                  b -= (e+n)%100;
                  f += (n+d-m-h+l-j*e-c+b-b+h-i+m+j)%100;
                  m += (k+f+n+d*k*h+m)%100;
                  f += (a+n)%100;
               }
               if( ++IFEcnt[54]%2 )
               {
                  b -= (k-e-h)%100;
                  a += (f*f-e+b+g+b+l*i+a+h-g-a*j)%100;
                  j  = (d-i*m+n-k+h*g)%100;
               }
               else
               {
                  e -= (b+l-i+d*b+j+g+n)%100;
                  j += (j+i)%100;
                  i -= (a+d-n-k-d*n-j*l+i-g*f+d)%100;
                  l -= (l-j-i*j*j-l-j+g+e-m*h*k+e)%100;
                  b += (c+h)%100;
               }
            } while( ++DOcnt[54]%5 );
            while( ++WHILEcnt[54]%5 )
            {
               do
               {
                  h += (i*b+n+k-m+k-n*h-j+n)%100;
                  h -= (f*m-f*j)%100;
                  c -= (m+l)%100;
                  b += (b+k*g-n-b)%100;
               } while( ++DOcnt[55]%5 );
               for( ; ++FORcnt[82]%5 ; )
               {
                  b -= (l+k*i-d)%100;
                  j += (l+n-l*n-j*f+j+n*f-j-l-d+f-d)%100;
                  h += (a+m+m+b-l+e+m*h-a-n*h+m+b*c)%100;
                  b -= (j+j-c-c+l+h+c)%100;
                  e -= (c-b-n-h+l*g)%100;
                  d += (i-n)%100;
               }
               for( ; ++FORcnt[83]%5 ; )
               {
                  f += (j-n+f+k-a+f+j)%100;
                  f += (m-f-f+k+m-m+h)%100;
                  l -= (a-h*f-n*b+e*h-n)%100;
                  g -= (k+l)%100;
                  g -= (d-n+b+e+i+m-h-g-h*h)%100;
               }
               if( ++IFEcnt[55]%2 )
               {
                  i -= (c-k+h+n)%100;
                  b -= (b+k*m*k*i+l-l+c+c-i)%100;
                  d -= (a-f+j)%100;
                  m -= (b+b*d+j-a)%100;
               }
               else
               {
                  l += (g+e-c+f)%100;
                  l += (c+g)%100;
                  n += (e-l+g+i-a+e*j-e-f+e-n-b*j+l)%100;
                  c += (a+k+n*a+b+h-g+k-h-j-m*l)%100;
                  j += (j-h+m*n-a-c+m-c+l-e-g+f)%100;
               }
               a -= (d*d)%100;
            }
            m += (g+d+b+k+f+f-g-b-b*i)%100;
            f += (d*i+f*n)%100;
            j += (i-c+i)%100;
            e -= (l+i+j)%100;
         }
         g += (l+k-k+l+k-c+f-h+i-c-a+d+g+e)%100;
         k -= (b-l*b-b+h-a+k*n+c+b-n*i+b+b)%100;
         c += (c+k-c*n+k*g-i-a*j*g-n)%100;
      }
      f += (g*j+b-d-i+b+g+l*j)%100;
      d  = (g+g+k-e-d+a+m-a+l+e+g*a-i)%100;
      m += (h*f*i)%100;
      j -= (c+h+c+l-g-f-g+d+a-a+g*m*l)%100;
   }
   f -= (f*j-c-l)%100;
   f -= (m-i+e)%100;
   i += (d*c+d-f+j+l+l+j-i-e+e+d*n+a)%100;
   c -= (d+j-i*m-j*l+e-b)%100;
   l += (j-c*g)%100;
   i -= (i*e-h-h+c-e+a-e-g+f)%100;
   e  = (n*h*l+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<62; I++) IFcnt[I]   =0;
   for(I=0; I<83; I++) IFEcnt[I]  =0;
   for(I=0; I<41; I++) SWcnt[I]   =0;
   for(I=0; I<83; I++) WHILEcnt[I]=0;
   for(I=0; I<83; I++) DOcnt[I]   =0;
   for(I=0; I<124; I++) FORcnt[I]  =0;
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

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      while( ++WHILEcnt[56]%5 )
      {
         do
         {
            if( ++IFcnt[42]%10 )
            {
               j -= (n-l+h+f+h-b+k+l-b+d-k-e-m*m)%100;
               for( ; ++FORcnt[85]%5 ; )
               {
                  g -= (a+j-k-j-b+l-k+f*m)%100;
                  c += (c-d+n+n)%100;
                  n -= (m-n-h+a+m+m+k)%100;
                  l -= (c+k-n-b+j)%100;
               }
               
               switch( ++SWcnt[28]%3 )
               {

               case 1:
               {
                  d -= (c+m*b-k-b*n+f*k*m*k-n+f)%100;
                  g -= (d-h+k+j+a*j-c-g-h+d-m*n+k)%100;
                  l -= (e-f+a+k+g+n+c*g+d*l-i)%100;
                  k -= (n-n-e*i-n*f)%100;
                  d -= (g-h)%100;
                  f -= (g*e)%100;
               }
               break;

               case 2:
               {
                  j  = (m-e-m+a+g+g-b-c*b)%100;
                  h -= (n-l-h+c+d+a-c-j)%100;
                  a += (n+e)%100;
                  k += (g+e)%100;
                  a  = (l+f+j+c-n+l-k-a+a-c+i+g-n)%100;
               }
               break;

               default:
               {
                  l -= (e*k)%100;
               }
               }

               h += (h+g-a*h-i-l*h)%100;
               m -= (h-n-g+h+g-n-i*a*e*g-c+b-m)%100;
            }
            j -= (j-k+j+l+b-e*k-a*l+f*n-j)%100;
            c -= (c-k+i*g-k*h+g)%100;
         } while( ++DOcnt[56]%5 );
         l -= (f*a+l+n+l-j*d+b-e+b+n*h+a-j)%100;
         h += (i+l*b-n+b+b-g+c-h-i+h)%100;
         n += (n+m+d-i+c*g-m-b-i-k)%100;
         f  = (j+k+a+e+a*e-j-g+c*d+n-d-d+n)%100;
      }
      g += (c-c-d*n+m+j+d+g-h*g+a-g-j-m)%100;
      n += (a*h)%100;
      m += (c*a-d*j-h+a)%100;
      h -= (n+i+m-k+k-i-e)%100;
      a += (j-n)%100;
      c += (m-a)%100;
      h -= (l*h+j-f-h-i-h+l-n-l-c*f+a)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<43; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 43 << "   Dynamic = " << sum ;
   for(I=sum=0; I<57; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 57 << "   Dynamic = " << sum ;
   for(I=sum=0; I<29; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 29 << "   Dynamic = " << sum ;
   for(I=sum=0; I<57; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 57 << "   Dynamic = " << sum ;
   for(I=sum=0; I<57; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 57 << "   Dynamic = " << sum ;
   for(I=sum=0; I<86; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 86 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}