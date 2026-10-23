/* sub_605337D8
 * address: 0x605337D8   size: 1572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605337D8(int a1)
{
  int v2; // r5
  int *v3; // r7
  StateMethodExecuter *result; // r0
  int *v5; // r1
  int v6; // r1
  _BYTE *v7; // r6
  int v8; // r8
  int v9; // r0
  int *v10; // r0
  int *v11; // r0
  int v12; // r1
  int v13; // r0
  bool v14; // zf
  int v15; // r1
  int v16; // r1
  bool v17; // zf
  bool v18; // zf
  bool v19; // zf

  v3 = (int *)(a1 + 16728);
  v2 = FIELD_U32(a1, 16728);
  FIELD_U8(a1, 83633) = 0;
  result = (StateMethodExecuter *)(a1 + 83633);
  if ( BYTE1(result[-5575].currentState) )
    return (StateMethodExecuter *)sub_605391B0(a1, v2);
  if ( FIELD_U8(a1, 16743) )
  {
    if ( v2 == 12 )
    {
      FIELD_U32(a1, 52) = &dword_60CAAE04;
      v5 = &dword_60CAAF44;
    }
    else
    {
      LOBYTE(FIELD_U32(result, 0x0)) = 1;
      v10 = &dword_60CAAF64;
      switch ( v2 )
      {
        case 0:
          v10 = &dword_60CAAE84;
          break;
        case 1:
          if ( FIELD_U32(a1, 4048) != 1 )
            goto LABEL_26;
          v10 = &dword_60CAAF04;
          break;
        case 2:
          if ( FIELD_U32(a1, 8060) != 1 )
            goto LABEL_26;
          v10 = &dword_60CAAF04;
          break;
        case 3:
          if ( FIELD_U32(a1, 12072) != 1 )
            goto LABEL_26;
          v10 = &dword_60CAAF04;
          break;
        case 7:
          break;
        case 8:
          v10 = &dword_60CAB244;
          break;
        default:
LABEL_26:
          v10 = &dword_60CAB224;
          break;
      }
      FIELD_U32(a1, 52) = v10;
      v5 = &dword_60CAAF84;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v5);
  }
  if ( FIELD_U8(a1, 16746) )
    return result;
  v7 = (_BYTE *)(a1 + 83604);
  v6 = FIELD_U32(a1, 83604);
  if ( (v6 & 0x4000) != 0 )
  {
    *v3 = 12;
    FIELD_U32(a1, 52) = &dword_60CAAE04;
    v5 = &dword_60CAAF24;
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v5);
  }
  v8 = (int)&result[-5662].currentState + 3;
  if ( (v6 & 0x2000) != 0 )
  {
    if ( (FIELD_U8(a1, 54297) & 0x20) != 0 )
      LOBYTE(FIELD_U32(result, 0x0)) = 1;
    sub_60502694((int)&result[-5662].currentState + 3);
    v11 = &dword_60CAAF64;
    switch ( v2 )
    {
      case 0:
        v11 = &dword_60CAAE84;
        break;
      case 1:
        if ( FIELD_U32(a1, 4048) != 1 )
          goto LABEL_47;
        v11 = &dword_60CAAF04;
        break;
      case 2:
        if ( FIELD_U32(a1, 8060) != 1 )
          goto LABEL_47;
        v11 = &dword_60CAAF04;
        break;
      case 3:
        if ( FIELD_U32(a1, 12072) != 1 )
          goto LABEL_47;
        v11 = &dword_60CAAF04;
        break;
      case 7:
        break;
      case 8:
        v11 = &dword_60CAB244;
        break;
      default:
LABEL_47:
        v11 = &dword_60CAB224;
        break;
    }
    FIELD_U32(a1, 52) = v11;
    v5 = &dword_60CAAF84;
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v5);
  }
  if ( FIELD_U8(a1, 83632) )
  {
LABEL_10:
    switch ( v2 )
    {
      case 0:
        if ( (*v7 & 0x20) != 0 )
        {
          v9 = FIELD_U32(a1, 83572);
          goto LABEL_100;
        }
        return (StateMethodExecuter *)sub_605391B0(a1, v2);
      case 1:
        FIELD_U32(a1, 83608) = 0;
        FIELD_U32(a1, 83612) = 0;
        FIELD_U32(a1, 83616) = 0;
        v9 = 2;
        v14 = (*(_DWORD *)v7 & 0x80) == 0;
        if ( (*(_DWORD *)v7 & 0x80) == 0 )
        {
          v9 = 5;
          v14 = (*(_DWORD *)v7 & 0x20) == 0;
        }
        if ( !v14 )
          goto LABEL_100;
        if ( (*(_DWORD *)v7 & 0x10) != 0 )
        {
          v15 = 1;
          goto LABEL_74;
        }
        return (StateMethodExecuter *)sub_605391B0(a1, v2);
      case 2:
        v9 = 1;
        FIELD_U32(a1, 83608) = 1;
        FIELD_U32(a1, 83612) = 1;
        FIELD_U32(a1, 83616) = 1;
        v16 = *(_DWORD *)v7;
        if ( (*(_DWORD *)v7 & 0x40) != 0 )
          goto LABEL_100;
        v9 = 3;
        v17 = (*(_DWORD *)v7 & 0x80) == 0;
        if ( (v16 & 0x80) == 0 )
        {
          v9 = 4;
          v17 = (*(_DWORD *)v7 & 0x20) == 0;
        }
        if ( !v17 )
          goto LABEL_100;
        if ( (v16 & 0x10) != 0 )
        {
          v15 = 2;
          goto LABEL_74;
        }
        return (StateMethodExecuter *)sub_605391B0(a1, v2);
      case 3:
        v9 = 2;
        FIELD_U32(a1, 83608) = 2;
        FIELD_U32(a1, 83612) = 2;
        FIELD_U32(a1, 83616) = 2;
        v18 = (*(_DWORD *)v7 & 0x40) == 0;
        if ( (*(_DWORD *)v7 & 0x40) == 0 )
        {
          v9 = 6;
          v18 = (*(_DWORD *)v7 & 0x20) == 0;
        }
        if ( !v18 )
          goto LABEL_100;
        if ( (*(_DWORD *)v7 & 0x10) != 0 )
        {
          v15 = 3;
LABEL_74:
          FIELD_U32(a1, 83572) = v15;
          v9 = 0;
          goto LABEL_100;
        }
        return (StateMethodExecuter *)sub_605391B0(a1, v2);
      case 4:
        v13 = *(_DWORD *)v7;
        if ( (*(_DWORD *)v7 & 0x10) != 0 )
        {
          v9 = 2;
          goto LABEL_100;
        }
        if ( (v13 & 0x40) != 0 )
        {
          v9 = 5;
          goto LABEL_100;
        }
        if ( (v13 & 0x80) == 0 )
          goto LABEL_77;
        goto LABEL_92;
      case 5:
        v13 = *(_DWORD *)v7;
        if ( (*(_DWORD *)v7 & 0x10) != 0 )
        {
          v9 = 1;
          goto LABEL_100;
        }
        if ( (v13 & 0x80) != 0 )
        {
          v9 = 4;
          goto LABEL_100;
        }
LABEL_77:
        if ( (v13 & 0x20) != 0 )
          goto LABEL_88;
        return (StateMethodExecuter *)sub_605391B0(a1, v2);
      case 6:
        v9 = 3;
        v19 = (*(_DWORD *)v7 & 0x10) == 0;
        if ( (*(_DWORD *)v7 & 0x10) == 0 )
        {
          v9 = 4;
          v19 = (*(_DWORD *)v7 & 0x40) == 0;
        }
        if ( !v19 )
          goto LABEL_100;
        if ( (*(_DWORD *)v7 & 0x20) != 0 )
          *v3 = 7;
        return (StateMethodExecuter *)sub_605391B0(a1, v2);
      case 7:
        if ( (*(_DWORD *)v7 & 0x10) != 0 )
        {
LABEL_92:
          v9 = 6;
        }
        else
        {
          if ( (*(_DWORD *)v7 & 0x40) == 0 )
            return (StateMethodExecuter *)sub_605391B0(a1, v2);
LABEL_88:
          FIELD_U32(a1, 83568) = *v3;
          v9 = 8;
        }
        goto LABEL_100;
      case 8:
        if ( (*(_DWORD *)v7 & 0x10) != 0 )
        {
          v9 = FIELD_U32(a1, 83568);
          if ( (v9 & 0xFFFFFFFE) != 4 )
            v9 = 5;
        }
        else
        {
          if ( (*(_DWORD *)v7 & 0x80) == 0 )
            return (StateMethodExecuter *)sub_605391B0(a1, v2);
          v9 = 7;
        }
LABEL_100:
        *v3 = v9;
        break;
      default:
        return (StateMethodExecuter *)sub_605391B0(a1, v2);
    }
    return (StateMethodExecuter *)sub_605391B0(a1, v2);
  }
  if ( (v6 & 0x400) != 0 )
  {
    v12 = FIELD_U8(dword_60C9CFB8, 81);
    if ( FIELD_U8(dword_60C9CFB8, 81) )
      v12 = 4;
    if ( !sub_60459718((__guard *)dword_60C9CFB8, v12) )
      goto LABEL_40;
    v6 = *(_DWORD *)v7;
  }
  if ( (v6 & 0x100) != 0 )
  {
LABEL_40:
    FIELD_U32(a1, 83580) = 1;
    sub_605391B0(a1, v2);
    sub_60502A24(v8, dword_60B03A54, 5, 1);
    v5 = &dword_60CAAFA4;
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v5);
  }
  if ( ((v6 & 0x800) == 0 || sub_60459718((__guard *)dword_60C9CFB8, 0))
    && !sub_6045ADE4(dword_60C9CFB8, 0, 0x4000, 1)
    && !sub_6045ADE4(dword_60C9CFB8, 0, 32, 1) )
  {
    goto LABEL_10;
  }
  FIELD_U32(a1, 83580) = 2;
  sub_605391B0(a1, v2);
  sub_60502A24(v8, dword_60B03A54, 5, 1);
  v5 = &dword_60CAB0C4;
  return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v5);
}
