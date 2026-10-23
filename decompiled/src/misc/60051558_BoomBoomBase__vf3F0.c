/* BoomBoomBase__vf3F0
 * address: 0x60051558   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BE8
// 
// Overridden by: None
int __fastcall BoomBoomBase__vf3F0(int a1)
{
  int v2; // r5
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r5
  int v6; // s2
  int v7; // s14
  float *v8; // r3
  float *v9; // r1
  float *v10; // r0
  float v11; // s14
  float v12; // s0
  float v13; // s2
  float v14; // s10
  float v15; // s5
  float v16; // s6
  float v17; // s1
  float v18; // s13
  float v19; // s9
  _DWORD **v20; // r5
  float v21; // s4
  float v22; // s6
  float v23; // s2
  float v25; // [sp+0h] [bp-50h] BYREF
  float v26; // [sp+4h] [bp-4Ch]
  float v27; // [sp+8h] [bp-48h]
  float v28[16]; // [sp+10h] [bp-40h] BYREF

  v2 = a1 + 156;
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_U32(v2, 4);
  v5 = FIELD_U32(v2, 8);
  v6 = v4 & 0xFFFFFF;
  v7 = v3 & 0xFFFFFF;
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v11 = (float)(unsigned int)v7;
  v12 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(unsigned int)v6 * 0.000000059605;
  v14 = v8[2] + (float)(v12 * v8[3]);
  v15 = v9[2] + (float)(v13 * v9[3]);
  v16 = *v8 + (float)(v12 * v8[1]);
  v17 = *v9 + (float)(v13 * v9[1]);
  v18 = v10[2] + (float)((float)(v11 * 0.000000059605) * v10[3]);
  v19 = *v10 + (float)((float)(v11 * 0.000000059605) * v10[1]);
  v28[0] = v15 * v14;
  v28[4] = v15 * v16;
  v28[8] = -v17;
  v28[1] = (float)((float)(v19 * v17) * v14) - (float)(v18 * v16);
  v28[5] = (float)(v18 * v14) + (float)((float)(v19 * v17) * v16);
  v28[9] = v19 * v15;
  v28[2] = (float)(v17 * (float)(v18 * v14)) + (float)(v19 * v16);
  v28[6] = (float)(v17 * (float)(v18 * v16)) - (float)(v19 * v14);
  v28[10] = v18 * v15;
  v28[3] = FIELD_F32(a1, 108);
  v28[7] = FIELD_F32(a1, 112);
  v28[11] = FIELD_F32(a1, 116);
  v20 = (_DWORD **)(a1 + 7204);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 7204) + 60))(**(_DWORD **)(a1 + 7204), v28);
  v27 = FIELD_F32(a1, 152);
  v26 = FIELD_F32(a1, 148);
  v25 = FIELD_F32(a1, 144);
  if ( !FIELD_U8(a1, 6313) )
  {
    v21 = FIELD_F32(a1, 152);
    v22 = FIELD_F32(a1, 6700);
    v23 = FIELD_F32(a1, 6696) - FIELD_F32(a1, 148);
    v25 = v25 + (float)((float)(FIELD_F32(a1, 6692) - FIELD_F32(a1, 144)) * 0.65);
    v26 = v26 + (float)(v23 * 0.65);
    v27 = v27 + (float)((float)(v22 - v21) * 0.65);
  }
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v20 + 68))(**v20, &v25);
  return sub_60421880(*v20);
}
