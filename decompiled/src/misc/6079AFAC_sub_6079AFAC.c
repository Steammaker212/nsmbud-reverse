/* sub_6079AFAC
 * address: 0x6079AFAC   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079AFAC(float *a1, float *a2, int a3)
{
  int v6; // r0
  float v7; // r1
  float v8; // s16
  int v9; // r6
  float v10; // s20
  float v11; // s22
  float v12; // s18
  int v13; // r6
  float v14; // s20
  int result; // r0
  float v16; // [sp+0h] [bp-48h] BYREF
  float v17[17]; // [sp+4h] [bp-44h] BYREF

  v6 = sub_6079D894(a1);
  if ( !v6 )
    return 0;
  v7 = a1[29];
  v8 = a1[28] + FIELD_F32(a3, 8);
  v17[1] = v8 + -10.0;
  v17[2] = v7;
  v9 = FIELD_U32(v6, 1320);
  v10 = *((float *)*(&off_60C25230 + (*(int (__fastcall **)(float *, int))(*(_DWORD *)a1 + 156))(a1, v9)) + 5);
  v11 = *((float *)*(&off_60C25230 + (*(int (__fastcall **)(float *, int))(*(_DWORD *)a1 + 156))(a1, v9)) + 14);
  v12 = *a2 + -1.0;
  v17[0] = a1[27] + v12;
  v13 = 0;
  v14 = (float)(v8 + (float)(v10 - v11)) + 2.0;
  if ( sub_60155C38((int)(a1 + 332), v17, &v16, 1, 32.0) == 1 && v16 <= v14 )
  {
    v13 = 2;
    if ( v16 > v8 )
      v13 = 1;
  }
  v17[0] = a1[27] - (float)(v12 + 1.0);
  if ( sub_60155C38((int)(a1 + 332), v17, &v16, 1, 32.0) == 1 && v16 <= v14 )
  {
    v13 = 2;
    if ( v16 > v8 )
      v13 = 1;
  }
  result = v13;
  if ( v13 != 1 )
    result = 0;
  if ( v13 == 2 )
    return 2;
  return result;
}
