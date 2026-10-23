/* sub_60519EF8
 * address: 0x60519EF8   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60519EF8(int a1)
{
  _BYTE *v2; // r6
  char v3; // r9
  char v4; // r5
  char v5; // r10
  char v6; // r11
  unsigned int v7; // r7
  int v8; // r0
  int i; // r5
  _DWORD *result; // r0
  unsigned int v11; // r0
  int v12; // r2
  _DWORD v13[11]; // [sp+4h] [bp-2Ch] BYREF

  v2 = (_BYTE *)(a1 + 3752);
  v3 = FIELD_U8(a1, 3752);
  v4 = FIELD_U8(a1, 3772);
  v5 = FIELD_U8(a1, 3792);
  v6 = FIELD_U8(a1, 3812);
  v7 = 0;
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = sub_6051A8DC(1);
  sub_60473DE4((_DWORD *)(a1 + 36), 1u, v13, 0);
  v8 = sub_6047482C((int)(v2 - 3716), 1u);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)v8 + 96))(v8, (float)(4 - (unsigned __int8)(v6 + v5 + v4 + v3)));
  for ( i = 0; i != 4; ++i )
  {
    result = (_DWORD *)(unsigned __int8)*v2;
    if ( *v2 )
    {
      if ( !v7 )
        sub_6047DEC8((_DWORD *)(a1 + 36), FIELD_U32(a1, 24), 1, *((_DWORD *)v2 - 3));
      v11 = 0;
      v12 = *((_DWORD *)v2 - 1);
      if ( v7 < 4 )
        v11 = v7;
      result = (_DWORD *)(a1 + 3620 * v11);
      if ( v12 == 6 || result[957] != v12 )
      {
        result[957] = v12;
        result[956] |= 1u;
      }
      if ( i != result[958] )
      {
        result[958] = i;
        result[956] |= 1u;
      }
      ++v7;
    }
    v2 += 20;
  }
  return result;
}
