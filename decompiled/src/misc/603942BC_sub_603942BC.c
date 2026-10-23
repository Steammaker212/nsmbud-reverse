/* sub_603942BC
 * address: 0x603942BC   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603942BC(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r1
  bool v11; // zf
  __int16 v12; // r1
  __int16 v13; // r1

  sub_6039AF5C(a1, 0, 0.0);
  v3 = (_DWORD *)(a1 + 6312);
  result = FIELD_U32(a1, 6312);
  if ( result == 10 )
  {
    result = a1 + 6332;
    v10 = FIELD_U16(a1, 6332);
    v11 = v10 == 0;
    if ( FIELD_U16(a1, 6332) )
    {
      v12 = v10 - 1;
      *(_WORD *)result = v12;
      result = 0xFFFF;
      v11 = v12 == 0;
    }
    if ( v11 )
    {
      result = FIELD_U8(a1, 13300);
      if ( !FIELD_U8(a1, 13300) )
      {
        result = (int)&dword_60C972E0;
        FIELD_U32(a1, 6392) = &dword_60C972E0;
      }
    }
  }
  else if ( result == 9 )
  {
    result = FIELD_U8(a1, 6321);
    if ( (result & 1) != 0 )
    {
      *v3 = 10;
      v4 = a1 + 6304;
      sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&dword_60C96FC8);
      v5 = *(_DWORD *)(FIELD_U32(a1, 6304) + 12);
      v6 = *(_DWORD *)(FIELD_U32(a1, 6304) + 68);
      if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > v6 )
        v5 += 4 * v6;
      *(_DWORD *)(*(_DWORD *)v5 + 24) = dword_60C96F28[4 * *v3 + 2];
      v7 = *(_DWORD *)(*(_DWORD *)v4 + 12);
      v8 = *(_DWORD *)(*(_DWORD *)v4 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v8 )
        v7 += 4 * v8;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), dword_60C96F28[4 * *v3 + 3]);
      v9 = FIELD_U32(a1, 6404);
      if ( v9 == 3 )
      {
        FIELD_U16(a1, 6332) = 90;
        return 6332;
      }
      else
      {
        v11 = v9 == 4;
        v13 = 45;
        result = 6332;
        if ( v11 )
          v13 = 5;
        FIELD_U16(a1, 6332) = v13;
      }
    }
  }
  return result;
}
