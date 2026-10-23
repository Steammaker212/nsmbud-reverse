/* sub_600038DC
 * address: 0x600038DC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall sub_600038DC(Enemy *result)
{
  float y; // s2
  float v2; // s0
  float v3; // s0

  y = FIELD_U32(result, 0x0)._._.speed.y;
  v2 = FIELD_U32(result, 0x0)._.field_179C;
  if ( y >= v2 )
  {
    v3 = FIELD_U32(result, 0x0)._.field_1798;
    if ( y > v3 )
      FIELD_U32(result, 0x0)._._.speed.y = v3;
  }
  else
  {
    FIELD_U32(result, 0x0)._._.speed.y = v2;
  }
  FIELD_U32(result, 0x0)._.field_17A6 = 1;
  return result;
}
