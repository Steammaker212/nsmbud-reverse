/* sub_6084FBBC
 * address: 0x6084FBBC   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084FBBC(int a1, int a2, float **a3, int a4, float *a5)
{
  float *v7; // r4
  int v8; // r9
  int v9; // r10
  float v10; // s16
  int v11; // r7
  int v12; // r6
  float v13; // s16
  float v14; // s18
  float v15; // s0
  float *v16; // r0
  float v17; // s0
  float v18; // s2
  float *v19; // r1
  float v20; // s16
  float v21; // s18
  int v22; // r0
  float v23; // s16
  int v24; // r0
  int (**v26)(); // [sp+4h] [bp-94h] BYREF
  float v27[36]; // [sp+8h] [bp-90h] BYREF

  a3[1] = a5;
  if ( !a4 )
  {
    v7 = *a3;
    v8 = FIELD_U16(a2, 10);
    v9 = FIELD_U16(a2, 8);
    qmemcpy(v27, *a3, 0x54u);
    LODWORD(v27[18]) = 768;
    v27[15] = 0.0;
    v27[14] = 0.0;
    v27[9] = 0.0;
    LODWORD(v27[19]) = &dword_60CC7EE0;
    v10 = sub_60849C18((int)v7) * 0.4;
    v27[3] = v10 / (float)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(v27[10]) + 16))(LODWORD(v27[10]));
    v27[4] = v27[3];
    v11 = *((_DWORD *)*a3 + 19);
    sub_6084C494(&v26);
    v26 = off_60C344D4;
    *((_DWORD *)*a3 + 19) = &v26;
    v12 = a2 + 12;
    v13 = ((float (__fastcall *)(float *, float *, int))loc_6084CAEC)(*a3, a5, v9);
    *((_DWORD *)*a3 + 19) = v11;
    v14 = ((float (__fastcall *)(float *, int, int, float))loc_6084CAEC)(v27, v12, v8, v13);
    nullsub_90();
    v15 = v13 - v14;
    if ( (float)(v13 - v14) <= 0.0 )
    {
      v16 = &v27[5];
      v18 = v27[5] + (float)(v15 * 0.5);
    }
    else
    {
      v16 = &v27[14];
      v17 = v15 / (float)(v8 + 1);
      v18 = v17 + 0.0;
      v27[5] = v17 + v27[5];
    }
    *v16 = v18;
    v19 = *a3;
    v20 = (*a3)[9];
    if ( v20 != 0.0 )
    {
      v21 = v19[3];
      v22 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v19 + 10) + 16))(*((_DWORD *)v19 + 10));
      v27[5] = v27[5] + (float)((float)((float)(v20 * v21) * (float)v22) * 0.5);
      v19 = *a3;
    }
    v23 = v19[4];
    v24 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v19 + 10) + 88))(*((_DWORD *)v19 + 10));
    v27[6] = v27[6] - (float)(v23 * (float)v24);
    sub_6084D410(v27, v12, v8);
    j_nullsub_88();
  }
  return 0;
}
