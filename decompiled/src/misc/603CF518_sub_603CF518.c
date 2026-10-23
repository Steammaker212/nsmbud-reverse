/* sub_603CF518
 * address: 0x603CF518   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CF518(int a1)
{
  int Area; // r0
  unsigned __int16 *Location; // r1
  int result; // r0

  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  if ( !Area )
    return 2;
  Location = LevelArea_getLocation(Area, (float *)(a1 + 644), (unsigned __int8)BYTE1(FIELD_U32(a1, 20)));
  result = 2;
  if ( Location )
    return 1;
  return result;
}
