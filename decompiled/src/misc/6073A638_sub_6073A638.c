/* sub_6073A638
 * address: 0x6073A638   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6073A638(StateMethodExecuter *result)
{
  void **p_owner; // r1
  int owner_low; // r2
  _BYTE *v3; // r4

  p_owner = &result[508].owner;
  owner_low = LOWORD(result[508].owner);
  if ( LOWORD(result[508].owner) )
  {
    *(_WORD *)p_owner = owner_low - 1;
    return (StateMethodExecuter *)(owner_low - 1);
  }
  else
  {
    v3 = (char *)&result[509].vtable + 1;
    if ( BYTE1(result[509].vtable) )
    {
      StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CBDFE4);
      result = (StateMethodExecuter *)((unsigned __int8)*v3 - 1);
      *v3 = (_BYTE)result;
    }
    else if ( LOBYTE(result[510].owner) == 1 )
    {
      return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CBE024);
    }
    else if ( !LOBYTE(result[510].owner) )
    {
      return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CBE004);
    }
  }
  return result;
}
