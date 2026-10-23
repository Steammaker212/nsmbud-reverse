/* sub_600D538C
 * address: 0x600D538C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D538C(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 6136);
  FIELD_U32(result, 6136) = v1 - 1;
  if ( v1 <= 1 )
    FIELD_U8(result, 19) = 1;
  return result;
}
