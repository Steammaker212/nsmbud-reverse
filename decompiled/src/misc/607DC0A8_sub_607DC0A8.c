/* sub_607DC0A8
 * address: 0x607DC0A8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DC0A8(int a1, int a2, int a3)
{
  unsigned int v3; // r1

  v3 = a3 + 2 * a2;
  if ( v3 >= 0x12 )
    v3 = 0;
  return a1 + 48 * v3 + 15024;
}
