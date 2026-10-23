/* FlyingBlock__vf184
 * address: 0x60568B14   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BlockBase : 0x605632AC
// 
// Overridden by: None
int __fastcall FlyingBlock__vf184(Actor *a1)
{
  int result; // r0

  result = Actor__getProfileId(a1);
  if ( result == 290 )
    return SE_OBJ_CMN_SPLASH_POISON_ref_563A0C((int)a1);
  return result;
}
