/* sub_603FFD44
 * address: 0x603FFD44   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FFD44(int result)
{
  int v1; // r2

  v1 = 999;
  if ( (unsigned int)(FIELD_U32(result, 24) + 1) < 0x3E7 )
    v1 = FIELD_U32(result, 24) + 1;
  FIELD_U32(result, 24) = v1;
  return result;
}
