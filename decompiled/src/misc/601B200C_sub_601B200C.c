/* sub_601B200C
 * address: 0x601B200C   size: 980   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B200C(int a1)
{
  unsigned int v2; // r1
  unsigned int v3; // r5
  unsigned int v4; // r0
  int v5; // lr
  int v6; // s0
  float *v7; // r1
  float *v8; // r2
  float v9; // s22
  float v10; // s16
  float v11; // s18
  float v12; // s26
  float v13; // s6
  float v14; // s0
  float v15; // s2
  float v16; // s4
  float v17; // s5
  float v18; // s12
  float v19; // s8
  float v20; // s1
  float v21; // s9
  float v22; // s13
  float v23; // s3
  float v24; // s10
  float v25; // s7
  float v26; // s11
  float v27; // s20
  float v28; // s6
  int v29; // r0
  int v30; // r0
  int v31; // r2
  int v32; // r0
  float v34[32]; // [sp+0h] [bp-80h] BYREF

  if ( sub_601C4404() == 1 )
    StateMgr__execute((StateMgr *)(a1 + 904));
  if ( !sub_60190968(dword_60C8996C) || FIELD_U32(a1, 1032) == 3 && sub_601916EC(dword_60C8996C) == 39 )
    sub_601B2404(a1);
  sub_601861EC((Actor *)a1);
  sub_601B28C4(a1);
  if ( (FIELD_U8(a1, 1122) & 2) == 0 )
  {
    v2 = FIELD_U32(a1, 180);
    v3 = FIELD_U32(a1, 184);
    v4 = FIELD_U32(a1, 176);
    v5 = (v4 >> 20) & 0xFF0;
    v6 = v2 & 0xFFFFFF;
    v7 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
    v8 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
    v9 = FIELD_F32(a1, 296);
    v10 = FIELD_F32(a1, 88);
    v11 = FIELD_F32(a1, 80);
    v12 = FIELD_F32(a1, 132);
    v13 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
    v14 = (float)(unsigned int)v6 * 0.000000059605;
    v15 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
    v16 = FIELD_F32(a1, 84);
    v17 = v7[2] + (float)(v14 * v7[3]);
    v18 = v8[2] + (float)(v13 * v8[3]);
    v19 = *v8 + (float)(v13 * v8[1]);
    v20 = *v7 + (float)(v14 * v7[1]);
    v21 = *(float *)((char *)sinLutTable + v5) + (float)(v15 * *(float *)((char *)&sinLutTable[1] + v5));
    v22 = *(float *)((char *)&sinLutTable[2] + v5) + (float)(v15 * *(float *)((char *)&sinLutTable[3] + v5));
    v23 = FIELD_F32(a1, 372);
    v24 = v9 * FIELD_F32(a1, 128);
    v25 = FIELD_F32(a1, 380);
    v26 = FIELD_F32(a1, 376);
    v27 = FIELD_F32(a1, 1004);
    v28 = v9 * FIELD_F32(a1, 136);
    v34[0] = v24 * (float)((float)(v17 * v18) + (float)(v21 * (float)(v20 * v19)));
    v34[4] = v24 * (float)(v22 * v19);
    v34[8] = v24 * (float)((float)(v21 * (float)(v17 * v19)) - (float)(v20 * v18));
    v34[1] = (float)(v9 * v12) * (float)((float)(v21 * (float)(v20 * v18)) - (float)(v17 * v19));
    v34[5] = (float)(v9 * v12) * (float)(v22 * v18);
    v34[9] = (float)(v9 * v12) * (float)((float)(v20 * v19) + (float)(v21 * (float)(v17 * v18)));
    v34[2] = v28 * (float)(v22 * v20);
    v34[6] = -(float)(v28 * v21);
    v34[10] = v28 * (float)(v22 * v17);
    v34[3] = v11 + v23;
    v34[7] = (float)(v16 + v27) + v26;
    v34[11] = v10 + v25;
    ((void (__fastcall *)(_DWORD, float *))loc_60793FF0)(
      *(_DWORD *)(*(_DWORD *)(a1 + 4 * FIELD_U32(a1, 1248) + 920) + 4),
      v34);
  }
  v29 = *(_DWORD *)(*(_DWORD *)(a1 + 920 + 4 * FIELD_U32(a1, 1248)) + 4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 148))(v29);
  sub_601C5484(a1);
  sub_601C581C(a1);
  sub_601C5900(a1);
  if ( sub_6079437C(*(_DWORD *)(*(_DWORD *)(a1 + 920 + 4 * FIELD_U32(a1, 1248)) + 4)) == 1
    || sub_601C68A8(a1, FIELD_U32(a1, 1112), FIELD_U32(a1, 1116)) == 1 )
  {
    v30 = sub_601C676C(a1, FIELD_U32(a1, 1112), FIELD_U32(a1, 1116));
    sub_601C6184(a1, v30, FIELD_F32(a1, 200));
  }
  if ( (unsigned int)(FIELD_U32(a1, 1112) - 11) > 1 )
  {
    sub_601C69B0(a1);
  }
  else if ( FIELD_S32(a1, 432) < 0 )
  {
    FIELD_U32(a1, 432) = sub_601C697C(a1, 11, 0);
  }
  sub_60170B5C((unsigned __int8 *)dword_60C88BC8);
  if ( (FIELD_U8(a1, 1120) & 0x40) != 0 )
  {
    if ( sub_60190968(dword_60C8996C) )
    {
      if ( FIELD_U8(dword_60C89E18, 240460) )
        FIELD_U8(dword_60C89E18, 240462) = 1;
    }
    else if ( !FIELD_U8(dword_60C89E18, 240460) )
    {
      v31 = 0;
      if ( FIELD_U32(a1, 1032) == 8 )
        v31 = 2;
      sub_604811F4(dword_60C89E18 + 227624, 0, v31);
    }
  }
  else if ( FIELD_U8(dword_60C89E18, 240460) )
  {
    FIELD_U8(dword_60C89E18, 240462) = 1;
  }
  sub_6000897C((_DWORD *)ActorMgr__instance, a1);
  sub_601B2A1C(a1);
  v32 = FIELD_U32(a1, 1136);
  if ( v32 >= 1 )
    FIELD_U32(a1, 1136) = v32 - 1;
  return 1;
}
