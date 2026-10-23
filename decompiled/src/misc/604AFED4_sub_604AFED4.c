/* sub_604AFED4
 * address: 0x604AFED4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604AFED4(int a1)
{
  int v1; // r4
  int v2; // r1
  StateMethodExecuter *result; // r0
  int *v4; // r1

  v1 = a1;
  v2 = FIELD_U8(a1, 38089);
  LOBYTE(a1) = 1;
  if ( !v2 )
    a1 = FIELD_U8(v1, 38090) | (FIELD_U32(dword_60C99DD4, 1376) >> 3) & 1;
  FIELD_U8(v1, 4653) = a1;
  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(v1 + 20, 0) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( FIELD_U32(v1, 4636) == 8 )
      v4 = &dword_60CA1A34;
    else
      v4 = &dword_60CA19F4;
    return StateMgr__changeState((StateMgr *)(v1 + 6112), (StateBase *)v4);
  }
  return result;
}
