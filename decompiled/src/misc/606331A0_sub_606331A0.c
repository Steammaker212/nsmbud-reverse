/* sub_606331A0
 * address: 0x606331A0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606331A0(int a1)
{
  StateMethodExecuter *result; // r0
  char v3; // r12
  StateMethodExecuter *v4; // r5
  int v5; // r6

  result = (StateMethodExecuter *)sub_606D41DC(FIELD_U8(a1, 6112));
  v4 = result;
  if ( result )
  {
    FIELD_U32(a1, 6100) = FIELD_U32(result, 0x8);
    if ( ((unsigned int)&dword_60CB10A0 & ~(1617113564 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CB10A0) )
    {
      dword_60CB109C = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60CB10A0);
    }
    v5 = (int)&v4[54];
    if ( !(*(int (__fastcall **)(StateMethodExecuter *, int *))FIELD_U32(v4, 0x0))(v4, &dword_60CB109C) )
      v5 = 648;
    FIELD_U32(a1, 6108) = *(_DWORD *)v5;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB438C);
  }
  return result;
}
