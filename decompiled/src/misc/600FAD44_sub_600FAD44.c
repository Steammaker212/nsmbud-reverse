/* sub_600FAD44
 * address: 0x600FAD44   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600FAD44(signed int result, unsigned int a2)
{
  unsigned int v2; // r5
  int v3; // r4

  if ( a2 >= 3 )
    a2 = 0;
  v2 = *(_DWORD *)(result + 4 * a2 + 6156);
  if ( v2 <= 3 )
  {
    v3 = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32);
    if ( v3 )
    {
      if ( FIELD_U32(result, 6112) == v2
        || (result = FIELD_U8(result, 6104)) == 0
        && (result = PlayerMgr_hasPlayer(PlayerMgr_instance, v2), result == 1)
        && (result = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32)) != 0
        && (result = sub_6075EDF8(result)) == 0 )
      {
        result = FIELD_U32(v3, 648);
        if ( result )
        {
          result = sub_60793CA8(FIELD_U32(result, 4));
          if ( result == 1 )
            return sub_60768F28(v3, 203, 0);
        }
      }
    }
  }
  return result;
}
