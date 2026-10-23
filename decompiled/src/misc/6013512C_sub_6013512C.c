/* sub_6013512C
 * address: 0x6013512C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013512C(_DWORD *a1)
{
  int v2; // r1
  float v4[5]; // [sp+4h] [bp-14h] BYREF

  v2 = a1[20] ^ 1;
  a1[1526] = v2;
  v4[0] = flt_60AF6638[v2] * 1.75;
  v4[1] = 2.75;
  v4[2] = 0.0;
  (*(void (__fastcall **)(_DWORD *, float *, int))(*a1 + 308))(a1, v4, 100663296);
  a1[1527] = 1;
  return 1;
}
