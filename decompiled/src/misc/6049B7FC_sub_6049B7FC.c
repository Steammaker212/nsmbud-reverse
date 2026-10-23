/* sub_6049B7FC
 * address: 0x6049B7FC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049B7FC(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  int v4; // t1
  int *v5; // r6
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r0

  v4 = FIELD_U32(a1, 5340);
  result = (StateMethodExecuter *)(a1 + 5340);
  v3 = v4;
  if ( v4 )
  {
    FIELD_U32(result, 0x0) = (void *)(v3 - 1);
    return result;
  }
  v5 = (int *)(a1 + 5332);
  v6 = dword_60C9CFB8;
  if ( sub_604593D0(dword_60C9CFB8, FIELD_U32(a1, 5332)) )
  {
    FIELD_U8(a1, 5356) = 1;
    goto LABEL_10;
  }
  if ( !sub_604592A0(v6, *v5) )
  {
    FIELD_U8(a1, 5356) = 0;
LABEL_16:
    FIELD_U32(a1, 40) = &dword_60CA0988;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA0948);
  }
  v7 = *v5;
  if ( (unsigned int)*v5 >= 4 )
    v7 = 0;
  v8 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 404 * v7 + 4040) + 20))(*(_DWORD *)(a1 + 404 * v7 + 4040));
  FIELD_U8(a1, 5356) = v8;
  FIELD_U32(a1, 5344) = 0;
  if ( !v8 )
    goto LABEL_16;
LABEL_10:
  v9 = *v5;
  if ( (unsigned int)*v5 >= 4 )
    v9 = 0;
  result = (StateMethodExecuter *)*(unsigned __int8 *)(a1 + 404 * v9 + 3721);
  if ( ((unsigned __int8)result & 0x40) != 0 )
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 5357);
    if ( !FIELD_U8(a1, 5357) )
    {
      FIELD_U32(a1, 40) = &dword_60CA09A8;
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA0948);
    }
  }
  return result;
}
