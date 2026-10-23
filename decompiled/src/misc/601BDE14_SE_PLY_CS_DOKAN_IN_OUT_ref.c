/* SE_PLY_CS_DOKAN_IN_OUT_ref
 * address: 0x601BDE14   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CS_DOKAN_IN_OUT_ref(int a1)
{
  float v1; // s2

  FIELD_U32(a1, 288) = 4;
  FIELD_U32(a1, 948) = FIELD_U32(a1, 80);
  v1 = FIELD_F32(a1, 84);
  FIELD_U32(a1, 956) = FIELD_U32(a1, 88);
  FIELD_F32(a1, 952) = v1 - 120.0;
  FIELD_U32(a1, 296) = 1065353216;
  FIELD_U32(a1, 1044) = 4;
  FIELD_U8(a1, 553) = 1;
  sub_601B69E0(a1);
  return sub_60807EF0(SoundSystem_instance, "SE_PLY_CS_DOKAN_IN_OUT", 0, 1);
}
