/* sub_6084CBBC
 * address: 0x6084CBBC   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6084CBBC(const void *a1, float *a2, int a3, int a4)
{
  int v7; // r9
  float *v8; // r0
  float *v9; // r0
  float *v10; // r0
  float *v11; // r0
  _DWORD v12[22]; // [sp+0h] [bp-90h] BYREF
  float v13; // [sp+58h] [bp-38h] BYREF
  float v14; // [sp+5Ch] [bp-34h] BYREF
  float v15; // [sp+60h] [bp-30h] BYREF
  float v16; // [sp+64h] [bp-2Ch] BYREF
  int v17; // [sp+68h] [bp-28h] BYREF

  if ( a3 )
  {
    qmemcpy(v12, a1, 0x54u);
    v17 = a3;
    v7 = a3 + a4;
    *a2 = 0.0;
    a2[3] = 0.0;
    a2[2] = 0.0;
    a2[1] = 0.0;
    v12[5] = 0;
    v12[6] = 0;
    do
    {
      v16 = 0.0;
      v15 = 0.0;
      v14 = 0.0;
      v13 = 0.0;
      sub_6084CCFC(v12, &v13, &v17, a4);
      v8 = a2;
      a4 = v7 - v17;
      if ( v13 < *a2 )
        v8 = &v13;
      *a2 = *v8;
      v9 = a2 + 1;
      if ( v14 < a2[1] )
        v9 = &v14;
      a2[1] = *v9;
      v10 = a2 + 2;
      if ( a2[2] < v15 )
        v10 = &v15;
      a2[2] = *v10;
      v11 = a2 + 3;
      if ( a2[3] < v16 )
        v11 = &v16;
      a2[3] = *v11;
    }
    while ( a4 > 0 );
    nullsub_88();
  }
  else
  {
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
    a2[3] = 0.0;
  }
}
