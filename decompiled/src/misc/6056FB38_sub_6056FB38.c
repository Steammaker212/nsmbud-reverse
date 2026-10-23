/* sub_6056FB38
 * address: 0x6056FB38   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056FB38(int a1)
{
  ColliderBase *v2; // r5

  v2 = (ColliderBase *)(a1 + 6120);
  if ( !sub_60003B88(a1, (_DWORD *)(a1 + 6120)) )
    ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 7240, a1 + 108);
  ((void (__fastcall *)(int))loc_6056FBD8)(a1);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( FIELD_U8(a1, 7436) && !FIELD_U32(a1, 7464) )
    StateMgr__execute((StateMgr *)(a1 + 7496));
  ShapedCollider_execute(v2);
  ActorScaler_execute((ActorScaler *)(a1 + 7440));
  sub_6056F9A4(a1);
  sub_605B2D70(a1);
  return 1;
}
