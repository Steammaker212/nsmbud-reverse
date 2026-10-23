/* SolidOnTopCollider_vf24_helper_15F370
 * address: 0x6015F370   size: 1404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

double __fastcall SolidOnTopCollider_vf24_helper_15F370(int a1, unsigned int a2, signed int a3, int a4)
{
  float *v8; // r0
  float *v9; // r1
  float v10; // s0
  float v11; // s2
  float v12; // s6
  float v13; // s4
  float v14; // s12
  float v15; // s16
  float v16; // s18
  float v17; // s2
  _BOOL4 v18; // r7
  int v19; // r4
  int v20; // r7
  float *v21; // r1
  float v22; // s4
  int v23; // s0
  int v24; // s6
  float v25; // s1
  float v26; // s0
  unsigned int v27; // r1
  int v28; // r11
  char v29; // r1
  float v30; // s18
  float v31; // s16
  float v32; // s0
  float *v33; // r10
  float *v34; // r5
  float *v35; // r2
  float *v36; // r0
  char v37; // r1
  _BOOL4 v38; // r4
  char v39; // r1
  char v40; // r1
  char v41; // r1
  unsigned int v42; // r0
  float *v43; // r1
  float v44; // s4
  int v45; // s0
  int v46; // s6
  float v47; // s1
  float v48; // s0
  unsigned int v49; // r1
  int v50; // r0
  ColliderNodeUnk1 v52; // [sp+8h] [bp-60h] BYREF
  float v53[2]; // [sp+18h] [bp-50h] BYREF
  double v54; // [sp+20h] [bp-48h] BYREF
  float v55; // [sp+28h] [bp-40h]
  float v56; // [sp+2Ch] [bp-3Ch]

  v8 = *(float **)(a1 + 152);
  v9 = *(float **)(a1 + 352);
  v10 = FIELD_F32(a1, 128);
  v11 = FIELD_F32(a1, 132);
  v12 = *v8 + FIELD_F32(a1, 172);
  v13 = v8[1] + FIELD_F32(a1, 176);
  if ( FIELD_U32(a1, 348) > a2 )
    v9 += 8 * a2;
  v14 = v9[2];
  v15 = v12 + v10;
  v16 = v13 + v11;
  *(float *)&v52.field_0 = (float)(v12 + v10) + v9[1];
  *(float *)&v52.field_4 = (float)(v13 + v11) + v14;
  v17 = v9[4];
  v53[0] = (float)(v12 + v10) + v9[3];
  v53[1] = v16 + v17;
  sub_60166970(&v54, &v52, v53, a4);
  if ( FIELD_U32(a1, 144) )
  {
    v18 = 1;
    v19 = 1;
    if ( FIELD_U32(a1, 348) == 1 )
      goto LABEL_49;
    ColliderNodeUnk1_ctor(&v52);
    v19 = 1;
    v20 = 1;
    if ( a2 )
    {
      v21 = *(float **)(a1 + 352);
      if ( FIELD_U32(a1, 348) > a2 - 1 )
        v21 += 8 * a2 - 8;
      v22 = v15 + v21[3];
      *(float *)&v23 = v16 + v21[2];
      *(float *)&v24 = v16 + v21[4];
      v25 = v22 - (float)(v15 + v21[1]);
      *(float *)&v52.field_0 = v15 + v21[1];
      v52.field_4 = v23;
      v26 = *(float *)&v24 - *(float *)&v23;
      v52.field_8 = v22;
      v52.field_C = v24;
      if ( v25 > 0.0001 || v25 < -0.0001 )
      {
        if ( v26 > 0.0001 || v26 < -0.0001 )
        {
          v27 = sub_6000F7B8(v26, v25);
        }
        else
        {
          v27 = 0x80000000;
          if ( v25 >= 0.0 )
            v27 = 0;
        }
      }
      else
      {
        v27 = -1073741824;
        if ( v26 >= 0.0 )
          v27 = 0x40000000;
      }
      v20 = (*(int (__fastcall **)(int, unsigned int, _DWORD))(*(_DWORD *)a1 + 16))(a1, v27, (unsigned __int8)(1 << a3))
          ^ 1;
    }
    v42 = FIELD_U32(a1, 348);
    if ( v42 - 1 != a2 )
    {
      v43 = *(float **)(a1 + 352);
      if ( v42 > a2 + 1 )
        v43 += 8 * a2 + 8;
      v44 = v15 + v43[3];
      *(float *)&v45 = v16 + v43[2];
      *(float *)&v46 = v16 + v43[4];
      v47 = v44 - (float)(v15 + v43[1]);
      *(float *)&v52.field_0 = v15 + v43[1];
      v52.field_4 = v45;
      v48 = *(float *)&v46 - *(float *)&v45;
      v52.field_8 = v44;
      v52.field_C = v46;
      if ( v47 > 0.0001 || v47 < -0.0001 )
      {
        if ( v48 > 0.0001 || v48 < -0.0001 )
        {
          v49 = sub_6000F7B8(v48, v47);
        }
        else
        {
          v49 = 0x80000000;
          if ( v47 >= 0.0 )
            v49 = 0;
        }
      }
      else
      {
        v49 = -1073741824;
        if ( v48 >= 0.0 )
          v49 = 0x40000000;
      }
      v19 = (*(int (__fastcall **)(int, unsigned int, _DWORD))(*(_DWORD *)a1 + 16))(a1, v49, (unsigned __int8)(1 << a3))
          ^ 1;
    }
    v18 = v20 != 0;
LABEL_47:
    if ( !v19 )
      goto LABEL_48;
LABEL_49:
    v50 = sub_6014FBD0(a4, a3);
    sub_60166E60(&v54, v50, a3, v18, v19);
    return v54;
  }
  v28 = TileMgr_instance;
  sub_607160F4(
    TileMgr_instance,
    (int)(float)(v15 + (float)(flt_60AF7728[2 * a3] * 16.0)),
    (unsigned __int16)(int)(float)-(float)(v16 + (float)(flt_60AF7728[2 * a3 + 1] * 16.0)),
    **(unsigned __int8 **)(a1 + 160),
    1);
  v19 = 0;
  v18 = 0;
  if ( (v29 & 0xF) != 0 )
    goto LABEL_47;
  v30 = v56 - *((float *)&v54 + 1);
  v31 = v55 - *(float *)&v54;
  v32 = sqrtf((float)(v30 * v30) + (float)(v31 * v31));
  if ( v32 > 0.0 )
  {
    v30 = v30 * (float)(1.0 / v32);
    v31 = v31 * (float)(1.0 / v32);
  }
  if ( v32 == 0.0 )
  {
    v38 = 0;
    v18 = 0;
  }
  else
  {
    v33 = (float *)((char *)&unk_60AF7748 + 8 * a3);
    v34 = (float *)((char *)&unk_60AF7768 + 8 * a3);
    sub_607160F4(
      v28,
      (int)(float)((float)(v55 + *v33) + *v34),
      (unsigned __int16)(int)(float)-(float)((float)(v56 + v33[1]) + v34[1]),
      **(unsigned __int8 **)(a1 + 160),
      1);
    v35 = v34 + 1;
    v36 = v33 + 1;
    v18 = 0;
    v38 = 0;
    if ( (v37 & 0xF) == 0 )
    {
      sub_607160F4(
        v28,
        (int)(float)(v31 + v55),
        (unsigned __int16)(int)(float)-(float)(v30 + v56),
        **(unsigned __int8 **)(a1 + 160),
        1);
      v36 = v33 + 1;
      v35 = v34 + 1;
      v38 = (v39 & 0xF) == 0;
    }
    sub_607160F4(
      v28,
      (int)(float)((float)(*(float *)&v54 - *v33) + *v34),
      (unsigned __int16)(int)(float)-(float)((float)(*((float *)&v54 + 1) - *v36) + *v35),
      **(unsigned __int8 **)(a1 + 160),
      1);
    if ( (v40 & 0xF) == 0 )
    {
      sub_607160F4(
        v28,
        (int)(float)(*(float *)&v54 - v31),
        (unsigned __int16)(int)(float)-(float)(*((float *)&v54 + 1) - v30),
        **(unsigned __int8 **)(a1 + 160),
        1);
      v18 = (v41 & 0xF) == 0;
    }
  }
  v19 = v38;
  if ( v19 )
    goto LABEL_49;
LABEL_48:
  if ( v18 )
    goto LABEL_49;
  return v54;
}
