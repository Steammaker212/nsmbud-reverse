/* sub_60775CF4
 * address: 0x60775CF4   size: 836   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60775CF4(int a1)
{
  int v2; // r5
  _DWORD *v3; // r0
  int ActorSlotChecked; // r0
  int v5; // r0
  int v6; // r5
  _DWORD *v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int *v13; // r1
  int v14; // r0
  int v15; // r5
  _DWORD *v16; // r0
  int v17; // r0

  switch ( FIELD_U32(a1, 52) )
  {
    case 0:
      ((void (__fastcall *)(int))loc_6077876C)(a1);
      break;
    case 1:
      if ( sub_605E95E4((_DWORD *)dword_60CB1BE4) == 1 )
      {
        sub_605E955C(dword_60CB1BE4);
        v2 = FIELD_U32(a1, 68);
        if ( v2 != a1 + 64 )
        {
          v3 = (_DWORD *)(v2 - 4);
          do
          {
            ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, *v3);
            if ( ActorSlotChecked )
              FIELD_U32(ActorSlotChecked, 1228) |= 0x10000000u;
            v2 = FIELD_U32(v2, 4);
            v3 = (_DWORD *)(v2 - 4);
          }
          while ( v2 - 4 != a1 + 60 );
        }
        FIELD_U32(a1, 52) = 2;
      }
      break;
    case 2:
      v5 = FIELD_U32(a1, 60);
      if ( (v5 & 2) != 0 )
      {
        v6 = FIELD_U32(a1, 68);
        if ( v6 == a1 + 64 )
        {
LABEL_17:
          if ( (v5 & 4) == 0 )
          {
            v9 = 10;
            goto LABEL_25;
          }
          FIELD_U32(a1, 52) = 3;
          FIELD_U32(a1, 60) = v5 & 0xFFFFFFF3 | 8;
          v14 = Player_getActorSlotChecked(PlayerMgr_instance, FIELD_U32(a1, 208));
          if ( v14 )
            FIELD_U32(v14, 1228) |= 0x40000000u;
        }
        else
        {
          v7 = (_DWORD *)(v6 - 4);
          while ( 1 )
          {
            v8 = Player_getActorSlotChecked(PlayerMgr_instance, *v7);
            if ( v8 )
            {
              if ( (FIELD_U32(v8, 1228) & 0x24000000) == 0x4000000 )
                break;
            }
            v6 = FIELD_U32(v6, 4);
            v7 = (_DWORD *)(v6 - 4);
            if ( v6 - 4 == a1 + 60 )
            {
              v5 = FIELD_U32(a1, 60);
              goto LABEL_17;
            }
          }
        }
      }
      break;
    case 3:
      v10 = FIELD_U32(a1, 60);
      if ( (v10 & 8) == 0 )
      {
        if ( (v10 & 4) != 0 )
        {
          FIELD_U32(a1, 52) = 3;
          FIELD_U32(a1, 60) = v10 & 0xFFFFFFF3 | 8;
          v11 = Player_getActorSlotChecked(PlayerMgr_instance, FIELD_U32(a1, 208));
          if ( v11 )
            FIELD_U32(v11, 1228) |= 0x40000000u;
        }
        if ( (FIELD_U8(a1, 60) & 0x20) != 0 )
        {
          v9 = 60;
LABEL_25:
          FIELD_U32(a1, 52) = 4;
          FIELD_U32(a1, 56) = v9;
        }
      }
      break;
    case 4:
      FIELD_U32(a1, 52) = 5;
      FIELD_U32(a1, 212) = 0;
      FIELD_U32(a1, 220) = 0;
      v12 = Player_getActorSlotChecked(PlayerMgr_instance, FIELD_U32(a1, 208));
      if ( v12 )
        FIELD_U32(v12, 1228) |= 0x80000000;
      break;
    case 5:
      sub_60778AAC(a1);
      break;
    case 6:
      sub_60778BFC(a1);
      break;
    case 7:
      sub_60778CEC(a1);
      break;
    case 8:
      sub_60778F88(a1);
      break;
    case 9:
      if ( sub_605E9820((_DWORD *)dword_60CB1BE4) )
      {
        FIELD_U32(a1, 60) &= ~0x100u;
        FIELD_U32(a1, 52) = 10;
        if ( FIELD_U8(a1, 273) && !FIELD_U32(dword_60C99DD4, 764) )
          v13 = &dword_60CBFB14;
        else
          v13 = &dword_60CBFAF4;
        StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v13);
        FIELD_U32(a1, 52) = 0;
        FIELD_U32(a1, 56) = 0;
        v15 = FIELD_U32(a1, 68);
        if ( v15 != a1 + 64 )
        {
          v16 = (_DWORD *)(v15 - 4);
          do
          {
            v17 = Player_getActorSlotChecked(PlayerMgr_instance, *v16);
            if ( v17 )
              FIELD_U32(v17, 1232) |= 0x40u;
            v15 = FIELD_U32(v15, 4);
            v16 = (_DWORD *)(v15 - 4);
          }
          while ( v15 - 4 != a1 + 60 );
        }
      }
      break;
    default:
      break;
  }
  sub_6077907C(a1);
  return sub_6077931C(a1);
}
