/* sub_60815080
 * address: 0x60815080   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60815080(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60CC6B68;
  if ( !dword_60CC6B68 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x4Cu, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60C2A094;
    dword_60CC6B64 = (int)result;
    *((_BYTE *)result + 65) = 0;
    dword_60CC6B68 = (int)result;
  }
  return result;
}
