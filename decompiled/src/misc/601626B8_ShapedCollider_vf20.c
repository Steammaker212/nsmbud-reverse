/* ShapedCollider_vf20
 * address: 0x601626B8   size: 980   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ShapedCollider_vf20(int a1, int a2, _BYTE *a3, float *a4, float *a5, int a6)
{
  int v9; // r1
  float v10; // s6
  float v11; // s18
  float v12; // s16
  float v13; // s0
  float *v14; // r0
  float v15; // s20
  float v16; // s22
  float v17; // s24
  float v18; // s26
  float v19; // s8
  _BOOL4 v20; // r8
  int v21; // r0
  float v22; // s2
  float v23; // s20
  int v24; // r9
  unsigned int v25; // r11
  float v26; // s16
  float v27; // s18
  int v28; // r1
  float v29; // s2
  float v30; // s2
  float v31; // s2
  float v32; // s4
  float v33; // s0
  int v34; // r1
  unsigned int v35; // r0
  unsigned int v36; // r1
  unsigned int v37; // r0
  unsigned int v38; // r1
  _BYTE *v39; // r2
  int v40; // r1
  int v41; // r2
  char v42; // r2
  int v43; // r1
  int v44; // r0
  bool v45; // zf
  int v46; // r1
  int v48; // [sp+8h] [bp-88h]
  unsigned int v49; // [sp+Ch] [bp-84h]
  unsigned int v50; // [sp+10h] [bp-80h]
  int v51; // [sp+14h] [bp-7Ch]
  float v52[2]; // [sp+18h] [bp-78h] BYREF
  float v53; // [sp+20h] [bp-70h] BYREF
  float v54; // [sp+24h] [bp-6Ch]
  float v55[2]; // [sp+28h] [bp-68h] BYREF
  float v56; // [sp+30h] [bp-60h]
  float v57; // [sp+34h] [bp-5Ch]

  v9 = 1;
  if ( !*a3 )
  {
    v44 = (*(int (__fastcall **)(int, float *, float *))(*(_DWORD *)a1 + 0x28))(a1, v55, a4);
    v45 = v44 == 1;
    if ( v44 == 1 )
      v45 = LOBYTE(v55[0]) == 0;
    if ( v45 )
    {
      if ( a2 )
      {
        *(_BYTE *)a2 = 15;
        FIELD_F32(a2, 4) = *a4;
        FIELD_F32(a2, 8) = a4[1];
        FIELD_U32(a2, 12) = 0;
        FIELD_U32(a2, 16) = 0;
        v46 = FIELD_U32(a1, 308);
        FIELD_U32(a2, 24) = FIELD_U32(a1, 304);
        FIELD_U32(a2, 28) = v46;
        FIELD_U32(a2, 32) = a1;
      }
LABEL_47:
      v42 = 1;
      return v42 & 1;
    }
    v9 = v44 ^ 1;
  }
  v48 = v9;
  v10 = a4[1];
  v11 = FIELD_F32(a1, 128);
  v12 = FIELD_F32(a1, 132);
  v13 = a5[1];
  v14 = *(float **)(a1 + 152);
  v51 = 0;
  v15 = FIELD_F32(a1, 172);
  v16 = FIELD_F32(a1, 176);
  v17 = *v14;
  v18 = v14[1];
  v19 = (float)((float)(v10 - v13) * (float)(v10 - v13)) + (float)((float)(*a4 - *a5) * (float)(*a4 - *a5));
  v20 = v19 <= 0.0001 && v19 >= -0.0001;
  v50 = -1073741824;
  if ( v19 > 0.0001 || v19 < -0.0001 )
    v50 = sub_6000F7B8(v13 - v10, *a5 - *a4);
  v21 = FIELD_U32(a1, 348);
  if ( v21 >= 1 )
  {
    v22 = v17 + v15;
    v23 = 3.4028e38;
    v24 = 0;
    v25 = 0;
    v49 = 0;
    v51 = 0;
    v26 = (float)(v18 + v16) + v12;
    v27 = v22 + v11;
    do
    {
      v28 = FIELD_U32(a1, 352);
      if ( v21 > v25 )
        v28 += v24;
      if ( (*(_BYTE *)v28 & (unsigned __int8)a6) == 0 )
        goto LABEL_37;
      v29 = v26 + FIELD_F32(v28, 8);
      v53 = v27 + FIELD_F32(v28, 4);
      v54 = v29;
      v30 = FIELD_F32(v28, 16);
      v52[0] = v27 + FIELD_F32(v28, 12);
      v52[1] = v26 + v30;
      sub_60166970(v55, &v53, v52, a6);
      if ( (v20
         || (v55[0] != v56 || v55[1] != v57)
         && !((int (__fastcall *)(float *, float *, float *))loc_60167218)(v55, a4, a5))
        && ((int (__fastcall *)(float *, float *, float *, float *))loc_60166AE0)(v55, &v53, a4, a5) == 1 )
      {
        v31 = v53;
        v32 = v54;
        v33 = (float)((float)(a4[1] - v54) * (float)(a4[1] - v54)) + (float)((float)(*a4 - v53) * (float)(*a4 - v53));
        if ( v33 <= v23 )
        {
          if ( !a2 )
            goto LABEL_47;
          v34 = FIELD_U32(a1, 352);
          if ( FIELD_U32(a1, 348) > v25 )
            v34 += v24;
          v35 = FIELD_U32(v34, 20);
          v36 = v35;
          if ( v57 == v54 )
            v36 = v35 ^ 0x80000000;
          if ( v56 != v53 )
            v36 = v35;
          v37 = v50 - v36;
          if ( (int)(v50 - v36) < 0 && v37 != 0x80000000 )
            v37 = v36 - v50;
          FIELD_U32(a2, 32) = a1;
          FIELD_F32(a2, 4) = v31;
          FIELD_F32(a2, 8) = v32;
          if ( v33 != v23 )
          {
            v38 = FIELD_U32(a1, 348);
            v39 = *(_BYTE **)(a1 + 352);
            v23 = v33;
            goto LABEL_29;
          }
          v51 = 1;
          if ( v37 >= v49 )
          {
            v38 = FIELD_U32(a1, 348);
            v39 = *(_BYTE **)(a1 + 352);
LABEL_29:
            if ( v38 > v25 )
              v39 += v24;
            *(_BYTE *)a2 = *v39;
            v40 = FIELD_U32(a1, 352);
            if ( FIELD_U32(a1, 348) > v25 )
              v40 += v24;
            FIELD_U32(a2, 12) = FIELD_U32(v40, 20);
            FIELD_U32(a2, 16) = v37;
            v41 = FIELD_U32(a1, 352);
            if ( FIELD_U32(a1, 348) > v25 )
              v41 += v24;
            FIELD_U64(a2, 24) = FIELD_U64(v41, 24);
            v49 = v37;
            v51 = 1;
          }
        }
      }
      v21 = FIELD_U32(a1, 348);
LABEL_37:
      ++v25;
      v24 += 32;
    }
    while ( (int)v25 < v21 );
  }
  v42 = v51;
  if ( ((v48 | v51) & 1) == 0 )
  {
    v42 = 1;
    if ( a2 )
    {
      *(_BYTE *)a2 = 15;
      FIELD_F32(a2, 4) = *a4;
      FIELD_F32(a2, 8) = a4[1];
      FIELD_U32(a2, 12) = 0;
      FIELD_U32(a2, 16) = 0;
      v43 = FIELD_U32(a1, 308);
      FIELD_U32(a2, 24) = FIELD_U32(a1, 304);
      FIELD_U32(a2, 28) = v43;
      FIELD_U32(a2, 32) = a1;
    }
  }
  return v42 & 1;
}
