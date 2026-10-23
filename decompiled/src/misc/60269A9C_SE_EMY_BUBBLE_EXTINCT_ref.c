/* SE_EMY_BUBBLE_EXTINCT_ref
 * address: 0x60269A9C   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BUBBLE_EXTINCT_ref(StateActor *a1, int a2, int a3)
{
  int v5; // r7
  float y; // r1
  int v7; // r3
  float x; // r0
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  SE_OBJ_PNGN_ICEBALL_DISAPP_ref_2A2DA0(a3);
  v5 = Global_BasicSoundActor1;
  y = FIELD_F32(a1, 0x70);
  position.x = FIELD_F32(a1, 0x6C);
  position.y = y;
  mapPositionToScreen(&out, &position);
  BasicSoundActor1_playSound(v5, "SE_EMY_BUBBLE_EXTINCT", (int)&out, 0);
  v7 = *(char *)(FIELD_U32(a3, 64) + 84);
  if ( (unsigned __int8)v7 > 3u )
  {
    if ( (v7 & 0x80u) != 0 )
      sub_600229B0(0.0, 24.0, dword_60C7F52C, (int)a1, 1);
  }
  else
  {
    sub_60022540(dword_60C7F52C, (int)&FIELD_U32(a1, 0x6C), 1u, v7, 1);
  }
  sub_60001688((int)a1, 17, -1);
  x = FIELD_F32(a1, 0x6C);
  position.y = FIELD_F32(a1, 0x70);
  position.x = x;
  position.z = 4500.0;
  EffectData_create(656, &position, 0, 0);
  StageActor__delete(a1, 1);
  return 1;
}
