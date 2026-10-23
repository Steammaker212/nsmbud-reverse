/* sub_6040B5C4
 * address: 0x6040B5C4   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040B5C4(_WORD *a1, unsigned int a2)
{
  int v2; // r2

  v2 = 999;
  if ( a2 < 0x3E7 )
    v2 = a2;
  *a1 = v2;
  return v2;
}
