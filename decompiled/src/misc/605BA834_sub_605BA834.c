/* sub_605BA834
 * address: 0x605BA834   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BA834(int a1)
{
  int v3; // [sp+4h] [bp-54h] BYREF
  _BYTE v4[80]; // [sp+8h] [bp-50h] BYREF

  memset(v4, 0, 64);
  v3 = 0;
  FIELD_U16(a1, 8170) = sub_606BAB1C(v4, &v3, a1 + 7456);
  sub_605BB7F0(a1 + 6100);
  ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 8112, a1 + 108);
  return ShapedCollider_execute((ColliderBase *)(a1 + 7456));
}
