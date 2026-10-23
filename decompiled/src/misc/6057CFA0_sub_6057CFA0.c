/* sub_6057CFA0
 * address: 0x6057CFA0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057CFA0(int a1)
{
  int v2; // r0
  _BYTE *v3; // r0

  sub_605D006C(a1);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  sub_6057A200(a1);
  ActorScaler_execute((ActorScaler *)(a1 + 7556));
  sub_60579D4C(a1);
  balloon_coin_model_ref_3(a1);
  sub_605B2D70(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  if ( v2 == 1 && (FIELD_U8(a1, 24) & 1) != 0 )
  {
    v3 = *(_BYTE **)(a1 + 632);
    if ( v3 )
      *v3 = 1;
  }
  return 1;
}
