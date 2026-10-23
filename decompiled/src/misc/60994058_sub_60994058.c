/* sub_60994058
 * address: 0x60994058   size: 1736   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60994058(int a1, double a2, double a3, float32x2_t a4, int a5, int a6, int a7)
{
  float32x2_t v7; // d9
  unsigned int result; // r0
  bool v10; // zf
  float v11; // s2
  _BYTE *v12; // r8
  unsigned __int16 *v13; // r9
  unsigned int v14; // r7
  int v15; // r0
  unsigned int v16; // r4
  float v17; // s16
  size_t v18; // r6
  int v19; // r0
  unsigned int v20; // r11
  unsigned int v21; // t1
  int v22; // r1
  int v23; // r7
  int v24; // r0
  __int16 *v25; // r10
  unsigned int v26; // r0
  int v27; // kr00_4
  int v28; // r2
  int v29; // r7
  int v30; // r3
  int v31; // r1
  __int16 *v32; // r0
  int v33; // r9
  int v34; // r11
  int v35; // r8
  unsigned int v36; // r6
  unsigned int v37; // r1
  bool v38; // zf
  int v39; // r4
  int v40; // r0
  unsigned int v41; // r0
  int v42; // r2
  signed int v43; // r0
  unsigned int v44; // r6
  unsigned int i; // r3
  int v46; // r4
  int v47; // r1
  unsigned int j; // r2
  int v49; // r3
  int v50; // r0
  unsigned int v51; // r1
  __int16 *v52; // r7
  unsigned int v53; // r2
  __int16 v54; // r7
  unsigned int v55; // r2
  char v56; // r1
  unsigned int v57; // r0
  void (__fastcall ***v58)(_DWORD); // r0
  float v59; // s2
  bool v60; // zf
  float v61; // s20
  _WORD *v62; // r0
  unsigned int v63; // [sp+0h] [bp-58h]
  unsigned __int16 *v64; // [sp+4h] [bp-54h]
  _BYTE *v65; // [sp+8h] [bp-50h]
  unsigned int v66; // [sp+Ch] [bp-4Ch]
  int v67; // [sp+10h] [bp-48h]
  size_t v68; // [sp+14h] [bp-44h]

  if ( (FIELD_U8(a1, 63) & 1) != 0 )
  {
    LODWORD(a3) = FIELD_U32(a1, 48);
    if ( *(float *)&a3 > 0.0 )
    {
      a4.n64_u32[0] = 0;
      *(float *)&a3 = *(float *)&a3 - *(float *)&a2;
      FIELD_U32(a1, 48) = vmax_f32(*(float32x2_t *)&a3, a4).n64_u32[0];
    }
  }
  result = FIELD_U32(a1, 20);
  v10 = result == 0;
  if ( result )
    v10 = FIELD_U8(a1, 62) == 0;
  if ( v10 )
    return result;
  v11 = FIELD_F32(a1, 44);
  if ( v11 <= 0.0 )
  {
    v13 = (unsigned __int16 *)(a1 + 60);
    v14 = FIELD_U16(a1, 56);
    if ( FIELD_U16(a1, 60) <= v14 )
      goto LABEL_91;
    v12 = (_BYTE *)(a1 + 64);
  }
  else
  {
    v12 = (_BYTE *)(a1 + 64);
    if ( FIELD_U8(a1, 64) != 2 )
    {
      a4.n64_u32[0] = 0;
      *(float *)&a2 = v11 - *(float *)&a2;
      FIELD_U32(a1, 44) = vmax_f32(*(float32x2_t *)&a2, a4).n64_u32[0];
      return result;
    }
    FIELD_U32(a1, 44) = 0;
    v13 = (unsigned __int16 *)(a1 + 60);
    v14 = FIELD_U16(a1, 56);
    if ( FIELD_U16(a1, 60) <= v14 )
    {
LABEL_91:
      (*(void (__fastcall **)(unsigned int, _DWORD))(*(_DWORD *)result + 156))(result, FIELD_U32(a1, 24));
      FIELD_U8(a1, 62) = 0;
      FIELD_U8(a1, 64) = 0;
      FIELD_U16(a1, 56) = FIELD_U16(a1, 60);
      result = FIELD_U32(a1, 36);
      FIELD_U32(a1, 32) = result;
      return result;
    }
  }
  v7.n64_u32[0] = 1.0;
  FIELD_F32(a1, 52) = FIELD_F32(a1, 52) + (float)(FIELD_F32(a1, 32) * *(float *)&a2);
  LODWORD(a2) = FIELD_U32(a1, 40);
  while ( 2 )
  {
    v15 = FIELD_U32(a1, 24);
    v16 = v14;
    v17 = *(float *)&a2;
    v18 = 2 * v14;
    v21 = *(unsigned __int16 *)(v15 + 2 * v14);
    v19 = v15 + 2 * v14;
    v20 = v21;
    if ( (v21 | 1) != 0xF )
    {
      if ( v20 >= 0x20 )
      {
        v24 = sub_6085E5DC(FIELD_U32(a1, 20));
        *(float *)&a2 = v17
                      + (float)((float)(*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v24 + 64))(v24, v20)
                              + *(float *)(FIELD_U32(a1, 20) + 204));
      }
      ++v14;
      goto LABEL_84;
    }
    if ( v20 == 15 )
    {
      v23 = v19 + 6;
    }
    else
    {
      v22 = 0;
      if ( v20 != 14 )
      {
        v23 = v19;
        goto LABEL_24;
      }
      v23 = v19 + FIELD_U16(v19, 6) + 8;
    }
    v22 = v19;
LABEL_24:
    if ( FIELD_U16(v22, 2) != 1 )
    {
LABEL_78:
      v58 = *(void (__fastcall ****)(_DWORD))(a1 + 80);
      if ( v58 )
        (**v58)(v58);
      goto LABEL_83;
    }
    v67 = v23;
    v68 = v18;
    v25 = (__int16 *)(v22 + 8);
    v26 = FIELD_U16(v22, 4);
    v27 = a7;
    v28 = FIELD_U8(v22, 8)
        | (FIELD_U8(v22, 9) << 8)
        | ((FIELD_U8(v22, 10) | (FIELD_U8(v22, 11) << 8)) << 16);
    a7 = 3;
    switch ( FIELD_U16(v22, 4) )
    {
      case 0:
        FIELD_U8(a1, 63) |= 2u;
        if ( FIELD_U8(a1, 64) != 2 )
        {
          FIELD_F32(a1, 44) = (float)v28;
          FIELD_U32(a1, 52) = LODWORD(a2);
        }
        goto LABEL_83;
      case 1:
        *(float *)&a2 = *(float *)&v28 * FIELD_F32(a1, 36);
        a2 = vmax_f32(*(float32x2_t *)&a2, v7).n64_f64[0];
        FIELD_U32(a1, 32) = LODWORD(a2);
        goto LABEL_82;
      case 2:
        if ( *v12 != 2 )
          *v12 = 1;
        FIELD_U32(a1, 44) = 0;
        goto LABEL_83;
      case 3:
        FIELD_U8(a1, 63) |= 1u;
        FIELD_F32(a1, 48) = (float)v28;
        goto LABEL_82;
      case 4:
        LOBYTE(a7) = 2;
        goto LABEL_68;
      case 5:
        goto LABEL_68;
      case 6:
      case 0xA:
        LOBYTE(a7) = 1;
        if ( v26 == 6 )
          LOBYTE(a7) = 4;
LABEL_68:
        v50 = 0;
        v51 = 0;
        FIELD_U8(a1, 65) = a7;
        do
        {
          v52 = (__int16 *)((char *)v25 + v50);
          v53 = 0;
          v50 += 2;
          v54 = *v52;
          if ( v51 < 4 )
            v53 = v51;
          a7 = a1 + 2 * v53;
          FIELD_U16(a7, 72) = v54;
          *(_BYTE *)(a1 + v53 + 68) = v51++;
          v55 = FIELD_U8(a1, 65);
        }
        while ( (int)v51 < (int)v55 );
        if ( v55 > 1 )
        {
          v56 = *((_BYTE *)v25 + v50++);
          FIELD_U8(a1, 66) = v56;
        }
        v57 = *((unsigned __int8 *)v25 + v50);
        v23 = v67;
        if ( v57 >= v55 )
          LOBYTE(v57) = -1;
        FIELD_U8(a1, 67) = v57;
        goto LABEL_83;
      case 8:
      case 9:
        v29 = 0;
        if ( v26 == 9 )
          v29 = 8;
        FIELD_U8(a1, 65) = 0;
        if ( v26 == 8 )
          v29 = 4;
        if ( !v29 )
        {
          FIELD_U8(a1, 66) = 0;
          goto LABEL_81;
        }
        v64 = v13;
        v30 = v22 + 10;
        v31 = 0;
        v32 = v25;
        v33 = 0;
        v63 = v20;
        v65 = v12;
        v66 = v16;
        break;
      default:
        a7 = v27;
        if ( v26 >= 0xB )
          goto LABEL_78;
        goto LABEL_83;
    }
    do
    {
      v34 = *v32;
      v35 = v31 + 4;
      v36 = *(unsigned __int16 *)(v30 + v31);
      if ( v34 >= 0 )
      {
        v37 = FIELD_U8(a1, 65);
        if ( v37 <= 3 )
        {
          v38 = v36 == 0;
          if ( v36 )
          {
            v32 = *(__int16 **)(a1 + 84);
            v38 = v32 == 0;
          }
          if ( !v38 )
          {
            v39 = v30;
            v40 = (**(int (__fastcall ***)(__int16 *, int, unsigned int))v32)(v32, (int)v25 + v35, v36 >> 1);
            v30 = v39;
            v16 = v66;
            if ( v40 )
              goto LABEL_45;
            v37 = FIELD_U8(a1, 65);
          }
          v41 = 0;
          if ( v37 < 4 )
            v41 = v37;
          *(_WORD *)(a1 + 2 * v41 + 72) = v34;
          *(_BYTE *)(a1 + v41 + 68) = v33;
          FIELD_U8(a1, 65) = v37 + 1;
        }
      }
LABEL_45:
      v31 = v36 + v35;
      ++v33;
      v32 = (__int16 *)((char *)v25 + v36 + v35);
    }
    while ( v33 < v29 );
    a7 = 0;
    v42 = *(unsigned __int8 *)v32;
    v43 = FIELD_U8(a1, 65);
    FIELD_U8(a1, 66) = 0;
    v12 = v65;
    v13 = v64;
    v20 = v63;
    if ( v43 )
    {
      v44 = v16;
      for ( i = 0; (int)i < v43; ++i )
      {
        v46 = a1;
        if ( i < 4 )
          v46 = a1 + i;
        if ( FIELD_U8(v46, 68) == v42 )
          FIELD_U8(a1, 66) = i;
      }
      v16 = v44;
      v47 = *((unsigned __int8 *)v25 + v31 + 1);
      FIELD_U8(a1, 67) = -1;
      v18 = v68;
      v23 = v67;
      for ( j = 0; (int)j < v43; ++j )
      {
        v49 = a1;
        if ( j < 4 )
          v49 = a1 + j;
        a7 = FIELD_U8(v49, 68);
        if ( a7 == v47 )
          FIELD_U8(a1, 67) = j;
      }
      goto LABEL_83;
    }
LABEL_81:
    FIELD_U8(a1, 67) = -1;
LABEL_82:
    v18 = v68;
    v23 = v67;
LABEL_83:
    *(float *)&a2 = v17;
    v14 = (__int64)((unsigned int)v23 - (unsigned __int64)FIELD_U32(a1, 24)) / 2;
LABEL_84:
    if ( FIELD_F32(a1, 44) > 0.0 )
    {
      qmemcpy(*(void **)(a1 + 28), *(const void **)(a1 + 24), 2 * v14);
      qmemcpy(
        (void *)sub_609885B8(FIELD_U32(a1, 28) + 2 * v14, 0, 0),
        (const void *)(FIELD_U32(a1, 24) + 2 * v14),
        2 * (FIELD_U16(a1, 60) - v14));
      result = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 20) + 156))(
                 FIELD_U32(a1, 20),
                 FIELD_U32(a1, 28),
                 (unsigned __int16)(FIELD_U16(a1, 60) + 5));
      FIELD_F32(a1, 40) = v17;
      FIELD_U16(a1, 56) = v14;
    }
    else
    {
      v59 = FIELD_F32(a1, 52);
      if ( v59 > *(float *)&a2 )
        goto LABEL_89;
      v60 = v20 >= 0x20;
      if ( v20 >= 0x20 )
        v60 = *v12 == 0;
      if ( !v60 )
      {
LABEL_89:
        if ( *v13 <= v14 )
        {
          result = FIELD_U32(a1, 20);
          goto LABEL_91;
        }
        continue;
      }
      v61 = 1.0 - (float)((float)(*(float *)&a2 - v59) / (float)(*(float *)&a2 - v17));
      if ( v61 >= 0.0 )
      {
        if ( v61 > 1.0 )
          v61 = 1.0;
      }
      else
      {
        v61 = 0.0;
      }
      qmemcpy(*(void **)(a1 + 28), *(const void **)(a1 + 24), v18);
      v62 = (_WORD *)sub_609885B8(FIELD_U32(a1, 28) + 2 * v16, 0, (unsigned int)(float)(v61 * 255.0));
      *v62 = v20;
      qmemcpy(
        (void *)sub_609885B8((int)(v62 + 1), 0, 0),
        (const void *)(FIELD_U32(a1, 24) + 2 * v16 + 2),
        2 * (FIELD_U16(a1, 60) - v16) - 2);
      (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 20) + 156))(
        FIELD_U32(a1, 20),
        FIELD_U32(a1, 28),
        (unsigned __int16)(FIELD_U16(a1, 60) + 10));
      result = FIELD_U16(a1, 56);
      if ( v16 > result )
      {
        FIELD_F32(a1, 40) = v17;
        FIELD_U16(a1, 56) = v16;
      }
    }
    return result;
  }
}
