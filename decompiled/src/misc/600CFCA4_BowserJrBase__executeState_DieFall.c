/* BowserJrBase__executeState_DieFall
 * address: 0x600CFCA4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF8
// 
// Overridden by: None
void __fastcall BowserJrBase__executeState_DieFall(int a1)
{
  int v2; // r0

  StageActor__cullCheck((StageActor *)a1, 2);
  if ( v2 == 1 )
    FIELD_U8(a1, 7265) = 1;
}
