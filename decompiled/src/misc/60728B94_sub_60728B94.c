/* sub_60728B94
 * address: 0x60728B94   size: 1080   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60728B94(int result, int a2, int a3, int a4)
{
  int v7; // r4
  int v8; // r10
  unsigned int v9; // r0
  unsigned int v10; // r0
  int *v11; // r6
  int v12; // r0
  int v13; // r1
  _DWORD *v14; // r0
  unsigned int v15; // r2
  _DWORD *v16; // r1
  _DWORD *v17; // r6
  int v18; // r4
  int v19; // r0
  int v20; // r10
  int v21; // r8
  _DWORD *v22; // r9
  _DWORD *v23; // r11
  unsigned int v24; // r0
  int v25; // r5
  _DWORD *v26; // r6
  int v27; // r7
  float v28; // s18
  int v29; // r7
  int v30; // r7
  int v31; // r0
  unsigned int v32; // r1
  _DWORD *v33; // r0
  int v34; // r5
  int v35; // r9
  __int64 v36; // [sp+0h] [bp-B8h]
  int (__fastcall **v37)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-B0h]
  _DWORD *v38; // [sp+10h] [bp-A8h]
  int v39; // [sp+14h] [bp-A4h]
  _DWORD *v40; // [sp+1Ch] [bp-9Ch]
  _DWORD *v41; // [sp+20h] [bp-98h]
  _DWORD *v42; // [sp+24h] [bp-94h]
  float v43[4]; // [sp+28h] [bp-90h] BYREF
  int v44; // [sp+38h] [bp-80h] BYREF
  int v45; // [sp+3Ch] [bp-7Ch]
  int v46; // [sp+40h] [bp-78h]
  int v47; // [sp+44h] [bp-74h]
  int v48; // [sp+48h] [bp-70h]
  int v49; // [sp+4Ch] [bp-6Ch]
  int v50; // [sp+50h] [bp-68h]
  int v51; // [sp+54h] [bp-64h]
  int v52; // [sp+58h] [bp-60h]
  int v53; // [sp+5Ch] [bp-5Ch]
  int v54; // [sp+60h] [bp-58h]
  int v55; // [sp+64h] [bp-54h]
  _BYTE v56[12]; // [sp+68h] [bp-50h] BYREF
  _DWORD v57[17]; // [sp+74h] [bp-44h] BYREF

  if ( FIELD_S32(result, 3888) >= 1 )
  {
    v7 = result;
    v8 = result + 4248;
    FIELD_U8(result, 4337) = 0;
    sub_6090B4B0(result + 4248, a2);
    v9 = FIELD_U32(v7, 3896);
    if ( v9 >= 2 )
      v9 = 0;
    sub_60913A6C(v57, v7 + 28 * v9 + 12, 0);
    v44 = v57[0];
    v45 = v57[1];
    v46 = v57[2];
    sub_60919D48(v7 + 72, &v44, 2, 768);
    v10 = FIELD_U32(v7, 3896);
    if ( v10 >= 2 )
      v10 = 0;
    sub_60913A6C(v56, v7 + 28 * v10 + 3224, 0);
    sub_60922794(v7 + 3280, v56, 20 * FIELD_U32(v7, 3888));
    sub_60922730(v7 + 3280, 0, FIELD_U32(v7, 3548));
    FIELD_U32(v7, 4252) |= 1u;
    FIELD_U8(v7, 4292) = 1;
    FIELD_U8(v7, 4293) = 1;
    FIELD_U8(v7, 4288) = 2;
    FIELD_U8(v7, 4291) = 2;
    FIELD_U8(v7, 4290) = 2;
    FIELD_U8(v7, 4289) = 2;
    sub_6090B4B0(v8, a2);
    v11 = (int *)(v7 + 4);
    v12 = *v11 + 936 * v11[1];
    *v11 = v12;
    sub_6091DD8C(v12, a2, 1);
    v13 = *v11;
    v14 = *(_DWORD **)(*v11 + 612);
    v39 = a2;
    if ( *v14 != -1 )
    {
      sub_6091B890(v14, a2, 16, a4);
      v13 = FIELD_U32(v7, 4);
      v14 = *(_DWORD **)(v13 + 612);
    }
    v15 = FIELD_U32(v13, 608);
    v16 = v14;
    v17 = (_DWORD *)v7;
    v18 = a2;
    if ( v15 > 1 )
      v16 = v14 + 3;
    if ( *v16 != -1 )
    {
      sub_6091B890(v16, a2, 12, a3);
      v19 = v17[1];
      v15 = FIELD_U32(v19, 608);
      v14 = *(_DWORD **)(v19 + 612);
    }
    v44 = 1065353216;
    v45 = 0;
    v46 = 0;
    v48 = 0;
    v49 = 1065353216;
    v50 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 1065353216;
    v47 = 0;
    v51 = 0;
    v55 = 0;
    if ( v15 > 2 )
      v14 += 6;
    if ( *v14 != -1 )
      sub_6091B890(v14, a2, 12, &v44);
    if ( (int)v17[972] >= 1 )
    {
      v20 = 0;
      v21 = 0;
      v42 = v17;
      v38 = v17 + 26;
      v41 = v17 + 888;
      v40 = v17 + 976;
      v37 = &dword_60CC7874;
      do
      {
        v22 = v17;
        v23 = &v17[3 * v21];
        v24 = v17[974];
        v25 = v23[39];
        if ( v24 >= 2 )
          v24 = 0;
        v26 = &v17[7 * v24];
        v27 = dword_60CC73E8(v26[809]);
        v28 = *(float *)(v27 + sub_60913FB4(v26 + 806) + 20 * v21 + 8);
        sub_60920EC8(v40, v23[38]);
        v29 = v22[1];
        sub_6091D95C(v29);
        sub_60920FDC(v40, v18, FIELD_U32(v29, 636), -1, 0);
        if ( v25 == 3 )
        {
          v30 = 6;
        }
        else
        {
          v30 = 0;
          if ( v25 == 1 )
          {
            v30 = 3;
            v28 = 1.0;
          }
        }
        v17 = v42;
        v31 = v42[1];
        v43[0] = v28;
        v43[1] = v28;
        v43[2] = v28;
        v43[3] = v28;
        v32 = FIELD_U32(v31, 608);
        v33 = *(_DWORD **)(v31 + 612);
        if ( v32 > 3 )
          v33 += 9;
        if ( *v33 != -1 )
          sub_6091B890(v33, v18, 4, v43);
        sub_60922278(v41, v18);
        if ( v30 )
        {
          v34 = FIELD_U32(v18, 192);
          v35 = v42[20];
          v36 = dword_60CC746C(v38) + (unsigned int)(v42[25] * v20);
          v18 = v39;
          ((void (__fastcall *)(int, int, _DWORD, int, _DWORD, _DWORD, int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD)))*v37)(
            v34,
            v35,
            v42[19],
            v30,
            v36,
            HIDWORD(v36),
            v37);
          v17 = v42;
        }
        v20 += v30;
        v21 += *((unsigned __int16 *)v23 + 80);
      }
      while ( v21 < v17[972] );
    }
    v17[973] = 0;
    v17[972] = 0;
    result = (v17[974] + 1) % 2;
    v17[974] = result;
  }
  return result;
}
