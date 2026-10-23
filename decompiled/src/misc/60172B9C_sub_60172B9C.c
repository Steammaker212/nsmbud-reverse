/* sub_60172B9C
 * address: 0x60172B9C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60172B9C(int a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  v2 = (_DWORD *)dword_60C88BC8;
  if ( !dword_60C88BC8 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x274u, a1, 4);
    v3 = sead__IDisposer__ctor(v2 + 153, a1, 3u);
    v2[153] = off_60BD4D20;
    dword_60C88BC4 = (int)v3;
    sub_601709B4((int)v2, 5);
    *v2 = &off_60BD4D30;
    dword_60C88BC8 = (int)v2;
  }
  return v2;
}
