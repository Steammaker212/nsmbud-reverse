/* sub_60924DD0
 * address: 0x60924DD0   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60924DD0(_DWORD *a1, int a2, int a3, unsigned int a4)
{
  int v8; // r5
  _QWORD *v9; // r11
  _QWORD *v10; // r7
  __int64 v11; // d17
  __int64 v12; // d17
  __int64 v13; // d17
  __int64 v14; // d17
  __int64 v15; // d17
  __int64 v16; // d17
  __int64 v17; // d17
  float v18; // s0
  float v19; // s6
  __int64 v20; // d17
  __int64 v21; // d17
  __int64 v22; // d17
  __int64 v23; // d17
  __int64 v24; // d17
  __int64 v25; // d17
  __int64 v26; // d17
  __int64 v27; // d17
  __int64 v28; // d17
  __int64 v29; // d17
  int result; // r0
  int *v31; // r6
  int v32; // r7
  int v33; // t1
  _QWORD v34[24]; // [sp+4h] [bp-C4h] BYREF

  v8 = a1[126];
  v9 = (_QWORD *)(a2 + 32);
  v11 = FIELD_U64(a2, 8);
  v10 = (_QWORD *)(a2 + 16);
  if ( a1[125] > a4 )
    v8 += 184 * a4;
  *(_QWORD *)v8 = *(_QWORD *)a2;
  FIELD_U64(v8, 8) = v11;
  v12 = FIELD_U64(a2, 24);
  FIELD_U64(v8, 16) = *v10;
  FIELD_U64(v8, 24) = v12;
  v13 = FIELD_U64(a2, 40);
  FIELD_U64(v8, 32) = *v9;
  FIELD_U64(v8, 40) = v13;
  sub_601B59CC((float *)(v8 + 48), (float *)a2);
  v14 = FIELD_U64(a3, 8);
  FIELD_U64(v8, 96) = *(_QWORD *)a3;
  FIELD_U64(v8, 104) = v14;
  v15 = FIELD_U64(a3, 24);
  FIELD_U64(v8, 112) = FIELD_U64(a3, 16);
  FIELD_U64(v8, 120) = v15;
  v16 = FIELD_U64(a3, 40);
  FIELD_U64(v8, 128) = FIELD_U64(a3, 32);
  FIELD_U64(v8, 136) = v16;
  v17 = FIELD_U64(a3, 56);
  FIELD_U64(v8, 144) = FIELD_U64(a3, 48);
  FIELD_U64(v8, 152) = v17;
  FIELD_U32(v8, 168) = 0;
  v18 = (float)(1.0 - FIELD_F32(a3, 40)) / (float)(FIELD_F32(a3, 40) + 1.0);
  v19 = (float)(FIELD_F32(a3, 44) * 0.5) * (float)(v18 + 1.0);
  FIELD_F32(v8, 164) = v19;
  FIELD_F32(v8, 160) = (float)-v19 / v18;
  v20 = FIELD_U64(a2, 8);
  v34[0] = *(_QWORD *)a2;
  v34[1] = v20;
  v21 = FIELD_U64(a2, 24);
  v34[2] = *v10;
  v34[3] = v21;
  v22 = FIELD_U64(a2, 40);
  v34[4] = *v9;
  v34[5] = v22;
  v23 = FIELD_U64(v8, 56);
  v34[6] = FIELD_U64(v8, 48);
  v34[7] = v23;
  v24 = FIELD_U64(v8, 72);
  v34[8] = FIELD_U64(v8, 64);
  v34[9] = v24;
  v25 = FIELD_U64(v8, 88);
  v34[10] = FIELD_U64(v8, 80);
  v34[11] = v25;
  v26 = FIELD_U64(a3, 8);
  v34[12] = *(_QWORD *)a3;
  v34[13] = v26;
  v27 = FIELD_U64(a3, 24);
  v34[14] = FIELD_U64(a3, 16);
  v34[15] = v27;
  v28 = FIELD_U64(a3, 40);
  v34[16] = FIELD_U64(a3, 32);
  v34[17] = v28;
  v29 = FIELD_U64(a3, 56);
  v34[18] = FIELD_U64(a3, 48);
  v34[19] = v29;
  result = a1[122];
  if ( result )
  {
    v31 = (int *)a1[124];
    v32 = 4 * result;
    do
    {
      v33 = *v31++;
      result = (*(int (__fastcall **)(int, _QWORD *, unsigned int))(*(_DWORD *)v33 + 52))(v33, v34, a4);
      v32 -= 4;
    }
    while ( v32 );
  }
  return result;
}
