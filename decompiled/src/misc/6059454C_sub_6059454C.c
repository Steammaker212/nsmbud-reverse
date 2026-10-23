/* sub_6059454C
 * address: 0x6059454C   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6059454C(int a1)
{
  int **v1; // r4
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
  int *v20; // t1
  int v21; // r0
  int (__fastcall *v22)(int, int (***)()); // r2
  int v23; // r0
  int v24; // r0
  int (__fastcall *v25)(int, int (***)()); // r2
  int v26; // r0
  int *result; // r0
  int (**v28)(); // [sp+0h] [bp-70h] BYREF
  const char *v29; // [sp+4h] [bp-6Ch]
  int *v30; // [sp+Ch] [bp-64h]
  int *v31; // [sp+1Ch] [bp-54h]
  int *v32; // [sp+2Ch] [bp-44h]
  float v33[16]; // [sp+30h] [bp-40h] BYREF

  v1 = (int **)a1;
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
  v33[0] = v15 * v14;
  v33[4] = v15 * v16;
  v33[8] = -v17;
  v33[1] = (float)((float)(v19 * v17) * v14) - (float)(v18 * v16);
  v33[5] = (float)(v18 * v14) + (float)((float)(v19 * v17) * v16);
  v33[9] = v19 * v15;
  v33[2] = (float)(v17 * (float)(v18 * v14)) + (float)(v19 * v16);
  v33[6] = (float)(v17 * (float)(v18 * v16)) - (float)(v19 * v14);
  v33[10] = v18 * v15;
  LODWORD(v33[3]) = v1[27];
  LODWORD(v33[7]) = v1[28];
  LODWORD(v33[11]) = v1[29];
  v20 = v1[1526];
  v1 += 1526;
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)*v20 + 60))(*v20, v33);
  (*(void (__fastcall **)(int, int **))(*(_DWORD *)**v1 + 68))(**v1, v1 + 540);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v1 + 52))(**v1);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v1 + 56))(**v1);
  v21 = **v1;
  v22 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v21 + 84);
  v28 = &sead__SafeStringBase__vtable;
  v29 = "tangue_end";
  v23 = v22(v21, &v28);
  (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v1 + 108))(**v1, v23, &v28);
  v1[424] = v30;
  v1[425] = v31;
  v1[426] = v32;
  v24 = **v1;
  v25 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v24 + 84);
  v28 = &sead__SafeStringBase__vtable;
  v29 = "tangue";
  v26 = v25(v24, &v28);
  (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v1 + 108))(**v1, v26, &v28);
  v1[427] = v30;
  v1[428] = v31;
  result = v32;
  v1[429] = v32;
  return result;
}
