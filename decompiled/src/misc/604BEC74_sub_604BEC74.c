/* sub_604BEC74
 * address: 0x604BEC74   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604BEC74(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  int v4; // r0

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(FIELD_U32(a1, 4), 1u) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    sub_604C04C8(a1, 1);
    v3 = sub_6047482C(FIELD_U32(a1, 4), 1u);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 104))(v3);
    sub_60473B58(*(_DWORD **)(a1 + 4), 6u, 0);
    v4 = sub_6047482C(FIELD_U32(a1, 4), 1u);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v4 + 16))(v4, 0);
    return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)&dword_60CA27D8);
  }
  return result;
}
