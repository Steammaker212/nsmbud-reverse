/* sub_603B1028
 * address: 0x603B1028   size: 1028   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B1028(_DWORD **a1)
{
  _DWORD **v1; // r4
  _DWORD **v2; // r7
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r2
  int v6; // s0
  float *v7; // r6
  float *v8; // r5
  float *v9; // r1
  float v10; // s14
  float v11; // s2
  float v12; // s0
  float v13; // s10
  float v14; // s5
  float v15; // s6
  float v16; // s1
  float v17; // s13
  float v18; // s9
  float v19; // r1
  float v20; // r2
  float v21; // r3
  float v22; // s2
  float v23; // s8
  _DWORD **v24; // r7
  _DWORD *v25; // r0
  float v26; // s0
  float v27; // s4
  float v28; // s2
  _DWORD *v29; // r1
  _DWORD *v30; // t1
  float v32[3]; // [sp+0h] [bp-90h] BYREF
  float v33; // [sp+Ch] [bp-84h]
  float v34; // [sp+10h] [bp-80h]
  float v35; // [sp+14h] [bp-7Ch]
  float v36; // [sp+18h] [bp-78h]
  float v37; // [sp+1Ch] [bp-74h]
  float v38; // [sp+20h] [bp-70h]
  float v39; // [sp+24h] [bp-6Ch]
  float v40; // [sp+28h] [bp-68h]
  float v41; // [sp+2Ch] [bp-64h]
  float v42; // [sp+30h] [bp-60h] BYREF
  float v43; // [sp+34h] [bp-5Ch]
  float v44; // [sp+38h] [bp-58h]
  _DWORD *v45; // [sp+3Ch] [bp-54h]
  float v46; // [sp+40h] [bp-50h]
  float v47; // [sp+44h] [bp-4Ch]
  float v48; // [sp+48h] [bp-48h]
  _DWORD *v49; // [sp+4Ch] [bp-44h]
  float v50; // [sp+50h] [bp-40h]
  float v51; // [sp+54h] [bp-3Ch]
  float v52; // [sp+58h] [bp-38h]
  float v53; // [sp+5Ch] [bp-34h]

  v1 = a1;
  v2 = a1 + 1576;
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*a1[1576] + 52))(*a1[1576]);
  v3 = (unsigned int)v1[39];
  v4 = (unsigned int)v1[40];
  v5 = (unsigned int)v1[41];
  v6 = v4 & 0xFFFFFF;
  v7 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v10 = (float)(v3 & 0xFFFFFF);
  v11 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(unsigned int)v6 * 0.000000059605;
  v13 = v8[2] + (float)(v11 * v8[3]);
  v14 = v7[2] + (float)(v12 * v7[3]);
  v15 = *v8 + (float)(v11 * v8[1]);
  v16 = *v7 + (float)(v12 * v7[1]);
  v17 = v9[2] + (float)((float)(v10 * 0.000000059605) * v9[3]);
  v18 = *v9 + (float)((float)(v10 * 0.000000059605) * v9[1]);
  v42 = v14 * v13;
  v46 = v14 * v15;
  v50 = -v16;
  v43 = (float)((float)(v18 * v16) * v13) - (float)(v17 * v15);
  v47 = (float)(v17 * v13) + (float)((float)(v18 * v16) * v15);
  v51 = v18 * v14;
  v44 = (float)(v16 * (float)(v17 * v13)) + (float)(v18 * v15);
  v48 = (float)(v16 * (float)(v17 * v15)) - (float)(v18 * v13);
  v52 = v17 * v14;
  v45 = v1[27];
  v49 = v1[28];
  v53 = *((float *)v1 + 29);
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v2 + 60))(**v2, &v42);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v2 + 56))(**v2);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v2 + 68))(**v2, v1 + 1655);
  (*(void (__fastcall **)(_DWORD, int, float *))(*(_DWORD *)**v2 + 108))(**v2, 3, v32);
  v19 = v33;
  *((float *)v1 + 1605) = v33;
  v20 = v37;
  *((float *)v1 + 1606) = v37;
  v21 = v41;
  *((float *)v1 + 1607) = v41;
  v33 = v19 + (float)((float)((float)(v32[1] * 0.0) + (float)(v32[0] * 0.0)) + (float)(v32[2] * 1.6));
  v22 = v20 + (float)((float)((float)(v35 * 0.0) + (float)(v34 * 0.0)) + (float)(v36 * 1.6));
  v37 = v22;
  v23 = (float)((float)(v39 * 0.0) + (float)(v38 * 0.0)) + (float)(v40 * 1.6);
  v41 = v21 + v23;
  *((float *)v1 + 1608) = v33;
  *((float *)v1 + 1609) = v22;
  *((float *)v1 + 1610) = v21 + v23;
  (*(void (__fastcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)**v2 + 108))(**v2, 0, v32);
  *((float *)v1 + 1611) = v33;
  *((float *)v1 + 1612) = v37;
  *((float *)v1 + 1613) = v41;
  v24 = v1 + 1578;
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v1[1578] + 52))(*v1[1578]);
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v24 + 60))(**v24, &v42);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v24 + 56))(**v24);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v24 + 68))(**v24, v1 + 1655);
  v25 = v1[1606];
  v26 = (float)(0.024541 * 0.0) + 0.0;
  v27 = (float)(-0.00030118 * 0.0) + 1.0;
  v28 = *((float *)v1 + 1607);
  v29 = v1[1605];
  v42 = v27 * v27;
  v46 = v26 * v27;
  v50 = -v26;
  v43 = (float)((float)(v26 * v26) * v27) - (float)(v26 * v27);
  v47 = (float)(v27 * v27) + (float)(v26 * (float)(v26 * v26));
  v51 = v26 * v27;
  v44 = (float)(v26 * v26) + (float)(v26 * (float)(v27 * v27));
  v48 = (float)(v26 * v51) - v51;
  v52 = v27 * v27;
  v45 = v29;
  v49 = v25;
  v53 = v28 + -24.0;
  v30 = v1[1577];
  v1 += 1577;
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v30 + 60))(*v30, &v42);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v1 + 68))(**v1, v1 - 1541);
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v1 + 56))(**v1);
}
