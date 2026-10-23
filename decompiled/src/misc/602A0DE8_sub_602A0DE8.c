/* sub_602A0DE8
 * address: 0x602A0DE8   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A0DE8(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x19B8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BE24F4;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6300));
  FIELD_U32(v2, 6300) = off_60BC1450;
  FIELD_U32(v2, 6404) = &off_60BE27A8;
  FIELD_U32(v2, 6408) = &off_60BE27B8;
  FIELD_U32(v2, 6412) = &off_60BE27DC;
  FIELD_U32(v2, 6416) = v2 + 6404;
  FIELD_U32(v2, 6420) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 6424), (StateExecuter *)(v2 + 6408), &NullState);
  FIELD_U32(v2, 6404) = &off_60BE2798;
  memset((void *)(v2 + 6440), 0, 66);
  LightSource__ctor((LightSource *)(v2 + 6508));
  return v2;
}
