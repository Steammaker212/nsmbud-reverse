/* sub_6011F2B4
 * address: 0x6011F2B4   size: 2316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6011F2B4(int a1, int a2)
{
  int v4; // r2
  float v5; // r0
  float v6; // r1
  float v7; // r2
  float v8; // s22
  float v9; // s24
  float v10; // s28
  float v11; // s18
  float v12; // s16
  float result; // s0
  _BYTE *v14; // r6
  float v15; // s20
  float v16; // s28
  float *v17; // r1
  float v18; // s17
  float v19; // s24
  float v20; // s22
  float v21; // s0
  float v22; // s28
  float v23; // s30
  float v24; // s0
  float v25; // s26
  float v26; // s20
  float v27; // s28
  float *v28; // r1
  float v29; // s0
  float v30; // s0
  float v31; // s20
  int v32; // r2
  float v33; // s18
  float v34; // s0
  float v35; // s0
  float v36; // s28
  float *v37; // r1
  float v38; // s30
  float v39; // s19
  float v40; // s17
  float v41; // s0
  float v42; // s28
  float v43; // s26
  float v44; // s0
  float v45; // s21
  float v46; // s0
  float v47; // s0
  float v48; // s20
  float v49; // s18
  float v50; // s23
  float v51; // s0
  float v52; // s0
  float v53; // s0
  float v54; // s20
  float v55; // s18
  float v56; // s0
  float v57; // s0
  float v58; // s18
  float v59; // s0
  float v60; // s26
  float v61; // s0
  float v62; // [sp+0h] [bp-60h] BYREF
  float v63; // [sp+4h] [bp-5Ch]
  float v64; // [sp+8h] [bp-58h]

  v4 = a1 + 120;
  v5 = FIELD_F32(a1, 120);
  v6 = FIELD_F32(v4, 4);
  v7 = FIELD_F32(v4, 8);
  v63 = v6;
  v64 = v7;
  v8 = v5 * 0.5;
  v62 = v8;
  v9 = v6;
  v10 = v7;
  v11 = sqrtf((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10));
  v12 = v11;
  if ( v11 > 0.0 )
  {
    v8 = (float)(1.0 / v11) * v8;
    v9 = (float)(1.0 / v11) * v6;
    v10 = (float)(1.0 / v11) * v7;
    v62 = v8;
    v63 = v9;
    v64 = v10;
  }
  result = (float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10);
  if ( sqrtf(result) == 0.0 )
    return result;
  FIELD_U8(a1, 9329) = 1;
  v14 = (_BYTE *)(a1 + 9329);
  switch ( a2 )
  {
    case 0:
      v63 = -v9;
      if ( sub_6011E504((float *)a1, 0, &v62) == 1 )
        goto LABEL_19;
      v15 = FIELD_F32(a1, 112);
      v16 = FIELD_F32(a1, 108);
      v17 = (float *)(a1 + 8840);
      v18 = FIELD_F32(a1, 116) - FIELD_F32(a1, 116);
      if ( v62 < 0.0 )
        v17 = (float *)(a1 + 8836);
      v19 = (float)((float)(FIELD_F32(a1, 9028) + v15) * 0.5) - v15;
      v20 = *v17 - v16;
      v21 = sqrtf((float)(v18 * v18) + (float)((float)(v19 * v19) + (float)(v20 * v20)));
      v22 = (float)((float)(v16 + FIELD_F32(a1, 9024)) * 0.5) - v16;
      v23 = FIELD_F32(a1, 8844) - v15;
      if ( v21 <= 0.0 )
      {
        v25 = FIELD_F32(a1, 116) - FIELD_F32(a1, 116);
      }
      else
      {
        v24 = 1.0 / v21;
        v25 = v18 * v24;
        v19 = v19 * v24;
        v20 = v20 * v24;
      }
      v52 = sqrtf((float)(v18 * v18) + (float)((float)(v23 * v23) + (float)(v22 * v22)));
      if ( v52 > 0.0 )
      {
        v53 = 1.0 / v52;
        v18 = v18 * v53;
        v23 = v23 * v53;
        v22 = v22 * v53;
      }
      v54 = (float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v25 * v25);
      result = sqrtf(v54);
      if ( result != 0.0 )
      {
        v55 = (float)(v23 * v23) + (float)(v22 * v22);
        goto LABEL_49;
      }
      return result;
    case 1:
      v63 = -v9;
      if ( sub_6011E504((float *)a1, 1u, &v62) == 1 )
        goto LABEL_19;
      v26 = FIELD_F32(a1, 112);
      v27 = FIELD_F32(a1, 108);
      v28 = (float *)(a1 + 8840);
      v18 = FIELD_F32(a1, 116) - FIELD_F32(a1, 116);
      if ( v62 < 0.0 )
        v28 = (float *)(a1 + 8836);
      v19 = (float)((float)(FIELD_F32(a1, 9028) + v26) * 0.5) - v26;
      v20 = *v28 - v27;
      v29 = sqrtf((float)(v18 * v18) + (float)((float)(v19 * v19) + (float)(v20 * v20)));
      v22 = (float)((float)(v27 + FIELD_F32(a1, 9024)) * 0.5) - v27;
      v23 = FIELD_F32(a1, 8848) - v26;
      if ( v29 <= 0.0 )
      {
        v25 = FIELD_F32(a1, 116) - FIELD_F32(a1, 116);
      }
      else
      {
        v30 = 1.0 / v29;
        v25 = v18 * v30;
        v19 = v19 * v30;
        v20 = v20 * v30;
      }
      v56 = sqrtf((float)(v18 * v18) + (float)((float)(v23 * v23) + (float)(v22 * v22)));
      if ( v56 > 0.0 )
      {
        v57 = 1.0 / v56;
        v18 = v18 * v57;
        v23 = v23 * v57;
        v22 = v22 * v57;
      }
      v54 = (float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v25 * v25);
      result = sqrtf(v54);
      if ( result != 0.0 )
      {
        v55 = (float)(v22 * v22) + (float)(v23 * v23);
LABEL_49:
        v58 = v55 + (float)(v18 * v18);
        result = sqrtf(v58);
        if ( result != 0.0 )
        {
          v59 = acosf(
                  (float)((float)((float)((float)(v19 * v63) + (float)(v20 * v62)) + (float)(v25 * v64))
                        / sqrtf((float)((float)(v63 * v63) + (float)(v62 * v62)) + (float)(v64 * v64)))
                / sqrtf(v54));
          v60 = 999.0;
          v61 = v59 * 57.296;
          if ( v61 >= 999.0 )
          {
            v20 = 0.0;
            v19 = 0.0;
          }
          else
          {
            v60 = v61;
            *v14 = 0;
          }
          if ( (v62 >= 0.0 || v22 < 0.0)
            && v60 > (float)(acosf(
                               (float)((float)((float)((float)(v23 * v63) + (float)(v22 * v62)) + (float)(v18 * v64))
                                     / sqrtf((float)((float)(v63 * v63) + (float)(v62 * v62)) + (float)(v64 * v64)))
                             / sqrtf(v58))
                           * 57.296) )
          {
            v20 = v22;
            v19 = v23;
            *v14 = 0;
          }
          goto LABEL_22;
        }
      }
      return result;
    case 2:
      v62 = -v8;
      if ( sub_6011E504((float *)a1, 2u, &v62) == 1 )
        goto LABEL_19;
      v31 = FIELD_F32(a1, 112);
      v32 = 8840;
      goto LABEL_25;
    case 3:
      v62 = -v8;
      if ( sub_6011E504((float *)a1, 3u, &v62) != 1 )
      {
        v31 = FIELD_F32(a1, 112);
        v32 = 8836;
LABEL_25:
        v36 = FIELD_F32(a1, 108);
        v37 = (float *)(a1 + 8844);
        v38 = FIELD_F32(a1, 116) - FIELD_F32(a1, 116);
        v39 = *(float *)(a1 + v32) - v36;
        if ( v63 < 0.0 )
          v37 = (float *)(a1 + 8848);
        v40 = (float)((float)(v31 + FIELD_F32(a1, 9028)) * 0.5) - v31;
        v41 = sqrtf((float)((float)(v40 * v40) + (float)(v39 * v39)) + (float)(v38 * v38));
        v42 = (float)((float)(v36 + FIELD_F32(a1, 9024)) * 0.5) - v36;
        v43 = *v37 - v31;
        if ( v41 <= 0.0 )
        {
          v45 = FIELD_F32(a1, 116) - FIELD_F32(a1, 116);
        }
        else
        {
          v44 = 1.0 / v41;
          v45 = v38 * v44;
          v40 = v40 * v44;
          v39 = v39 * v44;
        }
        v46 = sqrtf((float)((float)(v43 * v43) + (float)(v42 * v42)) + (float)(v38 * v38));
        if ( v46 > 0.0 )
        {
          v47 = 1.0 / v46;
          v38 = v38 * v47;
          v43 = v43 * v47;
          v42 = v42 * v47;
        }
        v48 = (float)((float)(v39 * v39) + (float)(v40 * v40)) + (float)(v45 * v45);
        result = sqrtf(v48);
        if ( result == 0.0 )
          return result;
        v49 = (float)((float)(v42 * v42) + (float)(v43 * v43)) + (float)(v38 * v38);
        result = sqrtf(v49);
        if ( result == 0.0 )
          return result;
        if ( v63 < 0.0 )
        {
          v50 = 999.0;
          v20 = 0.0;
          if ( v40 >= 0.0 )
            goto LABEL_58;
          v19 = 0.0;
          if ( v63 >= 0.0 )
            goto LABEL_59;
        }
        v50 = 999.0;
        v51 = acosf(
                (float)((float)((float)((float)(v40 * v63) + (float)(v39 * v62)) + (float)(v45 * v64))
                      / sqrtf((float)((float)(v63 * v63) + (float)(v62 * v62)) + (float)(v64 * v64)))
              / sqrtf(v48))
            * 57.296;
        if ( v51 < 999.0 )
        {
          v20 = v39;
          v19 = v40;
          v50 = v51;
          *v14 = 0;
          goto LABEL_59;
        }
        v20 = 0.0;
LABEL_58:
        v19 = 0.0;
LABEL_59:
        if ( v50 > (float)(acosf(
                             (float)((float)((float)((float)(v43 * v63) + (float)(v42 * v62)) + (float)(v38 * v64))
                                   / sqrtf((float)((float)(v63 * v63) + (float)(v62 * v62)) + (float)(v64 * v64)))
                           / sqrtf(v49))
                         * 57.296) )
        {
          v20 = v42;
          v19 = v43;
          *v14 = 0;
        }
        goto LABEL_22;
      }
LABEL_19:
      v19 = FIELD_F32(a1, 9028) - FIELD_F32(a1, 112);
      v20 = FIELD_F32(a1, 9024) - FIELD_F32(a1, 108);
      v33 = FIELD_F32(a1, 9032) - FIELD_F32(a1, 116);
      v34 = sqrtf((float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v33 * v33));
      if ( v34 > 0.0 )
      {
        v35 = 1.0 / v34;
        v33 = v33 * v35;
        v19 = v19 * v35;
        v20 = v20 * v35;
      }
      result = (float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v33 * v33);
      if ( sqrtf(result) != 0.0 )
      {
LABEL_22:
        result = (float)(v12 * v20) + (float)(v12 * v20);
        FIELD_F32(a1, 120) = result;
        FIELD_F32(a1, 124) = v12 * v19;
      }
      return result;
    default:
      v20 = 0.0;
      v19 = 0.0;
      goto LABEL_22;
  }
}
