/* sub_603D1790
 * address: 0x603D1790   size: 1128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D1790(float *a1, _BYTE *a2)
{
  int v2; // r6
  int v4; // r3
  int result; // r0
  float *v6; // r12
  float *v7; // r4
  float *v8; // lr
  float *v9; // r2
  __int16 v10; // r5
  bool v11; // zf
  float v12; // s0
  float v13; // s0
  char v14; // r5
  bool v15; // zf
  float v16; // s0
  float v17; // s0
  float *v18; // r1
  float *v19; // r12
  float *v20; // r5
  float *v21; // r4
  bool v22; // zf
  float *v23; // r2
  float v24; // s0
  float v25; // s0
  bool v26; // zf
  float v27; // s0
  float v28; // s0
  bool v29; // zf
  float v30; // s0
  float v31; // s0
  bool v32; // zf
  float v33; // s0
  float v34; // s0
  char v35; // r5
  bool v36; // zf
  float v37; // s0
  float v38; // s0
  bool v39; // zf
  float v40; // s0
  float v41; // s0

  v4 = PlayerMgr_instance;
  if ( a2 )
  {
    result = 0;
    v6 = a1 + 1532;
    *a2 = 0;
    v7 = a1 + 1531;
    v8 = a1 + 1530;
    v9 = a1 + 1529;
    v10 = FIELD_U16(v4, 66);
    v11 = (v10 & 1) == 0;
    if ( (v10 & 1) != 0 )
    {
      v2 = FIELD_U32(v4, 48);
      v11 = v2 == 0;
    }
    if ( !v11 )
    {
      v12 = FIELD_F32(v2, 108) + FIELD_F32(v2, 572);
      if ( *v9 <= v12 && v12 <= *v7 )
      {
        v13 = FIELD_F32(v2, 112) + FIELD_F32(v2, 576);
        if ( *v8 <= v13 )
        {
          result = 0;
          if ( v13 <= *v6 )
          {
            v14 = FIELD_U8(v2, 84);
            v2 = (unsigned __int8)*a2;
            result = 1;
            *a2 = v2 | (1 << v14);
            v10 = FIELD_U16(v4, 66);
          }
        }
      }
    }
    v15 = (v10 & 2) == 0;
    if ( (v10 & 2) != 0 )
    {
      v2 = FIELD_U32(v4, 52);
      v15 = v2 == 0;
    }
    if ( !v15 )
    {
      v16 = FIELD_F32(v2, 108) + FIELD_F32(v2, 572);
      if ( *v9 <= v16 && v16 <= *v7 )
      {
        v17 = FIELD_F32(v2, 112) + FIELD_F32(v2, 576);
        if ( *v8 <= v17 && v17 <= *v6 )
        {
          v35 = FIELD_U8(v2, 84);
          v2 = (unsigned __int8)*a2;
          result = 1;
          *a2 = v2 | (1 << v35);
          v10 = FIELD_U16(v4, 66);
        }
      }
    }
    v36 = (v10 & 4) == 0;
    if ( (v10 & 4) != 0 )
    {
      v2 = FIELD_U32(v4, 56);
      v36 = v2 == 0;
    }
    if ( !v36 )
    {
      v37 = FIELD_F32(v2, 108) + FIELD_F32(v2, 572);
      if ( *v9 <= v37 && v37 <= *v7 )
      {
        v38 = FIELD_F32(v2, 112) + FIELD_F32(v2, 576);
        if ( *v8 <= v38 && v38 <= *v6 )
        {
          result = 1;
          *a2 |= 1 << FIELD_U8(v2, 84);
          v10 = FIELD_U16(v4, 66);
        }
      }
    }
    v39 = (v10 & 8) == 0;
    if ( (v10 & 8) != 0 )
    {
      v4 = FIELD_U32(v4, 60);
      v39 = v4 == 0;
    }
    if ( !v39 )
    {
      v40 = FIELD_F32(v4, 108) + FIELD_F32(v4, 572);
      if ( *v9 <= v40 && v40 <= *v7 )
      {
        v41 = FIELD_F32(v4, 112) + FIELD_F32(v4, 576);
        if ( *v8 <= v41 && v41 <= *v6 )
        {
          *a2 |= 1 << FIELD_U8(v4, 84);
          return 1;
        }
      }
    }
  }
  else
  {
    v18 = (float *)FIELD_U16(PlayerMgr_instance, 66);
    v19 = a1 + 1532;
    v20 = a1 + 1530;
    v21 = a1 + 1531;
    v22 = ((unsigned __int8)v18 & 1) == 0;
    v23 = a1 + 1529;
    result = 0;
    if ( ((unsigned __int8)v18 & 1) != 0 )
    {
      v2 = FIELD_U32(PlayerMgr_instance, 48);
      v22 = v2 == 0;
    }
    if ( !v22 )
    {
      v24 = FIELD_F32(v2, 108) + FIELD_F32(v2, 572);
      if ( *v23 <= v24 && v24 <= *v21 )
      {
        v25 = FIELD_F32(v2, 112) + FIELD_F32(v2, 576);
        if ( *v20 <= v25 )
          result = v25 <= *v19;
      }
    }
    v26 = ((unsigned __int8)v18 & 2) == 0;
    if ( ((unsigned __int8)v18 & 2) != 0 )
    {
      v2 = FIELD_U32(PlayerMgr_instance, 52);
      v26 = v2 == 0;
    }
    if ( !v26 )
    {
      v27 = FIELD_F32(v2, 108) + FIELD_F32(v2, 572);
      if ( *v23 <= v27 && v27 <= *v21 )
      {
        v28 = FIELD_F32(v2, 112) + FIELD_F32(v2, 576);
        if ( *v20 <= v28 )
          result |= v28 <= *v19;
      }
    }
    v29 = ((unsigned __int8)v18 & 4) == 0;
    if ( ((unsigned __int8)v18 & 4) != 0 )
    {
      v2 = FIELD_U32(PlayerMgr_instance, 56);
      v29 = v2 == 0;
    }
    if ( !v29 )
    {
      v30 = FIELD_F32(v2, 108) + FIELD_F32(v2, 572);
      if ( *v23 <= v30 && v30 <= *v21 )
      {
        v31 = FIELD_F32(v2, 112) + FIELD_F32(v2, 576);
        if ( *v20 <= v31 )
          result |= v31 <= *v19;
      }
    }
    v32 = ((unsigned __int8)v18 & 8) == 0;
    if ( ((unsigned __int8)v18 & 8) != 0 )
    {
      v18 = *(float **)(PlayerMgr_instance + 60);
      v32 = v18 == 0;
    }
    if ( !v32 )
    {
      v33 = v18[27] + v18[143];
      if ( *v23 <= v33 && v33 <= *v21 )
      {
        v34 = v18[28] + v18[144];
        if ( *v20 <= v34 )
          return result | (v34 <= *v19);
      }
    }
  }
  return result;
}
