/* GoombaBase__vf1AC
 * address: 0x6033CD80   size: 36   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A3D38
// 
// Overridden by: None
signed int __fastcall GoombaBase__vf1AC(Enemy *a1, int a2)
{
  int v2; // r2

  v2 = a1[1]._._._._.field_4C;
  if ( v2 )
    ++FIELD_U32(v2, 6960);
  return Enemy__vf1AC(a1, a2);
}
