/* DryBones__collisionThrowableObject
 * address: 0x603167C4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A68EC
// 
// Overridden by: None
signed int __fastcall DryBones__collisionThrowableObject(_DWORD *a1, int a2, int a3)
{
  int ProfileId; // r0

  ProfileId = Actor__getProfileId(*(Actor **)(a3 + 64));
  if ( ProfileId == 43 || ProfileId == 44 )
    return 0;
  else
    return Enemy__collisionThrowableObject(a1, a2, a3);
}
