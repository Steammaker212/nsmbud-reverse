/* sub_6049AE04
 * address: 0x6049AE04   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049AE04(int a1)
{
  int *v2; // r6
  int v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r0
  StateMethodExecuter *result; // r0
  int v8; // r0
  int v9; // r0
  int *v10; // r1

  v2 = (int *)(a1 + 5332);
  v3 = dword_60C9CFB8;
  if ( sub_604593D0(dword_60C9CFB8, FIELD_U32(a1, 5332)) )
  {
    FIELD_U8(a1, 5356) = 1;
    goto LABEL_3;
  }
  if ( !sub_604592A0(v3, *v2) )
  {
    FIELD_U8(a1, 5356) = 0;
LABEL_17:
    v10 = &dword_60CA0868;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v10);
  }
  v8 = *v2;
  if ( (unsigned int)*v2 >= 4 )
    v8 = 0;
  v9 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 404 * v8 + 4040) + 20))(*(_DWORD *)(a1 + 404 * v8 + 4040));
  FIELD_U8(a1, 5356) = v9;
  FIELD_U32(a1, 5344) = 0;
  if ( !v9 )
    goto LABEL_17;
LABEL_3:
  v4 = *v2;
  if ( (unsigned int)*v2 >= 4 )
    v4 = 0;
  v5 = a1 + 404 * v4;
  v6 = FIELD_U32(v5, 3720);
  if ( (v6 & 0x2000) != 0 && !FIELD_U8(a1, 5357) )
  {
    v10 = &dword_60CA08C8;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v10);
  }
  result = (StateMethodExecuter *)(FIELD_U32(v5, 3728) | v6);
  if ( ((unsigned __int8)result & 0x40) != 0 && !FIELD_U8(a1, 5357) )
  {
    FIELD_U8(a1, 5352) = 0;
    v10 = &dword_60CA0888;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v10);
  }
  if ( ((unsigned __int8)result & 0x80) != 0 )
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 5357);
    if ( !FIELD_U8(a1, 5357) )
    {
      FIELD_U8(a1, 5352) = 1;
      v10 = &dword_60CA0888;
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v10);
    }
  }
  return result;
}
