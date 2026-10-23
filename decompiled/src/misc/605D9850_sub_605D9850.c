/* sub_605D9850
 * address: 0x605D9850   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605D9850(int a1, float a2)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)(*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 148))(a1, a2);
  if ( result == (StateMethodExecuter *)1 )
  {
    FIELD_F32(a1, 124) = a2;
    FIELD_U32(a1, 8000) = 0;
    FIELD_U32(a1, 8004) = 0;
    FIELD_U32(a1, 8008) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 6292), &stru_60CB16D8);
  }
  return result;
}
