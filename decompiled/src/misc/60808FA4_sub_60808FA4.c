/* sub_60808FA4
 * address: 0x60808FA4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60808FA4(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v6; // [sp+4h] [bp-14h] BYREF

  v3 = sub_60805BA8(a1);
  v4 = sub_608DC930(FIELD_U32(v3, 456));
  sub_608A9E64(v4, &v6, a2);
  return v6;
}
