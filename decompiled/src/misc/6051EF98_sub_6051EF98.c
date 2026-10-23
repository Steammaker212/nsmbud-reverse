/* sub_6051EF98
 * address: 0x6051EF98   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6051EF98(_WORD *a1)
{
  *(_DWORD *)a1 = off_60BFFD9C;
  a1[6502] = 0;
  sub_6045C0A0((int)(a1 + 7312));
  sub_6045C0A0((int)(a1 + 7110));
  sub_6045C0A0((int)(a1 + 6908));
  sub_6045C0A0((int)(a1 + 6706));
  sub_6045C0A0((int)(a1 + 6504));
  sub_6050A4C4((int)(a1 + 2894));
  sub_605021B0((_DWORD *)a1 + 927);
  sub_60475AE8((_DWORD *)a1 + 10);
  operator_delete(a1);
}
