/* sub_60193EE4
 * address: 0x60193EE4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60193EE4(int a1, int a2)
{
  float v4; // r1
  float v5; // r2
  _DWORD v7[3]; // [sp+4h] [bp-2Ch] BYREF
  Vec3 v8; // [sp+10h] [bp-20h] BYREF

  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 268) + 12) + 4), 0);
  FIELD_U32(a2, 20) = -1082130432;
  sub_6041838C((ModelAnimation *)a2);
  sub_601E4C88(dword_60C8B13C, 51, a1 + 80, 1);
  v4 = FIELD_F32(a1, 84);
  v5 = FIELD_F32(a1, 88);
  v8.x = FIELD_F32(a1, 80);
  v8.y = v4;
  v8.z = v5;
  v7[0] = 1065353216;
  v7[1] = 1065353216;
  v7[2] = 1065353216;
  return EffectData_create(898, &v8, 0, (int)v7);
}
