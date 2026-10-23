/* sub_6038C5D4
 * address: 0x6038C5D4   size: 828   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6038C5D4(int a1)
{
  unsigned int v2; // r9
  float *v3; // r7
  float v4; // s4
  unsigned int v5; // r5
  unsigned int v6; // r0
  float v7; // s2
  float *v8; // r2
  float *v9; // r1
  float v10; // s10
  float v11; // s12
  float v12; // s14
  float v13; // s1
  float v14; // s3
  float v15; // s5
  float v16; // s7
  float v17; // s9
  float v18; // s8
  float *v19; // r3
  float v20; // s20
  float v21; // s6
  float v22; // s14
  float v23; // s10
  float v24; // s1
  float v25; // s18
  float v26; // s15
  float v27; // s8
  float v28; // s20
  float v29; // s13
  float v30; // s16
  float v31; // s18
  TileCheck *v32; // r0
  int v33; // r4
  int v34; // r0
  bool v35; // zf
  unsigned int result; // r0
  unsigned int v37; // r4
  unsigned int v38; // [sp+Ch] [bp-11Ch] BYREF
  TileCheck_Result v39; // [sp+10h] [bp-118h] BYREF
  _BYTE v40[4]; // [sp+38h] [bp-F0h] BYREF
  float v41; // [sp+3Ch] [bp-ECh]
  int v42; // [sp+44h] [bp-E4h]
  int v43; // [sp+48h] [bp-E0h]
  _BYTE v44[4]; // [sp+60h] [bp-C8h] BYREF
  float v45; // [sp+64h] [bp-C4h]
  int v46; // [sp+6Ch] [bp-BCh]
  int v47; // [sp+70h] [bp-B8h]
  TileCheck v48; // [sp+88h] [bp-A0h] BYREF
  TileCheck_Param v49; // [sp+D4h] [bp-54h] BYREF
  Vec2 positionOffset; // [sp+E0h] [bp-48h] BYREF
  Vec2 a3[8]; // [sp+E8h] [bp-40h] BYREF

  v2 = 0;
  v3 = (float *)(a1 + 8144);
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_U32(a1, 164);
  v6 = FIELD_U32(a1, 160);
  v7 = FIELD_F32(a1, 112);
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v10 = *v8;
  v11 = v8[1];
  v12 = v8[2];
  v13 = v8[3];
  v14 = *v9;
  v15 = v9[1];
  if ( (float)(*v3 - v4) < 0.0 )
    v2 = 0x80000000;
  v16 = v9[2];
  v17 = v9[3];
  *(_WORD *)&v49.field_0 = 0;
  v18 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v19 = (float *)((char *)sinLutTable + (v2 >> 20));
  v20 = v19[2];
  v21 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v22 = v12 + (float)(v18 * v13);
  v23 = v10 + (float)(v18 * v11);
  v24 = v19[1] * 0.0;
  v25 = v19[3] * 0.0;
  v26 = *v19 + v24;
  v27 = v20 + v25;
  v28 = v20 + (float)(v25 * 0.000000059605);
  v29 = *v19 + (float)(v24 * 0.000000059605);
  v30 = v4
      + (float)((float)((float)((float)((float)(v26 * (float)((float)(v14 + (float)(v21 * v15)) * v22))
                                      - (float)((float)(v16 + (float)(v21 * v17)) * v23))
                              * 0.0)
                      + (float)((float)((float)((float)(v16 + (float)(v21 * v17)) * v22)
                                      + (float)(v26 * (float)((float)(v14 + (float)(v21 * v15)) * v23)))
                              * 0.0))
              + (float)((float)(v27 * (float)(v14 + (float)(v21 * v15))) * 24.0));
  v31 = v7
      + (float)((float)((float)((float)(v27 * v22) * 0.0) + (float)((float)(v27 * v23) * 0.0)) - (float)(v26 * 24.0));
  a3[0].x = v30;
  a3[0].y = v31;
  positionOffset.x = v30 + (float)((float)(v28 * 1.5) * 100.0);
  positionOffset.y = v31 + (float)((float)(v29 * -1.5) * 100.0);
  v49.field_2 = FIELD_U8(a1, 86);
  v49.field_3 = FIELD_U8(a1, 87);
  v49.field_4 = 0;
  v49.field_8 = 0;
  v32 = TileCheck_ctor(&v48, &v49);
  v46 = 0;
  v42 = 0;
  v39.field_C = 0;
  v47 = 0;
  v43 = 0;
  v39.field_10 = 0;
  v33 = ((int (__fastcall *)(TileCheck *, _BYTE *, Vec2 *, Vec2 *, int))loc_6015D2DC)(v32, v44, a3, &positionOffset, 15);
  v34 = ((int (__fastcall *)(TileCheck *, _BYTE *, Vec2 *, Vec2 *, int))loc_6015D6F0)(
          &v48,
          v40,
          a3,
          &positionOffset,
          15);
  v35 = v33 == 0;
  if ( !v33 )
    v35 = v34 == 1;
  if ( v35 )
    goto LABEL_7;
  if ( v34 == 1 )
  {
    if ( FIELD_F32(a1, 120) < 0.0 )
    {
      if ( v45 > v41 )
        goto LABEL_14;
LABEL_7:
      result = 8256;
      FIELD_U32(a1, 8256) = v2;
      return result;
    }
    if ( v45 >= v41 )
      goto LABEL_7;
  }
LABEL_14:
  if ( !TileCheck_check(&v48, &v39, a3, &positionOffset, 15)
    || sqrtf(
         (float)((float)(v31 - v39.field_8) * (float)(v31 - v39.field_8))
       + (float)((float)(v30 - v39.field_4) * (float)(v30 - v39.field_4))) > 80.0 )
  {
    goto LABEL_7;
  }
  if ( (float)(FIELD_F32(a1, 8148) - FIELD_F32(a1, 112)) >= 0.0 )
  {
    v37 = -1073741824;
    v38 = -1073741824;
    if ( sub_6038C070(a1, &v38) != 1 )
    {
      v37 = 0x40000000;
      goto LABEL_21;
    }
LABEL_22:
    FIELD_U32(a1, 8256) = v37;
    return 8256;
  }
  v37 = 0x40000000;
  v38 = 0x40000000;
  if ( sub_6038C070(a1, &v38) == 1 )
    goto LABEL_22;
  v37 = -1073741824;
LABEL_21:
  v38 = v37;
  if ( sub_6038C070(a1, &v38) )
    goto LABEL_22;
  FIELD_U32(a1, 8256) = v2 ^ 0x80000000;
  return v2 ^ 0x80000000;
}
