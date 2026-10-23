/* sub_607086D0
 * address: 0x607086D0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607086D0(int result)
{
  int v1; // r1
  int v2; // r1
  int v3; // r3
  int v4; // r3

  v1 = 0;
  FIELD_U32(result, 120) = 0;
  FIELD_U32(result, 124) = 0;
  FIELD_U32(result, 128) = 0;
  FIELD_U32(result, 6988) = 0;
  if ( !FIELD_U32(result, 7008) )
  {
    if ( (FIELD_U8(result, 2872) & 1) != 0 )
      FIELD_U32(result, 6988) = 1;
    v2 = FIELD_U32(result, 3176);
    v3 = FIELD_U32(result, 3184);
    FIELD_U32(result, 3180) |= 0x200000u;
    FIELD_U32(result, 3188) |= 0x200000u;
    FIELD_U32(result, 3176) = v2 & 0x3FFFFFFF | 0x80000000;
    FIELD_U32(result, 3184) = v3 & 0x3FFFFFFF | 0x80000000;
    v4 = FIELD_U32(result, 3204) | 0x200000;
    FIELD_U32(result, 3200) = FIELD_U32(result, 3200) & 0x3FFFFFFF | 0x80000000;
    v1 = 1;
    FIELD_U32(result, 3204) = v4;
  }
  FIELD_U32(result, 6992) = v1;
  return result;
}
