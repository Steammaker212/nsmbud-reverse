/* StageActor__befreDraw
 * address: 0x60000850   size: 140   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F4C
// 
// Overridden by: None
signed int __fastcall StageActor__befreDraw(Actor *a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r0

  v2 = 0;
  if ( Actor__befreDraw(a1) == 1 )
  {
    if ( HIBYTE(a1[6].field_34) )
    {
      v3 = FIELD_U32(a1 + (7) * 80, 0x3C);
      if ( !v3 || FIELD_U32(v3, 12) != 2 )
      {
        v4 = FIELD_U32(a1 + (7) * 80, 0x40);
        if ( !v4 || FIELD_U32(v4, 24) != 2 )
        {
          if ( (FIELD_U32(a1 + (7) * 80, 0x8) & 2) == 0 )
            return 1;
          if ( !(*(int (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 124))(a1) )
            return 1;
        }
      }
    }
  }
  return v2;
}
