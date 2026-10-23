/* sub_600F19B4
 * address: 0x600F19B4   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F19B4(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int (__fastcall *v7)(int, void *); // r2
  void *v8; // r1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = (*(int (**)(void))(dword_60C8341C + 8))();
  v5 = a1 + 7108;
  v6 = FIELD_U32(a1, 7108);
  if ( v3 == v4 )
  {
    FIELD_U32(v6, 48) = 0;
    *(_DWORD *)(*(_DWORD *)v5 + 64) = 0;
    FIELD_U32(a1, 7496) = 1;
    v7 = *(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
    v8 = &unk_60C85504;
  }
  else
  {
    FIELD_U32(v6, 48) = 1078055965;
    *(_DWORD *)(*(_DWORD *)v5 + 64) = 1081520351;
    FIELD_U32(a1, 7496) = 3;
    v7 = *(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
    v8 = &unk_60C854BC;
  }
  return v7(a1, v8);
}
