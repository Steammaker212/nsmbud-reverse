/* sub_608199F0
 * address: 0x608199F0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608199F0(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60CC6BF4;
  if ( !dword_60CC6BF4 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x28u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60C2A2B0;
    dword_60CC6BF0 = (int)result;
    *((_BYTE *)result + 16) = 0;
    *((_WORD *)result + 16) = 0;
    result[5] = 0;
    result[6] = 0;
    result[7] = 0;
    dword_60CC6BF4 = (int)result;
  }
  return result;
}
