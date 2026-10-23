/* sub_6028BE50
 * address: 0x6028BE50   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028BE50(int a1)
{
  _DWORD *v2; // r0
  float *v3; // r5
  int *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  __int16 v15; // r1
  float v16; // s0
  int v17; // r0
  int v18; // r5
  Vec2 v20; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v3 = (float *)(a1 + 6300);
  v2 = *(_DWORD **)(a1 + 6300);
  v4 = (int *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  v7 = *v4;
  v8 = *((_DWORD *)v3 + 1);
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "attack2";
  SkeletalAnim_play(v7, v8, (int)&position);
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v10 )
    v9 += 4 * v10;
  *(_DWORD *)(*(_DWORD *)v9 + 24) = 1065353216;
  v11 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v12 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v12 )
    v11 += 4 * v12;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
  v13 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v14 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v14 )
    v13 += 4 * v14;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v13 + 4));
  v15 = 0;
  v16 = *(v3 - 1547);
  v17 = (int)(float)((float)((float)(v16 - v3[3]) + -40.0) * 0.0625);
  if ( v17 >= 0 )
  {
    if ( v17 >= 7 )
      LOWORD(v17) = 7;
    v15 = v17;
  }
  FIELD_U16(a1, 6340) = v15;
  v18 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v16;
  mapPositionToScreen(&v20, &position);
  BasicSoundActor1_playSound(v18, "SE_EMY_CROW_CAW", (int)&v20, 0);
  FIELD_U32(a1, 6336) = 0;
  FIELD_U16(a1, 6276) = 56;
  return 6276;
}
