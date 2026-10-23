/* sub_6084FEB8
 * address: 0x6084FEB8   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084FEB8(int a1, int a2, float **a3, int a4, float *a5)
{
  float *v7; // r7
  unsigned int v8; // r9
  unsigned int v9; // r10
  float v10; // s16
  int v11; // r7
  float v12; // s16
  float v13; // s18
  float v14; // s0
  float *v15; // r0
  float v16; // s0
  float v17; // s2
  float *v18; // r1
  float v19; // s16
  float v20; // s18
  int v21; // r0
  float v22; // s16
  int v23; // r0
  _UNKNOWN **v25; // [sp+4h] [bp-94h] BYREF
  float v26[36]; // [sp+8h] [bp-90h] BYREF

  a3[1] = a5;
  if ( !a4 )
  {
    v7 = *a3;
    v8 = FIELD_U16(a2, 10);
    v9 = FIELD_U16(a2, 8);
    qmemcpy(v26, *a3, 0x54u);
    LODWORD(v26[18]) = 768;
    v26[15] = 0.0;
    v26[14] = 0.0;
    v26[9] = 0.0;
    LODWORD(v26[19]) = &dword_60CC7EF0;
    v10 = sub_60849C18((int)v7) * 0.4;
    v26[3] = v10 / (float)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(v26[10]) + 16))(LODWORD(v26[10]));
    v26[4] = v26[3];
    v11 = *((_DWORD *)*a3 + 19);
    sub_6084C7C0(&v25);
    v25 = &off_60C34510;
    *((_DWORD *)*a3 + 19) = &v25;
    v12 = ((float (__fastcall *)(float *, float *, unsigned int))loc_6084E1C8)(*a3, a5, v9 >> 1);
    *((_DWORD *)*a3 + 19) = v11;
    v13 = ((float (__fastcall *)(float *, int, unsigned int, float))loc_6084E1C8)(v26, a2 + 12, v8 >> 1, v12);
    nullsub_91();
    v14 = v12 - v13;
    if ( (float)(v12 - v13) <= 0.0 )
    {
      v15 = &v26[5];
      v17 = v26[5] + (float)(v14 * 0.5);
    }
    else
    {
      v15 = &v26[14];
      v16 = v14 / (float)(int)((v8 >> 1) + 1);
      v17 = v16 + 0.0;
      v26[5] = v16 + v26[5];
    }
    *v15 = v17;
    v18 = *a3;
    v19 = (*a3)[9];
    if ( v19 != 0.0 )
    {
      v20 = v18[3];
      v21 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v18 + 10) + 16))(*((_DWORD *)v18 + 10));
      v26[5] = v26[5] + (float)((float)((float)(v19 * v20) * (float)v21) * 0.5);
      v18 = *a3;
    }
    v22 = v18[4];
    v23 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v18 + 10) + 88))(*((_DWORD *)v18 + 10));
    v26[6] = v26[6] - (float)(v22 * (float)v23);
    sub_6084EB64(v26, a2 + 12, v8 >> 1);
    j_nullsub_88_0();
  }
  return 0;
}
