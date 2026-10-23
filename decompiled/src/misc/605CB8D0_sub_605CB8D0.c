/* sub_605CB8D0
 * address: 0x605CB8D0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605CB8D0(_DWORD *a1)
{
  unsigned int v2; // r2
  unsigned int result; // r0
  unsigned int v4; // r1

  sub_605C9FEC((int)a1);
  v2 = a1[798] & 0xFFFFFF87;
  result = a1[794] & 0xFFFFFF87;
  v4 = a1[796] & 0xFFFFFF87;
  a1[800] &= 0xFFFFFF87;
  a1[798] = v2;
  a1[794] = result;
  a1[796] = v4;
  return result;
}
