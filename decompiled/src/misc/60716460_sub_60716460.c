/* sub_60716460
 * address: 0x60716460   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60716460(int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  float WrappedXPos; // s16
  int TileLayer; // r0
  unsigned int v11; // r4
  _WORD *TilePtr; // r0
  int v13; // r1
  int v14; // r3
  unsigned int v15; // r0
  __int64 v16; // r0
  int v17; // r2
  int v18; // r4
  int result; // r0
  int v20; // r0
  _BOOL4 v21; // r6
  unsigned __int16 *v22; // r0
  unsigned __int64 v23[5]; // [sp+0h] [bp-28h] BYREF

  WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, (float)(__int16)a2);
  TileLayer = TilesetManager_getTileLayer(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), a4);
  if ( TileLayer )
  {
    LOWORD(v11) = 0;
    TilePtr = (_WORD *)TileLayer_getTilePtr(TileLayer, (unsigned int)WrappedXPos, a3, 0);
    LOBYTE(v13) = 0;
    if ( TilePtr )
    {
      v14 = *TilePtr & 0x3FF;
      v11 = *(_DWORD *)(FIELD_U32(a1, 20) + 8 * v14);
      v15 = *(_DWORD *)(FIELD_U32(a1, 20) + 8 * v14 + 4);
      v23[0] = __PAIR64__(v15, v11);
      if ( a5 == 1 )
      {
        v16 = sub_6071B680(v23);
        LOWORD(v11) = v16;
        v23[0] = v16;
        v13 = v16 >> 16;
      }
      else
      {
        v13 = HIWORD(v11) | (v15 << 16);
      }
    }
  }
  else
  {
    LOWORD(v11) = 0;
    LOBYTE(v13) = 0;
  }
  v17 = (unsigned __int16)v11;
  v18 = (unsigned __int8)v13;
  LOWORD(result) = 112;
  if ( v17 == 3 )
  {
    if ( !(_BYTE)v13 )
      LOWORD(result) = 4;
  }
  else if ( v17 == 6 )
  {
    v20 = TilesetManager_getTileLayer(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), a4);
    v21 = 0;
    if ( v20 )
    {
      v22 = (unsigned __int16 *)TileLayer_getTilePtr(v20, a2, a3, 0);
      if ( v22 )
        v21 = *v22 < 0x400u;
    }
    LOWORD(result) = 112;
    if ( v21 )
      LOWORD(result) = 2;
    if ( v18 )
      LOWORD(result) = 112;
  }
  return (unsigned __int16)result;
}
