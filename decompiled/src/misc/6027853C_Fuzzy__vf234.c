/* Fuzzy__vf234
 * address: 0x6027853C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A9738
// 
// Overridden by: None
int __fastcall Fuzzy__vf234(int a1)
{
  unsigned int v2; // r1
  int v3; // r0

  v2 = FIELD_U32(a1, 6524);
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( v3 )
      FIELD_U8(v3, 10566) = 1;
    FIELD_U32(a1, 6524) = 0;
  }
  return Enemy__vf234(a1);
}
