/* sub_60833664
 * address: 0x60833664   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60833664(int a1, int a2)
{
  int v2; // r5
  int v4; // r0
  int result; // r0

  v2 = a2 - 4;
  v4 = sub_6090FD94(a1, a2 - 4);
  result = off_60C5CB10(v4);
  *(_DWORD *)(a1 + v2) = result;
  return result;
}
