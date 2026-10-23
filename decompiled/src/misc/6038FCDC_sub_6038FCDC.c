/* sub_6038FCDC
 * address: 0x6038FCDC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038FCDC(int a1)
{
  float v2; // s2
  float v3; // s4
  float v4; // s6
  float v5; // s0
  float v6; // s2

  StateMgr__execute((StateMgr *)(a1 + 6084));
  FIELD_U8(a1, 6352) = FIELD_U32(a1, 2872) & 1;
  StageActor__cullCheck((StageActor *)a1, 0);
  ActorScaler_execute((ActorScaler *)(a1 + 7064));
  sub_602A33AC((_BYTE *)a1);
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 6332) - v3;
  FIELD_F32(a1, 304) = FIELD_F32(a1, 6328) - v2;
  FIELD_F32(a1, 308) = v4;
  v5 = FIELD_F32(a1, 6340) - v2;
  v6 = FIELD_F32(a1, 6344) - v3;
  FIELD_F32(a1, 6568) = v5;
  FIELD_F32(a1, 6572) = v6;
  return 1;
}
