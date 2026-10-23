/* sub_60801B98
 * address: 0x60801B98   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60801B98(int a1, int *a2, _DWORD *a3)
{
  int v6; // r1
  int v7; // r8
  int v8; // r7
  float *v9; // r1
  int v10; // r6
  float v11; // s4
  float v12; // s6
  float v13; // s16
  float v14; // s18
  float v15; // s2
  float v17[12]; // [sp+8h] [bp-30h] BYREF

  sub_60800910((sead_IDisposer *)a1);
  *(_DWORD *)a1 = &off_60C27E7C;
  v6 = a3[1];
  FIELD_U32(a1, 36) = *a3;
  FIELD_U32(a1, 40) = v6;
  v7 = *a2;
  v8 = a2[2];
  v9 = (float *)a2[3];
  v10 = *(_DWORD *)(a2[1] + 32);
  v11 = v9[13];
  v12 = v9[14];
  v17[0] = (float)(v9[11] + v9[12]) * 0.5;
  v17[1] = (float)(v11 + v12) * 0.5;
  ((void (__fastcall *)(int, int, int, float *, int *, int))sub_60801C9C)(a1, v7, v8, v17, &dword_60B3B944, v10);
  if ( *(float *)a3 != 0.0 )
  {
    v13 = FIELD_F32(a1, 28);
    v14 = FIELD_F32(a1, 32);
    ((void (__fastcall *)(int, int, int, float *, _DWORD *, int))sub_60801C9C)(a1, v7, v8, v17, a3, v10);
    v15 = FIELD_F32(a1, 32) - v14;
    FIELD_F32(a1, 36) = FIELD_F32(a1, 28) - v13;
    FIELD_F32(a1, 40) = v15;
  }
  return a1;
}
