/* sub_60299A50
 * address: 0x60299A50   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60299A50(Actor *a1)
{
  if ( FIELD_U32(a1 + (84) * 80, 0x40) == 2 )
    return (*(int (__fastcall **)(Actor *, StateVirtual *))(FIELD_U32(a1, 0x0) + 192))(a1, &stru_60C90908);
  if ( Actor__getProfileId(a1) == 479
    || Actor__getProfileId(a1) == 480
    || Actor__getProfileId(a1) == 483
    || Actor__getProfileId(a1) == 484 )
  {
    return sub_60299B20(a1);
  }
  return sub_60299D08(a1);
}
