/* sub_608717BC
 * address: 0x608717BC   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608717BC(int a1, int *a2, int a3)
{
  int v3; // r12
  unsigned int v4; // r4
  int v5; // r9
  int v6; // r8
  unsigned int v7; // lr
  int v8; // r1
  signed int v9; // r1
  signed int v10; // r10
  int v11; // r7
  int v12; // r5
  unsigned int v13; // r3
  unsigned int v14; // r6
  bool v15; // cf
  int v16; // r1
  int v17; // r5
  unsigned int v18; // r3
  unsigned int v19; // r6

  v3 = FIELD_U8(a1, 218);
  v4 = FIELD_U8(a1, 219);
  v5 = *a2;
  v6 = a2[1];
  v7 = v4 + v3;
  v8 = v6 - *a2;
  if ( v4 + v3 <= v8 >> 2 )
  {
    v9 = (v8 >> 2) / v7;
    if ( FIELD_U8(a1, 219) )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          v10 = v9;
          v9 /= 2;
          v11 = v5 + 4 * v9 * v7;
          v12 = 0;
          while ( 1 )
          {
            v13 = *(_DWORD *)(a3 + 4 * v12);
            v14 = *(_DWORD *)(v11 + 4 * v12);
            if ( v14 != v13 )
              break;
            if ( ++v12 >= v4 )
              goto LABEL_8;
          }
          if ( v14 >= v13 )
          {
LABEL_8:
            if ( (unsigned int)(v10 + 1) >= 3 )
              continue;
            goto LABEL_13;
          }
          break;
        }
        v5 = v11 + 4 * v7;
        v9 = v10 - 1 - v9;
        if ( v9 )
          continue;
        break;
      }
    }
    else
    {
      do
      {
        v15 = (unsigned int)(v9 + 1) >= 3;
        v9 /= 2;
      }
      while ( v15 );
    }
  }
LABEL_13:
  v16 = -1;
  if ( v5 != v6 )
  {
    if ( !FIELD_U8(a1, 219) )
      return ((v5 - (FIELD_U32(a1, 128) + 4 * v3)) >> 2) / v7;
    v17 = 0;
    while ( 1 )
    {
      v18 = *(_DWORD *)(v5 + 4 * v17);
      v19 = *(_DWORD *)(a3 + 4 * v17);
      if ( v19 != v18 )
        break;
      if ( ++v17 >= v4 )
        return ((v5 - (FIELD_U32(a1, 128) + 4 * v3)) >> 2) / v7;
    }
    if ( v19 >= v18 )
      return ((v5 - (FIELD_U32(a1, 128) + 4 * v3)) >> 2) / v7;
  }
  return v16;
}
