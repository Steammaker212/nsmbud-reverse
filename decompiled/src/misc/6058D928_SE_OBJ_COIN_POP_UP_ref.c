/* SE_OBJ_COIN_POP_UP_ref
 * address: 0x6058D928   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_COIN_POP_UP_ref(int a1)
{
  int v2; // r0
  int v3; // r3
  unsigned int v4; // r1
  int v5; // r0
  int result; // r0
  float v7; // r1
  int v8; // r5
  float v9; // s0
  unsigned int v10; // r0
  char v11; // r2
  char v12; // r1
  unsigned __int8 v13; // r1
  int v14; // r0
  Vec3 v15; // [sp+0h] [bp-38h] BYREF
  int v16; // [sp+Ch] [bp-2Ch]
  char v17; // [sp+10h] [bp-28h]
  char v18; // [sp+11h] [bp-27h]
  char v19; // [sp+12h] [bp-26h]
  char v20; // [sp+13h] [bp-25h]
  char v21; // [sp+14h] [bp-24h]
  char v22; // [sp+15h] [bp-23h]
  char v23; // [sp+16h] [bp-22h]
  Vec2 out; // [sp+18h] [bp-20h] BYREF

  v2 = FIELD_U8(a1, 539);
  v3 = v2 - 33;
  v4 = 1u >> (33 - v2);
  v5 = 1 << (v2 - 1);
  if ( v3 >= 0 )
  {
    v4 = 1 << v3;
    v5 = 0;
  }
  result = v5 & FIELD_U32(EventMgr__instance, 16) | v4 & FIELD_U32(EventMgr__instance, 20);
  if ( result )
  {
    if ( FIELD_U8(a1, 6113) )
    {
      v7 = FIELD_F32(a1, 112);
      v8 = Global_BasicSoundActor2;
      v15.x = FIELD_F32(a1, 108);
      v15.y = v7;
      mapPositionToScreen(&out, &v15);
      BasicSoundActor2_play(v8, "SE_OBJ_COIN_POP_UP", &out.x, 0);
      FIELD_U8(a1, 6113) = 0;
    }
    v15.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    v9 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    v15.y = v9;
    v15.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
    v10 = FIELD_U32(a1, 24);
    v16 = (v10 >> 28) & 1;
    v17 = BYTE1(v10) + 1;
    v18 = FIELD_U8(a1, 86);
    v19 = (BYTE2(v10) & 0xF) + 1;
    v11 = 1;
    if ( (FIELD_U32(a1, 20) & 0x10000000) != 0 )
      v11 = 2;
    v20 = v11;
    v21 = (v10 >> 20) & 0xF;
    v22 = 1;
    v23 = 0;
    v12 = 2;
    if ( (v10 & 0x2000000) == 0 )
    {
      v13 = 3;
      if ( (v10 & 0x1000000) == 0 )
      {
LABEL_12:
        sub_60583000(dword_60CAF15C, (int)&v15, v13);
        if ( !FIELD_U8(a1, 6112) )
        {
          sub_60716778(
            TileMgr_instance,
            (unsigned int)FIELD_F32(a1, 108),
            (unsigned int)(float)-FIELD_F32(a1, 112),
            FIELD_U8(a1, 86));
          FIELD_U8(a1, 6112) = 1;
        }
        v14 = FIELD_U32(a1, 6104) - 1;
        FIELD_U32(a1, 6104) = v14;
        if ( !v14 )
          FIELD_U8(a1, 19) = 1;
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF4E4);
      }
      v12 = 1;
      v15.y = v9 + -14.0;
    }
    v23 = v12;
    v13 = 0;
    goto LABEL_12;
  }
  return result;
}
