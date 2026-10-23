/* sub_60372330
 * address: 0x60372330   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60372330(Actor *a1, int a2)
{
  int ProfileId; // r0
  int result; // r0
  bool v6; // zf

  ProfileId = Actor__getProfileId(a1);
  if ( ProfileId != 531 && ProfileId != 533 )
    return 1;
  result = (unsigned __int8)FIELD_U8(a1, 0x1C);
  v6 = result == 0;
  if ( FIELD_U8(a1, 0x1C) )
  {
    result = 0;
    v6 = (a2 ^ 1) == 1;
  }
  if ( v6 )
    return 1;
  return result;
}
