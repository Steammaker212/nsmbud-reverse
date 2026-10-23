/* sub_60842BC0
 * address: 0x60842BC0   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60842BC0(int a1)
{
  sub_6083DC90((_DWORD *)a1);
  sub_6083DC90((_DWORD *)(a1 + 72));
  sub_6083DC90((_DWORD *)(a1 + 144));
  sub_6083DC90((_DWORD *)(a1 + 216));
  sub_608492B0(a1 + 288);
  sub_608492B0(a1 + 504);
  sub_608492B0(a1 + 720);
  sub_608492B0(a1 + 936);
  sub_60847FC8(a1 + 1152);
  sub_60847FC8(a1 + 1448);
  sub_60847FC8(a1 + 1744);
  FIELD_U8(a1, 2041) = 1;
  FIELD_U8(a1, 2040) = 1;
  FIELD_U8(a1, 2043) = 1;
  FIELD_U8(a1, 2042) = 1;
  return a1;
}
