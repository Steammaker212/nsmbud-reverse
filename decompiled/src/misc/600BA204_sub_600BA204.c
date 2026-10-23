/* sub_600BA204
 * address: 0x600BA204   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600BA204(int a1)
{
  int v2; // [sp+0h] [bp-10h] BYREF
  int v3; // [sp+4h] [bp-Ch] BYREF

  v3 = 0;
  ((void (__fastcall *)(int *, int *, int, _DWORD))checkLiquidCollisions)(
    &v2,
    &v3,
    a1 + 108,
    FIELD_U8(a1, 86));
  return (unsigned int)(v2 - 3) < 2;
}
