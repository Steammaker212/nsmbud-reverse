/* SE_EMY_KURIBO_L_SPLIT_HPDP_ref
 * address: 0x6033FB2C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KURIBO_L_SPLIT_HPDP_ref(int a1)
{
  unsigned int v2; // r0
  int *v3; // r5
  float v4; // r1
  int v5; // r6
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 6388);
  LODWORD(position.x) = 63;
  v3 = sub_60002B90(v2, unk_60C26470);
  v4 = FIELD_F32(a1, 112);
  v5 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&v7, &position);
  return BasicSoundActor1_playSound(v5, "SE_EMY_KURIBO_L_SPLIT_HPDP", (int)&v7, (int)v3);
}
