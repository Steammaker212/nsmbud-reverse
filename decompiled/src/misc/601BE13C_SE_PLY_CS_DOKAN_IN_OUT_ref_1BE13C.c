/* SE_PLY_CS_DOKAN_IN_OUT_ref_1BE13C
 * address: 0x601BE13C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CS_DOKAN_IN_OUT_ref_1BE13C(int a1)
{
  int v2; // r0

  FIELD_U32(a1, 288) = 4;
  FIELD_U8(a1, 280) = 1;
  sub_601B69E0(a1);
  FIELD_U8(a1, 216) &= ~2u;
  FIELD_U32(a1, 1100) = 6;
  FIELD_U32(a1, 1096) = sub_601E131C(FIELD_U32(a1, 1096));
  sub_601E1000(a1 + 948, a1 + 1084);
  FIELD_F32(a1, 292) = (float)(2.3 - FIELD_F32(a1, 128)) / 30.0;
  v2 = sub_601E1308(FIELD_U32(a1, 1096));
  FIELD_U32(a1, 1020) = v2;
  FIELD_U32(a1, 1024) = v2;
  FIELD_U32(a1, 180) = v2;
  return sub_60807EF0(SoundSystem_instance, "SE_PLY_CS_DOKAN_IN_OUT", 0, 1);
}
