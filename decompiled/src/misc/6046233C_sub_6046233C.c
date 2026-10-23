/* sub_6046233C
 * address: 0x6046233C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046233C(int a1, int a2, int a3)
{
  int result; // r0
  int v4; // [sp+4h] [bp-Ch] BYREF

  ((void (__fastcall *)(int *, int, int, _DWORD))checkLiquidCollisions)(&v4, a2, a3, FIELD_U8(a1, 86));
  result = 0;
  if ( v4 == 6 )
    result = 2;
  if ( v4 == 1 )
    return 1;
  return result;
}
