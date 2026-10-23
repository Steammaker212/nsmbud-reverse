/* sub_60488120
 * address: 0x60488120   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60488120(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  int v4; // r1
  StateBase *v5; // r1
  _BYTE v6[12]; // [sp+4h] [bp-Ch] BYREF

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 36, 4u) + 51);
  if ( ((unsigned __int8)result & 1) == 0 )
    return result;
  v3 = 1;
  v6[0] = 1;
  v6[1] = 1;
  v4 = FIELD_U32(a1, 14228);
  if ( v4 != 3 )
  {
    if ( v4 )
      goto LABEL_6;
    v3 = 0;
  }
  *(_BYTE *)((unsigned int)v6 | v3) = 0;
LABEL_6:
  sub_6048FEE8(a1, v6);
  if ( FIELD_U32(a1, 47820) || FIELD_U32(a1, 47824) )
    v5 = (StateBase *)&unk_60C9F4A0;
  else
    v5 = &stru_60C9F4C0;
  return StateMgr__changeState((StateMgr *)(a1 + 20), v5);
}
