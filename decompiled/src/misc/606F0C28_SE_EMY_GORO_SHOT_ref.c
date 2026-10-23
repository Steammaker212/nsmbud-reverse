/* SE_EMY_GORO_SHOT_ref
 * address: 0x606F0C28   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_GORO_SHOT_ref(int a1)
{
  float v2; // r1
  int v3; // r0
  float v4; // s2
  int v5; // r1
  int v6; // r3
  int v7; // r0
  int v8; // r4
  _DWORD v10[12]; // [sp+0h] [bp-50h] BYREF
  Vec2 out; // [sp+30h] [bp-20h] BYREF
  Vec3 position; // [sp+38h] [bp-18h] BYREF

  memset(v10, 0, 44);
  v10[3] = Profile__get(0x232u);
  v10[4] = FIELD_U32(a1, 108);
  v2 = FIELD_F32(a1, 112);
  *(float *)&v10[5] = v2;
  v10[6] = 1153138688;
  v3 = FIELD_U32(a1, 6760);
  switch ( v3 )
  {
    case 0:
      v4 = 16.0;
      v5 = 0;
      goto LABEL_6;
    case 2:
      *(float *)&v10[5] = v2 + 4.0;
      break;
    case 1:
      v4 = -16.0;
      v5 = 1;
LABEL_6:
      *(float *)&v10[4] = *(float *)&v10[4] + v4;
      goto LABEL_9;
  }
  v5 = FIELD_U32(a1, 6764);
LABEL_9:
  v6 = 1073741825;
  v7 = (16 * v5) | (v3 << 6);
  if ( (FIELD_U16(a1, 22) & 3) != 0 )
    v6 = FIELD_U16(a1, 22) & 3 | 0x40000000;
  v10[0] = v7 | v6 | (FIELD_U32(a1, 24) << 20) & 0x100000 | 0x1000;
  sub_600080BC((_DWORD *)ActorMgr__instance, v10);
  v8 = Global_BasicSoundActor2;
  LODWORD(position.x) = v10[4];
  LODWORD(position.y) = v10[5];
  mapPositionToScreen(&out, &position);
  return BasicSoundActor2_play(v8, "SE_EMY_GORO_SHOT", &out.x, 0);
}
