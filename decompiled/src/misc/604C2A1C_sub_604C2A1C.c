/* sub_604C2A1C
 * address: 0x604C2A1C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C2A1C(int a1)
{
  _BYTE *v2; // r5
  _DWORD *v3; // r0
  StateMethodExecuter *result; // r0

  v2 = (_BYTE *)(a1 + 14185);
  if ( !FIELD_U8(a1, 14185) && FIELD_U8(dword_60C89E18, 156940) )
  {
    FIELD_U8(a1, 14016) = 0;
    FIELD_U8(a1, 14019) = 0;
    FIELD_U8(a1, 14015) = 0;
    FIELD_U8(a1, 14018) = 0;
    FIELD_U8(a1, 14017) = 0;
    sub_604C6B78(a1);
    *v2 = 1;
  }
  if ( sub_604C7964(a1) )
  {
    sub_604C6B78(a1);
    FIELD_U32(a1, 14156) = 20;
  }
  v3 = (_DWORD *)(a1 + 14156);
  if ( FIELD_U8(a1, 14163) )
  {
    *v3 = 0;
  }
  else if ( (*v3)++ >= 19 )
  {
    StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA2CAC);
  }
  result = (StateMethodExecuter *)FIELD_U8(dword_60C89E18, 254212);
  if ( FIELD_U8(dword_60C89E18, 254212) )
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA2E6C);
  return result;
}
