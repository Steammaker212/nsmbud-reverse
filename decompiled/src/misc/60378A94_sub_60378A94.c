/* sub_60378A94
 * address: 0x60378A94   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60378A94(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r5
  int v4; // r1

  result = (StateMethodExecuter *)sub_60378D34();
  if ( result == (StateMethodExecuter *)1 )
  {
    v3 = sub_60377B20(dword_60C96478, *(_DWORD *)a1, FIELD_U32(a1, 12));
    if ( sub_6039DEF4(FIELD_U32(a1, 28), v3) == 1 )
    {
      return StateMgr__changeState((StateMgr *)(a1 + 52), (StateBase *)&dword_60C96570);
    }
    else
    {
      sub_60378E68(a1);
      v4 = sub_60377B20(dword_60C96478, *(_DWORD *)a1, FIELD_U32(a1, 12));
      return (StateMethodExecuter *)sub_6039E02C(FIELD_U32(a1, 28), v4, v3);
    }
  }
  return result;
}
