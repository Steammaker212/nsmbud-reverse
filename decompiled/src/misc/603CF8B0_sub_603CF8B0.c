/* sub_603CF8B0
 * address: 0x603CF8B0   size: 1060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CF8B0(float *a1, _BYTE *a2, unsigned int a3, int a4)
{
  int v5; // lr
  int result; // r0
  int v7; // r2
  bool v8; // zf
  float v9; // s0
  float v10; // s0
  char v11; // r2
  bool v12; // zf
  float v13; // s0
  float v14; // s0
  float *v15; // r1
  bool v16; // zf
  float v17; // s0
  float v18; // s0
  bool v19; // zf
  float v20; // s0
  float v21; // s0
  bool v22; // zf
  float v23; // s0
  float v24; // s0
  bool v25; // zf
  float v26; // s0
  float v27; // s0
  char v28; // r2
  bool v29; // zf
  float v30; // s0
  float v31; // s0
  bool v32; // zf
  float v33; // s0
  float v34; // s0

  v5 = PlayerMgr_instance;
  if ( a2 )
  {
    result = 0;
    *a2 = 0;
    v7 = FIELD_U16(v5, 66);
    v8 = (v7 & 1) == 0;
    if ( (v7 & 1) != 0 )
    {
      a4 = FIELD_U32(v5, 48);
      v8 = a4 == 0;
    }
    if ( !v8 )
    {
      v9 = FIELD_F32(a4, 108) + FIELD_F32(a4, 572);
      if ( a1[161] <= v9 && v9 <= a1[163] )
      {
        v10 = FIELD_F32(a4, 112) + FIELD_F32(a4, 576);
        if ( a1[162] <= v10 )
        {
          result = 0;
          if ( v10 <= a1[164] )
          {
            v11 = FIELD_U8(a4, 84);
            a4 = (unsigned __int8)*a2;
            result = 1;
            *a2 = a4 | (1 << v11);
            v7 = FIELD_U16(v5, 66);
          }
        }
      }
    }
    v12 = (v7 & 2) == 0;
    if ( (v7 & 2) != 0 )
    {
      a4 = FIELD_U32(v5, 52);
      v12 = a4 == 0;
    }
    if ( !v12 )
    {
      v13 = FIELD_F32(a4, 108) + FIELD_F32(a4, 572);
      if ( a1[161] <= v13 && v13 <= a1[163] )
      {
        v14 = FIELD_F32(a4, 112) + FIELD_F32(a4, 576);
        if ( a1[162] <= v14 && v14 <= a1[164] )
        {
          v28 = FIELD_U8(a4, 84);
          a4 = (unsigned __int8)*a2;
          result = 1;
          *a2 = a4 | (1 << v28);
          v7 = FIELD_U16(v5, 66);
        }
      }
    }
    v29 = (v7 & 4) == 0;
    if ( (v7 & 4) != 0 )
    {
      a4 = FIELD_U32(v5, 56);
      v29 = a4 == 0;
    }
    if ( !v29 )
    {
      v30 = FIELD_F32(a4, 108) + FIELD_F32(a4, 572);
      if ( a1[161] <= v30 && v30 <= a1[163] )
      {
        v31 = FIELD_F32(a4, 112) + FIELD_F32(a4, 576);
        if ( a1[162] <= v31 && v31 <= a1[164] )
        {
          result = 1;
          *a2 |= 1 << FIELD_U8(a4, 84);
          v7 = FIELD_U16(v5, 66);
        }
      }
    }
    v32 = (v7 & 8) == 0;
    if ( (v7 & 8) != 0 )
    {
      v7 = FIELD_U32(v5, 60);
      v32 = v7 == 0;
    }
    if ( !v32 )
    {
      v33 = FIELD_F32(v7, 108) + FIELD_F32(v7, 572);
      if ( a1[161] <= v33 && v33 <= a1[163] )
      {
        v34 = FIELD_F32(v7, 112) + FIELD_F32(v7, 576);
        if ( a1[162] <= v34 && v34 <= a1[164] )
        {
          *a2 |= 1 << FIELD_U8(v7, 84);
          return 1;
        }
      }
    }
  }
  else
  {
    v15 = (float *)FIELD_U16(PlayerMgr_instance, 66);
    result = 0;
    v16 = ((unsigned __int8)v15 & 1) == 0;
    if ( ((unsigned __int8)v15 & 1) != 0 )
    {
      a3 = FIELD_U32(PlayerMgr_instance, 48);
      v16 = a3 == 0;
    }
    if ( !v16 )
    {
      v17 = FIELD_F32(a3, 108) + FIELD_F32(a3, 572);
      if ( a1[161] <= v17 && v17 <= a1[163] )
      {
        v18 = FIELD_F32(a3, 112) + FIELD_F32(a3, 576);
        if ( a1[162] <= v18 )
          result = v18 <= a1[164];
      }
    }
    v19 = ((unsigned __int8)v15 & 2) == 0;
    if ( ((unsigned __int8)v15 & 2) != 0 )
    {
      a3 = FIELD_U32(PlayerMgr_instance, 52);
      v19 = a3 == 0;
    }
    if ( !v19 )
    {
      v20 = FIELD_F32(a3, 108) + FIELD_F32(a3, 572);
      if ( a1[161] <= v20 && v20 <= a1[163] )
      {
        v21 = FIELD_F32(a3, 112) + FIELD_F32(a3, 576);
        if ( a1[162] <= v21 )
        {
          a3 = v21 <= a1[164];
          result |= a3;
        }
      }
    }
    v22 = ((unsigned __int8)v15 & 4) == 0;
    if ( ((unsigned __int8)v15 & 4) != 0 )
    {
      a3 = FIELD_U32(PlayerMgr_instance, 56);
      v22 = a3 == 0;
    }
    if ( !v22 )
    {
      v23 = FIELD_F32(a3, 108) + FIELD_F32(a3, 572);
      if ( a1[161] <= v23 && v23 <= a1[163] )
      {
        v24 = FIELD_F32(a3, 112) + FIELD_F32(a3, 576);
        if ( a1[162] <= v24 )
          result |= v24 <= a1[164];
      }
    }
    v25 = ((unsigned __int8)v15 & 8) == 0;
    if ( ((unsigned __int8)v15 & 8) != 0 )
    {
      v15 = *(float **)(PlayerMgr_instance + 60);
      v25 = v15 == 0;
    }
    if ( !v25 )
    {
      v26 = v15[27] + v15[143];
      if ( a1[161] <= v26 && v26 <= a1[163] )
      {
        v27 = v15[28] + v15[144];
        if ( a1[162] <= v27 )
          return result | (v27 <= a1[164]);
      }
    }
  }
  return result;
}
