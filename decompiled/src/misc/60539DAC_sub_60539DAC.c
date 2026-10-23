/* sub_60539DAC
 * address: 0x60539DAC   size: 1628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60539DAC(int a1)
{
  int *v2; // r6
  int v3; // r7
  _BYTE *v4; // r1
  StateMethodExecuter *result; // r0
  int *v6; // r5
  unsigned int v7; // r3
  int v8; // r6
  int *v9; // r1
  int v10; // r2
  int *v11; // r5
  int v12; // r0
  int v13; // r1
  int *v14; // r2
  int v15; // r0
  int v16; // r1
  int *v17; // r2
  int v18; // r8
  int v19; // r0
  int v20; // r6
  int v21; // r0
  int v22; // r6
  int v23; // r0
  int v24; // r1
  bool v25; // zf

  v2 = (int *)(a1 + 16708);
  v3 = FIELD_U32(a1, 16708);
  FIELD_U8(a1, 83573) = 0;
  v4 = (_BYTE *)(a1 + 83573);
  if ( FIELD_U8(a1, 16722) )
  {
    v6 = (int *)(a1 + 83520);
    result = *(StateMethodExecuter **)(a1 + 83520);
    if ( (unsigned int)(v3 - 1) > 2 )
    {
      v8 = 0;
      if ( result == (StateMethodExecuter *)1 )
      {
LABEL_10:
        v8 = 0;
        result = (StateMethodExecuter *)sub_60474420(
                                          (_DWORD *)(a1 + 12092),
                                          2u,
                                          &dword_60CAB444,
                                          FIELD_U32(a1, 54636),
                                          0);
      }
      goto LABEL_11;
    }
    if ( result == (StateMethodExecuter *)1 )
      return result;
    v7 = FIELD_U32(a1, 54636);
LABEL_5:
    result = (StateMethodExecuter *)sub_604742D0((_DWORD *)(a1 + 12092), 2u, &dword_60CAB444, v7, 1.0, 0);
    v8 = 1;
LABEL_11:
    *v6 = v8;
    return result;
  }
  if ( FIELD_U8(a1, 16723) )
  {
    if ( v3 == 7 )
    {
      FIELD_U32(a1, 52) = &dword_60CAB514;
      v9 = &dword_60CAB5D4;
    }
    else
    {
      *v4 = 1;
      v12 = 0;
      v13 = 0;
      if ( (unsigned int)(v3 - 1) <= 2 )
      {
        v13 = v3 - 1;
        v12 = *(_DWORD *)(a1 + 4012 * (v3 - 1) + 4048);
        if ( v12 != 1 )
          v12 = 0;
      }
      v14 = &dword_60CAB594;
      if ( v3 )
      {
        if ( !v12 )
        {
          v14 = &dword_60CAB894;
          if ( !*(_DWORD *)(a1 + 4012 * v13 + 4048) )
            v14 = &dword_60CAB8B4;
        }
      }
      else
      {
        v14 = &dword_60CAB514;
      }
      FIELD_U32(a1, 52) = v14;
      v9 = &dword_60CAB5F4;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v9);
  }
  result = (StateMethodExecuter *)FIELD_U8(a1, 16726);
  if ( !FIELD_U8(a1, 16726) )
  {
    v11 = (int *)(a1 + 83540);
    v10 = FIELD_U32(a1, 83540);
    if ( (v10 & 0x4000) != 0 )
    {
      *v2 = 7;
      FIELD_U32(a1, 52) = &dword_60CAB514;
      v9 = &dword_60CAB5B4;
      return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v9);
    }
    if ( (v10 & 0x2000) != 0 )
    {
      if ( (FIELD_U8(a1, 54237) & 0x20) != 0 )
        *v4 = 1;
      sub_60502694((int)(v4 - 67893));
      v15 = 0;
      v16 = 0;
      if ( (unsigned int)(v3 - 1) <= 2 )
      {
        v16 = v3 - 1;
        v15 = *(_DWORD *)(a1 + 4012 * (v3 - 1) + 4048);
        if ( v15 != 1 )
          v15 = 0;
      }
      v17 = &dword_60CAB594;
      if ( v3 )
      {
        if ( !v15 )
        {
          v17 = &dword_60CAB894;
          if ( !*(_DWORD *)(a1 + 4012 * v16 + 4048) )
            v17 = &dword_60CAB8B4;
        }
      }
      else
      {
        v17 = &dword_60CAB514;
      }
      FIELD_U32(a1, 52) = v17;
      v9 = &dword_60CAB5F4;
      return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v9);
    }
    if ( FIELD_U8(a1, 83572) )
      goto LABEL_17;
    v18 = FIELD_U8(dword_60C9CFB8, 81);
    if ( FIELD_U8(dword_60C9CFB8, 81) )
      v18 = 4;
    if ( (v10 & 0x400) != 0 )
    {
      if ( !sub_60459718((__guard *)dword_60C9CFB8, v18) )
        goto LABEL_56;
      v10 = *v11;
    }
    if ( (v10 & 0x100) == 0 )
    {
      if ( ((v10 & 0x800) == 0 || sub_60459718((__guard *)dword_60C9CFB8, v18))
        && !sub_6045ADE4(dword_60C9CFB8, v18, 0x4000, 1)
        && !sub_6045ADE4(dword_60C9CFB8, v18, 32, 1) )
      {
LABEL_17:
        switch ( v3 )
        {
          case 0:
            if ( (*(_BYTE *)v11 & 0x20) != 0 )
              *v2 = FIELD_U32(a1, 83508);
            v6 = (int *)(a1 + 83520);
            result = *(StateMethodExecuter **)(a1 + 83520);
            goto LABEL_60;
          case 1:
            FIELD_U32(a1, 83548) = 0;
            FIELD_U32(a1, 83552) = 0;
            FIELD_U32(a1, 83556) = 0;
            v23 = 2;
            if ( (*v11 & 0x80) != 0 )
              goto LABEL_75;
            if ( (*v11 & 0x10) == 0 )
              goto LABEL_76;
            v24 = 1;
            break;
          case 2:
            v23 = 1;
            FIELD_U32(a1, 83548) = 1;
            FIELD_U32(a1, 83552) = 1;
            FIELD_U32(a1, 83556) = 1;
            v25 = (*v11 & 0x40) == 0;
            if ( (*v11 & 0x40) == 0 )
            {
              v23 = 3;
              v25 = (*v11 & 0x80) == 0;
            }
            if ( !v25 )
              goto LABEL_75;
            if ( (*v11 & 0x10) == 0 )
              goto LABEL_76;
            v24 = 2;
            break;
          case 3:
            v23 = 2;
            FIELD_U32(a1, 83548) = 2;
            FIELD_U32(a1, 83552) = 2;
            FIELD_U32(a1, 83556) = 2;
            if ( (*v11 & 0x40) != 0 )
              goto LABEL_75;
            if ( (*v11 & 0x10) == 0 )
              goto LABEL_76;
            v24 = 3;
            break;
          default:
            v6 = (int *)(a1 + 83520);
            result = *(StateMethodExecuter **)(a1 + 83520);
            if ( (unsigned int)(v3 - 1) <= 2 )
              goto LABEL_77;
LABEL_60:
            v8 = 0;
            if ( result == (StateMethodExecuter *)1 )
              goto LABEL_10;
            goto LABEL_11;
        }
        FIELD_U32(a1, 83508) = v24;
        v23 = 0;
LABEL_75:
        *v2 = v23;
LABEL_76:
        v6 = (int *)(a1 + 83520);
        result = *(StateMethodExecuter **)(a1 + 83520);
LABEL_77:
        if ( result != (StateMethodExecuter *)1 )
        {
          v7 = FIELD_U32(a1, 54636);
          goto LABEL_5;
        }
        return result;
      }
      FIELD_U32(a1, 83516) = 2;
      v19 = FIELD_U32(a1, 83520);
      if ( (unsigned int)(v3 - 1) > 2 )
      {
        v20 = 0;
        if ( v19 == 1 )
        {
          v20 = 0;
          sub_60474420((_DWORD *)(a1 + 12092), 2u, &dword_60CAB444, FIELD_U32(a1, 54636), 0);
        }
      }
      else
      {
        if ( v19 == 1 )
        {
LABEL_86:
          v9 = &dword_60CAB734;
          return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v9);
        }
        sub_604742D0((_DWORD *)(a1 + 12092), 2u, &dword_60CAB444, FIELD_U32(a1, 54636), 1.0, 0);
        v20 = 1;
      }
      FIELD_U32(a1, 83520) = v20;
      goto LABEL_86;
    }
LABEL_56:
    FIELD_U32(a1, 83516) = 1;
    v21 = FIELD_U32(a1, 83520);
    if ( (unsigned int)(v3 - 1) > 2 )
    {
      v22 = 0;
      if ( v21 == 1 )
      {
        v22 = 0;
        sub_60474420((_DWORD *)(a1 + 12092), 2u, &dword_60CAB444, FIELD_U32(a1, 54636), 0);
      }
    }
    else
    {
      if ( v21 == 1 )
      {
LABEL_82:
        v9 = &dword_60CAB614;
        return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v9);
      }
      sub_604742D0((_DWORD *)(a1 + 12092), 2u, &dword_60CAB444, FIELD_U32(a1, 54636), 1.0, 0);
      v22 = 1;
    }
    FIELD_U32(a1, 83520) = v22;
    goto LABEL_82;
  }
  return result;
}
