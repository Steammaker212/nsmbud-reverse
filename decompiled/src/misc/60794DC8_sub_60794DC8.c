/* sub_60794DC8
 * address: 0x60794DC8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60794DC8(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD *v12; // r7

  sub_60794828(a1);
  *a1 = off_60C24C60;
  v12 = (_DWORD *)operator_new(0x4A0u);
  MiiAnm_ref((int)v12, 8, a2, 3, a3, a4, a5, a6, a7, a8);
  a1[3] = v12;
  sub_60794848((int)a1, v12);
  (*(void (__fastcall **)(_DWORD, int, _DWORD))(*(_DWORD *)a1[3] + 176))(a1[3], 1, 0);
  return a1;
}
