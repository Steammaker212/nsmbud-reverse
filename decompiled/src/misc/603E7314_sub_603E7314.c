/* sub_603E7314
 * address: 0x603E7314   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E7314(int a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0

  if ( !FIELD_U8(a1, 108) )
  {
    sub_6077A260(dword_60CBFA90);
    if ( sub_6077A158(dword_60CBFA90) == 1 )
    {
      sub_603E7AC8(a1);
      FIELD_U8(a1, 108) = 1;
    }
  }
  v2 = FIELD_U32(a1, 48);
  if ( v2 < 0 )
  {
    if ( FIELD_S8(dword_60C9CF0C, 1404) < 0
      || (result = (StateMethodExecuter *)FIELD_U8(dword_60C9CF0C, 1406), FIELD_U8(dword_60C9CF0C, 1406)) )
    {
      FIELD_U32(a1, 48) = 50;
      return (StateMethodExecuter *)50;
    }
  }
  else
  {
    if ( !v2 )
      return StateMgr__changeState((StateMgr *)(a1 + 172), (StateBase *)&dword_60C99814);
    result = (StateMethodExecuter *)(v2 - 1);
    FIELD_U32(a1, 48) = result;
    if ( !result )
      return StateMgr__changeState((StateMgr *)(a1 + 172), (StateBase *)&dword_60C99814);
  }
  return result;
}
