/* sub_60440D94
 * address: 0x60440D94   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60440D94(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  *a1 = off_60BFAC28;
  v2 = a1 + 274;
  sub_60913BB4(a1 + 2);
  a1[2] = off_60BFAC38;
  sub_60913BB4(a1 + 9);
  a1[9] = off_60BF9CB0;
  sub_60922344(a1 + 16);
  sub_60919C54(a1 + 84);
  sub_60921AE8(a1 + 104);
  sub_6091ABEC(a1 + 188);
  v4[0] = 1151336448;
  v4[1] = 1144258560;
  ((void (__fastcall *)(_DWORD *, _DWORD *, float, float, float, float))loc_60919ED8)(v2, v4, 0.0, 0.0, 1920.0, 1080.0);
  return a1;
}
