/* sub_60726B20
 * address: 0x60726B20   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60726B20(int a1)
{
  unsigned int v2; // r0
  float *v3; // r6
  float v4; // s8
  float v5; // s4
  float v6; // s22
  float v7; // s1
  float v8; // s12
  float v9; // s0
  float v10; // s12
  float v11; // s30
  float v12; // s4
  float v13; // s12
  float v14; // s8
  float v15; // s0
  float v16; // s6
  float v17; // s2
  float v18; // s0
  float v19; // s4
  int v20; // r0
  void (__fastcall *v21)(int, float *); // r2
  int v22; // r0
  void (__fastcall *v23)(int, float *); // r2
  float v25; // [sp+0h] [bp-88h] BYREF
  float v26; // [sp+4h] [bp-84h]
  float v27; // [sp+8h] [bp-80h]
  float v28; // [sp+Ch] [bp-7Ch]
  float v29; // [sp+10h] [bp-78h]
  float v30; // [sp+14h] [bp-74h]
  float v31; // [sp+18h] [bp-70h]
  float v32; // [sp+1Ch] [bp-6Ch]
  float v33; // [sp+20h] [bp-68h]
  float v34; // [sp+24h] [bp-64h]
  float v35; // [sp+28h] [bp-60h]
  int v36; // [sp+2Ch] [bp-5Ch]

  v2 = FIELD_U32(a1, 32);
  v3 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v4 = (float)(-0.00030118 * 0.0) + 1.0;
  v5 = (float)(0.024541 * 0.0) + 0.0;
  v6 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v7 = v3[2] + (float)(v6 * v3[3]);
  v8 = *v3 + (float)(v6 * v3[1]);
  v9 = v5 * v8;
  v10 = v4 * v8;
  v25 = (float)(v4 * v7) + (float)(v5 * v9);
  v29 = v5 * v4;
  v33 = (float)(v5 * (float)(v5 * v7)) - v10;
  v26 = (float)(v5 * v10) - (float)(v5 * v7);
  v30 = v4 * v4;
  v34 = v9 + (float)(v5 * (float)(v4 * v7));
  v27 = v10;
  v11 = (float)(60.0 + 64.0) * 0.5;
  v31 = -v5;
  v35 = v4 * v7;
  v28 = (float)(64.0 * 0.5) + (float)((float)30 * 64.0);
  v32 = (float)(512.0 - (float)(64.0 * (float)((float)0 + 1.5))) + v11;
  v36 = -1007026176;
  (*(void (__fastcall **)(_DWORD, float *))(**(_DWORD **)(a1 + 36) + 60))(FIELD_U32(a1, 36), &v25);
  v12 = v3[2] + (float)(v6 * v3[3]);
  v13 = (float)(-0.00030118 * 0.0) + 1.0;
  v14 = (float)(0.024541 * 0.0) + 0.0;
  v15 = *v3 + (float)(v6 * v3[1]);
  v16 = v13 * v12;
  v17 = v14 * v15;
  v18 = v13 * v15;
  v19 = v14 * v12;
  v25 = v16 + (float)(v14 * v17);
  v29 = v14 * v13;
  v33 = (float)(v14 * v19) - v18;
  v26 = (float)(v14 * v18) - v19;
  v30 = v13 * v13;
  v34 = v17 + (float)(v14 * v16);
  v27 = v18;
  v31 = -v14;
  v35 = v16;
  v28 = (float)(64.0 * 0.5) + (float)((float)15 * 64.0);
  v32 = (float)(512.0 - (float)(64.0 * (float)((float)1 + 1.5))) + v11;
  v36 = -1007026176;
  (*(void (__fastcall **)(_DWORD, float *))(**(_DWORD **)(a1 + 40) + 60))(FIELD_U32(a1, 40), &v25);
  v20 = FIELD_U32(a1, 36);
  v21 = *(void (__fastcall **)(int, float *))(*(_DWORD *)v20 + 68);
  v25 = (float)(60.0 * 1.5) / 24.0;
  v26 = v25;
  v27 = v25;
  v21(v20, &v25);
  v22 = FIELD_U32(a1, 40);
  v23 = *(void (__fastcall **)(int, float *))(*(_DWORD *)v22 + 68);
  v25 = (float)(60.0 * 1.5) / 24.0;
  v26 = v25;
  v27 = v25;
  v23(v22, &v25);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 36) + 56))(FIELD_U32(a1, 36));
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 40) + 56))(FIELD_U32(a1, 40));
}
