/* sub_605BF968
 * address: 0x605BF968   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BF968(int a1)
{
  sub_605BF988();
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 8));
  return ShapedCollider_execute((ColliderBase *)(a1 + 456));
}
