/* sub_606D8D18
 * address: 0x606D8D18   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606D8D18(int a1)
{
  int v2; // r7
  StateMethodExecuter *v3; // r6
  StateMethodExecuter *result; // r0
  _DWORD *vtable; // r1

  v2 = FIELD_U8(a1, 28);
  v3 = *(StateMethodExecuter **)(ActorMgr__instance + 27180);
  result = (StateMethodExecuter *)sub_60008598(ActorMgr__instance, 51, FIELD_U32(ActorMgr__instance, 27172));
  if ( result != v3 )
  {
    while ( 1 )
    {
      vtable = FIELD_U32(result, 0x0);
      if ( *((unsigned __int8 *)FIELD_U32(result, 0x0) + 28) == v2 )
        break;
      result = (StateMethodExecuter *)sub_60008598(ActorMgr__instance, 51, (int)&FIELD_U32(result, 0x4));
      if ( result == v3 )
        return result;
    }
    if ( vtable )
    {
      FIELD_U32(a1, 6100) = vtable[2];
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBB7E8);
    }
  }
  return result;
}
