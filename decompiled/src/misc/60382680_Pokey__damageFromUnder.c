/* Pokey__damageFromUnder
 * address: 0x60382680   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A1E1C
// 
// Overridden by: None
int __fastcall Pokey__damageFromUnder(int a1)
{
  float v2; // r1
  float v3; // r1
  int v4; // r5
  char v5; // r0
  int v6; // r1
  Vec3 v8; // [sp+0h] [bp-40h] BYREF
  int v9; // [sp+Ch] [bp-34h]
  void *v10; // [sp+10h] [bp-30h]
  char v11; // [sp+14h] [bp-2Ch]
  int v12; // [sp+18h] [bp-28h]
  char v13; // [sp+1Ch] [bp-24h]
  Vec2 out; // [sp+20h] [bp-20h] BYREF

  v2 = FIELD_F32(a1, 112);
  v8.x = FIELD_F32(a1, 108);
  v8.y = v2;
  v8.z = 0.0;
  sub_602A38A4(a1, &v8.x);
  v3 = FIELD_F32(a1, 112);
  v4 = Global_BasicSoundActor1;
  v8.x = FIELD_F32(a1, 108);
  v8.y = v3;
  mapPositionToScreen(&out, &v8);
  BasicSoundActor1_playSound(v4, "SE_EMY_DOWN", (int)&out, 0);
  v5 = FIELD_U8(a1, 84);
  v6 = FIELD_U32(a1, 548);
  v9 = 0;
  memset(&v8, 0, sizeof(v8));
  v10 = &unk_60C96A1C;
  v11 = 1;
  v12 = v6;
  v13 = v5;
  return sub_602A852C(a1 + 6104, &v8);
}
