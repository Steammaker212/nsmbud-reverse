/* Actor_special_sukuroruTag_build
 * address: 0x6082FD38   size: 152   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_special_sukuroruTag_build(ActorBuildInfo *a1)
{
  Actor *v2; // r4
  unsigned int settings1; // r6
  int v5; // [sp+4h] [bp-14h] BYREF

  v2 = (Actor *)operator_new(0x50u);
  Actor__ctor(v2, a1);
  FIELD_U32(v2, 0x0) = (int)off_60C2ADF8;
  settings1 = FIELD_U32(v2, 0x14);
  v5 = (__int64)(float)((float)((float)((float)(settings1 >> 28) * -22.5) + 90.0) * 11930000.0);
  Actor_special_sukuroruTag_build_helper(dword_60CC6484 + 248, (settings1 >> 8) & 3, &v5, settings1 & 1, FIELD_U32(a1, 0x10).x);
  FIELD_U8(v2, 0x13) = 1;
  return v2;
}
