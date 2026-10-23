/* sub_608FC0A4
 * address: 0x608FC0A4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608FC0A4(_DWORD *a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60CCEF74;
  if ( !dword_60CCEF74 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x24u, (int)a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60C5CB24;
    dword_60CCEF70 = (int)result;
    result[4] = 0;
    result[5] = &sead__SafeStringBase__vtable;
    result[6] = &byte_60B3BA34;
    result[7] = 0;
    *((_BYTE *)result + 32) = 0;
    dword_60CCEF74 = (int)result;
  }
  return result;
}
