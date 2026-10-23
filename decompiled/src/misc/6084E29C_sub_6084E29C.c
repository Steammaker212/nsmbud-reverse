/* sub_6084E29C
 * address: 0x6084E29C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6084E29C(const void *a1, float *a2, int a3, int a4)
{
  int v7; // r9
  float *v8; // r0
  int v9; // r1
  float *v10; // r0
  float *v11; // r0
  float *v12; // r0
  _DWORD v13[22]; // [sp+0h] [bp-90h] BYREF
  float v14; // [sp+58h] [bp-38h] BYREF
  float v15; // [sp+5Ch] [bp-34h] BYREF
  float v16; // [sp+60h] [bp-30h] BYREF
  float v17; // [sp+64h] [bp-2Ch] BYREF
  int v18; // [sp+68h] [bp-28h] BYREF

  if ( a3 )
  {
    qmemcpy(v13, a1, 0x54u);
    v18 = a3;
    v7 = a3 + 2 * a4;
    *a2 = 0.0;
    a2[3] = 0.0;
    a2[2] = 0.0;
    a2[1] = 0.0;
    v13[5] = 0;
    v13[6] = 0;
    do
    {
      v17 = 0.0;
      v16 = 0.0;
      v15 = 0.0;
      v14 = 0.0;
      sub_6084E450(v13, &v14, &v18, a4);
      v8 = a2;
      v9 = v18;
      if ( v14 < *a2 )
        v8 = &v14;
      *a2 = *v8;
      v10 = a2 + 1;
      if ( v15 < a2[1] )
        v10 = &v15;
      a2[1] = *v10;
      v11 = a2 + 2;
      if ( a2[2] < v16 )
        v11 = &v16;
      a2[2] = *v11;
      v12 = a2 + 3;
      if ( a2[3] < v17 )
        v12 = &v17;
      a2[3] = *v12;
      a4 = (v7 - v9) >> 1;
    }
    while ( v7 - v9 > 0 );
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
