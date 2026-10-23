/* Fuzzy__beforeExecute
 * address: 0x6027730C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A1BC8
// 
// Overridden by: None
signed int __fastcall Fuzzy__beforeExecute(CollisionActor *a1)
{
  signed int v2; // r1
  signed int result; // r0

  v2 = Enemy__beforeExecute(a1);
  result = 0;
  if ( v2 == 1 )
  {
    CollisionMgr_vf18(&a1[1]._.field_254.y);
    return 1;
  }
  return result;
}
