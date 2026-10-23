/* sub_600D5A94
 * address: 0x600D5A94   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D5A94(int a1)
{
  _DWORD *v1; // r4
  int v2; // r6
  StateBase *CurrentState; // r0
  int v4; // r5
  StateBase *v5; // r0
  int v6; // r5
  StateBase *v7; // r0
  int v8; // r5
  int result; // r0

  v1 = (_DWORD *)(a1 + 6112);
  v2 = FIELD_U32(a1, 6112) + 7624;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(*(_DWORD *)v2 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C800E4 + 8))() )
    return (*(int (__fastcall **)(_DWORD, int *))(*(_DWORD *)*v1 + 192))(*v1, &dword_60C7FE5C);
  v5 = StateMgr__getCurrentState((StateMgr *)(*(_DWORD *)v2 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  if ( v6 == (*(int (**)(void))(dword_60C80108 + 8))() )
    return (*(int (__fastcall **)(_DWORD, int *))(*(_DWORD *)*v1 + 192))(*v1, &dword_60C7FE5C);
  v7 = StateMgr__getCurrentState((StateMgr *)(*(_DWORD *)v2 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  result = (*(int (**)(void))(dword_60C80148 + 8))();
  if ( v8 == result )
    return (*(int (__fastcall **)(_DWORD, int *))(*(_DWORD *)*v1 + 192))(*v1, &dword_60C7FE5C);
  return result;
}
