/* sub_604EEC38
 * address: 0x604EEC38   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EEC38(int a1)
{
  int *v2; // r6
  int v3; // r7
  int v4; // r0
  int v5; // r5
  StateMgr *v6; // r0
  StateBase *v7; // r1
  int result; // r0
  char v9; // r0
  int v11; // r3
  int v12; // r1
  int v13; // r3
  int v14; // r3
  bool v15; // zf

  v2 = (int *)(a1 + 47116);
  v3 = FIELD_U32(a1, 47116);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( (unsigned int)(v3 - 1) >= 0xA )
      v4 = 0;
    v5 = *(_DWORD *)(dword_60CC6D78 + 4 * v4 + 98488);
  }
  else
  {
    v5 = 15;
  }
  if ( FIELD_U8(a1, 47131) )
  {
    if ( v3 )
    {
      if ( sub_604F31CC(a1, v5) == 1 )
      {
        sub_60478680((int)"SE_SYS_DECIDE", 9);
        v6 = (StateMgr *)(a1 + 42504);
        v7 = (StateBase *)&unk_60CA6440;
        return (int)StateMgr__changeState(v6, v7);
      }
      return (int)StateMgr__changeState((StateMgr *)(a1 + 42504), &stru_60CA64A0);
    }
    else
    {
      return (int)StateMgr__changeState((StateMgr *)(a1 + 42504), &stru_60CA6420);
    }
  }
  else
  {
    result = FIELD_U8(a1, 47130);
    if ( !FIELD_U8(a1, 47130) )
    {
      result = FIELD_U32(a1, 48188);
      if ( (result & 0x4000) != 0 )
      {
        return (int)StateMgr__changeState((StateMgr *)(a1 + 42504), &stru_60CA6400);
      }
      else if ( (result & 0x2000) != 0 )
      {
        if ( v5 != 15 )
        {
          sub_60502694(a1 + 46088);
          v12 = sub_604F31CC(a1, v5);
          v6 = (StateMgr *)(a1 + 42504);
          if ( v12 == 1 )
            v7 = (StateBase *)&unk_60CA6440;
          else
            v7 = &stru_60CA64A0;
          return (int)StateMgr__changeState(v6, v7);
        }
        return sub_60478680((int)"SE_SYS_INVALID", 9);
      }
      else if ( !FIELD_U8(a1, 47134) )
      {
        v9 = FIELD_U32(a1, 48196) | result;
        if ( (v9 & 0x40) != 0 )
        {
          result = FIELD_U32(a1, 47116);
          while ( 1 )
          {
            if ( result-- <= 1 )
              result = 10;
            if ( result == v3 )
              break;
            v11 = result - 1;
            if ( (unsigned int)(result - 1) >= 0xA )
              v11 = 0;
            if ( *(_DWORD *)(dword_60CC6D78 + 4 * v11 + 98488) != 15 )
              goto LABEL_45;
          }
        }
        else
        {
          if ( (v9 & 0x80) == 0 )
          {
            result = FIELD_U32(a1, 47116);
            *v2 = v3;
            return result;
          }
          v13 = FIELD_U32(a1, 47116);
          while ( 1 )
          {
            result = 1;
            if ( v13 < 10 )
              result = v13 + 1;
            if ( result == v3 )
              break;
            v14 = result - 1;
            if ( (unsigned int)(result - 1) >= 0xA )
              v14 = 0;
            v15 = *(_DWORD *)(dword_60CC6D78 + 4 * v14 + 98488) == 15;
            v13 = result;
            if ( !v15 )
              goto LABEL_45;
          }
        }
        sub_60478680((int)"SE_SYS_INVALID", 9);
        result = v3;
LABEL_45:
        *v2 = result;
      }
    }
  }
  return result;
}
