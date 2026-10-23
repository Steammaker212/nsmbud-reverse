/* sub_604BED50
 * address: 0x604BED50   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604BED50(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  int v4; // r0

  result = (StateMethodExecuter *)FIELD_U8(a1, 35562);
  if ( !result )
  {
    v3 = sub_6047482C(FIELD_U32(a1, 4), 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 104))(v3);
    sub_60473B58(*(_DWORD **)(a1 + 4), 6u, 0);
    v4 = sub_6047482C(FIELD_U32(a1, 4), 0);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v4 + 16))(v4, 0);
    sub_604BFE2C(a1);
    return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)&dword_60CA2958);
  }
  return result;
}
