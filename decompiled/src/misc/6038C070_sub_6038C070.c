/* sub_6038C070
 * address: 0x6038C070   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038C070(int a1, unsigned int *a2)
{
  unsigned int v3; // r1
  unsigned int v4; // r7
  unsigned int v5; // r6
  float *v6; // r5
  float *v7; // r2
  float *v8; // r0
  float v9; // s6
  float v10; // s7
  float v11; // s9
  float v12; // s11
  float v13; // s13
  float v14; // s21
  float v15; // s2
  float v16; // s4
  float v17; // s12
  float v18; // s16
  float v19; // s8
  float v20; // s1
  float v21; // s20
  float v22; // s26
  float v23; // s24
  float v24; // s30
  float v25; // s28
  float v26; // s18
  float v27; // s4
  float v28; // s8
  float v29; // s10
  float v30; // s23
  float v31; // s19
  TileCheck *v32; // r0
  int v33; // r4
  int v34; // r0
  int v35; // r5
  int v36; // r9
  int v37; // r10
  int v38; // r11
  TileCheck_Result v40; // [sp+8h] [bp-148h] BYREF
  _BYTE v41[4]; // [sp+30h] [bp-120h] BYREF
  float v42; // [sp+34h] [bp-11Ch]
  int v43; // [sp+3Ch] [bp-114h]
  int v44; // [sp+40h] [bp-110h]
  _BYTE v45[4]; // [sp+58h] [bp-F8h] BYREF
  float v46; // [sp+5Ch] [bp-F4h]
  int v47; // [sp+64h] [bp-ECh]
  int v48; // [sp+68h] [bp-E8h]
  TileCheck v49; // [sp+80h] [bp-D0h] BYREF
  TileCheck_Param v50; // [sp+CCh] [bp-84h] BYREF
  Vec2 positionOffset; // [sp+D8h] [bp-78h] BYREF
  Vec2 a3[14]; // [sp+E0h] [bp-70h] BYREF

  v3 = *a2;
  v4 = FIELD_U32(a1, 160);
  v5 = FIELD_U32(a1, 164);
  v6 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v7 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v9 = (float)(v3 & 0xFFFFFF);
  v10 = *v8;
  v11 = v8[1];
  v12 = v8[2];
  v13 = v8[3];
  v14 = FIELD_F32(a1, 116);
  v15 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v16 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v17 = v7[2] + (float)(v15 * v7[3]);
  v18 = v6[2] + (float)(v16 * v6[3]);
  v19 = *v7 + (float)(v15 * v7[1]);
  v20 = *v6 + (float)(v16 * v6[1]);
  v21 = *v8 + (float)((float)(v9 * 0.000000059605) * v11);
  v22 = v12 + (float)((float)(v9 * 0.000000059605) * v13);
  v23 = v18 * v19;
  v24 = v18 * v17;
  v25 = v20 * v19;
  v26 = v20 * v17;
  v27 = (float)((float)(v22 * v17) * 0.0) + (float)((float)(v22 * v19) * 0.0);
  v28 = FIELD_F32(a1, 108);
  v29 = FIELD_F32(a1, 112);
  *(_WORD *)&v50.field_0 = 0;
  v30 = v29 + (float)(v27 - (float)(v21 * 24.0));
  v31 = v28
      + (float)((float)((float)((float)((float)(v21 * (float)(v20 * v17)) - v23) * 0.0)
                      + (float)((float)((float)(v18 * v17) + (float)(v21 * v25)) * 0.0))
              + (float)((float)(v22 * v20) * 24.0));
  a3[0].x = v31;
  a3[0].y = v30;
  positionOffset.x = v31 + (float)((float)((float)(v12 + (float)((float)(v9 * v13) * 0.000000059605)) * 1.5) * 100.0);
  positionOffset.y = v30 + (float)((float)((float)(v10 + (float)((float)(v9 * v11) * 0.000000059605)) * -1.5) * 100.0);
  v50.field_2 = FIELD_U8(a1, 86);
  v50.field_3 = FIELD_U8(a1, 87);
  v50.field_4 = 0;
  v50.field_8 = 0;
  v32 = TileCheck_ctor(&v49, &v50);
  v47 = 0;
  v43 = 0;
  v40.field_C = 0;
  v48 = 0;
  v44 = 0;
  v40.field_10 = 0;
  v33 = ((int (__fastcall *)(TileCheck *, _BYTE *, Vec2 *, Vec2 *, int))loc_6015D2DC)(v32, v45, a3, &positionOffset, 15);
  v34 = ((int (__fastcall *)(TileCheck *, _BYTE *, Vec2 *, Vec2 *, int))loc_6015D6F0)(
          &v49,
          v41,
          a3,
          &positionOffset,
          15);
  v35 = 1;
  if ( v33 || (v34 ^ 1) == 1 )
  {
    if ( v34 == 1 )
    {
      if ( FIELD_F32(a1, 120) >= 0.0 )
      {
        if ( v46 >= v42 )
          return v35;
      }
      else if ( v46 <= v42 )
      {
        return v35;
      }
    }
    if ( TileCheck_check(&v49, &v40, a3, &positionOffset, 15) == 1
      && sqrtf(
           (float)((float)(v30 - v40.field_8) * (float)(v30 - v40.field_8))
         + (float)((float)(v31 - v40.field_4) * (float)(v31 - v40.field_4))) <= 48.0 )
    {
      v36 = FIELD_U32(a1, 8268);
      v37 = FIELD_U32(a1, 8264);
      v38 = FIELD_U32(a1, 8260);
      FIELD_F32(a1, 8260) = v31;
      FIELD_F32(a1, 8264) = v30;
      FIELD_F32(a1, 8268) = v14
                            + (float)((float)((float)((float)(v25 + (float)(v21 * v24)) * 0.0)
                                            + (float)((float)((float)(v21 * v23) - v26) * 0.0))
                                    + (float)((float)(v22 * v18) * 24.0));
      v35 = ((int (__fastcall *)(int))loc_6038C3A4)(a1);
      FIELD_U32(a1, 8260) = v38;
      FIELD_U32(a1, 8264) = v37;
      FIELD_U32(a1, 8268) = v36;
    }
  }
  return v35;
}
