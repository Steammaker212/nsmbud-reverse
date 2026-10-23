/* SE_OBJ_BALLOON_BREAK_ref_249B94
 * address: 0x60249B94   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BALLOON_BREAK_ref_249B94(int a1, int a2, int a3)
{
  float v5; // r1
  int v6; // r6
  int v7; // r5
  _BOOL4 v8; // r6
  float v9; // r1
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  EffectData_create(*(_DWORD *)((char *)&unk_60AF24B4 + ((FIELD_U32(a1, 20) >> 2) & 0xC)), (Vec3 *)(a1 + 108), 0, 0);
  v5 = FIELD_F32(a1, 112);
  v6 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v5;
  mapPositionToScreen(&out, &position);
  sub_60813BDC(v6, "SE_OBJ_BALLOON_BREAK", &out, 1, 0);
  v7 = FIELD_U32(a3, 64);
  v8 = sub_6000ADDC(a1, v7);
  v9 = FIELD_F32(v7, 112);
  position.x = FIELD_F32(v7, 108);
  position.y = v9;
  position.z = 4500.0;
  Enemy__vf1A0(a1, &position);
  sub_602A6024(a1, v8, FIELD_S8(v7, 84), -1);
  return 1;
}
