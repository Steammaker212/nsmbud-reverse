/* sub_6092EC24
 * address: 0x6092EC24   size: 1076   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092EC24(int a1, int a2, unsigned int a3, int a4, float a5, float a6, int *a7, char a8)
{
  int result; // r0
  int *v13; // r7
  unsigned int v14; // r2
  int v15; // r4
  unsigned int v16; // r1
  int v17; // r1
  int v18; // r7
  int v19; // r0
  int v20; // r1
  int *v21; // r2
  unsigned int v22; // r0
  int v23; // r11
  float v24; // s0
  int v25; // r0
  bool v26; // zf
  unsigned __int16 *v27; // r4
  unsigned int v28; // r7
  int v29; // r9
  int v30; // r0
  int v31; // r1
  bool v32; // zf
  unsigned __int8 *v33; // r0
  float v34; // s0
  int v35; // r0
  bool v36; // zf
  int v37; // r4
  int v38; // r1
  int v39; // r6
  int v40; // r1
  bool v41; // zf
  unsigned int v42; // [sp+Ch] [bp-D4h] BYREF
  int v43; // [sp+10h] [bp-D0h]
  int v44; // [sp+14h] [bp-CCh]
  int v45; // [sp+18h] [bp-C8h]
  float *v46; // [sp+1Ch] [bp-C4h]
  float v47; // [sp+20h] [bp-C0h]
  float v48; // [sp+24h] [bp-BCh]
  int v49; // [sp+28h] [bp-B8h]
  int v50; // [sp+2Ch] [bp-B4h]
  char v51; // [sp+30h] [bp-B0h]
  float v52[2]; // [sp+34h] [bp-ACh] BYREF
  __int16 v53; // [sp+3Ch] [bp-A4h] BYREF
  int v54; // [sp+40h] [bp-A0h]
  int v55; // [sp+58h] [bp-88h]
  _BYTE v56[60]; // [sp+A4h] [bp-3Ch] BYREF

  result = FIELD_U8(a1, 3616);
  if ( !result )
    return result;
  result = 1;
  if ( (FIELD_U32(a1, 4) & (1 << a3)) == 0 )
    return result;
  v13 = *(int **)(a1 + 836);
  v14 = FIELD_U32(a1, 824);
  v15 = FIELD_U32(a1, 828);
  v16 = FIELD_U32(a1, 20) & a3;
  if ( FIELD_U32(a1, 832) > v16 )
    v13 += v16;
  v17 = *v13;
  v42 = a3;
  v43 = 0;
  if ( v14 > a3 )
    v15 += 2144 * a3;
  v44 = v15;
  v45 = v17;
  v46 = (float *)a4;
  v47 = a5;
  v48 = a6;
  v18 = FIELD_U32(a4, 28);
  if ( FIELD_U16(v18, 24) > 1u )
    result = FIELD_U16(v18, 24);
  v49 = result;
  v19 = sub_609200A0(v18);
  v20 = FIELD_U16(v18, 26);
  if ( v19 > v20 )
    v20 = v19;
  v50 = v20;
  v51 = a8;
  sub_60920EC8(v15, *(int **)(a4 + 28));
  sub_60920EC8(v15 + 344, a7);
  v21 = *(int **)(a1 + 836);
  v22 = FIELD_U32(a1, 20) & a3;
  if ( FIELD_U32(a1, 832) > v22 )
    v21 += v22;
  v23 = *v21;
  if ( *(_BYTE *)(*v21 + 12) || FIELD_U8(v23, 28) )
  {
    v24 = FIELD_F32(v23, 284);
    if ( v24 > 0.0 )
      goto LABEL_24;
    if ( FIELD_U8(v23, 140) )
    {
      v25 = FIELD_U32(v23, 736);
      v26 = v25 == 0;
      if ( v25 )
        v26 = FIELD_U8(v23, 28) == 0;
      if ( !v26 && ((int)v24 == (v24 < 0.0 && (float)(int)v24 != v24) || FIELD_U8(v23, 204)) )
        goto LABEL_24;
    }
  }
  if ( FIELD_U8(v23, 76) )
  {
    v24 = FIELD_F32(v23, 284);
LABEL_24:
    if ( v24 > 0.0 )
      goto LABEL_25;
    if ( FIELD_U8(v23, 140) )
    {
      v35 = FIELD_U32(v23, 736);
      v36 = v35 == 0;
      if ( v35 )
        v36 = FIELD_U8(v23, 28) == 0;
      if ( !v36 && ((int)v24 == (v24 < 0.0 && (float)(int)v24 != v24) || FIELD_U8(v23, 204)) )
      {
LABEL_25:
        v27 = *(unsigned __int16 **)(a4 + 28);
        v28 = v27[12];
        v29 = v27[30];
        if ( v28 <= 1 )
          v28 = 1;
        v30 = sub_609200A0(FIELD_U32(a4, 28));
        v31 = v27[13];
        if ( v30 > v31 )
          v31 = v30;
        sub_6092E94C(a1, a2, a3, v29, v28, v31);
        v43 = 0;
        sub_6092F064(a1, a2, &v42);
        v32 = FIELD_U8(v23, 12) == 0;
        if ( FIELD_U8(v23, 12) )
          v32 = FIELD_U8(v23, 44) == 0;
        if ( !v32 && FIELD_F32(v23, 284) > 0.0 )
        {
          v43 = 1;
          ((void (__fastcall *)(int, int, unsigned int *))loc_6092F4F4)(a1, a2, &v42);
        }
        if ( FIELD_U32(a1, 1600) == 2 )
        {
          ((void (__fastcall *)(_BYTE *, float *))loc_6090E438)(v56, v46);
          sub_6090B260((int)v46);
          sub_6090E560((int)v56, a2, v46);
          v33 = (unsigned __int8 *)sub_6090B350((int)&v53);
          v53 = 0;
          v55 |= 0xFu;
          v54 &= ~1u;
          sub_6090B4B0(v33, a2);
          v34 = FIELD_F32(v45, 284);
          v52[0] = 1.0 + 1.0;
          v52[1] = 1.0 + 1.0;
          sub_6093F840(a2, v44 + 1104, v56, v52, v34 + -1.0, &dword_60B3B944);
        }
        else
        {
          v43 = 2;
          sub_6092FA78(a1, a2, &v42);
        }
        v37 = FIELD_U32(a1, 828);
        if ( FIELD_U32(a1, 824) > a3 )
          v37 += 2144 * a3;
        v38 = FIELD_U32(v37, 1096);
        v39 = dword_60CD09F8;
        if ( v38 )
        {
          sub_6093EA98(dword_60CD09F8, v38);
          FIELD_U32(v37, 1096) = 0;
        }
        v40 = FIELD_U32(v37, 1448);
        if ( v40 )
        {
          sub_6093EA98(v39, v40);
          FIELD_U32(v37, 1448) = 0;
        }
      }
    }
  }
  result = FIELD_U8(v23, 60);
  if ( FIELD_U8(v23, 60) )
  {
    result = FIELD_U8(v23, 76);
    v41 = result == 0;
    if ( FIELD_U8(v23, 76) )
      v41 = FIELD_U8(v23, 92) == 0;
    if ( !v41 || FIELD_U32(v23, 464) || !FIELD_U8(v23, 76) || FIELD_F32(v23, 284) <= 0.0 )
    {
      v43 = 3;
      return sub_6092FF48(a1, a2, &v42);
    }
  }
  return result;
}
