/* sub_60488C54
 * address: 0x60488C54   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60488C54(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  int v4; // r1
  StateBase *v5; // r1
  int v6; // r0
  int v7; // r1
  StateMethodExecuter *v8; // [sp+4h] [bp-14h]
  _BYTE v9[4]; // [sp+8h] [bp-10h] BYREF
  _BYTE v10[12]; // [sp+Ch] [bp-Ch] BYREF

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 36, 4u) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v8 = *(StateMethodExecuter **)(a1 + 47720);
    result = v8;
    if ( v8 != (StateMethodExecuter *)7 )
    {
      if ( v8 != (StateMethodExecuter *)5 )
        return result;
      v3 = 1;
      v10[0] = 1;
      v10[1] = 1;
      v4 = FIELD_U32(a1, 14228);
      if ( v4 != 3 )
      {
        if ( v4 )
        {
LABEL_8:
          sub_6048FEE8(a1, v10);
          if ( FIELD_U32(a1, 47820) || FIELD_U32(a1, 47824) )
            v5 = (StateBase *)&unk_60C9F4A0;
          else
            v5 = &stru_60C9F4C0;
          return StateMgr__changeState((StateMgr *)(a1 + 20), v5);
        }
        v3 = 0;
      }
      *(_BYTE *)((unsigned int)v10 | v3) = 0;
      goto LABEL_8;
    }
    v6 = 1;
    v9[0] = 1;
    v9[1] = 1;
    v7 = FIELD_U32(a1, 14228);
    if ( v7 != 3 )
    {
      if ( v7 )
      {
LABEL_15:
        sub_6048FEE8(a1, v9);
        if ( FIELD_U32(a1, 47820) || FIELD_U32(a1, 47824) )
          v5 = (StateBase *)&unk_60C9F4A0;
        else
          v5 = &stru_60C9F4C0;
        return StateMgr__changeState((StateMgr *)(a1 + 20), v5);
      }
      v6 = 0;
    }
    *(_BYTE *)((unsigned int)v9 | v6) = 0;
    goto LABEL_15;
  }
  return result;
}
