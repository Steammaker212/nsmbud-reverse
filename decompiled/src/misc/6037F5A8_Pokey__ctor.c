/* Pokey__ctor
 * address: 0x6037F5A8   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pokey__ctor(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1988u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BF3320;
  FIELD_U32(v2, 6300) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6308) = 1;
  FIELD_U8(v2, 6356) = 0;
  FIELD_U32(v2, 6328) = 0;
  FIELD_U32(v2, 6324) = 0;
  FIELD_U32(v2, 6320) = 0;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6360) = -1;
  FIELD_U8(v2, 6370) = 0;
  FIELD_U16(v2, 6368) = 0;
  FIELD_U32(v2, 6364) = 0;
  FIELD_U32(v2, 6372) = 0xBF800000;
  FIELD_U32(v2, 6376) = 0x3F800000;
  FIELD_U32(v2, 6380) = 0;
  FIELD_U32(v2, 6384) = 0x3F800000;
  FIELD_U8(v2, 6388) = 0;
  FIELD_U8(v2, 6390) = 0;
  FIELD_U8(v2, 6391) = 0;
  FIELD_U32(v2, 6392) = 0;
  FIELD_U32(v2, 6400) = 0;
  FIELD_U32(v2, 6404) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6408));
  FIELD_U32(v2, 6408) = off_60BC6E38;
  FIELD_U32(v2, 6424) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6428));
  FIELD_U32(v2, 6428) = off_60BC1450;
  FIELD_U32(v2, 6532) = off_60BF35F0;
  FIELD_U32(v2, 100) = dword_60C96AAC;
  FIELD_U32(v2, 132) = 0;
  FIELD_U32(v2, 136) = 0xC0880000;
  FIELD_U32(v2, 140) = 0;
  return v2;
}
