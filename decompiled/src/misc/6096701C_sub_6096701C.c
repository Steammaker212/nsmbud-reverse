/* sub_6096701C
 * address: 0x6096701C   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6096701C(int result, _QWORD *a2, _QWORD *a3, int *a4, float a5, float a6, float a7)
{
  int v9; // r5
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s3
  float v17; // s4
  float v18; // s5
  float v19; // s6
  float v20; // s7
  float v21; // s8
  _QWORD *v22; // r1
  __int64 v23; // d17
  _QWORD *v24; // r6
  __int64 v25; // d17
  __int64 v26; // d17
  __int64 v27; // d17
  __int64 v28; // d17
  __int64 v29; // d17
  __int64 v30; // d17
  int v31; // [sp+0h] [bp-70h]
  int v32; // [sp+4h] [bp-6Ch]
  int v33; // [sp+8h] [bp-68h]
  int v34; // [sp+Ch] [bp-64h]
  int v35; // [sp+10h] [bp-60h]
  int v36; // [sp+14h] [bp-5Ch]
  int v37; // [sp+18h] [bp-58h]
  int v38; // [sp+1Ch] [bp-54h]
  int v39; // [sp+20h] [bp-50h]
  int v40; // [sp+24h] [bp-4Ch]
  _DWORD v41[3]; // [sp+28h] [bp-48h] BYREF
  _DWORD v42[3]; // [sp+34h] [bp-3Ch] BYREF
  int v43; // [sp+40h] [bp-30h] BYREF
  int v44; // [sp+44h] [bp-2Ch]
  int v45; // [sp+48h] [bp-28h]

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
    v22 = a2 + 4;
    v23 = FIELD_U64(result, 8);
    *a2 = *(_QWORD *)result;
    a2[1] = v23;
    v24 = a2 + 2;
    v25 = FIELD_U64(result, 24);
    result += 32;
    *v24 = FIELD_U64(v9, 16);
    v24[1] = v25;
    v26 = FIELD_U64(v9, 40);
    *v22 = FIELD_U64(v9, 32);
    v22[1] = v26;
    goto LABEL_6;
  }
  sub_609673FC((int)&v43, *a4, a4[1], a4[2], a4[3], a5, a6, a7);
  v42[0] = v43;
  v42[1] = v44;
  v42[2] = v45;
  sub_609673FC((int)&v43, *(_DWORD *)v9, FIELD_U32(v9, 4), FIELD_U32(v9, 8), FIELD_U32(v9, 12), v10, v11, v12);
  v41[0] = v43;
  v41[1] = v44;
  v41[2] = v45;
  v40 = FIELD_U32(v9, 4);
  v32 = FIELD_U32(v9, 16);
  v33 = FIELD_U32(v9, 20);
  v34 = FIELD_U32(v9, 24);
  v35 = FIELD_U32(v9, 28);
  v36 = FIELD_U32(v9, 32);
  v37 = FIELD_U32(v9, 36);
  v38 = FIELD_U32(v9, 40);
  v39 = FIELD_U32(v9, 44);
  v31 = FIELD_U32(v9, 12);
  sub_60967488(v13, v14, v15, v16, v17, v18, v19, v20, v21);
  result = ((int (__fastcall *)(_QWORD *, int *, _DWORD *, _DWORD *, int, int, int, int, int, int, int, int, int, int))sub_609674EC)(
             a2,
             &v43,
             v41,
             v42,
             v31,
             v32,
             v33,
             v34,
             v35,
             v36,
             v37,
             v38,
             v39,
             v40);
  if ( a3 )
  {
LABEL_7:
    v27 = FIELD_U64(v9, 56);
    *a3 = FIELD_U64(v9, 48);
    a3[1] = v27;
    v28 = FIELD_U64(v9, 72);
    a3[2] = FIELD_U64(v9, 64);
    a3[3] = v28;
    v29 = FIELD_U64(v9, 88);
    a3[4] = FIELD_U64(v9, 80);
    a3[5] = v29;
    v30 = FIELD_U64(v9, 104);
    a3[6] = FIELD_U64(v9, 96);
    a3[7] = v30;
    return (int)(a3 + 6);
  }
  return result;
}
