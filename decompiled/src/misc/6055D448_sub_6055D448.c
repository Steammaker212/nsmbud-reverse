/* sub_6055D448
 * address: 0x6055D448   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055D448(int a1)
{
  _DWORD *v2; // r6
  int v3; // r7
  int *v4; // r1
  StateMgr *v5; // r0
  StateMethodExecuter *result; // r0
  int v7; // r0
  int v8; // r4
  int v9; // t1
  int v10; // r4
  int v11; // t1

  v2 = (_DWORD *)(a1 + 4720);
  v3 = FIELD_U32(a1, 4720);
  if ( FIELD_U8(a1, 4735) )
  {
    switch ( v3 )
    {
      case 1:
        FIELD_U8(a1, 13752) = 1;
        v4 = &dword_60CADE50;
        ++FIELD_U32(a1, 13736);
        v5 = (StateMgr *)(a1 + 24);
        return StateMgr__changeState(v5, (StateBase *)v4);
      case 2:
        FIELD_U8(a1, 13752) = 0;
        --FIELD_U32(a1, 13736);
        result = StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CADE50);
        break;
      case 3:
        v4 = &dword_60CADE70;
        goto LABEL_14;
      case 4:
        v4 = &dword_60CADE10;
        goto LABEL_14;
      default:
        v4 = &dword_60CADE90;
        goto LABEL_14;
    }
    return result;
  }
  result = (StateMethodExecuter *)FIELD_U8(a1, 4734);
  if ( FIELD_U8(a1, 4734) )
    return result;
  result = (StateMethodExecuter *)FIELD_U8(a1, 4738);
  if ( FIELD_U8(a1, 4738) )
    return result;
  result = (StateMethodExecuter *)sub_60502D80((int)(v2 - 257));
  if ( result )
    return result;
  v7 = FIELD_U32(a1, 5776);
  if ( (v7 & 0x2000) != 0 )
  {
    if ( v3 == 3 )
    {
      sub_60502694((int)(v2 - 257));
      v4 = &dword_60CADE70;
    }
    else
    {
      v4 = &dword_60CADE90;
    }
LABEL_14:
    v5 = (StateMgr *)(a1 + 24);
    return StateMgr__changeState(v5, (StateBase *)v4);
  }
  if ( (v7 & 0x4000) != 0 )
  {
    v4 = &dword_60CADDF0;
    goto LABEL_14;
  }
  result = (StateMethodExecuter *)(FIELD_U32(a1, 5784) | v7);
  if ( ((unsigned __int16)result & 0x140) != 0 )
  {
    v9 = FIELD_U32(a1, 13736);
    v8 = a1 + 13736;
    *(_DWORD *)v8 = v9 - 1;
    FIELD_U8(v8, 16) = 0;
    return StateMgr__changeState((StateMgr *)(v8 - 13712), (StateBase *)&dword_60CADE30);
  }
  else if ( ((unsigned int)result & 0x10080) != 0 )
  {
    v11 = FIELD_U32(a1, 13736);
    v10 = a1 + 13736;
    *(_DWORD *)v10 = v11 + 1;
    FIELD_U8(v10, 16) = 1;
    return StateMgr__changeState((StateMgr *)(v10 - 13712), (StateBase *)&dword_60CADE30);
  }
  else if ( ((unsigned __int8)result & 0x10) != 0 )
  {
    if ( v3 == 3 )
    {
      *v2 = 0;
      return 0;
    }
  }
  else if ( !v3 )
  {
    result = (StateMethodExecuter *)((unsigned __int8)result & 0x20);
    if ( result )
    {
      *v2 = 3;
      return (StateMethodExecuter *)3;
    }
  }
  return result;
}
