/* sub_604D87EC
 * address: 0x604D87EC   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604D87EC(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  int v4; // r2
  StateBase *v5; // r1
  int a5[6]; // [sp+0h] [bp-18h] BYREF

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 44, 1u) + 51);
  if ( ((unsigned __int8)result & 1) == 0 )
    return result;
  LOWORD(a5[0]) = 257;
  v3 = 0;
  v4 = FIELD_U32(a1, 13276);
  if ( v4 )
  {
    if ( v4 != 2 )
      goto LABEL_6;
    v3 = 1;
  }
  *(_BYTE *)((unsigned int)a5 | v3) = 0;
LABEL_6:
  sub_604D99B0(a1, a5);
  a5[1] = 2;
  FIELD_U32(a1, 4720) = 2;
  if ( FIELD_U32(a1, 20500) || FIELD_U32(a1, 20504) )
    v5 = (StateBase *)&unk_60CA40B8;
  else
    v5 = (StateBase *)&unk_60CA40D8;
  return StateMgr__changeState((StateMgr *)(a1 + 20), v5);
}
