/* SolidOnTopCollider_vf20
 * address: 0x6015EB28   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SolidOnTopCollider_vf20(int a1, int a2, int a3, float *a4, float *a5, int a6)
{
  float v9; // s0
  float v10; // s18
  float v11; // s16
  float v12; // s20
  float v13; // s22
  float v14; // s6
  float *v15; // r0
  float v16; // s24
  float v17; // s26
  float v18; // s8
  _BOOL4 v19; // r8
  int v20; // r0
  float v21; // s2
  float v22; // s20
  int v23; // r9
  unsigned int v24; // r11
  float v25; // s16
  float v26; // s18
  int v27; // r1
  float v28; // s2
  float v29; // s2
  float v30; // s2
  float v31; // s4
  float v32; // s0
  int v33; // r1
  unsigned int v34; // r0
  unsigned int v35; // r1
  unsigned int v36; // r0
  unsigned int v37; // r1
  _BYTE *v38; // r2
  int v39; // r1
  int v40; // r2
  unsigned int v42; // [sp+4h] [bp-84h]
  unsigned int v43; // [sp+8h] [bp-80h]
  char v44; // [sp+Ch] [bp-7Ch]
  float v45[2]; // [sp+10h] [bp-78h] BYREF
  float v46; // [sp+18h] [bp-70h] BYREF
  float v47; // [sp+1Ch] [bp-6Ch]
  float v48[2]; // [sp+20h] [bp-68h] BYREF
  float v49; // [sp+28h] [bp-60h]
  float v50; // [sp+2Ch] [bp-5Ch]

  v9 = a4[1];
  v10 = FIELD_F32(a1, 128);
  v11 = FIELD_F32(a1, 132);
  v12 = FIELD_F32(a1, 172);
  v13 = FIELD_F32(a1, 176);
  v14 = a5[1];
  v15 = *(float **)(a1 + 152);
  v16 = *v15;
  v17 = v15[1];
  v44 = 0;
  v18 = (float)((float)(v9 - v14) * (float)(v9 - v14)) + (float)((float)(*a4 - *a5) * (float)(*a4 - *a5));
  v19 = v18 <= 0.0001 && v18 >= -0.0001;
  v43 = -1073741824;
  if ( v18 > 0.0001 || v18 < -0.0001 )
    v43 = sub_6000F7B8(v14 - v9, *a5 - *a4);
  v20 = FIELD_U32(a1, 348);
  if ( v20 >= 1 )
  {
    v21 = v16 + v12;
    v22 = 3.4028e38;
    v23 = 0;
    v24 = 0;
    v44 = 0;
    v42 = 0;
    v25 = (float)(v17 + v13) + v11;
    v26 = v21 + v10;
    do
    {
      v27 = FIELD_U32(a1, 352);
      if ( v20 > v24 )
        v27 += v23;
      if ( (*(_BYTE *)v27 & (unsigned __int8)a6) == 0 )
        goto LABEL_36;
      v28 = v25 + FIELD_F32(v27, 8);
      v46 = v26 + FIELD_F32(v27, 4);
      v47 = v28;
      v29 = FIELD_F32(v27, 16);
      v45[0] = v26 + FIELD_F32(v27, 12);
      v45[1] = v25 + v29;
      sub_60166970(v48, &v46, v45, a6);
      if ( (v19
         || (v48[0] != v49 || v48[1] != v50)
         && !((int (__fastcall *)(float *, float *, float *))loc_60167218)(v48, a4, a5))
        && ((int (__fastcall *)(float *, float *, float *, float *))loc_60166AE0)(v48, &v46, a4, a5) == 1 )
      {
        v30 = v46;
        v31 = v47;
        v32 = (float)((float)(a4[1] - v47) * (float)(a4[1] - v47)) + (float)((float)(*a4 - v46) * (float)(*a4 - v46));
        if ( v32 <= v22 )
        {
          if ( !a2 )
          {
            v44 = 1;
            return v44 & 1;
          }
          v33 = FIELD_U32(a1, 352);
          if ( FIELD_U32(a1, 348) > v24 )
            v33 += v23;
          v34 = FIELD_U32(v33, 20);
          v35 = v34;
          if ( v50 == v47 )
            v35 = v34 ^ 0x80000000;
          if ( v49 != v46 )
            v35 = v34;
          v36 = v43 - v35;
          if ( (int)(v43 - v35) < 0 && v36 != 0x80000000 )
            v36 = v35 - v43;
          FIELD_U32(a2, 32) = a1;
          FIELD_F32(a2, 4) = v30;
          FIELD_F32(a2, 8) = v31;
          if ( v32 != v22 )
          {
            v37 = FIELD_U32(a1, 348);
            v38 = *(_BYTE **)(a1 + 352);
            v22 = v32;
            goto LABEL_28;
          }
          v44 = 1;
          if ( v36 >= v42 )
          {
            v37 = FIELD_U32(a1, 348);
            v38 = *(_BYTE **)(a1 + 352);
LABEL_28:
            if ( v37 > v24 )
              v38 += v23;
            *(_BYTE *)a2 = *v38;
            v39 = FIELD_U32(a1, 352);
            if ( FIELD_U32(a1, 348) > v24 )
              v39 += v23;
            FIELD_U32(a2, 12) = FIELD_U32(v39, 20);
            FIELD_U32(a2, 16) = v36;
            v40 = FIELD_U32(a1, 352);
            if ( FIELD_U32(a1, 348) > v24 )
              v40 += v23;
            FIELD_U64(a2, 24) = FIELD_U64(v40, 24);
            v42 = v36;
            v44 = 1;
          }
        }
      }
      v20 = FIELD_U32(a1, 348);
LABEL_36:
      ++v24;
      v23 += 32;
    }
    while ( (int)v24 < v20 );
  }
  return v44 & 1;
}
