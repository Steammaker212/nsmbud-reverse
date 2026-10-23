/* BlockBase__onExecute
 * address: 0x605638C8   size: 188   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by:
//   - 0x60565EE8 : BrickBlockHuge
//   - 0x60569668 : FlyingBlockForAmbush
int __fastcall BlockBase__onExecute(int a1)
{
  ColliderBase *v2; // r5

  if ( FIELD_U8(a1, 7312) )
  {
    v2 = (ColliderBase *)(a1 + 6120);
    if ( !sub_60003B88(a1, (_DWORD *)(a1 + 6120)) )
      ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 7240, a1 + 108);
  }
  else
  {
    v2 = (ColliderBase *)(a1 + 6120);
  }
  StateMgr__execute((StateMgr *)(a1 + 6084));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 372))(a1);
  FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
  ShapedCollider_execute(v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 388))(a1);
  sub_605B2D70(a1);
  if ( FIELD_U8(a1, 7384) )
    StageActor__cullCheck((StageActor *)a1, 16);
  return 1;
}
