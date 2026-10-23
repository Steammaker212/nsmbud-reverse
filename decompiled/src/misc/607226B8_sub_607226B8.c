/* sub_607226B8
 * address: 0x607226B8   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607226B8(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r7
  int v9; // r0
  _DWORD *result; // r0
  _BYTE v11[24]; // [sp+8h] [bp-98h] BYREF
  int v12; // [sp+20h] [bp-80h] BYREF
  int v13; // [sp+24h] [bp-7Ch]
  char v14; // [sp+79h] [bp-27h]

  v4 = sub_6090B350(&v12);
  v13 &= ~1u;
  v14 = 0;
  LOWORD(v12) = 0;
  sub_6090B4B0(v4, FIELD_U32(a2, 40));
  sub_6090B260(a1 + 2904, FIELD_U32(a2, 40));
  v5 = ((int (__fastcall *)(_BYTE *, int))loc_6090E438)(v11, a1 + 2904);
  sub_6090E560(v5, FIELD_U32(a2, 40), a1 + 2904);
  sub_607229E8(a1, FIELD_U32(a2, 40), 49, 0, 0, -1);
  sub_607229E8(a1, FIELD_U32(a2, 40), 48, 1, 1, -1);
  sub_607229E8(a1, FIELD_U32(a2, 40), 31, 2, 2, -1);
  sub_607229E8(a1, FIELD_U32(a2, 40), 114, 7, 4, -1);
  sub_607229E8(a1, FIELD_U32(a2, 40), 112, 8, 5, -1);
  if ( (FIELD_U32(dword_60C99DD4, 764) & 0xFFFFFFFE) == 2 )
    sub_607229E8(a1, FIELD_U32(a2, 40), 28, 2, 2, -1);
  if ( FIELD_U32(a1, 5452) )
  {
    sub_607229E8(a1, FIELD_U32(a2, 40), 144, 4, 3, 1);
    sub_607229E8(a1, FIELD_U32(a2, 40), 147, 3, 3, 1);
    sub_607229E8(a1, FIELD_U32(a2, 40), 160, 6, 3, 1);
    sub_607229E8(a1, FIELD_U32(a2, 40), 163, 5, 3, 1);
  }
  v6 = sub_60958564(a2);
  sub_6090B260(v6, FIELD_U32(a2, 40));
  v7 = FIELD_U32(a2, 32);
  v8 = FIELD_U32(a2, 40);
  v9 = sub_60958564(a2);
  sub_6090E560(v7, v8, v9);
  sub_6091ADF4(a1 + 2208, FIELD_U32(a2, 40));
  sub_6091ADF4(a1 + 2968, FIELD_U32(a2, 40));
  result = *(_DWORD **)(a1 + 1112);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    sub_6017D524(&v12, "albedo%d", 0);
    result = *(_DWORD **)(a1 + 1112);
  }
  if ( ((unsigned __int8)result & 0x10) != 0 )
  {
    sub_6017D524(&v12, "normal%d", 0);
    result = *(_DWORD **)(a1 + 1112);
  }
  if ( ((unsigned __int8)result & 2) != 0 )
  {
    sub_6017D524(&v12, "albedo%d", 1);
    result = *(_DWORD **)(a1 + 1112);
  }
  if ( ((unsigned __int8)result & 0x20) != 0 )
  {
    sub_6017D524(&v12, "normal%d", 1);
    result = *(_DWORD **)(a1 + 1112);
  }
  if ( ((unsigned __int8)result & 4) != 0 )
  {
    sub_6017D524(&v12, "albedo%d", 2);
    result = *(_DWORD **)(a1 + 1112);
  }
  if ( ((unsigned __int8)result & 0x40) != 0 )
  {
    sub_6017D524(&v12, "normal%d", 2);
    result = *(_DWORD **)(a1 + 1112);
  }
  if ( ((unsigned __int8)result & 8) != 0 )
  {
    sub_6017D524(&v12, "albedo%d", 3);
    result = *(_DWORD **)(a1 + 1112);
  }
  if ( ((unsigned __int8)result & 0x80) != 0 )
    return sub_6017D524(&v12, "normal%d", 3);
  return result;
}
