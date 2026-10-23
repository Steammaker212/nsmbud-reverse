/* sub_607B5A18
 * address: 0x607B5A18   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B5A18(int a1)
{
  int v2; // r1
  int result; // r0

  v2 = FIELD_U32(a1, 80) ^ 1;
  if ( (FIELD_U8(a1, 6907) & 4) != 0 )
  {
    sub_60774040(a1, v2);
    FIELD_U32(a1, 124) = 0;
    if ( sub_60786744(a1 + 688) == 1 )
    {
      FIELD_U32(a1, 9940) = 3;
      return PlayerBase_dispatchVirtual3(a1 + 11356, 48, 0.0);
    }
    else
    {
      result = sub_60786738(a1 + 688);
      if ( result == 1 )
      {
        FIELD_U32(a1, 9940) = 2;
        return PlayerBase_dispatchVirtual3(a1 + 11356, 47, 0.0);
      }
    }
  }
  else
  {
    FIELD_U32(a1, 80) = v2;
    return Player_changeState(a1, (StateBase *)&unk_60CC4C04, 1);
  }
  return result;
}
