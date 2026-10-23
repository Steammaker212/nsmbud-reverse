/* sub_602FD054
 * address: 0x602FD054   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FD054(float *a1)
{
  float v2; // r0
  float v3; // r1
  float v4; // s0
  _BOOL4 v5; // r0
  float v7[4]; // [sp+0h] [bp-10h] BYREF

  v2 = a1[27];
  v3 = a1[28];
  v7[0] = v2;
  v7[1] = v3;
  if ( *((_DWORD *)a1 + 2126) == -1 )
  {
    v4 = v2;
  }
  else
  {
    sub_60300AE4(a1, v7);
    v4 = v7[0];
  }
  v5 = v4 < 0.0;
  *((_DWORD *)a1 + 20) = v5;
  a1[40] = flt_60C92B2C[v5];
  *((_DWORD *)a1 + 2125) = 60;
  sub_603005F4(a1, 15);
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 628))(a1);
  (*(void (__fastcall **)(float *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92B3C);
  return 1;
}
