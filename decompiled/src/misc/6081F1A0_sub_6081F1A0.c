/* sub_6081F1A0
 * address: 0x6081F1A0   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081F1A0(int a1, void *a2)
{
  int v4; // r7

  v4 = a1 + 101848;
  sub_6042C4DC(a1 + 101848, a2, dword_60B0DDF4);
  sub_6042BD4C(a1 + 98552, v4);
  sub_6042C4DC(a1 + 103632, a2, dword_60B0DDF4);
  sub_6042BD4C(a1 + 99376, a1 + 103632);
  sub_6042C4DC(a1 + 105416, a2, dword_60B0DDF4);
  sub_6042BD4C(a1 + 100200, a1 + 105416);
  sub_6042C4DC(a1 + 107200, a2, dword_60B0DDF4);
  return sub_6042BD4C(a1 + 101024, a1 + 107200);
}
