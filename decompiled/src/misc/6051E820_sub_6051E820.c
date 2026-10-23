/* sub_6051E820
 * address: 0x6051E820   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051E820(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r4
  unsigned __int8 *v2; // r0
  int v3; // t1
  int result; // r0

  v1 = a1;
  sub_60502548((int)(a1 + 3708));
  *((_WORD *)v1 + 2380) = 0;
  sub_6047EABC((_DWORD *)v1 + 937);
  v1[4751] = 0;
  v1[4748] = 1;
  v1[4752] = 1;
  v2 = v1 + 3696;
  *(_BYTE *)(*((_DWORD *)v1 + 924) + 64) |= 1u;
  *(_BYTE *)(*((_DWORD *)v1 + 925) + 64) |= 1u;
  *(_BYTE *)(*((_DWORD *)v1 + 926) + 64) |= 1u;
  v3 = v1[15028];
  v1 += 15028;
  *(_BYTE *)(*(_DWORD *)&v2[4 * v3] + 64) &= ~1u;
  result = *v1 ^ 1;
  *((_DWORD *)v1 - 2573) = result;
  return result;
}
