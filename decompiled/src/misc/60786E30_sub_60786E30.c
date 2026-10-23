/* sub_60786E30
 * address: 0x60786E30   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60786E30(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  result = PlayerMgr_instance;
  if ( !PlayerMgr_instance )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0xD4u, a1, 4);
    v4 = sead__IDisposer__ctor(v3, a1, 3u);
    *v4 = off_60C24A74;
    dword_60CC4368 = (int)v4;
    result = sub_60786EA8();
    PlayerMgr_instance = result;
  }
  return result;
}
