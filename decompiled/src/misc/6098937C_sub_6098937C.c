/* sub_6098937C
 * address: 0x6098937C   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098937C(float *a1, int a2, int *a3, int a4, int a5)
{
  int v8; // r0
  float v9; // s16
  float v10; // s16
  int v11; // r6
  int v12; // r7
  float v13; // s0
  int v14; // r0
  float v15; // s0
  int v16; // r1
  int v17; // r2
  float v18; // s16

  a3[1] = a5;
  v8 = *a3;
  if ( FIELD_U16(a2, 8) == 0xFFFF )
  {
    FIELD_F32(v8, 40) = a1[4];
    v16 = *((_DWORD *)a1 + 7);
    v17 = *a3;
    FIELD_F32(v17, 12) = a1[6];
    FIELD_U32(v17, 16) = v16;
    *(float *)(*a3 + 36) = a1[5];
    v18 = a1[5];
    if ( v18 > 0.0 )
      *(float *)(*a3 + 20) = *(float *)(*a3 + 20) + (float)((float)(v18 * sub_60849C18(*a3)) * -0.5);
  }
  else
  {
    a1[6] = FIELD_F32(v8, 12);
    a1[7] = *(float *)(*a3 + 16);
    v9 = *(float *)(*a3 + 36);
    a1[5] = v9;
    if ( v9 > 0.0 )
      *(float *)(*a3 + 20) = *(float *)(*a3 + 20) + (float)((float)(v9 * sub_60849C18(*a3)) * 0.5);
    v10 = sub_60849C44(*a3);
    v11 = sub_60986B34(*((_DWORD *)a1 + 12), FIELD_U16(a2, 8));
    v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 20))(v11);
    v13 = (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 136))(a1);
    *(_DWORD *)(*a3 + 40) = v11;
    *(_DWORD *)(*a3 + 36) = 0;
    v14 = *a3;
    v15 = (float)(v10 / (float)v12) * v13;
    FIELD_F32(v14, 12) = v15;
    FIELD_F32(v14, 16) = v15;
  }
  return 0;
}
