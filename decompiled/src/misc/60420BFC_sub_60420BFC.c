/* sub_60420BFC
 * address: 0x60420BFC   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60420BFC(int a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  v2 = (_DWORD *)dword_60C9BAFC;
  if ( !dword_60C9BAFC )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x3Cu, a1, 4);
    v3 = sead__IDisposer__ctor(v2 + 1, a1, 3u);
    v2[1] = off_60BF9E88;
    dword_60C9BAF8 = (int)v3;
    *v2 = &off_60BF9E98;
    v2[5] = 0;
    v2[6] = &off_60BF9EA8;
    v2[8] = v2;
    v2[9] = sub_60420CD8;
    v2[10] = 0;
    v2[7] = off_60BF9ECC;
    dword_60C9BAFC = (int)v2;
  }
  return v2;
}
