/* sub_608024DC
 * address: 0x608024DC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_608024DC()
{
  _BOOL4 result; // r0
  unsigned int v1; // r4
  int Area; // r2
  unsigned int v3; // r1
  int v4; // r3
  int v5; // r4
  bool v6; // zf

  result = 0;
  if ( LevelInfo_instance && Level_instance )
  {
    v1 = FIELD_U8(LevelInfo_instance, 18);
    Area = Level_getArea(Level_instance, v1);
    if ( !Area )
      return 0;
    v3 = FIELD_U8(LevelInfo_instance, 19);
    if ( v1 )
      goto LABEL_5;
    v4 = FIELD_U32(Area, 8);
    result = 1;
    v5 = FIELD_U8(v4, 16);
    v6 = v3 == v5;
    if ( v3 != v5 )
      v6 = v3 == FIELD_U8(v4, 19);
    if ( !v6 )
    {
LABEL_5:
      if ( v3 < FIELD_U32(Area, 148) )
        return (*(_BYTE *)(sub_60727D48(Area, v3) + 16) & 1) != 0;
      return 0;
    }
  }
  return result;
}
