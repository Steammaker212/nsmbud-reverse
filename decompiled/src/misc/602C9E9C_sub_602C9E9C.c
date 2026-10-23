/* sub_602C9E9C
 * address: 0x602C9E9C   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C9E9C(int a1)
{
  int v2; // r1
  float v3; // s2
  float v4; // s0
  int v5; // r0
  _DWORD v7[12]; // [sp+0h] [bp-68h] BYREF
  SolidOnTopColliderInfo info; // [sp+30h] [bp-38h] BYREF
  _DWORD v9[8]; // [sp+48h] [bp-20h] BYREF

  lift_guraIwa_ref();
  sub_602CA1DC(a1);
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1107296256;
  FIELD_U32(a1, 500) = 1124073472;
  FIELD_U32(a1, 504) = 1134559232;
  sub_608337BC(a1 + 6568, &dword_60C917A8);
  v2 = FIELD_U32(a1, 164);
  if ( v2 < 0 )
    v2 = -v2;
  FIELD_U32(a1, 156) = FIELD_U32(a1, 6572) + (v2 >> 2);
  FIELD_U32(a1, 6280) = a1 + 86;
  memset(&info, 0, 16);
  v9[0] = -1039138816;
  v9[1] = 1108869120;
  v9[2] = 1108344832;
  v9[3] = 1108869120;
  info.points = (Vec2 *)v9;
  info.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6120), (StageActor *)a1, &info);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
  v3 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 6604) = v3 + -128.0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1075419546;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = -1100920914;
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_U32(a1, 108);
  v7[0] = 1065353216;
  v7[1] = 0;
  v7[2] = 0;
  v7[4] = 0;
  v7[5] = 1065353216;
  v7[6] = 0;
  v7[8] = 0;
  v7[9] = 0;
  v7[10] = 1065353216;
  v7[3] = v5;
  *(float *)&v7[7] = v3;
  *(float *)&v7[11] = v4 + -100.0;
  (*(void (__fastcall **)(_DWORD, _DWORD *))(***(_DWORD ***)(a1 + 6108) + 60))(**(_DWORD **)(a1 + 6108), v7);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6108) + 68))(**(_DWORD **)(a1 + 6108), a1 + 144);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6108));
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C917C8);
  return 1;
}
