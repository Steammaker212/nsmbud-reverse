/* BigBoo_onCreate_helper_423EBC
 * address: 0x60423EBC   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BigBoo_onCreate_helper_423EBC(int a1, int a2)
{
  int result; // r0

  result = FIELD_U32(a1, 20);
  if ( result )
    FIELD_U32(result, 68) = a2;
  return result;
}
