/* CooliganSunglasses__ctor
 * address: 0x6036B7E0   size: 128   group: misc
 * sym: CooliganSunglasses::CooliganSunglasses(ActorBuildInfo const*) as C3
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall CooliganSunglasses__ctor(ActorBuildInfo *buildInfo)
{
  CooliganSunglasses *this; // r0
  CooliganSunglasses *this_; // r0

  this = (CooliganSunglasses *)operator_new(0x2ECu);
  this_ = (CooliganSunglasses *)StageActor__ctor(&FIELD_U32(this, 0x0), buildInfo);
  FIELD_U32(this_, 0x0) = (int)off_60BF03F8;
  FIELD_U32(this_, 0x284) = 0;
  FIELD_U8(this_, 0x288) = 0;
  *(_QWORD *)&FIELD_U32(this_, 0x28C) = 1065353216;
  *(_QWORD *)&FIELD_U32(this_, 0x294) = 0;
  *(_QWORD *)&FIELD_U32(this_, 0x29C) = 0x3F80000000000000LL;
  *(_QWORD *)&FIELD_U32(this_, 0x2A4) = 0;
  *(_QWORD *)&FIELD_U32(this_, 0x2AC) = 0;
  *(_QWORD *)&FIELD_U32(this_, 0x2B4) = 1065353216;
  *(_QWORD *)&FIELD_U32(this_, 0x2BC) = 1065353216;
  *(_QWORD *)&FIELD_U32(this_, 0x2C4) = 0;
  *(_QWORD *)&FIELD_U32(this_, 0x2CC) = 0x3F80000000000000LL;
  *(_QWORD *)&FIELD_U32(this_, 0x2D4) = 0;
  *(_QWORD *)&FIELD_U32(this_, 0x2DC) = 0;
  *(_QWORD *)&FIELD_U32(this_, 0x2E4) = 1065353216;
  return &FIELD_U32(this_, 0x0);
}
