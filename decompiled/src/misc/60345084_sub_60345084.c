/* sub_60345084
 * address: 0x60345084   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60345084(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r0
  float v6; // s0

  v4 = FIELD_U32(a1, 7104);
  v2 = (_DWORD *)(a1 + 7104);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  FIELD_U8(a1, 7108) = FIELD_U8(a1, 7109);
  FIELD_U8(a1, 7109) = 0;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( FIELD_U32(a1, 7100) )
    JUMPOUT(0x6000100C);
  v5 = FIELD_U32(a1, 7080);
  FIELD_U32(a1, 6484) = 0;
  FIELD_U32(a1, 6488) = v5;
  ShapedCollider_execute((ColliderBase *)(a1 + 6312));
  v6 = FIELD_F32(a1, 7080) + FIELD_F32(a1, 7084);
  FIELD_F32(a1, 308) = v6;
  FIELD_F32(a1, 12672) = v6;
  ActorScaler_execute((ActorScaler *)(a1 + 12856));
  sub_60344DF4(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
