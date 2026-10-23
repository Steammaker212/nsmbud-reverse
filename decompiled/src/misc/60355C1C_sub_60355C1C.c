/* sub_60355C1C
 * address: 0x60355C1C   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60355C1C(int a1, int a2)
{
  int result; // r0
  int v5; // r1
  int v6; // t1
  int v7; // r2
  _BYTE *v8; // r8
  int v9; // r7
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r1
  unsigned int v15; // r0

  v6 = FIELD_U32(a1, 6300);
  result = a1 + 6300;
  v5 = v6;
  v8 = (_BYTE *)(result + 132);
  v7 = FIELD_U8(result, 132);
  if ( v6 == a2 )
  {
    if ( FIELD_U8(result, 132) )
    {
      if ( v7 == 1 )
      {
        if ( FIELD_U8(a1, 6308) )
          return result;
        v7 = 1;
      }
    }
    else
    {
      v7 = 0;
      if ( !FIELD_U8(a1, 6308) )
        return result;
    }
  }
  FIELD_U32(a1, 6304) = v5;
  *(_DWORD *)result = a2;
  v9 = a1 + 6332;
  sub_60421938(*(_DWORD **)(a1 + 6332), FIELD_U32(a1, 6412), (int)&dword_60C952A0[4 * a2 + 2 * v7]);
  v10 = *(_DWORD *)(FIELD_U32(a1, 6332) + 12);
  v11 = *(_DWORD *)(FIELD_U32(a1, 6332) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 6332) + 8) > v11 )
    v10 += 4 * v11;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), dword_60AFFEAC[a2]);
  v12 = *(_DWORD *)(*(_DWORD *)v9 + 12);
  v13 = *(_DWORD *)(*(_DWORD *)v9 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v9 + 8) > v13 )
    v12 += 4 * v13;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v12 + 4));
  if ( !a2 )
  {
    v14 = *(_DWORD *)(*(_DWORD *)v9 + 12);
    v15 = *(_DWORD *)(*(_DWORD *)v9 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v9 + 8) > v15 )
      v14 += 4 * v15;
    *(_DWORD *)(*(_DWORD *)v14 + 24) = 1067030938;
  }
  TexAnim_play(**(_DWORD **)(*(_DWORD *)v9 + 20), FIELD_U32(a1, 6412), &dword_60C95250[2 * a2 + 6]);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v9 + 20) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v9 + 20) + 4));
  result = a1 + 6308;
  *(_BYTE *)result = *v8 == 1;
  return result;
}
