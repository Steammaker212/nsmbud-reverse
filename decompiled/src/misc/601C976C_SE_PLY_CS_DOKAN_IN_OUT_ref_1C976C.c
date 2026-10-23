/* SE_PLY_CS_DOKAN_IN_OUT_ref_1C976C
 * address: 0x601C976C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CS_DOKAN_IN_OUT_ref_1C976C(int a1)
{
  FIELD_U8(a1, 280) = 1;
  FIELD_U32(a1, 288) = *((__int16 *)sub_601C6BF0(a1) + 24);
  sub_601E1000(a1 + 956, a1 + 1032);
  FIELD_F32(a1, 960) = FIELD_F32(a1, 960) - 120.0;
  (*(void (__fastcall **)(int, _DWORD, _DWORD, float))(*(_DWORD *)a1 + 336))(a1, 0, 0, 0.0);
  FIELD_U32(a1, 296) = 1065353216;
  FIELD_U32(a1, 1124) = 4;
  FIELD_U8(a1, 553) = 1;
  sub_601B2EF0(a1, a1 + 1032);
  return sub_60807EF0(SoundSystem_instance, "SE_PLY_CS_DOKAN_IN_OUT", 0, 1);
}
