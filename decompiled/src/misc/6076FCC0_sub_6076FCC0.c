/* sub_6076FCC0
 * address: 0x6076FCC0   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076FCC0(int a1)
{
  int v2; // r0
  int v3; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 1208);
  FIELD_U32(a1, 1208) = v2 & 0xFFFDFFFF;
  if ( (v2 & 0x10000) != 0 )
    ((void (__fastcall *)(int))loc_60764E20)(a1);
  if ( (FIELD_U8(a1, 6902) & 0x10) != 0 )
    FIELD_U32(a1, 1228) &= ~0x20000u;
  v3 = FIELD_U32(a1, 9940);
  if ( v3 >= 4 )
  {
    result = sub_6075FC38(a1);
    if ( result )
      return result;
    v3 = FIELD_U32(a1, 9940);
  }
  ((void (__fastcall *)(int))off_60C24804[2 * v3])(a1 + ((int)off_60C24804[2 * v3 + 1] >> 1));
  result = FIELD_U32(a1, 1208);
  if ( (result & 0x800000) != 0 )
  {
    FIELD_U32(a1, 1208) = result & 0xFF7FFFFF;
    FIELD_U32(a1, 108) = FIELD_U32(a1, 10004);
    result = FIELD_U32(a1, 10008);
    FIELD_U32(a1, 112) = result;
  }
  return result;
}
