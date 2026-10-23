/* sub_6095DC64
 * address: 0x6095DC64   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095DC64(int a1, int a2)
{
  int v4; // r6
  int v5; // r9
  int v6; // r0
  int v7; // r7
  _DWORD *v8; // r11
  int v9; // r1
  int result; // r0
  _DWORD v11[12]; // [sp+8h] [bp-30h] BYREF

  v4 = 0;
  v5 = FIELD_U32(a1, 456);
  v6 = FIELD_U32(a1, 620);
  v11[0] = 0;
  v11[1] = a1;
  v11[2] = a2;
  if ( v5 <= 1 )
    v5 = 1;
  if ( v5 >= v6 )
    v5 = v6;
  if ( v5 >= 1 )
  {
    v7 = 0;
    v8 = (_DWORD *)(a1 + 4424);
    while ( 1 )
    {
      v9 = FIELD_U32(a1, 624);
      if ( v6 > (unsigned int)v7 )
        v9 += v4;
      ((void (__fastcall *)(int, int, int, int, int))loc_60965C94)(a1 + 632, a2, v7, v9 + 1380, v9 + 1388);
      if ( FIELD_U8(a1, 488) )
        sub_60915B94(dword_60CCFC8C, a2, 1);
      v11[0] = v7;
      if ( *v8 )
        (**(void (__fastcall ***)(_DWORD, _DWORD *))*v8)(*v8, v11);
      if ( FIELD_U8(a1, 488) )
        sub_60915B94(dword_60CCFC8C, a2, 0);
      sub_60965F80(a1 + 632, a2, v7++);
      if ( v7 >= v5 )
        break;
      v4 += 1396;
      v6 = FIELD_U32(a1, 620);
    }
  }
  result = FIELD_U32(a1, 676);
  if ( result == 1 )
    return vsm_temp_ref(a1 + 632, a2);
  return result;
}
