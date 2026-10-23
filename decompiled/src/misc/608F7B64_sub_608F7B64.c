/* sub_608F7B64
 * address: 0x608F7B64   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F7B64(int a1, int a2)
{
  int v3; // r5
  int v4; // r4
  int v5; // r9
  int v6; // r8
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r0
  int v11; // r6
  unsigned int v12; // r7
  int v13; // lr
  unsigned int v14; // r4
  int v15; // r0

  v3 = 0;
  v4 = abs32(a2);
  v5 = v4 - 1;
  if ( ((v4 - 1) & v4) != 0 )
    return v3;
  v6 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v6 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  v7 = FIELD_U32(a1, 132);
  v8 = FIELD_U32(a1, 140);
  v9 = a1 + 128 - v8;
  v10 = v7 - v8;
  if ( v4 > 4 )
  {
    if ( v10 != v9 )
    {
      v13 = -v4;
      v11 = 0;
      do
      {
        v14 = FIELD_U32(v10, 12);
        if ( v14 >= 4
          && v14 >= -12
                  - (v10
                   + FIELD_U16(v10, 10))
                  + ((v10 + FIELD_U16(v10, 10) + v5 + 16) & (unsigned int)v13) )
        {
          if ( v11 )
          {
            if ( FIELD_U32(v11, 12) < v14 )
              v11 = v10;
          }
          else
          {
            v11 = v10;
          }
        }
        v7 = FIELD_U32(v7, 4);
        v10 = v7 - v8;
      }
      while ( v7 - v8 != v9 );
      if ( !v11 )
      {
        v3 = 0;
        goto LABEL_33;
      }
      v15 = v11 + FIELD_U16(v11, 10) + 16;
      v3 = ((v15 + v5) & v13) - v15;
LABEL_28:
      v3 = FIELD_U32(v11, 12) - v3;
      if ( !v6 )
        return v3;
      goto LABEL_34;
    }
LABEL_30:
    v3 = 0;
    if ( !v6 )
      return v3;
    goto LABEL_34;
  }
  if ( v10 == v9 )
    goto LABEL_30;
  v11 = 0;
  do
  {
    v12 = FIELD_U32(v10, 12);
    if ( v12 >= 4 )
    {
      if ( v11 )
      {
        if ( FIELD_U32(v11, 12) < v12 )
          v11 = v10;
      }
      else
      {
        v11 = v10;
      }
    }
    v7 = FIELD_U32(v7, 4);
    v10 = v7 - v8;
  }
  while ( v7 - v8 != v9 );
  v3 = 0;
  if ( v11 )
    goto LABEL_28;
LABEL_33:
  if ( v6 )
LABEL_34:
    sead__CriticalSection__unlock(v6);
  return v3;
}
