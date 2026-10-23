/* sub_605BC6F8
 * address: 0x605BC6F8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BC6F8(int a1)
{
  float v2; // s0
  int v3; // r0

  StateMgr__execute((StateMgr *)(a1 + 6084));
  ActorScaler_execute((ActorScaler *)(a1 + 7140));
  ((void (__fastcall *)(int))loc_605BC428)(a1);
  v2 = FIELD_F32(a1, 6800) - FIELD_F32(a1, 112);
  FIELD_F32(a1, 6956) = v2 + FIELD_F32(a1, 6820);
  if ( FIELD_U32(a1, 6784) )
  {
LABEL_2:
    v3 = 6764;
    goto LABEL_3;
  }
  if ( FIELD_U32(a1, 6788) != 3 )
  {
    if ( v2 <= 0.0 )
      goto LABEL_4;
    goto LABEL_2;
  }
  if ( v2 >= 0.0 )
    goto LABEL_4;
  v3 = 6772;
LABEL_3:
  *(float *)(a1 + v3) = v2;
  sub_60165340(a1 + 6104, (_DWORD *)(a1 + 6760), (_DWORD *)(a1 + 6768));
LABEL_4:
  ShapedCollider_execute((ColliderBase *)(a1 + 6104));
  return 1;
}
