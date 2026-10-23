/* Actor_final_Bowser_fire_build
 * address: 0x6007E9F4   size: 256   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_final_Bowser_fire_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B40u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BC6FD8;
  FIELD_U32(v2, 6100) = 0;
  FIELD_U8(v2, 6104) = 1;
  FIELD_U32(v2, 6108) = 0;
  FIELD_U32(v2, 6112) = 0;
  LightSource__ctor((LightSource *)(v2 + 6116));
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6188));
  FIELD_U32(v2, 6188) = off_60BC1450;
  memset((void *)(v2 + 6292), 0, 52);
  FIELD_U32(v2, 6344) = -1;
  FIELD_U32(v2, 6348) = 0;
  FIELD_U32(v2, 6352) = 0;
  FIELD_U32(v2, 6356) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6360));
  FIELD_U32(v2, 6664) = off_60BC70CC;
  MovingSoundActor_ctor((MovingSoundActor *)(v2 + 6668), 0, 1);
  FIELD_U32(v2, 6668) = off_60BC19B4;
  return v2;
}
