/* sub_6059F7AC
 * address: 0x6059F7AC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6059F7AC(int a1, int a2)
{
  int ProfileId; // r1
  _BOOL4 result; // r0

  ProfileId = Actor__getProfileId((Actor *)a2);
  result = 0;
  if ( ProfileId == 20 )
    return (FIELD_U8(a2, 23) & 0xF) == FIELD_U8(a1, 4);
  return result;
}
