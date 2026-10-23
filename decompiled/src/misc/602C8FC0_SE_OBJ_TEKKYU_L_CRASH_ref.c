/* SE_OBJ_TEKKYU_L_CRASH_ref
 * address: 0x602C8FC0   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_TEKKYU_L_CRASH_ref(int a1)
{
  int v2; // r5
  float v3; // r1
  int v4; // r6
  _DWORD v6[2]; // [sp+4h] [bp-2Ch] BYREF
  char v7; // [sp+Ch] [bp-24h]
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  v6[0] = 15;
  v6[1] = unk_60C2638C;
  v7 = 1;
  v2 = ((int (__fastcall *)(int))loc_606E74C4)(a1);
  v3 = FIELD_F32(a1, 112);
  v4 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&out, &position);
  return sub_60813BDC(v4, "SE_OBJ_TEKKYU_L_CRASH", &out, v2, v6);
}
