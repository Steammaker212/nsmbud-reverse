/* sub_602A358C
 * address: 0x602A358C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A358C(float *a1, unsigned int a2, int a3, unsigned int a4, int a5)
{
  unsigned int v6; // r7
  float v8; // r0
  const char *v9; // r6
  float v10; // s2
  float v11; // s0
  int v12; // r5
  Vec2 v14; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v6 = a2;
  v8 = *a1;
  if ( a2 >= a4 )
    v6 = a4 - 1;
  if ( (*(int (__fastcall **)(float *, unsigned int))(LODWORD(v8) + 204))(a1, v6) == 1 )
    SE_SYS_NICE_S_ref();
  v9 = *(const char **)(a3 + 4 * v6);
  v10 = a1[27] + a1[143];
  v11 = a1[28] + a1[144];
  v12 = Global_BasicSoundActor1;
  position.x = v10;
  position.y = v11;
  mapPositionToScreen(&v14, &position);
  return BasicSoundActor1_playSound(v12, v9, (int)&v14, a5);
}
