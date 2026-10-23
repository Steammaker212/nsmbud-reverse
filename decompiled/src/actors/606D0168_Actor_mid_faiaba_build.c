/* Actor_mid_faiaba_build
 * address: 0x606D0168   size: 152   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_mid_faiaba_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x8610u);
  sub_602A8C84((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60C1D7E4;
  FIELD_U32(v2, 6324) = 0;
  FIELD_U32(v2, 6456) = 0;
  sub_60602934(v2 + 6464, (int)a1);
  RectCollider_ctor((RectCollider *)(v2 + 33656));
  FIELD_U32(v2, 33656) = off_60BC30D8;
  FIELD_U32(v2, 34312) = FIELD_U16(v2, 22) & 1;
  FIELD_U32(v2, 34316) = 0;
  memset((void *)(v2 + 6328), 0, 128);
  return v2;
}
