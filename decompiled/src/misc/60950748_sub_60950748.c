/* sub_60950748
 * address: 0x60950748   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60950748(_DWORD *a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  v2 = (_DWORD *)dword_60CD0A14;
  if ( !dword_60CD0A14 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x264u, (int)a1, 4);
    v3 = sead__IDisposer__ctor(v2 + 1, a1, 3u);
    v2[1] = off_60C5E8A0;
    dword_60CD0A10 = (int)v3;
    *v2 = off_60C5E8B0;
    sub_609394E8((int)(v2 + 31));
    memset(v2 + 5, 0, 104);
    dword_60CD0A14 = (int)v2;
  }
  return v2;
}
