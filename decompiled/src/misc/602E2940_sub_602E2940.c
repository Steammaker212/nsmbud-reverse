/* sub_602E2940
 * address: 0x602E2940   size: 916   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E2940(int a1)
{
  char v2; // r6
  int v3; // r0
  char v4; // r1
  unsigned int v5; // r5
  float v6; // s0
  float v7; // s0
  char v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r1
  int v12; // r2
  float v13; // s4
  float v14; // s6
  float v15; // s0
  float v16; // s2
  float v17; // s4
  float v18; // s0
  float v19; // s6
  float v20; // s0
  float v21; // s2
  float v23; // [sp+8h] [bp-40h] BYREF
  float v24; // [sp+Ch] [bp-3Ch]
  int v25; // [sp+10h] [bp-38h]
  _DWORD v26[4]; // [sp+18h] [bp-30h] BYREF
  _DWORD v27[8]; // [sp+28h] [bp-20h] BYREF

  v2 = 0;
  FIELD_U16(a1, 15424) = 0;
  ActorScaler_execute((ActorScaler *)(a1 + 15440));
  StageActor__cullCheck((StageActor *)a1, 0);
  if ( v3 != 1 )
  {
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    SE_EMY_IBARAMUSHI_KNOCK_UP_ref((Enemy *)a1);
    sub_602E2F10(a1);
    StateMgr__execute((StateMgr *)(a1 + 6084));
    v4 = FIELD_U8(a1, 15377);
    if ( v4 )
    {
      v2 = v4 - 1;
      FIELD_U8(a1, 15377) = v4 - 1;
      if ( v4 == 1 )
      {
        v5 = 0;
        FIELD_U32(a1, 15348) = 0;
      }
      else
      {
        v5 = FIELD_U32(a1, 15348) + FIELD_U32(a1, 15352);
        FIELD_U32(a1, 15348) = v5;
      }
      v6 = *(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
         + (float)((float)((float)(v5 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v5 >> 20) & 0xFF0)))
                 * 0.000000059605);
      FIELD_F32(a1, 6320) = v6 + v6;
      v7 = (float)(*(float *)((char *)sinLutTable + (((2 * v5 - 0x40000000) >> 20) & 0xFF0))
                 + (float)((float)((float)((2 * v5 - 0x40000000) & 0xFFFFFE)
                                 * *(float *)((char *)&sinLutTable[1] + (((2 * v5 - 0x40000000) >> 20) & 0xFF0)))
                         * 0.000000059605))
         * 0.25;
      FIELD_F32(a1, 6312) = (float)(-0.25 - v7) + 1.0;
      FIELD_F32(a1, 6316) = (float)(v7 + 0.25) + 1.0;
    }
    if ( FIELD_U8(a1, 15376) )
      --FIELD_U8(a1, 15376);
    v8 = v2;
    if ( v2 )
      v8 = 1;
    FIELD_U8(a1, 6368) = v8;
    v9 = FIELD_U32(a1, 112);
    v10 = FIELD_U32(a1, 116);
    v27[0] = FIELD_U32(a1, 108);
    v27[1] = v9;
    v27[2] = v10;
    v11 = FIELD_U32(a1, 160);
    v12 = FIELD_U32(a1, 164);
    v26[0] = FIELD_U32(a1, 156);
    v26[1] = v11;
    v26[2] = v12;
    v25 = FIELD_U32(a1, 15452);
    v24 = FIELD_F32(a1, 15448);
    v23 = FIELD_F32(a1, 15444);
    v23 = FIELD_F32(a1, 6400) * v23;
    v24 = FIELD_F32(a1, 6404) * v24;
    sub_602E6DD8(a1 + 6300, v27, v26, a1 + 6388, &v23);
    sub_602E26AC((_DWORD *)a1);
    v13 = FIELD_F32(a1, 112);
    v14 = FIELD_F32(a1, 6380);
    v15 = FIELD_F32(a1, 6376) - FIELD_F32(a1, 108);
    FIELD_F32(a1, 304) = v15;
    FIELD_F32(a1, 308) = v14 - v13;
    FIELD_F32(a1, 10900) = v15;
    FIELD_F32(a1, 10904) = v14 - v13;
    sub_602E3CEC(a1);
    v16 = FIELD_F32(a1, 108);
    v17 = FIELD_F32(a1, 112);
    v18 = FIELD_F32(a1, 6504) - v16;
    v19 = FIELD_F32(a1, 6508) - v17;
    FIELD_F32(a1, 10292) = v18;
    FIELD_F32(a1, 10296) = v19;
    FIELD_F32(a1, 14852) = v18;
    FIELD_F32(a1, 14856) = v19;
    v20 = FIELD_F32(a1, 6516) - v16;
    v21 = FIELD_F32(a1, 6520) - v17;
    FIELD_F32(a1, 10596) = v20;
    FIELD_F32(a1, 10600) = v21;
    FIELD_F32(a1, 15156) = v20;
    FIELD_F32(a1, 15160) = v21;
    FIELD_U8(a1, 15364) = 0;
    if ( FIELD_U8(dword_60CC6D8C, 17) && !sub_602A588C(a1) )
      SE_PLY_SPLASH_LAVA_ref(a1);
  }
  ActiveCollider_reset((ActiveCollider *)(a1 + 6528));
  ActiveCollider_reset((ActiveCollider *)(a1 + 6832));
  ActiveCollider_reset((ActiveCollider *)(a1 + 8352));
  ActiveCollider_reset((ActiveCollider *)(a1 + 8656));
  return 1;
}
