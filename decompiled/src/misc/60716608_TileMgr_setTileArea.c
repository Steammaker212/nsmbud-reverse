/* TileMgr_setTileArea
 * address: 0x60716608   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int16 *__fastcall TileMgr_setTileArea(
        int this,
        __int16 a2,
        unsigned int a3,
        unsigned int areaId,
        unsigned int layer,
        int a6)
{
  float WrappedXPos; // s16
  unsigned __int16 *tileLayer; // r0
  unsigned int v10; // r7
  unsigned __int16 *v11; // r4
  __int16 v12; // r11
  __int16 v13; // r0
  __int16 v14; // [sp+Ah] [bp-36h] BYREF
  unsigned int v15[13]; // [sp+Ch] [bp-34h] BYREF

  WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, (float)a2);
  tileLayer = (unsigned __int16 *)TilesetManager_getTileLayer(TilesetMgr_instance, areaId, (unsigned __int8)layer);
  if ( tileLayer )
  {
    v10 = (unsigned int)WrappedXPos;
    tileLayer = (unsigned __int16 *)TileLayer_getTilePtr((int)tileLayer, (unsigned int)WrappedXPos, a3, v15);
    v11 = tileLayer;
    if ( tileLayer )
    {
      v14 = 0;
      if ( sub_6071B638(*tileLayer, &v14) == 1 )
      {
        v12 = sub_6071B2FC(
                TilesetMgr_instance,
                FIELD_U8(LevelInfo_instance, 18),
                ((unsigned __int8)a3 >> 4) | (4 * a3) & 0x3C00 | (v10 >> 4) & 0x3F0,
                layer);
        v13 = sub_60723478((unsigned __int8)v10 >> 4);
        sub_6071B32C(
          TilesetMgr_instance,
          FIELD_U8(LevelInfo_instance, 18),
          ((unsigned __int8)a3 >> 4) | (4 * a3) & 0x3C00 | (v10 >> 4) & 0x3F0,
          layer,
          v13 | v12);
      }
      tileLayer = (unsigned __int16 *)TileMgr_setTileArea_helper((unsigned __int16)a6);
      if ( tileLayer != (unsigned __int16 *)0xFFFF )
        goto LABEL_6;
      if ( a6 == 84 )
      {
        tileLayer = (unsigned __int16 *)(*v11 | 0x400);
        goto LABEL_6;
      }
      if ( a6 == 83 )
      {
        tileLayer = (unsigned __int16 *)(*v11 & 0x3FF);
LABEL_6:
        *v11 = (unsigned __int16)tileLayer;
      }
    }
  }
  return tileLayer;
}
