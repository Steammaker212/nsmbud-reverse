/* sub_606C0C74
 * address: 0x606C0C74   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C0C74(int a1)
{
  sub_606C0AF8(a1);
  ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 6784, a1 + 108);
  return ShapedCollider_execute((ColliderBase *)(a1 + 6128));
}
