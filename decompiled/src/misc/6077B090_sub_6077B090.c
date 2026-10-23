/* sub_6077B090
 * address: 0x6077B090   size: 1040   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6077B090(unsigned int *a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r0
  StateMgr *v4; // r0
  StateBase *CurrentState; // r0
  int v6; // r5
  _DWORD *v7; // r0
  unsigned int v8; // r0
  int v9; // r5
  int v10; // r4
  char v11; // r12
  _DWORD *v12; // r4
  int v13; // t1
  int v14; // r5
  char v15; // r12
  _DWORD *v16; // r0
  unsigned int v17; // r0
  int v18; // r5
  char v19; // r12
  _DWORD *v20; // r5
  int v21; // t1

  v2 = a1[6];
  if ( v2 )
    a1[6] = v2 - 1;
  switch ( a1[5] )
  {
    case 1u:
      if ( FIELD_S8(dword_60C9CF0C, 1404) >= 0 && !FIELD_U8(dword_60C9CF0C, 1406) )
      {
        a1[5] = 2;
        v10 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[4]);
        if ( ((unsigned int)&dword_60CB247C & ~(1618457096 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60CB247C) )
        {
          dword_60CB2478 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60CB247C);
        }
        if ( v10 && (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60CB2478) == 1 )
        {
          FIELD_U32(v10, 6312) = 1;
          v13 = FIELD_U32(v10, 6304);
          v12 = (_DWORD *)(v10 + 6304);
          if ( !v13 )
            *v12 = 2;
        }
      }
      break;
    case 2u:
      v14 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[4]);
      if ( ((unsigned int)&dword_60CB247C & ~(1618457284 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60CB247C) )
      {
        dword_60CB2478 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60CB247C);
      }
      if ( v14 && (**(int (__fastcall ***)(int, int *))v14)(v14, &dword_60CB2478) == 1 && FIELD_U32(v14, 6308) )
      {
        a1[5] = 3;
        v16 = (_DWORD *)dword_60CBFA90;
        FIELD_U8(dword_60CBFA90, 448) = 1;
        a1[7] = sub_607782F4(v16);
        sub_60778334((_DWORD *)dword_60CBFA90);
        v17 = a1[7];
        if ( v17 >= 4 )
          v17 = 0;
        v9 = *(_DWORD *)(PlayerMgr_instance + 4 * v17 + 32);
        if ( v9 )
          goto LABEL_31;
      }
      break;
    case 3u:
    case 4u:
      v3 = a1[7];
      if ( v3 >= 4 )
        v3 = 0;
      v4 = *(StateMgr **)(PlayerMgr_instance + 4 * v3 + 32);
      if ( v4 )
      {
        CurrentState = StateMgr__getCurrentState(v4 + 605);
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v6 != (*(int (**)(void))(dword_60CC49AC + 8))() )
        {
          if ( a1[5] == 3 )
          {
            a1[5] = 3;
            v7 = (_DWORD *)dword_60CBFA90;
            FIELD_U8(dword_60CBFA90, 448) = 1;
            a1[7] = sub_607782F4(v7);
            sub_60778334((_DWORD *)dword_60CBFA90);
            v8 = a1[7];
            if ( v8 >= 4 )
              v8 = 0;
            v9 = *(_DWORD *)(PlayerMgr_instance + 4 * v8 + 32);
            if ( v9 )
            {
LABEL_31:
              if ( !sub_6077832C(dword_60CBFA90) )
                a1[5] = 4;
              sub_607A5AE8(v9);
            }
          }
          else
          {
            a1[5] = 5;
            sub_605E9424(dword_60CB1BE4);
          }
        }
      }
      break;
    case 5u:
      if ( sub_605E9514(dword_60CB1BE4) )
      {
        v18 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[4]);
        if ( ((unsigned int)&dword_60CB247C & ~(1618457596 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60CB247C) )
        {
          dword_60CB2478 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60CB247C);
        }
        if ( v18 )
        {
          if ( (**(int (__fastcall ***)(int, int *))v18)(v18, &dword_60CB2478) == 1 )
          {
            v21 = FIELD_U32(v18, 6304);
            v20 = (_DWORD *)(v18 + 6304);
            if ( (unsigned int)(v21 - 1) <= 1 )
              *v20 = 3;
          }
        }
        a1[5] = 0;
      }
      break;
    default:
      return;
  }
}
