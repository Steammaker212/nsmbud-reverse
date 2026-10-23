/* sub_608C7364
 * address: 0x608C7364   size: 1128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C7364(int a1, int a2)
{
  int result; // r0
  unsigned int v5; // r1
  unsigned int v6; // r0
  _BOOL4 v7; // r7
  float v8; // s18
  float v9; // s26
  float v10; // s20
  int v11; // r2
  float v12; // s24
  float v13; // s2
  float v14; // s4
  int v15; // r1
  int v16; // r0
  float v17; // s22
  float v18; // s0
  float v19; // s0
  float v20; // s0
  float v21; // s0
  float v22; // s16
  float v23; // s30
  float v24; // s20
  float v25; // s22
  float v26; // s28
  float v27; // s0
  float v28; // s26
  float v29; // s0
  float v30; // s18
  float v31; // s0
  float v32; // s18
  int v33; // r6
  float v34; // s0
  float v35; // s18
  float v36; // s0
  int v37; // r0
  float v38; // s24
  double v39; // d0
  float32x2_t v40; // d1
  float v41; // s18
  float32x2_t v42; // d1
  float v43; // s0
  double v44; // d0
  float32x2_t v45; // d1
  float v46; // s0
  double v47; // d0
  float32x2_t v48; // d1
  float v49; // s0
  double v50; // d0
  float32x2_t v51; // d1
  float v52; // s0
  double v53; // d0
  float v54[42]; // [sp+0h] [bp-A8h] BYREF

  result = FIELD_U8(a1, 177);
  if ( result )
  {
    v5 = FIELD_U16(a1, 320);
    v6 = FIELD_U16(a1, 318);
    v7 = FIELD_U8(a1, 176) == 0;
    if ( v5 < v6 )
    {
      LOWORD(v5) = v5 + 1;
      FIELD_U16(a1, 320) = v5;
    }
    v8 = FIELD_F32(a1, 184);
    v9 = FIELD_F32(a1, 348);
    v10 = FIELD_F32(a1, 352);
    v11 = FIELD_U8(a1, 317);
    if ( (unsigned __int16)v5 < v6 )
      v11 = (v11 - FIELD_U8(a1, 316)) * (unsigned __int16)v5 / (int)v6 + FIELD_U8(a1, 316);
    v12 = (float)(unsigned __int8)v11;
    if ( FIELD_U32(a1, 16) == 4 && sub_608C579C(a1 + 16) < -90.4 )
    {
      result = FIELD_U32(a1, 364);
      if ( result )
      {
        sub_608C93B0();
        sub_608C932C(FIELD_U32(a1, 364));
        FIELD_U32(a1, 364) = 0;
        FIELD_U16(a1, 176) = 0;
        return 0;
      }
    }
    else
    {
      v13 = FIELD_F32(a1, 292);
      v14 = 0.0;
      if ( v13 != 0.0 )
      {
        v15 = FIELD_U32(a1, 296);
        v16 = FIELD_U32(a1, 300);
        if ( v16 > v15 )
          v14 = (float)(v13 * (float)(v16 - v15)) / (float)v16;
      }
      v17 = (float)(FIELD_F32(a1, 288) + (float)(FIELD_U8(a1, 344) - FIELD_U8(a1, 345)))
          + v14;
      if ( !FIELD_U8(a1, 172) )
      {
        sub_608C5B2C(a1 + 44);
        v17 = v17 + v18;
      }
      if ( !FIELD_U8(a1, 173) )
      {
        sub_608C5B2C(a1 + 76);
        v17 = v17 + v19;
      }
      if ( !FIELD_U8(a1, 174) )
      {
        sub_608C5B2C(a1 + 108);
        v17 = v17 + v20;
      }
      if ( !FIELD_U8(a1, 175) )
      {
        sub_608C5B2C(a1 + 140);
        v17 = v17 + v21;
      }
      if ( v17 == FIELD_F32(a1, 324) )
      {
        v22 = FIELD_F32(a1, 328);
      }
      else
      {
        v22 = sub_608C6B8C((int)(float)(v17 * 256.0));
        FIELD_F32(a1, 324) = v17;
        FIELD_F32(a1, 328) = v22;
      }
      v23 = v10 * v10;
      v24 = FIELD_F32(a1, 188);
      v25 = FIELD_F32(a1, 312);
      qmemcpy(v54, (const void *)(a1 + 204), 0x50u);
      v26 = FIELD_F32(a1, 304) + v54[14];
      v54[14] = v26;
      if ( FIELD_U8(a1, 172) == 2 )
      {
        sub_608C5B2C(a1 + 44);
        v26 = v27 + v26;
        v54[14] = v26;
      }
      v28 = v23 * v9;
      if ( FIELD_U8(a1, 173) == 2 )
      {
        sub_608C5B2C(a1 + 76);
        v26 = v29 + v26;
        v54[14] = v26;
      }
      v30 = v28 * v8;
      if ( FIELD_U8(a1, 174) == 2 )
      {
        sub_608C5B2C(a1 + 108);
        v26 = v31 + v26;
        v54[14] = v26;
      }
      v32 = v30 * v12;
      v33 = v7 & a2;
      if ( FIELD_U8(a1, 175) == 2 )
      {
        sub_608C5B2C(a1 + 140);
        v54[14] = v34 + v26;
      }
      v35 = v32 * 0.0039216;
      v36 = FIELD_F32(a1, 308) + v54[15];
      v54[15] = v36;
      if ( v33 )
      {
        if ( FIELD_U8(a1, 179) )
        {
          v37 = FIELD_U32(a1, 296) + 5;
          if ( v37 > FIELD_U32(a1, 300) )
            v37 = FIELD_U32(a1, 300);
          FIELD_U32(a1, 296) = v37;
        }
        if ( FIELD_U8(a1, 172) != 255 )
          v36 = sub_608C5A74(a1 + 44, 5, v36);
        if ( FIELD_U8(a1, 173) != 255 )
          v36 = sub_608C5A74(a1 + 76, 5, v36);
        if ( FIELD_U8(a1, 174) != 255 )
          v36 = sub_608C5A74(a1 + 108, 5, v36);
        if ( FIELD_U8(a1, 175) != 255 )
          v36 = sub_608C5A74(a1 + 140, 5, v36);
        sub_608C57D0(a1 + 16, 5, v36);
      }
      v38 = FIELD_F32(a1, 192);
      *(float *)&v39 = sub_608C579C(a1 + 16);
      v41 = v35 * sub_608C6CCC(v39, v40);
      if ( FIELD_U8(a1, 172) == 1 )
      {
        sub_608C5B2C(a1 + 44);
        v42.n64_u32[0] = 6.0;
        *(float *)&v44 = v43 * 6.0;
        v41 = v41 * sub_608C6CCC(v44, v42);
      }
      if ( FIELD_U8(a1, 173) == 1 )
      {
        sub_608C5B2C(a1 + 76);
        v45.n64_u32[0] = 6.0;
        *(float *)&v47 = v46 * 6.0;
        v41 = v41 * sub_608C6CCC(v47, v45);
      }
      if ( FIELD_U8(a1, 174) == 1 )
      {
        sub_608C5B2C(a1 + 108);
        v48.n64_u32[0] = 6.0;
        *(float *)&v50 = v49 * 6.0;
        v41 = v41 * sub_608C6CCC(v50, v48);
      }
      if ( FIELD_U8(a1, 175) == 1 )
      {
        sub_608C5B2C(a1 + 140);
        v51.n64_u32[0] = 6.0;
        *(float *)&v53 = v52 * 6.0;
        v41 = v41 * sub_608C6CCC(v53, v51);
      }
      result = FIELD_U32(a1, 364);
      if ( result )
      {
        sub_608C9B6C(v41);
        sub_608C9BA0(FIELD_U32(a1, 364), (float)(v22 * v25) * v24);
        sub_608C9BC8(FIELD_U32(a1, 364), FIELD_U32(a1, 336));
        sub_608C9BEC(FIELD_U32(a1, 364), FIELD_U32(a1, 340));
        sub_608C9C10(FIELD_U32(a1, 364), v38 + 1.0);
        ((void (__fastcall *)(_DWORD, _DWORD, float))loc_608C9C38)(
          FIELD_U32(a1, 364),
          FIELD_U8(a1, 182),
          FIELD_F32(a1, 196));
        sub_608C9CEC(FIELD_U32(a1, 364), FIELD_U32(a1, 200));
        result = sub_608CA3D4(FIELD_U32(a1, 364), v54);
        if ( FIELD_U32(a1, 284) )
          return sub_608CA3DC(FIELD_U32(a1, 364));
      }
    }
  }
  return result;
}
