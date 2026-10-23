/* sub_608C77DC
 * address: 0x608C77DC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C77DC(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 364);
  if ( result )
  {
    sub_608C93B0();
    sub_608C932C(FIELD_U32(a1, 364));
    FIELD_U32(a1, 364) = 0;
    FIELD_U16(a1, 176) = 0;
    return 0;
  }
  return result;
}
