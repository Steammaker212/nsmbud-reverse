/* sub_60772C30
 * address: 0x60772C30   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60772C30(int a1)
{
  _BOOL4 result; // r0
  int v3; // r0
  int v4; // r1
  _BOOL4 v5; // r1

  if ( (FIELD_U8(a1, 6900) & 1) == 0 )
    return 0;
  if ( sub_60786744(a1 + 688) )
    return sub_60786738(a1 + 688) != 0;
  v3 = FIELD_U32(a1, 6972);
  if ( v3 == 4 )
    return sub_60786738(a1 + 688) != 0;
  if ( !v3 )
  {
    v4 = sub_60786768(a1 + 688);
    result = 1;
    if ( v4 )
      return result;
    return sub_60786738(a1 + 688) != 0;
  }
  if ( sub_60786750(a1 + 688) == 1 && !sub_6014C540(a1 + 1328) )
    return 1;
  if ( sub_6078675C(a1 + 688) != 1 )
    return sub_60786738(a1 + 688) != 0;
  v5 = sub_6014C540(a1 + 1328);
  result = 1;
  if ( !v5 )
    return sub_60786738(a1 + 688) != 0;
  return result;
}
