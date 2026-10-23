/* SE_EMY_HUHU_BREATH_IN_ref
 * address: 0x6032DF3C   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_EMY_HUHU_BREATH_IN_ref(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5
  unsigned int v3; // r7
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int *v9; // r1
  unsigned int v10; // r0
  int v11; // r0
  int v12; // r5
  float v13; // r0
  Vec2 v15; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v1 = a1 + 6300;
  v2 = *(_DWORD **)(a1 + 6300);
  v3 = FIELD_U32(a1, 160);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = off_60BEC280[v3 >> 31];
  sub_60421938(v2, ResArchiveById, (int)&position);
  v5 = *(_DWORD *)(*(_DWORD *)v1 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v1 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v1 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
  v7 = *(_DWORD *)(*(_DWORD *)v1 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v1 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v1 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  v9 = *(int **)(*(_DWORD *)v1 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v1 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v1 + 8) > v10 )
    v9 += v10;
  v11 = *v9;
  FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  *(_DWORD *)(v1 - 6180) = 0;
  *(_DWORD *)(v1 - 6176) = 0;
  *(_DWORD *)(v1 - 6172) = 0;
  v12 = Global_BasicSoundActor1;
  v13 = *(float *)(v1 - 6188);
  position.x = *(float *)(v1 - 6192);
  position.y = v13;
  mapPositionToScreen(&v15, &position);
  BasicSoundActor1_playSound(v12, "SE_EMY_HUHU_BREATH_IN", (int)&v15, 0);
  EffectData_setEffectId((EffectData *)(v1 + 84), 691);
  sub_60237208(v1 + 68, (Vec3 *)(v1 + 20), 0, 0);
  return EffectData_setEffectId((EffectData *)(v1 + 188), 692);
}
