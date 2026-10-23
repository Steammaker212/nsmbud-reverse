/* sub_6057102C
 * address: 0x6057102C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057102C(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( !FIELD_U32(a1, 7456) )
    StateMgr__execute((StateMgr *)(a1 + 7488));
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  ActorScaler_execute((ActorScaler *)(a1 + 7432));
  sub_60570EA8((ModelWrapper **)a1);
  sub_605B2D70(a1);
  return 1;
}
