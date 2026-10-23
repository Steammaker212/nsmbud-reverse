/* sub_60218DAC
 * address: 0x60218DAC   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60218DAC(int a1)
{
  _DWORD *v2; // r4
  int v3; // r0

  v2 = (_DWORD *)dword_60C8D3F0;
  if ( !dword_60C8D3F0 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x2Cu, a1, 4);
    sead__IDisposer__ctor(v2, a1, 3u);
    *v2 = off_60BD922C;
    dword_60C8D3EC = (int)v2;
    v2[4] = 180;
    v2[6] = -1;
    v2[7] = 0;
    v2[8] = 0;
    v2[9] = 0;
    v2[10] = 0;
    if ( FIELD_U32(dword_60CC6D78, 412) == 2 && sub_6040E460(FIELD_U8(dword_60CC6D78, 424)) == 1 )
      v3 = FIELD_U8(dword_60CC6D78, 504);
    else
      v3 = (12 * (unsigned __int64)sead__Random__getU32((void *)sead__GlobalRandom__sInstance)) >> 32;
    v2[5] = v3;
    dword_60C8D3F0 = (int)v2;
  }
  return v2;
}
