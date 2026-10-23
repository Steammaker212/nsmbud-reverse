/* sub_60904C0C
 * address: 0x60904C0C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60904C0C(int a1, int a2)
{
  int result; // r0

  result = sub_608E7E5C(FIELD_U32(a1, 4), a2, 1);
  if ( result )
    return a2;
  return result;
}
