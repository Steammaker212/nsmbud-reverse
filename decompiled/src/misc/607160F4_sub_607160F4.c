/* sub_607160F4
 * address: 0x607160F4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607160F4(int a1, __int16 a2, unsigned int a3, unsigned int a4, int a5)
{
  float WrappedXPos; // s16
  int TileLayer; // r0
  unsigned int v10; // r5
  _WORD *TilePtr; // r0
  __int64 v12; // kr00_8
  unsigned __int64 v14; // [sp+0h] [bp-20h] BYREF

  WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, (float)a2);
  TileLayer = TilesetManager_getTileLayer(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), a4);
  if ( !TileLayer )
    return 0;
  v10 = 0;
  TilePtr = (_WORD *)TileLayer_getTilePtr(TileLayer, (unsigned int)WrappedXPos, a3, 0);
  if ( TilePtr )
  {
    v10 = *(_DWORD *)(FIELD_U32(a1, 20) + 8 * (*TilePtr & 0x3FF));
    v14 = __PAIR64__(*(_DWORD *)(FIELD_U32(a1, 20) + 8 * (*TilePtr & 0x3FF) + 4), v10);
    if ( a5 == 1 )
    {
      v12 = sub_6071B680(&v14);
      v10 = v12;
      v14 = v12;
    }
  }
  return v10;
}
