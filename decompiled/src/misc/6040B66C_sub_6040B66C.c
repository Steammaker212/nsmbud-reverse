/* sub_6040B66C
 * address: 0x6040B66C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6040B66C(_DWORD *a1)
{
  int v2; // r7

  *a1 = off_60BF9AE8;
  if ( (_DWORD *)dword_60C9A22C == a1 )
  {
    dword_60C9A22C = 0;
    v2 = dword_60C9A230;
    sub_6045C0A0(dword_60C9A230 + 1668);
    sub_6045C0A0(v2 + 1264);
    sub_6045C0A0(v2 + 860);
    sub_6045C0A0(v2 + 456);
    sub_6045C0A0(v2 + 52);
    dword_60C9A230 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
