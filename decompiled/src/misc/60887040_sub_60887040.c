/* sub_60887040
 * address: 0x60887040   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int8 *__fastcall sub_60887040(int a1, _DWORD *a2)
{
  int v4; // r8
  nn__util__BinaryFileHeader *v5; // r0
  int FirstBlock; // r0
  int v7; // r7
  int v8; // r3
  _DWORD *v9; // r1
  _DWORD *v10; // r2
  unsigned __int8 *result; // r0
  bool v12; // zf
  int v13; // r2
  nn__util__BinaryFileHeader *v14; // r0
  int v15; // r0
  int v16; // r6
  int v17; // r3
  _DWORD *v18; // r1
  _DWORD *v19; // r2

  FIELD_U32(a1, 108) = a2[1];
  v4 = FIELD_U32(a1, 32);
  v5 = sub_6083D5D4((nn__util__BinaryFileHeader *)((char *)a2 + a2[5]));
  FIELD_U32(a1, 992) = v5;
  FirstBlock = nn__util__BinaryFileHeader__GetFirstBlock(v5);
  v7 = FirstBlock;
  if ( FIELD_U32(a1, 12) )
  {
    v8 = FirstBlock - v4 + FIELD_U32(a1, 20);
    v9 = *(_DWORD **)(a1 + 8);
    v10 = *(_DWORD **)(a1 + 12);
  }
  else
  {
    v9 = *(_DWORD **)(a1 + 8);
    v10 = 0;
    v8 = 0;
  }
  sub_6083B088(FirstBlock, v9, v10, v8);
  sub_60888390(a1 + 1000, FIELD_U32(a1, 8), a1 + 944, v7, FIELD_U8(a1, 4));
  result = (unsigned __int8 *)a2[2];
  v12 = result + 1 == 0;
  if ( result != (unsigned __int8 *)-1 )
  {
    result = &result[(_DWORD)a2];
    v12 = result == 0;
  }
  if ( v12 )
  {
LABEL_11:
    result = 0;
    FIELD_U32(a1, 112) = 0;
  }
  else
  {
    while ( (*result | (result[1] << 8) | (result[2] << 16) | (result[3] << 24)) != 0x43535247 )
    {
      v13 = *((_DWORD *)result + 3);
      result += v13;
      if ( v13 == -1 )
        result = 0;
      if ( !result )
        goto LABEL_11;
    }
    FIELD_U32(a1, 112) = 0;
    if ( result )
    {
      FIELD_U32(a1, 112) = *((_DWORD *)result + 1);
      v14 = sub_6083D5D4((nn__util__BinaryFileHeader *)&result[*((_DWORD *)result + 5)]);
      FIELD_U32(a1, 1028) = v14;
      v15 = nn__util__BinaryFileHeader__GetFirstBlock(v14);
      v16 = v15;
      if ( FIELD_U32(a1, 12) )
      {
        v17 = v15 - v4 + FIELD_U32(a1, 20);
        v18 = *(_DWORD **)(a1 + 8);
        v19 = *(_DWORD **)(a1 + 12);
      }
      else
      {
        v18 = *(_DWORD **)(a1 + 8);
        v19 = 0;
        v17 = 0;
      }
      sub_6083B088(v15, v18, v19, v17);
      return (unsigned __int8 *)sub_6088871C(a1 + 1036, FIELD_U32(a1, 8), a1 + 944, v16);
    }
  }
  return result;
}
