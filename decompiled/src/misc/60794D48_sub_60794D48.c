/* sub_60794D48
 * address: 0x60794D48   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60794D48(_DWORD *a1, int a2, int a3, int a4, signed int a5)
{
  _DWORD *v9; // r0

  sub_60794828(a1);
  *a1 = off_60C24C60;
  v9 = (_DWORD *)sub_60794BDC(a2, a3, a4, 0xFFFFFFFF, a5);
  a1[3] = v9;
  sub_60794848((int)a1, v9);
  (*(void (__fastcall **)(_DWORD, int, _DWORD))(*(_DWORD *)a1[3] + 176))(a1[3], 1, 0);
  return a1;
}
