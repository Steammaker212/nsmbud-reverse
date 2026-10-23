/* sub_605E34C4
 * address: 0x605E34C4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605E34C4(int a1)
{
  int ProfileId; // r1
  _BOOL4 result; // r0

  ProfileId = Actor__getProfileId((Actor *)a1);
  result = 1;
  if ( ProfileId != 453 )
  {
    result = 0;
    if ( (FIELD_U32(a1, 6260) & 0x820C02) == 0x400 )
      return (FIELD_U8(a1, 6265) & 0x20) == 0;
  }
  return result;
}
