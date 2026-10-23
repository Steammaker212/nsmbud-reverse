/* SE_OBJ_DDOOR_OPEN_ref
 * address: 0x605F888C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_DDOOR_OPEN_ref(float *a1)
{
  float v2; // r1
  int v3; // r6
  Vec3 v5; // [sp+0h] [bp-18h] BYREF
  int v6; // [sp+Ch] [bp-Ch]
  char v7; // [sp+10h] [bp-8h]
  char v8; // [sp+11h] [bp-7h]
  char v9; // [sp+12h] [bp-6h]
  char v10; // [sp+13h] [bp-5h]
  char v11; // [sp+14h] [bp-4h]
  char v12; // [sp+15h] [bp-3h]
  char v13; // [sp+16h] [bp-2h]
  Vec2 v14; // [sp+18h] [bp+0h] BYREF

  v2 = a1[28];
  v3 = Global_BasicSoundActor2;
  v5.x = a1[27];
  v5.y = v2;
  mapPositionToScreen(&v14, &v5);
  BasicSoundActor2_play(v3, "SE_OBJ_DDOOR_OPEN", &v14.x, 0);
  v5.x = a1[27] + a1[143];
  v5.y = a1[28] + a1[144];
  v5.z = a1[29] + a1[145];
  v6 = 0;
  v7 = 1;
  v8 = 0;
  v11 = 0;
  v10 = 0;
  v13 = 0;
  v12 = 0;
  v9 = 0;
  return sub_60583000(dword_60CAF15C, (int)&v5, 3);
}
