/* SE_OBJ_FIREBALL_DISAPP_ref_23DADC
 * address: 0x6023DADC   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_FIREBALL_DISAPP_ref_23DADC(int a1, int a2, int a3)
{
  int *v5; // r7
  int v6; // r0
  int v7; // r4
  int v8; // r4
  int v9; // r0
  float v10; // r1
  float v11; // r0
  int v12; // r0
  float v13; // s16
  int v14; // r4
  int v15; // r3
  Vec3 v17; // [sp+0h] [bp-40h] BYREF
  int v18; // [sp+Ch] [bp-34h]
  char v19; // [sp+10h] [bp-30h]
  char v20; // [sp+11h] [bp-2Fh]
  __int16 v21; // [sp+12h] [bp-2Eh]
  __int16 v22; // [sp+14h] [bp-2Ch]
  char v23; // [sp+16h] [bp-2Ah]
  Vec2 out; // [sp+18h] [bp-28h] BYREF

  v5 = (int *)(a1 + 12072);
  ++FIELD_U32(a1, 12072);
  v7 = a1 + 6608;
  v6 = FIELD_U32(a1, 6608);
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v7 + 4));
  sub_602A3EFC(v7 + 5708, 24);
  if ( *v5 > 2 )
  {
    v17 = *(Vec3 *)(a1 + 108);
    v18 = 0;
    v19 = 3;
    v20 = FIELD_U8(a1, 86);
    v22 = 0;
    v21 = 0;
    v23 = 0;
    sub_60583000(dword_60CAF15C, &v17, 3);
    v12 = FIELD_U32(a3, 64);
    v13 = FIELD_F32(v12, 120);
    v14 = FIELD_S8(v12, 84);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 364))(a1);
    v15 = sub_602856C4(a1 + 6292);
    sub_602A6024(a1, v13 < 0.0, v14, v15);
  }
  else
  {
    v8 = Global_BasicSoundActor2;
    v9 = FIELD_U32(a3, 64);
    v10 = FIELD_F32(v9, 108);
    v11 = FIELD_F32(v9, 112);
    v17.x = v10;
    v17.y = v11;
    mapPositionToScreen(&out, &v17);
    BasicSoundActor2_play(v8, "SE_OBJ_FIREBALL_DISAPP", &out.x, 0);
  }
  return 1;
}
