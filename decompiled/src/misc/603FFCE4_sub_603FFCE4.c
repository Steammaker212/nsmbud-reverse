/* sub_603FFCE4
 * address: 0x603FFCE4   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FFCE4(int result)
{
  int v1; // r2

  v1 = 99999;
  if ( (unsigned int)(FIELD_U32(result, 12) + 1) < 0x1869F )
    v1 = FIELD_U32(result, 12) + 1;
  FIELD_U32(result, 12) = v1;
  return result;
}
