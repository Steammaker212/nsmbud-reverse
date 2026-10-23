/* sub_601EC704
 * address: 0x601EC704   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EC704(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r1
  unsigned int v4; // r2
  int v5; // r5
  int v6; // s2
  float *v7; // r7
  float *v8; // r1
  float v9; // s14
  float v10; // s0
  float v11; // s2
  float v12; // s10
  float v13; // s5
  float v14; // s6
  float v15; // s1
  float v16; // s13
  float v17; // s9
  int v18; // r0
  int (__fastcall *v19)(int, _DWORD *); // r2
  int v20; // r7
  int v21; // r0
  int (__fastcall *v22)(int, int (***)()); // r2
  int v23; // r7
  int v24; // r0
  int (__fastcall *v25)(int, int (***)()); // r2
  int v26; // r7
  int v27; // r0
  int (__fastcall *v28)(int, int (***)()); // r2
  int v29; // r7
  int (**v31)(); // [sp+0h] [bp-98h] BYREF
  const char *v32; // [sp+4h] [bp-94h]
  _DWORD v33[12]; // [sp+8h] [bp-90h] BYREF
  _DWORD v34[4]; // [sp+38h] [bp-60h] BYREF
  float v35[20]; // [sp+48h] [bp-50h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 268));
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 268) + 68))(**(_DWORD **)(a1 + 268), a1 + 128);
  v2 = FIELD_U32(a1, 176);
  v3 = FIELD_U32(a1, 180);
  v4 = FIELD_U32(a1, 184);
  v5 = (v4 >> 20) & 0xFF0;
  v6 = v3 & 0xFFFFFF;
  v7 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v9 = (float)(v2 & 0xFFFFFF);
  v10 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v11 = (float)(unsigned int)v6 * 0.000000059605;
  v12 = *(float *)((char *)&sinLutTable[2] + v5) + (float)(v10 * *(float *)((char *)&sinLutTable[3] + v5));
  v13 = v7[2] + (float)(v11 * v7[3]);
  v14 = *(float *)((char *)sinLutTable + v5) + (float)(v10 * *(float *)((char *)&sinLutTable[1] + v5));
  v15 = *v7 + (float)(v11 * v7[1]);
  v16 = v8[2] + (float)((float)(v9 * 0.000000059605) * v8[3]);
  v17 = *v8 + (float)((float)(v9 * 0.000000059605) * v8[1]);
  v35[0] = v13 * v12;
  v35[4] = v13 * v14;
  v35[8] = -v15;
  v35[1] = (float)((float)(v17 * v15) * v12) - (float)(v16 * v14);
  v35[5] = (float)(v16 * v12) + (float)((float)(v17 * v15) * v14);
  v35[9] = v17 * v13;
  v35[2] = (float)(v15 * (float)(v16 * v12)) + (float)(v17 * v14);
  v35[6] = (float)(v15 * (float)(v16 * v14)) - (float)(v17 * v12);
  v35[10] = v16 * v13;
  v35[3] = FIELD_F32(a1, 80);
  v35[7] = FIELD_F32(a1, 84);
  v35[11] = FIELD_F32(a1, 88);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 268) + 60))(**(_DWORD **)(a1 + 268), v35);
  sub_604218E0(*(_DWORD **)(a1 + 268));
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 52))(**(_DWORD **)(a1 + 268));
  if ( FIELD_U8(a1, 496) )
  {
    memset(v34, 0, 12);
    v18 = **(_DWORD **)(a1 + 268);
    v19 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v18 + 84);
    v33[0] = &sead__SafeStringBase__vtable;
    v33[1] = "fukuro_root";
    v20 = v19(v18, v33);
    sub_604302C8(**(_DWORD **)(a1 + 268), v20, v33);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *, _DWORD *))(***(_DWORD ***)(a1 + 268) + 96))(
      **(_DWORD **)(a1 + 268),
      v20,
      v33,
      v34);
    v21 = **(_DWORD **)(a1 + 268);
    v22 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v21 + 84);
    v31 = &sead__SafeStringBase__vtable;
    v32 = "up0";
    v23 = v22(v21, &v31);
    sub_604302C8(**(_DWORD **)(a1 + 268), v23, v33);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *, _DWORD *))(***(_DWORD ***)(a1 + 268) + 96))(
      **(_DWORD **)(a1 + 268),
      v23,
      v33,
      v34);
    v24 = **(_DWORD **)(a1 + 268);
    v25 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v24 + 84);
    v31 = &sead__SafeStringBase__vtable;
    v32 = "bottom0";
    v26 = v25(v24, &v31);
    sub_604302C8(**(_DWORD **)(a1 + 268), v26, v33);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *, _DWORD *))(***(_DWORD ***)(a1 + 268) + 96))(
      **(_DWORD **)(a1 + 268),
      v26,
      v33,
      v34);
    v27 = **(_DWORD **)(a1 + 268);
    v28 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v27 + 84);
    v31 = &sead__SafeStringBase__vtable;
    v32 = "bottom1";
    v29 = v28(v27, &v31);
    sub_604302C8(**(_DWORD **)(a1 + 268), v29, v33);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *, _DWORD *))(***(_DWORD ***)(a1 + 268) + 96))(
      **(_DWORD **)(a1 + 268),
      v29,
      v33,
      v34);
  }
  return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 56))(**(_DWORD **)(a1 + 268));
}
