/* sub_6040D224
 * address: 0x6040D224   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6040D224(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)LevelInfo_instance;
  if ( !LevelInfo_instance )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x24u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60BF9BD8;
    dword_60C9A680 = (int)result;
    result[4] = -16777216;
    *((_BYTE *)result + 20) = 0;
    *((_BYTE *)result + 30) = 0;
    *((_WORD *)result + 14) = 0;
    result[6] = 0;
    *((_BYTE *)result + 0x1F) = -1;
    result[8] = 0;
    LevelInfo_instance = (int)result;
  }
  return result;
}
