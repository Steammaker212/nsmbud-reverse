/* SE_EMY_IGAKURIBO_OPEN_ref
 * address: 0x602F4C60   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_IGAKURIBO_OPEN_ref(int a1)
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
  int v12; // r0
  float *v13; // r7
  int v14; // t1
  int v15; // r0
  int v16; // r5
  float v17; // r0
  Vec2 v19; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "look";
  v2 = (int *)(a1 + 6300);
  v3 = a1 + 6304;
  sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&position);
  v4 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
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
  *(_DWORD *)(*(_DWORD *)v9 + 24) = 1065353216;
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "look";
  TexAnim_play(FIELD_U32(a1, 6308), *v2, &position);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6308) + 4), 0);
  v11 = FIELD_U32(a1, 6308);
  FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6308) + 24) = 1065353216;
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "look";
  ShuAnim_play(*(_DWORD **)(a1 + 6312), *v2, (int)&position);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6312) + 4), 0);
  v12 = FIELD_U32(a1, 6312);
  FIELD_U32(v12, 20) = 0;
  FIELD_U32(v12, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6312) + 24) = 1065353216;
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "look";
  v14 = FIELD_U32(a1, 6316);
  v13 = (float *)(a1 + 6316);
  sub_6045195C(v14, *v2, &position);
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v13 + 4), 0);
  v15 = *(_DWORD *)v13;
  FIELD_U32(v15, 20) = 0;
  FIELD_U32(v15, 28) |= 2u;
  *(_DWORD *)(*(_DWORD *)v13 + 24) = 1065353216;
  v16 = Global_BasicSoundActor1;
  v17 = *(v13 - 1551);
  position.x = *(v13 - 1552);
  position.y = v17;
  mapPositionToScreen(&v19, &position);
  return BasicSoundActor1_playSound(v16, "SE_EMY_IGAKURIBO_OPEN", (int)&v19, 0);
}
