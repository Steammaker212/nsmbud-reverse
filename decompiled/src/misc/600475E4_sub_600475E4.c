/* sub_600475E4
 * address: 0x600475E4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600475E4(int a1, int a2)
{
  int v4; // r0
  int *v5; // r7
  int v6; // r1
  const char *v7; // r2
  int v8; // r2
  int v9; // r1
  _DWORD v11[8]; // [sp+0h] [bp-20h] BYREF

  if ( FIELD_U8(a1, 11796) )
  {
    v5 = (int *)(a1 + 11780);
    v4 = FIELD_U32(a1, 11780);
    v6 = FIELD_U32(a1, 6300);
    v11[0] = &sead__SafeStringBase__vtable;
    v7 = "koopaJr_clown";
  }
  else
  {
    v5 = (int *)(a1 + 6308);
    v4 = FIELD_U32(a1, 6308);
    v6 = FIELD_U32(a1, 6300);
    v11[0] = &sead__SafeStringBase__vtable;
    v7 = "koopaJr_clown_b";
  }
  v11[1] = v7;
  TexAnim_play(v4, v6, v11);
  AnimationCtrl_setRepeat((ModelAnimation *)(*v5 + 4), 0);
  if ( a2 == 1 )
    v8 = 1065353216;
  *(_DWORD *)(*v5 + 24) = 0;
  v9 = *v5;
  if ( a2 == 1 )
    FIELD_U32(v9, 20) = v8;
  else
    FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  return koopaJr_clown_expression_ref(a1, a2, v8);
}
