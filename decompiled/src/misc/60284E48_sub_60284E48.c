/* sub_60284E48
 * address: 0x60284E48   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_60284E48()
{
  int v0; // r2
  _BOOL4 result; // r0
  int v2; // r2
  int v3; // r2
  int v4; // r1

  v0 = FIELD_U32(PlayerMgr_instance, 32);
  if ( !v0
    || (FIELD_U8(v0, 1219) & 8) != 0
    || (result = 1, (FIELD_U16(v0, 1212) & 0x140) == 0) && (FIELD_U8(v0, 1211) & 8) == 0 )
  {
    v2 = FIELD_U32(PlayerMgr_instance, 36);
    if ( !v2
      || (FIELD_U8(v2, 1219) & 8) != 0
      || (result = 1, (FIELD_U16(v2, 1212) & 0x140) == 0) && (FIELD_U8(v2, 1211) & 8) == 0 )
    {
      v3 = FIELD_U32(PlayerMgr_instance, 40);
      if ( !v3
        || (FIELD_U8(v3, 1219) & 8) != 0
        || (result = 1, (FIELD_U16(v3, 1212) & 0x140) == 0) && (FIELD_U8(v3, 1211) & 8) == 0 )
      {
        v4 = FIELD_U32(PlayerMgr_instance, 44);
        if ( !v4 || (FIELD_U8(v4, 1219) & 8) != 0 )
        {
          return 0;
        }
        else
        {
          result = 1;
          if ( (FIELD_U16(v4, 1212) & 0x140) == 0 )
            return (FIELD_U8(v4, 1211) & 8) != 0;
        }
      }
    }
  }
  return result;
}
