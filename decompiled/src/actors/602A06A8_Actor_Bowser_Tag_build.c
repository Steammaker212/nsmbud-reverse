/* Actor_Bowser_Tag_build
 * address: 0x602A06A8   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Bowser_Tag_build(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x17F8u);
  result = sub_60618BBC(v2, a1);
  *(_DWORD *)result = off_60BE2408;
  FIELD_U8(result, 6128) = 0;
  FIELD_U32(result, 6124) = 0;
  FIELD_U32(result, 6116) = 0;
  FIELD_U32(result, 6120) = 0;
  return result;
}
