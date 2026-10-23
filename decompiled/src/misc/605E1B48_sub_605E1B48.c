/* sub_605E1B48
 * address: 0x605E1B48   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *sub_605E1B48()
{
  Actor **v0; // r5
  Actor **v1; // r6
  Actor *v2; // r4
  int ProfileId; // r0
  bool v4; // zf
  bool v5; // zf

  v0 = *(Actor ***)(ActorMgr__instance + 27172);
  v1 = *(Actor ***)(ActorMgr__instance + 27180);
  if ( v0 == v1 )
    return 0;
  while ( 1 )
  {
    v2 = *v0;
    if ( *v0 && !FIELD_U8(v2, 0x13) )
    {
      ProfileId = Actor__getProfileId(*v0);
      v4 = ProfileId == 275;
      if ( ProfileId != 275 )
        v4 = ProfileId == 276;
      if ( v4 )
        break;
      v5 = ProfileId == 277;
      if ( ProfileId != 277 )
        v5 = ProfileId == 278;
      if ( v5 )
        break;
    }
    if ( v1 == ++v0 )
      return 0;
  }
  return v2;
}
