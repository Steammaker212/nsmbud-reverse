/* sub_603FFCC8
 * address: 0x603FFCC8   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FFCC8(int result)
{
  int v1; // r2

  v1 = 9999;
  if ( (unsigned int)(FIELD_U32(result, 8) + 1) < 0x270F )
    v1 = FIELD_U32(result, 8) + 1;
  FIELD_U32(result, 8) = v1;
  return result;
}
