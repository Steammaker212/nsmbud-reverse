/* sub_604D8594
 * address: 0x604D8594   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D8594(_DWORD *a1)
{
  int result; // r0
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = sub_604DC7E0(0);
  sub_60473DE4(a1 + 1448, 0, v3, 0);
  *(_BYTE *)(a1[1443] + 64) &= ~1u;
  *(_BYTE *)(a1[1444] + 64) &= ~1u;
  *(_BYTE *)(a1[1445] + 64) &= ~1u;
  *(_BYTE *)(a1[1446] + 64) &= ~1u;
  result = a1[1447];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
