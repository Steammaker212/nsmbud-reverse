/* sub_603FFE10
 * address: 0x603FFE10   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FFE10(int result)
{
  int v1; // r2

  v1 = 9999;
  if ( (unsigned int)(FIELD_U32(result, 52) + 1) < 0x270F )
    v1 = FIELD_U32(result, 52) + 1;
  FIELD_U32(result, 52) = v1;
  return result;
}
