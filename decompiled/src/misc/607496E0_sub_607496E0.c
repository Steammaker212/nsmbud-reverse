/* sub_607496E0
 * address: 0x607496E0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607496E0(int a1)
{
  int result; // r0

  sub_605EAE4C();
  result = FIELD_U8(a1, 728);
  if ( !FIELD_U8(a1, 728) )
  {
    FIELD_U32(a1, 676) = 60;
    return 60;
  }
  return result;
}
