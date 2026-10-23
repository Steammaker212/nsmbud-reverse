/* sub_6051EF08
 * address: 0x6051EF08   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051EF08(int a1)
{
  *(_DWORD *)a1 = off_60BFFD9C;
  FIELD_U16(a1, 13004) = 0;
  sub_6045C0A0(a1 + 14624);
  sub_6045C0A0(a1 + 14220);
  sub_6045C0A0(a1 + 13816);
  sub_6045C0A0(a1 + 13412);
  sub_6045C0A0(a1 + 13008);
  sub_6050A4C4(a1 + 5788);
  sub_605021B0((_DWORD *)(a1 + 3708));
  sub_60475AE8((_DWORD *)(a1 + 40));
  return a1;
}
