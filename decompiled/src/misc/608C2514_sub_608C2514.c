/* sub_608C2514
 * address: 0x608C2514   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C2514(int a1, int a2, int a3)
{
  int result; // r0

  result = FIELD_U32(a1, 4);
  if ( result )
    return sub_608CAE20(result, 0, a2, a3);
  return result;
}
