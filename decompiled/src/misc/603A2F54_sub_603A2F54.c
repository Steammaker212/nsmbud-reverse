/* sub_603A2F54
 * address: 0x603A2F54   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A2F54(int a1)
{
  int result; // r0

  result = 0;
  if ( (FIELD_U8(a1, 3202) & 2) != 0 && (FIELD_U8(a1, 2872) & 8) != 0 )
  {
    FIELD_U32(a1, 124) = 1085276160;
    return 1;
  }
  return result;
}
