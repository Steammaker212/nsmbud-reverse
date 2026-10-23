/* sub_607FCAD0
 * address: 0x607FCAD0   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FCAD0(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 172);
  if ( result )
    FIELD_U8(result, 1593) = 1;
  return result;
}
