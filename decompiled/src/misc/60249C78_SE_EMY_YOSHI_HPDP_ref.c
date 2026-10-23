/* SE_EMY_YOSHI_HPDP_ref
 * address: 0x60249C78   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_YOSHI_HPDP_ref(int a1, int a2, int a3)
{
  float v5; // r1
  int v6; // r6
  float v7; // r1
  int v8; // r5
  int v9; // r6
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  EffectData_create(*(_DWORD *)((char *)&unk_60AF24B4 + ((FIELD_U32(a1, 20) >> 2) & 0xC)), (Vec3 *)(a1 + 108), 0, 0);
  v5 = FIELD_F32(a1, 112);
  v6 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v5;
  mapPositionToScreen(&out, &position);
  sub_60813BDC(v6, "SE_OBJ_BALLOON_BREAK", &out, 1, 0);
  v7 = FIELD_F32(a1, 112);
  v8 = FIELD_U32(a3, 64);
  v9 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v7;
  mapPositionToScreen(&out, &position);
  BasicSoundActor1_playSound(v9, "SE_EMY_YOSHI_HPDP", (int)&out, 0);
  Enemy_killYoshi(a1, v8);
  return 1;
}
