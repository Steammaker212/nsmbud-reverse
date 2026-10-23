/* sub_6072990C
 * address: 0x6072990C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6072990C(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)EventMgr__instance;
  if ( !EventMgr__instance )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x940u, a1, 8);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60C21E24;
    dword_60CBD8A8 = (int)result;
    EventMgr__instance = (int)result;
  }
  return result;
}
