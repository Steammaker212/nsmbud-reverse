/* SE_SYS_BTN_OVER_ref_2
 * address: 0x604A2EF0   size: 1084   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_BTN_OVER_ref_2(int a1)
{
  _BYTE *v2; // r6
  StateMethodExecuter *result; // r0
  int v4; // r0
  StateBase *v5; // r1
  unsigned int v6; // r1
  int *v7; // r4
  int v8; // t1
  bool v9; // zf
  float v10; // s0
  float v11; // s0
  int v12; // r1
  unsigned int v13; // r1
  _BYTE *v14; // r0

  v2 = (_BYTE *)(a1 + 20541);
  if ( !FIELD_U8(a1, 20541) )
    SE_SYS_CHANGE_COLOR_O_ref(a1);
  result = (StateMethodExecuter *)FIELD_U8(a1, 4978);
  if ( !FIELD_U8(a1, 4978) )
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 4982);
    if ( !FIELD_U8(a1, 4982) )
    {
      if ( FIELD_U8(a1, 4979) )
      {
        v4 = FIELD_U32(a1, 4964);
        if ( !v4 )
        {
          FIELD_U32(a1, 20492) = 3;
          FIELD_U8(a1, 40) = 1;
          v5 = (StateBase *)&unk_60CA1130;
          return StateMgr__changeState((StateMgr *)(a1 + 24), v5);
        }
        if ( v4 == 1 )
        {
          FIELD_U32(a1, 20492) = 2;
          FIELD_U8(a1, 40) = 1;
          v5 = (StateBase *)&unk_60CA1130;
          return StateMgr__changeState((StateMgr *)(a1 + 24), v5);
        }
        sub_60502548(a1 + 3936);
        FIELD_U16(a1, 4988) = 0;
        sub_6047EABC((_DWORD *)(a1 + 3976));
        FIELD_U8(a1, 4979) = 0;
        FIELD_U8(a1, 4976) = 1;
      }
      result = *(StateMethodExecuter **)(a1 + 20484);
      if ( !result )
        return result;
      v6 = FIELD_U32(a1, 20528);
      if ( v6 >= 5 )
        v6 = 0;
      if ( *v2 )
      {
        if ( !FIELD_U8(a1, 20546) )
        {
          result = (StateMethodExecuter *)*((unsigned __int8 *)&FIELD_U32(result, 0x8) + 404 * v6 + 1);
          if ( ((unsigned __int8)result & 0x40) != 0 )
          {
            v8 = FIELD_U32(a1, 13268);
            v7 = (int *)(a1 + 13268);
            *v7 = v8 | 2;
            *((_BYTE *)v7 - 13228) = 1;
            return StateMgr__changeState((StateMgr *)(v7 - 3311), &stru_60CA11B0);
          }
        }
        return result;
      }
      if ( FIELD_U8(a1, 20546) || (*((_BYTE *)&FIELD_U32(result, 0x8) + 404 * v6 + 1) & 0x20) == 0 )
      {
        if ( !FIELD_U8(a1, 4029) )
        {
          v9 = FIELD_U8(a1, 20500) == 0;
          if ( FIELD_U8(a1, 20500) )
            v9 = FIELD_U8(a1, 20501) == 0;
          if ( !v9 )
          {
            v10 = FIELD_F32(a1, 20504);
            if ( FIELD_F32(a1, 20512) <= v10 && v10 <= FIELD_F32(a1, 20520) )
            {
              v11 = FIELD_F32(a1, 20508);
              if ( FIELD_F32(a1, 20516) <= v11 && v11 <= FIELD_F32(a1, 20524) )
              {
                sub_60478680((int)"SE_SYS_BTN_OVER", 15);
                FIELD_U8(a1, 40) = 1;
                v5 = (StateBase *)&dword_60CA1190;
                return StateMgr__changeState((StateMgr *)(a1 + 24), v5);
              }
            }
          }
        }
        if ( FIELD_U8(a1, 20546) )
          return result;
        result = (StateMethodExecuter *)(*((_DWORD *)&result[1].owner + 101 * v6) | *(&FIELD_U32(result, 0x8) + 101 * v6));
        if ( ((unsigned __int8)result & 0x40) != 0 )
        {
          if ( sub_60835008(result) != 1 )
          {
            sub_60807EF0(SoundSystem_instance, "SE_SYS_CURSOR", 0, 1);
            FIELD_U32(a1, 20492) = 2;
            FIELD_U8(a1, 40) = 1;
            v5 = (StateBase *)&unk_60CA1130;
            return StateMgr__changeState((StateMgr *)(a1 + 24), v5);
          }
          v12 = 1;
        }
        else
        {
          if ( ((unsigned __int8)result & 0x80) == 0 )
            return result;
          if ( sub_60835008(result) != 1 )
          {
            sub_60807EF0(SoundSystem_instance, "SE_SYS_CURSOR", 0, 1);
            FIELD_U32(a1, 20492) = 3;
            FIELD_U8(a1, 40) = 1;
            v5 = (StateBase *)&unk_60CA1130;
            return StateMgr__changeState((StateMgr *)(a1 + 24), v5);
          }
          v12 = 0;
        }
        FIELD_U32(a1, 4964) = v12;
        return (StateMethodExecuter *)sub_60502694(a1 + 3936);
      }
      FIELD_U32(a1, 6052) |= 2u;
      v13 = FIELD_U32(a1, 20496);
      if ( v13 == 6 )
      {
        sub_60807EF0(SoundSystem_instance, "SE_SYS_DECIDE", 0, 1);
        FIELD_U8(a1, 40) = 1;
        v5 = (StateBase *)&unk_60CA11D0;
        return StateMgr__changeState((StateMgr *)(a1 + 24), v5);
      }
      v14 = *(_BYTE **)(a1 + 20488);
      if ( v14 )
      {
        if ( (v13 | 1) == 3 )
        {
          if ( v14[2] )
          {
LABEL_47:
            sub_60807EF0(SoundSystem_instance, "SE_SYS_INVALID", 0, 1);
            FIELD_U8(a1, 40) = 1;
            v5 = (StateBase *)&unk_60CA1170;
            return StateMgr__changeState((StateMgr *)(a1 + 24), v5);
          }
          v13 = 3;
        }
        if ( v13 < 7 )
          v14 += v13;
        if ( *v14 )
          goto LABEL_47;
      }
      sub_60807EF0(SoundSystem_instance, "SE_SYS_DECIDE", 0, 1);
      FIELD_U8(a1, 40) = 1;
      v5 = (StateBase *)&stru_60CA1150;
      return StateMgr__changeState((StateMgr *)(a1 + 24), v5);
    }
  }
  return result;
}
