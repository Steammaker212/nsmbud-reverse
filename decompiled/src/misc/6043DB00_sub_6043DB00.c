/* sub_6043DB00
 * address: 0x6043DB00   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043DB00(int a1, int a2, int a3, int a4)
{
  int result; // r0

  result = gsys_assign_ref(a1, a2, a4);
  if ( a3 )
    return sub_60873A50(FIELD_U32(a3, 12), FIELD_U32(a1, 4));
  return result;
}
