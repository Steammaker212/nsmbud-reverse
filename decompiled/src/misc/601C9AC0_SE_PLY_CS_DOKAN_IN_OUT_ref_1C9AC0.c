/* SE_PLY_CS_DOKAN_IN_OUT_ref_1C9AC0
 * address: 0x601C9AC0   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CS_DOKAN_IN_OUT_ref_1C9AC0(int a1)
{
  int v2; // r0

  FIELD_U8(a1, 280) = 1;
  FIELD_U32(a1, 288) = *((__int16 *)sub_601C6BF0(a1) + 24);
  v2 = sub_601E131C(FIELD_U32(a1, 1092));
  FIELD_U32(a1, 1092) = v2;
  sub_601B3AB0(a1, v2);
  sub_601E1000(a1 + 956, a1 + 1032);
  FIELD_U8(a1, 216) &= ~2u;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_F32(a1, 292) = (float)(*((float *)sub_601C6BF0(a1) + 1) - FIELD_F32(a1, 128)) / 30.0;
  FIELD_U32(a1, 1120) |= 0x10000u;
  return sub_60807EF0(SoundSystem_instance, "SE_PLY_CS_DOKAN_IN_OUT", 0, 1);
}
