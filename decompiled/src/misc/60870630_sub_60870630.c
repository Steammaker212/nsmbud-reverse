/* sub_60870630
 * address: 0x60870630   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60870630(int result, int *a2)
{
  int v3; // r1
  int v4; // r0
  int v5; // [sp+4h] [bp-14h] BYREF

  v3 = FIELD_U16(result, 46);
  if ( v3 != 0xFFFF )
  {
    v4 = FIELD_U32(result, 24);
    v5 = 2139095040;
    result = ((int (__fastcall *)(int, int *))loc_6086E97C)(v4 + 48 * v3, &v5);
    *a2 = result;
  }
  return result;
}
