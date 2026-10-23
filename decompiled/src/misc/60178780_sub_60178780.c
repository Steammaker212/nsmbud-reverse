/* sub_60178780
 * address: 0x60178780   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60178780(int a1, unsigned int a2)
{
  int v2; // r2
  int result; // r0

  v2 = a1 + 104 * a2;
  result = 0;
  if ( a2 < 0x100 )
    return v2 + 20;
  return result;
}
