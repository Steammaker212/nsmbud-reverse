/* SE_EMY_DOWN_ref_3BFA08
 * address: 0x603BFA08   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_3BFA08(float *a1, float *a2)
{
  int v4; // r7
  float v5; // r0
  float v6; // r1
  _BOOL4 v7; // r5
  Vec3 position; // [sp+8h] [bp-40h] BYREF
  int v10; // [sp+14h] [bp-34h]
  StateVirtual *v11; // [sp+18h] [bp-30h]
  char v12; // [sp+1Ch] [bp-2Ch]
  _BOOL4 v13; // [sp+20h] [bp-28h]
  char v14; // [sp+24h] [bp-24h]
  Vec2 out; // [sp+28h] [bp-20h] BYREF

  v4 = Global_BasicSoundActor1;
  v5 = *a2;
  v6 = a2[1];
  position.x = v5;
  position.y = v6;
  mapPositionToScreen(&out, &position);
  sub_60813810(v4, (int)"SE_EMY_DOWN", (int)&out, 1, 0);
  v7 = *a2 > a1[27];
  sub_602A6C70(a1, v7);
  LODWORD(position.x) = dword_60AFE3F8[v7];
  position.y = 1.5;
  position.z = -1.5;
  v10 = -1115684864;
  v11 = &stru_60C90710;
  v12 = -1;
  v13 = v7;
  v14 = -1;
  sub_602A852C((int)(a1 + 1526), &position);
  return 1;
}
