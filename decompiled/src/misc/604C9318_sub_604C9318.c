/* sub_604C9318
 * address: 0x604C9318   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C9318(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  int *v5; // r1
  StateMethodExecuter *result; // r0

  sub_604D3C50(a1);
  v2 = FIELD_U32(a1, 615700);
  if ( v2 >= 0xA )
    v2 = 0;
  v3 = a1 + 52644 * v2;
  v4 = FIELD_U32(v3, 141860);
  if ( v4 <= 6 && ((1 << v4) & 0x68) != 0 || FIELD_U8(v3, 94191) )
  {
    v5 = &dword_60CA3238;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v5);
  }
  result = (StateMethodExecuter *)*(unsigned __int8 *)(a1 + 52644 * v2 + 94194);
  if ( !result )
  {
    v5 = &dword_60CA31D8;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v5);
  }
  return result;
}
