/* sub_606C6638
 * address: 0x606C6638   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C6638(int a1, ActorBuildInfo *a2)
{
  int v3; // r0
  int v4; // r1

  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C1C540;
  FIELD_U32(a1, 6104) = 0;
  v3 = FIELD_U32(a1, 108);
  v4 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6116) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 6112) = v4;
  FIELD_U32(a1, 6108) = v3;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6120));
  FIELD_U32(a1, 6120) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6224));
  FIELD_U32(a1, 6224) = off_60BC1450;
  FIELD_U32(a1, 6332) = 0;
  FIELD_U16(a1, 6336) = 0;
  FIELD_U32(a1, 6368) = 0;
  FIELD_U32(a1, 6364) = 0;
  FIELD_U32(a1, 6360) = 0;
  FIELD_U32(a1, 6356) = 0;
  FIELD_U32(a1, 6352) = 0;
  FIELD_U32(a1, 6348) = 0;
  FIELD_U32(a1, 6344) = 0;
  FIELD_U32(a1, 6340) = 0;
  return a1;
}
