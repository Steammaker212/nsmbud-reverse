/* SE_EMY_KILLER_CROSS_ref
 * address: 0x6031FE88   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KILLER_CROSS_ref(int a1)
{
  __int16 v2; // r1
  int *v3; // r1
  int v4; // r5
  int v5; // r0
  int v6; // r2
  int v7; // r2
  float v8; // r1
  int v9; // r5
  float v10; // s0
  float v11; // s0
  float v12; // s0
  float v13; // s0
  float v14; // s0
  int v16; // r1
  int v17; // r12
  int v18; // r2
  _BOOL4 v19; // r3
  int v20; // r5
  char v21; // r0
  Vec2 v22; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  if ( !sub_60321B48() && !FIELD_U32(a1, 6328) && !FIELD_U16(a1, 6322) )
  {
    v16 = 0;
    v17 = FIELD_U8(a1, 6320);
    v18 = FIELD_U32(a1, 164);
    v19 = v18 < -268435455;
    if ( !FIELD_U8(a1, 6320) )
      v19 = v18 >= 0x10000000;
    v20 = FIELD_U32(a1, 6316);
    if ( v19 )
    {
      if ( v20 - 0x100000 > 0 )
        v16 = v20 - 0x100000;
    }
    else
    {
      v16 = v20 + 0x100000;
      if ( v20 + 0x100000 >= 0x1000000 )
        v16 = 0x1000000;
    }
    FIELD_U32(a1, 6316) = v16;
    if ( v17 )
    {
      FIELD_U32(a1, 164) = v18 - v16;
      if ( v16 )
        goto LABEL_4;
      v21 = 0;
    }
    else
    {
      FIELD_U32(a1, 164) = v16 + v18;
      if ( v16 )
        goto LABEL_4;
      v21 = 1;
    }
    FIELD_U8(a1, 6320) = v21;
  }
LABEL_4:
  if ( FIELD_U16(a1, 6324) )
  {
    v2 = FIELD_U16(a1, 6324) - 1;
    FIELD_U16(a1, 6324) = v2;
    if ( !v2 )
    {
      v3 = dword_603201E0;
      if ( (FIELD_U32(a1, 24) & 0xF0) != 0 )
        v3 = &dword_603201E0[1];
      FIELD_U32(a1, 116) = *v3;
    }
  }
  v4 = a1 + 7664;
  nullsub_7();
  v5 = FIELD_U32(a1, 80);
  if ( (*(_DWORD *)(a1 + 7664 + 4 * ((v5 + 18) >> 5) + 2224) & (1 << ((v5 + 18) & 0x1F))) == 0
    && (*(_DWORD *)(v4 + 4 * ((v5 + 22) >> 5) + 2224) & (1 << ((v5 + 22) & 0x1F))) == 0
    || (v6 = (v5 + 28) & 0x1F, (*(_DWORD *)(v4 + 4 * ((v5 + 28) >> 5) + 2224) & (1 << v6)) != 0) )
  {
    ((void (__fastcall *)(int))loc_60321F58)(a1);
    goto LABEL_20;
  }
  if ( v5 != 1 )
  {
    if ( v5 || (FIELD_U8(a1, 9898) & 4) != 0 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( (FIELD_U8(a1, 9898) & 8) == 0 )
LABEL_18:
    sub_60321D0C(a1, 2, v6);
LABEL_19:
  ((void (__fastcall *)(int))loc_60321F58)(a1);
  FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * 0.5;
LABEL_20:
  if ( (FIELD_U8(dword_60C9CF0C, 1361) & 1) != 0 )
    sub_60321D0C(a1, 4, v7);
  if ( FIELD_U32(a1, 6348) )
  {
    if ( !FIELD_U32(a1, 6352) )
    {
      sub_60321D0C(a1, 2, v7);
      if ( FIELD_U32(a1, 6356) == 2 )
      {
        FIELD_U32(a1, 6356) = 1;
        v8 = FIELD_F32(a1, 112);
        v9 = Global_BasicSoundActor1;
        position.x = FIELD_F32(a1, 108);
        position.y = v8;
        mapPositionToScreen(&v22, &position);
        BasicSoundActor1_playSound(v9, "SE_EMY_KILLER_CROSS", (int)&v22, 0);
      }
    }
  }
  if ( FIELD_U32(a1, 6360) == 1 )
  {
    v10 = FIELD_F32(a1, 120) + FIELD_F32(a1, 6332);
    FIELD_F32(a1, 6332) = v10;
    v11 = v10 + FIELD_F32(dword_60CC6484, 112);
  }
  else
  {
    v11 = FIELD_F32(a1, 120) + FIELD_F32(a1, 108);
  }
  FIELD_F32(a1, 108) = v11;
  v12 = FIELD_F32(a1, 124);
  if ( FIELD_U32(a1, 6364) == 1 )
  {
    v13 = FIELD_F32(a1, 6336) - v12;
    FIELD_F32(a1, 6336) = v13;
    v14 = FIELD_F32(dword_60CC6484, 124) - v13;
  }
  else
  {
    v14 = v12 + FIELD_F32(a1, 112);
  }
  FIELD_F32(a1, 112) = v14;
  sub_60322150(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
}
