/* Actor_Kamek_magic_build
 * address: 0x600B047C   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Kamek_magic_build(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1A78u);
  result = sub_600B91C0(v2, a1);
  *(_DWORD *)result = off_60BC9058;
  FIELD_U32(result, 6760) = 0;
  FIELD_U8(result, 6764) = 0;
  FIELD_U32(result, 6768) = 0;
  FIELD_U32(result, 6772) = 0;
  return result;
}
