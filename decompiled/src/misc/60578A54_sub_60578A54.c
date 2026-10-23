/* sub_60578A54
 * address: 0x60578A54   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60578A54(int a1)
{
  int v2; // r0
  bool v3; // zf

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_U32(a1, 7300);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U32(a1, 7304) == 0;
  if ( !v3 )
  {
    MovementHandler__execute((MovementHandler *)(a1 + 6992));
    if ( FIELD_U32(a1, 7040) == 1 && FIELD_U32(a1, 7060) != 1 )
    {
      FIELD_U32(a1, 108) = FIELD_U32(a1, 6992);
      FIELD_F32(a1, 112) = FIELD_F32(a1, 6996) + FIELD_F32(a1, 6796);
      FIELD_U32(a1, 164) = FIELD_U32(a1, 7072);
    }
  }
  FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  sub_605B2D70(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
