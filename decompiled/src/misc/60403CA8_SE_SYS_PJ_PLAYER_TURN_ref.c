/* SE_SYS_PJ_PLAYER_TURN_ref
 * address: 0x60403CA8   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_PJ_PLAYER_TURN_ref(int a1)
{
  int *v2; // r1
  StateMethodExecuter *result; // r0
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r1
  _BOOL4 v9; // r1
  bool v10; // zf
  int v11; // r1
  int v12; // r1
  _BYTE v13[8]; // [sp+0h] [bp-20h] BYREF
  int v14; // [sp+8h] [bp-18h] BYREF
  int v15; // [sp+Ch] [bp-14h]

  if ( FIELD_U8(a1, 2693) )
  {
    FIELD_U8(a1, 2693) = 0;
    if ( FIELD_S32(a1, 500) <= 4 )
    {
      FIELD_U8(a1, 2706) = 0;
      FIELD_U32(a1, 2648) = FIELD_U32(a1, 2644);
      FIELD_U32(a1, 2580) = FIELD_U32(a1, 2652);
      v2 = &dword_60C99EDC;
      return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)v2);
    }
    FIELD_U8(a1, 2691) = 0;
    result = (StateMethodExecuter *)-1082130432;
    FIELD_U32(a1, 2648) = -1082130432;
    FIELD_U32(a1, 2580) = -1054867456;
    if ( FIELD_U8(a1, 2702) )
    {
      v2 = &dword_60C99F9C;
      return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)v2);
    }
    v6 = FIELD_U32(a1, 2712);
    switch ( v6 )
    {
      case 0:
        FIELD_U8(a1, 2699) = 1;
        FIELD_U8(a1, 2701) = 1;
        FIELD_U8(a1, 2706) = 0;
        FIELD_U32(a1, 2564) = FIELD_U32(a1, 420);
        FIELD_U32(a1, 444) = 0;
        v7 = FIELD_U32(a1, 2644);
        FIELD_U32(a1, 2584) = v7;
        FIELD_U32(a1, 2648) = v7;
        v8 = FIELD_U32(a1, 2652);
        FIELD_U32(a1, 2576) = v8;
        FIELD_U32(a1, 2580) = v8;
        FIELD_U32(a1, 452) = 0;
        FIELD_U32(a1, 456) = 0;
        FIELD_U32(a1, 460) = 0;
        sub_60793B2C(*(_DWORD *)(FIELD_U32(a1, 16) + 4), 0);
        SE_VOC_ref(a1);
        v2 = &dword_60C99FDC;
        return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)v2);
      case 2:
        FIELD_U32(a1, 444) = 0;
        FIELD_U32(a1, 2584) = -1082130432;
        FIELD_U32(a1, 2576) = -1046478848;
        FIELD_U32(a1, 452) = 0;
        FIELD_U32(a1, 456) = 0;
        FIELD_U32(a1, 460) = 0;
        v2 = &dword_60C99FDC;
        return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)v2);
      case 1:
        FIELD_U32(a1, 444) = 1101004800;
        FIELD_U32(a1, 2584) = -1082130432;
        FIELD_U32(a1, 2576) = -1046478848;
        v2 = &dword_60C99FBC;
        return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)v2);
    }
  }
  else
  {
    if ( FIELD_U8(a1, 2703) )
    {
      v2 = &dword_60C9A01C;
      return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)v2);
    }
    result = (StateMethodExecuter *)FIELD_U8(a1, 2695);
    if ( !FIELD_U8(a1, 2695) )
    {
      v4 = FIELD_U32(a1, 2540);
      v5 = FIELD_U8(a1, 2707);
      if ( FIELD_U8(a1, 2707) )
        v5 = 4;
      if ( v4 )
        v5 = FIELD_U32(a1, 2540);
      if ( v5 >= 5 )
        v5 = 0;
      result = *(StateMethodExecuter **)(a1 + 404 * v5 + 516);
      if ( FIELD_U8(a1, 2707) )
      {
        if ( ((unsigned int)result & 0x10208) != 0 )
        {
          FIELD_U8(a1, 2699) = 1;
          v2 = &dword_60C99F3C;
          return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)v2);
        }
      }
      else if ( ((unsigned int)result & 0x10008) != 0 )
      {
        FIELD_U8(a1, 2699) = 1;
        v2 = &dword_60C99F3C;
        return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)v2);
      }
      v9 = v4 != 0;
      v10 = FIELD_U8(a1, 2694) == 0;
      if ( FIELD_U8(a1, 2694) )
        v10 = v9;
      if ( v10 )
      {
        if ( !FIELD_U8(a1, 2698) && ((unsigned __int16)result & 0x2000) != 0 )
        {
          FIELD_U8(a1, 2699) = 1;
          v2 = &dword_60C99FBC;
          return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)v2);
        }
        if ( ((unsigned __int8)result & 0x40) != 0 )
        {
          if ( FIELD_U32(a1, 2536) != 1 )
          {
            v12 = FIELD_U32(a1, 384);
            v14 = FIELD_U32(a1, 380);
            v15 = v12;
            sub_60024400((int)v13, (float *)&v14);
            sub_608141A0(a1 + 56, "SE_SYS_PJ_PLAYER_TURN", v13, 0);
          }
          FIELD_U32(a1, 2536) = 1;
        }
        else
        {
          if ( ((unsigned __int8)result & 0x80) == 0 )
            return result;
          if ( FIELD_U32(a1, 2536) != 2 )
          {
            v11 = FIELD_U32(a1, 384);
            v14 = FIELD_U32(a1, 380);
            v15 = v11;
            sub_60024400((int)v13, (float *)&v14);
            sub_608141A0(a1 + 56, "SE_SYS_PJ_PLAYER_TURN", v13, 0);
          }
          FIELD_U32(a1, 2536) = 2;
        }
        return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)&dword_60C99F7C);
      }
    }
  }
  return result;
}
