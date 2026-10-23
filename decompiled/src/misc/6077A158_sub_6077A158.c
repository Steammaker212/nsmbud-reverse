/* sub_6077A158
 * address: 0x6077A158   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_6077A158()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0

  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0
    || (v0 = 0, (v1 = sub_60788F54(PlayerMgr_instance, 0)) == 0)
    || (FIELD_U8(v1, 1234) & 0x10) != 0 )
  {
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) == 0
      || (v2 = sub_60788F54(PlayerMgr_instance, 1)) == 0
      || (v0 = 0, (FIELD_U8(v2, 1234) & 0x10) != 0) )
    {
      if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) == 0
        || (v3 = sub_60788F54(PlayerMgr_instance, 2)) == 0
        || (v0 = 0, (FIELD_U8(v3, 1234) & 0x10) != 0) )
      {
        if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
        {
          v4 = sub_60788F54(PlayerMgr_instance, 3);
          if ( v4 )
            return (FIELD_U8(v4, 1234) & 0x10) != 0;
        }
        return 1;
      }
    }
  }
  return v0;
}
