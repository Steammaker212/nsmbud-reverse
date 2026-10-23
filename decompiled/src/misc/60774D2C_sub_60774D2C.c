/* sub_60774D2C
 * address: 0x60774D2C   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60774D2C(int a1)
{
  int v2; // r1
  int result; // r0
  signed int v4; // r1

  FIELD_U32(a1, 1236) |= 0x20u;
  FIELD_U32(a1, 1208) |= 0x4000000u;
  FIELD_F32(a1, 88) = FIELD_F32(a1, 88) * 0.7;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 124) = 1036831949;
  FIELD_U32(a1, 9940) = 0;
  v2 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 9980) = FIELD_U32(a1, 108);
  result = 9984;
  FIELD_U32(a1, 9984) = v2;
  v4 = FIELD_S8(a1, 84);
  if ( v4 >= 0 )
  {
    AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, v4, 8, 0, 0);
    FIELD_U32(a1, 9944) = 8;
    return 9944;
  }
  return result;
}
