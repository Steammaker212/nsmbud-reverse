/* sub_6026D938
 * address: 0x6026D938   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6026D938(unsigned int *a1)
{
  unsigned int *v2; // r5
  unsigned int v3; // r0
  unsigned int v4; // r0
  unsigned int v5; // r1
  unsigned int result; // r0

  v2 = a1 + 2376;
  v3 = a1[2376] - 0x2000000;
  *v2 = v3;
  if ( v3 <= 0x20000000 )
  {
    *v2 = 0x20000000;
    (*(void (__fastcall **)(unsigned int *, int *))(*a1 + 192))(a1, &dword_60C8E800);
    v3 = *v2;
  }
  if ( a1[20] )
    v3 = -v3;
  v4 = v3 + a1[2370];
  a1[2369] = v4;
  a1[2372] = v4;
  a1[2373] = v4 + 0x40000000;
  v5 = v4 ^ 0x80000000;
  result = v4 - 0x40000000;
  a1[2374] = v5;
  a1[2375] = result;
  return result;
}
