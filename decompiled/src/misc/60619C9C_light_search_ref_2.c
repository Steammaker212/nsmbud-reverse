/* light_search_ref_2
 * address: 0x60619C9C   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall light_search_ref_2(int a1)
{
  unsigned int v2; // r5
  unsigned int v3; // r0
  int v4; // r3
  float *v5; // r1
  float v6; // s14
  float v7; // s0
  float v8; // s10
  float v9; // s6
  float v10; // s5
  float v11; // s13
  float v12; // s1
  float v13; // s9
  _DWORD **v14; // r4
  _DWORD *v15; // t1
  _DWORD *v16; // r0
  int v17; // r1
  int (*v18)(void); // r2
  const char *v19; // r1
  int v20; // r5
  int v22; // [sp+4h] [bp-74h] BYREF
  float32x2_t v23[6]; // [sp+8h] [bp-70h] BYREF
  float v24[16]; // [sp+38h] [bp-40h] BYREF

  v2 = FIELD_U32(a1, 160);
  v3 = FIELD_U32(a1, 156);
  v4 = (v3 >> 20) & 0xFF0;
  v5 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v6 = (float)(v3 & 0xFFFFFF);
  v7 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v8 = (float)(-0.00030118 * 0.0) + 1.0;
  v9 = (float)(0.024541 * 0.0) + 0.0;
  v10 = v5[2] + (float)(v7 * v5[3]);
  v11 = *(float *)((char *)&sinLutTable[2] + v4)
      + (float)((float)(v6 * 0.000000059605) * *(float *)((char *)&sinLutTable[3] + v4));
  v12 = *v5 + (float)(v7 * v5[1]);
  v13 = *(float *)((char *)sinLutTable + v4)
      + (float)(*(float *)((char *)&sinLutTable[1] + v4) * (float)(v6 * 0.000000059605));
  v24[0] = v10 * v8;
  v24[4] = v10 * v9;
  v24[8] = -v12;
  v24[1] = (float)((float)(v13 * v12) * v8) - (float)(v11 * v9);
  v24[5] = (float)(v11 * v8) + (float)((float)(v13 * v12) * v9);
  v24[9] = v13 * v10;
  v24[2] = (float)(v12 * (float)(v11 * v8)) + (float)(v13 * v9);
  v24[6] = (float)(v12 * (float)(v11 * v9)) - (float)(v13 * v8);
  v24[10] = v11 * v10;
  v24[3] = FIELD_F32(a1, 108);
  v24[7] = FIELD_F32(a1, 112);
  v24[11] = FIELD_F32(a1, 116);
  v15 = *(_DWORD **)(a1 + 6136);
  v14 = (_DWORD **)(a1 + 6136);
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v15 + 60))(*v15, v24);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v14 + 52))(**v14);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v14 + 56))(**v14);
  v16 = v14 - 1493;
  v17 = (unsigned int)*(v14 - 1529) & 1;
  if ( v17 )
    v16 = v14 + 122;
  v22 = (int)(float)((float)(2147500000.0 * 90.0) / 180.0) - *v16;
  v18 = *(int (**)(void))(*(_DWORD *)**v14 + 84);
  v23[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  if ( v17 )
    v19 = "light_search_obake_head";
  else
    v19 = "light_search_head";
  v23[0].n64_u32[1] = (unsigned __int32)v19;
  v20 = v18();
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(*(_DWORD *)**v14 + 108))(**v14, v20, v23);
  Mtx34_rotateZ(v23, (unsigned int *)&v22);
  return (*(int (__fastcall **)(_DWORD, int, float32x2_t *))(*(_DWORD *)**v14 + 104))(**v14, v20, v23);
}
