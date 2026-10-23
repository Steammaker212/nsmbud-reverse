/* sub_602F49FC
 * address: 0x602F49FC   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F49FC(int a1)
{
  int *v2; // r6
  int v3; // r4
  int v4; // r1
  unsigned int v5; // r0
  int *v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r0
  int *v12; // r4
  int v13; // r0
  int *v14; // r5
  int v15; // t1
  int v16; // r0
  int result; // r0
  int (**v18)(); // [sp+0h] [bp-28h] BYREF
  const char *v19; // [sp+4h] [bp-24h]

  v18 = &sead__SafeStringBase__vtable;
  v19 = "walk";
  v2 = (int *)(a1 + 6300);
  v3 = a1 + 6304;
  sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&v18);
  v4 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
  v6 = *(int **)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += v7;
  v8 = *v6;
  FIELD_U32(v8, 20) = 0;
  FIELD_U32(v8, 28) |= 2u;
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v10 )
    v9 += 4 * v10;
  *(_DWORD *)(*(_DWORD *)v9 + 24) = 0;
  v18 = &sead__SafeStringBase__vtable;
  v19 = "look";
  TexAnim_play(FIELD_U32(a1, 6308), *v2, &v18);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6308) + 4), 0);
  v11 = FIELD_U32(a1, 6308);
  FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6308) + 24) = 0;
  v18 = &sead__SafeStringBase__vtable;
  v19 = "look";
  v12 = (int *)(a1 + 6312);
  ShuAnim_play(*(_DWORD **)(a1 + 6312), *v2, (int)&v18);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6312) + 4), 0);
  v13 = FIELD_U32(a1, 6312);
  FIELD_U32(v13, 20) = 0;
  FIELD_U32(v13, 28) |= 2u;
  *(_DWORD *)(*v12 + 24) = 0;
  v18 = &sead__SafeStringBase__vtable;
  v19 = "look";
  v15 = FIELD_U32(a1, 6316);
  v14 = (int *)(a1 + 6316);
  sub_6045195C(v15, *v2, &v18);
  AnimationCtrl_setRepeat((ModelAnimation *)(*v14 + 4), 0);
  v16 = *v14;
  FIELD_U32(v16, 20) = 1123287040;
  FIELD_U32(v16, 28) |= 2u;
  result = *v12;
  *(_DWORD *)(*v12 + 24) = 0;
  return result;
}
