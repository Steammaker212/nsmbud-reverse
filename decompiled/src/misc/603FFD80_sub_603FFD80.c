/* sub_603FFD80
 * address: 0x603FFD80   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FFD80(int result)
{
  int v1; // r2

  v1 = 99999;
  if ( (unsigned int)(FIELD_U32(result, 32) + 1) < 0x1869F )
    v1 = FIELD_U32(result, 32) + 1;
  FIELD_U32(result, 32) = v1;
  return result;
}
