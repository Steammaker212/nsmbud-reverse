/* sub_600C99A0
 * address: 0x600C99A0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C99A0(Actor *a1)
{
  int result; // r0

  result = Actor__getProfileId(a1);
  if ( result == 717 )
  {
    FIELD_U8(a1, 0x13) = 1;
    return 1;
  }
  else if ( result == 718 )
  {
    return sub_600CBF0C(a1, 0, 0, 0);
  }
  return result;
}
