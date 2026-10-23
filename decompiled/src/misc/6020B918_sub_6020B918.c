/* sub_6020B918
 * address: 0x6020B918   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6020B918(int a1)
{
  StateMethodExecuter **v2; // r6
  StateMethodExecuter **v3; // r5
  StateMethodExecuter *result; // r0
  signed int v5; // [sp+0h] [bp-18h] BYREF
  signed int v6; // [sp+4h] [bp-14h] BYREF

  v6 = (int)(float)((float)(2147500000.0 * (float)((float)((float)(180.0 * 536870000.0) / 2147500000.0) + -10.0)) / 180.0);
  v5 = (int)(float)((float)((float)((float)((float)(180.0 * 83886000.0) / 2147500000.0) + -1.0) * 2147500000.0) / 180.0);
  v2 = (StateMethodExecuter **)(a1 + 524);
  v3 = (StateMethodExecuter **)(a1 + 180);
  FIELD_U32(a1, 524) = sub_601691C0(a1);
  sub_608322C0((int *)(a1 + 180), (int *)(a1 + 524), &v6, &v5);
  result = (StateMethodExecuter *)sub_601CF9C0(dword_60C8AEF0);
  if ( result )
  {
    result = (StateMethodExecuter *)(*((int (__fastcall **)(StateMethodExecuter *))FIELD_U32(result, 0x0) + 17))(result);
    if ( result == (StateMethodExecuter *)1 )
    {
      result = *v2;
      if ( *v3 == *v2 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        return StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8CB14);
      }
    }
  }
  return result;
}
