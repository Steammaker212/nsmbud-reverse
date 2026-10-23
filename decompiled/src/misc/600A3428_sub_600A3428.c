/* sub_600A3428
 * address: 0x600A3428   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600A3428(int a1)
{
  int v2; // [sp+4h] [bp-Ch] BYREF

  ((void (__fastcall *)(int *, int, int, _DWORD))checkLiquidCollisions)(
    &v2,
    a1 + 6764,
    a1 + 108,
    FIELD_U8(a1, 86));
  return (unsigned int)(v2 - 3) < 2;
}
