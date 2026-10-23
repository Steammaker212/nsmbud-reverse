/* sub_60236FD4
 * address: 0x60236FD4   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60236FD4(float *a1)
{
  int v2; // r4

  v2 = 0;
  if ( LevelInfo_instance )
  {
    if ( TilesetMgr_instance )
    {
      v2 = 1;
      if ( TilesetManager_getTileLayer(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), 2u) )
      {
        if ( TileMgr_instance )
          return sub_607161E4(TileMgr_instance, (unsigned __int16)(int)*a1, (unsigned __int16)(int)(float)-a1[1], 2) == 0;
        return 0;
      }
    }
  }
  return v2;
}
