/* sub_60631D54
 * address: 0x60631D54   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60631D54(int a1, int a2)
{
  int v4; // r7
  int v5; // r0
  char v6; // r12
  int v7; // r9
  int v8; // r5
  int v9; // r6

  v4 = FIELD_U32(ActorMgr__instance, 27180);
  v5 = sub_60008598(ActorMgr__instance, 49, FIELD_U32(ActorMgr__instance, 27172));
  v7 = 0;
  if ( v5 != v4 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)v5;
      if ( *(unsigned __int8 *)(*(_DWORD *)v5 + 28) == a2 )
        break;
      v5 = sub_60008598(ActorMgr__instance, 49, v5 + 4);
      if ( v5 == v4 )
        return v7;
    }
    if ( v8 )
    {
      FIELD_U32(a1, 6532) = FIELD_U32(v8, 8);
      if ( ((unsigned int)&dword_60CB42CC & ~(1617108472 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CB42CC) )
      {
        dword_60CB42C8 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60CB42CC);
      }
      v9 = v8 + 6108;
      if ( !(**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60CB42C8) )
        v9 = 6108;
      FIELD_U32(a1, 6556) = *(_DWORD *)v9;
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB42A8);
      return v8;
    }
  }
  return v7;
}
