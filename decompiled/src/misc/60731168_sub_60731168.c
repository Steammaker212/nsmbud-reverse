/* sub_60731168
 * address: 0x60731168   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60731168(int a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  v2 = (_DWORD *)dword_60CBDBF8;
  if ( !dword_60CBDBF8 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x3CBCu, a1, 4);
    v3 = sead__IDisposer__ctor(v2 + 1, a1, 3u);
    v2[1] = off_60C22750;
    dword_60CBDBF4 = (int)v3;
    *v2 = off_60C22760;
    sub_604F9FF4((int)(v2 + 5));
    sub_6052EB9C((int)(v2 + 1036));
    dword_60CBDBF8 = (int)v2;
  }
  return v2;
}
