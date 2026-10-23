/* sub_603C5518
 * address: 0x603C5518   size: 1168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603C5518(int a1)
{
  _DWORD **v2; // r8
  int v3; // r0
  int (__fastcall *v4)(int, __int64 *); // r2
  int v5; // r0
  _BOOL4 v6; // r7
  float v7; // s0
  float v8; // s2
  float v9; // s4
  unsigned __int8 *v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r5
  float *v13; // r5
  float *v14; // r6
  float v15; // s0
  float v16; // s2
  float v17; // s4
  signed int v18; // r5
  float v19; // s6
  int v20; // r1
  int v21; // r2
  int v22; // r7
  _BYTE *result; // r0
  float v24; // s0
  float v25; // s0
  unsigned int v26; // r3
  int *v27; // r1
  int v28; // r1
  float v29; // s2
  float v30; // s0
  _BYTE *v31; // r4
  char v32; // t1
  int v33; // r0
  int (__fastcall *v34)(int, __int64 *); // r2
  int v35; // r0
  float v36; // r0
  float v37[4]; // [sp+0h] [bp-68h] BYREF
  char v38; // [sp+10h] [bp-58h]
  char v39; // [sp+11h] [bp-57h]
  char v40; // [sp+12h] [bp-56h]
  char v41; // [sp+13h] [bp-55h]
  char v42; // [sp+14h] [bp-54h]
  char v43; // [sp+15h] [bp-53h]
  char v44; // [sp+16h] [bp-52h]
  __int64 v45; // [sp+18h] [bp-50h] BYREF
  float v46; // [sp+20h] [bp-48h]
  float v47; // [sp+24h] [bp-44h]
  float v48; // [sp+28h] [bp-40h]
  float v49; // [sp+2Ch] [bp-3Ch]
  float v50; // [sp+30h] [bp-38h]
  float v51; // [sp+34h] [bp-34h]
  float v52; // [sp+38h] [bp-30h]
  float v53; // [sp+3Ch] [bp-2Ch]
  float v54; // [sp+40h] [bp-28h]
  float v55; // [sp+44h] [bp-24h]

  v2 = (_DWORD **)(a1 + 14956);
  v3 = **(_DWORD **)(a1 + 14956);
  v4 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v3 + 84);
  LODWORD(v45) = &sead__SafeStringBase__vtable;
  HIDWORD(v45) = "mouth";
  v5 = v4(v3, &v45);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v2 + 108))(**v2, v5, &v45);
  v6 = 1;
  sub_602372C0(a1 + 14852, 1180, &v45, 1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v7 = FIELD_F32(a1, 120);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + v7;
  v8 = FIELD_F32(a1, 124);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + v8;
  v9 = FIELD_F32(a1, 128);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + v9;
  v10 = (unsigned __int8 *)(a1 + 27030);
  if ( FIELD_U8(a1, 27030) )
  {
    v11 = 0;
    do
    {
      v12 = 0;
      if ( v11 < 0x20 )
        v12 = v11;
      ++v11;
      v13 = (float *)(a1 + 28 * v12);
      v13[3741] = v13[3741] + v7;
      v14 = v13 + 3742;
      v13 += 3743;
      v15 = *v14 + FIELD_F32(a1, 124);
      *v14 = v15;
      v16 = *v13;
      v17 = FIELD_F32(a1, 128);
      *v14 = v15;
      *v13 = v16 + v17;
      v18 = *v10;
      v7 = FIELD_F32(a1, 120);
    }
    while ( (int)v11 < v18 );
    v8 = FIELD_F32(a1, 124);
    v9 = FIELD_F32(a1, 128);
    v6 = v18 == 0;
  }
  FIELD_F32(a1, 15860) = FIELD_F32(a1, 15860) + v7;
  v19 = FIELD_F32(a1, 15868);
  FIELD_F32(a1, 15864) = FIELD_F32(a1, 15864) + v8;
  FIELD_F32(a1, 15868) = v19 + v9;
  v20 = dword_60C987F4;
  FIELD_U32(a1, 164) += dword_60C987F4;
  if ( !v6 )
  {
    v21 = 0;
    do
    {
      v22 = 0;
      if ( (unsigned int)v21 < 0x20 )
        v22 = v21;
      ++v21;
      *(_DWORD *)(a1 + 28 * v22 + 14984) += v20;
    }
    while ( v21 < *v10 );
  }
  FIELD_U32(a1, 15880) += v20;
  result = (_BYTE *)(a1 + 27022);
  if ( FIELD_U8(a1, 27022) )
  {
    *result = FIELD_U8(a1, 27022) - 1;
  }
  else
  {
    v24 = FIELD_F32(a1, 112);
    result = (_BYTE *)AreaTask_intance;
    if ( v24 > (float)(FIELD_F32(AreaTask_intance, 1816) + 16.0)
      && v24 < (float)(FIELD_F32(AreaTask_intance, 1824) + -32.0) )
    {
      v25 = FIELD_F32(a1, 108);
      if ( v25 > (float)(FIELD_F32(AreaTask_intance, 1812) + 16.0) )
      {
        result = (_BYTE *)(AreaTask_intance + 1820);
        if ( v25 < (float)(FIELD_F32(AreaTask_intance, 1820) + -16.0) )
        {
          result = *v2;
          v26 = (*v2)[17];
          v27 = (int *)(*v2)[3];
          if ( (*v2)[2] > v26 )
            v27 += v26;
          v28 = *v27;
          v29 = FIELD_F32(v28, 20);
          v30 = v29 + FIELD_F32(v28, 24);
          if ( v29 <= 4.0 && v30 > 4.0 || v29 <= 12.0 && v30 > 12.0 || v29 <= 20.0 && v30 > 20.0 )
          {
            v32 = FIELD_U8(a1, 27037);
            v31 = (_BYTE *)(a1 + 27037);
            *v31 = v32 ^ 1;
            v33 = *(_DWORD *)result;
            v34 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v33 + 84);
            LODWORD(v45) = &sead__SafeStringBase__vtable;
            HIDWORD(v45) = "nose";
            v35 = v34(v33, &v45);
            (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v2 + 108))(**v2, v35, &v45);
            v47 = v47
                + (float)((float)((float)(*(float *)&v45 * 0.0) - (float)(*((float *)&v45 + 1) * 6.0))
                        + (float)(v46 * 16.0));
            v51 = v51 + (float)((float)((float)(v48 * 0.0) - (float)(v49 * 6.0)) + (float)(v50 * 16.0));
            v55 = v55 + (float)((float)((float)(v52 * 0.0) - (float)(v53 * 6.0)) + (float)(v54 * 16.0));
            v36 = *(float *)(v31 - 20753);
            v37[0] = v47;
            v37[1] = v51;
            v37[2] = v55;
            v37[3] = v36;
            v38 = 1;
            v39 = 0;
            v42 = 0;
            v41 = 0;
            v44 = 0;
            v43 = 0;
            v40 = 0;
            if ( FIELD_U8(dword_60CC6D8C, 17) )
              return (_BYTE *)((int (__fastcall *)(int, float *, _DWORD))sub_60583208)(dword_60CAF15C, v37, 0);
            else
              return (_BYTE *)sub_60583000(dword_60CAF15C, v37, 0);
          }
        }
      }
    }
  }
  return result;
}
