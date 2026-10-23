/* SE_OBJ_GET_COIN_ref
 * address: 0x60002BC0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_GET_COIN_ref(unsigned int a1, float *a2)
{
  int *v2; // r4
  int v3; // r5
  float v4; // r0
  float v5; // r1
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = 0;
  position.x = 0.0;
  if ( a1 <= 4 )
  {
    v2 = &dword_60C7B3E8;
    dword_60C7B3E8 = 1 << a1;
    unk_60C7B3EC = *(_DWORD *)&aFf_0[4];
  }
  v3 = Global_BasicSoundActor2;
  v4 = *a2;
  v5 = a2[1];
  position.x = v4;
  position.y = v5;
  mapPositionToScreen(&v7, &position);
  return BasicSoundActor2_play(v3, "SE_OBJ_GET_COIN", &v7.x, (int)v2);
}
