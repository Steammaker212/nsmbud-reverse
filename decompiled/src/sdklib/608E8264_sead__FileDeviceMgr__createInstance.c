/* sead__FileDeviceMgr__createInstance
 * address: 0x608E8264   size: 104   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__FileDeviceMgr__createInstance(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  result = dword_60CCEBD0;
  if ( !dword_60CCEBD0 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x2Cu, a1, 4);
    v4 = sead__IDisposer__ctor(v3, a1, 3u);
    *v4 = off_60C5C238;
    dword_60CCEBCC = (int)v4;
    result = sead__FileDeviceMgr__ctor((int)v4);
    dword_60CCEBD0 = result;
  }
  return result;
}
