/* SE_SYS_BACK_ref_7F3B24
 * address: 0x607F3B24   size: 828   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_BACK_ref_7F3B24(int a1)
{
  _DWORD *v2; // r5
  StateMethodExecuter *result; // r0
  int v4; // r0
  int *v5; // r6
  int v6; // r7
  int *v7; // r6
  int v8; // r7
  int v9; // r0
  int v10; // r7
  int v11; // r6
  int v12; // r6
  int *v13; // r6
  int v14; // r7
  int v15; // r7
  int v16; // r7
  int v17; // r6
  int v18; // r6
  int v19; // r6
  int v20; // r6
  int v21; // r7
  int v22; // r7
  int v23; // r7
  int v24; // r6

  v2 = (_DWORD *)dword_60CA83DC;
  result = *(StateMethodExecuter **)(dword_60CA83DC + 9576);
  if ( result == (StateMethodExecuter *)2 )
  {
    FIELD_U32(a1, 52) = 1;
    sub_60807EF0(SoundSystem_instance, "SE_SYS_BACK", 0, 1);
    StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CC61A0);
    return (StateMethodExecuter *)sub_6054273C(dword_60CABDE4);
  }
  if ( result != (StateMethodExecuter *)3 )
    return result;
  FIELD_U32(a1, 56) = 0;
  v4 = FIELD_U32(dword_60C99DD4, 764);
  if ( (unsigned int)(v4 - 1) >= 2 )
  {
    if ( v4 == 4 )
    {
      if ( (FIELD_U8(dword_60CC6D78, 44) & 0x10) != 0 )
      {
        v15 = v2[2389];
        if ( v15 == sub_605117A0((int)v2) )
        {
          FIELD_U32(a1, 52) = 1;
          FIELD_U32(a1, 56) = 1;
          goto LABEL_26;
        }
        v19 = v2[2389];
        v20 = v19 - sub_605117A0((int)v2);
        if ( v20 != sub_605119FC((int)v2) - 1 )
          return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CC6180);
      }
      else
      {
        if ( sub_605115B0(v2) )
          goto LABEL_16;
        v7 = v2 + 2389;
        v8 = v2[2389];
        if ( v8 == sub_605117A0((int)v2) )
        {
          FIELD_U32(a1, 52) = 1;
          FIELD_U32(a1, 56) = 1;
          goto LABEL_26;
        }
        v21 = *v7;
        v22 = v21 - sub_605117A0((int)v2);
        if ( v22 == sub_605119FC((int)v2) - 1 )
          goto LABEL_32;
        v23 = *v7;
        if ( v23 - sub_605117A0((int)v2) == 1 )
        {
          v9 = 4;
          goto LABEL_33;
        }
        v24 = *v7;
        if ( v24 - sub_605117A0((int)v2) != 2 )
          return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CC6180);
      }
      v9 = 5;
      goto LABEL_33;
    }
    if ( v4 )
    {
      if ( sub_605115B0(v2) )
        goto LABEL_16;
      v13 = v2 + 2389;
      v16 = v2[2389];
      if ( v16 == sub_605117A0((int)v2) )
      {
        FIELD_U32(a1, 52) = 1;
        FIELD_U32(a1, 56) = 1;
        goto LABEL_26;
      }
    }
    else
    {
      if ( (FIELD_U8(dword_60CC6D78, 44) & 4) == 0 )
        goto LABEL_7;
      v13 = v2 + 2389;
      v14 = v2[2389];
      if ( v14 == sub_605117A0((int)v2) )
      {
        FIELD_U32(a1, 52) = 1;
        FIELD_U32(a1, 56) = 1;
        goto LABEL_26;
      }
    }
    v17 = *v13;
    v18 = v17 - sub_605117A0((int)v2);
    if ( v18 != sub_605119FC((int)v2) - 1 )
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CC6180);
LABEL_28:
    v9 = 2;
    goto LABEL_33;
  }
LABEL_7:
  if ( sub_605115B0(v2) )
  {
LABEL_16:
    v9 = 6;
LABEL_33:
    FIELD_U32(a1, 56) = v9;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CC6180);
  }
  v5 = v2 + 2389;
  v6 = v2[2389];
  if ( v6 != sub_605117A0((int)v2) )
  {
    v10 = *v5;
    if ( v10 != sub_605117A0((int)v2) + 1 )
    {
      v11 = *v5;
      v12 = v11 - sub_605117A0((int)v2);
      if ( v12 != sub_605119FC((int)v2) - 1 )
        return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CC6180);
LABEL_32:
      v9 = 3;
      FIELD_U32(a1, 52) = 0;
      goto LABEL_33;
    }
    goto LABEL_28;
  }
  FIELD_U32(a1, 52) = 1;
  FIELD_U32(a1, 56) = 1;
LABEL_26:
  sub_6054273C(dword_60CABDE4);
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CC6180);
}
