/* sub_6094D9D8
 * address: 0x6094D9D8   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094D9D8(unsigned int a1, unsigned int a2, int a3, char a4)
{
  unsigned int v4; // lr
  int v5; // r12
  unsigned int v6; // r12
  int v7; // r2
  unsigned int v8; // lr
  int v9; // r1
  unsigned int v10; // r3
  unsigned int v12; // r2
  unsigned int v13; // r2
  unsigned int v14; // r0
  int v15; // r1
  unsigned int i; // r2
  unsigned int v17; // r3
  int v18; // r1
  unsigned int k; // r2
  unsigned int v20; // r3
  unsigned int m; // r0
  unsigned int j; // r0

  v4 = a2 >> 1;
  if ( !a3 )
  {
    if ( a1 )
    {
      v12 = 0;
      v5 = 0;
      do
      {
        v12 += 1 << a4;
        v5 += 3;
      }
      while ( v12 < a1 );
    }
    else
    {
      v5 = 0;
    }
    if ( v4 )
    {
      v15 = 1 << a4;
      if ( a1 )
      {
        for ( i = 0; i < v4; i += v15 )
        {
          v17 = 0;
          do
          {
            v17 += v15;
            v5 += 6;
          }
          while ( v17 < a1 );
        }
      }
      else
      {
        for ( j = 0; j < v4; j += v15 )
          ;
      }
    }
    return v5;
  }
  if ( a3 == 1 )
  {
    if ( a1 )
    {
      v13 = 0;
      v5 = 0;
      do
      {
        v13 += 1 << a4;
        v5 += 4;
      }
      while ( v13 < a1 );
    }
    else
    {
      v5 = 0;
    }
    if ( v4 )
    {
      v18 = 1 << a4;
      if ( a1 )
      {
        for ( k = 0; k < v4; k += v18 )
        {
          v20 = 0;
          do
          {
            v20 += v18;
            v5 += 4;
          }
          while ( v20 < a1 );
        }
      }
      else
      {
        for ( m = 0; m < v4; m += v18 )
          ;
      }
    }
    return v5;
  }
  v5 = 0;
  if ( a3 != 2 )
    return v5;
  v6 = (a2 >> 1) + 1;
  v7 = 1 << a4;
  if ( a1 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = 0;
      do
      {
        v10 += v7;
        v9 += 2;
      }
      while ( v10 < a1 );
      v8 += v7;
    }
    while ( v8 < v6 );
    return v9 + 1;
  }
  else
  {
    v14 = 0;
    do
      v14 += v7;
    while ( v14 < v6 );
    return 1;
  }
}
