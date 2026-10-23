/* sub_6071A7C8
 * address: 0x6071A7C8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071A7C8(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  result = TilesetMgr_instance;
  if ( !TilesetMgr_instance )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x3E0u, a1, 4);
    v4 = sead__IDisposer__ctor(v3, a1, 3u);
    *v4 = off_60C21D34;
    dword_60CBD824 = (int)v4;
    result = sub_6071A840();
    TilesetMgr_instance = result;
  }
  return result;
}
