/* StageActor__afterExecute
 * address: 0x60000770   size: 208   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F44
// 
// Overridden by:
//   - 0x60003418 : CollisionActor
int __fastcall StageActor__afterExecute(int a1, int a2)
{
  float v3; // r1
  float v4; // s0
  float v5; // s2

  if ( a2 == 2 )
  {
    v3 = FIELD_F32(a1, 108);
    FIELD_F32(a1, 596) = v3;
    FIELD_U32(a1, 600) = FIELD_U32(a1, 112);
    FIELD_U32(a1, 604) = FIELD_U32(a1, 116);
    if ( (FIELD_U8(a1, 569) & 4) == 0 )
    {
      AreaTask_getWrappedXPos(AreaTask_intance);
      FIELD_F32(a1, 0x6C) = v4;
      v3 = v4;
      v5 = FIELD_F32(a1, 596);
      if ( (float)(v5 - v4) > 0.0001 || (float)(v5 - v4) < -0.0001 )
        FIELD_F32(a1, 584) = (float)(v4 - v5) + FIELD_F32(a1, 584);
    }
  }
  else
  {
    v3 = FIELD_F32(a1, 108);
  }
  FIELD_F32(a1, 608) = v3;
  FIELD_U32(a1, 612) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 616) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 184) = 0;
  FIELD_U32(a1, 180) = 0;
  return Actor__afterExecute((Actor *)a1);
}
