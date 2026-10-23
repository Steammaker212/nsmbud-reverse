/* sub_601AF754
 * address: 0x601AF754   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601AF754(int a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0
  signed int v4; // [sp+0h] [bp-18h] BYREF
  signed int v5; // [sp+4h] [bp-14h] BYREF

  v5 = (int)(float)((float)(2147500000.0 * (float)((float)((float)(180.0 * 536870000.0) / 2147500000.0) + -10.0)) / 180.0);
  v4 = (int)(float)((float)((float)((float)((float)(180.0 * 83886000.0) / 2147500000.0) + -1.0) * 2147500000.0) / 180.0);
  v2 = FIELD_U32(a1, 572);
  if ( v2 )
  {
    FIELD_U32(a1, 572) = v2 - 1;
  }
  else
  {
    if ( FIELD_S32(a1, 364) >= 0 )
    {
      sub_601E4F60(dword_60C8B13C);
      FIELD_U32(a1, 364) = -1;
    }
    FIELD_U32(a1, 548) = sub_601691C0(a1);
    sub_608322C0((int *)(a1 + 180), (int *)(a1 + 548), &v5, &v4);
  }
  result = (StateMethodExecuter *)sub_601CF9C0(dword_60C8AEF0);
  if ( result )
  {
    result = (StateMethodExecuter *)(*((int (__fastcall **)(StateMethodExecuter *))FIELD_U32(result, 0x0) + 17))(result);
    if ( result == (StateMethodExecuter *)1 )
    {
      result = *(StateMethodExecuter **)(a1 + 180);
      if ( result == *(StateMethodExecuter **)(a1 + 548) )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C8A7AC);
      }
    }
  }
  return result;
}
