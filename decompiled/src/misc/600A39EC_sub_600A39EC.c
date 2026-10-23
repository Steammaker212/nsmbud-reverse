/* sub_600A39EC
 * address: 0x600A39EC   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A39EC(int a1)
{
  int v2; // r0
  _DWORD v4[6]; // [sp+8h] [bp-F8h] BYREF
  _DWORD v5[8]; // [sp+20h] [bp-E0h] BYREF
  _DWORD v6[6]; // [sp+40h] [bp-C0h] BYREF
  _DWORD v7[8]; // [sp+58h] [bp-A8h] BYREF
  _DWORD v8[6]; // [sp+78h] [bp-88h] BYREF
  _DWORD v9[8]; // [sp+90h] [bp-70h] BYREF
  SolidOnTopColliderInfo info; // [sp+B0h] [bp-50h] BYREF
  _DWORD v11[13]; // [sp+CCh] [bp-34h] BYREF

  room_iggy_ref(a1);
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 3072) = 0;
  v2 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 3068) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 3064) = v2;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 0.0;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + 0.0;
  memset(&info, 0, 16);
  info.points = (Vec2 *)v11;
  v11[0] = -1012924416;
  v11[1] = 0;
  v11[2] = 1134559232;
  v11[3] = 0;
  info.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 648), (StageActor *)a1, &info);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 648));
  memset(v8, 0, 16);
  v9[0] = 1129316352;
  v9[1] = 1128267776;
  v9[2] = 1129316352;
  v9[3] = -1031798784;
  v9[4] = 1127219200;
  v9[5] = -1031798784;
  v9[6] = 1127219200;
  v9[7] = 1128267776;
  v8[4] = v9;
  v8[5] = 0;
  sub_60161E18((_DWORD *)(a1 + 1096), a1, v8);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1096));
  memset(v6, 0, 16);
  v7[0] = -1020264448;
  v7[1] = 1128267776;
  v7[2] = -1020264448;
  v7[3] = -1031798784;
  v7[4] = -1018167296;
  v7[5] = -1031798784;
  v7[6] = -1018167296;
  v7[7] = 1128267776;
  v6[4] = v7;
  v6[5] = 0;
  sub_60161E18((_DWORD *)(a1 + 1752), a1, v6);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1752));
  v5[0] = 1134559232;
  v5[1] = 1128267776;
  v5[2] = 1134559232;
  v5[3] = 1126170624;
  v5[4] = -1012924416;
  v5[5] = 1126170624;
  v5[6] = -1012924416;
  v5[7] = 1128267776;
  memset(v4, 0, 16);
  v4[4] = v5;
  v4[5] = 0;
  sub_60161E18((_DWORD *)(a1 + 2408), a1, v4);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 2408));
  sub_600A3D1C(a1);
  return 1;
}
