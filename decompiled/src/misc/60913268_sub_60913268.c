/* sub_60913268
 * address: 0x60913268   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913268(int *a1)
{
  int v2; // r0
  int v3; // r1
  int result; // r0
  int v5; // r1
  int v6; // r2
  unsigned int v7; // r2
  int v8; // r12
  int v9; // lr
  int v10; // r0
  int v11; // r2
  int v12; // r0
  int v13; // r1

  v2 = *a1;
  *((_BYTE *)a1 + 8) = FIELD_U8(v2, 12);
  v3 = FIELD_U16(v2, 14);
  *((_WORD *)a1 + 5) = v3;
  if ( v3 )
  {
    result = sub_60913424(16 * v3);
    v5 = *a1;
    v6 = *((unsigned __int16 *)a1 + 5);
    a1[3] = result;
    a1[1] = FIELD_U32(v5, 18);
    if ( v6 )
    {
      v7 = 32;
      v8 = 1;
      v9 = 0;
      while ( 1 )
      {
        *(_DWORD *)(result + v9) = v5 + v7 + 16;
        v12 = result + v9;
        FIELD_U8(v12, 4) = *(_BYTE *)(*a1 + v7);
        FIELD_U8(v12, 5) = *(_BYTE *)(*a1 + (v7 | 1));
        FIELD_U8(v12, 6) = *(_BYTE *)(*a1 + (v7 | 1) + 1);
        FIELD_U8(v12, 7) = *(_BYTE *)(*a1 + (v7 | 3));
        v13 = *(_DWORD *)(*a1 + (v7 | 3) + 1);
        FIELD_U32(v12, 8) = v13;
        FIELD_U16(v12, 12) = *(_WORD *)(*a1 + (v7 | 3) + 5);
        result = *((unsigned __int16 *)a1 + 5);
        if ( v8 >= result )
          break;
        v10 = v7 + v13;
        v5 = *a1;
        v9 += 16;
        ++v8;
        v11 = v10 + 31;
        result = a1[3];
        v7 = v11 & 0xFFFFFFF0;
      }
    }
  }
  else
  {
    a1[3] = 0;
    result = FIELD_U32(v2, 18);
    a1[1] = result;
  }
  return result;
}
