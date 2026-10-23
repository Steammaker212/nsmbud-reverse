/* sub_607161E4
 * address: 0x607161E4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607161E4(int a1, __int16 a2, unsigned int a3, unsigned int a4)
{
  float WrappedXPos; // s16
  int TileLayer; // r0
  int v9; // r6
  __int16 *TilePtr; // r0
  __int16 v11; // r1
  int v12; // r0
  _DWORD v14[8]; // [sp+0h] [bp-20h] BYREF

  WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, (float)a2);
  TileLayer = TilesetManager_getTileLayer(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), a4);
  if ( !TileLayer )
    return 0;
  v9 = 0;
  TilePtr = (__int16 *)TileLayer_getTilePtr(TileLayer, (unsigned int)WrappedXPos, a3, 0);
  if ( TilePtr )
  {
    v11 = *TilePtr;
    v12 = *(_DWORD *)(FIELD_U32(a1, 20) + 8 * (*TilePtr & 0x3FF) + 4);
    v14[0] = *(_DWORD *)(FIELD_U32(a1, 20) + 8 * (v11 & 0x3FF));
    v14[1] = v12;
    return ((unsigned __int64)sub_6071B680(v14) >> 32) & 0xF;
  }
  return v9;
}
