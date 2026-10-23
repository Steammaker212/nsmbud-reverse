/* BanzaiBill_vf64
 * address: 0x60322D28   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall BanzaiBill_vf64(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  Actor *v6; // r7
  int ProfileId; // r0

  v6 = &FIELD_U32(a3, 0x40);
  ProfileId = Actor__getProfileId(v6);
  if ( !a1[1]._._._._.id && ProfileId == 309 )
  {
    (*(void (__fastcall **)(Actor *))(FIELD_U32(v6, 0x0) + 104))(v6);
    FIELD_U8(v6, 0x13) = 1;
  }
  return Enemy__vf100(a1, a2, a3);
}
