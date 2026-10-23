/* sub_60510B20
 * address: 0x60510B20   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60510B20(_DWORD *a1)
{
  _DWORD *v2; // r7

  *a1 = off_60BFF894;
  if ( (_DWORD *)dword_60CA83D8 == a1 )
  {
    dword_60CA83D8 = 0;
    v2 = (_DWORD *)dword_60CA83DC;
    sub_6045C0A0(dword_60CA83DC + 11200);
    sub_6045C0A0((int)(v2 + 2699));
    sub_6045C0A0((int)(v2 + 2598));
    sub_6045C0A0((int)(v2 + 2497));
    sub_6045C0A0((int)(v2 + 2396));
    sub_60506EB8(v2 + 1481);
    sub_605021B0(v2 + 926);
    sub_60475AE8(v2 + 14);
    dword_60CA83DC = 0;
  }
  return sead__IDisposer__dtor(a1);
}
