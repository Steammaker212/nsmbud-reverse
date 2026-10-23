/* sub_60130BE0
 * address: 0x60130BE0   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60130BE0(unsigned int *a1)
{
  unsigned int *v1; // r4
  unsigned int *v2; // r6
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r6
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
  _DWORD *v20; // t1
  float v21; // s4
  float v22; // s2
  int v23; // r0
  int (__fastcall *v24)(int, float32x2_t *); // r2
  int v25; // r5
  float32x2_t v27[6]; // [sp+0h] [bp-88h] BYREF
  float v28; // [sp+30h] [bp-58h] BYREF
  float v29; // [sp+34h] [bp-54h]
  float v30; // [sp+38h] [bp-50h]
  float v31[18]; // [sp+40h] [bp-48h] BYREF

  v1 = a1;
  v2 = a1 + 39;
  v3 = a1[39];
  v4 = v2[1];
  v5 = v2[2];
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
  v31[0] = v15 * v14;
  v31[4] = v15 * v16;
  v31[8] = -v17;
  v31[1] = (float)((float)(v19 * v17) * v14) - (float)(v18 * v16);
  v31[5] = (float)(v18 * v14) + (float)((float)(v19 * v17) * v16);
  v31[9] = v19 * v15;
  v31[2] = (float)(v17 * (float)(v18 * v14)) + (float)(v19 * v16);
  v31[6] = (float)(v17 * (float)(v18 * v16)) - (float)(v19 * v14);
  v31[10] = v18 * v15;
  LODWORD(v31[3]) = v1[27];
  LODWORD(v31[7]) = v1[28];
  LODWORD(v31[11]) = v1[29];
  v20 = (_DWORD *)v1[1526];
  v1 += 1526;
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v20 + 60))(*v20, v31);
  v30 = *((float *)v1 - 1488);
  v29 = *((float *)v1 - 1489);
  v28 = *((float *)v1 - 1490);
  v21 = *((float *)v1 + 38) - *((float *)v1 - 1489);
  v22 = *((float *)v1 + 39) - *((float *)v1 - 1488);
  v28 = v28 + (float)((float)(*((float *)v1 + 37) - *((float *)v1 - 1490)) * 0.2);
  v29 = v29 + (float)(v21 * 0.2);
  v30 = v30 + (float)(v22 * 0.2);
  (*(void (__fastcall **)(_DWORD, float *))(**(_DWORD **)*v1 + 68))(*(_DWORD *)*v1, &v28);
  sub_604218E0((_DWORD *)*v1);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 52))(*(_DWORD *)*v1);
  v23 = *(_DWORD *)*v1;
  v24 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v23 + 84);
  v27[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v27[0].n64_u32[1] = (unsigned __int32)"Head";
  v25 = v24(v23, v27);
  sub_604302C8(*(_DWORD *)*v1, v25, v27);
  Mtx34_rotateZ(v27, v1 + 1);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(**(_DWORD **)*v1 + 96))(
    *(_DWORD *)*v1,
    v25,
    v27,
    &dword_60B3B98C);
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 56))(*(_DWORD *)*v1);
}
