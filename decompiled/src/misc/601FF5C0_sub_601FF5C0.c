/* sub_601FF5C0
 * address: 0x601FF5C0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601FF5C0(int a1)
{
  StateMethodExecuter *result; // r0

  if ( sub_607F6ABC(dword_60CC62E4) != 1 )
    return StateMgr__changeState((StateMgr *)(a1 + 228), &stru_60C8C1B0);
  result = *(StateMethodExecuter **)(a1 + 3216);
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 120))(a1);
    result = (StateMethodExecuter *)(FIELD_U32(a1, 3216) - 1);
    FIELD_U32(a1, 3216) = result;
  }
  return result;
}
