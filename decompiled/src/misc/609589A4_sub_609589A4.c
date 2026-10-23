/* sub_609589A4
 * address: 0x609589A4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609589A4(int a1)
{
  FIELD_U16(a1, 360) = 0;
  if ( FIELD_U8(a1, 200) )
    sub_6083CD6C((_BYTE *)(a1 + 200));
  nullsub_1342();
  return a1;
}
