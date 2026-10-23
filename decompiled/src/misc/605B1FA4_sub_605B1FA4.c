/* sub_605B1FA4
 * address: 0x605B1FA4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B1FA4(int a1)
{
  if ( !FIELD_U16(a1, 6764) && !sub_605B2460(a1) )
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB03E0);
  return ShapedCollider_execute((ColliderBase *)(a1 + 6104));
}
