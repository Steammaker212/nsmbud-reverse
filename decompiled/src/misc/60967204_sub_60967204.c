/* sub_60967204
 * address: 0x60967204   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60967204(int result, _QWORD *a2, _QWORD *a3, int a4, float a5, float a6, float a7)
{
  int v9; // r5
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s3
  float v14; // s4
  float v15; // s5
  float v16; // s6
  float v17; // s7
  float v18; // s8
  _QWORD *v19; // r1
  __int64 v20; // d17
  _QWORD *v21; // r6
  __int64 v22; // d17
  __int64 v23; // d17
  __int64 v24; // d17
  __int64 v25; // d17
  __int64 v26; // d17
  __int64 v27; // d17
  int v28; // [sp+0h] [bp-68h]
  int v29; // [sp+4h] [bp-64h]
  int v30; // [sp+8h] [bp-60h]
  int v31; // [sp+Ch] [bp-5Ch]
  int v32; // [sp+10h] [bp-58h]
  int v33; // [sp+14h] [bp-54h]
  int v34; // [sp+18h] [bp-50h]
  int v35; // [sp+1Ch] [bp-4Ch]
  int v36; // [sp+20h] [bp-48h]
  int v37; // [sp+24h] [bp-44h]
  _DWORD v39[3]; // [sp+2Ch] [bp-3Ch] BYREF
  _DWORD v40[12]; // [sp+38h] [bp-30h] BYREF

  v9 = result;
  if ( !a2 )
  {
LABEL_6:
    if ( !a3 )
      return result;
    goto LABEL_7;
  }
  if ( !FIELD_U8(result, 112) )
  {
    v19 = a2 + 4;
    v20 = FIELD_U64(result, 8);
    *a2 = *(_QWORD *)result;
    a2[1] = v20;
    v21 = a2 + 2;
    v22 = FIELD_U64(result, 24);
    result += 32;
    *v21 = FIELD_U64(v9, 16);
    v21[1] = v22;
    v23 = FIELD_U64(v9, 40);
    *v19 = FIELD_U64(v9, 32);
    v19[1] = v23;
    goto LABEL_6;
  }
  sub_609673FC(
    (int)v40,
    *(_DWORD *)result,
    FIELD_U32(result, 4),
    FIELD_U32(result, 8),
    FIELD_U32(result, 12),
    a5,
    a6,
    a7);
  v39[0] = v40[0];
  v39[1] = v40[1];
  v39[2] = v40[2];
  v37 = FIELD_U32(v9, 4);
  v36 = FIELD_U32(v9, 44);
  v29 = FIELD_U32(v9, 16);
  v30 = FIELD_U32(v9, 20);
  v31 = FIELD_U32(v9, 24);
  v32 = FIELD_U32(v9, 28);
  v33 = FIELD_U32(v9, 32);
  v34 = FIELD_U32(v9, 36);
  v35 = FIELD_U32(v9, 40);
  v28 = FIELD_U32(v9, 12);
  sub_60967488(v10, v11, v12, v13, v14, v15, v16, v17, v18);
  result = ((int (__fastcall *)(_QWORD *, _DWORD *, _DWORD *, int, int, int, int, int, int, int, int, int, int, int, int))sub_609674EC)(
             a2,
             v40,
             v39,
             a4,
             v28,
             v29,
             v30,
             v31,
             v32,
             v33,
             v34,
             v35,
             v36,
             v37,
             a4);
  if ( a3 )
  {
LABEL_7:
    v24 = FIELD_U64(v9, 56);
    *a3 = FIELD_U64(v9, 48);
    a3[1] = v24;
    v25 = FIELD_U64(v9, 72);
    a3[2] = FIELD_U64(v9, 64);
    a3[3] = v25;
    v26 = FIELD_U64(v9, 88);
    a3[4] = FIELD_U64(v9, 80);
    a3[5] = v26;
    v27 = FIELD_U64(v9, 104);
    a3[6] = FIELD_U64(v9, 96);
    a3[7] = v27;
    return (int)(a3 + 6);
  }
  return result;
}
