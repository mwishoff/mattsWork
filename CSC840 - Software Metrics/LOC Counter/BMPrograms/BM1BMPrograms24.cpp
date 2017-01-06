#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[115],IFEcnt[153],SWcnt[76],WHILEcnt[153],DOcnt[153],FORcnt[230];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         e -= (j-e+d-c-i+b-g-e*a*j-d)%100;
         h  = (i+j*a*i+g+j*b*k)%100;
         l += (c*f-g*c+j+a-k+k*d*c*m-h+i+b)%100;
         j -= (g+e*d+g-j-g*c)%100;
         m -= (i+f)%100;
         j += (j+f+f+f+k*h+g*e*b+m)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  j += (j+l*d-e+d-k*n-g)%100;
                  k += (g-e-g-d+h*i-f+n*j)%100;
                  i += (e-j+l*k-i)%100;
               }
               a += (j-f-a*i+a-m*i-e-b+d*c)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  f += (j-i-h*b+d+g*j*g)%100;
                  b += (m-e-k+j-b+i)%100;
                  c -= (b+e+n+e+a-m-f+j-h+e*m+l-g)%100;
                  a -= (f+m-f*e-k*i*h+a*e*g+h*l*j)%100;
                  f -= (m*m)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  k += (i+b-f-h*b-j+d*h+c+b+e+e)%100;
                  h  = (n-k*j+a)%100;
                  k -= (f*e-j+d-m+g*l-n+b+j+f)%100;
                  e -= (d*d+k+l-d+j-f+a-d+g)%100;
               }
               break;

               case 2:
               {
                  a -= (m+e-b)%100;
                  e -= (f*a*n+a-k+f+g-c)%100;
                  c -= (n-e+l-h*m-l)%100;
                  a -= (f+k*c+m-g+m+i-c)%100;
                  h += (k+b+k-j)%100;
                  l -= (g*f)%100;
               }
               break;

               default:
               {
                  b += (k+m)%100;
                  c += (f+d)%100;
                  f -= (h-d+m-l)%100;
                  a += (j+l+f+h+m+l-c)%100;
                  g -= (e-m)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  e -= (a*m*e-k*i*c*i)%100;
                  e += (c+l)%100;
               }
               else
               {
                  l -= (l-h-l+c*e+i+j)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  n += (m*n-h+b*e)%100;
                  b += (n+k)%100;
                  n -= (m+a-h*b+l+k+a+h-m+n*i-b*n+a)%100;
                  l -= (i+k-h-d*l+e-l*a*i)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  g -= (m-n*l-m-f-c-d-h*g-m+a)%100;
                  a += (k-f)%100;
                  d -= (a+l-e-b+f+l)%100;
                  e += (j-m+c+e*a+a*d)%100;
                  e -= (l+b-m+g*a)%100;
                  b += (n*a)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  f -= (m+k-j-d-j)%100;
                  e += (m+l*k+n-g-m-b+b+d-k)%100;
                  e -= (b-n-d*j*a-g-d*g-n-j+g+k)%100;
                  l -= (j-i+d*i)%100;
                  j -= (e-b*j-d*n-g+d*e)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  k += (i-k)%100;
                  a += (n*j-h*i-d+i-j*b-a+k)%100;
                  k += (l+j*l)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  g += (f+j)%100;
                  i += (k+e+m*g*b)%100;
                  c += (e+j*f-j-d*e-e*n-i-i+j-a+g+h)%100;
                  m -= (c*g-e-i+j+i-g+i)%100;
               }
               else
               {
                  h += (d+h)%100;
                  h -= (m-a-k+j+e*f-i-n)%100;
                  d -= (n+e+d-l-h-d*f-k+g-h-n+f)%100;
                  d += (n*n+b*d-g*c)%100;
                  h += (a-a-l+k-f*k-i-a+i)%100;
               }
            }
            f += (j+k-d+e+j+k+m-d-c*n*j)%100;
            b += (m+f-c-g+m)%100;
            m += (i+a-m-b+f-m)%100;
            g += (d+d)%100;
         }
         h -= (e-c+b)%100;
         a += (l+h-b+g)%100;
         f += (j*c-k-j-g-i-n+d-m)%100;
      }
      d  = (g+h*f)%100;
      d += (c+f+c-e*n+h*f-b*k*a-e)%100;
      h += (j-g-h-h-d+n)%100;
      f += (k-j+n-a-a)%100;
   }
   d -= (k+n-j+d-i+a-b*c+c*g*e)%100;
   d -= (l+d+k+f+k-e*n+e+h-h+l)%100;
   a -= (e-n)%100;
   f -= (n-c-g-e)%100;
   f -= (j-e)%100;
   d += (k-b)%100;
   i  = (l-n+d+k-g-m*c-j)%100;
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
         l += (k*i+k-e-h)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%3 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  c += (b+m+a-m-e+h-b+m+m+l*i+c-a)%100;
                  g -= (n+n-f+j*g+a-d-c*l-d-e+f)%100;
                  l -= (k+f-f-i-e+l-j+d-n-i)%100;
                  n += (g-d-b-k-n)%100;
                  l += (f+i+l+l-b)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  c += (n-g)%100;
                  d -= (f+a+j-l+n-d-g+d-g-l+f)%100;
                  d += (c+m)%100;
                  k += (k*b)%100;
                  j += (m-d+c+a*f+g)%100;
               }
               else
               {
                  e -= (m+n+a)%100;
                  a -= (i+c)%100;
                  j += (g+m-a+b*c)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  c += (c+a+k+n-l+g-m+e-l)%100;
                  g -= (j-m-n+l+c-j)%100;
                  n += (n*m-c*a-g+d+i-d-d+n)%100;
                  e  = (b+l-e-m+e-l-d-j*e-l)%100;
               }
               do
               {
                  k -= (n-m+a-k+c-f*n+f-l-l+f+c)%100;
                  g += (f+f*h+j-l-j-c*h*k)%100;
                  e += (i+n+d+j)%100;
                  h += (g+f*e+d+n)%100;
                  f += (e-n)%100;
                  e -= (g-k*m+g*n-b)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  n -= (d-a)%100;
                  f -= (f+c*g)%100;
                  i -= (l-b+n*i*l-k*h+l*e+n-h-m+e)%100;
                  i += (n*g-g-h)%100;
                  b -= (j+b-f+m+a-i+j+j+n+a+l+c-j-f)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  n -= (f+b+i-m-c-a-a+i)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  d += (m*m)%100;
                  b += (a+k+g+f+n*e-m-g+d+n+m)%100;
                  h -= (e+m*i-k*k+f-l+i*f-h)%100;
                  k  = (m+m-j+h)%100;
               }
               else
               {
                  h += (d+f-l+g+k+g+b+a)%100;
                  n -= (b*b)%100;
                  g += (n-c)%100;
                  j += (f+n-e+n-l-j-j+c+n+h-m-c+n-k)%100;
                  f -= (j+e)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  g -= (d+m)%100;
                  j -= (m+a*n+l+c-j-e-g-f+k)%100;
                  b += (k-m+f-e-b)%100;
                  a -= (b+h+l-c+f+n+j*k*l-f+n-g-h)%100;
                  i += (e+n+e+a-e+b+f+k-c-m+j-h)%100;
                  f += (c-i+a)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  h -= (g-n-n*l+l+j+k+n+k-j*m+b)%100;
                  g -= (k-b-b+c-f*e*j+c+f)%100;
                  f  = (f+k+j-k*c*e-c*g-m+h-k-e)%100;
               } while( ++DOcnt[4]%5 );
               a += (i+m*k+m*n+n+h-a)%100;
               l -= (c+i)%100;
               k += (l+b*f+h)%100;
               e -= (d-f+l+l*c+h+m*d+e-h+n)%100;
            }
            }

            l -= (j*d+k*j+b*n*m)%100;
            i -= (g-l)%100;
            h += (n+j+j+d+l-a+f*d-i+l)%100;
         }
         n += (l-g+h-e+j-j-h*f+h)%100;
         i += (e-b-l-j+c+a*l)%100;
         b += (g-c+b)%100;
      } while( ++DOcnt[2]%5 );
      f += (d+e+i*m+m+d+f-b-h)%100;
      j -= (k-h+f)%100;
      j -= (j-d*l+i+k+j-c+i-l+l*e-h+h)%100;
      k -= (i-i)%100;
   }
   n -= (g-b-d+a+g*l-m+c+a-b-g*d-n*n)%100;
   i += (b-e+g-a+f+k+j)%100;
   c += (a+c+b*a*e+c+f+g)%100;
   n += (k-n+c-h*a-a+g-k)%100;
   i += (h+b)%100;
   f += (e+k)%100;
   g -= (a+e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[5]%10 )
   {
      i -= (c-b)%100;
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
                  g += (b-e+h+l+j+a*h+i-g)%100;
                  f += (i*d-d-i*d*k+h-a-l+b+b+n+m-e)%100;
                  l += (h-k-h+k*m+k+d-l*a*n*j*a-i)%100;
                  l -= (h*l*c-l+i-k-e)%100;
                  l -= (m-l+j+l-c+k-i+n+h)%100;
                  g  = (f+e+i+l-c+n+h*c*h+d-j)%100;
               }
               else
               {
                  c -= (e-n-d-a*d-g-m+j+i+i+m+m)%100;
                  d -= (l+h*g+l+n+j+b+i+n)%100;
                  i += (e-g-m+k+f*n)%100;
                  a += (i-b-g-e+g+l-n+c-h-a)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  h -= (a*i*a-d+f+d-f+k-i)%100;
                  d  = (c*l+f+d-m-f+n+l+j*h+d+d-m)%100;
                  c += (e*k+b+c-a+h+n-j*e-a)%100;
                  k -= (c+h+j+e+a*k+e+j-k+c-a)%100;
                  g -= (j-f-j)%100;
               }
               do
               {
                  c += (l+a-d+m-c+m+a+j+g*m-a-a)%100;
               } while( ++DOcnt[6]%5 );
               b -= (g*g+m*e-a+l-j+e+n-b)%100;
               for( ; ++FORcnt[9]%5 ; )
               {
                  g -= (l+h+c+k-h-i+c+l-b)%100;
                  g += (d+j+d-d-d+b-h+a*e-m*g*m)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  d += (k-e-i*e+g-k-i+k-e+l-j*c-g)%100;
                  h -= (c+c)%100;
                  a -= (b-k+d+l+l+n+e-k)%100;
                  j -= (b*f*k+b)%100;
                  l -= (b+m-n-n-h+f)%100;
               }
               do
               {
                  e -= (f+l+b-h-n+k)%100;
                  i += (e*h*a)%100;
                  i -= (j-j-b*k)%100;
                  b += (d-i+e+l+m)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  a += (j+c)%100;
                  l += (h-j)%100;
                  k += (g-l*i+i-c+i+m*m-h-m)%100;
                  d  = (f+b)%100;
                  m += (m+e+e+a-h+m+a)%100;
                  l -= (n-d+j*a-g-f)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  a -= (a+c+a+e+n+n-a+b+a+a-k-g)%100;
                  l += (n*d+b)%100;
                  e += (k-d)%100;
                  k -= (m+a+n-i)%100;
                  c += (n+m-f-a-i-h-n-d-l+j*g-g)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  b -= (j-c*l+g*a*c)%100;
                  f  = (n*d*g*k)%100;
                  l -= (j*n-m-m-m-e+i-h+d-m*g+a)%100;
               }
            }
            
            switch( ++SWcnt[3]%3 )
            {

            case 1:
            {
               if( ++IFcnt[4]%10 )
               {
                  e += (g-l+b+l-e-i+n-e+f-e-a+d+b)%100;
                  e += (a*i*m-c*i-i+d*c*k+m*e)%100;
                  g += (h-l+j-j-h+n+c)%100;
                  h -= (g-f-b+f+j+h+i)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  g -= (i-l-d+n*n+j*e-c+l-g+f+j-k-e)%100;
                  k  = (h-g+e+d+f)%100;
                  d  = (f*c-j+a*m+f+f)%100;
                  h += (f*b-l+n-l)%100;
                  a  = (m+c-l+i*b+a-j+e*k-m*k+l+a)%100;
               }
               else
               {
                  e -= (g+n*m-l+m-j-b-b-d+c-f-l+h)%100;
                  a += (j+h)%100;
                  h  = (l+c-g*n)%100;
                  b -= (e+h)%100;
                  k += (c+f+n+n+j-k-i-e)%100;
                  g += (c+b)%100;
               }
               e += (k-e+c+n+c*h-g-l*g-m*k)%100;
               c -= (i+a*k-m+f+h+a)%100;
               f -= (k+b+j+j-b-c-c-n)%100;
            }
            break;

            case 2:
            {
               d += (e+e-m-g+c+a+n)%100;
               c += (i*d-d-e-n-m*k)%100;
               h -= (f+h)%100;
            }
            break;

            default:
            {
               c += (a-j+h-n+e-d+b+d+k-n-e+e-d)%100;
               j -= (k+i+g)%100;
               j -= (h+c*m*n*g-h-a-a+b-b+j+n)%100;
               j -= (g-e)%100;
               a += (c-f*f-d-n+m+b*n)%100;
            }
            }

            l += (m+m)%100;
            g -= (e-m-n-n*a-b*b+h+h*n-m+m*a+i)%100;
            j -= (n*c+f*d+a)%100;
            f += (a-h-l*g+c-b)%100;
         }
         break;

         case 2:
         {
            m += (k*k*l-f-h-n-j+m+g)%100;
            m -= (f-j+n-d+j+j-g-h-f-a-d)%100;
            g += (e*g+g)%100;
            e += (j-k+d+k*e+h+j+l+l-d*a+c-m)%100;
         }
         break;

         default:
         {
            k -= (d+e)%100;
            j -= (l*f+e+i)%100;
            l  = (b*h-b*n+f*n+i*f+n+n)%100;
            k += (k*n+l+j+g-d+a)%100;
            e += (j+a*c-m-f*a-m*h+i+b*i+k*d-c)%100;
            j -= (e-j*m+a+c-j)%100;
         }
         }

         h += (f+n+g-d+l-b+n+m+g*n)%100;
         m  = (k-m+l+d+b+d)%100;
         i -= (g*b-i*c-m*f*a-j-l)%100;
      }
      d -= (g-d)%100;
      l -= (g*j-n+j+l-m-e*j-k)%100;
      l += (m-g-l+h+l)%100;
   }
   f += (d+e+a-a-k+f+l+e+f-b)%100;
   i += (a+h)%100;
   m += (l-d-c+i+h+d-d)%100;
   h += (j-b+n-b-a-d*m+g-l*e)%100;
   m += (d+l+a*h*i-n)%100;
   b += (b*c+l-h+h-n-f)%100;
   i  = (c-n+b*a-a*c)%100;
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
                  f += (n-l-m+i+h-h+f*k+n+k*c*a+b+n)%100;
                  d -= (j-l+b+b)%100;
                  f -= (m*f-n)%100;
               }
               else
               {
                  h += (m+k*k)%100;
                  b += (h-g*n+f-h-d+f*i+i-j+m)%100;
                  l -= (c-d-l+k*l+e-g*g-i*j*j+a+e*d)%100;
                  h -= (a-k+a-l-k)%100;
                  l -= (g-i+l*j*i+f-n-g+m+i)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  d  = (e-j)%100;
                  l -= (m*e)%100;
                  l += (d+b)%100;
                  g += (j-g*b-f-h+a*d+i*f-n+n-c+g+a)%100;
                  n += (b+j*k-h)%100;
               }
               do
               {
                  e += (e+l-a-c+m)%100;
                  i += (f-e+b+l)%100;
                  i += (e*l-l+g*k+c+d-c+b)%100;
                  b -= (d-e-m*e-b+d+j+m+a-e+b+k)%100;
               } while( ++DOcnt[8]%5 );
               if( ++IFcnt[6]%10 )
               {
                  g += (l+g)%100;
                  l += (c+g)%100;
                  j -= (d*g)%100;
                  d -= (h-c-f)%100;
                  l += (f-h-l+d-g+j+j*b-b+b+e-a+n)%100;
                  g += (l+n)%100;
               }
               l  = (c-f-m*d+h+c+f)%100;
               for( ; ++FORcnt[11]%5 ; )
               {
                  d += (l+l-e*l-g-a-c*j-e*h-f)%100;
                  g -= (k+i+i*g+c+c)%100;
                  h += (g+a+c-g+f+e)%100;
                  c -= (f-i+j*d*f*g+a+n-l-k-g+m+k+j)%100;
                  i += (i*f-c-c)%100;
               }
            }
            
            switch( ++SWcnt[4]%4 )
            {

            case 1:
            {
               m += (g-f+j+d-a-d+h*g+d+b)%100;
            }
            break;

            case 2:
            {
               k -= (i*c-n+b*j*d-n)%100;
               a -= (i-k+l-n+i-b-i-d-i*k+a*g-h)%100;
            }
            break;

            case 3:
            {
               f -= (c-h+e+k-b-m)%100;
               f -= (j+k*f+b-k-m-h*j+c-a-m+h)%100;
               d += (k+d*g*b-k-e-f-n*g+e*a)%100;
               a -= (g+k-h+g+l+a-g*e*e+g-k)%100;
               n -= (g-i+e+h-g)%100;
            }
            break;

            default:
            {
               h -= (b*a+m-m*i+a+b+f-n+m+e+i+d)%100;
               j -= (f+k-g+n-a-k-m-k-i+l)%100;
               b += (i-j+c+c+j+n-k-m+i+a*h+a*i)%100;
               c -= (l-f+b-c+c*h+c*k+i+e+a)%100;
            }
            }

            e -= (f-g-g*n-c-l-n+d-b+g*h-e)%100;
            m -= (k-n-b-l-d+d-n+h+h+b+h*l)%100;
         }
         l += (m-b+g+n-l-l-f*g-e)%100;
         e -= (f-f+e-j*m)%100;
         a -= (n-n-g*g+i-m+f+l*c)%100;
         f += (g-m*n-a*l-b*k-l-l-j)%100;
      } while( ++DOcnt[7]%5 );
      b += (n-b+a*a)%100;
      k -= (e+f-m*b+c-k)%100;
      e -= (c-c+h-j*e*b*n*k-m*b-c+a)%100;
      e += (g+k+a)%100;
   }
   g -= (e-d-m+k-d*m+a+d)%100;
   f -= (a+k-f*i-e*e-n+n+j-j)%100;
   d -= (j-b+b+l*h+d+b*d-l+e-g+m)%100;
   d += (c+h-k-n+c-a-h-h+l)%100;
   c  = (m-f+h+c-e-k-m-i+c+n+f+e+n)%100;
   b -= (h*g*k+f-h+d-k+a)%100;
   f -= (l-l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[10]%2 )
   {
      b -= (e+m+k-k*c+c-k+k*c+i-a+j*c)%100;
      a -= (j*h+d-f-n*a+a+i-i-b)%100;
      h -= (j+g-l+b+b-n+e*e)%100;
      m -= (g*c+e-k+c*m+c)%100;
      h += (d*c+i*k+d-n+c-f-k-g+d-n)%100;
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
                  h += (j+n-b-m)%100;
                  e += (k*m-g*e-a-k+n-j)%100;
                  c += (b-h+k+j-k)%100;
                  c += (j*c-n+f+k-l+a-f+j+c)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  m += (h+g+j+g-f-m+c+g-m)%100;
                  c += (j-l*h+l*m*k*m-h+b+k+g-i)%100;
                  l -= (c*b*d-c)%100;
                  j += (e+a-c+a-n+g+l+k*j)%100;
                  i -= (g-k-m+h+l*j*g+h+b-b)%100;
                  b += (f-b+g)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  h += (d+j-k+d+h*c+g+a)%100;
                  n += (a-c)%100;
                  e += (j-c*h-i+j*g-i-n-e-e+d)%100;
                  l += (k-f)%100;
                  i += (b-j)%100;
               }
               else
               {
                  i -= (k+e*h-c+k+n-j)%100;
                  l  = (i*j+n+g-b-i)%100;
                  n += (n+c+n*m)%100;
                  d -= (k*c)%100;
                  d -= (f+h+k+a)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  k -= (j-l-e*f+m+j+f*i+i)%100;
                  f -= (k-n+j+i-a+d-b+d+i+g+i)%100;
                  a -= (j-d-i-m+g+e-k+k-c-l*e+f*e-m)%100;
                  c -= (a*g)%100;
               }
               do
               {
                  c -= (a+c-i+f-n*b-i-g+k+e-m)%100;
                  f += (n*k*j-m-b-j+n+g*j-k-i-d-n+f)%100;
                  a += (f-g-h+k-c+f+m*j)%100;
                  e += (b+n-l-m+e*c-k-c)%100;
                  i += (j-f+g+i*f-b+j-d)%100;
                  b += (i+d+l+i+k-n*g-j-g-g-k-c+m-c)%100;
               } while( ++DOcnt[10]%5 );
            }
            g -= (c-b-g*j+m-a+k*n+e+l+j)%100;
            for( ; ++FORcnt[16]%5 ; )
            {
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  h += (d+b-i-c-f+b+c+j+d+d+a*m)%100;
                  i += (j+h-c*h-g+l-k+j-m-c+f+n)%100;
                  m -= (k*k-g*e*g+l)%100;
               }
               break;

               case 2:
               {
                  g += (b-b)%100;
                  b -= (d*i)%100;
                  n += (b*l+n*f+j)%100;
                  k += (f+e-k*a-e)%100;
                  d += (l+n+d-e-n-f+g+d)%100;
               }
               break;

               default:
               {
                  l += (i+j)%100;
                  d += (n+m+h-a+e-m*h-i-j+e+j)%100;
                  e -= (a+m*b*i-a+a+g+a*f-l*d)%100;
                  f += (k+m+k*m+d+l-e+f)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  a  = (h-d+g+d-m)%100;
                  m += (n+c)%100;
                  g += (e+c*g-f+j+h-l-m*l*a*e+d*m)%100;
                  c += (h+i)%100;
                  d += (f+a-n-e*f+n+a+g-j-j+k)%100;
                  b += (e*d+i+m+l-l*m+b-m+e+k*c-n+m)%100;
               }
               g -= (b+k+l+f-f-d-b)%100;
               b += (b+g+g+i*j+a*b+l-f*j*l*f-l)%100;
               f += (c-m)%100;
            }
         } while( ++DOcnt[9]%5 );
         f += (a+j*j+m+n)%100;
         b += (i+j-f-i+l*l-b+k+j+m+j*h*a)%100;
         j  = (d+l-g*e+g-h+n+i+l*j-g-g)%100;
         c += (c*j*h-j+l-k+j)%100;
      }
      b -= (h-i)%100;
      m += (h*g*j+j-h+g*f+c)%100;
      n -= (i+m*k-i*d-i-f+i+a*b*i)%100;
      g -= (h-b-j-l+f+m+k)%100;
      a += (e+b*k+k*h-b-l-l-g)%100;
   }
   f -= (j-e*d-e+h-a+c*h-k-g*i)%100;
   m  = (n+m-a*m+a+e+j-c+d+e+j-d-n)%100;
   a -= (k*g+h*i)%100;
   b += (i-b*i-m*a-l-e+h-e*c)%100;
   h -= (k+g)%100;
   l += (g+b*k+l)%100;
   b -= (k-k-b-b-g*e*c-i+i*k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F6(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[13]%2 )
   {
      b -= (f+l-i+h-m*i-d+e*l)%100;
      c -= (l+m)%100;
      n -= (c*j+f-e-l-n)%100;
      b += (e-h*f+d)%100;
      f -= (a*n-j-i-a-b*f)%100;
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
                  b += (i*f-e-k*h-f)%100;
                  m += (h*i-m*e)%100;
                  n += (b*j-a-d-m-a-n+i+i-b+m+k-i*h)%100;
                  j += (g*m)%100;
                  e -= (c+c)%100;
                  c -= (g*a-f+e+f-d+a-l)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  j -= (n*g+e*f*g+g+i+k+n)%100;
                  l += (k*h+f-j)%100;
                  n -= (c+c+c-f+b-b-b-b-h*h*a)%100;
               }
               else
               {
                  a -= (i+m+n+l*a-h)%100;
                  b -= (m-n-f*h)%100;
                  f -= (d*e)%100;
                  a += (i*c-d+j-m*k+k*c+f-d-j*b-h-d)%100;
                  c -= (b-k+n*j+n+b*a+k-b-h-l+j)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  i -= (m-i+e+h-a+j+e-i*l-d+j+c)%100;
                  h += (a-i*g+h-b+l-m-j-b-i-a-e)%100;
                  k += (f*j-d-f-i+m+j+i-m+a+i*j-f+n)%100;
                  d += (k-j*a)%100;
                  k -= (e+f-a-j+k-m+k-m)%100;
               }
               do
               {
                  i  = (e+b-d+d)%100;
                  h += (a+c-h-a+i-c-n+c*e+g-c-n-j-e)%100;
                  e -= (c-g*n*k-m+n+f-h)%100;
                  i += (n-n+n+e+n+f-k-n-e-a+e-d+h-d)%100;
               } while( ++DOcnt[12]%5 );
            }
            if( ++IFcnt[9]%10 )
            {
               j -= (h-i)%100;
               for( ; ++FORcnt[19]%5 ; )
               {
                  m += (d+g-c+m+g)%100;
                  j -= (k+a+m+j*k+i+j)%100;
                  a -= (h+b*n*f*a+l)%100;
                  b += (g+n+b+e-e*j+n-m*f-d)%100;
                  d += (i-g)%100;
               }
               
               switch( ++SWcnt[6]%3 )
               {

               case 1:
               {
                  f += (n+c*l+c+g-c+a-k-d)%100;
                  g -= (m*h-k-f+b-b)%100;
                  d -= (n-f-m+m*d-c-k-j*d-f+a*e)%100;
                  m += (n-e-i+g+a-a*c-f-l+a-d+j)%100;
                  b  = (d*l)%100;
               }
               break;

               case 2:
               {
                  f  = (g+g-k+h-l+f-b+a+h-e-n+a)%100;
                  f += (a-k+e-k-g-c-c+i)%100;
                  m += (f-j-i+f-j*h-j+m-j)%100;
                  a -= (k+c*k+m*f+f+k+g+a+d)%100;
               }
               break;

               default:
               {
                  l += (i*j-i-e)%100;
                  n += (f-l-b+m+g+c+l)%100;
                  g += (j-i+k+e*k+l*h*d+f+n)%100;
                  i -= (d+b-a*i+d+n+a)%100;
                  m += (h-b-f-i+c+d-m-l-j-j+f+e+h)%100;
                  l -= (c-l)%100;
               }
               }

               if( ++IFEcnt[12]%2 )
               {
                  f -= (e-g*a+d*e-j-g+g-n+d-n)%100;
                  d += (f+n-k-k-j*i-h*j+d-k+f)%100;
                  c += (k-g*e-d-c-d*j-h+d+j+b-f)%100;
               }
               else
               {
                  n -= (c+k*n+k+n-g+k+a+g)%100;
                  m += (c+c+n*l-h)%100;
                  d += (j+k+h-k+h*a+d-d+c+f+j-j)%100;
                  d -= (f+j)%100;
                  j += (a-l-k-a-c+n*a-g+f)%100;
               }
               d -= (c+k)%100;
               m += (l*i-g+i-m)%100;
            }
            j  = (c+a+a+c+e-n*e*h+h-d+b)%100;
            d -= (k+m-h-e-d*f-m-l*h+g-n+n*l-m)%100;
            c += (i+k+h)%100;
         } while( ++DOcnt[11]%5 );
         j += (n-a*k*g-c*h*h*b+n+k+a*g)%100;
      }
   }
   m -= (a-n+d-i-h-i-l*i-n-b+g)%100;
   h += (f*c-a)%100;
   e -= (b+k)%100;
   i -= (c-g-h-a+h)%100;
   j -= (i*h+h-j*m)%100;
   m += (a*l*e+b*a*j*i-c)%100;
   c  = (n+f+c+k+e-k)%100;
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
                  c += (m-g-n)%100;
                  b += (n+f+d+l-b*g-g-h+d+d-g-c)%100;
               }
            }
            if( ++IFEcnt[15]%2 )
            {
               if( ++IFcnt[11]%10 )
               {
                  g -= (k-l*c-i+h+l-m-i)%100;
                  d += (n+l+m+d+i-i*h-f-f)%100;
                  d -= (d-h+h-d-c-n-i-l*a+f+n-d)%100;
                  m += (k-c+c*d+b*f+a)%100;
                  n -= (b-k+l-d*d+c-m-e-m+j)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  n -= (g-j)%100;
                  f += (a+g)%100;
                  k -= (l*a+a-a+j+h-b+a+j+f*g+c)%100;
                  a += (j+h+b*d-c*d-i)%100;
               }
               else
               {
                  k += (b-i-e+n-b+b+n+m*f*d-a)%100;
                  f -= (n+e-k+j*k-j-g*c*c)%100;
                  l -= (c*g*b+l-c*k)%100;
                  h -= (f+j)%100;
                  b -= (k+l+j)%100;
               }
               while( ++WHILEcnt[14]%5 )
               {
                  h += (m+l+k-c+k-f-b-l+n+h*b)%100;
                  j -= (g-l+c*m*k*m*l-k-g*a*k*m-k)%100;
                  a += (j+e-k+e+e-j+n+a)%100;
                  d += (g+n+h*g+m+f+n-h*n+k)%100;
                  f += (f+n*i-b-c-h)%100;
                  c -= (m+m-j+j-g-e*a+a+f-i+l*b-i)%100;
               }
               do
               {
                  g -= (d+a)%100;
                  g += (n+c-e*j*b)%100;
                  k -= (a-j-l+c+f-h-n*d+l+f-n*d*m)%100;
                  n -= (e*d)%100;
                  g  = (d-b-l+b-j+b-c+j-j)%100;
               } while( ++DOcnt[15]%5 );
               l -= (a-e+a+i-m-d-i*b*i-l-i-i)%100;
               j -= (d*a)%100;
            }
            else
            {
               while( ++WHILEcnt[13]%5 )
               {
                  h += (a-n-g-c-f+c+n-e+b)%100;
                  f -= (d*n+h-n*k-g+g-j-j+e+i*e+b)%100;
                  m  = (l*f-l*n-d+m-k*j-c+h-i+h+b)%100;
                  l -= (m+d+m*d-a)%100;
               }
               do
               {
                  f -= (c*k+b*a+j-n-m-h)%100;
                  m += (f-j-h+a)%100;
                  g += (l+a*d*j+b-j-m+h+a+a-d+e+b+k)%100;
                  c -= (k+h*j*n-i+n+e)%100;
                  f += (h-m+k-d*j-a)%100;
                  g += (e+g+c*b-c-c*a-h)%100;
               } while( ++DOcnt[14]%5 );
               h -= (e-h+i+d)%100;
               for( ; ++FORcnt[21]%5 ; )
               {
                  h += (e+g-l+a-j)%100;
                  g -= (b-b-j-c-d*l+a+g-d+a-l-c)%100;
                  n  = (a*h-f-n+e-a*d+d*k-c+d+i)%100;
                  g += (f*a+n+c*d-d)%100;
                  d += (i+d*e+m+h*k+j-e-l)%100;
               }
               
               switch( ++SWcnt[7]%3 )
               {

               case 1:
               {
                  a -= (n-f-f+k-e-k+e-b)%100;
                  e += (g+j+h+h+d*k-i-i-i)%100;
                  l -= (c*i*j-h-f)%100;
               }
               break;

               case 2:
               {
                  d -= (n-d-f*d*a)%100;
                  c -= (i*k-d-h-j+l*f)%100;
                  j  = (d+g+l)%100;
                  m -= (a*b-k-e+m-k-h-i+a+i)%100;
                  g += (n-c*m*i*l+h+g-m-h)%100;
               }
               break;

               default:
               {
                  j += (h+h*n-k*j-h+m-h-l*m+j)%100;
                  n += (e+i-n-h)%100;
                  b += (g*j+e+m-k+c-e-g-c-d)%100;
                  e += (i+c-c-i-d*f-i-f-k-k-a*k)%100;
               }
               }

            }
            n -= (k+e*i-f+d-c+n+m-k*c+a+f-g)%100;
            f -= (k*e-a-i-j+a+d+d-l-f+k-g+f-f)%100;
            i -= (k-h-k-e-h)%100;
         }
         e += (d-m+e+l+l*b-k+e+c+f+n+g-f*m)%100;
         j += (e*i+g-b+f*n-l+c-j-i-h)%100;
         m += (c*j*c-e+l*i-i+j)%100;
         c -= (l+g-d-n+k-c*f+m+a)%100;
         k -= (e-g-i+k+c-c-e-f*m-a*j-j-h)%100;
      } while( ++DOcnt[13]%5 );
      m -= (m+g*a*c+k+b+n-l)%100;
      j += (c-i-g-g)%100;
      g += (a+l+g-j*e-m-j-m+l*j+a-b+i*g)%100;
   }
   a -= (a-e+k+f)%100;
   c -= (d-i-c+e*f+a)%100;
   g -= (h-i)%100;
   m -= (d+j)%100;
   h += (e-n+a-e-e-g*l+n-b-n*j)%100;
   j += (f-n)%100;
   d += (k-b+n*f*d+k-e+d-c-c)%100;
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
            e -= (j-m-g+h-j-g+c*c*e)%100;
            m -= (m*f-e-i*l)%100;
            d += (b+c-h+l)%100;
            g += (j*a+b+l-n*i-i*m-a-b+l+n+f)%100;
         }
         else
         {
            while( ++WHILEcnt[16]%5 )
            {
               do
               {
                  d += (i+g*j+d*l-m)%100;
                  k += (a+h+m+k+i-a+i+h)%100;
                  m += (a-c+g+e*l*f-l-d-k+n*l*g+a)%100;
                  c -= (k-i+g+h+k+n+i+f)%100;
                  b -= (n-f-g-g-e+l+b-d*i+m-e)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  f += (b*k+h*e-e-n)%100;
               }
               d  = (d+k+n-i+b-j-m+c-l-c+b-i*b)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  b -= (c*g-i+j+c+j*i-d-c-j*k-e)%100;
                  e -= (j-n*c-i-c+f-f+j*i)%100;
               }
               
               switch( ++SWcnt[8]%3 )
               {

               case 1:
               {
                  l -= (i*n*n*b-g-n+l-k*b)%100;
                  g -= (k-e+g-m+m-e+f+j)%100;
                  k += (d+i+a+g-b)%100;
                  b  = (m*m+l*a+l*l-b*a+h-d+a*d)%100;
                  j -= (a+f-l*i-b-h+m-m-j+m-g-g+l+n)%100;
               }
               break;

               case 2:
               {
                  k -= (l*g+h+l+m-j-k-n*k-h+m)%100;
                  g -= (n-c+n+e-l*a-h+k-i)%100;
                  a  = (j+l+i+h-e-i+k+i)%100;
                  m  = (e+b-h-a-n)%100;
               }
               break;

               default:
               {
                  j -= (b-d+l+l-b-a+n*i-g+g*l)%100;
                  f += (l-c-d-a+e-k+m+n-a-n)%100;
                  i += (e-m-b-e*h-i*f*f+g+g-n-l)%100;
                  m -= (b+i+f+j-i-a+f)%100;
                  k += (d+g-c)%100;
                  g += (m-h-l*l-h-e-b-e*b-l*e+a-g-i)%100;
               }
               }

               if( ++IFEcnt[16]%2 )
               {
                  i  = (i+f-l+j*f)%100;
                  l += (i+k-l-a-h-l+d+g+i*m*c+m*f)%100;
                  e += (n-h+g-g-g+g-e-c+m-l-n+h+l-n)%100;
               }
               else
               {
                  e  = (i*j)%100;
                  g += (f+h-e+c)%100;
                  k -= (e-l+f-g+a-i*i)%100;
                  g += (n*f)%100;
                  b += (j-a-f)%100;
               }
            }
            while( ++WHILEcnt[17]%5 )
            {
               do
               {
                  b += (d+i-e+m+j*g*k)%100;
                  e += (n+n+n-h+e+n+n-l-l*f+h*a-l)%100;
                  h -= (i*j)%100;
                  a -= (b*d+i-b+h+b-l)%100;
               } while( ++DOcnt[17]%5 );
               for( ; ++FORcnt[24]%5 ; )
               {
                  l -= (l-m-c*l-k+i*b+l+i+g-j+b-h*n)%100;
                  h -= (j+l*d-e-f+c*k+l+n-f)%100;
                  b -= (d-i-k+h*c-g-h-j+c+l+n)%100;
                  j  = (e+c+n+b+l-f)%100;
                  f  = (d-f+a*k-g+l+g*h+c+d*b+g*i)%100;
                  l  = (b-m+g*l*d+e*n*k+m-i-g)%100;
               }
               if( ++IFcnt[13]%10 )
               {
                  l += (i-j-m-d*j+n-k*m+n*a*h+e)%100;
                  h += (l+l)%100;
                  n -= (f+b*n+k+c+a-k-n*n+b-f+k+e*n)%100;
                  b += (a+n-b-g+i-l+g+h-b)%100;
                  d += (a+l*i+a+j+m*k)%100;
               }
               for( ; ++FORcnt[25]%5 ; )
               {
                  h += (j+j*n)%100;
                  i -= (f-g-c*i-j-n+h+g-f-m*j)%100;
                  d += (k-h)%100;
                  e += (a+j-d-f-i*k+e+b+j-c-m+k-d)%100;
                  k += (i-m+i+n+m+k+j*i+i+a-j+b)%100;
               }
               n -= (n*b)%100;
            }
            e += (j-m+a+h*n)%100;
            a -= (m+a+e-j+f+c-d-b*m+f*j-a-l)%100;
         }
         h += (l+d+j-g+d-f-b*f*d+g)%100;
         e += (e-d+n+k*m+a-f)%100;
         l -= (a+j+f-b*k-e-e*e-m+d+k+f)%100;
         l -= (i-m+i-f+a*f+n+k*m-a-e)%100;
      }
      h  = (e+a-m-g-j+f-m*j+h*n-d+l-h)%100;
      m  = (d+e-i+l*h+e+b-f+k*k*j)%100;
   }
   h  = (j-b-h)%100;
   d -= (m-h+e*a-f-k+f*d*b)%100;
   c += (d+m)%100;
   a += (f+n-f-c-c-c+m+j*a+i+a)%100;
   e += (b+h-l*m-f+l+n+c-n-g+h)%100;
   d += (d+b+d+k+k+d*i-k*b+f-n)%100;
   m -= (h+i-k-f-f-l*h+l-k*k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[20]%2 )
   {
      g += (m-k*l-h+f)%100;
      i -= (i+l+n-i-a*h-d+j)%100;
      h -= (g*a-d+h+c*m+c+a-j*h*g)%100;
      a += (g-g+l-a+j)%100;
      e -= (j*m)%100;
   }
   else
   {
      while( ++WHILEcnt[20]%5 )
      {
         do
         {
            h += (n-h*d+g-a)%100;
            for( ; ++FORcnt[28]%5 ; )
            {
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  i -= (c+e)%100;
                  d -= (b*c+c+d*k-m-a-i*l*g+i+g+b-g)%100;
                  a += (f-k+m+e+a*g+l-m*e*j-c+g+m)%100;
                  a -= (k+h-e+a*e-h+d+n+i*n)%100;
               }
               break;

               case 2:
               {
                  n += (b-l-k+c+g-d*l-g-n*a+j)%100;
                  e += (g-c+j-l-f+i*g*k)%100;
                  a -= (f*g)%100;
                  k += (k-a-m+a*j-l+n+l*e*e-h)%100;
                  l += (h+j+b-i+i*k*h*n*n-l+g+d)%100;
                  l -= (m+k)%100;
               }
               break;

               default:
               {
                  c -= (h+i)%100;
                  n -= (m-i+h+h*k-i-l*c-d+a-k*g-h-i)%100;
                  f -= (g-a-c-l*h+l-d)%100;
                  j += (a+f-a-f)%100;
                  h -= (h+k+g+l)%100;
               }
               }

               if( ++IFcnt[14]%10 )
               {
                  d  = (l+c+f-m)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  m -= (i-g-b-f+n+j-i+g+h+e*c-e+i)%100;
                  e -= (f-a-b*e+f+b-n-l-k*j+k)%100;
                  a += (f+i*h-m+j+k-j)%100;
                  f -= (k+n+c-f+b+j*b-c+b)%100;
                  j -= (d+g+d+j)%100;
               }
               else
               {
                  h += (b+l+j-i-a+a-f*b+n-b+m+a+m)%100;
                  i -= (l-a-f-b+h+l+h*n+a-e)%100;
               }
               while( ++WHILEcnt[18]%5 )
               {
                  b += (n-j+e+c+h+i-b+h*m*d*j+f+m)%100;
                  j += (e-d-f-h-k+k-b+b+e-f*e+m-e+g)%100;
                  e -= (l+d-a-i*d+n)%100;
                  i += (b-a-j*a*b-m+e)%100;
               }
               do
               {
                  j += (k-b*c-c-c+i+c*d+j*d+i+j)%100;
                  a += (i-c)%100;
                  h -= (m+i-c+a-n*a*f+j-m-l-i-i*f+g)%100;
                  d += (f*b-d+m-l-e+m+e*k*l-b-i-g*f)%100;
                  b -= (a+a*c+c*g-j-f-k+k+n)%100;
                  j -= (m-f+n+a-m-h-c-c-j+g+j)%100;
               } while( ++DOcnt[19]%5 );
            }
            for( ; ++FORcnt[30]%5 ; )
            {
               for( ; ++FORcnt[29]%5 ; )
               {
                  l += (a-n+k+n-b-g+j+m-e-n)%100;
                  g -= (m+i*n-c+a+h+m)%100;
                  g -= (d+l+k+f-g-c*f-h-n+a*e+a)%100;
               }
               if( ++IFEcnt[19]%2 )
               {
                  a += (g+d)%100;
                  k += (h*e*m*d+m+a-f-n-g-l-a+n+b-e)%100;
                  j -= (b+n-e+k*n-k-d-m-d+i-b*a-m)%100;
                  i += (e+d-a)%100;
               }
               else
               {
                  b += (n+a+c+k+j)%100;
                  k -= (m+h*n+l+b-e)%100;
                  m += (e-c-f)%100;
                  f -= (i+e+d*d-i)%100;
                  f += (a-c-b-d-k+k-h-k+h-c*i)%100;
               }
               while( ++WHILEcnt[19]%5 )
               {
                  h += (i+d*e*m*c-k*b+e-a+m*l*b+e-m)%100;
                  k += (e+a+m+g+b+d+i)%100;
                  b -= (n+f)%100;
                  f += (k-d-g-h+c+j+f)%100;
                  l -= (n-l+h-d)%100;
                  k -= (d-i+a-h-d-e+b+l+c+j-a*h-b*e)%100;
               }
               i += (l+g+d-c-l*i+l-m-j+i)%100;
               m -= (m+b*l+b)%100;
            }
         } while( ++DOcnt[18]%5 );
         f += (c-e+k+n-g-a*g+k*i+i+n+n*k*k)%100;
         h += (i*g-n)%100;
         a += (e+l+i+a+n+k-h)%100;
         e -= (j-i)%100;
      }
      m -= (a*l)%100;
      c -= (h*b-n*h+d+f*b-m+e-d+n)%100;
      a += (g+h-k+g*k-a+c-m-c+g+c-n)%100;
      a += (h-g+l*g-a*h+a-d+f+a+f-f-m-d)%100;
      b += (e-j-f+n-c)%100;
   }
   k -= (e-e-n+l+k-g-l-h-k*j+b)%100;
   l -= (b+l)%100;
   f += (i*b)%100;
   d += (b-m+c*c+d-a*k-n-j-j-a-h)%100;
   g  = (i*e+m+k-l-f*a*h+k+c+e*b*c)%100;
   b += (c-j)%100;
   l -= (f+f-c-m+e+n)%100;
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
         b -= (c*d+n-m-l)%100;
         for( ; ++FORcnt[33]%5 ; )
         {
            
            switch( ++SWcnt[10]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[21]%2 )
               {
                  i  = (f*b)%100;
                  f += (f-f+f+k-i*b)%100;
                  m -= (j-c*m-h+g*c*b)%100;
                  f += (i*j+a+d-n-g+i*c-n+e-k-b-e-i)%100;
                  b += (f-h-n*d-k*f+d+e-i-a-k+c-i)%100;
               }
               else
               {
                  e += (n+k-a-g*h)%100;
                  i  = (d-l+a+k+f-l-f*d*m+c)%100;
                  b -= (a-g-n+b+h+i)%100;
               }
               while( ++WHILEcnt[21]%5 )
               {
                  n -= (n-c*n)%100;
                  j += (a+f*n-e-g+e)%100;
                  d += (b*h*j-f-d*l+a+e+f+e)%100;
                  g -= (g-h+g*g)%100;
               }
               do
               {
                  f += (c+d*h+e-a+m+e+h+e-g-b+l+f)%100;
                  j += (d+m+c*b-n)%100;
                  m -= (b*a-f-b-g+n-h*g-i*n-d-h*e-h)%100;
                  g  = (i-i-f+i*e-n)%100;
                  f -= (f+g)%100;
                  f -= (h-d-f-h-k-a*c-n+f)%100;
               } while( ++DOcnt[21]%5 );
               for( ; ++FORcnt[31]%5 ; )
               {
                  i += (h-c*a+f-l+g+d-n+i)%100;
                  a -= (k+e+f+h+j)%100;
                  k -= (g*i*h-g+k+j-d+m*g)%100;
                  b += (d-j+e+b+d*c-n)%100;
                  a -= (n-m*g-b*l-f*k+e+m*m+d*h-c)%100;
               }
               if( ++IFcnt[15]%10 )
               {
                  h += (j-l+j*i+h-h+j)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[32]%5 ; )
               {
                  j -= (j-c*g)%100;
                  d += (n-f+k*b+m*a*e+i+i+d+c)%100;
                  b -= (f+g-j-m-e-b+b+b)%100;
                  i += (n*i-h-b)%100;
                  j += (j-g-l-c+d+h+k+j-n+d)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  m -= (a-g+m+c*n)%100;
                  b += (g-e*b+n+k+e-l*d-g+j+i)%100;
                  k -= (b-l-g+f-c-d-a*k*b*k-j*i+f-h)%100;
                  c += (j+j-e-n-l*c)%100;
                  f -= (g*e)%100;
                  b  = (k*n-a-m-f+n+e-k*a-g-f*c+i)%100;
               }
               else
               {
                  h -= (c-n)%100;
                  i -= (n-f+b)%100;
                  c += (b+b+k-k*k*d+l+k+c+f+l)%100;
                  d += (f+k-b+n-g-l+a+l+c+k)%100;
               }
            }
            break;

            case 3:
            {
               while( ++WHILEcnt[22]%5 )
               {
                  d -= (m-m*e+d*k-b-l+b)%100;
                  f -= (k-j*i-c+a-g+f-n-l)%100;
                  b  = (f+c*a-i-a+n+i+e-e-l+i-n+n)%100;
               }
               do
               {
                  b -= (c-m-f*e*d*g+i-f)%100;
                  e += (h+d-i-j-n+i-i*i*i)%100;
                  d += (a*l*j*n-e-d*d-d-a-f*h+a+n)%100;
                  e -= (k+c+g-f-i+c*n+i-h-n)%100;
                  a += (h+i-n+b)%100;
               } while( ++DOcnt[22]%5 );
               l -= (i-n*f*f*a+i+e+h+b+l-k+g*g*l)%100;
               a += (l-m-f*b)%100;
               n += (m*j*a+c+i+d+i*b-c+h+c*k)%100;
            }
            break;

            default:
            {
               a -= (m*i*f+n+l*l-g+d)%100;
               h += (d-e+e-l-k+e-k+n-e-m)%100;
               k += (h-e)%100;
               b += (e*e+j-k-a-k-j-k-e+h*k-d+d+m)%100;
            }
            }

            h -= (n+m-c+c-j+h-j-f+g-j-a-a*j)%100;
            a  = (l+m*a-e)%100;
            a -= (n+b-m-j+d+h-b+g+g+f*i-a-e)%100;
            e -= (j*i*k-e*e+f-k-b-i)%100;
            i += (h+b-j)%100;
         }
         h += (h+i-k-m+a+g*c-d-e+e-a*g-m)%100;
         c -= (l*m-b-b+m+l*l*d-g)%100;
      }
      f -= (l-c+a+i-b-m+h-h+e+d-c*j+e)%100;
      e -= (i+n-g*m-c-n)%100;
      a -= (g*i-j+e*d-n-f+l+g+j+n)%100;
      n -= (h+a-d+a*f+c+g+g*l-f-n-f+e)%100;
   } while( ++DOcnt[20]%5 );
   b -= (e-c)%100;
   c += (m*k*f)%100;
   e += (i*d+l-i+a+m-e+a+m-e+j)%100;
   j += (k*e-a-c*c+e)%100;
   m -= (a+f-l-n-h+d-b+a+k+g+d)%100;
   j += (b+f+a+g+i+h-h+e)%100;
   d  = (m*h-m-i+k-a*g-j)%100;
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
               if( ++IFEcnt[23]%2 )
               {
                  a += (n+h)%100;
                  f  = (j+f+i-c-b-b)%100;
                  k -= (b*g)%100;
                  m -= (f*m+k-n*h+h-a+n+d-e*d*j+h)%100;
                  n += (n-a+i-g-i-d+j)%100;
               }
               else
               {
                  j += (k-l)%100;
                  l -= (c-i-m+e)%100;
                  h -= (f+a+c-b*i+j+j)%100;
                  b  = (d+e*l-d-c-k+f+g-g-l+e)%100;
                  n += (j+c*n+m*k+h*n)%100;
                  k += (e*a)%100;
               }
               while( ++WHILEcnt[24]%5 )
               {
                  c += (e-c-m-m)%100;
               }
               do
               {
                  g  = (e-d)%100;
                  c += (l+m+g+j+d+n+a+i)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[17]%10 )
               {
                  h += (c-n+e+l-l-m+j+d+e+j-d+f-m)%100;
                  d -= (b-h-e*e*a-n-l-a-j-h+k+m*h+i)%100;
                  j += (d+k*n*n+l-b*j)%100;
                  k  = (g-l-i-i-n-j)%100;
                  d += (i*k+e+j+a-m)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[23]%5 )
               {
                  n += (c-m-m+h+e+i)%100;
                  m += (l-k+n-b)%100;
                  l += (l+f+e-d)%100;
                  c += (g+a*l)%100;
                  l += (m-h)%100;
                  b  = (l-d+b*d-n+m*e)%100;
               }
               do
               {
                  n += (l-j)%100;
                  b += (k+k)%100;
                  c += (j+c-k-m-m+i-h-g+j-n)%100;
                  j -= (l+j-a)%100;
                  c += (k+n*a+a-k*h+b*d+n)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  f += (l-c)%100;
                  b += (l*c+k+k+e-i-d*f)%100;
                  f -= (a*a-a+e*k-b-h+f*l)%100;
               }
               for( ; ++FORcnt[35]%5 ; )
               {
                  a -= (d+f*c*e-b+a+c*i-e-n*d-h*b)%100;
                  f  = (k+l-m+a-g*d+i-n+l-h+c-c)%100;
                  n -= (e+g+f*j-m+l*e+h+j*k-b+n-j)%100;
                  a -= (e-h+f-c*a*l+c*g+f)%100;
                  a += (k+i-g-k-d-m+b+a+c+l+f-f)%100;
               }
            }
            d -= (j-e*a)%100;
            for( ; ++FORcnt[36]%5 ; )
            {
               
               switch( ++SWcnt[12]%3 )
               {

               case 1:
               {
                  i -= (n*h-m+c-d*n+e-k+a-c+l)%100;
                  e -= (j-h-a+n-j-g+h+j-n*c-l+h)%100;
                  f += (c+a*i+c-m-h+f-c+d+i-n+e+f-e)%100;
                  h -= (c+g)%100;
                  m += (j-h-l*b+f+e)%100;
                  f -= (c+h+m+n+g*e-k-b)%100;
               }
               break;

               case 2:
               {
                  b += (m+k*e-a+g*m-n+i+m+e+k+j)%100;
                  n += (b+k+k-b+g+k*e-c*h-j+g+k+n)%100;
                  c  = (i+b+d)%100;
                  n += (c-b-l-d+d+b)%100;
                  g -= (d+e*f-l*l+l-i-d*h-d)%100;
               }
               break;

               default:
               {
                  d += (h-n-n-a-c*b+e-m+a)%100;
                  b += (g*e-l)%100;
                  c  = (j+e-j+k-e-h-d+m-d-h-n-m+a)%100;
               }
               }

               l -= (f+d+b+j-b)%100;
               b += (n-d*n*j+a-m*l+d+j*l)%100;
               d += (c+e)%100;
            }
            g += (m-d-k*h+c-b)%100;
            e  = (h+k-l*f+b+k-m-f+d-d+k+i)%100;
         }
         a -= (f-i-j-m+l+n-b*i-l)%100;
         m += (f-l-m+m*i+h-m)%100;
         d -= (n-k)%100;
         i += (f+j+b+l-c-k*j+e-e)%100;
      }
      break;

      case 2:
      {
         m += (g-c+h*d*b+b+h+b+n-g+n+c-b+c)%100;
         m -= (d-d-n-f+g+n-g-l-f*m-n+c+f)%100;
         k -= (e+a-c-m-l*d+d+c+j)%100;
         e += (g+d+h+n-e*i-j*g+a+d+c-f*k+l)%100;
         h  = (b+m+c-d+d-e-l+m*a*b)%100;
      }
      break;

      default:
      {
         f -= (f*g+j-n+l+k+b*l)%100;
         f  = (i+j+e*f-i+b+j+g-j)%100;
         m += (b+i+f*i*e*a+b-d-f)%100;
         g -= (k-a-e)%100;
      }
      }

      j -= (k-d*e-a+g-n*e-e+m+i-f)%100;
      n += (d-f-e+f+h)%100;
      e  = (i+a)%100;
      d -= (f+b)%100;
      e -= (e+l-h+d-c)%100;
   }
   g  = (e-a-d+c-f+c*l+i+g-a+g+k+b*j)%100;
   c -= (m*c-c-j)%100;
   m += (f-a)%100;
   d += (b+d)%100;
   j += (f-g-f-k*k-b+g*i*a*m+b)%100;
   j += (h-e-l+b*g)%100;
   g -= (h*n-c-k-k-h*h-g*n*m*a*j+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[26]%2 )
   {
      m += (l+m-f+i+a+g*h)%100;
      d += (h-c)%100;
      f += (g+g+e-k*k+f+k-m+a*d-f)%100;
      g += (j+b+f-k-g-a+e)%100;
      c  = (g-m+c*l*l-l*c+m-a+e*j)%100;
      d += (h-f*c-i+h)%100;
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
                  c += (h+j+h-i+c-j)%100;
                  l -= (e*a-b-c-f*l-c-a-k-f*b-b)%100;
                  d -= (m+g+a+k+i+c*l+n*c-f-j)%100;
                  a += (m-j)%100;
                  l  = (m*l-b-f)%100;
                  m -= (n+l)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  i += (i*g-b-h)%100;
                  m -= (a-m+k+n*c+c-a*b-j+j)%100;
                  h -= (e+e-b-m-j+c+k)%100;
                  e += (h-g+c+i+h-k*e+j+g+l+a*h)%100;
                  j += (m*f*k-d-m+c-j*i-l-i-h+c+f)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  j -= (d*k+g*j-f+e)%100;
                  i += (n+i*m+b+m*c-h*l)%100;
                  m -= (e-c+g-e-i+c-b*d-f*h)%100;
                  k -= (b+i+a-d*n*e+h+i-a)%100;
                  m -= (a-m-e+k)%100;
               }
               else
               {
                  m += (l*d+a-c)%100;
                  d += (n*m+a-l*g*j*g+a+n-g-f+e-k+d)%100;
                  l -= (h+g)%100;
               }
               while( ++WHILEcnt[25]%5 )
               {
                  c -= (a+b+f+e-i-b*l+k-b+m+n*g-d)%100;
                  b += (g*k)%100;
                  e += (m-i-d-j-h)%100;
                  f += (a+e+m*i+e*i+l-i+i*g)%100;
               }
            }
            do
            {
               d += (c-l-n*a-k*h-a+c*d)%100;
               for( ; ++FORcnt[40]%5 ; )
               {
                  j += (f+m*k+d+m-j+k-n+k-j-m)%100;
                  l -= (h*d+i+f+e-h-k+l-d)%100;
                  f += (a+i+c-k+d)%100;
                  e += (i-i*j*j*c-e+g-d-i)%100;
                  b -= (b-h-h*l-h+h+d+d*d+h*d*l)%100;
               }
               
               switch( ++SWcnt[13]%4 )
               {

               case 1:
               {
                  i -= (n-e-a+b-j+h+b-j+f-m)%100;
               }
               break;

               case 2:
               {
                  k += (e-b)%100;
                  j += (g*g-f)%100;
               }
               break;

               case 3:
               {
                  f -= (m-k*a+l+c-e-e*h*n+i-e+j+m+i)%100;
                  l  = (a+m-d*b*d+l+i-j)%100;
                  h -= (b-j-k*a+g+e-a+e+g-d+c-a+h+a)%100;
                  k += (n+h-h*l+a)%100;
                  h -= (n-m+k-j-n-g-m+d)%100;
               }
               break;

               default:
               {
                  h += (e+b-h-j*i-e+m*a*m-m*e-i+j)%100;
                  c -= (m+e-n-h+i-j+k+h-a+g)%100;
                  g += (i+k+m-f+b-d+a-i+h)%100;
                  e += (m-i-g*j+m-k+g+f+c-i+m+i*c)%100;
               }
               }

               j += (j-f+h-n)%100;
               g -= (j-m*j*k+m)%100;
               e += (i+c-d*f-m+i*i-e)%100;
            } while( ++DOcnt[26]%5 );
            d -= (n+a-m+c-g+n-i)%100;
            f -= (e-n+a-l*f+f-a)%100;
            b -= (a+f-m+h-i-f-c*c+e+j-f+b*d)%100;
         } while( ++DOcnt[25]%5 );
         g -= (c*j+e+g+i*f*a-k-a+g-l+n*c+d)%100;
         c -= (j+n-c*n+k+g)%100;
         m += (e-g+a*n-c-i-g+e)%100;
         j -= (i-f)%100;
      }
      j -= (n-n-h+l-b+j-i*i)%100;
      d += (j*f+h*l-j-h+a-i*b*f+j-l-j+e)%100;
      a -= (n-g-a-a-k-n)%100;
      k += (f+d-h*m)%100;
      i -= (m+m*f-c-a+h+f+l*m)%100;
   }
   n -= (a-b+h)%100;
   c -= (f-f)%100;
   g += (c*i+j*a-i-c-h-c+m-c-i-g-g)%100;
   m -= (k-g-n+f+j-k-j+d-e-d)%100;
   n  = (f+a-a-l-c-e-n+e+i)%100;
   j -= (n-a+m)%100;
   f -= (i*l+g-d+h*k+k)%100;
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
         b += (i+l-c-e-k+d)%100;
      }
      else
      {
         while( ++WHILEcnt[28]%5 )
         {
            do
            {
               for( ; ++FORcnt[41]%5 ; )
               {
                  e -= (k-l-b+l-h+j+n*f+b)%100;
                  g -= (d+g)%100;
                  i -= (l+i+k+c-f+h-m+h)%100;
                  e -= (m+j-g-h-j*c+h*i*c-c)%100;
                  k  = (j+j+n*m-b*e+d-a)%100;
                  k += (a+h)%100;
               }
               for( ; ++FORcnt[42]%5 ; )
               {
                  e -= (j+m-i+j+c+a-d-j)%100;
                  e += (e-j+g-i+b)%100;
                  e  = (j+k+i+f+m+m*i-h-k+h-k-n*n)%100;
                  l += (d+d-n+g+j-g+l-d-l-f-f*j+k)%100;
                  m -= (k+h-k-a-l+n)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  e += (g-j+b*j-g*h+d-c+g+a*a+a*j+h)%100;
                  f -= (h-k+g)%100;
                  l += (n-l-m+e-l-c+i*b-h*m)%100;
                  f -= (i+c+i+g+l*e+g-n+a*f-k*k+a)%100;
               }
               else
               {
                  g -= (k-b-i-c*i+e*b+n+a+l-g)%100;
                  e -= (c*b+d)%100;
                  m -= (g+m-c+h+f-k)%100;
                  m += (h+h+c*g+l+i+n-j-j-i+e-l)%100;
                  d += (i+a-a-d-j-i+h+i-e+g)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  k += (m-n+a)%100;
                  l -= (m+e-c-j+d+a-n)%100;
                  k += (f+c+l-m+m-a+b-n+a+l)%100;
                  n  = (l-e-i-a)%100;
                  e += (k-e+g*n+m-f*j+n+a)%100;
                  n += (i*a*b*a*m+c+f-k*e+c-f)%100;
               }
            } while( ++DOcnt[27]%5 );
            do
            {
               if( ++IFcnt[20]%10 )
               {
                  f += (h-a-l-n-l-n+k+g*d*j)%100;
                  m += (g-n+c+d+m-b*i)%100;
                  g -= (n+c+a*j+h-m-h+a+l-l+e-f*j)%100;
               }
               e += (h*d*a+c-b)%100;
               for( ; ++FORcnt[43]%5 ; )
               {
                  m -= (a+f+a-a+l+l+i-m*l+l+e)%100;
                  d += (e-l)%100;
                  c += (e*e-n+k-j*h+b*h+d*m-i)%100;
                  m += (n-d-e+d)%100;
                  b += (g+m+i+i+j-f-n-f+b-a-e+b+a+k)%100;
               }
               
               switch( ++SWcnt[14]%3 )
               {

               case 1:
               {
                  e -= (f*l+b+n-b)%100;
                  c += (g*n-f+g*f-j-i+j-d+b)%100;
                  g -= (h*d-c+h*f-c)%100;
                  b -= (n-c-m-d-a)%100;
               }
               break;

               case 2:
               {
                  g  = (j+e+f+k-f*k)%100;
                  m -= (j-m*n*j*f)%100;
                  n -= (d+i-l-c*g*f-k+l)%100;
                  c -= (n*h-i+n+e-j-b)%100;
                  h -= (e-b+h-i-i-n-k+k+k)%100;
                  j += (j+j-f-b+n-k-a)%100;
               }
               break;

               default:
               {
                  h -= (l-l*f+a+k+n-m+c+h-k+e-c)%100;
                  d -= (l-f-a-a-n-c+i-k+a-c-h+a)%100;
                  h += (e-f)%100;
                  g += (f+f*l-c-e-j)%100;
                  a -= (g+n-h*f+c-e-e-d+n)%100;
               }
               }

               g -= (l+n+b-m*n-m-f)%100;
            } while( ++DOcnt[28]%5 );
            c += (l+c+b*h+k+d+l-c*a+n-h-c)%100;
            d -= (a*k+e)%100;
            m  = (n*b-g*j-l+n+j)%100;
         }
         i += (a-g*b+h-k-h+h)%100;
         n  = (g*a+n-b+g*h)%100;
      }
      n -= (n-d+j-a+l-a-a-k)%100;
      b -= (m+n-a+i+h-m*c*j+m)%100;
      g += (g*b*n-h+i+c+h+g-g-a+c+d-l*a)%100;
      e -= (a*c-g-d+i+m*j-f+f+g)%100;
   }
   c -= (c+c)%100;
   c -= (n-i-m-m-a+e+m-a)%100;
   k -= (d+d+i-g-k-e*i+m)%100;
   c += (f+b-f-a*i-j+m+j-d+f+e+f)%100;
   l -= (a-h)%100;
   g -= (j+c*a*e+h-a-g+f+g-b+j)%100;
   n -= (a*k-k-e-g-e*j+c-i*e-i+c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[31]%2 )
   {
      h += (h+e*e*g+e-g*n)%100;
      b -= (a+f+e)%100;
      i += (i-h+c*f+m-e-f-c+k)%100;
      h -= (k*j+n+i+i)%100;
      d += (m-j*a+f+i-i*m+h+k-b)%100;
      g -= (e+n+j*d*m*f+a+l+i)%100;
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
                  i += (a-l*b-m-c)%100;
                  b -= (d+j)%100;
                  i -= (m*j+n)%100;
                  i += (a+f*c-l*j-k-b+j*b-i+f-m+c*g)%100;
                  m += (h*b*j+c+c-h+n)%100;
               }
               for( ; ++FORcnt[44]%5 ; )
               {
                  j -= (c-n+f-m-l+h+a-c+e+n-i-b)%100;
                  b += (m+k+m*l-g*m+h+d*j+m)%100;
                  a += (b-j-j-d)%100;
               }
               if( ++IFEcnt[29]%2 )
               {
                  a  = (k-e+m-k-k-h+l-a*i-g)%100;
                  c += (b+f-f*k-b*j-c-l*h)%100;
                  h -= (e-m*k)%100;
                  c += (a+j+d*j-a*a+i+m-m+b+m-f-e)%100;
               }
               else
               {
                  i  = (k+k-h+l+b-b*i-a+n)%100;
                  e  = (j*m-f-b+e+l-h*n+f*f-b-k+i)%100;
                  c -= (n-d)%100;
                  j += (n-n*n+d+c+n+g+k-e-g)%100;
                  k -= (e+i+n-b-g-j-i*d)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  n += (c-i-h+h*h-f+n+a-i*l-n-b+h-k)%100;
                  b += (b+b*m+a-i+b*h*g*l+g-j)%100;
                  b  = (k-e*h-g)%100;
                  b += (h*e+d+n-n*i+j-k+e+d+g-i)%100;
                  m -= (f+h+m)%100;
                  k += (a+h-a+e-d+f+f+f+a*g*n+g+f)%100;
               }
               do
               {
                  n -= (b-a+e-j-e*a+e+i)%100;
                  b  = (d-c+b+g+b*i-n*b-b*n+h+j+b)%100;
                  m += (j-k+a*m)%100;
                  f -= (i-j+j+d-d+h*m+k*n+a-f-d-c-i)%100;
                  g += (l-c+g-i)%100;
               } while( ++DOcnt[30]%5 );
               m += (l-c*m)%100;
            }
            for( ; ++FORcnt[46]%5 ; )
            {
               
               switch( ++SWcnt[15]%3 )
               {

               case 1:
               {
                  g  = (c+n+i-i+i-e+i-c-n+e+b)%100;
                  g += (k-d+b*k-m)%100;
                  n  = (m-n+g*m+m+m-j+i*f-b-l-a+c)%100;
                  j -= (j-f*j)%100;
               }
               break;

               case 2:
               {
                  g -= (h+n)%100;
                  j += (d+a*n+f+b+a-c+g+f+e)%100;
                  j += (k-d+b)%100;
                  e -= (j+d*j+e*g)%100;
                  i -= (d+j+k-f+g-b)%100;
                  f -= (m-j)%100;
               }
               break;

               default:
               {
                  f += (a-a-e+b*g)%100;
                  a -= (i*f-n+b*k-h-d+g)%100;
                  c -= (m-k-a-g-l+h+f)%100;
                  n += (h-l+a)%100;
                  g -= (c-c-c+a-h+c-f+k*j+m-c+a)%100;
               }
               }

               if( ++IFcnt[23]%10 )
               {
                  f -= (f-g-i)%100;
                  n += (i*l+j+d+f-k+b-a+c)%100;
                  h  = (h-g-h+c)%100;
               }
               if( ++IFEcnt[30]%2 )
               {
                  j += (a-f*l+h-i*m+b+c+i)%100;
                  a += (b-i-n*h+i-j*n+f)%100;
                  i -= (m+l+b-j-m-g)%100;
                  m += (m*d-l+b*g+k*m+k-k+l)%100;
               }
               else
               {
                  g += (l+l+j*j-d-h*g-g-g-f-j-h-j-a)%100;
                  n += (j-e-m*j)%100;
                  m -= (d-i+a+i+n+g*n+c+f-n+d*a)%100;
                  h -= (j+m-i-f)%100;
                  n -= (m+h-b-l-c+g+e+l*f-c)%100;
               }
               i += (m-i+b*i-n*h-i-b+g+d-l)%100;
               i += (k+b-h-m*h-n*e)%100;
            }
            k += (f-a)%100;
            f += (a+j)%100;
         } while( ++DOcnt[29]%5 );
         g += (b-k+f+e+n-h*b-m-l+e-i+g+c)%100;
         l -= (l*m+a-k*h-d-c)%100;
         l += (b-h-n+b+i*i*h*b-k-k+k)%100;
         k -= (i-d-f+j-b-d-i+h-d+i-g+c+g-n)%100;
      }
      m -= (f+n-j+e-e)%100;
   }
   a  = (i*b*i-h)%100;
   e += (n+l*k*f*g*l-j+f+l+f+h)%100;
   d -= (b+g)%100;
   g += (m+d-k-d+n-k*j+g-g-f)%100;
   l  = (g+d-j*m)%100;
   e -= (a+d-b+h+d)%100;
   a  = (a+c*j+l-k-a-l+j+a+c-h+i-g)%100;
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
                  a  = (m-l+i-j+k-l-k-m-m-b*c+c-i)%100;
                  i -= (b-l+m+h*b*g+l+d-j-j)%100;
                  b -= (j+m+c+a-f-i-l-h-k+l-a+g-b)%100;
                  h -= (m-f-d+h+m+b+e+m-l-b*l+h-i-l)%100;
                  c += (b+i)%100;
                  h -= (i+c+f-i*k*d)%100;
               }
               else
               {
                  c  = (d+c+f*l+k+l-k+c*i-g-g+d+j+d)%100;
                  m += (m-n+k-b+d-g+a+a)%100;
                  j += (c-g*k+f*n)%100;
                  a -= (i+i+m-c+h-m+j)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  m -= (c+m-k-j*k)%100;
                  c -= (e-b+i)%100;
                  k += (k-h*n+n+a-g+n+k+d+e-b-n-e)%100;
                  a += (c+n)%100;
                  b  = (h-f+a-m+k-d+h-a)%100;
               }
               do
               {
                  k += (d*f*a)%100;
                  i += (c+g+f)%100;
                  i -= (k+m-c-f*i)%100;
               } while( ++DOcnt[32]%5 );
               if( ++IFcnt[24]%10 )
               {
                  g += (f*d+m+c-l+e-i-g-a*g-l-l+l)%100;
                  d -= (h*n-l+k-c)%100;
                  e += (g+k)%100;
                  d += (h-d-h+m)%100;
                  k -= (n*g+m*d*i+j*g-d*j)%100;
               }
               h -= (c+e)%100;
            }
            for( ; ++FORcnt[48]%5 ; )
            {
               
               switch( ++SWcnt[16]%3 )
               {

               case 1:
               {
                  h -= (b+d+j+k+f-e-m*i)%100;
                  b -= (g*d)%100;
                  e += (h+h+b-m+d+i-k*h-e+n-g+h+m)%100;
                  g -= (l+a-k-k+n-c)%100;
                  h += (n-k)%100;
                  a += (e*e-n+i+a-c+b)%100;
               }
               break;

               case 2:
               {
                  i -= (g+d-d+f-h+l+j)%100;
                  c -= (c+g*c-a+c-h-j-c)%100;
                  l += (e+h+d+c+e)%100;
                  j -= (g*c+n*e-h+c)%100;
                  m -= (n*m)%100;
               }
               break;

               default:
               {
                  j += (i*i+m+e+h+g*f*l+a+g+g*i*g*b)%100;
                  c -= (j-c+g+a*k-l+a-f)%100;
                  d  = (e+l-f-j+d*l+f+m-a-l-a+d-e)%100;
                  j += (c*f+i*f+d)%100;
                  j -= (c+j*m-d*a+h-i-a+k)%100;
               }
               }

               if( ++IFEcnt[33]%2 )
               {
                  f -= (d*c-b*g-g-j+m-a+n-h+l-b-k*b)%100;
                  k += (d*a)%100;
                  a += (m+m+a)%100;
                  m += (k*a+d-b+n+j+i+c*b-g*h+h+k+n)%100;
                  l += (g*e+l+h+f+j)%100;
                  d += (h-j+g*l+g-d-k+h+l-g+c+l*f*e)%100;
               }
               else
               {
                  c  = (l+j)%100;
                  h += (h-h*g-i+j*b+l)%100;
                  f -= (b+j+f+l-n-e)%100;
                  d  = (k*a-n-g+l-n*d-i)%100;
               }
               while( ++WHILEcnt[32]%5 )
               {
                  i += (i*h+f-g*m-d-c*d+i+a-i)%100;
                  f += (c+j+c*j-b-a*j-k*k*n)%100;
                  i += (d*l-m-d+g+i*m-f*m+n)%100;
                  e += (e-k+f+e-m-g+n+a-l+a+f+k+a)%100;
                  g -= (m-c+h*h-b+e+k*h+e+c)%100;
               }
               f -= (g+b)%100;
            }
         }
      } while( ++DOcnt[31]%5 );
      b -= (l+d*m)%100;
      a  = (j+e-d+i-c-h+i)%100;
      h += (g+l*k*c+m+k+g+k+l)%100;
      i  = (i*b*i-n-a-j+l)%100;
   }
   e -= (h*g+n-j-b-e)%100;
   d -= (d+c-j-e*k+k+g+c-h+n+i+g-m-g)%100;
   d += (i*e+n+d+m*e-f+m+i)%100;
   l += (a+h+c-g+n-b+a-k+n+g*c-m-n)%100;
   f -= (e*f+e-n-c+c-n*a-c+g)%100;
   j -= (b+d+e*a*b)%100;
   h -= (a+b)%100;
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
                  g -= (k+h+c-g+c-l+a-k)%100;
               }
               else
               {
                  f  = (l-d)%100;
                  a += (j*g-m-h)%100;
                  e -= (f-n)%100;
                  g -= (j-j-k+d+i-i+i-g*a-l-e-g)%100;
                  h -= (i+g+b+e)%100;
               }
               while( ++WHILEcnt[34]%5 )
               {
                  f -= (a+n)%100;
                  f += (c+a*n-d-n*m*f-m+l)%100;
               }
               do
               {
                  a -= (i-d+b+k+d+h*f+j*e-h-i-e+h-m)%100;
                  h  = (e*l-i-f)%100;
                  n -= (l-a+n*n-c-b)%100;
                  m -= (h+k*j-i*n)%100;
                  f -= (e*f+c*l+l)%100;
               } while( ++DOcnt[34]%5 );
               d += (k+a-b-h*k*h-a*a)%100;
               for( ; ++FORcnt[50]%5 ; )
               {
                  b += (e-f+d-b+b-n)%100;
                  f += (a-h-n)%100;
                  h -= (i+c)%100;
                  c += (h+m)%100;
               }
               
               switch( ++SWcnt[17]%4 )
               {

               case 1:
               {
                  j -= (m*b+e+g-f+b-a+b)%100;
                  m += (n*a-j)%100;
                  g -= (g+c+b*d-d)%100;
                  d -= (f-h-c-a-d-a-g+a-b+a-k-c-c-b)%100;
                  b += (n+c+b+h-f-m+h-c-h+k*f)%100;
                  b += (g-l+j*m-l-h)%100;
               }
               break;

               case 2:
               {
                  m -= (n-d+h*j*c*b*f-f)%100;
                  f -= (c-j+g-e*e-l-l+f-c*c+c+c)%100;
                  i += (j*i)%100;
                  i -= (g+f+g)%100;
                  j -= (l*j+g)%100;
               }
               break;

               case 3:
               {
                  l -= (h+i*a+h-j-i*e+e-f-h-i*k+i+a)%100;
                  c -= (e+e*f)%100;
                  h -= (j+f-l-j+d+b-n+k-i)%100;
               }
               break;

               default:
               {
                  a += (k-f+d+i+d-e+a+a+l-h+d-n)%100;
                  a -= (b+f-f*i*h)%100;
                  h += (f-k*b+c+k-k*d-l*i+l*h-l+l-k)%100;
                  i -= (a-k*b)%100;
                  b -= (l*g-i+k+c+n+n-f+b+b)%100;
               }
               }

            }
            if( ++IFcnt[25]%10 )
            {
               if( ++IFEcnt[35]%2 )
               {
                  j += (d+l+a-m)%100;
                  a -= (n+h*h+e+n)%100;
                  a += (k-d-h+h+g+g*n-n-a)%100;
                  j += (g+i+m+n+k)%100;
                  j  = (h-m-b*g-a+m)%100;
               }
               else
               {
                  k -= (h+k+d-h-l)%100;
                  l -= (m+l-i*e-m-h-l+d-e-g-n+b-g)%100;
                  h += (g*f)%100;
                  g += (d+b-l)%100;
                  f -= (e+c)%100;
                  j += (k+i*n)%100;
               }
               while( ++WHILEcnt[35]%5 )
               {
                  b -= (g+k*h)%100;
                  l -= (i-g)%100;
                  f += (b+l+f+d*f+i+k-m*a+m-f-m-e)%100;
                  l -= (a-e+a)%100;
                  c += (m+f-f+a-c)%100;
               }
               do
               {
                  j -= (d+f-h+n+a+b-d-a-n)%100;
                  g -= (d-j-k+i+m+e-h+e-l-e-m-h*k)%100;
                  m -= (f-k+n-b+n-b-h-n)%100;
                  a += (n+j-b+i-a-m)%100;
               } while( ++DOcnt[35]%5 );
               b -= (f+h*c*g*k+m)%100;
            }
            d += (l-a*h+i)%100;
            d += (b-b-a-d-e-c+c+h)%100;
         }
         h += (n+c*k+k-j*d-c+b+d*i-m)%100;
         l -= (i*i*g+i+m-n-g*l+i+g+n-l+a)%100;
         k -= (j+l+c-b+j-j*f+c-b*c-l*l)%100;
         i -= (f-g+f-m)%100;
      }
      l += (i+a-n*c+m+m*f*l-e-e+e+h+g)%100;
      h -= (b+h)%100;
   } while( ++DOcnt[33]%5 );
   i -= (m+i)%100;
   m -= (h+n-i*i-k*g+j-l+d*j+h+m)%100;
   m += (e+c-b-b+f-d+a-i*e-a)%100;
   b -= (l+e-m*n+f-k-a+d+e*k-j+i+h-a)%100;
   g  = (m-i)%100;
   k -= (k*n)%100;
   d += (l*g*m+c+n-b+k)%100;
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
            d -= (i-j*a+j+a+e*k-j)%100;
            k += (j-h*k+c-l-j*a+c-h-m+f*i*k+j)%100;
            j -= (n*l-f-n+h+j)%100;
            m -= (k+c)%100;
            k -= (i-h*i+f*d)%100;
            c += (d-k+b*k*g-m*a+b-n)%100;
         }
         else
         {
            while( ++WHILEcnt[36]%5 )
            {
               do
               {
                  f += (l+n+m+c+g-g)%100;
                  i -= (j+i-a-k-h-i+d-k-g*g+g)%100;
                  n += (a*j*e+f+m+h)%100;
                  i -= (g-k-j+h-l+i+n+b-a+a+l)%100;
               } while( ++DOcnt[36]%5 );
               if( ++IFcnt[27]%10 )
               {
                  n -= (k+l+i*c-d-h-d*h)%100;
                  k -= (j+l*m+n-n-d+b-l+l*k)%100;
                  n += (h*h+i*n-c*j*l)%100;
                  a -= (k*e-e-a-l+d+h)%100;
                  l += (h-b)%100;
                  d -= (j+c-j+h+n)%100;
               }
               m -= (e-j-g+l+j+k+b+h+e-h*d)%100;
               for( ; ++FORcnt[53]%5 ; )
               {
                  d -= (j+d-j+h-f-b-d*k-f-j-k+e-c*m)%100;
                  n -= (m-k)%100;
                  e -= (j*l-g+j-b-c+a*c-m*j-j+n-c+h)%100;
                  n -= (d+h-n-j-c+b-d+n-d*e*l-n)%100;
                  g += (e-g+e+k*k-b+i+n*j-c-j-i*k+l)%100;
               }
               
               switch( ++SWcnt[18]%4 )
               {

               case 1:
               {
                  h  = (b-a-k*i+g)%100;
               }
               break;

               case 2:
               {
                  g -= (k-g*f-k-g+j*a)%100;
                  l -= (g-j-g)%100;
               }
               break;

               case 3:
               {
                  b -= (d*g+a-b*e-h-n-c-j+b*c+m+e-d)%100;
                  c  = (a*i-l+k-c+b+m+n)%100;
                  i += (h-i)%100;
                  b += (b+k-m+h-e+f-l+m)%100;
                  e  = (c*f)%100;
               }
               break;

               default:
               {
                  h -= (m-i*a+j+e*c-h+h+m-g)%100;
                  l += (d+l*k)%100;
                  d -= (h*d-a+a+c)%100;
                  g += (c+n*k*i-e-n-f+n+c-j+m*m)%100;
               }
               }

            }
            if( ++IFEcnt[37]%2 )
            {
               i += (n*b-j*l+i+n-b-d*g-l+g*b-g-m)%100;
               a += (n+e-c*f*k-l-m-h-d)%100;
               l -= (j*g)%100;
               i -= (n+i-a+e+d+j)%100;
            }
            else
            {
               while( ++WHILEcnt[37]%5 )
               {
                  m -= (b*n-c+m-m-a)%100;
                  e += (g-e*l-i-a+b+n+l)%100;
                  n += (k+m+d+n+f+m+f-k)%100;
                  e += (j+m+e-e+n-a)%100;
                  i += (e+g)%100;
               }
               do
               {
                  i -= (b-b-e+c*e*g+d-j+n-h-e)%100;
                  b -= (g-l+e-i+m-d)%100;
                  h -= (f*a+m*a+n+n*l+g+b)%100;
               } while( ++DOcnt[37]%5 );
               for( ; ++FORcnt[54]%5 ; )
               {
                  k  = (j-d-a+j*g+g+n+j*c+d-i-j*h)%100;
                  b += (e+n+f+d*i-j*j+g+n+f+j+a-k-i)%100;
                  a -= (f+c+h+f+n)%100;
                  d -= (n+g)%100;
                  d -= (g*f-d+m+l)%100;
               }
               if( ++IFcnt[28]%10 )
               {
                  j  = (d*j*i-f+f-d)%100;
                  b += (i-c)%100;
                  a -= (c-i+i*m+m-h-n-h)%100;
                  d -= (k-f-j+k-f)%100;
               }
               for( ; ++FORcnt[55]%5 ; )
               {
                  e += (j-a)%100;
                  c += (n*n*c+c-f-i*c-d-h-a-b+n-m)%100;
                  c += (e*b*m+c-b*n-m+c*l)%100;
                  h += (h-a-b+j*a*c+l+c+n-e+m+g-b)%100;
                  n -= (a*h*i*a*h-g+m*k-c)%100;
                  j -= (f+b*c+l+j*n-i-f-a)%100;
               }
               if( ++IFEcnt[36]%2 )
               {
                  j -= (k*m-k+n-m+n+j*g-l-c-l)%100;
                  f += (n*l-f+j*h*e)%100;
                  l += (b*l*n-i*e-n+c*f*j-m)%100;
                  l += (e-d+d+k-m-l)%100;
                  h += (g*d*h-a+e-b-k+i)%100;
               }
               else
               {
                  i += (h-g-m+l*j*i*l*m)%100;
                  c += (c-e)%100;
                  e  = (h+d-a+k)%100;
                  i -= (f*k-d-m-n-c)%100;
                  d -= (j+h+k*b+l-h-b*j-h)%100;
               }
            }
            b += (i+h-f-f-d+m*g+i-e)%100;
         }
         j -= (d-n-e+k-h+c-n+a)%100;
         c  = (n*k-k+m*g+i+c*b)%100;
         b  = (e+j+g*d*k-h-n+a-d-g)%100;
         n -= (a-d+n+h+e)%100;
      }
      m -= (f-j-f-b+h-h*i*c)%100;
      k -= (d+k-h-d-d*c+n-m)%100;
      g -= (b+e+a-c-i-m+c)%100;
      g  = (d-g+e*m+n-d-k-l-d+d+m*k)%100;
      c -= (b+e*i*c*h-l+h*l+j*j-b)%100;
   }
   d -= (n*n+f+g*c+i+n-i-k+e-f+k)%100;
   f += (n+b+e+b-l-h-j)%100;
   m += (d+b-c+h*e+h+c-n-i+n+f*l+g)%100;
   n -= (n+l*m-a+c*c-a*k*c-m)%100;
   l += (a+n-e-l-k+m-d-i)%100;
   d += (l+j*b+n-a-e+g*b+b+b)%100;
   d -= (d*a-c+l-h-l-i)%100;
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
         i += (h*n+d-b-f*l-e*e-a-j+g+i)%100;
         for( ; ++FORcnt[60]%5 ; )
         {
            
            switch( ++SWcnt[19]%3 )
            {

            case 1:
            {
               if( ++IFcnt[29]%10 )
               {
                  l += (m-d-g+d+d+h-j-a)%100;
                  f += (j-c-n-a*e-k+m*a-b+n)%100;
                  b += (j+k-c-i+l-l*l*n-b*h*m)%100;
                  h -= (h+d-k-n-b+a-k*m)%100;
                  h  = (j-j-h-h+l+k)%100;
                  j += (m+j*a-a-c*l)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  n  = (c+l-n-l-l-g-l-g-d-d+b+m*m*l)%100;
               }
               else
               {
                  n += (d-i-l+h+b+d-h+d+n-g)%100;
                  b -= (a+d*h+d*b+a-f-g-l-j)%100;
                  f  = (c-i*l-m+j-g+g)%100;
                  i += (k-b-i)%100;
                  h += (e-a+l+i*h+n-f-f-i-j+b-b+i)%100;
               }
               while( ++WHILEcnt[38]%5 )
               {
                  d += (i+n+c-b)%100;
                  l -= (b+c+j*n+f)%100;
               }
               do
               {
                  n += (n-g)%100;
                  d += (l-c-d+l)%100;
                  i += (n-k-c+j+e*e+f-d*c*g-m+d-j+l)%100;
                  a  = (n+i-b+c-i-n-l+g+i-d-h+m-b+m)%100;
                  e += (k*m-g)%100;
               } while( ++DOcnt[39]%5 );
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[58]%5 ; )
               {
                  m  = (m+i+f-g+f*h)%100;
                  c -= (g+k*m+l)%100;
                  g -= (m+g*e-g-c-b+b-k+k+m-l*h)%100;
                  k -= (h+b)%100;
                  g -= (h*n+g*b+g+l*g+d+c-j-e)%100;
                  j += (m-a)%100;
               }
               for( ; ++FORcnt[59]%5 ; )
               {
                  l -= (l-k+n-k-l-c-i+n+f-h)%100;
                  f += (m+d-n+i-f+g*c+i-k*c*m+i-m-j)%100;
                  g -= (i+k+c+g-k-m*c+h*l+b+j-e+h+d)%100;
                  c -= (f-j+n+f+g+i+c-c-h+a-g-n-e)%100;
                  l += (d+i)%100;
               }
               if( ++IFEcnt[40]%2 )
               {
                  m += (a*g*b-n+m-l+i-h+f-h)%100;
                  n += (m-i+d-j+j-h-a-d+a+l+e+e)%100;
                  l += (j*i-b-n)%100;
                  a += (b-h+b*d-e-g*m+f+n+n)%100;
                  e -= (g*l+a-h+m*f-d+k)%100;
               }
               else
               {
                  c -= (h*b+f-n-m+i+c-a*i-b)%100;
                  n -= (c+l-c*f-j*k+m+j*k+a)%100;
                  l += (b+i+e-n-f*n-b*e*e-c+m)%100;
               }
               while( ++WHILEcnt[39]%5 )
               {
                  j += (l+i+n-k-k)%100;
                  b -= (f+f)%100;
                  f += (b*m-g-e+n*f)%100;
                  k  = (j-g*h-b+j+d*g-b+f-c*k-a*e*b)%100;
               }
            }
            break;

            default:
            {
               b += (e+i+b-h-i)%100;
               g += (f+g+d+i*n*i*c*n+a*e)%100;
               l -= (l-a-j+f+d-d-i*d+b+d+j-i)%100;
               e -= (l*h+d+g-g+i+g+g)%100;
               e += (f+k-e-h+a-f)%100;
               f -= (h*k)%100;
            }
            }

            j += (i+k+l+l*c)%100;
            b -= (n-f+e-c)%100;
            i -= (e-k)%100;
            n += (k+a+d*e+f-i+l*l+l)%100;
         }
         g += (f+j*f-c-d)%100;
      } while( ++DOcnt[38]%5 );
      j += (c*f*a-b+a-k+j-n-i-i+j)%100;
      m -= (g+a-n*k-n*i-g-l)%100;
      e -= (e+d+h+i*b-c*g+i-a-k*b+h-k*l)%100;
      c  = (a+j-e-e+c*f*f-b-g+g+i)%100;
   }
   n -= (f-i*h-l+b+f+k-m-f)%100;
   h += (d+k+k+b-a+b)%100;
   a += (h-e-g*b-m+h+i+m)%100;
   j -= (k*k)%100;
   k -= (g-m-h*n-e+l+n-j)%100;
   g += (m+b-c-g+a*n-c-i-k+h-a+c-i)%100;
   i -= (a*i+k-c+i-a+c-n-n-e*f+a+m-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F19(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      if( ++IFcnt[31]%10 )
      {
         k += (f+k*n-i-e+f-m-l)%100;
         for( ; ++FORcnt[64]%5 ; )
         {
            
            switch( ++SWcnt[20]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[41]%2 )
               {
                  b  = (m*j-l-j-h*d+h)%100;
                  e  = (b*l*c-j)%100;
                  c -= (c*l*b-i-i*b-f+d*f-j-a+m+d*d)%100;
               }
               else
               {
                  e -= (i+k+a-i+f+d)%100;
                  f  = (g*g*m+k+g+e-g+i-m-c-l+h-n+f)%100;
                  e += (j-e-h+b+j-m-j*j+b)%100;
                  b -= (l-m-c-h-h+e-h-h+e+l+h+k-f+d)%100;
                  i += (k+b)%100;
               }
               while( ++WHILEcnt[41]%5 )
               {
                  k  = (g+g)%100;
                  e -= (j-n-l-c*d-e+l)%100;
                  j += (d+b)%100;
                  f -= (k-m-m+i-f+f-g+e*c)%100;
                  e += (m*c+h+e-i+k)%100;
               }
               do
               {
                  f += (h-d+i+a-f)%100;
                  d -= (a-g+g)%100;
                  g += (a+m-d+e+i+e+n+c-d)%100;
                  e += (a+m+d*j-b-n-i+m+c+l*b-d-a)%100;
               } while( ++DOcnt[41]%5 );
               for( ; ++FORcnt[61]%5 ; )
               {
                  d -= (k-a-a)%100;
                  l -= (n+l-c+g*j+d*k-h-d-h-e)%100;
                  h -= (d*n*k+h+e+j)%100;
                  m -= (d+a-d-l+l*e+h-a-f*i+l+k-c-c)%100;
                  c  = (n*g+m+a+m*f-n-e*n+g-e-h+i)%100;
                  n -= (a-g)%100;
               }
               if( ++IFcnt[30]%10 )
               {
                  m -= (e+j-l-g-k+l*c-a+f+j*f)%100;
                  e += (j*e)%100;
                  d -= (l+k*a+c+j)%100;
                  l -= (m-k-h*f+a+d-k+j+h-k+g)%100;
                  m += (a+f*i-g+d*a+b+e+b-f+h*j-d*h)%100;
               }
               for( ; ++FORcnt[62]%5 ; )
               {
                  k += (j+g)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[42]%2 )
               {
                  c -= (l-k-j)%100;
                  j -= (l*f+m+h+l*n-h)%100;
                  f += (a*b+b-l*e-j)%100;
                  f += (b-n+a*a+g*c)%100;
               }
               else
               {
                  e += (n+i-i-b+j)%100;
                  j -= (j+c)%100;
                  b += (f+h-m+i-l+k-c+a*f+m*e-k)%100;
                  c -= (j+b+a+e+m*f+b-i-b-m*n)%100;
                  f  = (c-j+l*j*h)%100;
               }
               while( ++WHILEcnt[42]%5 )
               {
                  i -= (l-f+l+n+e+f*e+n)%100;
                  n += (i-f+k+m+c+b+h-c-a+g*d)%100;
                  l += (e-b+m+k-g-d-m*l+l-c-b+e+a+g)%100;
                  n -= (g+i*m+f+f+i*e-j)%100;
                  n -= (d+b*m-l)%100;
                  f += (d*b+a-c+j)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  a += (l+b+c-g-k+k+i)%100;
                  a += (a-b-a+m*b-d+i-b-n*g)%100;
                  a  = (n+a+g+i+g-i-a+g+m+n-m-d+l)%100;
               } while( ++DOcnt[42]%5 );
               f -= (k+g+f-m*b+b+e+j+f)%100;
               for( ; ++FORcnt[63]%5 ; )
               {
                  n += (e-f)%100;
                  h -= (a-g+g-a+b*e-i*f-h-a-l)%100;
                  e += (f-g*f+g+l+n)%100;
                  l -= (j-g+n-b+b-n+f+m-c)%100;
                  m  = (j+d+f*n)%100;
               }
               k -= (k-g-e+a+d*l)%100;
               g -= (k+b-m-h)%100;
            }
            }

            h += (k*b-c+e)%100;
            i += (g-e+n)%100;
            c -= (h+l-e)%100;
         }
         a += (e*d+c*l-j+c-f)%100;
         k += (i+f-g-k-m-l+h+i-l+j)%100;
         i -= (k*d-a*m-i-e*m-g*f)%100;
      }
      g -= (a+i)%100;
      e += (f*a)%100;
      i -= (i-j)%100;
      f += (i+a-g*i-m+k-m-j+n*n+d)%100;
   } while( ++DOcnt[40]%5 );
   e -= (f+c-a+a*c-m+b+h-m+j-h+h)%100;
   j -= (n*f-j+i+j+l+m-i+i+h*a+e-k)%100;
   i += (e-i+k)%100;
   a += (m-n-c-m*l*j+l-e-h+k-e+c*e)%100;
   i += (a+b-d+m*c+k-l-d-h+m+c*a-i-i)%100;
   a -= (g+k+n*f-i*i+g-d-c+c+f*h+m-c)%100;
   n += (f-h*d+g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F20(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[21]%4 )
   {

   case 1:
   {
      if( ++IFcnt[33]%10 )
      {
         if( ++IFEcnt[45]%2 )
         {
            g += (j*h-f+i-h+b-n-c*k-g-m)%100;
            i -= (n*c*f-g+i-m)%100;
            j -= (d*k)%100;
         }
         else
         {
            while( ++WHILEcnt[44]%5 )
            {
               do
               {
                  e -= (i-h-m*d*m+n-b+h-m*l-h)%100;
                  h += (l-j*h*k+i+a+e)%100;
                  n += (a*e+h+i-a)%100;
                  j -= (j-a)%100;
               } while( ++DOcnt[43]%5 );
               for( ; ++FORcnt[65]%5 ; )
               {
                  b += (d*l-k*h*i-m-m+l-l)%100;
                  a += (k+c)%100;
                  l += (i+i+n+a+n-m-l-m+n-k-m-a*l+d)%100;
                  c -= (f*k*i)%100;
                  f += (m-f+a*n+n-e+m+j-l+d)%100;
                  d += (g*g)%100;
               }
               for( ; ++FORcnt[66]%5 ; )
               {
                  b -= (b*d+f*a-f-b-a-g-c*f*l-f)%100;
                  f  = (n-d+a-i-k-h+d)%100;
                  d += (m+j*e*h+a+b*h-h+c)%100;
                  b += (f-i*j+i*j*h+m*d+e-i+m*n)%100;
                  g -= (a*e*l+g)%100;
               }
               if( ++IFEcnt[43]%2 )
               {
                  b -= (j+g-e+j+j-i*d+j-b*e-c-j-a)%100;
                  a += (e+c*h)%100;
                  n += (k+l+j+c+k+g-l+m+f-a-i-l*m+c)%100;
                  e  = (b-j)%100;
                  m += (l-b+b-e+a+e+j+e-b)%100;
               }
               else
               {
                  e += (j*a+i-g-g+b+l+m*g)%100;
                  f += (n-n+n*c*a-e-h*h-c+c+g-i-m-b)%100;
                  k -= (d+d*i+k+c*d-a-f*l-h*c-f)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  c -= (f+b+j+b-i+f-b*k)%100;
                  h += (k+j+e)%100;
                  k += (b+e+j*b-j-j-c*a-i+b)%100;
                  d += (a+e-e*j-d*n*a-a-e*f+c+a)%100;
               }
            }
            do
            {
               if( ++IFcnt[32]%10 )
               {
                  j += (b+g-k-d-b-l-l*d+n-l)%100;
                  j -= (a+b-m-g+f-f+l+c*f+f+h+m)%100;
                  l -= (d+d+a-a-c+d-a*m-j-l-c+k)%100;
                  h -= (i+m+i+j-m*j-m*c-l-d+n)%100;
                  m += (e*n-i-j)%100;
               }
               l += (k+c-a*i*k*j*n)%100;
               for( ; ++FORcnt[67]%5 ; )
               {
                  n -= (f+k*m+k-e+i+e+a*j*a)%100;
               }
               
               switch( ++SWcnt[22]%3 )
               {

               case 1:
               {
                  c += (k-h+c-m-h*h*a+a*b+h)%100;
                  h -= (b+h+i)%100;
               }
               break;

               case 2:
               {
                  g -= (k+m)%100;
                  n -= (n+n)%100;
                  b -= (n+a*m-h)%100;
                  f += (i+d)%100;
                  d -= (i+a+c-c-m+g+d*b*h)%100;
               }
               break;

               default:
               {
                  g -= (j+e)%100;
                  m += (n-d+c*l)%100;
                  d += (f-d+c-l+g+l-m)%100;
                  m += (d*d-k-m-m+i*j+d-j+f*f+b+g)%100;
               }
               }

               if( ++IFEcnt[44]%2 )
               {
                  j += (a-j*j-m*c*c)%100;
                  j -= (d-m*f+g)%100;
                  f -= (h-k-m-f+m+m+j-c+i+k-m-d)%100;
                  d += (i-k-n-f+j-j-h+e*m+g-i+f+g*f)%100;
                  c += (d-f+j*m)%100;
               }
               else
               {
                  j -= (e*k)%100;
                  g -= (c+c*n*a-d+k+d-l+m+n-e+h)%100;
                  i += (i+j-j-l-j+k-n+k+h-d)%100;
                  a += (g+k+a-a+i*j-a-a-e)%100;
                  m += (i+k*i+l*c+n-a+e-e+h+a)%100;
                  e += (g-f*e*d-d*l*m+i+b-f+n-k-h+c)%100;
               }
               e -= (h-n-j+i-c-k-i)%100;
            } while( ++DOcnt[44]%5 );
            m -= (i-g)%100;
            n += (m*b)%100;
            l += (e+a+m-g)%100;
         }
         e  = (n+h-c-b)%100;
         d -= (k-l)%100;
         n += (e+n*d+a-m*f-l+c*i-d-c)%100;
         f -= (d-i-i+i+a+h)%100;
         m += (b+e*m+g)%100;
      }
      h += (d*k+a+i-f-f+c-m*m-m+l+e)%100;
      n += (d+m*j+k+a+b+f+f*d+a)%100;
      i += (h-k*m+e-e+j-j-j*j+g+e-n+j)%100;
   }
   break;

   case 2:
   {
      i -= (i+n-b-j)%100;
      g -= (h+n-n-a-a-a+j-j+h-h+g*h)%100;
      i += (n+n-h-j+j+f*k+l)%100;
      h += (d*k*l*a+h-i-k*f+k+l*m+a+e+e)%100;
      i += (n-i-k*h+h-k-j+c+h-g-g*e)%100;
   }
   break;

   default:
   {
      e -= (b+g+l*b+m-a)%100;
      d -= (a-k+b-l-d-b-i+g-g-a-j)%100;
      a  = (h-i)%100;
      m += (g*n+d-m-c+f*d+f+n-a+c-a+j)%100;
   }
   }

   b -= (i*d+f+b+b+a+f-a+i*i-j)%100;
   e += (l-e+j*h-b-d-g-d*m)%100;
   m -= (g-f+d+n*k*e*f-h*j-l+c)%100;
   b -= (h+c-j+j-f)%100;
   i += (k+b+l+k+c*h*e*h*d+h+d-g)%100;
   k += (a+g*e-a-i-f+n+n+n)%100;
   n += (j+n-c-m-n-e-m+g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F21(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[46]%5 )
   {
      do
      {
         for( ; ++FORcnt[70]%5 ; )
         {
            if( ++IFcnt[34]%10 )
            {
               for( ; ++FORcnt[68]%5 ; )
               {
                  n -= (k-b+j-i+n+b+h-n-i+m-d-f+m)%100;
                  e -= (d*i-c+h+k-k-f+m+f*a-f-h)%100;
                  d  = (m*a*j-h*n-j-h+f-h-a-l*n-h+h)%100;
                  d -= (g-a)%100;
                  l += (a-d+e-j-k-i-e-m+j-a-m*j+c)%100;
                  m -= (i+a+h-k*b*e)%100;
               }
               if( ++IFEcnt[46]%2 )
               {
                  h -= (g+j+j+b*g*k+m+k)%100;
                  a  = (g+i+b+b-a+n-k*b-e*b-e-b)%100;
                  f -= (f-k*a)%100;
               }
               else
               {
                  k += (n*c-g-g-f*g*g-h+c+i*m-l-a-i)%100;
                  j  = (i-h*f+f-b+n*a)%100;
                  j += (k+n-e-l+m+b-a)%100;
                  k -= (f+f)%100;
                  i += (n+a*b-m+d+b+f)%100;
               }
               while( ++WHILEcnt[45]%5 )
               {
                  c += (d+j+e-f-l-f*c)%100;
                  n += (c+l+a-f+h+b+a-d)%100;
                  e  = (a+g+e+c-i+m+j-a-a+c*m)%100;
                  l -= (j-m-c*i+m-l-g)%100;
                  k -= (e+e+a-i-a-m*l+l-l+k+b)%100;
               }
               do
               {
                  c += (n-k+f+j-d*n*f-l+d-a-m*e+l+i)%100;
                  k -= (e+m*h+h)%100;
                  i += (f+b-a+i)%100;
                  n -= (m-k-b+n+c-m)%100;
               } while( ++DOcnt[46]%5 );
            }
            d -= (e-b+m-d-i-i-b*b-k+n)%100;
            for( ; ++FORcnt[69]%5 ; )
            {
               
               switch( ++SWcnt[23]%3 )
               {

               case 1:
               {
                  e += (g+j+h-f+j+g)%100;
                  g -= (m*j-j+f-e+e-d*c)%100;
                  h += (j-k*n-e-d-k*n+j+f+n)%100;
                  b += (l-c*l)%100;
                  l += (f+m+m+n+l+m-k+f*b*b+i+f+d-l)%100;
               }
               break;

               case 2:
               {
                  f += (h-h+c*a*n+i*b-h-j)%100;
               }
               break;

               default:
               {
                  g += (d-n-k*c-k+f+h*n*c)%100;
                  n -= (f+g-a*a+e+i-f*d-a+h)%100;
               }
               }

               if( ++IFcnt[35]%10 )
               {
                  h -= (i-i)%100;
                  f -= (f+n+l-j-b+d)%100;
                  k -= (n-d-n-b+h-l-c-i-m+m+g*a)%100;
                  a  = (g-k+n)%100;
                  f -= (e-a+e+e*e+j-a+e-e-j+h-d)%100;
               }
               d -= (l+k*e*c-j+i+h)%100;
               e  = (f*h)%100;
               d -= (i+c+b+m+d+e+g-l+k)%100;
               d -= (j*h+m+j-k*c+n-a-e-j)%100;
            }
            h += (e+c)%100;
            d  = (c-m)%100;
         }
         i -= (n*m)%100;
         m -= (n+d+d*m+m-n)%100;
         n -= (b+b+a-e+e+j-g-d)%100;
         c += (n-g+f-e+e+i+d-h-b*f*n-b-k)%100;
      } while( ++DOcnt[45]%5 );
      i += (c+j+e-g)%100;
      n += (a+l+m-a*a)%100;
      f += (m-c*l-l-g+h*k-i+a+n+d)%100;
      j -= (c-m-g+n*d-i-k-i+c)%100;
      h += (j+k-e-m-f-n-a+d-e+g+c-h-l)%100;
   }
   k -= (i+i-d+m+a-a)%100;
   f += (n+c+k-m+e*b-f-d-n)%100;
   h += (g+a+h+a+l+f-a+h-b+f+i)%100;
   d  = (i*a+k-f-f+i-a+c+a-f-i+l-g)%100;
   h += (i*i*l*f-k-j)%100;
   j += (m*b-d-b-i+j+c*f*k)%100;
   f += (k+d+j-b+b+e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F22(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[49]%2 )
   {
      l -= (b*g*k*m-m)%100;
      i -= (b-k+f-e+b)%100;
      e += (i*g-k-f*g)%100;
      e  = (h-i)%100;
      a -= (k+k+c)%100;
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
                  i += (j-k-h+e*m-n)%100;
                  c -= (j-m*c-c-e-f+n)%100;
                  a += (l+n*n-b*f+i+a+m-n+a-h+h-b+n)%100;
                  f += (i-c-a+j+i+b-j-k-a*d*h-i)%100;
                  n += (k-n-b-b-c-i)%100;
               }
               if( ++IFEcnt[47]%2 )
               {
                  h += (h-f)%100;
                  h += (c+g+a-c)%100;
                  f -= (f-b-m*c+d*d-j*b)%100;
                  a += (i+g-e-e+d+i+m*g+h*b*f+n)%100;
                  d -= (a-e+n-h-f-b+k+b)%100;
                  a -= (d+e+i)%100;
               }
               else
               {
                  b -= (i*a*j+m*n)%100;
                  c -= (n*f)%100;
                  f += (k+l-k*l+a*h-i*f+i*m-l-b+i)%100;
                  g += (h+g-k*m+k)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  a += (j+g+b*c+n)%100;
                  k -= (h*g+c-b+g+i+h-l+n*m+d+f+i)%100;
                  i -= (g-c)%100;
                  j  = (g+j+g*i-d-e)%100;
                  f  = (b+j-k+l-e+b+g+c)%100;
               }
            }
            do
            {
               if( ++IFcnt[36]%10 )
               {
                  j -= (b-j-k-b-h-n*h)%100;
                  g  = (k+j-k*n*j-m-b+a-l+e)%100;
                  n -= (l-d-c+j+f-f)%100;
                  k -= (d+d+c-e-f+n+k+k-k)%100;
               }
               l -= (i*e+m+i*k+k+g-a+e-i+i+e*i)%100;
               for( ; ++FORcnt[73]%5 ; )
               {
                  n -= (m-l)%100;
                  k -= (g-l)%100;
                  b += (k+b-g*d+e*n*h*l*m-c-h-b-e)%100;
                  a += (f-c)%100;
                  a += (m-h)%100;
                  k += (c-e*g*j+m+j)%100;
               }
               
               switch( ++SWcnt[24]%3 )
               {

               case 1:
               {
                  a -= (g-n*i*h-d+e-d-a-l+i-l)%100;
                  d += (n-f*g-j-g*d+k+c-j)%100;
                  m += (h-a-l+c+n+c*b+b+d+j-l+h-a+h)%100;
                  a  = (j-k*b-d*a+e*f*d+g+h-a+h*e-j)%100;
                  j += (i-c*i+n+a*c-i+f+l*m*n+n+m+a)%100;
               }
               break;

               case 2:
               {
                  f += (n+h-i-l-k)%100;
                  j += (i*m)%100;
                  k -= (i+m+c*h*j)%100;
               }
               break;

               default:
               {
                  j += (g-b+k)%100;
                  c  = (m-k*a+h+d-d-n)%100;
                  h -= (k*d-i)%100;
                  l += (i-f)%100;
                  a -= (d-n-j+g-l*i-a-h+k*m-f-i)%100;
               }
               }

               if( ++IFEcnt[48]%2 )
               {
                  k -= (l+d-a+h-g*h)%100;
                  c += (j+h-b-e*n+n-k-k-c+k-d-g+i-m)%100;
                  a += (j+l*a-d+l-i*h*h-l)%100;
                  b += (j-l-e)%100;
                  d  = (f+d)%100;
                  l -= (k*h-a+d-k*a)%100;
               }
               else
               {
                  e += (j*n+j-g-e-g*m-j-j*l)%100;
                  j += (m+c+c+c)%100;
                  g += (f-d-b*i+n*n-d*k+n-n)%100;
                  d += (d+j+i*h*c)%100;
               }
            } while( ++DOcnt[48]%5 );
            f -= (a+l)%100;
            c += (a-j*g-l)%100;
            c -= (a*b-k)%100;
         } while( ++DOcnt[47]%5 );
         e -= (i-g+h*l+b-m-n-i*i+k-b*g-i+m)%100;
         d -= (a-i+c-n-g+k+f+c)%100;
         f  = (b+d-i-g+h-g-h+a*m*n-k+g*b)%100;
         g += (n-m+e+d-f-a*d+i-g-i+k-i)%100;
         b += (d+a+i*h-n-h+m+j-e-h)%100;
      }
      c -= (n-m+m+b+g+k-l*m)%100;
      k -= (h+k-e-i-j+m+c*i-n)%100;
      b += (n-m-i)%100;
   }
   n -= (n+i+k-e*h*n)%100;
   g -= (e-a)%100;
   g += (k*h)%100;
   k += (m-c-a-h-a-b-k+l+h+l+n+m+i)%100;
   i += (e+j+h+e+g*k*l-a+e)%100;
   m -= (a-h+j-d+i+a+k+c*e+b)%100;
   g += (c-c+m)%100;
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
                  g -= (i-k-e+d+j+k+l-f)%100;
                  m -= (m-i*n+k-g+f+a+g*g+i)%100;
                  d -= (a-e+d)%100;
                  a += (k+n)%100;
                  a += (i+l-k-m+l+d-f*f+d)%100;
                  m -= (a*l+m+i-j*g+m+l)%100;
               }
               if( ++IFEcnt[50]%2 )
               {
                  n += (e-k+h+b-b-j-j+n+l+a+l-f)%100;
                  e += (n+m*l+b-b-b+e-h-j*e+e+h)%100;
                  a += (a+b+m-a+f-i+m-m+d+n)%100;
               }
               else
               {
                  m -= (n-n-g*g-c-f*j-b-a-b+l-c+m-l)%100;
                  m -= (i+j+k+f+c-d+a-l*f-e-e+d*b+h)%100;
                  a -= (g-l+h-h-c+m-c*g+h)%100;
                  a += (a+m+g-h+g+n+d*d+m-l+a)%100;
                  j -= (n*d+c-e*c*h-e+e*i-d+i-f-f)%100;
               }
               while( ++WHILEcnt[49]%5 )
               {
                  a += (c-j-e)%100;
                  e += (k+a)%100;
                  h += (m*g+l+a+m*a+f-m-g+j+d-g-m+e)%100;
                  b -= (k*l*e+h)%100;
                  f -= (f-k-f+f-d-g)%100;
               }
               do
               {
                  i  = (g-e-d*g-n-g-h)%100;
                  h += (l-j)%100;
                  e += (k*d+g+a*h-c*f-j+b+l-c-m+i-k)%100;
                  g += (b*k)%100;
               } while( ++DOcnt[50]%5 );
            }
            e -= (k+n*h+e+n)%100;
            for( ; ++FORcnt[75]%5 ; )
            {
               
               switch( ++SWcnt[25]%3 )
               {

               case 1:
               {
                  m -= (i-b-c*l-e+e+e-a-i+g*h)%100;
                  h += (n*e-a+h-e)%100;
                  l += (d+b-n-a+k+a-g*h)%100;
                  l += (l+h-f+m-a+c+f+e-f)%100;
                  l += (d-j*j*f*b*b+c-d+j-c-d)%100;
               }
               break;

               case 2:
               {
                  m += (k-a)%100;
                  i -= (g*f-a-a*e+l+c*h-l+d+j+g+e-i)%100;
                  g += (h-m+h-m+g*a+l+c-c)%100;
                  l -= (a*h-f+f-m-m-h*i+k+h-e+f+n*j)%100;
                  i += (m+b+f-k)%100;
               }
               break;

               default:
               {
                  g -= (g+b+c-j)%100;
                  j += (j+j+n-l+c+a+n+g+b+n-m*c-m-d)%100;
                  h  = (m+c-k*m-l*k-e+h*a+d)%100;
                  h -= (k-i-b-m*c*m+f)%100;
               }
               }

               if( ++IFcnt[38]%10 )
               {
                  i += (l+a)%100;
                  k  = (h-l+k-g+m-i+m-g+k*k+l-g+n)%100;
                  i  = (j-k)%100;
                  e -= (e-d*f+d-k+n+j+n*i*g)%100;
                  i -= (l-k+j*i+i-h-a+l+j)%100;
                  k += (d-d-b+e+c)%100;
               }
               if( ++IFEcnt[51]%2 )
               {
                  m -= (h-h-j*g+i-j*i+m-h*n-a)%100;
                  f += (c+b)%100;
                  b  = (m-e-j*a-j-k+c)%100;
               }
               else
               {
                  l += (b+g-d+h-k-j+k*m-h*d+b+c+d)%100;
                  c -= (j-d)%100;
                  l -= (e+h*f+d-l-d)%100;
                  c -= (c-a-d-b+l-f+h-g+j)%100;
                  j += (d-j+n-f-i-j+e-g-h+m)%100;
               }
               c += (f*g*h+m+e+a-k-h-l+j+a)%100;
               e += (f*j-m+k+d-i-e-i-d)%100;
               i -= (j+h*d+b*g-b-i*a)%100;
            }
            l += (n+l)%100;
            b -= (i-i*e)%100;
         }
         f -= (j-c+e+g*f-d-i-n)%100;
      } while( ++DOcnt[49]%5 );
   }
   i -= (m-b*m+b+b*c-g+m)%100;
   k -= (n+k-l*l*k-m*n+l+h+g)%100;
   d -= (h+m+b+a)%100;
   n  = (n-a+h+e+e-g*h+i+k+n-l-k+e)%100;
   c += (b+k-h+l-i+k-b+b+l*g-b-e)%100;
   e -= (l-c)%100;
   k -= (a+m*j-n*f+g*e+g+k*i+e+g+a)%100;
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
                  i -= (a-f+a+n-m-g-h*j+k-n)%100;
                  h += (l-e-c-h*i-n-c-b-k+n-l+e)%100;
               }
               else
               {
                  a += (l+n-l+l+l-g)%100;
               }
               while( ++WHILEcnt[51]%5 )
               {
                  l += (c*f*c-g-f-c*n*l-j)%100;
                  a += (k-k-a)%100;
                  j -= (g-b-c-k-l*e+a+m-f-n+h+c)%100;
                  h -= (c-b+d-c+k-g-j)%100;
                  j -= (k-a+m+e)%100;
               }
               do
               {
                  l += (j-j+a-m+i*n-a+h-d+m*h+b+g+c)%100;
                  b -= (k*h)%100;
                  a += (j+m*e+n*b-l*h+e*g-k*d-f)%100;
                  k -= (c+h)%100;
               } while( ++DOcnt[52]%5 );
               if( ++IFcnt[39]%10 )
               {
                  h -= (n+e+j+i)%100;
                  f -= (g+i*m+j*i+j*k)%100;
                  m  = (a+j-e)%100;
                  h += (e-j+n+j-h+a+g+m+l-m+h*j)%100;
                  n += (h+k)%100;
                  d  = (k-a-c+d+e)%100;
               }
               j -= (f+k-f*d-c-d+c+b*i-j)%100;
            }
            for( ; ++FORcnt[79]%5 ; )
            {
               
               switch( ++SWcnt[26]%3 )
               {

               case 1:
               {
                  j += (k-a+d+n-g-i-a+m-d+j-d)%100;
                  m -= (l-n)%100;
                  g += (b+g-c*m+d*d+h+n+a*d+e*l-n)%100;
               }
               break;

               case 2:
               {
                  c  = (b+c-d+b)%100;
                  k  = (a+g+i+h+e-e*a-m+d+j-c+f-a)%100;
                  f -= (d*m+i-c-c-h-j-b+b)%100;
                  h -= (a*h+a-j-n+l)%100;
                  h -= (l*j-c+k-c+m)%100;
               }
               break;

               default:
               {
                  d += (h*d-j+n-k+n)%100;
                  i -= (a*l+e*i)%100;
                  b += (j*j+d-n+b+l)%100;
                  i += (e*g*l-c-e-h-l+m+e-b*l)%100;
               }
               }

               if( ++IFEcnt[53]%2 )
               {
                  j += (a-k)%100;
                  c -= (e+m-k-f*g)%100;
                  n  = (n-k-f+l-b*b+i)%100;
                  k += (n+c)%100;
                  k += (h+c-f*i-d-m+g-n*i-l+j+l+c+n)%100;
               }
               else
               {
                  f -= (k*h-c-d-c+g+h)%100;
                  n -= (h+a+f)%100;
                  a -= (g*j*i-b+j)%100;
                  g -= (c-h+n)%100;
                  c += (g+h*h-e*f-k*h-d-g-f-j)%100;
                  k += (g+c)%100;
               }
               while( ++WHILEcnt[52]%5 )
               {
                  l -= (l-g)%100;
                  m -= (e*e+f*c*i-f+a-h+e+c-a)%100;
                  e -= (k*g+c+k*c*l*m+k+l)%100;
                  a -= (f-m-k+e-n-a*l+b-c-n)%100;
                  f -= (i-d-b+m)%100;
               }
               do
               {
                  i  = (c*f-j+d-k-h*g*e)%100;
                  l += (i*i)%100;
                  k -= (c+c*n)%100;
                  e += (l+k+m+h-b+b-c+g-e+g+h+m+d+f)%100;
               } while( ++DOcnt[53]%5 );
               for( ; ++FORcnt[78]%5 ; )
               {
                  h += (b*i+b-m-m-e-d)%100;
                  g -= (c-j+f)%100;
                  l  = (a-d-i*d-i*c+c+a)%100;
                  e -= (d+j+b)%100;
                  i += (e+g)%100;
                  l -= (k-n-b)%100;
               }
            }
            if( ++IFcnt[40]%10 )
            {
               for( ; ++FORcnt[80]%5 ; )
               {
                  m -= (j+n*d*l+g-h-e*i*i-i-i)%100;
                  n -= (l+i-j-b-h-c+l+a+b)%100;
                  b -= (k-n-a-g-h+g+i)%100;
               }
               e  = (i+d-c*h-k*l-g+h+l*g-e+k)%100;
               d += (e+d)%100;
               f  = (i*n)%100;
               m += (j*j-b-j+b-f-f-i+i)%100;
            }
            l += (m*h-n-i+b-m*e+a)%100;
            k += (d+f+j-l*e-i)%100;
            n += (c*l*m+b)%100;
         }
         n += (i*l+h-l+a*m)%100;
         m -= (b*e)%100;
         j += (l-d+h)%100;
      } while( ++DOcnt[51]%5 );
      i += (n*a-a*a-k-c-n)%100;
      d  = (l*g-l*l-c-j-k*e+c-m*d*k)%100;
      b -= (g+e+k-h-a*d)%100;
      e += (d-f-c*g+a*h*m-f-h)%100;
   }
   k -= (m-a+d-n)%100;
   e -= (j*c)%100;
   g -= (a+a-h+c)%100;
   c -= (i-f-j+b+b+m-c-j+h)%100;
   k -= (n+f+i+e-k+b+k-e+h+k+a-n)%100;
   f -= (l+b+h+g+b*f+m+l*e+e)%100;
   m -= (g*b-j-f+e*m+n*n+b+f-d+h+a+c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F25(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[56]%2 )
   {
      a += (h-g)%100;
      b += (g+e+d+c-c+f-b-g+l+e*n*e)%100;
      f += (j-m+h*h-b-h+f+b*b+m+f+e*g)%100;
      a -= (k*d)%100;
      i -= (f*n-b)%100;
      i -= (l-c+e-j+b-a+n+l+h-n-n-b)%100;
   }
   else
   {
      while( ++WHILEcnt[56]%5 )
      {
         do
         {
            b -= (k+h+j+c-d)%100;
            for( ; ++FORcnt[82]%5 ; )
            {
               
               switch( ++SWcnt[27]%3 )
               {

               case 1:
               {
                  j -= (f+m-g-b-m+a-i-g-n+n+h*n-c+d)%100;
               }
               break;

               case 2:
               {
                  k -= (f+h-h-b-j*d+i*e-c)%100;
                  b += (b+a+l+a+k-g-m+k)%100;
               }
               break;

               default:
               {
                  l -= (b+m-i+e+h+c-n*a-j-l*f*i)%100;
                  g  = (c+m*c-g+d+n-b+a-i*f-n)%100;
                  n += (m+h-j-b-l+h*m)%100;
                  h += (e+m+h*e)%100;
                  n -= (e*c-c*l+m-c+n+k+n*k*d+m+n)%100;
               }
               }

               if( ++IFcnt[41]%10 )
               {
                  l -= (c-g-b+f+m)%100;
                  i += (b+g-g-i+f*j*c-h-h-a-l+e-m-c)%100;
                  m -= (f+b*e+e-g+g-i*e-m)%100;
                  e -= (k*k-c-k+d*f+g+f*g+m+l*d-g)%100;
               }
               if( ++IFEcnt[54]%2 )
               {
                  n += (l+m*h-j)%100;
                  j += (j+c-b*i-n+l-g)%100;
                  e += (k+g-f+i)%100;
                  g += (d+m)%100;
                  c -= (a-i+c)%100;
               }
               else
               {
                  j -= (f-l*j+g)%100;
                  l -= (b+h+k-c-j+e+h+d+a-b)%100;
                  l += (e*g)%100;
                  j += (g+f+f-m+a*f+l-b-m)%100;
                  n -= (k+j-g+e+b-g+k+n-f-c*h-d+l)%100;
                  g += (l-n)%100;
               }
               while( ++WHILEcnt[54]%5 )
               {
                  k += (k-a+a-n-j*b+g+l)%100;
                  d -= (i*b+c+e*f-n-c+c-g*g)%100;
                  g -= (g*h)%100;
               }
               do
               {
                  e -= (j-g+c-b+m*e+b)%100;
                  j -= (f*m*b-h+g-a-j+n*d-f-a)%100;
                  g -= (a*g*l+e-b-h+n-h+f)%100;
                  b  = (f+e-a+d+i-c-j+n+d*i-g)%100;
                  m -= (m+j+m+k+b+d+k-n+d*i+i)%100;
               } while( ++DOcnt[55]%5 );
            }
            for( ; ++FORcnt[84]%5 ; )
            {
               for( ; ++FORcnt[83]%5 ; )
               {
                  j -= (c+a*m*c*g+d+g*n+d)%100;
                  g += (n+n-e+b+g+e+m-j-m-a+b)%100;
                  a  = (b+a-n-e+b*h)%100;
                  f  = (b+f*g-e+f-f*c*h-k-l-d+d)%100;
                  g += (l*c-n+l+a+m-f*e*c*g)%100;
                  e += (m-m*m+c+n-a)%100;
               }
               if( ++IFEcnt[55]%2 )
               {
                  b -= (d-l-f)%100;
                  e -= (c-h+f-b-g+h-a+i+h-f*a*e)%100;
                  h += (g+j+h+m+g+e-l+d*b+n-c)%100;
                  a  = (b+f)%100;
                  g -= (f+j*m+j-m-d-m+m)%100;
               }
               else
               {
                  h += (m*j)%100;
                  b += (e+n+d)%100;
                  b += (i-d*m-g-j+n)%100;
                  k -= (c+d+d*a-i+k*n-m+c+b-h)%100;
                  n += (e*i)%100;
               }
               while( ++WHILEcnt[55]%5 )
               {
                  d  = (m-k+f)%100;
                  a -= (d+f)%100;
                  g -= (m+l+b-n+j+m-c*d-c-n*e+l*j-h)%100;
                  m -= (l+l-b-d+i-h)%100;
               }
               c += (b+d-i+n-n-m)%100;
            }
            l -= (n+l)%100;
            b -= (d-k+d-e+e-n+e+f+e-m+j)%100;
            h -= (j+l)%100;
         } while( ++DOcnt[54]%5 );
         g += (h-m)%100;
         e += (f+n+g*k-g-f-k+g-l+b)%100;
         g -= (g*a-l+m-j-b+f-g+k-h+h*l)%100;
      }
      a  = (c*g+j*j)%100;
      a -= (i-e)%100;
      n += (d-j)%100;
      d += (h+f-b*g*j-j)%100;
   }
   a += (e+c-h-g-c+m)%100;
   h -= (n-c+k+k-k+g-l+g+g*e*j+n)%100;
   n -= (l+m)%100;
   f -= (l+d+l-m+d-h+m-a+c*a+f-m*h)%100;
   e -= (d+g+b+g-c*m+h*l)%100;
   f -= (e-i+c)%100;
   c += (g+g-h+h*g+k*c+k+d*n)%100;
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
         i += (g+c*n+h*c-f)%100;
         for( ; ++FORcnt[87]%5 ; )
         {
            
            switch( ++SWcnt[28]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[57]%2 )
               {
                  l += (m-a+l+f-j*n-e*b*l+k*i-n-h)%100;
                  m += (d+f-d-j)%100;
                  k -= (l+g+l+k-l-d+c*c*l-c-f+a)%100;
                  d -= (c+m-k*n-b+f+n+c-i+f-d)%100;
                  k += (c-n+a+d)%100;
               }
               else
               {
                  c += (h-m+a*l*b+m+j+i)%100;
                  n -= (h+m)%100;
                  d -= (f*h+c-i-b+e)%100;
                  j += (a-b-h*n+g-j-a)%100;
                  n -= (h-n-c*b-n)%100;
                  i -= (c*h+n-j-n-f+l)%100;
               }
               while( ++WHILEcnt[57]%5 )
               {
                  j  = (b*g*b*a)%100;
               }
               do
               {
                  k += (h+n-h*d+i*n*c*h)%100;
                  d -= (c+k)%100;
               } while( ++DOcnt[57]%5 );
               for( ; ++FORcnt[85]%5 ; )
               {
                  j += (j+g)%100;
                  d  = (n+e*c-g+f-f-h)%100;
                  d -= (n+f-a-b+b+g-f-d*a+m+i+g-h-l)%100;
                  l -= (k+h-j-l-e-a+m-d+c)%100;
                  e += (e+i-a*b+k*i+d-h+a)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFcnt[42]%10 )
               {
                  c -= (h+d-c+m)%100;
                  g  = (m+k+j+c-m)%100;
                  j  = (d+n-g-m-l+c)%100;
                  i += (e*b+g+g*f+l*i+h+g+j+m-m+f)%100;
                  b -= (k-c*n*j*f)%100;
                  f  = (d+m+m+n+a-n-e+a-d*b)%100;
               }
               for( ; ++FORcnt[86]%5 ; )
               {
                  i -= (j+n)%100;
                  a -= (i+b+h-k-c*j-j-h-e+j)%100;
                  k += (i-a+h+m+h*l)%100;
                  f += (k-k-b+f+g-n+l-l-n-a)%100;
                  g -= (j*f+d+j+c+a-a*f+i-h-l*i-g-l)%100;
               }
               if( ++IFEcnt[58]%2 )
               {
                  l += (l*f+k)%100;
                  k += (h-b)%100;
                  k += (f+i*n+h+a*h+c*e-a-h*f)%100;
                  e += (m+h*b)%100;
                  n -= (d-k+b*c+d+g+g+m-h-g+f*g-d)%100;
               }
               else
               {
                  k += (b+g+d-b)%100;
                  f -= (l+k*d*d-e*h+f)%100;
                  g += (l+b+k+n-b*j-l*d-i-m+b-e)%100;
               }
               while( ++WHILEcnt[58]%5 )
               {
                  e += (g+f*a-i+k+g+g+e+l*m+j+g*h)%100;
                  h += (c-i+a-e*g*k-n+h)%100;
                  e += (f-e+k+g+m+h*b*h-m-c+k*k*m-g)%100;
                  n += (j+j-b-j+m+l-a)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  j -= (h-f+b-k-n)%100;
                  a -= (j-f)%100;
                  j += (j-g)%100;
                  h += (n*h+j+f+i*g+m-g-g+m-b*b*g-k)%100;
                  d += (c+k-h)%100;
               } while( ++DOcnt[58]%5 );
               k += (l+n*g-h+d+f+i*f-c+c-i-i+f+i)%100;
               j += (a-a-j-h-n-e*e-a)%100;
               n -= (g-n+h+f-g*g-n+f*i-d+a-m)%100;
               e += (l*l*j-j)%100;
               j += (h+e*b+g-j-i*i*l-f+e+m*l-f+f)%100;
            }
            }

            b += (n+c+l*j+f+m+i+g+n)%100;
            h  = (d-f+f-a+l-h-e+k-l-c+g)%100;
            l -= (d-i)%100;
            k  = (h*f-h-l-i+i-b-i)%100;
         }
         k -= (e+g+n*f*m*g*i*g-i)%100;
      }
      a -= (m-g+h-b+k+m-f-e*k+f)%100;
      d -= (h-a+n)%100;
      c -= (h+b+f-i+c-b+m+k-k*g+c-k)%100;
      n += (i*j+a-i+i+f*g*j-j-k-e+d+g+j)%100;
   } while( ++DOcnt[56]%5 );
   l += (i+c+i+b+d)%100;
   h += (c-m-f*c+n*n-b*n)%100;
   n -= (b+b+h-f-m-f*d+c-c+m+l)%100;
   f += (c+c-a+f*d+e-j)%100;
   k += (m+n-j+e-c+h*m-m)%100;
   h -= (a*d+b+f*n*k+m)%100;
   j += (b*n-f)%100;
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
         l -= (e+d+j+k-e)%100;
         if( ++IFcnt[45]%10 )
         {
            if( ++IFEcnt[60]%2 )
            {
               while( ++WHILEcnt[60]%5 )
               {
                  c += (h-e*i)%100;
                  i -= (h+d+g-l*m*c*l-j*l+l)%100;
                  m += (l-f+n+i+d*l-d+c-i-f*d)%100;
                  b += (n-i-e-m+d-h-e*e*h+c+b+a-i)%100;
                  a -= (f-i-b*n*i*e*m*f)%100;
               }
               do
               {
                  k += (a+e+i-n+g+m-k*l+h-j-l)%100;
                  j  = (c-c)%100;
                  n -= (h*g-l+j+b*l+n-b-b+d*d)%100;
                  i  = (k+m)%100;
               } while( ++DOcnt[60]%5 );
            }
            else
            {
               while( ++WHILEcnt[59]%5 )
               {
                  f  = (c*e*i-m+d-e*d-i+e+i+m)%100;
                  b  = (f*a+i-n+i+g-i-f)%100;
                  a -= (n+c*i+a-i)%100;
               }
               do
               {
                  a += (g-n*g+l+l-j*d*a-k-b+e+c-d+g)%100;
                  b -= (a+e*e-j-e-k+e+k*a*d+l*c)%100;
                  g -= (e+i-j+c+c)%100;
                  e -= (i+g-d)%100;
                  c -= (m+h-g+n)%100;
               } while( ++DOcnt[59]%5 );
               for( ; ++FORcnt[88]%5 ; )
               {
                  b -= (e-d)%100;
                  e += (h-c)%100;
                  c -= (m+g+k+l+c)%100;
                  c += (k-j-a+j+f-h)%100;
               }
               for( ; ++FORcnt[89]%5 ; )
               {
                  d += (k-d-j+c+n-f)%100;
                  g -= (m-i-f+f)%100;
                  h -= (f-e*k+e+g)%100;
                  a -= (d-k*g*c+l-a-i-b)%100;
                  d -= (h-e)%100;
                  j -= (m-g+f)%100;
               }
               if( ++IFEcnt[59]%2 )
               {
                  d -= (l*c-c-d-c-g+m+h-f-h+f+d)%100;
               }
               else
               {
                  g += (h-j+a+f+c-f-a+k-h*l*l+i*k*i)%100;
                  f += (d+j-h+i-l-j+m+n-k)%100;
                  g += (h+k-l-h*f+g-l)%100;
                  j += (m+b*c)%100;
                  a += (j-e)%100;
               }
            }
            if( ++IFcnt[44]%10 )
            {
               j += (c+n-j+b-i+f+g-e+g*h-a+d-b-b)%100;
               for( ; ++FORcnt[90]%5 ; )
               {
                  i -= (f-l-l*c-f+n*e-c+i+b+n-n+m)%100;
                  h -= (m+k*l+l+h)%100;
                  e  = (l-b-m+a-g-e*f)%100;
                  g -= (m+e-m)%100;
                  m += (i+d-j+k-c-k-h)%100;
               }
               
               switch( ++SWcnt[30]%3 )
               {

               case 1:
               {
                  m += (l+k-e)%100;
                  e -= (k+h+e+d+j)%100;
                  l -= (e-m+a-b-a*c-f-h-j+l+l)%100;
               }
               break;

               case 2:
               {
                  l  = (e+b-d)%100;
                  d += (c*a+k+a+b+n-b+j*c*e*f*c-g-h)%100;
                  j -= (k-l-d+d+b+d+e-m-m)%100;
                  d -= (h+l-a+b-f+g)%100;
                  m += (m-a-l)%100;
               }
               break;

               default:
               {
                  i += (n+l-l-m-m-i*g)%100;
                  l -= (k+l+h)%100;
                  b -= (j-a-g-g+f)%100;
                  b -= (n-f+e-i-m+a*m+f-b)%100;
               }
               }

               j += (d-n-h+m+j+f-c*f-c)%100;
               c += (e-l-e-h+l*d)%100;
               l -= (f-h-i-i-d+a+j-n+a+k-f-i*i)%100;
            }
            g += (j+h-d-f)%100;
            b -= (n-n-k-n+c*g-c+j*h-m)%100;
            k -= (c+l*d+g+i+l-l-f*a-b-g)%100;
            n -= (i*k*g*d+g+i-f-j-i+c)%100;
         }
         n -= (b*c+h-j+n+n)%100;
         n -= (b+l+h*l+a-k*d*j-i*i-c*b)%100;
      }
      l += (l+a-d*d-d+e-a*k-a+k+f)%100;
      i += (j*f)%100;
      g += (l+k+e-n*a*n+a+l-l+n)%100;
      m -= (d+f*b*h)%100;
   }
   break;

   case 2:
   {
      l -= (j-m+c-k)%100;
      c += (i+h+d-l+e-e*d*l+f-i+n*j)%100;
      n += (e*a-d)%100;
      e += (l-n-a*f)%100;
      k -= (j*h)%100;
      a -= (j*j-i-l-h*h-d+g-g-c-m+l)%100;
   }
   break;

   default:
   {
      l -= (f+g)%100;
      h += (l-k+e)%100;
      m += (b-a-b-j+c-h)%100;
      k -= (f-e)%100;
      j -= (m-k+m+n)%100;
   }
   }

   k -= (c-j+j-b*g+m+j*f+n+h)%100;
   b -= (c-n-l+f+b+j+j*g*a-l*c-k-a)%100;
   f -= (j+c-n-e+h+i+h-e-m-f)%100;
   j -= (k-k*i*h*f+l+j*m-f)%100;
   b -= (c+c+e-h-f-n*d-n-k)%100;
   b -= (i-m+m+n-e-k-m+f)%100;
   l += (g-m-m-a+n-c+d+j*b-k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F28(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[62]%2 )
   {
      d += (l+e+m)%100;
      e += (i+l+b+e-a+m)%100;
      g -= (d-l+b*j-k-i-j)%100;
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
                  j -= (m*g*h)%100;
                  i  = (g-j-a*b-b*h*b-b+e+n+b+g-f)%100;
                  e -= (h-h-j-i*a+e)%100;
               }
               for( ; ++FORcnt[92]%5 ; )
               {
                  d += (a+d-d-l-k+k*l*n+j*i)%100;
                  m += (g*k+j)%100;
                  n -= (j+l*a*l+i-c-e)%100;
                  j += (d-f-e+h*m+a+f-l+c+a+n-c)%100;
                  e -= (i*j-k-n)%100;
               }
               if( ++IFEcnt[61]%2 )
               {
                  a += (k-a+f-f-a-c-i+d-c-a)%100;
                  a -= (h-g-m-a+g-b-g-c*h+e*n+k)%100;
                  h += (h*i-b+n)%100;
                  c += (i+h-g+g+i-m+g*c-n-l-b*d-h-a)%100;
                  b += (m-n*k*i-c+a-i-h-f+g)%100;
                  j -= (h-m+k+l*m+g+c-g+k-l-h+n-g)%100;
               }
               else
               {
                  a -= (e*j-m)%100;
                  i -= (d-m+n-b*f-d+i+c+b)%100;
                  g += (a+f+f+n-f+b+h+l*e+f-m-j+e+l)%100;
                  m += (n-a-n-n*b+n*n*m-l)%100;
               }
               while( ++WHILEcnt[61]%5 )
               {
                  l += (k-i*i-h+e)%100;
                  e -= (e-f-i*l*h)%100;
                  h += (f*a-k*h+a-e-j*i+k-d*n*n-a)%100;
                  e += (l+a+m+l-m+b*n+l-j-i+m)%100;
                  m -= (d-b-i+n*b)%100;
               }
               do
               {
                  g += (e-j+i*i+f*c+h-j+h*k+l+k-a-n)%100;
               } while( ++DOcnt[62]%5 );
            }
            n -= (i-h-l*f)%100;
            for( ; ++FORcnt[94]%5 ; )
            {
               
               switch( ++SWcnt[31]%3 )
               {

               case 1:
               {
                  f += (h-g-e-m-a*m*n*g+b)%100;
                  m -= (k+l+n+g*b+c+c)%100;
                  i -= (n-l-f+g-j-m+n-k+m-m*c-c)%100;
                  a += (c-n+a+j-e)%100;
                  d += (c-a+a+n*l+e-h+e)%100;
               }
               break;

               case 2:
               {
                  m += (k+n-g+e-c-b+f*e*h+l-l+n+f-k)%100;
                  h -= (j-g+e-m+k)%100;
                  h -= (g+b+c-k+b-h+e-n+g+b*b-l)%100;
                  b += (c*n-j-i-b-k-m*c-j+k*c+h)%100;
               }
               break;

               default:
               {
                  j -= (c*c+n-e-a+d*f+e+g)%100;
                  c -= (m+g+j+h+f+d-b+m+m-i)%100;
                  k -= (f-d)%100;
                  e -= (h*n-e*m+l*h+a-g-l+a+m+b+f)%100;
                  f += (h-g-n-a+h+b-g*c+n-i*m-i-g)%100;
                  g += (k*d-e-k+a+d-e+l)%100;
               }
               }

               if( ++IFcnt[47]%10 )
               {
                  d += (d+a*m-j-a-k)%100;
                  f += (g-c)%100;
                  i += (b-n-a+e-m*m-g-j*n-a+e)%100;
                  a += (i+f-m+i+j+a-a-e+d-b)%100;
                  b -= (h-j-b+j)%100;
               }
            }
            l -= (k-g*d-d+d*i-m-i*e+m+c*c)%100;
            n -= (c+l*i)%100;
            k  = (i+i-m*b-j+d+n+j+f*l-a)%100;
         } while( ++DOcnt[61]%5 );
         e -= (h-e-n-d+g+c+c)%100;
         c -= (d*k*n-c)%100;
         d += (e+j-j-b-e-e*j+m-n-h-h)%100;
      }
      d += (m+l+l*b-i-c+k-n)%100;
      c -= (f-c+d+n+h-a*a-f+i+b-d-i-a)%100;
      l  = (i-g+l-d*b+d*d)%100;
      d += (m-b*d+c-a-c)%100;
   }
   b -= (a-f+h-h-k-l-g+c-b+j)%100;
   h  = (a-b)%100;
   l += (k+a-b-d+n*i+e-d)%100;
   e += (k+d-f+f*h-b+e-c+b)%100;
   k += (h-e+n)%100;
   e += (e*e*l-j+m-c*j)%100;
   m -= (l+j*g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F29(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[65]%2 )
   {
      k += (b+g-j*k+m*i+f-k-e+k+m+f-a+i)%100;
      c -= (e+a-e+i-e-l-g*d-g-b-h-b)%100;
      j -= (m+i*g*g-f*d-a-c-l+f-i+h-a)%100;
      k += (j-h)%100;
      a += (h*f)%100;
      h += (h+k)%100;
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
                  h += (n*k*l-d+m-g*f-h+k+a+n-i+k+f)%100;
                  i -= (l*c*g-j*e-a+e-i)%100;
                  c += (b-j-h+i-k*b-j+b+m-l+j-f*i-l)%100;
                  l += (c+e+e-j)%100;
                  h -= (c*j+l+n+i+a+d+f*k+k+d)%100;
               }
               if( ++IFEcnt[63]%2 )
               {
                  a -= (a-j-f-n*n*g+e)%100;
                  l += (l+k+b-a)%100;
                  e -= (c-k+k-c*m-c*a*f)%100;
                  l -= (d*n*h+d+d+e-e-d)%100;
                  j += (n+g*j-d)%100;
                  a += (f-f-l+c)%100;
               }
               else
               {
                  f -= (j+m)%100;
                  b += (m*l-n+h*a)%100;
                  h += (a*l-j+d-c)%100;
                  h += (c+d)%100;
               }
               while( ++WHILEcnt[63]%5 )
               {
                  j += (h+l)%100;
                  a += (d+n-b-a+g+l-l+m-m)%100;
                  e -= (i*f-f-n)%100;
                  k -= (a+a+e+h+i+a-i-m-m-g-n+n+g)%100;
                  a -= (n-j*n+k+f*g-l-h+j)%100;
               }
               do
               {
                  j -= (j-c+b*g+e+c)%100;
                  a += (k-n+i*n-i+d+h+c+d)%100;
                  j += (i+i+n)%100;
               } while( ++DOcnt[64]%5 );
               if( ++IFcnt[48]%10 )
               {
                  l -= (c+a+j-h+j*f)%100;
                  c -= (i+i+i+a-c-e-c)%100;
                  i += (b-b-j+l+f)%100;
                  j += (k+f-i+d+e*e-g-d+k+h+d)%100;
                  j -= (n-n+m-b+c-c-a+c+c+a-m-k)%100;
               }
            }
            a -= (f-k+a+m-n+b+d)%100;
            for( ; ++FORcnt[97]%5 ; )
            {
               
               switch( ++SWcnt[32]%3 )
               {

               case 1:
               {
                  c += (i*g+i*d+b*c*m*b+l-m-k+m)%100;
                  b += (n*g+n+a-m+j-j+b-i)%100;
                  n += (a-k-m-m)%100;
                  h -= (f-g+a+k-k*k*n+a+k-l)%100;
                  h += (j-h-n+a+k+b)%100;
                  c -= (h-h)%100;
               }
               break;

               case 2:
               {
                  h -= (i+b-n*n-h-e+a-f+g+m*i)%100;
                  d += (d-c+c)%100;
                  f  = (m+l)%100;
                  d += (n+m+i-k+n*d+l+j-d-i+l)%100;
                  h -= (b-h)%100;
               }
               break;

               default:
               {
                  g -= (a-c-k*m-h+h*f-f+k)%100;
               }
               }

               if( ++IFEcnt[64]%2 )
               {
                  h += (m+b+f+k-b*j-k-i-m+i+f*n)%100;
                  a += (m*e-n-c*e+l*d)%100;
                  h -= (m-a)%100;
                  i -= (j+l+h+b-j+d*g*n+b+e-d+f)%100;
                  i += (h*l*f)%100;
               }
               else
               {
                  f += (m*m-f+i-a+d+m-c-m+i*d+f-h)%100;
                  k  = (j-k+h-a*h*n-g+k+f-i-b*c)%100;
               }
               while( ++WHILEcnt[64]%5 )
               {
                  j -= (i+d+g+g*l+k+d*h-d+j*c+d+b)%100;
                  g += (g-j-g-a+e*i-l-a*a+b*j-f)%100;
                  l -= (a+a-j-f-j+k+a-l+j-a)%100;
                  i += (b+g-f)%100;
               }
               n += (a*d-e*k-n)%100;
            }
            l += (j+h+e-l-f-k)%100;
            f += (h-c*g+b+c*c+b*m+c-a-a+d)%100;
            d += (f+f+e*g*k+b+j-f*a+g-c+m+a+b)%100;
         } while( ++DOcnt[63]%5 );
         i -= (i-d+b+c+g*a-l-n-b-h*j+e*c)%100;
         i -= (j+j-c+c+l-m-g+a+j+a-k*k)%100;
         a += (m-e*l*d+l-l-l*c-c*c*m+j)%100;
      }
      l -= (g*c+h-e+e-a+a*h*l+j+c+a+l)%100;
      g -= (g+g+a-k+i-l+a+e-f+n)%100;
      j += (n+j-e*i+i*e+a-c+h+h-n+e*k-e)%100;
      h -= (b-i)%100;
   }
   k -= (i-e+j-d-k)%100;
   f += (d-k-a-h-i*n*c+n-b+f+g-d*i)%100;
   e += (b-g-m)%100;
   f -= (k*f)%100;
   b += (a+d)%100;
   a += (f-c)%100;
   i  = (g-h-j*n-g*e+i+i*a-c-a-g-i*c)%100;
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
                  k += (c-j+g-l-e+e-a-e+h)%100;
                  c  = (b*d+n-f+l)%100;
                  j += (m+f+e)%100;
                  g += (f-a-g+g+l-l-n+b+i-m+d)%100;
                  m += (c-c+l*k-j*b+e)%100;
               }
               else
               {
                  d -= (j*j-e-f*b-f*a+b-a*l)%100;
                  a += (n*h+g+e-l+j+m*n-l-k*f)%100;
                  a += (a-h+a-m-m+i-f-i*g-f*b)%100;
                  k -= (j-g*g-n-g+a*b*j*k+c*e)%100;
                  k += (b*c-e+c)%100;
                  m -= (d*a*b+k-k-j+e-a*m-j*b+m)%100;
               }
               while( ++WHILEcnt[66]%5 )
               {
                  b -= (m*c-d-l)%100;
                  l += (n+e)%100;
                  g -= (k+d+e+a)%100;
                  j += (i-i*m*h)%100;
                  d -= (d+g*h*m+k*f+f*d-j*c*m-l*h)%100;
               }
               do
               {
                  a -= (n*a+c-i-m+a+f*h*m-b-c+a-e)%100;
                  k -= (h*b*n-g+h+l)%100;
                  i += (g*b)%100;
                  i -= (g+c+a-i-n)%100;
               } while( ++DOcnt[66]%5 );
               c -= (g+f-h-l+b+m+c+n)%100;
            }
            for( ; ++FORcnt[99]%5 ; )
            {
               
               switch( ++SWcnt[33]%3 )
               {

               case 1:
               {
                  l -= (b-m-b+l+i)%100;
                  a += (e-k+j+m-j-c+k+l-m*a*j+a+f)%100;
                  a -= (f+b+g-a+k-j)%100;
                  l -= (f+h+n+l-a-m+k-j-k-a)%100;
                  e += (f+j-i+f*e+a+d-b-l-h-m)%100;
               }
               break;

               case 2:
               {
                  j -= (i-d-d+k-d-d*j-l+e+e-h)%100;
                  a -= (e+j+f)%100;
                  e += (h+k-b-j+l*k-c+n*c)%100;
               }
               break;

               default:
               {
                  l += (e+h+n+f*g)%100;
                  e -= (n+f+h-i*m+j*f+e+e)%100;
                  l += (n-j+n+l-k-k+e+e)%100;
                  g += (n-n+i-n+j*e-f-l+a)%100;
                  c += (d*l+d-d)%100;
               }
               }

               if( ++IFcnt[49]%10 )
               {
                  l -= (d+h-d)%100;
                  k -= (k-b+b)%100;
                  n -= (d-n-l+e+l*m-f+m+n)%100;
                  c -= (m-f*f+f)%100;
               }
               if( ++IFEcnt[67]%2 )
               {
                  n += (b+i+f-b+k+b*k*f-d*g-k+k)%100;
                  h += (n*f+m-l-i*h-d*n+d-i)%100;
                  h += (k+e*i-g-g-a+m)%100;
                  k += (b*g)%100;
                  j += (g-g+m+e+m+j+k+c+c-e+f*f-l)%100;
               }
               else
               {
                  c += (c+j)%100;
                  n -= (c-k-l*f-c+c*m-i*d*g-j-d-k*c)%100;
                  i -= (f-m-f-f*j+l+a)%100;
                  l  = (c-h+j+m+h-n*b)%100;
                  f -= (k+k+a+a*d-e+l-e-d+i)%100;
                  m -= (i+i+n-m*l+i+j+j+j)%100;
               }
               while( ++WHILEcnt[67]%5 )
               {
                  j -= (i-h)%100;
               }
               do
               {
                  b -= (k-a*j*n+h+c-d-n-j-g-i+n)%100;
                  m -= (g+i+e)%100;
               } while( ++DOcnt[67]%5 );
               h += (i+k*f-k-h-l)%100;
            }
            g -= (d+n*n+i+c+l+b-h-c+e)%100;
            c += (a+n+d-f)%100;
            l -= (m*k+n*m+i*a+m*h+l+m-k)%100;
         }
         f -= (n+k-b+h*k+f)%100;
         f -= (e-h)%100;
      }
      g += (f+g+f+g+b*a-a+l-j*h-l*f+a+h)%100;
      e += (c*n-a+k+d*l)%100;
      i += (j-f+c-l*g*l)%100;
      b += (k-d+d-m)%100;
   } while( ++DOcnt[65]%5 );
   g += (c*b-d-a+l-n-d-c*k)%100;
   l += (l+k)%100;
   e += (e+m+a)%100;
   m -= (b+i-i+g-c+i+h*b*k)%100;
   a += (e+h*d-m-j-c)%100;
   l += (i+g-d+a-g-b+d+c+i-c)%100;
   d += (b-b)%100;
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
            d += (f+d+l-b-e*i*i-i-l+c)%100;
            j -= (l+l+i*f)%100;
            k += (k+j+f-b+a+c-e+d-k+m+i-n+n-j)%100;
            d  = (e-j+i-e+a-m-i+m*f-n-c+f)%100;
            g -= (m+b)%100;
         }
         else
         {
            while( ++WHILEcnt[68]%5 )
            {
               do
               {
                  a += (b*n+h-l*d*b)%100;
                  f += (j-e-m*m-n+a*g+g)%100;
                  l += (h-m*n)%100;
               } while( ++DOcnt[68]%5 );
               if( ++IFcnt[51]%10 )
               {
                  a -= (g+c-j+i+m+j-l+f)%100;
                  n += (i*f)%100;
                  f += (l-d+n+j-j+j+l+b+i*c)%100;
                  l += (d-d-k*h*n*b-n-c+j*b-k)%100;
                  k -= (d*c-j+f-m*j+j-g+j-b-m+h-f)%100;
               }
               a  = (d-h+i+c+a-d-b-d-h*c*b*k)%100;
               for( ; ++FORcnt[101]%5 ; )
               {
                  l += (f-k*k-d+b*e+l-l+c+i*l-a)%100;
                  f -= (n-n-h*i+g-a+b+b*l)%100;
                  e -= (c+j*n*j*l+e)%100;
                  f += (c-k)%100;
               }
               
               switch( ++SWcnt[34]%3 )
               {

               case 1:
               {
                  e += (f*i-l)%100;
                  f -= (g-a)%100;
                  h -= (n-c-h-j*k+g-j)%100;
                  d -= (n*a*l*b+m-j+n+e-k*b+e+j-k)%100;
                  b += (b-h*k-k+k+d-a*g+g-h+i)%100;
                  e += (m*m-m)%100;
               }
               break;

               case 2:
               {
                  k  = (i*b-m+j-i+b-h+l-e)%100;
                  n -= (c+l-m+f+j)%100;
                  e -= (j-n)%100;
                  g += (h-n+i-f+l-c-a-k+a)%100;
                  n  = (a*j*a-h-h)%100;
               }
               break;

               default:
               {
                  n += (h-f-h-f+j-c-a+b+i*n*g+a)%100;
                  h -= (h*d)%100;
                  e -= (c+k+d+n*j)%100;
                  b += (e+a*d-b+c+f+a+m-m+l+d)%100;
                  l += (i-e-i+l+c+m-a-j*m-b-j)%100;
               }
               }

            }
            if( ++IFEcnt[68]%2 )
            {
               for( ; ++FORcnt[103]%5 ; )
               {
                  g  = (h+g+c-i+h)%100;
                  d -= (d+l+b)%100;
                  j -= (i*i)%100;
                  b += (c-i+e+i-h-j-m-l+i+l-d-a)%100;
                  d += (j*j-e-h+m-b-k)%100;
                  f += (i-a-a+g-e-e)%100;
               }
               d -= (e+n+l+c-e*k+i+k*m*a-h-m)%100;
               f  = (c*i*g-j+f+k+n-d-g+b+f-l)%100;
               f -= (f-b-j+l-n*a+d*g+a-f)%100;
            }
            else
            {
               while( ++WHILEcnt[69]%5 )
               {
                  k += (m-j+a-b-b*a)%100;
                  n -= (d-a*j*i)%100;
                  n += (d+f-c-g*k+d-m-a-l-i+m+j*e)%100;
                  a += (b-a)%100;
                  f += (a*b*n)%100;
                  e -= (e+k+i-n*i*d+b+h+a-g-m-k*e)%100;
               }
               do
               {
                  k -= (m*g+h+m-m-k+h+e+e+i)%100;
                  l -= (b-f-n)%100;
                  e -= (j+h*g+e+h+c*n+g*g+c)%100;
                  a -= (g*h+m-d-h-i*g-i*n-l-d-e*g+m)%100;
                  k -= (i-l+n-f+l-l*l-d+m*n-g+n-a)%100;
               } while( ++DOcnt[69]%5 );
               for( ; ++FORcnt[102]%5 ; )
               {
                  c += (g+i*a+h-f+c+f)%100;
                  k += (m*c*g+h*a-n+g-j-k-a-b+h-c)%100;
                  g -= (i-k*l-k-l+l-e)%100;
               }
               if( ++IFcnt[52]%10 )
               {
                  m -= (k+h+f-n)%100;
                  e += (b-b-c+n-l)%100;
                  h += (j+k-h-g+j-l-g+e+m+a+a)%100;
                  k -= (m-l-n+l-l+g+b+f+e+m)%100;
                  e -= (m-n-e+k-n-b)%100;
               }
            }
            c += (c-n-k-f-d+a*d-j*j)%100;
            b -= (c+i*g)%100;
            h -= (i+g*d*f+f-b-h-m-j-n+m-m-d)%100;
            n += (d-e+c*c*n-n-j-m+m-b-i+m)%100;
         }
         n -= (i-f-e-l*m*k-l)%100;
         g += (k*g-a-f-e-n-f+j)%100;
         g += (e-n+m-c*b*d-l-f+m)%100;
      }
      l -= (h*d+a-g-g*a)%100;
      g -= (d+b*c-a+a-n)%100;
      e += (l-d-a-f-f+n+n-d+m*i+b+a-f*i)%100;
      n  = (g-n+c+n+e)%100;
   }
   n -= (k+g)%100;
   k -= (l+c)%100;
   c += (b-c)%100;
   k -= (j+m*c*d-k*i*e-m-c*m+k-c-i*h)%100;
   j += (g-m+k*b*i+f+a+k+b+l-n)%100;
   d -= (j-b*h+k+a-f+e+g+j+b+l-f-j)%100;
   c += (j+j-j*a+j+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F32(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[72]%2 )
   {
      a += (d-m-j*f-h+l+a*c+b)%100;
      g -= (l*b+e+i-l-b-g-a*h*e+f-a)%100;
      e -= (f-h+m+d-e-a+n-j+l+d+j*i+h*g)%100;
      m -= (c+i+b+g*b+i-b+j*a)%100;
      e += (g+g+j+h-g+e+e+b*l+f*j-f)%100;
   }
   else
   {
      while( ++WHILEcnt[71]%5 )
      {
         do
         {
            f += (m*m-b)%100;
            for( ; ++FORcnt[106]%5 ; )
            {
               
               switch( ++SWcnt[35]%3 )
               {

               case 1:
               {
                  g -= (j+e-k*e-h+b+c+d-d*h*f+b-f)%100;
                  c += (c*h+c*j-f+i*f*m)%100;
                  k -= (h-j*n*l*g*g-m-d)%100;
                  f += (d-l*a)%100;
                  j  = (l+d)%100;
                  l += (b+n+j-g-n)%100;
               }
               break;

               case 2:
               {
                  i -= (h-g-g+h+l*k)%100;
                  n -= (a*h+a)%100;
                  e -= (f+n+d*m-h+m+e*b*i-m+b*c-l*k)%100;
                  a += (h-a*h-m*e*b+k)%100;
                  e += (d-m)%100;
               }
               break;

               default:
               {
                  n -= (c+g-j-k-k)%100;
                  h -= (g+d)%100;
                  i -= (h-m*b+m-h-i)%100;
               }
               }

               if( ++IFcnt[53]%10 )
               {
                  i += (c+i+e*n+g)%100;
                  b -= (f-g-a-e*b*k-h*a-k+j*k+h-b)%100;
                  k += (m*d+b+h+g*i-e+k)%100;
                  d -= (d+e-e+c-k+f-n*m+l-d*i+f)%100;
                  d += (m-k-l-i+c-g*e+i+i-l+h-h-k+n)%100;
               }
               if( ++IFEcnt[70]%2 )
               {
                  a += (a+d*a-c*g*g+j-g)%100;
                  l += (i+d*g+d+j)%100;
                  m  = (m+b+d-l+c*j-l-j*d+g)%100;
                  j += (f+g-k-d*k-g+n+n*m-d-l+n*d)%100;
                  j += (b*a+a+b-h-d)%100;
                  j += (m-f-d+j-h+k+k)%100;
               }
               else
               {
                  d -= (h*b+a-c+h+m-g*l*a+n*j)%100;
                  f += (e*a)%100;
                  j += (i+m+k-b-k*k*g-n-c)%100;
                  m -= (h+j-g+i*f+b)%100;
               }
               while( ++WHILEcnt[70]%5 )
               {
                  l  = (a*k-a+j+h+f-c+n)%100;
                  j += (f*f-i+a-f-b-e-j+f*e)%100;
                  a -= (n+e*j+m*h+f+a-j-k+l)%100;
                  k += (j*h-m+g+d+h*f)%100;
                  b += (b+f-d+c*i*n*b-n*e+k+f)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[107]%5 ; )
               {
                  i -= (m*i+c*k+k-g-k+j*b*i*k*n)%100;
                  m -= (k+m+b*m+a-k*f+e-d)%100;
                  b += (a+f-f)%100;
                  i += (a*a+l-c+g+a-k+a)%100;
               }
               for( ; ++FORcnt[108]%5 ; )
               {
                  d -= (e*b+j+m*m-n*l-g-j+m+h-k-d)%100;
                  c += (k-h+h-d-l-f-g*b-g+k*a+n)%100;
                  h -= (c*b-i-f-i*d+c-f+e+d+j)%100;
                  n += (d+n+b-e)%100;
                  c  = (b+d*k-j-a+k)%100;
                  m -= (e+i-h*m)%100;
               }
               if( ++IFEcnt[71]%2 )
               {
                  b -= (k+n*d*a-m-i-h*l-n)%100;
                  l  = (d+d+m+e+m)%100;
                  l -= (b+m-l+l-d*i)%100;
               }
               else
               {
                  b += (i-f-k+m+c+k)%100;
                  j += (g-d*j-c-f*c)%100;
                  l += (j-i+i*n+g*g-a+f*n*j+m-c-a-a)%100;
                  f  = (c*n-c+e+j)%100;
                  e -= (m+f+e-j*c-c*h-i-n-f-k+d-a+i)%100;
               }
               e -= (n+m+c-d)%100;
               i += (b+d*m+j-g+i-m+e-i-l+h*c+b)%100;
            } while( ++DOcnt[71]%5 );
            n -= (a-b*h*j-g-m+c+b-c+g)%100;
            k -= (h-i-d+i)%100;
         } while( ++DOcnt[70]%5 );
         j -= (j-l*i)%100;
      }
   }
   a -= (d+d)%100;
   i += (d+a+l+c-e+b-h-i-h+d-c*a+h)%100;
   g -= (e*g+d+b*k)%100;
   f -= (c+h-l-e+a+l-e)%100;
   g += (n-n)%100;
   b -= (g-h)%100;
   f -= (d-i-i)%100;
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
         if( ++IFcnt[55]%10 )
         {
            j += (b-d)%100;
            for( ; ++FORcnt[109]%5 ; )
            {
               
               switch( ++SWcnt[36]%3 )
               {

               case 1:
               {
                  i -= (k+b+c+b)%100;
                  b += (d+e+d*c-g)%100;
               }
               break;

               case 2:
               {
                  m -= (a-k+d-i)%100;
                  a -= (f-b+f+e-j-a-k)%100;
                  i -= (c-f-n-a-l+g-m+j+b)%100;
                  d -= (d+l+g-j+a*c-h+k+c-l-h-m-l)%100;
                  e  = (c-i-l-b-n*d-g*a)%100;
               }
               break;

               default:
               {
                  c -= (b-k+f*c-g-k+h+j-g+b+f)%100;
                  h += (a-e)%100;
                  d -= (c+i)%100;
                  g -= (i-h+f+c+e+i)%100;
               }
               }

            }
            if( ++IFEcnt[74]%2 )
            {
               while( ++WHILEcnt[73]%5 )
               {
                  d -= (n*j-g-k)%100;
                  k  = (i-n-f*l-i-a+l-m)%100;
                  m -= (i-b*f-n-m-c+a+a+d+b+k-a*h)%100;
                  c -= (k*e)%100;
                  e -= (a-f+a+h-n-d-n+k+b-a+c)%100;
                  j -= (h+d-b+i+f+l-i*g)%100;
               }
               do
               {
                  k -= (c*m+i-b*k+j*m+m+l)%100;
                  a -= (g-n+e+i+j+a-h-d+g+k-b+n+j)%100;
                  g += (m+c-l-i-i-j-g-h+j*m*n+m+l)%100;
                  k -= (l-b)%100;
                  g += (i-h+j*c+l+g+j-k)%100;
               } while( ++DOcnt[74]%5 );
               f += (h-n+j-n+n*h*a+b+g-a+k*e-c)%100;
               j -= (l+n-l*g+l+n-a+e-k+n)%100;
            }
            else
            {
               while( ++WHILEcnt[72]%5 )
               {
                  f -= (h*l-i-i+l)%100;
                  e  = (k-m-h)%100;
                  l += (c*c-b*j*n)%100;
                  b += (h*g+c-m+k-a+e+n+k+d+f-g+j)%100;
                  l -= (e-k*h+i+a*g*i-e)%100;
               }
               do
               {
                  e += (d-e-e-l+n)%100;
                  k  = (m-f*f+n-j-i+j+m*c+j-h+c)%100;
                  a -= (a-n+l+g+i+b+h)%100;
               } while( ++DOcnt[73]%5 );
               for( ; ++FORcnt[110]%5 ; )
               {
                  b += (f+e)%100;
                  b  = (c-n*d+m-j+n-n-d-a-c-l-f+g)%100;
                  h -= (j-m*d*d+g-a+l+f+l+l)%100;
                  d += (g-b+d+k*n+e*c+a-m-a-m+i)%100;
                  a -= (l+d)%100;
               }
               if( ++IFcnt[54]%10 )
               {
                  c += (i+m+m)%100;
                  c -= (h-f-i-k+l-f-i+g-c-b+f-i+f)%100;
                  a -= (b*g*h)%100;
                  l += (i+m+f*n*d+n-e)%100;
               }
               for( ; ++FORcnt[111]%5 ; )
               {
                  g += (b+i-d-b+m+g+c+i)%100;
                  l  = (m+i-i-g+n-e-h+n-k+d+c-f)%100;
                  c += (l-e*h-e+f)%100;
                  e += (j+b-c+d+m-c)%100;
                  c += (k+m)%100;
                  j += (n*j*h+i+b-k-g-g+i+a+k)%100;
               }
               if( ++IFEcnt[73]%2 )
               {
                  h += (d+g-h*a-h+h-h-j)%100;
                  g  = (d+a)%100;
                  k += (i-a*b+g-d+k-g+d-i+k)%100;
                  h += (l-f+i-b*d+c+m-c+h+m+n+c-h*g)%100;
                  a -= (k*g*h+k+g*e+g-j-a*b*l+i-g-a)%100;
               }
               else
               {
                  h += (f+b+a+k-l+c-g-l+g-e+l-d+a)%100;
                  m += (h-l+n+m-b+n-m+a+f+l-k*n)%100;
                  h += (i+k-d-e)%100;
                  n -= (j+f-e-d*e*c+l+d-h)%100;
                  c -= (e-e+l+j+c+k)%100;
               }
            }
            l -= (l*g)%100;
            c += (g-g-g-l-k-m-g)%100;
         }
         e -= (d+i+i+e+f+b-g+j-c-b)%100;
         a -= (i+f+e-d-e+a+n*c+j+h*h)%100;
         m += (l*i-c+g)%100;
         a += (c+h-h-a+h+d-h+m-l+c+c-i)%100;
         m -= (m+m*a-j+h*a+a*d-k-k+c-e+a+n)%100;
      } while( ++DOcnt[72]%5 );
      l -= (j-n+c-l-j-d*d)%100;
      c += (b*m+i*m*b*d*h+k+a*f+e-l*b+i)%100;
      k -= (g+b)%100;
   }
   c -= (g+g-g+h*g*b*a+j-l-j-c-j)%100;
   l -= (c+n)%100;
   j -= (i+i-i+m+b-k+d+i+f+k)%100;
   i += (b*j-e+j-d-b-m-j-l+e*c+c-m*m)%100;
   j -= (i-k)%100;
   g -= (k*n+c-l)%100;
   c += (a-a+m*m+g*m+f)%100;
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
         a -= (k*l*a+e+j*n*g*h)%100;
         if( ++IFcnt[57]%10 )
         {
            if( ++IFEcnt[76]%2 )
            {
               do
               {
                  m  = (i+d+l+j*j-l+c-m*d+a+n+f-a)%100;
                  n += (g*n+l+c-c-e-e-k+d)%100;
                  c += (n+n+b*c)%100;
                  m -= (c+j*l-f+d+k-h*i*i+i-a*g-c+c)%100;
                  h -= (d-h+b+g*l)%100;
               } while( ++DOcnt[76]%5 );
               if( ++IFcnt[56]%10 )
               {
                  c -= (j+h*e-h+a*i-i+j)%100;
                  f += (j+f*l+e)%100;
                  j += (b*b+n-h*l+c-k+c-f+i-g*n*f+n)%100;
                  i += (e+m-e+j+a)%100;
               }
               d -= (e*c*i+i+n-i*j*h-d-e+b+c+f)%100;
            }
            else
            {
               while( ++WHILEcnt[75]%5 )
               {
                  e += (b*l-n-c-h+n-d+c)%100;
                  a -= (b-m*g*h-a-m-k-f)%100;
                  g += (j+c+l-c-e*d-a+j+k*i-a*j*e)%100;
                  j -= (i+a*k+n*h)%100;
                  e += (c-d+i+i-m+l*g+b-f-f+d-c-j)%100;
               }
               do
               {
                  e  = (c+l-c-l*k-m-g+j+c*b)%100;
               } while( ++DOcnt[75]%5 );
               for( ; ++FORcnt[112]%5 ; )
               {
                  h += (k*b-d-j+j+j-f-g+l-i+n-c)%100;
                  i  = (a+h+d+k)%100;
               }
               for( ; ++FORcnt[113]%5 ; )
               {
                  k += (i-e+e+i*l+f*a+f+e+b*i)%100;
                  j += (l*m+m+a-h-m+l*f-c-j+h-d+n)%100;
                  h -= (a+k+e+e)%100;
                  b += (l-d*j-f-k-l)%100;
                  k -= (c+g+d+d-n-h-m+i+l-a+a+d)%100;
               }
               if( ++IFEcnt[75]%2 )
               {
                  n += (d-i-b-d-b+n*b+m-h-h)%100;
                  d += (f+c+k-i-l-f+g+i+h-j)%100;
                  n -= (k*l+g+n+h)%100;
                  j -= (e+n)%100;
                  m -= (j+f+m+c-a+e*b+l-m-g)%100;
                  l -= (g+g-c-d+i*h+a*n*m+k-k-f-e)%100;
               }
               else
               {
                  b += (m+a*i+g-f-j+k+e-k*g-m*a-h)%100;
                  d -= (d-l-f*k*d)%100;
                  h += (n+j+m+l-f-b)%100;
                  g += (m*m+n-i-c-l*a-i)%100;
               }
               while( ++WHILEcnt[76]%5 )
               {
                  g += (n*l+n-k+n+i+g+l+l-a)%100;
                  b -= (j+d-l+j*b)%100;
                  c  = (f-i+k+c*i*c+b*a*m-a*j-k-j-f)%100;
                  n += (a-h+b-e+c+h+n+b)%100;
                  i -= (g+c)%100;
               }
            }
            for( ; ++FORcnt[114]%5 ; )
            {
               
               switch( ++SWcnt[38]%3 )
               {

               case 1:
               {
                  l -= (g+e)%100;
                  l  = (g+k+j*j+a*l)%100;
                  k += (f-f-c+g-d-n)%100;
                  n -= (m+m*j*g+n*l-l+m+g*b-c)%100;
                  g += (h*h+d-c-b-a+c-l-l*b)%100;
               }
               break;

               case 2:
               {
                  h += (d*d+k*i-e-n-m+m-k-d-i*n)%100;
                  e += (b-d)%100;
                  k += (f-a+e+a*a+k-d-g)%100;
                  a += (i*j+k-j*d-a+b-d-h)%100;
                  n -= (n+g-f*n-b+d)%100;
               }
               break;

               default:
               {
                  e -= (f*m)%100;
                  h += (c*d+d)%100;
                  d -= (g*b-a-l+n*l+h)%100;
                  c += (f+h+k*k-k-b-n-m+h+l)%100;
               }
               }

               f += (c-h*a*e+m+n*b*e+b+f-a)%100;
               h -= (g+c)%100;
               l -= (k+c+f-m)%100;
               c  = (c+a-n-g*f-l-g-l+l+j)%100;
               h += (b+h+l+b-h-m*b-f-j*n+h-d)%100;
            }
            a -= (m+c*i+a+m-e*h-e-d-m-k-d)%100;
            l += (n+i*l*a-f)%100;
         }
         c  = (d+b-k-j-i+e)%100;
         h += (m-c)%100;
         c += (m*g+g)%100;
      }
      n  = (e+a-h-g+b+j-e-e-h+d*n-m*a)%100;
      a += (b*f-f+c+n+b+h-g-f)%100;
   }
   break;

   case 2:
   {
      l += (l-i-i-l+c-b-h-j+l+n+l-a-k+j)%100;
      k -= (g*d*i)%100;
      e += (h-j)%100;
      i  = (l+h*k-l-k+l-k*n-l*c+c-i)%100;
      n += (e+n+e*i+a+j-h)%100;
      c -= (j*j*c+j+a-a-h+j-c-l-m*a-i)%100;
   }
   break;

   default:
   {
      j -= (b+d*n-f-m+k+n-d+b-f)%100;
      g += (k*f-m-m-a+c-g-k+f+j+a)%100;
      i -= (k*k+f+n+e)%100;
      e -= (g-l+g-n*c-m-c+j-h+d)%100;
      m -= (e+n-g-n-j)%100;
   }
   }

   g -= (c-h-e*j-i-e+e-h+l*c-c+e)%100;
   d -= (g+b+e+f)%100;
   a += (g*f+e+j+b*e-f+b+e+a)%100;
   n += (h+g*h+j+e+f-l-h+f-g*l-b)%100;
   c += (l-b+e-n-k*e+c-k*h)%100;
   g += (b+n+e+b*l*e*a+k*d+d+f)%100;
   g -= (i+h-j-i*b*i-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F35(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[78]%2 )
   {
      b  = (g*e+l-n-a+a*c)%100;
      d -= (b-m-i-m-l+m-n*e+k+n)%100;
      e -= (m-a*j*d+k-c+k+f*n)%100;
      e -= (a+j*c+j+j+b-a)%100;
      k  = (c*b+g-n-k)%100;
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
                  e -= (d-i*k)%100;
                  d -= (e+k-c+n-b-g)%100;
                  g -= (l+j+d-l-j-l+c+i*f-j)%100;
                  k -= (i-g-l-k+k-l*e+b-j*k-e-h-c)%100;
                  h += (f+h-l*h-a-d*b)%100;
               }
               for( ; ++FORcnt[116]%5 ; )
               {
                  k -= (j+f*d)%100;
               }
               if( ++IFEcnt[77]%2 )
               {
                  n += (c-c+i+d+c+c*b-n-k+n-m)%100;
                  d += (i+g+e+h*i-l+d)%100;
                  i += (m-f*h-i+a+b+i+m-c)%100;
                  f += (e-d*b+h-a+h+n*k-f+l)%100;
                  l -= (i+c)%100;
               }
               else
               {
                  i -= (l*e)%100;
                  e += (e-a-b+j*l-b-b-g+c-e-n*m+n)%100;
               }
               while( ++WHILEcnt[77]%5 )
               {
                  h += (d*d-a)%100;
                  i -= (b-a)%100;
                  f += (j+g+e-j*a+d-m+m+l+a)%100;
                  i -= (l+g+f+c-j+i*c)%100;
               }
               do
               {
                  f += (g-l-d-l*j*b+b*m*k-d+c+e)%100;
                  d -= (k*k-n*h+m*j-a+d)%100;
                  f -= (f+h+g-l+e-g-a+b+j-a-e+d)%100;
                  n += (a-h+b-f-f+c-k-l-a-h-m-g+j*m)%100;
                  d += (m+j+i+e-h+l+a+h*m+d-l+h*d)%100;
                  e -= (k*k-h-f-e-h+b*b)%100;
               } while( ++DOcnt[78]%5 );
               n -= (j+l)%100;
            }
            for( ; ++FORcnt[118]%5 ; )
            {
               
               switch( ++SWcnt[39]%4 )
               {

               case 1:
               {
                  k -= (g+f+e*l+g-l-k+m-e+l*d)%100;
                  g += (h-b*a+j)%100;
                  b  = (a-f)%100;
               }
               break;

               case 2:
               {
                  j -= (e*d-l+c-h*b+g-h-g*h+i+e+c-i)%100;
                  n += (b+e+c+c+k)%100;
                  c -= (a*b+k-e-k+l+m*k+b+b-f-e-g)%100;
                  c -= (d-m-i-f-f-f-f*l)%100;
                  h -= (e-b-d-g+k-f-k)%100;
               }
               break;

               case 3:
               {
                  f  = (j-m-b)%100;
                  a -= (j-f-d+b+k-k-h+h-i-e-e+d+n)%100;
                  b -= (j-l-n*b+n*e-a-f)%100;
                  d += (a+j-h+k+g-i+k+k-a*h-j)%100;
               }
               break;

               default:
               {
                  g += (d-e*i*j-b)%100;
                  e -= (l+a+h+f*l+i*b*i)%100;
                  f += (j*b+l*j+d+m*g*g*i-l+n-n+g+m)%100;
                  a += (n+j-i*c-d-m+f)%100;
                  f  = (j+i+j-m-i-b-b-i+n+k-g)%100;
                  e -= (c-h-b-j-h*c-j+f-n*j+m+l-d)%100;
               }
               }

               c += (b-d*m+a-m*n+a-d+e-j-j*n+j-g)%100;
               n -= (b+c*f)%100;
               k += (g+m-l)%100;
               b -= (j-h-f+i*a+a-i+i)%100;
            }
            j += (c-e-f+k+g*i+b+n+l-k*n-j)%100;
            d += (h*c*k*i+j+m-l+f-c-h*j+a)%100;
         } while( ++DOcnt[77]%5 );
         d += (k*h+d+m+b-a)%100;
         f += (l-h*h-f-f+d*f+b-c-c-m+j+h)%100;
         j -= (e+a+e-c+f+c*m-g+e-j-e-e*n*f)%100;
         g += (c+j-h*d+d+a-a*n)%100;
      }
      m -= (m-m-j+d-e-d+f)%100;
      e -= (b*g+c+l)%100;
   }
   g  = (k-i-k-a-k-f-j-a+j-m+m-g*a-m)%100;
   n -= (l+h*m-e-l+a*f*n)%100;
   j -= (h*a)%100;
   c -= (b*f)%100;
   i += (b+l)%100;
   c += (b+f-e+d)%100;
   n  = (f-g+j)%100;
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
         g += (g+m-d-i-e*n-m*i)%100;
         m += (c-f*b-m)%100;
         l -= (i*b+j)%100;
         k += (k-i)%100;
         a -= (c+a-f+n+f*n-b)%100;
      }
      else
      {
         while( ++WHILEcnt[81]%5 )
         {
            do
            {
               for( ; ++FORcnt[119]%5 ; )
               {
                  c += (n+n-f+k+b-c-a*f+n-j*e)%100;
                  h += (j-e+n+f+k*a*g-e*h*k)%100;
                  g += (m*f-e+j+d-h+m*n)%100;
               }
               for( ; ++FORcnt[120]%5 ; )
               {
                  a += (b+n*j*j+k+e+m-k+k-j*j)%100;
                  l += (m-e)%100;
                  b += (a-i-f+j+m+a)%100;
                  i -= (h+k*j+g+i)%100;
                  e += (d*i+n-m*j*e+l+e-m)%100;
               }
               if( ++IFEcnt[79]%2 )
               {
                  g  = (h-g+b*g*g+i-d+b+b*a-k+k)%100;
                  c -= (m-j-l-j+h-g*l)%100;
                  n -= (f+c+a-c-c)%100;
                  e += (g+l+d-m*b-i+f-g+m-j+n-l-c+l)%100;
                  a -= (l-f+j-e-n-j+j-c-n)%100;
                  a  = (l*c)%100;
               }
               else
               {
                  e += (g*l)%100;
                  n += (i-g+b-g*a+h)%100;
                  a -= (m-m*g)%100;
                  m -= (b+l+i*g-k+e+k-d-j)%100;
               }
               while( ++WHILEcnt[79]%5 )
               {
                  h  = (l+m+e+m+e*e-c+a-h+k+k)%100;
                  i += (d-b*c+e*n+d+f-f*b+n-f+l-c)%100;
                  b -= (a*j+f+h)%100;
                  i += (a-g)%100;
                  n += (m*g+i+b+j)%100;
               }
               do
               {
                  g  = (b*i+g+e+b-g-i-n)%100;
               } while( ++DOcnt[80]%5 );
            } while( ++DOcnt[79]%5 );
            if( ++IFcnt[59]%10 )
            {
               l -= (e-i-l-j)%100;
               for( ; ++FORcnt[121]%5 ; )
               {
                  g -= (a*j-b*k+j+e+g-i+b)%100;
                  i += (j*f+b*i+k)%100;
                  m  = (j+a-n-c-l-i*l+b+j+f+f+e+a)%100;
                  n += (d-e+e-n+d+i+c+j+b+b-i+g)%100;
                  a += (j+c-n-b-h-c+h+f)%100;
               }
            }
            
            switch( ++SWcnt[40]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[80]%2 )
               {
                  e  = (f-c+b+a-i-d+a+d-f-f-a)%100;
                  a += (e+l-n+b)%100;
                  b += (m-l*m+l-k+m+f+e*m*j)%100;
                  m += (e-h+m+m-b)%100;
                  c += (l-d+e-c-c*d-b)%100;
               }
               else
               {
                  l -= (c+f+m-h-a)%100;
                  i += (g*e)%100;
                  k += (n*n+b*b-n+h*g)%100;
                  d -= (n-g-d+a)%100;
                  l  = (b+f*g)%100;
                  f -= (l+j)%100;
               }
               while( ++WHILEcnt[80]%5 )
               {
                  k += (i-f+e+n+m+h-d-e*c-k+n+a-g)%100;
                  h -= (i*n-j-b+b-j-n+d+d)%100;
                  a  = (e-k)%100;
               }
               do
               {
                  j += (n*d+c)%100;
                  d += (c-l-h-m-b+e+d-k+a+n+m+d+e*e)%100;
                  h -= (k*b)%100;
                  m  = (m-f-j+h)%100;
                  e += (d+k+n*k*n+f-a-m+m+c*f-j+m-m)%100;
               } while( ++DOcnt[81]%5 );
               g  = (e-b+j-g-k*a+g+a)%100;
            }
            break;

            case 2:
            {
               a += (c-b-a+i)%100;
               n -= (b-h)%100;
               b  = (n*i-b+c)%100;
               n -= (j-d+a*g)%100;
            }
            break;

            case 3:
            {
               l -= (i-m+e-f-k-i+k*k-i-h+a+d+a*i)%100;
               h -= (g*b+g-c-f+h-g-c+a+a-l-k-n)%100;
               b  = (c-l-b*e*e-n+h*i-e)%100;
               n  = (l+j)%100;
               m -= (e-f-h-e*h-b*j-g*c+n*d+f-c+i)%100;
               l -= (a*d+d+e+l+l)%100;
            }
            break;

            default:
            {
               f -= (e+c+c*g-m+l-k+l+n+f+n)%100;
               h += (i-i+k-a-b-k+j-m*g-k*e*n-f+n)%100;
               a += (b+f*b+m+g*b*j*d*b+l+d)%100;
               j -= (m+e-b*i-f*e-n)%100;
               a += (n*c+g*j-a+l-c+e-d*i-i+k*e)%100;
            }
            }

            f -= (g+g-j+i+n)%100;
            k += (l-e+l-d+h*i)%100;
            j -= (j+m+j+c+e*e*d*h-j)%100;
         }
         c += (g-c*i+j+g+b+c*b+c-c-l+l-b)%100;
         e += (k-c+d*c+i+j+e-m+b-n+e+h*i+a)%100;
         j -= (k-a*m-i*k+d)%100;
      }
      e -= (j+i+f-e-b)%100;
      f += (j-l-b-h-c-d-i+h)%100;
      n -= (h+f-k+i+c*i+c-a+n)%100;
      j += (l+i)%100;
   }
   c -= (h-d+g-j+k-a-f*b+m-c*m)%100;
   j += (h*g+k-g+g+e-c-g-k-k)%100;
   i  = (f-e*c-n)%100;
   d += (j-n-f+e-j-a-b-n-l-e)%100;
   e += (c+m)%100;
   m += (n+i+k*n+g-a-n-l-l-c-k-m*c-k)%100;
   f += (g-l)%100;
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
               for( ; ++FORcnt[122]%5 ; )
               {
                  f -= (h-k*j-b+d-m+l-j+k-m-l-c+l+n)%100;
                  b  = (d*n)%100;
                  j += (g*f-h+g+m-b+j-j+l+e*i-e+h*c)%100;
                  a += (l*f+a-e*n-i*c*e-e-j+m*l)%100;
                  d -= (e-h+e+f+b+n*b)%100;
               }
               
               switch( ++SWcnt[41]%3 )
               {

               case 1:
               {
                  k -= (i-e-m+l)%100;
               }
               break;

               case 2:
               {
                  j += (f-l+f*l*j*l)%100;
                  e += (d-c+m+c-l-c-c+j-j+d+j)%100;
               }
               break;

               default:
               {
                  h += (h+i)%100;
                  g -= (l-c+k)%100;
                  c += (b-l*k*h+m*g*i+j-a+j-e)%100;
                  d += (c-j-l+b*c)%100;
                  d += (j-i+j-b*e-j-l+g+b-h-h+b+j)%100;
               }
               }

               if( ++IFcnt[61]%10 )
               {
                  l += (c+m+e-e-d+a-j+b+m)%100;
                  d -= (b+b-g*j*n-c-a*n+n*a*a-a-g)%100;
                  h += (n+f-k+g*c*j-g+h*c+f)%100;
                  e -= (f+c-b-c-n+i*i)%100;
               }
               if( ++IFEcnt[82]%2 )
               {
                  k += (e-i)%100;
                  c -= (b-k*e-j*h-j-g*c-h-a)%100;
                  m += (i+k-l)%100;
                  g += (j*f-d+g+m+h-m-h+e+g-f+f-n-g)%100;
                  i += (d*l*f-a*e+g-f+m+i)%100;
               }
               else
               {
                  n -= (m+g+c+b*f*l+l-j-e*i*a*l)%100;
                  n  = (l+c+c-e+l)%100;
                  m += (c*h-a+f+b+e)%100;
                  e += (a-g-k+m-k)%100;
                  f += (c+m-a-a-e)%100;
                  g -= (i-c*e*h+g+b-k*e+d*f)%100;
               }
               l -= (k*b*c*d+c+i-k-n-k)%100;
               k += (m-e-f+c+n-f+e+c-c-e-l)%100;
            }
            else
            {
               while( ++WHILEcnt[82]%5 )
               {
                  a -= (c-l-k)%100;
                  j -= (j*f*a-l*l*d+k*m-e)%100;
                  i -= (f+c)%100;
                  b -= (h*n+g*n*d*k+a+l*k-h-j-k+n)%100;
                  a += (j+k+b+c-n+g+e-j-i*l+h)%100;
               }
               do
               {
                  l += (i-d*i+i+h+i+g*k-g+b+k+e-e-h)%100;
                  f += (l-b-l-j*c+h+g)%100;
                  l += (h-e+n*l-h-j+m)%100;
                  b += (f-n*d*f-k+l+m+h+m*f*a+k+l+a)%100;
               } while( ++DOcnt[82]%5 );
               e -= (n-j-m+n-l+g-f+n+h*e+a+j+l-l)%100;
            }
            l += (j*b+k-h*g-m-f-i-l-h+n+h-l)%100;
            c += (j-n-j+e+h+l*f+n+n*l-b)%100;
            d  = (b+h)%100;
            j  = (b-e-j)%100;
         }
         g -= (c-d)%100;
         n  = (a*i+g*a+d+l-b-n+m+f+m)%100;
         b  = (l+l*l+m-a+h+a-n-j)%100;
         h += (n+m-n)%100;
         k += (e+h+m+m-a)%100;
      }
      d -= (k+j-n-c+j-i)%100;
      b -= (a+a-j)%100;
      i += (e*e)%100;
   }
   m  = (l-c-n+b*a-c+l-j+l-a)%100;
   d -= (i+c)%100;
   k += (d-e-l*j-b-m)%100;
   n += (c*h)%100;
   e -= (n-j+h-m-g-k*i)%100;
   a -= (h-f+a+m+c+l)%100;
   j  = (f+f*c-i*g-d+c-c+d-k-k+c-k-i)%100;
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
         for( ; ++FORcnt[128]%5 ; )
         {
            for( ; ++FORcnt[126]%5 ; )
            {
               if( ++IFEcnt[84]%2 )
               {
                  g += (b-g*e*f)%100;
                  n += (n-d+e-f-g+f*g-i*i*i+j)%100;
                  c -= (m-m-c+b+c*n-g-j+b+c-l-c*d*i)%100;
                  m -= (f+d-j+i+c+k*k-n-g-g*n)%100;
                  l += (l*f+m+n+d+i+a)%100;
               }
               else
               {
                  g -= (f+e-k-f+g)%100;
                  m -= (g+n+k-n-h*d+n+e*f-j+c)%100;
                  k -= (c-h-l-m*j+e-m+n-f*i+d-a*n-h)%100;
                  b += (h-c-a+b)%100;
                  j += (m+a+n+j+c)%100;
               }
               while( ++WHILEcnt[83]%5 )
               {
                  i += (a*l+l+g-m-f-m+l-h*n+b+m)%100;
                  c += (a-g)%100;
                  h -= (j-h*j+a)%100;
                  k -= (c*m)%100;
               }
               do
               {
                  m += (n-m*i+c+e+n*a)%100;
                  l += (h+b)%100;
                  g -= (k*i-e+h-e+n+l-g+b+h)%100;
                  j -= (c-l)%100;
                  i -= (e*k-n*g*d+g-j+k+i*m-m)%100;
                  m += (j+c-b+j+h-k)%100;
               } while( ++DOcnt[84]%5 );
               if( ++IFcnt[63]%10 )
               {
                  i -= (e-n+d+k)%100;
                  l += (g-m+k+k*d-j-c+d*n-g-g+g*h)%100;
                  n -= (i+a+d+a)%100;
                  i  = (d+a*h+a+j*k-j+f)%100;
                  d -= (h+h+g+e-h+c-m+i*l-g)%100;
               }
               b += (k*l-e+f+b+m+l+d-n-f)%100;
               for( ; ++FORcnt[125]%5 ; )
               {
                  h += (c-d+b-a-h+k+d*a+e+b+h*k*h-l)%100;
                  b -= (m-d)%100;
                  a -= (n-j)%100;
               }
            }
            
            switch( ++SWcnt[42]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[85]%2 )
               {
                  h -= (b-l+g-h)%100;
                  j += (m+m-j-c+d-i+j*n)%100;
                  m -= (m-d-a-d+k-m*e-b-f+a-h)%100;
                  e += (h-n)%100;
                  n += (f-f-k-c-i-f+e+m-g-i*g)%100;
                  n += (f*g+g-c+j+k+e-d+a+e-l*e+l)%100;
               }
               else
               {
                  k += (k-g-j*m+c*f)%100;
                  c += (n*a*b)%100;
                  f -= (n-j-m*j+c-a)%100;
                  k -= (h*b)%100;
               }
               while( ++WHILEcnt[84]%5 )
               {
                  b  = (k*k*f*j-h-k)%100;
                  k += (a-g-b-b-i+d*k+h+k+b*l-f)%100;
                  c += (d+l+e-b-a+j-b+g+j)%100;
                  c -= (b*l*h-h*g*m-g-e+k+c*m+m-g)%100;
                  k -= (k*h+a*m-e-d*n+a-l-a+f-a-c-b)%100;
               }
               do
               {
                  j  = (b+a+d-m+j+m+c+i-l*f-j+h+h+k)%100;
               } while( ++DOcnt[85]%5 );
               for( ; ++FORcnt[127]%5 ; )
               {
                  n  = (g+n-f+f)%100;
                  a -= (c*g-g-j-h+g+c+b+n+i-b-c+f*c)%100;
               }
               if( ++IFcnt[64]%10 )
               {
                  f -= (g-a+f-h+j+d-a-h*e*a+n)%100;
                  n -= (e+n*j-a-a*n+m-d*a)%100;
                  l += (b*a)%100;
                  i += (d-l+h+a-e-k-i*n+k)%100;
                  k += (g-m)%100;
               }
            }
            break;

            case 2:
            {
               a += (k*f-i-d+g*i+i+h-j*k)%100;
               b += (g*j-b-f+l+l+c-f)%100;
               j -= (j-a*g+m+n-e)%100;
               f -= (j*e+g*g*k*e)%100;
            }
            break;

            default:
            {
               f += (a*m-n*m+i-l+b-j-f+d*b-h-f-a)%100;
               a -= (g-e+j-j-a)%100;
               c -= (d-c-m-c*j-i*e+l*l+d-i*a-j)%100;
               m -= (h+k+j+c-b-b+k-h-k+a+b-c)%100;
               c += (e+f*c*c+j*l+m*m*g*k-d-g-f)%100;
               g -= (i-l-b*c-j+b*g+n-m-g+i-d+i)%100;
            }
            }

            n += (d+j*b-a*j+f*d+c-h)%100;
            b -= (e*a+d-e-f+l+f+l-n+h-a)%100;
         }
         g -= (a-e+d-l-e+m-d*l+l+f+e*g-i*e)%100;
         d += (f+n)%100;
         b += (k+b-n+a+j-d*e*n-n+l*b)%100;
         j += (c+f)%100;
      } while( ++DOcnt[83]%5 );
      h -= (m-j*h+d*j*d+n+n-j+d*b-c)%100;
      a += (d+n-j+a-b*g-d*d*b*a)%100;
   }
   f -= (i-b-n*f)%100;
   a -= (i-d)%100;
   c += (j*i*j+g*d)%100;
   f -= (d-l+m+m-l-j-g+g*j+l+c*b+e+c)%100;
   f += (a+h-j*i+f-a+f+d+n-k-f-j)%100;
   a -= (k+l+l-j+n-f*e-f-f-f*n)%100;
   c += (c*h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F39(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[132]%5 ; )
   {
      if( ++IFEcnt[87]%2 )
      {
         e += (i-c-h+b+e*i+c+i)%100;
         c  = (k+l+g-e*h-j-d*e+f-h+g+f+i+a)%100;
      }
      else
      {
         while( ++WHILEcnt[87]%5 )
         {
            do
            {
               d += (n*i+i+f+f+m+i-i-h+i+f-i-d)%100;
               for( ; ++FORcnt[129]%5 ; )
               {
                  k += (k-f-f-c*j-k+g-d*i*m+a)%100;
                  c += (g-n+k*i-k)%100;
                  d += (b*a+e-k-c+h+b+l)%100;
                  d -= (b-n*d)%100;
                  g -= (k+j-k-n*e+h+m+e)%100;
                  l -= (g+d*b+j-l-h)%100;
               }
               
               switch( ++SWcnt[43]%4 )
               {

               case 1:
               {
                  h -= (e+c-a-l)%100;
                  e -= (e*k)%100;
                  m -= (d-b+k-d-a+c*h-a+i+h+b-i-m+a)%100;
                  l -= (b-h+d+j-c)%100;
                  m += (d+a+f-a*a-a*e-b+n+b-e+j*a)%100;
               }
               break;

               case 2:
               {
                  i -= (j-e+e*k)%100;
                  c -= (l-d+g+l-d+m+b+g-b)%100;
                  h -= (c*f+m*e-n-c*j-n*f+j-l*l+e+b)%100;
                  d -= (a-h+j-k+f*f+d*n+e-c-d)%100;
                  e += (j+k*f-k+a+i-g-k)%100;
               }
               break;

               case 3:
               {
                  m += (a-b+a+f+i+n*n*g+h)%100;
                  f -= (e-e-f-m)%100;
                  b -= (j*g+i*g-d-b*d+g+n-j+a*f+g)%100;
                  a -= (j*d+g+c-j-b+c+g-d-c-m+b)%100;
               }
               break;

               default:
               {
                  l -= (a-d-e-e-k)%100;
                  l  = (e-k-a)%100;
                  m += (m-a-b+i-f-n*i*b*b)%100;
                  f -= (h-h+l+n-l+i*n+e-j-j-c*a)%100;
                  k -= (d*m-d)%100;
                  d -= (n*n+a-g-g-b-m-n)%100;
               }
               }

               if( ++IFcnt[65]%10 )
               {
                  c  = (b-h-g*e+h+d+l+d-a)%100;
                  h += (l*a*f+d*k-a*k+k+n*d+e-c+g)%100;
                  j += (f*b+e)%100;
                  f -= (h+f)%100;
                  n -= (j-k*c+e*k+a-d+i-j*b-g-f)%100;
               }
            } while( ++DOcnt[86]%5 );
            if( ++IFEcnt[86]%2 )
            {
               for( ; ++FORcnt[131]%5 ; )
               {
                  h -= (b-f-n*h-g-j+k*k-e-h)%100;
               }
               e -= (k*n+a-h*i-m*d)%100;
               l += (j+b*n+e-a)%100;
               f += (d+k-l*a-f-n+j+m*b+i)%100;
               m -= (f+m-m*l-c-f-h)%100;
            }
            else
            {
               while( ++WHILEcnt[86]%5 )
               {
                  j -= (b-k-e+j-n)%100;
                  k += (d-m)%100;
                  a += (l-e-m*c*j-g+l*e-l-k)%100;
                  j += (a+e)%100;
                  e += (d-l*k-a-j+b-a+j+g+a)%100;
               }
               do
               {
                  b += (h+f-d-f-j+k+e-i+c+b*c)%100;
                  b -= (b-a+d+g-f*k+k)%100;
                  g -= (n*j*b*e-k*e-f-m-i-i*k*m+e-l)%100;
                  n += (a*k+h-d+m+e-j-n)%100;
               } while( ++DOcnt[87]%5 );
               for( ; ++FORcnt[130]%5 ; )
               {
                  j += (i+l+b+a*n+m-k*f)%100;
                  i -= (h-c-c+i-b-f+f-j+f*l-d)%100;
                  g  = (i*m*h-l-k-j*g-a+l+h+j+i+l)%100;
                  l += (l-n+g-g+m-e)%100;
                  e -= (c-a-l-n*g-b+l*d*k-b+l*i)%100;
                  b += (d-m-a)%100;
               }
            }
            k -= (m*b-e+e-a)%100;
            a -= (j+i)%100;
            c += (n+d-m-h+c+a+c*m+m*a*k-e)%100;
         }
         m -= (d+h*m-f+i+a*a-i+a+f*c-j+b)%100;
         e -= (g-l)%100;
      }
      j += (b-a-c+b-k-m-b+f+c*a)%100;
      d -= (c+l-i-n*h-l-b+n+c-h+k)%100;
      d += (l-l+h*i*i+f+m+g+k+i-f)%100;
      j += (b+h-b-m-h-e+e-c*l+k-c*d-f)%100;
   }
   c += (d*a+l+e+a-e-g-h-b+g+h-f+i)%100;
   m += (b+l+n+m+k+c+d+e+d*i+a)%100;
   f += (l-e-k+k-l*h*e*c+j+m*a-c*e-k)%100;
   e -= (j-j+c-n*a-g-c-e*j+k-g+g+l+g)%100;
   c += (c-m+m-c-k*m*a+i*f-h*n+b+b+f)%100;
   f += (f*k)%100;
   b += (d+j*m+d-l-e-i+m*i+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F40(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[90]%2 )
   {
      m -= (k+e*f-m-a*i*g-l+i+k+h*d*b-d)%100;
      f -= (d*d-l-k)%100;
      b -= (j+e-e-f+j*i+k*h-k-h-m+i)%100;
      h += (h-j-c+b+n+m+n+g-h-m+m-c-l*g)%100;
      l -= (f-f)%100;
   }
   else
   {
      while( ++WHILEcnt[89]%5 )
      {
         do
         {
            if( ++IFcnt[66]%10 )
            {
               a -= (e-e+l*b*e*l+f)%100;
               for( ; ++FORcnt[133]%5 ; )
               {
                  k -= (i+h*l*k+d-k*j-e+f-l)%100;
                  e -= (n*l+k)%100;
                  h += (l+g-l+f-g+d*b*m-e+n-m-k-j+l)%100;
               }
               
               switch( ++SWcnt[44]%3 )
               {

               case 1:
               {
                  d += (f*a+n-e*j-c-l+m-g)%100;
                  g -= (f+j*k+h*c-d*n-j-k*g-l-j)%100;
                  e -= (c-g-n)%100;
                  c -= (c-g+b+n)%100;
                  b += (h-c+b-n-k*n-l-k*i+i-h-f+i)%100;
               }
               break;

               case 2:
               {
                  m += (g-h+l*l-l*i+n)%100;
                  m += (i-g-a+m-h-i)%100;
                  l -= (l+k-k-g+j-a)%100;
                  a  = (l-b+n+l-n*h-k-j*h-b)%100;
               }
               break;

               default:
               {
                  a -= (n+a*f+a+c)%100;
                  c -= (c-j*e-h+n-m+b*a+n-h*m)%100;
                  e += (k-f*b+a*k-h-c)%100;
                  c += (b+h)%100;
                  g -= (k*e-c+e)%100;
                  d -= (h+j-l)%100;
               }
               }

               if( ++IFEcnt[88]%2 )
               {
                  g += (d*j*e*a-j-j+i+i-b*h-h+f-a*f)%100;
                  m += (h*i+m+l-h-d-b+d+a-m*m-d-l+g)%100;
                  l += (g-a)%100;
                  n += (k+k*i-a+n+k-i)%100;
                  f += (h-j*e*a)%100;
               }
               else
               {
                  f -= (j+e-e-n+k-j*l*c-g)%100;
                  h += (f+m*l+l+i*j+c+g*j+l+g)%100;
                  e += (g*e-h+j+d+b)%100;
                  d  = (h+g-i+b+n+k-n*c+h+f*f-b+n)%100;
                  n -= (j-l-d+c+n-c+f*i-b-h-a*k-h)%100;
               }
               while( ++WHILEcnt[88]%5 )
               {
                  e -= (d+f*g+d-a-c+i*f-n-b-n-l)%100;
                  m += (j*b)%100;
                  a  = (c-k-c*g+n+m+i-a)%100;
                  k -= (h-l*h+n+d-d+l-g+n-k-b*n)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[134]%5 ; )
               {
                  c -= (j*k*k-f-e)%100;
                  c -= (n-h*a*l-b-j-c)%100;
                  l  = (e-d+j-a-d-a-e-k+m-i+d)%100;
                  e += (k*n-l+f-b)%100;
                  h += (e*m-h+f)%100;
               }
               if( ++IFcnt[67]%10 )
               {
                  f += (m-j-h+f-e-g-d*i-g+f+g+b-l-l)%100;
                  b  = (f-k-b*k*c+l*a+b+n+k+c)%100;
                  h += (k*g)%100;
               }
               for( ; ++FORcnt[135]%5 ; )
               {
                  m -= (a+k*l-f+h*b-f*j*a+m-d)%100;
                  m += (c*i+n*k+a-d*l-d+e-a+j)%100;
                  a += (i+a*g*n-h*l)%100;
                  j -= (i+j-d-i-d-i)%100;
                  k -= (b-b*m-d)%100;
               }
               if( ++IFEcnt[89]%2 )
               {
                  j -= (j+a+h+e*i-i)%100;
                  i -= (b*g+e)%100;
                  e += (f-b+j-f-l-b+k*h+h)%100;
                  d -= (j-b*b-d-k+e-h+d*a*d+e+i)%100;
                  n -= (a+b-b+d+b-j+a-l-g+d+k+a*b)%100;
                  b -= (n*a*e-l+m*n-n+f+g+g+g-c)%100;
               }
               else
               {
                  g += (b+c-b*i-m+a-a*g+f-b-c)%100;
                  h += (b+m*b+g-e+h+d+e-b*m+f+l)%100;
                  g += (j-n)%100;
                  i += (f-b)%100;
               }
               m -= (k+a-c*i-g*a-e-m-c*c-c-k+a+l)%100;
               f -= (m-f*c-i+n+f-f-f-b)%100;
            } while( ++DOcnt[89]%5 );
            a -= (g-h-d*c+d*f+i-e)%100;
            n += (j+l*m*d-n)%100;
            n  = (l+m+f*l-j*d)%100;
            b -= (a-f+i+l)%100;
         } while( ++DOcnt[88]%5 );
         b += (g*l)%100;
         a += (h-n*l+i-l-b)%100;
         a  = (e-h-n-d-h-d)%100;
      }
      j -= (i+n+d+e)%100;
      c -= (n-k)%100;
      d -= (g-c+a+b+i+d+b+a*a)%100;
      n += (f*h+a-k-n*h+g)%100;
   }
   m += (c+n)%100;
   a -= (e-e-l)%100;
   f += (f-h+m-f+a+h-f-i+l)%100;
   f += (n+c)%100;
   c += (g-b+g+g*k*n+l+d-k*f)%100;
   l += (e+h-m+l-k-a-e*d-n*j)%100;
   f -= (m-n+g*k-d-c-f+c+l+h+d+e+n+c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F41(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[92]%5 )
   {
      do
      {
         f -= (f+c+i*j)%100;
         for( ; ++FORcnt[138]%5 ; )
         {
            
            switch( ++SWcnt[45]%3 )
            {

            case 1:
            {
               if( ++IFcnt[68]%10 )
               {
                  h -= (i-g-h-g*m+f*i+m+c)%100;
                  k += (f-n*l+e-k+k+a*j-f-i)%100;
                  h += (c+e-l+n-f+c-c*n-a)%100;
                  g -= (l-f)%100;
                  g -= (e-i-g+k-l)%100;
                  a += (m+f*n*h+f-m)%100;
               }
               if( ++IFEcnt[91]%2 )
               {
                  d += (d-f-n-m+e-i+n-b+e-g)%100;
                  k  = (a+b+m+a*b+i+b-a+d*a*m-f-g)%100;
                  l -= (l+l-n*d-l)%100;
               }
               else
               {
                  k -= (k*h+d*e)%100;
                  l += (n-e*l+b+m-a-j-f-g-g)%100;
                  d -= (e*h*m+e+c*n-e-i-f-e+c-i*j-g)%100;
                  n -= (j-g*l-f*j-d-b-i-d+g)%100;
                  d -= (b*j-a)%100;
               }
               while( ++WHILEcnt[90]%5 )
               {
                  f += (h+g+a)%100;
                  l += (n-e+f+e)%100;
                  l += (g*h-m-n+n-d-g-j+m*b)%100;
                  n -= (i+a+d*b+d*h-d*j-n-c)%100;
                  j  = (n*j-k+j)%100;
               }
               do
               {
                  l += (g-l*c-g-j-i+c-b+e-j-j)%100;
                  l += (g-a+d*d-i*f+e-a+m-g-f+j)%100;
                  b -= (f-k-j+i-h*g+m*i-b+g-e-h)%100;
                  c -= (m+f+c+a*b*h-i)%100;
               } while( ++DOcnt[91]%5 );
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[136]%5 ; )
               {
                  l += (h+g-f-j*a*e-b*j+c+d)%100;
                  f -= (g*i-m+b+n+i)%100;
                  a -= (m+n*d*e-f+m+a+e+a+m*i)%100;
                  a -= (l-b+d*n-n)%100;
                  l += (a+g-c+i+i+j-a*k-k+c*h+c)%100;
               }
               for( ; ++FORcnt[137]%5 ; )
               {
                  d += (h-l-c+f+e+e-a-a+c+f+d-m-f)%100;
                  e -= (j-c+i+i)%100;
                  l += (k-h-b+g-d+m-m-c-j-h+f-n*h)%100;
                  g += (k-i*l*g-j+a)%100;
                  b -= (k-m-b*f+g-b)%100;
               }
               if( ++IFEcnt[92]%2 )
               {
                  f += (l*h*j-h-k)%100;
                  c += (g+b-l-b+g-i-l+d)%100;
                  l -= (b+l+j+e+b*h+j+b)%100;
                  i += (b+k+i+b+m-k-m)%100;
                  e += (d-n-l)%100;
                  n += (b+b-m-j+i-l+d-g+k+j+n+l-e)%100;
               }
               else
               {
                  c += (d-h)%100;
                  l -= (i+i)%100;
                  l += (g-e+d+a-l+k*a+d)%100;
                  h -= (m-b+l+f+a)%100;
               }
               while( ++WHILEcnt[91]%5 )
               {
                  n -= (j+a-n-i+i)%100;
                  a -= (j-h+l-k)%100;
                  h -= (g+n+m-l*m+k+n+b-n-d)%100;
                  a += (d-d+m+i*j-i)%100;
                  k += (e+k-k+m+g+e-c*i)%100;
               }
               m += (j-e*a+j-e-h*b-l+c-i-n+i)%100;
               n += (i+c+a+k+i+a*j)%100;
            }
            break;

            default:
            {
               b += (g+i)%100;
               l -= (c-g-h-l-l+n)%100;
               h += (e-f-b+d*e*m*i+h-c+g-i*m)%100;
            }
            }

            g  = (m*e*j+l-l+a*g+c+e+c-m*m-i)%100;
            i += (l*b*j-d-m+d*a)%100;
            a += (h*a+n+m-f+f-b)%100;
            m += (m*b+l+e-j-b+j-j+d-k-a-h)%100;
         }
      } while( ++DOcnt[90]%5 );
   }
   a += (k-g*g+f-m+j+a+g+m+l+l)%100;
   f += (a*m-n*g-k-a-a*m+e)%100;
   g -= (n+i-g+l-l+i)%100;
   i -= (c-k+c-j+c+b*b+m)%100;
   j += (c+h-l+m)%100;
   d -= (g-f-e+k-b)%100;
   i  = (h-g-e-d-f+l+k+g+l-h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F42(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      if( ++IFcnt[70]%10 )
      {
         b += (g-g-a+k+k+b+n-h)%100;
         for( ; ++FORcnt[142]%5 ; )
         {
            
            switch( ++SWcnt[46]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[93]%2 )
               {
                  n -= (e-n+h+h-d+e-b-a+h*b-d)%100;
                  l -= (b-k*h+k+h+c-g)%100;
               }
               else
               {
                  n += (j*b+e+c+g-j)%100;
               }
               while( ++WHILEcnt[93]%5 )
               {
                  i -= (a+k)%100;
                  i += (h-c+c-l-m+a*f-e*e)%100;
                  l -= (j-b*n+k*f+i*l+e-i*i*h+m*j)%100;
                  c += (j-e-c-e-h)%100;
                  a += (n+f+k*n*d-j-f-k)%100;
               }
               do
               {
                  d += (e+k)%100;
                  h -= (l-h-c-g+m-e-d-h)%100;
                  k  = (h-h+d-a-g-b+d-g-c+k+f-h+l*j)%100;
                  e += (j+i-m-i*e)%100;
               } while( ++DOcnt[93]%5 );
               for( ; ++FORcnt[139]%5 ; )
               {
                  g += (c-h+g*j*l-k-h*b-f+h+b-n-m)%100;
                  d  = (i+c-j-f*h+h*b*i+j+h*c*b+i+k)%100;
                  h += (f+j-l-f)%100;
                  g -= (g+a+f+k+k+m-e+d-g-i*i)%100;
                  g += (k*b+h+k-b-m-m*b*g-c)%100;
                  n += (b+d-c+f-e*n*d)%100;
               }
               if( ++IFcnt[69]%10 )
               {
                  m += (n-e-f-n+i)%100;
                  m  = (n-k-d+g-h*l-m+f)%100;
                  m += (m-b+b+c+m-n*d-f*a+a-a+i*g)%100;
                  f += (l-l-j-f*h*e+k*b)%100;
                  i += (b-i-d-i-m+f+h-b+b-a+g*e)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[140]%5 ; )
               {
                  j += (k-k)%100;
                  b -= (l-b+j+i+h*g*h*a+l-b)%100;
                  f -= (k+m-n+g-m*k-h*d)%100;
                  f  = (i-j-m+m)%100;
                  f -= (n+a-m)%100;
               }
               if( ++IFEcnt[94]%2 )
               {
                  l -= (j+c-e*m+m-e+g+i)%100;
                  d -= (l-c+f+l-a+d-e+k*c)%100;
                  c += (c-g-l*i-b-e+c+a*n+f*i)%100;
                  i += (k*i-f+d+k*e+k+h-n+b+j*l*k-f)%100;
                  h += (h+e+g*f-g+f+a)%100;
                  f -= (g-a*b+e+l*c+k-i*f-f+d)%100;
               }
               else
               {
                  e -= (b-l+n+b-g-c*m*m*a)%100;
                  j -= (l-h+i-a-i+k-b-a)%100;
                  h += (g-k*k*b*h+d-a+e+f)%100;
                  j -= (e+a+g-b)%100;
               }
               while( ++WHILEcnt[94]%5 )
               {
                  i += (n-n+m-e+j*d)%100;
                  k -= (a+h+n-h*h*k-n+f+b*m-m*b)%100;
                  e -= (j+l+b+i+e-f-n)%100;
                  j  = (n*k*i+b)%100;
                  b -= (e-i+a-c+m-g-f*m-f)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  a += (e+e-l-k+i*a+i*i*b*c-c*m+h)%100;
                  c  = (m+k-c*b-i*b)%100;
                  e += (a-e)%100;
                  d -= (c*b*g)%100;
               } while( ++DOcnt[94]%5 );
               a -= (i+m)%100;
               for( ; ++FORcnt[141]%5 ; )
               {
                  n += (n-m-f+l-k-d+l-k*n-m)%100;
                  g -= (f-f+h*g)%100;
                  e += (g+a-g*g+c+n+e*l)%100;
                  c -= (b-c-l*c+d+f*i-b*l*h*f)%100;
                  d -= (a-m-e-l-c*a+f+l-n)%100;
                  h += (n+f-g+m+i+f-i-e-g)%100;
               }
               i -= (i+g+e*m-m+l*i)%100;
               m += (m*j+i*b+j-j-i-m-i)%100;
            }
            }

            f += (a*j-e)%100;
            n -= (h+b)%100;
            j -= (b+e+n-h-i+g+m+m+c-m-b+d*d)%100;
            a -= (e-k+i-a+h*k-g-b+d+h+f-b-b)%100;
            e += (e+b-b+h*a+i-a*n+h+c+n-c)%100;
         }
         n += (c+g-l+e)%100;
         c += (b+m*j+m+n-h+e*n+h)%100;
      }
      k += (g+c+m+f*j-h+b-e*e)%100;
      c -= (c-b-l*c-n-k-d+h-c-j+l+l+n)%100;
      k -= (h+b-h-b+h-l*f+n+c+i+f+k-n)%100;
      f -= (b*d*j+d+c+c*k+a+h-j+d+d+m-l)%100;
   } while( ++DOcnt[92]%5 );
   k -= (f*c)%100;
   j -= (d+j)%100;
   j -= (e-d-m-e-i-c-k-e-h-h+m)%100;
   i -= (m+d-d+c+f+c+e+h-l-g-e*j)%100;
   n += (g*l-b+l+l*a+h-f+k*f-f)%100;
   l += (j-i-e+l+d-k-f*k)%100;
   b -= (e+j*d-i+a-a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F43(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[47]%3 )
   {

   case 1:
   {
      if( ++IFcnt[72]%10 )
      {
         if( ++IFEcnt[97]%2 )
         {
            f -= (c+a+k+k*b-a+h-i-d)%100;
            d -= (h+h+e-g-d*h+e*j)%100;
            c  = (l-n-g*f+n)%100;
            g  = (g+a)%100;
            i -= (f+i)%100;
         }
         else
         {
            while( ++WHILEcnt[95]%5 )
            {
               do
               {
                  b  = (c+i-a-l+n*d+b)%100;
                  b  = (f-e-g-l-l*g+f+c+b+d+k*g*k)%100;
                  b += (b+k*j+a-m*i-h-c+c+d+b-e*e-e)%100;
                  l += (e+i)%100;
                  i -= (g*n*g+j+l*g-h-n-n*k)%100;
                  a += (k+d-l-l*e-n+b*a+e+b)%100;
               } while( ++DOcnt[95]%5 );
               for( ; ++FORcnt[143]%5 ; )
               {
                  h -= (e*c+c+i+h+m+j+c-c+b+f)%100;
                  d += (n+k+g+e-b-f-c*i-e-h)%100;
                  k  = (h*g+h+i+d-c*f+d)%100;
                  n -= (b*i)%100;
                  h  = (c*f+j-l-a+h+a*m-c*a-b+i+a-b)%100;
               }
               for( ; ++FORcnt[144]%5 ; )
               {
                  d += (d-k-m-c-h)%100;
               }
               if( ++IFEcnt[95]%2 )
               {
                  f += (l*m+f-k+e*k+m*h-a*d)%100;
                  k -= (f-l-a+g+b)%100;
                  e -= (e+c*b+l-i)%100;
                  f  = (d-e)%100;
                  n -= (m-f-l-h+l-i)%100;
               }
               else
               {
                  i -= (m-g+m+b-m-n+j)%100;
                  j += (b+l-b-m+k*g)%100;
               }
            }
            while( ++WHILEcnt[96]%5 )
            {
               do
               {
                  j += (h*k+c-f+c)%100;
                  i += (n+f+c+l-k+f*j-g-i+k+b+m-e)%100;
                  h -= (f+e-j+j-i*l-h*c+j+j*a+i+a-j)%100;
                  e -= (m*h*h+g)%100;
                  k += (m+a-d+n-n-c)%100;
                  e -= (h-l+j+l+n-l+m-b-a-k)%100;
               } while( ++DOcnt[96]%5 );
               if( ++IFcnt[71]%10 )
               {
                  j += (m+i*n)%100;
                  b -= (d*f+n+k*j*b*c+e+k)%100;
                  j += (b+m*c+h)%100;
                  j -= (j+g*h-m+c*a-k-b+i*j+l)%100;
                  e += (g+f-f*c*j-m+b)%100;
               }
               k  = (k-n)%100;
               for( ; ++FORcnt[145]%5 ; )
               {
                  g -= (l-i*g*f*c-l*a-k*i)%100;
                  c -= (e+i+a-c-g+n+i)%100;
                  n += (c+m+k-h-a)%100;
               }
            }
            
            switch( ++SWcnt[48]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[96]%2 )
               {
                  d -= (l+b-i+d-n+f)%100;
                  l += (f-k-b)%100;
                  j += (b-g+a-n-d*d+i+c+e+d+h)%100;
                  c -= (k-h-e-j+b-i-m-b*e-j*d+d-b)%100;
                  j += (h*h+c*g+i-c)%100;
                  e += (b-l-j)%100;
               }
               else
               {
                  j -= (m-h)%100;
                  l -= (n+m-d+f-k-b-c)%100;
                  i -= (k+i+n*k)%100;
                  c += (c+n*k-k+c+j+m*g-l*m)%100;
               }
               while( ++WHILEcnt[97]%5 )
               {
                  l += (i-h)%100;
                  k -= (m*c-d-a-j)%100;
                  a += (i+b+k-g+f-n*h+k-n*b-i-a*d-b)%100;
                  d += (n*b-m+c+f)%100;
                  j += (k+i*l*f)%100;
               }
               do
               {
                  c -= (j+l+i*f-i*j-b-n-l+e*h)%100;
                  b += (g-h+c*d-i-i*e-g-h+i-e)%100;
                  e += (d+e+b+d+k-n-c+e+m)%100;
                  c -= (m-h-e+b*g+e+a*m-e+e+f+f)%100;
                  k += (a-a-b+k*i)%100;
               } while( ++DOcnt[97]%5 );
               a += (f*j-i+g-b*c*j)%100;
               e += (n+j+f-a-b-a+c-f)%100;
            }
            break;

            case 2:
            {
               a -= (h+a)%100;
               b += (c-j-j+b-d-l+j-d+h+l-k+n+b)%100;
               l -= (b*n*b*b)%100;
               i -= (l-a+e*b-g)%100;
            }
            break;

            default:
            {
               m -= (k-m-f+h-e-m-c*b+d*c+c)%100;
               d -= (i+c+a-g-n+f+n+e-j*a*i-h)%100;
               i -= (l-i+a-e-l-k-m+c*i)%100;
               b += (k-b*j+n+g+i*a-m*a-h+c-f*j*l)%100;
               i += (a+f*j+c-g*k+a*i+d-b+n+a)%100;
               e -= (j+m+g+g*g*k*h+e+b-k+e+a)%100;
            }
            }

            l -= (i+a-g*i+b-n-e+n-j-j+f-h+n-a)%100;
            c  = (l+g*c)%100;
         }
         b -= (a-f-e-i+a-c*b-g+i)%100;
         j += (c+m*e+j-a+h-f-g+i*h+k)%100;
      }
      j += (m*e-h+k-f-f+h-c+l+c+b*c+k)%100;
      a -= (g-e-k+i-h)%100;
      a += (e+m)%100;
      k -= (h*j+n+b+e-j-c-j-b-f*i-n+g)%100;
   }
   break;

   case 2:
   {
      h -= (g+f-g-a-c*f-i-k*g+k+c+c)%100;
      l  = (n*i-i+d*a)%100;
      k -= (e-l-m+c*f*f-a*k*j*l-a-n)%100;
   }
   break;

   default:
   {
      b += (f*i-h-h+a+j-g-k-f-h)%100;
      a -= (m+k+f+a+d-c-n-b-h+j-f+c)%100;
      n += (n+m-e+e*g+n+f-m*e+h+n)%100;
      k  = (a*h+j*h-l-k-c*d+f+h-l+l+m*c)%100;
      a += (a+n+b*a+m+n+a)%100;
   }
   }

   e += (l*k*a+g+l-e+j-k+c-e*m+l)%100;
   c += (f-g-a*l-n-h-k+n-e-m-i*n)%100;
   l += (k+c*i*i-l*f+g+e+i-i+j+d+g-j)%100;
   a += (g+c+b-n+n+f+k+n+n-e+a+b-i)%100;
   e -= (l+n-a*c*m-k-b*k)%100;
   i += (l-b+f-h-f+a-j-g+f*k-g-n)%100;
   l -= (e+b-l-a+f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F44(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[148]%5 ; )
   {
      if( ++IFcnt[74]%10 )
      {
         for( ; ++FORcnt[147]%5 ; )
         {
            if( ++IFEcnt[98]%2 )
            {
               do
               {
                  k -= (l*c*i-n-c+i+e+b-e+g+d-j)%100;
                  c -= (i+n*a-i+j-d-e)%100;
                  m -= (m-k*k-m-g*f-g+b-g*b)%100;
                  m += (n+g-b-c+b+d-j+g+j-k-c)%100;
               } while( ++DOcnt[98]%5 );
               b -= (k+k*l-h-i+f+n-j*e-k*f)%100;
               for( ; ++FORcnt[146]%5 ; )
               {
                  m += (i+n)%100;
                  h -= (l+m*c-k+g*i+c-l+e-n+c+f+h)%100;
                  c += (l+j-l-a*f*f*m+i-d-j-f-m-j-d)%100;
                  b += (j+a)%100;
                  g  = (e-n-g-h+h-b+n-c-k+i-b-h)%100;
                  b += (k+e+l+h*i)%100;
               }
               
               switch( ++SWcnt[49]%4 )
               {

               case 1:
               {
                  e -= (h*n*d*i+e*c*e-l*c-h+d-k+n)%100;
                  d -= (n-l-a)%100;
                  i -= (d-j)%100;
                  j += (j+g*a+f+g+k*e+i*g+j*e+j)%100;
                  h += (n*i+b+i-k-c+d)%100;
               }
               break;

               case 2:
               {
                  h -= (e*l+n-n+d+f*n)%100;
                  j -= (e-k+h-n-i*j+f)%100;
                  j -= (a-g)%100;
               }
               break;

               case 3:
               {
                  k -= (f*l+l-n+b)%100;
                  g -= (n+h-d-b*n-l*e-k+k-l*d+a)%100;
                  i += (a-j*a+j+l-n-m*n+c-a)%100;
                  b -= (k*l-e+g-a-i*i-d-b-n+m-k-n+e)%100;
                  b += (a*e*d)%100;
               }
               break;

               default:
               {
                  m  = (h+b*l+m-j-c*h+d+j-e+h+k+n)%100;
                  d += (l-h-f+i+k)%100;
                  b -= (e+k-f*i-h-h-i+c-b*l+l-a)%100;
                  e += (c*k+c*b+k-j-l-n*l*k)%100;
               }
               }

               if( ++IFcnt[73]%10 )
               {
                  e += (b-k-a+k-j)%100;
                  n += (d+f+m*b+d+k-l+f+g+f-n*k*g)%100;
                  c += (h+b-j-b-d-a+n-d+g)%100;
                  c -= (b*j-k+m+k+d-g*a+g-m-e+a)%100;
                  l += (i-e)%100;
                  b += (n-j-h+a)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[98]%5 )
               {
                  e += (m-a*d+c+j-f-d-c*j-f+b*c+d-l)%100;
                  k += (a+n*h+m-g+a*c)%100;
               }
            }
            i -= (g+d)%100;
            g += (d-c+k+a*h-g+a*h-d)%100;
            d += (j+c+c*b+k+m-b-n+i-k+j*m)%100;
            l -= (a-m)%100;
         }
         k -= (c*e)%100;
         d  = (h+b-b+c-m+f+g-h)%100;
         i += (n+b-f+j*j-m-m-n-g-f+b-a)%100;
         h += (k+e+a*i-c+d*l+f-i*m)%100;
         e += (d-f)%100;
      }
      i += (h+m-f-d+c+g+c-h*d*m-e+j*h)%100;
      g += (e+i+a-n-m+k*f*h*e-n-j+j)%100;
      e += (n+b-c-l*k+m)%100;
   }
   e  = (c*d)%100;
   n += (c*j)%100;
   a += (f-l-m*e+c-l-j-e+n+m*g)%100;
   e += (b-b-f-n+e*e)%100;
   j += (k+c+k+b+c)%100;
   f -= (m-n+k+m+l-m-j-k+k-g-l-a)%100;
   c -= (n+h+b+m*h-e*k+i*n-a*e-l+k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F45(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[101]%2 )
   {
      a += (n-h+n*g)%100;
      b += (n+i*l+b+f-l+b+b+j-d*j)%100;
      m  = (d-d-c+m-g+d+l+a)%100;
      n -= (a+g+k-m*l*k*j-d+f)%100;
      l  = (a-a+d-e)%100;
      m += (a-n*h+c-k-m-l+i+c-c)%100;
   }
   else
   {
      while( ++WHILEcnt[101]%5 )
      {
         do
         {
            for( ; ++FORcnt[150]%5 ; )
            {
               for( ; ++FORcnt[149]%5 ; )
               {
                  g += (i*n+a-h*n+n+e+j+f-l+g*f-h+l)%100;
                  b += (j+e-l-e+n-g-l-f-n+i-c-a)%100;
                  d -= (b+c)%100;
                  d  = (a+e+f)%100;
                  k -= (d+c-m*j+h-h*k)%100;
               }
               if( ++IFEcnt[99]%2 )
               {
                  a -= (h-c+d-k*d-c)%100;
                  c -= (h-k+i+c-j)%100;
                  h -= (n*l+c+a-c)%100;
                  m += (k+l+l-m+l-j+n+l-i-f+n-n)%100;
                  c -= (c+i+d-d+h+l+i-k-j+g+m-h+i+h)%100;
               }
               else
               {
                  j += (h-n-k+a-f)%100;
                  j += (g-h-f+m-m+j+f)%100;
                  a -= (g*c+i)%100;
               }
               while( ++WHILEcnt[99]%5 )
               {
                  h += (n+b*d+l*k+e*d)%100;
                  m -= (d+a*n-l*i-b+k+e+i)%100;
                  g  = (g+l*g-n+l-j-h+n+b*c-j+j)%100;
                  b  = (h+e+j-h+m+e*l*j+n+l*n+l-i)%100;
               }
               do
               {
                  b += (f-i*h+l)%100;
                  l += (n+a+e+m+g*a)%100;
                  i -= (i-g+m-k)%100;
                  j += (l+b-j+d-f*l-k+h+i+j*h)%100;
                  a -= (n-h-a*c-k+b-k-k+f+e-c-l)%100;
                  f -= (i-a+c)%100;
               } while( ++DOcnt[100]%5 );
               if( ++IFcnt[75]%10 )
               {
                  b += (i*b-c-l+l+h+g)%100;
                  j -= (f-e-b+i)%100;
                  a  = (d-b+m-l+b+i-l+c*i*a*a+b-h-e)%100;
                  b -= (c+g+a-c+i-e-i*d)%100;
                  h += (a-a*j*h+l-b*j-g)%100;
               }
               f  = (h-b+n+f+g+e+m)%100;
            }
            for( ; ++FORcnt[151]%5 ; )
            {
               
               switch( ++SWcnt[50]%3 )
               {

               case 1:
               {
                  b  = (n+i)%100;
                  a  = (a-c)%100;
               }
               break;

               case 2:
               {
                  m -= (n-m+d-i+g-n-b+f-j-h+k+i)%100;
                  e += (d+c+l*n-i*g*b+i)%100;
                  e += (e-m-i*j-b-e*n-h-l)%100;
                  k -= (m+l+c-f*i+l+j-l+i+m-a-h)%100;
                  a += (k-l-a+c+j-i-l-i+i-l+b+c+k)%100;
               }
               break;

               default:
               {
                  k  = (k*i*a*n-b*b+f-n+k+g-k+k+c)%100;
                  d += (l+k+b-k*k+j+f+m-k-g+m-i-b)%100;
                  e += (h*g*f-l-m*g-j+j)%100;
                  g -= (k-l+b*k+n+a+e*k-b-k-i+i)%100;
               }
               }

            }
            if( ++IFEcnt[100]%2 )
            {
               e += (k+l)%100;
               h -= (f*a-c+i-b*d-j*k+i-i-d)%100;
               m += (i-f*k)%100;
               i -= (n+g*b+c+a-j-g+f+b)%100;
            }
            else
            {
               while( ++WHILEcnt[100]%5 )
               {
                  f -= (c+h*g-b-c+l-k)%100;
                  c -= (j-i-b+k+a+g+k+g*c+d)%100;
                  c += (h+n+c-b+l+e-n*f)%100;
                  a += (l*a+g-g-f-c-m-f+l)%100;
                  a -= (d-l-h+m-j)%100;
               }
               do
               {
                  a -= (c-g-c+e-m-g-g+j-h-l-k+f*e)%100;
                  k -= (h+i+g-f+h-c+d-j)%100;
                  b += (n-g+n-h+b+m+l*n+k*c-k)%100;
               } while( ++DOcnt[101]%5 );
               for( ; ++FORcnt[152]%5 ; )
               {
                  n += (i+h-d+l-l+m-k-k)%100;
                  l -= (a-j*i+f-n-f+m+i*j*i+m*c)%100;
                  k -= (b*f*k)%100;
                  e += (k*m*g+f*k-a-g-j-f-d*a)%100;
                  c -= (m*c)%100;
               }
               b += (j-m-e+g*c*i)%100;
               b  = (h+j*m*c-d-b)%100;
               h += (k+k+c-l*b)%100;
            }
            n += (b-c)%100;
         } while( ++DOcnt[99]%5 );
         n -= (h*d*b-e+j+g-f-g+d*f+n)%100;
         i += (h*d-a-a-j+m-i+d)%100;
         m -= (n-b*c+j+j)%100;
         k += (d-k)%100;
      }
      j += (g*m-m+m*f-c-a-d-g)%100;
      a -= (i+i-n-d+e*b-m-d-a)%100;
      e += (n*i-h*e+a*f-e-g*d*i-h+f-j)%100;
      a -= (g-j-e+h+n*l+e)%100;
   }
   b -= (a-b*m+b+k-m-f-d-f)%100;
   h += (a-c+j+f+n*g-e-f-c+k-d+f+j)%100;
   i -= (c-b-i+j+a)%100;
   i += (l+f-a+b*j*j+k+l-d-f-i+d)%100;
   a -= (e-b)%100;
   g += (k-b*h-d-d-n+n-a*n-e*f+c)%100;
   l += (a-a*g+h-m+e+m*f-g*e*f-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F46(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[77]%10 )
   {
      for( ; ++FORcnt[154]%5 ; )
      {
         if( ++IFEcnt[103]%2 )
         {
            g -= (g-l-d-f+j*e+f+l*f-i-k+k)%100;
            i -= (j+n+i+e+e-d*n+d)%100;
            f += (h+n-i-l-h+n)%100;
            h += (f+i+n+b-k*j+b*c-e)%100;
            n -= (j-j-k-l-l+f+a+c-c-a*a-a-i)%100;
         }
         else
         {
            while( ++WHILEcnt[102]%5 )
            {
               do
               {
                  c += (e+m+m-c+d+b-f+e-j+n*i)%100;
                  c += (b+f+d)%100;
                  k += (b-e)%100;
                  c  = (b*c-j-b-n-k)%100;
                  f -= (f-g+e-h+h-m-l*f+j)%100;
               } while( ++DOcnt[102]%5 );
               e  = (h+l+f+k-l-n-g-a+e-f-k-g+d)%100;
               for( ; ++FORcnt[153]%5 ; )
               {
                  b += (h-f)%100;
                  e += (m+m)%100;
                  a += (k-f+n*e*g-i*n-l-i+c+c-c)%100;
               }
               
               switch( ++SWcnt[51]%4 )
               {

               case 1:
               {
                  h -= (e+i+j-g-e+m-a-c-m*k*d)%100;
                  e += (d*m)%100;
                  f -= (a+c)%100;
                  e += (g*a+a+g-f)%100;
                  e += (a+k)%100;
               }
               break;

               case 2:
               {
                  g -= (i-m+e*h+d+i-g+i-b-c-e*a*l)%100;
                  e -= (g+i-m+d*d-f*j+l-j-h-c)%100;
                  j += (n+e*a-i+c-g+e*l-j)%100;
                  j  = (l+a-c-g-f-j-b)%100;
               }
               break;

               case 3:
               {
                  m -= (b+j-a+n)%100;
                  i += (i-b+k-n+f)%100;
                  h += (c+i)%100;
                  m += (d+c)%100;
                  e -= (g*n+e*l*m*m)%100;
                  e -= (k+e-f-f-i+c-h)%100;
               }
               break;

               default:
               {
                  f  = (h+d-h*h*k)%100;
                  k -= (b-c-g+i+a-e*m*e+e+h+e*k+j)%100;
                  c -= (n+c+f)%100;
                  l += (l*c-l*g+k*l-h*m+j-j*e)%100;
                  a += (n-h+d+h+d-c*j-l*f-c+k*j-g+n)%100;
               }
               }

               if( ++IFcnt[76]%10 )
               {
                  j -= (l-j-f+c-n+d+n)%100;
               }
               if( ++IFEcnt[102]%2 )
               {
                  f -= (c*j)%100;
                  k += (n-d+c+b)%100;
                  k -= (k+a*l-d-d+l-n+i+i-i)%100;
                  l -= (g+g+b-c-n-c-g+h+n)%100;
                  d -= (c-b)%100;
               }
               else
               {
                  e -= (n-k-j+f+f-c-e+h-f)%100;
                  b -= (d+b+g-k*k+j+m-n+m+j*e-h+k)%100;
               }
            }
            while( ++WHILEcnt[103]%5 )
            {
               do
               {
                  g += (k-i-k+m+f-e+f)%100;
                  b += (l-b-d-m-l)%100;
                  e += (f-f+n+c+l+l-l*k*a+g-b+k+b)%100;
                  f -= (d*m+c+l+e)%100;
                  m += (h-h+n+d*e-i*e-d)%100;
                  g -= (f-i+j+j-g*m+b+h+e+g+g-n*l+d)%100;
               } while( ++DOcnt[103]%5 );
               d += (c-j+a)%100;
               b  = (d+e*h-i+e)%100;
               b += (i+g-a+n*e)%100;
            }
            l += (h+b+c-c*f-a-m+f-d+f-j)%100;
            l  = (a+h-l*l)%100;
         }
         d += (k*a*d+m-n+i+e)%100;
         d -= (a-n*g+j+d-h+i+l*b-m)%100;
         k -= (b*a+k-j*f-l+m+g*h+m-a)%100;
         c += (a*f-l+f+a+i*l+c-j+h+b-f)%100;
      }
      d  = (a*d+d+e-i+j-m*f+h)%100;
      m -= (j+j)%100;
      e += (d-c*b+f+b+a+l+c)%100;
      i += (n+m-m-e-a+d*a*j+g-b-f+l*e)%100;
   }
   j += (e*d-d+c)%100;
   n  = (n+b)%100;
   h += (l*l*c-n*i-h)%100;
   m -= (a*i*a)%100;
   h  = (d-j-l-m-l*h-n)%100;
   l -= (m-m+i-k-l+c*e+f-l*j*n-b+d)%100;
   l  = (d*b-i-j-b-d+m+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F47(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[159]%5 ; )
   {
      for( ; ++FORcnt[158]%5 ; )
      {
         if( ++IFEcnt[105]%2 )
         {
            i  = (g-i-f+a-l*k*i-a+d-n+l)%100;
            c -= (c-h+b+m*h-c)%100;
            f -= (j+e*h-e)%100;
            d  = (a-i*i-d-j*g+l)%100;
         }
         else
         {
            while( ++WHILEcnt[104]%5 )
            {
               do
               {
                  i  = (a-i+b)%100;
                  k -= (k*h-i+k*l*k)%100;
                  d -= (c-g+e-d*f)%100;
                  c -= (j-i*b+h*h+j-a+h*g+g)%100;
                  h += (d-b-e*h-e)%100;
               } while( ++DOcnt[104]%5 );
               if( ++IFcnt[78]%10 )
               {
                  f -= (n*h-j+i*c*a+g*k-m+e-c+f-b)%100;
                  g += (i-i*g+m+d-g+k+e*b-k+h*j)%100;
                  j += (j-d)%100;
                  b += (g+f*c+k*a+e*h+a-d-c+f+b)%100;
                  h  = (c+f-h-a*m-m*n)%100;
               }
               n -= (f*n+i*k)%100;
               for( ; ++FORcnt[155]%5 ; )
               {
                  b += (f+l+e-d-e+l)%100;
                  c -= (n-i*i+e*j)%100;
                  b -= (i-b)%100;
                  h  = (f*h-f+e-g+a)%100;
               }
               
               switch( ++SWcnt[52]%3 )
               {

               case 1:
               {
                  e += (e-i-h-m+n+d-e+a)%100;
                  k -= (m-a-a*b-c+e-f+k+m-k)%100;
                  h -= (c*n*j-i*b*a+e*l)%100;
                  d -= (c+b+c-b+l-h+d-j+c)%100;
                  e -= (j-f-n-f-k)%100;
                  g += (a*i-b-i+l-f*k+j+k*i*n+d)%100;
               }
               break;

               case 2:
               {
                  g -= (d*m+m-i-k-c*c*l-a*b+k+m)%100;
                  b += (c+c-i*k*f+a-f+m+k-n*j+l)%100;
                  e += (l-k-l+l)%100;
                  j += (j+m*m-c-i-b-m-n)%100;
                  e -= (k+a-m-d*e+b+a-e)%100;
               }
               break;

               default:
               {
                  j += (k+m-d-f+i+j-n-k-k-e+l+g)%100;
                  j += (a*e+c)%100;
                  c += (j+e-j+m-e+g-c*g+c+l*g-l-f)%100;
               }
               }

               if( ++IFEcnt[104]%2 )
               {
                  m += (g-d-i-l*d-m-a+b+n+c-a-l)%100;
                  l -= (g+h+c+f*c-j-g*e)%100;
                  e -= (f-e+g+n)%100;
                  m -= (i+n)%100;
               }
               else
               {
                  b -= (b*m*h*e+a-n)%100;
                  n -= (n-a-h-j-k-e-i+n+i+c)%100;
                  m  = (c-c+m+a*b+j*l)%100;
                  n  = (k-f*l-m*j-d+b+j+h+b+e*k+b-h)%100;
                  a -= (g+j-f-g+g*i-l*m+d*m+b*f+n)%100;
               }
            }
            while( ++WHILEcnt[105]%5 )
            {
               do
               {
                  h -= (n+c-h-d+c-d-j*i-d*a+a-f*j)%100;
                  e -= (l-b-j)%100;
                  a += (c-l+k-h-i-d+m-g-h+a-i-j-c)%100;
                  a -= (e+n+l*n)%100;
                  d += (k+n+k*c+b*c+a+a-g-k*b*b*j)%100;
               } while( ++DOcnt[105]%5 );
               for( ; ++FORcnt[156]%5 ; )
               {
                  j -= (j+m)%100;
               }
               if( ++IFcnt[79]%10 )
               {
                  k -= (k+a+j+a-f-f+e+i-j+l)%100;
                  b += (f+i+g)%100;
               }
               for( ; ++FORcnt[157]%5 ; )
               {
                  m += (l+i+j*j-n)%100;
                  f -= (n+e*c)%100;
                  h -= (i+a+j+h+h*n+b+l+i+d+h-f)%100;
                  l += (i*e+m*c*i-d*m-m+b*f+j+h-a+d)%100;
                  j -= (h-m+f-e+a+l)%100;
               }
               m += (i*m*j+m+d+m+f)%100;
               l -= (i+i-a-n-n*m+f*a+j)%100;
            }
            e  = (k-d-h+l+c*d)%100;
            l += (k-m*l-c-n*d-g-l-f+f)%100;
         }
         h -= (f-i-m*g+i*c+i-g+i-i+b)%100;
         d += (f-l-e-f+g-l-c*i+l*i-a+k*j*g)%100;
         n  = (l*c*n+d*d*l*e-h*d)%100;
         d += (e+e-i)%100;
      }
      h += (l-j+m)%100;
      e += (e+k+n-d-b+b*g+a+i+a+c*c+m+c)%100;
   }
   n += (f-l-j+a-d+g+a)%100;
   j -= (d*a-l*l-e*b*a*i-g+g)%100;
   g -= (h+m+c+b-n+e+a-e+g-j+c+c*l)%100;
   j += (b-n+c-h*a+k-j-b-e*l)%100;
   e -= (c-l*a*a+n-k-e+c*c)%100;
   i += (g-e-k+m-g-i*b-g-e)%100;
   l -= (c*k+m-j+h+n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<115; I++) IFcnt[I]   =0;
   for(I=0; I<153; I++) IFEcnt[I]  =0;
   for(I=0; I<76; I++) SWcnt[I]   =0;
   for(I=0; I<153; I++) WHILEcnt[I]=0;
   for(I=0; I<153; I++) DOcnt[I]   =0;
   for(I=0; I<230; I++) FORcnt[I]  =0;
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
   sum += F46( ) ;
   sum += F47( ) ;

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      c += (f-k+n+m)%100;
      b -= (j+g+c+h*a-h-n-g-d)%100;
      n += (h-b*d*d*d+h*m+l-b+i-m+c)%100;
      d -= (m+k+n+k+g-c+a+m+e-a)%100;
      f += (d-l+n+d-b)%100;
      k += (i+f+d)%100;
      d += (l+a+h-e+n-d*b-l-n-d*k-a)%100;
      a -= (c-m)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<80; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 80 << "   Dynamic = " << sum ;
   for(I=sum=0; I<106; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 106 << "   Dynamic = " << sum ;
   for(I=sum=0; I<53; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 53 << "   Dynamic = " << sum ;
   for(I=sum=0; I<106; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 106 << "   Dynamic = " << sum ;
   for(I=sum=0; I<106; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 106 << "   Dynamic = " << sum ;
   for(I=sum=0; I<160; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 160 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}