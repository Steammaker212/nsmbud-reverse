/* sub_6000389C
 * address: 0x6000389C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000389C(int a1, int a2)
{
  int result; // r0
  int v4; // [sp+4h] [bp-Ch] BYREF

  FIELD_U8(a1, 6012) = 1;
  ((void (__fastcall *)(int *, int, _DWORD, _DWORD))checkLiquidCollisions)(
    &v4,
    a2,
    FIELD_U32(a1, 6008),
    FIELD_U8(a1, 86));
  result = v4;
  FIELD_U32(a1, 6016) = v4;
  return result;
}
