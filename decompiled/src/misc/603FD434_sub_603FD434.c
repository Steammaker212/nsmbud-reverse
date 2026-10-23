/* sub_603FD434
 * address: 0x603FD434   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FD434(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 500);
  if ( (result & 0xFFFFFFFE) != 0xA )
    return 15;
  return result;
}
