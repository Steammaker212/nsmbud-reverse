/* SE_EMY_DOWN_ref_2C1F6C
 * address: 0x602C1F6C   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_2C1F6C(int a1)
{
  float v2; // s0
  float v3; // s2
  float v4; // r0
  _BOOL4 v5; // r7
  float v6; // r0
  signed int v7; // r0
  float v8; // r1
  float v9; // r1
  int v10; // r5
  Vec3 v12; // [sp+0h] [bp-40h] BYREF
  int v13; // [sp+Ch] [bp-34h]
  StateVirtual *v14; // [sp+10h] [bp-30h]
  char v15; // [sp+14h] [bp-2Ch]
  _BOOL4 v16; // [sp+18h] [bp-28h]
  char v17; // [sp+1Ch] [bp-24h]
  Vec2 a2; // [sp+20h] [bp-20h] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = v2 - FIELD_F32(a1, 584);
  v4 = v2;
  if ( v3 <= 0.01 )
  {
    v5 = 1;
    if ( v3 >= -0.01 )
    {
      v12.x = 0.0;
      v12.y = 0.0;
      v6 = FIELD_F32(a1, 112);
      a2.x = v2;
      a2.y = v6;
      v7 = distanceToPLayer((Vec2 *)&v12, &a2);
      v5 = v12.x > 0.0 && v7 != -1;
      v4 = FIELD_F32(a1, 108);
    }
  }
  else
  {
    v5 = 0;
  }
  v8 = FIELD_F32(a1, 112);
  v12.x = v4;
  v12.y = v8;
  v12.z = 0.0;
  sub_602A38A4(a1, &v12.x);
  v9 = FIELD_F32(a1, 112);
  v10 = Global_BasicSoundActor1;
  v12.x = FIELD_F32(a1, 108);
  v12.y = v9;
  mapPositionToScreen(&a2, &v12);
  BasicSoundActor1_playSound(v10, "SE_EMY_DOWN", (int)&a2, 0);
  LODWORD(v12.x) = dword_60AFE798[v5];
  v12.y = 1.5;
  v12.z = -1.5;
  v13 = -1115684864;
  v14 = &stru_60C90710;
  v15 = -1;
  v16 = v5;
  v17 = -1;
  return sub_602A852C(a1 + 6104, &v12);
}
