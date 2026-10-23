/* SE_EMY_DOWN_SYNC_1_ref
 * address: 0x60319D24   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_SYNC_1_ref(int a1)
{
  float v2; // s18
  float v3; // r1
  int v4; // r5
  Vec3 position; // [sp+4h] [bp-5Ch] BYREF
  int v7; // [sp+10h] [bp-50h]
  StateVirtual *v8; // [sp+14h] [bp-4Ch]
  char v9; // [sp+18h] [bp-48h]
  int v10; // [sp+1Ch] [bp-44h]
  char v11; // [sp+20h] [bp-40h]
  Vec3 v12; // [sp+24h] [bp-3Ch] BYREF
  Vec2 out; // [sp+30h] [bp-30h] BYREF

  v2 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v12.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v12.y = v2;
  v12.z = sub_600024C4(a1);
  EffectData_create(377, &v12, 0, 0);
  v3 = FIELD_F32(a1, 112);
  v4 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&out, &position);
  BasicSoundActor1_playSound(v4, "SE_EMY_DOWN_SYNC_1", (int)&out, 0);
  position.x = 0.0;
  position.y = 0.0;
  position.z = -4.0;
  v7 = unk_60C906E8;
  v8 = &stru_60C90710;
  v9 = -1;
  v10 = FIELD_U32(a1, 80);
  v11 = 4;
  return sub_602A852C(a1 + 6104, &position);
}
