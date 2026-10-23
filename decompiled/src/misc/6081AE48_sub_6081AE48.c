/* sub_6081AE48
 * address: 0x6081AE48   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6081AE48(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60CC6C28;
  if ( !dword_60CC6C28 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x28u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60C2A410;
    dword_60CC6C24 = (int)result;
    result[4] = 0;
    result[5] = -1;
    result[6] = -1;
    result[7] = 0;
    result[8] = 0;
    result[9] = 0;
    dword_60CC6C28 = (int)result;
  }
  return result;
}
