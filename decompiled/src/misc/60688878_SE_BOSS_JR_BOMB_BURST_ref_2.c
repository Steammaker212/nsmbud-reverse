/* SE_BOSS_JR_BOMB_BURST_ref_2
 * address: 0x60688878   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_BOMB_BURST_ref_2(int a1)
{
  float *v1; // r1
  int v2; // r4
  _DWORD v4[2]; // [sp+8h] [bp-78h] BYREF
  char v5; // [sp+10h] [bp-70h]
  Vec3 v6; // [sp+14h] [bp-6Ch] BYREF
  _DWORD v7[16]; // [sp+20h] [bp-60h] BYREF
  Vec2 out; // [sp+60h] [bp-20h] BYREF
  Vec3 position; // [sp+68h] [bp-18h] BYREF

  v7[0] = 1119879168;
  v7[1] = -1056964608;
  v7[2] = -1023410176;
  v7[3] = -1044381696;
  v7[4] = 1126694912;
  v7[5] = -1048576000;
  v7[6] = -1020788736;
  v7[7] = -1035993088;
  v7[8] = 1117782016;
  v7[9] = -1056964608;
  v7[10] = -1025507328;
  v7[11] = -1040187392;
  v7[12] = 1126694912;
  v7[13] = -1044381696;
  v7[14] = -1021313024;
  v7[15] = -1056964608;
  v6.x = FIELD_F32(a1, 108);
  v1 = (float *)&v7[2 * FIELD_U8(a1, 7686)];
  v6.x = *v1 + v6.x;
  v6.y = FIELD_F32(a1, 7648) + v1[1];
  v6.z = 4500.0;
  EffectData_create(1119, &v6, 0, 0);
  AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 12, 3, 0, 0);
  position.x = v6.x;
  position.y = v6.y;
  v4[0] = 15;
  v4[1] = unk_60C263AC;
  v5 = 0;
  v2 = Global_BasicSoundActor2;
  mapPositionToScreen(&out, &position);
  return BasicSoundActor2_play(v2, "SE_BOSS_JR_BOMB_BURST", &out.x, (int)v4);
}
