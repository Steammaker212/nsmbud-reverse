/* sub_60715F24
 * address: 0x60715F24   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60715F24(int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  int TileLayer; // r1
  unsigned int result; // r0
  unsigned __int16 *TilePtr; // r1

  TileLayer = TilesetManager_getTileLayer(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), a4);
  result = 0xFFFF;
  if ( TileLayer )
  {
    TilePtr = (unsigned __int16 *)TileLayer_getTilePtr(TileLayer, a2, a3, 0);
    result = 0xFFFF;
    if ( TilePtr )
    {
      result = *TilePtr;
      if ( a5 == 1 )
        result = sub_6071B734(result);
    }
  }
  if ( result != 0xFFFF )
    result >>= 10;
  return result;
}
