/* sub_602708F8
 * address: 0x602708F8   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_602708F8(int a1)
{
  _DWORD *result; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  float v6; // s0
  float v7; // s0

  v4 = FIELD_U32(a1, 7484);
  result = (_DWORD *)(a1 + 7484);
  v3 = v4;
  if ( !v4 || (v5 = v3 - 1, (*result = v5) == 0) )
  {
    v6 = FIELD_F32(a1, 108);
    if ( (float)(FIELD_F32(dword_60CC6484, 112) + 16.0) <= (float)(v6 + 16.0)
      && (float)(FIELD_F32(dword_60CC6484, 120) + -16.0) >= (float)(v6 + -16.0) )
    {
      v7 = FIELD_F32(a1, 112);
      if ( FIELD_F32(dword_60CC6484, 132) <= v7 && FIELD_F32(dword_60CC6484, 124) >= v7 )
      {
        if ( FIELD_U32(a1, 7488) )
          sub_602717D4(a1);
        else
          sub_60271648(a1);
      }
    }
    return (_DWORD *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E9D8);
  }
  return result;
}
