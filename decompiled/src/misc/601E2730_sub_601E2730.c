/* sub_601E2730
 * address: 0x601E2730   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601E2730(int a1)
{
  int v2; // r5
  int v3; // r7
  char v4; // r6
  StateMethodExecuter *result; // r0

  if ( FIELD_S32(a1, 320) < 1 )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C89624);
  v2 = FIELD_U32(a1, 316);
  if ( !v2 )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C89624);
  v3 = a1 + 312;
  v4 = 1;
  do
  {
    result = *(StateMethodExecuter **)(v2 + 8);
    if ( result )
    {
      result = (StateMethodExecuter *)(*((int (__fastcall **)(StateMethodExecuter *))FIELD_U32(result, 0x0) + 9))(result);
      v4 &= (unsigned __int8)result;
    }
    v2 = FIELD_U32(v2, 4);
    if ( v2 == v3 )
      v2 = 0;
  }
  while ( v2 );
  if ( (v4 & 1) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C89624);
  return result;
}
