/* sub_604B4370
 * address: 0x604B4370   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_604B4370(int a1)
{
  _BYTE *result; // r0
  int v3; // t1
  int v4; // r1
  int v5; // r6
  int v6; // r0
  int v7; // r2
  float v8; // s0
  float v9; // s4
  float v10; // s6
  float v11; // s2
  float v12; // s16
  float v13; // s18
  int v14; // r3
  int v15; // r2
  int v16; // r0
  float v17; // s0
  float v18; // s2
  int v19; // r2
  int v20; // r1
  int v21; // r0
  float v22; // s4
  float v23; // s6
  int v24; // r1
  int v25; // r3
  int v26; // r0
  int v27; // r2
  int v28; // r3
  float v29; // s0
  int v30; // r1
  int v31; // r2
  int v32; // r1
  int v33; // r1
  int v34; // [sp+0h] [bp-40h] BYREF
  int v35; // [sp+4h] [bp-3Ch]
  float v36; // [sp+8h] [bp-38h] BYREF
  float v37; // [sp+Ch] [bp-34h]

  v3 = FIELD_U8(a1, 14945);
  result = (_BYTE *)(a1 + 14945);
  if ( v3 )
  {
    *result = 0;
    v4 = FIELD_U32(a1, 604);
    v5 = FIELD_U32(a1, 532);
    v6 = FIELD_U32(a1, 580);
    v7 = FIELD_U32(a1, 620);
    v8 = FIELD_F32(v5, 24);
    v9 = FIELD_F32(v4, 24);
    v10 = FIELD_F32(v4, 28);
    v11 = FIELD_F32(v5, 28);
    v12 = FIELD_F32(v6, 24);
    v13 = FIELD_F32(v6, 28);
    v14 = FIELD_U32(v7, 56);
    v15 = FIELD_U32(v7, 60);
    v34 = v14;
    v35 = v15;
    v36 = v12 + (float)(v9 + v8);
    v37 = v13 + (float)(v10 + v11);
    ((void (__fastcall *)(int, float *, int *, int))sub_606EA1A4)(dword_60CBC000, &v36, &v34, 1);
    v16 = FIELD_U32(a1, 616);
    v17 = *(float *)(FIELD_U32(a1, 532) + 24);
    v18 = *(float *)(FIELD_U32(a1, 532) + 28);
    v19 = FIELD_U32(a1, 600);
    v20 = FIELD_U32(v16, 56);
    v21 = FIELD_U32(v16, 60);
    v22 = FIELD_F32(v19, 24);
    v23 = FIELD_F32(v19, 28);
    v34 = v20;
    v35 = v21;
    v36 = v12 + (float)(v22 + v17);
    v37 = v13 + (float)(v23 + v18);
    ((void (__fastcall *)(int, float *, int *, int))sub_606EA1A4)(dword_60CBC000, &v36, &v34, 2);
    v24 = 3;
    v25 = 11;
    v26 = FIELD_U8(a1, 14941);
    if ( !FIELD_U8(a1, 14941) )
    {
      v25 = 10;
      v24 = 2;
    }
    v27 = *(_DWORD *)(a1 + 600 + 4 * v24);
    v28 = *(_DWORD *)(a1 + 532 + 4 * v25);
    v29 = FIELD_F32(v27, 28) + FIELD_F32(v28, 28);
    v36 = FIELD_F32(v27, 24) + FIELD_F32(v28, 24);
    v37 = v29;
    v30 = *(_DWORD *)(a1 + 616 + 4 * v24);
    v31 = FIELD_U32(v30, 56);
    v32 = FIELD_U32(v30, 60);
    v34 = v31;
    v35 = v32;
    v33 = 5;
    if ( !v26 )
      v33 = 4;
    if ( !*(_BYTE *)(a1 + v33 + 14792) )
      v37 = v29 + 10000.0;
    return (_BYTE *)((int (__fastcall *)(int, float *, int *, int))sub_606EA1A4)(dword_60CBC000, &v36, &v34, 3);
  }
  return result;
}
