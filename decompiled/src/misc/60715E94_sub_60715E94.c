/* sub_60715E94
 * address: 0x60715E94   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60715E94(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int TileLayer; // r1
  int v7; // r0
  unsigned __int16 *TilePtr; // r1
  int v9; // r1

  TileLayer = TilesetManager_getTileLayer(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), a4);
  v7 = 0xFFFF;
  if ( TileLayer )
  {
    TilePtr = (unsigned __int16 *)TileLayer_getTilePtr(TileLayer, a2, a3, 0);
    v7 = 0xFFFF;
    if ( TilePtr )
      v7 = sub_6071B734(*TilePtr);
  }
  v9 = v7 & 0x3FF;
  if ( v7 == 0xFFFF )
    return 0xFFFF;
  return v9;
}
