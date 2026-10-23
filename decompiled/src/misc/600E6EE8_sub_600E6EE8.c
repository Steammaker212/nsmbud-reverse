/* sub_600E6EE8
 * address: 0x600E6EE8   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E6EE8(_BYTE *a1)
{
  int result; // r0
  int v3; // r0
  StateBase *CurrentState; // r0
  int v5; // r5
  int v6; // r0
  StateBase *v7; // r0
  int v8; // r5

  j_ModelWrapper_updateAnims(*((_DWORD *)a1 + 1774));
  result = (unsigned __int8)a1[8132];
  if ( !a1[8132] )
  {
    result = *((_DWORD *)a1 + 1773);
    if ( result == 1 )
    {
      v3 = (*(int (__fastcall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60C851B4 + 8))();
      if ( v5 != result )
      {
        v6 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 1676))(a1, 1);
        v7 = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
        result = (*(int (**)(void))(dword_60C851B4 + 8))();
        if ( v8 != result )
          return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1684))(a1);
      }
    }
  }
  return result;
}
