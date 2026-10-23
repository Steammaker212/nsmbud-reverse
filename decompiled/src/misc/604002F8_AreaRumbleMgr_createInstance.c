/* AreaRumbleMgr_createInstance
 * address: 0x604002F8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall AreaRumbleMgr_createInstance(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)AreaRumbleMgr_instance;
  if ( !AreaRumbleMgr_instance )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x58u, a1, 4);
    sead__IDisposer__ctor(v2, a1, 3u);
    *v2 = off_60BF9844;
    dword_60C99E38 = (int)v2;
    memset(v2 + 4, 0, 50);
    v2[17] = 0;
    v2[18] = 0;
    v2[19] = 0;
    v2[20] = 0;
    v2[21] = 0;
    AreaRumbleMgr_instance = (int)v2;
  }
  return v2;
}
