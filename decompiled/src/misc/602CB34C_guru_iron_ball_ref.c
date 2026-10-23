/* guru_iron_ball_ref
 * address: 0x602CB34C   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall guru_iron_ball_ref(int *a1)
{
  int v2; // r6
  _DWORD *v3; // r4
  int v4; // r1
  int v5; // r2
  unsigned int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r3
  float *v9; // r7
  float *v10; // r5
  float *v11; // r0
  float v12; // s14
  float v13; // s2
  float v14; // s0
  float v15; // s10
  float v16; // s5
  float v17; // s6
  float v18; // s1
  float v19; // s13
  float v20; // s9
  int (__fastcall *v21)(_DWORD *, _DWORD *); // r2
  int v22; // r0
  int v23; // r1
  __int16 v24; // r2
  _DWORD v26[2]; // [sp+0h] [bp-60h] BYREF
  float v27[12]; // [sp+8h] [bp-58h] BYREF
  _DWORD v28[10]; // [sp+38h] [bp-28h] BYREF

  v2 = *a1;
  v3 = *(_DWORD **)a1[1];
  v4 = *(_DWORD *)(*a1 + 148);
  v5 = *(_DWORD *)(*a1 + 152);
  v28[0] = *(_DWORD *)(*a1 + 144);
  v28[1] = v4;
  v28[2] = v5;
  (*(void (__fastcall **)(_DWORD *, _DWORD *))(*v3 + 68))(v3, v28);
  v6 = FIELD_U32(v2, 156);
  v7 = FIELD_U32(v2, 160);
  v8 = FIELD_U32(v2, 164);
  v9 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0));
  v11 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v12 = (float)(v6 & 0xFFFFFF);
  v13 = (float)(v8 & 0xFFFFFF) * 0.000000059605;
  v14 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v15 = v10[2] + (float)(v13 * v10[3]);
  v16 = v9[2] + (float)(v14 * v9[3]);
  v17 = *v10 + (float)(v13 * v10[1]);
  v18 = *v9 + (float)(v14 * v9[1]);
  v19 = v11[2] + (float)((float)(v12 * 0.000000059605) * v11[3]);
  v20 = *v11 + (float)((float)(v12 * 0.000000059605) * v11[1]);
  v27[0] = v16 * v15;
  v27[4] = v16 * v17;
  v27[8] = -v18;
  v27[1] = (float)((float)(v20 * v18) * v15) - (float)(v19 * v17);
  v27[5] = (float)(v19 * v15) + (float)((float)(v20 * v18) * v17);
  v27[9] = v20 * v16;
  v27[2] = (float)(v18 * (float)(v19 * v15)) + (float)(v20 * v17);
  v27[6] = (float)(v18 * (float)(v19 * v17)) - (float)(v20 * v15);
  v27[10] = v19 * v16;
  v27[3] = FIELD_F32(v2, 108);
  v27[7] = FIELD_F32(v2, 112);
  v27[11] = FIELD_F32(v2, 116);
  (*(void (__fastcall **)(_DWORD *, float *))(*v3 + 60))(v3, v27);
  (*(void (__fastcall **)(_DWORD *))(*v3 + 52))(v3);
  v21 = *(int (__fastcall **)(_DWORD *, _DWORD *))(*v3 + 84);
  v26[0] = &sead__SafeStringBase__vtable;
  v26[1] = "guru_iron_ball";
  v22 = v21(v3, v26);
  v23 = v3[17];
  FIELD_U32(v23, 44) = a1 + 1531;
  v24 = -1;
  if ( v22 << 24 > -16777216 && FIELD_U16(v23, 40) > (char)v22 )
    v24 = (char)v22;
  FIELD_U16(v23, 42) = v24;
  return (*(int (__fastcall **)(_DWORD *))(*v3 + 56))(v3);
}
