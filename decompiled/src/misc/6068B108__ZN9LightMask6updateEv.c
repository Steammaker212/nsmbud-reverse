/* _ZN9LightMask6updateEv
 * address: 0x6068B108   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LightMask__update(int a1)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  float v5; // s0
  float v6; // s4
  _BOOL4 v7; // r1
  _BOOL4 v8; // r0
  float v9; // s0
  float v10; // s4
  _BOOL4 v11; // r1
  _BOOL4 v12; // r0
  float v13; // s2
  float v14; // s4
  float v15; // s0
  float v16; // s8
  int v17; // r0
  float v19[12]; // [sp+0h] [bp-30h] BYREF

  if ( !sub_6068C438(MaskMgr_instance) )
    return 1;
  if ( FIELD_U32(a1, 32) == 7 )
  {
    if ( FIELD_S32(a1, 36) <= 2 )
    {
      v3.n64_u32[0] = FIELD_U32(a1, 8);
    }
    else
    {
      v5 = FIELD_F32(a1, 4);
      v3.n64_u32[0] = FIELD_U32(a1, 8);
      if ( v3.n64_f32[0] < v5 )
      {
        v6 = v3.n64_f32[0] + 10.0;
        v7 = (float)(v3.n64_f32[0] + 10.0) < v3.n64_f32[0];
        v8 = (float)(v3.n64_f32[0] + 10.0) >= v5;
LABEL_13:
        if ( v8 )
          v3.n64_u32[0] = FIELD_U32(a1, 4);
        else
          v3.n64_f32[0] = v6;
        if ( v7 )
          v3.n64_u32[0] = FIELD_U32(a1, 4);
        FIELD_U32(a1, 8) = v3.n64_u32[0];
        goto LABEL_19;
      }
      if ( v3.n64_f32[0] > v5 )
      {
        v6 = v3.n64_f32[0] + -10.0;
        v7 = v3.n64_f32[0] < (float)(v3.n64_f32[0] + -10.0);
        v8 = (float)(v3.n64_f32[0] + -10.0) <= v5;
        goto LABEL_13;
      }
    }
LABEL_19:
    v2.n64_u32[0] = 1117782016;
    v2.n64_u32[0] = vmax_f32(v3, v2).n64_u32[0];
    if ( v3.n64_f32[0] <= 128.0 )
      v13 = (float)(v3.n64_f32[0] * 0.0078125) * (float)(v3.n64_f32[0] * 0.0078125);
    else
      v13 = 1.0;
    goto LABEL_33;
  }
  if ( FIELD_U8(MaskMgr_instance, 20) <= 7u )
  {
    v3.n64_u32[0] = FIELD_U32(a1, 4);
    FIELD_U32(a1, 8) = v3.n64_u32[0];
    goto LABEL_30;
  }
  v9 = FIELD_F32(a1, 4);
  v3.n64_u32[0] = FIELD_U32(a1, 8);
  if ( v3.n64_f32[0] < v9 )
  {
    v10 = v3.n64_f32[0] + 20.0;
    v11 = (float)(v3.n64_f32[0] + 20.0) < v3.n64_f32[0];
    v12 = (float)(v3.n64_f32[0] + 20.0) >= v9;
LABEL_24:
    if ( v12 )
      v3.n64_u32[0] = FIELD_U32(a1, 4);
    else
      v3.n64_f32[0] = v10;
    if ( v11 )
      v3.n64_u32[0] = FIELD_U32(a1, 4);
    FIELD_U32(a1, 8) = v3.n64_u32[0];
    goto LABEL_30;
  }
  if ( v3.n64_f32[0] > v9 )
  {
    v10 = v3.n64_f32[0] + -20.0;
    v11 = v3.n64_f32[0] < (float)(v3.n64_f32[0] + -20.0);
    v12 = (float)(v3.n64_f32[0] + -20.0) <= v9;
    goto LABEL_24;
  }
LABEL_30:
  v4.n64_u32[0] = 1112014848;
  v2.n64_u32[0] = vmax_f32(v3, v4).n64_u32[0];
  if ( v3.n64_f32[0] <= 50.0 )
    v13 = v3.n64_f32[0] / 50.0;
  else
    v13 = 1.0;
LABEL_33:
  v14 = FIELD_F32(a1, 12);
  v15 = v2.n64_f32[0] * 0.5;
  v19[0] = v14 - v15;
  v16 = FIELD_F32(a1, 16);
  v19[1] = v15 + v16;
  v19[2] = v13;
  v19[3] = v14 - v15;
  v19[4] = v16 - v15;
  v19[5] = v13;
  v19[6] = v15 + v14;
  v19[7] = v16 - v15;
  v19[8] = v13;
  v19[9] = v15 + v14;
  v19[10] = v15 + v16;
  v19[11] = v13;
  sub_6068A698(*(_DWORD **)(a1 + 28), v19);
  sub_6068AD3C(FIELD_U32(a1, 24));
  v17 = FIELD_U32(a1, 36);
  if ( v17 <= 254 )
    FIELD_U32(a1, 36) = v17 + 1;
  return 1;
}
