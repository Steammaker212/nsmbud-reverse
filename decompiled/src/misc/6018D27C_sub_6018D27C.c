/* sub_6018D27C
 * address: 0x6018D27C   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6018D27C(float *a1, _DWORD *a2, unsigned int a3, unsigned int a4, float a5, int a6, int a7)
{
  unsigned int v10; // r7
  unsigned int v11; // r6
  float *v12; // r9
  char *v13; // r0
  int v14; // r5
  unsigned int v15; // r4
  int v16; // r0
  unsigned int v17; // r2
  unsigned int v18; // r0
  int v19; // r1
  float v20; // r2
  float v21; // r3
  float v22; // r7
  float *v23; // r0
  float *v24; // r10
  float v25; // s2
  float v26; // s0
  float v27; // s4
  float v28; // s18
  float v29; // s20
  float v30; // s22
  unsigned int v31; // r0
  float *v32; // r0
  int v33; // r0
  float v34; // s0
  int v35; // r0

  v10 = a4;
  v11 = a3;
  v12 = a1 + 35;
  sub_601A02B0(dword_60C89E00, a1 + 35, a3, a4, a2);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v13 = (char *)a2[1];
  if ( v13 != "look" && (*v13 != 108 || v13[1] != 111 || v13[2] != 111 || v13[3] != 107) )
  {
    v14 = sub_601A443C(dword_60C89E18, v11, v10);
    v15 = sub_60181AB4(v14, a2);
    v16 = sub_60182E50(v14, v15);
    if ( v16 )
    {
      v17 = 0;
      v18 = v16 - 1;
      if ( v11 >= 9 )
        v11 = 0;
      if ( v10 >= 2 )
        v10 = 0;
      if ( v18 < 0x1F )
        v17 = v18;
      v19 = dword_60CC6D78 + 1488 * v11 + 744 * v10 + 24 * v17;
      v20 = FIELD_F32(v19, 2148);
      v21 = FIELD_F32(v19, 2152);
      v22 = FIELD_F32(v19, 2156);
      a1[35] = v20;
      a1[36] = v21;
      v23 = a1 + 36;
      a1[37] = v22;
      v24 = a1 + 37;
      v25 = v22;
      v26 = v21;
      v27 = v20;
      v28 = FIELD_F32(v19, 2168);
      v29 = FIELD_F32(v19, 2164);
      v30 = FIELD_F32(v19, 2160);
    }
    else
    {
      v31 = 0;
      if ( v11 >= 9 )
        v11 = 0;
      if ( v10 >= 2 )
        v10 = 0;
      if ( v15 < 0x80 )
        v31 = v15;
      v32 = (float *)(dword_60CC6D78 + 9216 * v11 + 4608 * v10 + 36 * v31);
      v28 = v32[3892];
      v29 = v32[3891];
      v30 = v32[3890];
      v33 = sub_601CF9C0(dword_60C8AEF0);
      v34 = sub_601C7324(v33);
      v23 = a1 + 36;
      v26 = v34 + a1[36];
      a1[36] = v26;
      v27 = a1[35];
      v25 = a1[37];
      v24 = a1 + 37;
    }
    *v12 = v27 + v30;
    *v23 = v26 + v29;
    *v24 = v25 + v28;
  }
  v35 = sub_601FEE28(dword_60C8C188);
  sub_6016BB6C(v35, a6, v12, 0, a5, 0, a7);
}
