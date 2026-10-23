/* sub_6094D0B8
 * address: 0x6094D0B8   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094D0B8(unsigned int a1, unsigned int a2, int a3, char a4)
{
  int v4; // r12
  int v5; // lr
  unsigned int v6; // r12
  int v7; // r3
  unsigned int v8; // r2
  unsigned int v10; // r2
  unsigned int v11; // r2
  unsigned int v12; // lr
  int v13; // r2
  unsigned int v14; // r3
  unsigned int v15; // r1
  unsigned int v16; // lr
  int v17; // r2
  unsigned int v18; // r3
  unsigned int v19; // r1
  unsigned int v20; // r0
  unsigned int v21; // r0
  unsigned int i; // r0

  if ( !a3 )
  {
    if ( a1 )
    {
      v4 = 0;
      v10 = 0;
      do
      {
        v10 += 1 << a4;
        v4 += 6;
      }
      while ( v10 < a1 );
    }
    else
    {
      v4 = 0;
    }
    v12 = a2 - 1;
    if ( a2 != 1 )
    {
      v13 = 1 << a4;
      if ( a1 )
      {
        v14 = 0;
        do
        {
          v15 = 0;
          do
          {
            v15 += v13;
            v4 += 6;
          }
          while ( v15 < a1 );
          v14 += v13;
        }
        while ( v14 < v12 );
      }
      else
      {
        v20 = 0;
        do
          v20 += v13;
        while ( v20 < v12 );
      }
    }
    return v4;
  }
  if ( a3 == 1 )
  {
    if ( a1 )
    {
      v4 = 0;
      v11 = 0;
      do
      {
        v11 += 1 << a4;
        v4 += 6;
      }
      while ( v11 < a1 );
    }
    else
    {
      v4 = 0;
    }
    v16 = a2 - 1;
    if ( a2 != 1 )
    {
      v17 = 1 << a4;
      if ( a1 )
      {
        v18 = 0;
        do
        {
          v19 = 0;
          do
          {
            v19 += v17;
            v4 += 4;
          }
          while ( v19 < a1 );
          v18 += v17;
        }
        while ( v18 < v16 );
      }
      else
      {
        v21 = 0;
        do
          v21 += v17;
        while ( v21 < v16 );
      }
    }
    return v4;
  }
  v4 = 0;
  if ( a3 != 2 )
    return v4;
  v4 = 2;
  if ( !a2 )
    return v4;
  v5 = 1 << a4;
  if ( !a1 )
  {
    for ( i = 0; i < a2; i += v5 )
      ;
    return v4;
  }
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = 0;
    do
    {
      v8 += v5;
      v7 += 2;
    }
    while ( v8 < a1 );
    v6 += v5;
  }
  while ( v6 < a2 );
  return v7 + 2;
}
