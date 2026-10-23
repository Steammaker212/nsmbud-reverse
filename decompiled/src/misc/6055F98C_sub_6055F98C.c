/* sub_6055F98C
 * address: 0x6055F98C   size: 2256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055F98C(int a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r1
  float *v5; // r2
  int v6; // r6
  int v7; // r5
  int v8; // r6
  unsigned int v9; // r3
  int *v10; // r10
  int v11; // r3
  int result; // r0
  _BYTE *v13; // r5
  _DWORD *v14; // r4
  float v15; // s16
  _DWORD *v16; // r1
  int *v17; // r7
  int v18; // r8
  int v19; // r5
  int v20; // r11
  unsigned int v21; // r1
  int v22; // r0
  float v23; // s16
  unsigned int v24; // r0
  float *v25; // r1
  float v26; // s0
  float v27; // s2
  int v28; // r1
  float v29; // s4
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r1
  int v37; // r0
  int v38; // r2
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r1
  int v43; // r0
  int v44; // r2
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0

  v2 = FIELD_U32(a1, 13740);
  v3 = FIELD_U32(a1, 13444);
  v4 = v2;
  if ( (unsigned int)v2 > 9 )
    v4 = 0;
  if ( v2 < 0 )
    v4 = 0;
  v5 = *(float **)(a1 + 4 * dword_60B040D4[v4] + 13392);
  v6 = *((_DWORD *)v5 + 7);
  v7 = *((_DWORD *)v5 + 8);
  FIELD_F32(v3, 24) = v5[6];
  FIELD_U32(v3, 28) = v6;
  FIELD_U32(v3, 32) = v7;
  v8 = 0;
  FIELD_U8(v3, 64) |= 0x10u;
  v10 = (int *)(a1 + 13736);
  v9 = FIELD_U32(a1, 13736);
  if ( v9 >= 0xA )
    v9 = 0;
  v11 = 3 * v9;
  if ( v4 == *(_DWORD *)(a1 + 4 * v11 + 13596) )
  {
    *(_BYTE *)(FIELD_U32(a1, 13560) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13472) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13476) + 64) |= 1u;
    *(_BYTE *)(FIELD_U32(a1, 13480) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13484) + 64) |= 1u;
    *(_BYTE *)(FIELD_U32(a1, 13488) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13492) + 64) |= 1u;
    *(_BYTE *)(FIELD_U32(a1, 13496) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13500) + 64) |= 1u;
    *(_BYTE *)(FIELD_U32(a1, 13504) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13508) + 64) |= 1u;
    *(_BYTE *)(FIELD_U32(a1, 13512) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13516) + 64) |= 1u;
    *(_BYTE *)(FIELD_U32(a1, 13520) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13524) + 64) |= 1u;
    *(_BYTE *)(FIELD_U32(a1, 13528) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13532) + 64) |= 1u;
    *(_BYTE *)(FIELD_U32(a1, 13536) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13540) + 64) |= 1u;
    *(_BYTE *)(FIELD_U32(a1, 13544) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13548) + 64) |= 1u;
    v13 = (_BYTE *)(a1 + 13750);
    result = FIELD_U8(a1, 13750);
    if ( FIELD_U8(a1, 13750) )
    {
      v14 = (_DWORD *)(a1 + 44);
      v15 = sub_6047457C((int)v14, 2u);
      sub_60473DE4(v14, 2u, &dword_60CADD38, 0);
      result = sub_6047455C((int)v14, 2u, v15);
      *v13 = 0;
    }
  }
  else
  {
    v17 = (int *)(a1 + 13560);
    v16 = *(_DWORD **)(a1 + 13560);
    v18 = v16[10];
    v19 = v16[9];
    v20 = v16[15];
    v21 = *(_DWORD *)(a1 + 13592 + 4 * v11 + 8);
    if ( v21 >= 0xE )
      v21 = 0;
    v22 = *(_DWORD *)(a1 + 4 * v21 + 13392);
    v23 = FIELD_F32(v22, 24) - v5[6];
    v24 = sub_6000F7B8(FIELD_F32(v22, 28) - v5[7], v23);
    *(_BYTE *)(*v17 + 64) |= 1u;
    v25 = (float *)((char *)sinLutTable + ((v24 >> 20) & 0xFF0));
    v26 = v25[2];
    v27 = v25[3];
    v28 = *v17;
    FIELD_U32(v28, 40) = v18;
    FIELD_U32(v28, 36) = v19;
    FIELD_F32(v28, 44) = (float)v24 * 0.000000083819;
    v29 = (float)(v24 & 0xFFFFFF);
    FIELD_U8(v28, 64) |= 0x10u;
    v30 = *v17;
    FIELD_F32(v30, 56) = v23 / (float)(v26 + (float)((float)(v29 * v27) * 0.000000059605));
    FIELD_U32(v30, 60) = v20;
    FIELD_U8(v30, 64) |= 0x10u;
    *(_BYTE *)(FIELD_U32(a1, 13472) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13476) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13480) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13484) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13488) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13492) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13496) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13500) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13504) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13508) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13512) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13516) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13520) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13524) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13528) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13532) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13536) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13540) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13544) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13548) + 64) &= ~1u;
    v31 = *v10;
    if ( (unsigned int)*v10 >= 0xA )
      v31 = 0;
    v32 = *(_DWORD *)(a1 + 4 * dword_60B040FC[*(_DWORD *)(a1 + 13592 + 12 * v31 + 8) - 3] + 13460);
    FIELD_U8(v32, 64) |= 1u;
    if ( !*v10 )
      goto LABEL_51;
    v8 = *v10;
    if ( FIELD_U32(a1, 13592) == 2 )
    {
      v33 = *(_DWORD *)(a1 + 4 * dword_60B04124[FIELD_U32(a1, 13600) - 3] + 13460);
      FIELD_U8(v33, 64) |= 1u;
      v8 = *v10;
    }
    v34 = 1;
    if ( v8 != 1 )
    {
LABEL_51:
      if ( FIELD_U32(a1, 13604) == 2 )
      {
        v35 = *(_DWORD *)(a1 + 4 * dword_60B04124[FIELD_U32(a1, 13612) - 3] + 13460);
        FIELD_U8(v35, 64) |= 1u;
        v8 = *v10;
      }
      v36 = 2;
      v34 = v8;
      if ( v8 == 2 )
        goto LABEL_50;
    }
    if ( FIELD_U32(a1, 13616) == 2 )
    {
      v37 = *(_DWORD *)(a1 + 4 * dword_60B04124[FIELD_U32(a1, 13624) - 3] + 13460);
      FIELD_U8(v37, 64) |= 1u;
      v34 = *v10;
    }
    v38 = 3;
    v36 = v34;
    if ( v34 != 3 )
    {
LABEL_50:
      if ( FIELD_U32(a1, 13628) == 2 )
      {
        v39 = *(_DWORD *)(a1 + 4 * dword_60B04124[FIELD_U32(a1, 13636) - 3] + 13460);
        FIELD_U8(v39, 64) |= 1u;
        v36 = *v10;
      }
      v40 = 4;
      v38 = v36;
      if ( v36 == 4 )
        goto LABEL_49;
    }
    if ( FIELD_U32(a1, 13640) == 2 )
    {
      v41 = *(_DWORD *)(a1 + 4 * dword_60B04124[FIELD_U32(a1, 13648) - 3] + 13460);
      FIELD_U8(v41, 64) |= 1u;
      v38 = *v10;
    }
    v42 = 5;
    v40 = v38;
    if ( v38 != 5 )
    {
LABEL_49:
      if ( FIELD_U32(a1, 13652) == 2 )
      {
        v43 = *(_DWORD *)(a1 + 4 * dword_60B04124[FIELD_U32(a1, 13660) - 3] + 13460);
        FIELD_U8(v43, 64) |= 1u;
        v40 = *v10;
      }
      v44 = 6;
      v42 = v40;
      if ( v40 == 6 )
        goto LABEL_48;
    }
    if ( FIELD_U32(a1, 13664) == 2 )
    {
      v45 = *(_DWORD *)(a1 + 4 * dword_60B04124[FIELD_U32(a1, 13672) - 3] + 13460);
      FIELD_U8(v45, 64) |= 1u;
      v42 = *v10;
    }
    v46 = 7;
    v44 = v42;
    if ( v42 != 7 )
    {
LABEL_48:
      if ( FIELD_U32(a1, 13676) == 2 )
      {
        v47 = *(_DWORD *)(a1 + 4 * dword_60B04124[FIELD_U32(a1, 13684) - 3] + 13460);
        FIELD_U8(v47, 64) |= 1u;
        v44 = *v10;
      }
      v46 = v44;
      if ( v44 == 8 )
        goto LABEL_42;
    }
    if ( FIELD_U32(a1, 13688) == 2 )
    {
      v48 = *(_DWORD *)(a1 + 4 * dword_60B04124[FIELD_U32(a1, 13696) - 3] + 13460);
      FIELD_U8(v48, 64) |= 1u;
      v46 = *v10;
    }
    if ( v46 != 9 )
    {
LABEL_42:
      if ( FIELD_U32(a1, 13700) == 2 )
      {
        v49 = *(_DWORD *)(a1 + 4 * dword_60B04124[FIELD_U32(a1, 13708) - 3] + 13460);
        FIELD_U8(v49, 64) |= 1u;
      }
    }
    result = FIELD_U8(a1, 13750);
    if ( !FIELD_U8(a1, 13750) )
    {
      result = sub_60473DE4((_DWORD *)(a1 + 44), 2u, &dword_60CADD38, 1);
      FIELD_U8(a1, 13750) = 1;
    }
  }
  return result;
}
