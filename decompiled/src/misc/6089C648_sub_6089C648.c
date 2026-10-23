/* sub_6089C648
 * address: 0x6089C648   size: 1164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089C648(int a1, _BYTE *a2, int a3, int a4, int a5, int a6)
{
  void (__fastcall *v7)(int *); // r6
  void (__fastcall *v9)(int *); // r3
  unsigned int v10; // s0
  int v11; // r1
  float v12; // s0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  void (__fastcall *v16)(int *); // r0
  float v17; // s16
  int v18; // r0
  int v19; // r1
  unsigned int *v20; // r0
  unsigned int *v21; // r1
  unsigned int *v22; // r0
  char v23; // r0
  int v25; // r11
  int v27; // r8
  int v28; // r6
  _BOOL4 v29; // r8
  int v30; // r9
  int v31; // r5
  int v32; // r1
  _DWORD *v33; // r0
  int v34; // r1
  int v35; // r0
  int v36; // r1
  int v37; // r1
  int v38; // r0
  int v39; // r0
  int v40; // r0
  bool v41; // zf
  int v42; // r0
  int v43; // r1
  float *v44; // r2
  _DWORD *v45; // r2
  void (__fastcall *v46)(int *); // [sp+18h] [bp-68h]
  int v48; // [sp+24h] [bp-5Ch]
  void (__fastcall *v49)(int *); // [sp+28h] [bp-58h]
  void (__fastcall *v50)(int *); // [sp+2Ch] [bp-54h]
  int v51; // [sp+30h] [bp-50h]
  int v53; // [sp+38h] [bp-48h] BYREF
  int v54; // [sp+3Ch] [bp-44h]
  int v55; // [sp+40h] [bp-40h]
  int v56; // [sp+44h] [bp-3Ch]
  int v57; // [sp+48h] [bp-38h]
  int v58; // [sp+4Ch] [bp-34h]

  v7 = 0;
  v9 = 0;
  v10 = FIELD_U32(a3, 144);
  v11 = 1103515245 * v10 + 12345;
  v12 = (float)v10;
  FIELD_U32(a3, 144) = v11;
  v13 = FIELD_U32(a3, 712);
  if ( v13 )
    v7 = *(void (__fastcall **)(int *))(v13 + 28);
  v14 = FIELD_U32(a3, 704);
  if ( v14 )
    v9 = *(void (__fastcall **)(int *))(v14 + 28);
  v15 = FIELD_U32(a3, 708);
  if ( v15 )
    v16 = *(void (__fastcall **)(int *))(v15 + 28);
  else
    v16 = 0;
  v46 = v16;
  v17 = v12 * 2.3283e-10;
  v18 = *(_DWORD *)(FIELD_U32(a3, 348) + 12);
  if ( !FIELD_U32(v18, 2164) )
  {
    v19 = FIELD_U8(v18, 2104);
    v20 = *(unsigned int **)(a3 + 136);
    if ( v19 == 13 )
    {
      v21 = v20 + 547;
      v22 = v20 + 546;
    }
    else
    {
      if ( v19 != 2 )
        goto LABEL_14;
      v21 = v20 + 545;
      v22 = v20 + 544;
    }
    a4 *= *v22 - (int)(float)((float)*v22 * (float)((float)(v17 * (float)*v21) * 0.01));
  }
LABEL_14:
  if ( FIELD_U8(a3, 1253) )
  {
    v23 = 1;
    if ( *a2 )
    {
      if ( (float)((float)(FIELD_F32(a3, 68) - *(float *)(FIELD_U32(a3, 148) + 8))
                 - *(float *)(FIELD_U32(a3, 148) + 12)) > 0.0 )
      {
        v23 = 0;
        FIELD_U8(a3, 1253) = 0;
      }
      if ( a4 < 1 )
        return -1;
      goto LABEL_22;
    }
  }
  else
  {
    v23 = 0;
  }
  if ( a4 < 1 )
    return -1;
LABEL_22:
  v25 = 0;
  v49 = v7;
  v50 = v9;
  v48 = a4;
  v51 = -1;
  if ( v23 )
    goto LABEL_53;
LABEL_54:
  v40 = FIELD_U8(a3, 1252);
  v29 = 1;
  if ( FIELD_U8(a3, 1252) )
    v40 = 1;
  v41 = (v40 | a5 ^ 1) == 0;
  v42 = FIELD_U32(a3, 344);
  if ( v41 )
  {
    v43 = FIELD_U32(a3, 40);
    v27 = 1;
    if ( !v43 )
    {
      v42 = 0;
      goto LABEL_27;
    }
    if ( *(_BYTE *)(FIELD_U32(a3, 136) + 1874) )
    {
      if ( v43 < 1 )
        goto LABEL_27;
      v27 = 0;
      v28 = 0;
      v44 = (float *)(FIELD_U32(a3, 148) + 8);
      do
      {
        if ( (float)((float)(FIELD_F32(a3, 68) - *v44) - v44[1]) > 0.0 )
          goto LABEL_26;
        ++v28;
        v44 += 6;
      }
      while ( v28 < v43 );
      v27 = 1;
      v28 = -1;
    }
    else
    {
      if ( v43 < 1 )
        goto LABEL_27;
      v45 = *(_DWORD **)(a3 + 148);
      v28 = 0;
      while ( *v45 )
      {
        ++v28;
        v45 += 6;
        if ( v28 >= v43 )
          goto LABEL_27;
      }
      v27 = 0;
    }
LABEL_26:
    if ( v28 != -1 )
    {
LABEL_28:
      v29 = v27 != 0;
      goto LABEL_29;
    }
LABEL_27:
    v28 = v42;
    FIELD_U8(a3, 1252) = 1;
    goto LABEL_28;
  }
  v28 = FIELD_U32(a3, 344);
LABEL_29:
  while ( !*(_QWORD *)(FIELD_U32(a3, 148) + 24 * v28 + 16) )
  {
    *a2 = 1;
    v30 = FIELD_U32(a3, 156);
    if ( !*(_BYTE *)(FIELD_U32(a3, 136) + 1874) )
      v30 = a3 + 292;
    v31 = a6;
    if ( ((int (__fastcall *)(float))loc_6089CAE0)(v17) == 1 )
    {
      FIELD_U32(a3, 1248) = v28;
      v32 = FIELD_U32(v30, 8);
      v33 = (_DWORD *)(FIELD_U32(v30, 4) + 16 * v28);
      *(_DWORD *)(v32 + 16 * v28) = *v33;
      v34 = v32 + 16 * v28;
      FIELD_U32(v34, 4) = v33[1];
      FIELD_U32(v34, 8) = v33[2];
      if ( FIELD_U32(a3, 900) )
        sub_6089C220(a1, a3, v28);
      if ( v31 )
        v35 = FIELD_U32(v31, 80);
      else
        v35 = 0;
      v36 = *(_DWORD *)(FIELD_U32(a3, 148) + 24 * v28 + 12);
      v56 = 0;
      v57 = v36;
      v58 = v28;
      v53 = v35;
      v54 = 0;
      v55 = a3;
      if ( v49 )
        v49(&v53);
      if ( v50 )
      {
        v50(&v53);
      }
      else if ( v46 )
      {
        v46(&v53);
      }
      *(_DWORD *)(FIELD_U32(a3, 148) + 24 * v28 + 20) = v54;
      *(_DWORD *)(FIELD_U32(a3, 148) + 24 * v28 + 16) = v53;
      if ( v29 )
      {
        v37 = FIELD_U32(a3, 340);
        v38 = v28 + 1;
        if ( v28 + 1 == v37 )
          v38 = 0;
        FIELD_U32(a3, 344) = v38;
        v39 = FIELD_U32(a3, 40);
        if ( v39 < v37 )
          FIELD_U32(a3, 40) = v39 + 1;
      }
      a4 = v48;
      v51 = v28;
    }
    if ( ++v25 >= a4 )
      return v51;
    a6 = v31;
    if ( !FIELD_U8(a3, 1253) )
      goto LABEL_54;
LABEL_53:
    v28 = FIELD_U32(a3, 344);
    v29 = 1;
  }
  nullsub_95();
  return v51;
}
