/* sub_6090A2C4
 * address: 0x6090A2C4   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090A2C4(_DWORD *a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r3
  int result; // r0

  v2 = a1[9];
  v3 = a1[10];
  result = a1[11];
  *a2 = v2;
  a2[1] = v3;
  a2[2] = result;
  return result;
}
