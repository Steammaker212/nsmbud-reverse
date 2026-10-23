/* sub_6046EC90
 * address: 0x6046EC90   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6046EC90(int a1, Actor *a2)
{
  int ProfileId; // r1
  _BOOL4 result; // r0

  ProfileId = Actor__getProfileId(a2);
  result = 0;
  if ( ProfileId == 33 )
    return !(unsigned __int8)FIELD_U32(a2, 0x14) && FIELD_U32(a1, 4) == (unsigned int)FIELD_U32(a2, 0x14) >> 28;
  return result;
}
