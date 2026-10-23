/* sub_6088EB54
 * address: 0x6088EB54   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088EB54(int a1, int a2)
{
  const void *v4; // r1

  *(_DWORD *)a1 = off_60C5AA9C;
  FIELD_U32(a1, 36) = &off_60C5A9A8;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 48) = 0;
  memset((void *)(a1 + 1172), 0, 1100);
  sub_608353A4(a1 + 2520);
  FIELD_U8(a1, 2596) = 0;
  sub_6083651C(a1 + 2600);
  FIELD_U32(a1, 2924) = 0;
  FIELD_U32(a1, 2920) = 0;
  FIELD_U32(a1, 2916) = 0;
  FIELD_U32(a1, 2912) = 0;
  FIELD_U32(a1, 2908) = 0;
  FIELD_U32(a1, 2904) = 0;
  FIELD_U32(a1, 2928) = off_60C5AADC;
  sub_608353A4(a1 + 2936);
  sub_6083651C(a1 + 3008);
  FIELD_U32(a1, 3304) = a1 + 3304;
  FIELD_U32(a1, 3308) = a1 + 3304;
  FIELD_U32(a1, 3312) = a1 + 3312;
  FIELD_U32(a1, 3316) = a1 + 3312;
  FIELD_U32(a1, 3324) = 0;
  FIELD_U32(a1, 3296) = 0;
  FIELD_U32(a1, 3328) = 0;
  FIELD_U32(a1, 3348) = 0;
  FIELD_U32(a1, 3352) = 0;
  FIELD_U32(a1, 3356) = 0;
  FIELD_U32(a1, 3360) = 0;
  FIELD_U32(a1, 3364) = 0;
  nn__os__InitializeMutex(a1 + 3376, 0, 0);
  nn__os__InitializeMutex(a1 + 3396, 0, 0);
  nn__util__ReferSymbol((nn__util *)"SDK MW+Nintendo+NintendoWare_Vfx-4_4_0-Release", v4);
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 2464) = 0;
  FIELD_U32(a1, 2468) = 0;
  (*(void (__fastcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 8))(
    a1,
    FIELD_U32(a2, 8),
    FIELD_U32(a2, 12),
    a2);
  return a1;
}
