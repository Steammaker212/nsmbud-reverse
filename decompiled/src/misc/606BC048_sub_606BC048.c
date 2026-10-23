/* sub_606BC048
 * address: 0x606BC048   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BC048(int a1, int a2)
{
  int v3; // r0
  bool v4; // zf
  StateMgr *v5; // r5

  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  v4 = a2 == 0;
  if ( a2 )
    v4 = v3 == 0;
  if ( !v4 )
  {
    v5 = (StateMgr *)(v3 + 6084);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 68))(v3, FIELD_S8(a2, 84));
    StateMgr__changeState(v5, (StateBase *)&dword_60CBA70C);
  }
  return 1;
}
