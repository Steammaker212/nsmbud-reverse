/* sub_60802770
 * address: 0x60802770   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_60802770()
{
  _BOOL4 result; // r0
  int v1; // r0
  int v2; // r2
  int v3; // r0
  int v4; // r2
  int v5; // r0
  int v6; // r2
  int v7; // r0

  result = 0;
  if ( PlayerMgr_instance )
  {
    v1 = FIELD_U32(PlayerMgr_instance, 32);
    if ( !v1 || (v2 = FIELD_U32(v1, 1320), result = 1, v2 != 8) )
    {
      v3 = FIELD_U32(PlayerMgr_instance, 36);
      if ( !v3 || (v4 = FIELD_U32(v3, 1320), result = 1, v4 != 8) )
      {
        v5 = FIELD_U32(PlayerMgr_instance, 40);
        if ( !v5 || (v6 = FIELD_U32(v5, 1320), result = 1, v6 != 8) )
        {
          v7 = FIELD_U32(PlayerMgr_instance, 44);
          return v7 && FIELD_U32(v7, 1320) == 8;
        }
      }
    }
  }
  return result;
}
