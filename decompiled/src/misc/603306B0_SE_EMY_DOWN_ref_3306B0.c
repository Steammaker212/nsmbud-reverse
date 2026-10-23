/* SE_EMY_DOWN_ref_3306B0
 * address: 0x603306B0   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_3306B0(int a1)
{
  float v2; // r1
  float v3; // r1
  int v4; // r5
  Vec3 v6; // [sp+0h] [bp-40h] BYREF
  int v7; // [sp+Ch] [bp-34h]
  void *v8; // [sp+10h] [bp-30h]
  char v9; // [sp+14h] [bp-2Ch]
  int v10; // [sp+18h] [bp-28h]
  char v11; // [sp+1Ch] [bp-24h]
  Vec2 out; // [sp+20h] [bp-20h] BYREF

  v2 = FIELD_F32(a1, 112);
  v6.x = FIELD_F32(a1, 108);
  v6.y = v2;
  v6.z = 0.0;
  sub_602A38A4(a1, &v6.x);
  v3 = FIELD_F32(a1, 112);
  v4 = Global_BasicSoundActor1;
  v6.x = FIELD_F32(a1, 108);
  v6.y = v3;
  mapPositionToScreen(&out, &v6);
  BasicSoundActor1_playSound(v4, "SE_EMY_DOWN", (int)&out, 0);
  v7 = 0;
  memset(&v6, 0, sizeof(v6));
  v8 = &unk_60C93E40;
  v9 = -1;
  v10 = FIELD_U32(a1, 80);
  v11 = FIELD_U8(a1, 84);
  return sub_602A852C(a1 + 6104, &v6);
}
