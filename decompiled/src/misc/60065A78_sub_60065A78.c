/* sub_60065A78
 * address: 0x60065A78   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60065A78(int a1)
{
  _DWORD **v1; // r4
  int v2; // r7
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r7
  int v6; // s2
  int v7; // s14
  float *v8; // r3
  float *v9; // r1
  float *v10; // r0
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s10
  float v15; // s5
  float v16; // s6
  float v17; // s1
  float v18; // s8
  float v19; // s12
  float v20; // s13
  float v21; // s9
  float v22; // s0
  _DWORD **v23; // r7
  float v24; // s8
  float v25; // s0
  float v26; // s4
  float v27; // s2
  float v28; // s6
  _DWORD *v29; // t1
  _DWORD v31[3]; // [sp+4h] [bp-5Ch] BYREF
  float v32; // [sp+10h] [bp-50h] BYREF
  float v33; // [sp+14h] [bp-4Ch]
  float v34; // [sp+18h] [bp-48h]
  float v35; // [sp+1Ch] [bp-44h]
  float v36; // [sp+20h] [bp-40h]
  float v37; // [sp+24h] [bp-3Ch]
  float v38; // [sp+28h] [bp-38h]
  float v39; // [sp+2Ch] [bp-34h]
  float v40; // [sp+30h] [bp-30h]
  float v41; // [sp+34h] [bp-2Ch]
  float v42; // [sp+38h] [bp-28h]
  float v43; // [sp+3Ch] [bp-24h]

  v1 = (_DWORD **)a1;
  v2 = a1 + 156;
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_U32(v2, 4);
  v5 = FIELD_U32(v2, 8);
  v6 = v4 & 0xFFFFFF;
  v7 = v3 & 0xFFFFFF;
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v11 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(unsigned int)v6 * 0.000000059605;
  v13 = (float)(unsigned int)v7 * 0.000000059605;
  v14 = v8[2] + (float)(v11 * v8[3]);
  v15 = v9[2] + (float)(v12 * v9[3]);
  v16 = *v8 + (float)(v11 * v8[1]);
  v17 = *v9 + (float)(v12 * v9[1]);
  v18 = *((float *)v1 + 28);
  v19 = *((float *)v1 + 29);
  v20 = v10[2] + (float)(v13 * v10[3]);
  v21 = *v10 + (float)(v13 * v10[1]);
  v22 = *((float *)v1 + 27) + 0.0;
  v32 = v15 * v14;
  v36 = v15 * v16;
  v40 = -v17;
  v33 = (float)((float)(v21 * v17) * v14) - (float)(v20 * v16);
  v37 = (float)(v20 * v14) + (float)((float)(v21 * v17) * v16);
  v41 = v21 * v15;
  v34 = (float)(v17 * (float)(v20 * v14)) + (float)(v21 * v16);
  v38 = (float)(v17 * (float)(v20 * v16)) - (float)(v21 * v14);
  v42 = v20 * v15;
  v35 = v22;
  v39 = v18 + -30.0;
  v43 = v19 + -240.0;
  v23 = v1 + 1525;
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v1[1525] + 60))(*v1[1525], &v32);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v23 + 68))(**v23, v1 + 36);
  sub_604218E0(v1[1525]);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v23 + 52))(**v23);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v23 + 56))(**v23);
  v31[0] = 1099431936;
  v31[1] = 1099431936;
  v31[2] = 1099431936;
  v24 = *((float *)v1 + 29);
  v25 = (float)(0.024541 * 0.0) + 0.0;
  v26 = (float)(-0.00030118 * 0.0) + 1.0;
  v27 = *((float *)v1 + 27);
  v28 = *((float *)v1 + 28);
  v32 = v26 * v26;
  v36 = v25 * v26;
  v40 = -v25;
  v33 = (float)((float)(v25 * v25) * v26) - (float)(v25 * v26);
  v37 = (float)(v26 * v26) + (float)(v25 * (float)(v25 * v25));
  v41 = v25 * v26;
  v34 = (float)(v25 * v25) + (float)(v25 * (float)(v26 * v26));
  v38 = (float)(v25 * v41) - v41;
  v42 = v26 * v26;
  v35 = v27 + 340.0;
  v39 = v28 + 520.0;
  v43 = v24 + 200.0;
  v29 = v1[1526];
  v1 += 1526;
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v29 + 60))(*v29, &v32);
  (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)**v1 + 68))(**v1, v31);
  sub_604218E0(*v1);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v1 + 52))(**v1);
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v1 + 56))(**v1);
}
