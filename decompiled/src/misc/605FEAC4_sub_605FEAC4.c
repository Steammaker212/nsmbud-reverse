/* sub_605FEAC4
 * address: 0x605FEAC4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605FEAC4(int a1)
{
  float *v2; // r2
  int result; // r0
  int v4; // r0
  StateBase *CurrentState; // r0
  int v6; // r5
  int (__fastcall *v7)(int, int *); // r2

  v2 = (float *)(a1 + 6836);
  if ( FIELD_U32(a1, 6884) == 1 )
    v2 = (float *)(a1 + 6832);
  result = sub_605FFD60(a1, FIELD_F32(a1, 148), *v2);
  if ( !FIELD_U8(a1, 6878) )
  {
    if ( result != 1 )
      return result;
    v7 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    return v7(a1, &dword_60CB271C);
  }
  v4 = sub_605FFE7C(a1);
  if ( v4 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60CB26B8 + 8))();
    if ( v6 != result )
      return result;
    v7 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    return v7(a1, &dword_60CB271C);
  }
  FIELD_U8(a1, 6876) = 1;
  return 6876;
}
