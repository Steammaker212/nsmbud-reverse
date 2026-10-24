/* TreasureChest__ctor
 * address: 0x606D9D10   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TreasureChest__ctor(ActorBuildInfo *a1)
{
  int v2; // r4
  sead_IDisposer *v3; // r0
  sead_IDisposer *v4; // r0

  v2 = operator_new(0x1A00u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1E95C;
  FIELD_U32(v2, 6120) = 0;
  FIELD_U32(v2, 6116) = 0;
  FIELD_U32(v2, 6112) = 0;
  FIELD_U32(v2, 6108) = 0;
  FIELD_U32(v2, 6104) = 0;
  FIELD_U32(v2, 6100) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6124));
  FIELD_U32(v2, 6124) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6228));
  FIELD_U32(v2, 6228) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6332));
  FIELD_U32(v2, 6332) = off_60BC1450;
  FIELD_U32(v2, 6572) = 0;
  FIELD_U32(v2, 6576) = 0;
  FIELD_U32(v2, 6580) = 0;
  memset((void *)(v2 + 6436), 0, 36);
  memset((void *)(v2 + 6484), 0, 77);
  FIELD_U8(v2, 6570) = 0;
  FIELD_U16(v2, 6568) = 0;
  FIELD_U32(v2, 6564) = 0;
  v3 = (sead_IDisposer *)operator_new(0x1Cu);
  v4 = sub_603E4258(v3);
  FIELD_U32(v4, 0x0) = (int)off_60BF922C;
  LOBYTE(FIELD_U32(v4 + (1) * 16, 0x8)) = 0;
  FIELD_U32(v2, 6604) = v4;
  PlayerLookTarget_ctor((PlayerLookTarget *)(v2 + 6608), FIELD_U32(v2, 8));
  FIELD_U32(v2, 6652) = 0;
  FIELD_U32(v2, 6636) = 0;
  FIELD_U32(v2, 6600) = 0;
  FIELD_U32(v2, 6596) = 0;
  FIELD_U32(v2, 6592) = 0;
  FIELD_U32(v2, 6588) = 0;
  FIELD_U32(v2, 6584) = 0;
  return v2;
}
