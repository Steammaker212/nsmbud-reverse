/* GiantWiggler_onCreate_helper
 * address: 0x60255810   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall GiantWiggler_onCreate_helper(_DWORD *a1)
{
  int v2; // r7
  _DWORD *v3; // r6
  int v4; // r8
  _DWORD *v5; // r7
  _DWORD *v6; // r6
  int v7; // r0
  _DWORD *result; // r0

  v2 = a1[20];
  v3 = (_DWORD *)operator_new(0xBCu);
  v4 = (unsigned __int8)byte_60AFE3F4[v2] << 30;
  sub_60257AE8(v3, 0, v4, 0, a1, 1);
  *v3 = off_60BDAB20;
  a1[1594] = 1084227584;
  a1[1625] = v3;
  v5 = (_DWORD *)operator_new(0xBCu);
  sub_60257AE8(v5, 0, v4, 0, a1, 2);
  v3[15] = 1084227584;
  *v5 = off_60BDAB20;
  v3[46] = v5;
  v6 = (_DWORD *)operator_new(0xBCu);
  sub_60257AE8(v6, 0, v4, 0, a1, 3);
  v5[15] = 1084227584;
  *v6 = off_60BDAB20;
  v5[46] = v6;
  v7 = operator_new(0xBCu);
  result = (_DWORD *)sub_60257AE8(v7, 0, v4, 0, a1, 4);
  v6[15] = 1084227584;
  *result = off_60BDAB20;
  v6[46] = result;
  return result;
}
