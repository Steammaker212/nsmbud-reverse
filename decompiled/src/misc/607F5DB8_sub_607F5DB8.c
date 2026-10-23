/* sub_607F5DB8
 * address: 0x607F5DB8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F5DB8(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0

  sub_60023F2C((int)(a1 + 23));
  v2 = a1[21];
  a1[20] = a1[22];
  a1[19] = v2;
  v3 = a1[23];
  a1[22] = a1[24];
  a1[21] = v3;
  a1[23] = 0;
  a1[24] = 0;
  return 0;
}
