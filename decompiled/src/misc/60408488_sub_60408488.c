/* sub_60408488
 * address: 0x60408488   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60408488(_DWORD *a1, const void *a2)
{
  int v3; // r1
  int result; // r0
  unsigned int v5; // r2
  unsigned int v6; // r2

  qmemcpy(a1 + 1, a2, 0x29u);
  v3 = 0;
  result = 4;
  *a1 = 0;
  do
  {
    v5 = *((unsigned __int8 *)a1 + result++);
    v6 = (((((v5 >> 1) & 0x55) + (v5 & 0x55)) >> 2) & 0x33) + ((((v5 >> 1) & 0x55) + (v5 & 0x55)) & 0x33);
    v3 += (v6 >> 4) + (v6 & 7);
    *a1 = v3;
  }
  while ( result != 45 );
  return result;
}
