/* sub_603E46EC
 * address: 0x603E46EC   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603E46EC(int a1, Actor *a2)
{
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12
  int v5; // r6
  int v6; // r0
  int ProfileId; // r1
  _BOOL4 result; // r0

  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 24));
  if ( ((unsigned int)&dword_60C7B408 & ~(1614694184 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( v3 )
  {
    v5 = (**v3)(v3, &dword_60C7B404);
    if ( v5 )
      v5 = (int)v3;
  }
  else
  {
    v5 = 0;
  }
  v6 = sub_607CFB50(v5);
  if ( !v6 || (Actor *)v6 != a2 )
  {
    if ( (Actor *)v5 == a2 )
      return 1;
    return FIELD_U32(v5, 11360) == FIELD_U32(a2, 0x8);
  }
  ProfileId = Actor__getProfileId(a2);
  result = 1;
  if ( (Actor *)v5 != a2 && ProfileId != 505 )
    return FIELD_U32(v5, 11360) == FIELD_U32(a2, 0x8);
  return result;
}
