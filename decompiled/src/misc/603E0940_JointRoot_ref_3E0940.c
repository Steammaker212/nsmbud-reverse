/* JointRoot_ref_3E0940
 * address: 0x603E0940   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall JointRoot_ref_3E0940(float *a1)
{
  float *v1; // r4
  float v2; // r8
  float v3; // r12
  float v4; // lr
  unsigned int v5; // r3
  unsigned int v6; // r7
  unsigned int v7; // r6
  int v8; // r5
  float *v9; // r0
  float *v10; // r2
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s12
  float v15; // s5
  float v16; // s8
  float v17; // s1
  float v18; // s9
  float v19; // s13
  _DWORD *v20; // t1
  int v21; // r0
  float v22; // s14
  float v23; // s1
  void (__fastcall *v24)(int, float *); // r2
  int v25; // r0
  unsigned __int8 (__fastcall *v26)(int, float *); // r2
  int v27; // r5
  float v28; // s0
  _BYTE v30[12]; // [sp+4h] [bp-84h] BYREF
  float v31; // [sp+10h] [bp-78h] BYREF
  float v32; // [sp+14h] [bp-74h]
  float v33; // [sp+18h] [bp-70h]
  float v34; // [sp+1Ch] [bp-6Ch]
  float v35; // [sp+20h] [bp-68h]
  float v36; // [sp+24h] [bp-64h]
  float v37; // [sp+28h] [bp-60h]
  float v38; // [sp+2Ch] [bp-5Ch]
  float v39; // [sp+30h] [bp-58h]
  float v40; // [sp+34h] [bp-54h]
  float v41; // [sp+38h] [bp-50h]
  float v42; // [sp+3Ch] [bp-4Ch]
  float v43[18]; // [sp+40h] [bp-48h] BYREF

  v1 = a1;
  v2 = a1[27];
  v3 = a1[28];
  v4 = a1[29];
  v5 = *((_DWORD *)a1 + 39);
  v6 = *((_DWORD *)a1 + 40);
  v7 = *((_DWORD *)a1 + 41);
  v8 = (v7 >> 20) & 0xFF0;
  v9 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v11 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v14 = *(float *)((char *)&sinLutTable[2] + v8) + (float)(v11 * *(float *)((char *)&sinLutTable[3] + v8));
  v15 = v10[2] + (float)(v12 * v10[3]);
  v16 = *(float *)((char *)sinLutTable + v8) + (float)(v11 * *(float *)((char *)&sinLutTable[1] + v8));
  v17 = *v10 + (float)(v12 * v10[1]);
  v18 = *v9 + (float)(v13 * v9[1]);
  v19 = v9[2] + (float)(v13 * v9[3]);
  v43[0] = (float)(v15 * v14) + (float)(v18 * (float)(v17 * v16));
  v43[4] = v19 * v16;
  v43[8] = (float)(v18 * (float)(v15 * v16)) - (float)(v17 * v14);
  v43[1] = (float)(v18 * (float)(v17 * v14)) - (float)(v15 * v16);
  v43[5] = v19 * v14;
  v43[9] = (float)(v17 * v16) + (float)(v18 * (float)(v15 * v14));
  v43[2] = v19 * v17;
  v43[6] = -v18;
  v43[10] = v19 * v15;
  v43[3] = v2;
  v43[7] = v3;
  v43[11] = v4;
  v20 = *((_DWORD **)v1 + 1890);
  v1 += 1890;
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v20 + 60))(*v20, v43);
  v21 = **(_DWORD **)v1;
  v22 = v1[158] + (float)((float)(v1[428] - *(v1 - 1853)) * 0.5);
  v23 = v1[159] + (float)((float)(v1[429] - *(v1 - 1852)) * 0.5);
  v24 = *(void (__fastcall **)(int, float *))(*(_DWORD *)v21 + 68);
  v31 = v1[157] + (float)((float)(v1[427] - *(v1 - 1854)) * 0.5);
  v32 = v22;
  v33 = v23;
  v24(v21, &v31);
  j_ModelWrapper_updateAnims(*(_DWORD *)v1);
  sub_604218E0(*(_DWORD **)v1);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)v1 + 52))(**(_DWORD **)v1);
  v25 = **(_DWORD **)v1;
  v26 = *(unsigned __int8 (__fastcall **)(int, float *))(*(_DWORD *)v25 + 84);
  v31 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v32 = COERCE_FLOAT("JointRoot");
  v27 = v26(v25, &v31);
  (*(void (__fastcall **)(_DWORD, int, float *, _BYTE *))(***(_DWORD ***)v1 + 100))(**(_DWORD **)v1, v27, &v31, v30);
  v28 = *(v1 - 313) + -192.0;
  v34 = v34 + (float)((float)((float)(v32 * 0.0) + (float)(v31 * v28)) + (float)(v33 * 0.0));
  v38 = v38 + (float)((float)((float)(v36 * 0.0) + (float)(v28 * v35)) + (float)(v37 * 0.0));
  v42 = v42 + (float)((float)((float)(v40 * 0.0) + (float)(v28 * v39)) + (float)(v41 * 0.0));
  (*(void (__fastcall **)(_DWORD, int, float *, _BYTE *))(***(_DWORD ***)v1 + 96))(**(_DWORD **)v1, v27, &v31, v30);
  return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)v1 + 56))(**(_DWORD **)v1);
}
