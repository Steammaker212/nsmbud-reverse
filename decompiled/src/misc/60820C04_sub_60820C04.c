/* sub_60820C04
 * address: 0x60820C04   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60820C04(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60CC6D8C;
  if ( !dword_60CC6D8C )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x18u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60C2A5A0;
    dword_60CC6D88 = (int)result;
    *((_BYTE *)result + 16) = 0;
    *((_BYTE *)result + 17) = 0;
    result[5] = 0;
    dword_60CC6D8C = (int)result;
  }
  return result;
}
