/* sub_6082EB10
 * address: 0x6082EB10   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6082EB10(ActorBuildInfo *a1)
{
  Actor *v2; // r5

  v2 = (Actor *)operator_new(0x50u);
  Actor__ctor(v2, a1);
  FIELD_U32(v2, 0x0) = (int)off_60C2AB6C;
  sub_607FC23C(dword_60CC6484, (FIELD_U32(v2, 0x14) & 0x10000000) != 0);
  FIELD_U8(v2, 0x13) = 1;
  return v2;
}
