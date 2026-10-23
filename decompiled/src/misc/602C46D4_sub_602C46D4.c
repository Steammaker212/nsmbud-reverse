/* sub_602C46D4
 * address: 0x602C46D4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C46D4(int a1, int a2, int a3)
{
  Actor *v3; // r5
  unsigned int v5; // r1
  Actor *v6; // r0
  int ProfileId; // r1
  int result; // r0

  v3 = *(Actor **)(a3 + 64);
  if ( Actor__getProfileId(v3) != 392
    || (v5 = sub_602EF2C8(v3)) == 0
    || (v6 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v5),
        ProfileId = Actor__getProfileId(v6),
        result = 0,
        ProfileId != 805) )
  {
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 164))(a1, 0);
    return 1;
  }
  return result;
}
