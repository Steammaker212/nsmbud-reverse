/* sub_60715E18
 * address: 0x60715E18   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60715E18(unsigned int a1, unsigned int a2, unsigned int a3, int a4)
{
  int TileLayer; // r0
  int v8; // r5
  unsigned __int16 *TilePtr; // r0

  TileLayer = TilesetManager_getTileLayer(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), a3);
  v8 = 0xFFFF;
  if ( TileLayer
    && (TilePtr = (unsigned __int16 *)TileLayer_getTilePtr(TileLayer, a1, a2, 0)) != 0
    && (v8 = *TilePtr, a4 == 1) )
  {
    return sub_6071B734(*TilePtr);
  }
  else
  {
    return v8;
  }
}
