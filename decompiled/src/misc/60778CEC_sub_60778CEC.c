/* sub_60778CEC
 * address: 0x60778CEC   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60778CEC(int a1)
{
  int ActorSlotChecked; // r0
  bool v3; // zf
  int result; // r0
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  bool v10; // zf
  int v11; // r5
  int v12; // r4
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r0
  int v17; // r5
  int v18; // r4
  int v19; // r0

  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
  v3 = ActorSlotChecked == 0;
  if ( ActorSlotChecked )
    v3 = (FIELD_U8(ActorSlotChecked, 1231) & 4) == 0;
  if ( v3 || (result = FIELD_U8(ActorSlotChecked, 1232), (result & 4) != 0) )
  {
    v5 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
    v6 = v5 == 0;
    if ( v5 )
      v6 = (FIELD_U8(v5, 1231) & 4) == 0;
    if ( v6 || (result = FIELD_U8(v5, 1232), (result & 4) != 0) )
    {
      v7 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
      v8 = v7 == 0;
      if ( v7 )
        v8 = (FIELD_U8(v7, 1231) & 4) == 0;
      if ( v8 || (result = FIELD_U8(v7, 1232), (result & 4) != 0) )
      {
        v9 = Player_getActorSlotChecked(PlayerMgr_instance, 3);
        v10 = v9 == 0;
        if ( v9 )
          v10 = (FIELD_U8(v9, 1231) & 4) == 0;
        if ( v10 || (result = FIELD_U8(v9, 1232), (result & 4) != 0) )
        {
          if ( FIELD_U32(dword_60C99DD4, 764) == 4 && FIELD_U8(dword_60C9A1F0, 6559) == 3 )
          {
            StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CBFA94);
            FIELD_U32(a1, 52) = 0;
            FIELD_U32(a1, 56) = 0;
            result = a1 + 64;
            v11 = FIELD_U32(a1, 68);
            if ( v11 != a1 + 64 )
            {
              v12 = a1 + 60;
              result = v11 - 4;
              do
              {
                v13 = Player_getActorSlotChecked(PlayerMgr_instance, *(_DWORD *)result);
                if ( v13 )
                  FIELD_U32(v13, 1224) |= 0x40000000u;
                v11 = FIELD_U32(v11, 4);
                result = v11 - 4;
              }
              while ( v11 - 4 != v12 );
            }
          }
          else if ( FIELD_U8(dword_60CC6D78, 109032) )
          {
            StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CBFA94);
            FIELD_U32(a1, 52) = 0;
            FIELD_U32(a1, 56) = 0;
            result = FIELD_U8(PlayerMgr_instance, 156);
            if ( !FIELD_U8(PlayerMgr_instance, 156) )
            {
              v14 = FIELD_U32(a1, 496);
              result = dword_60C995D0;
              v15 = FIELD_U32(dword_60C995D0, 32);
              if ( !v15 || v15 != v14 )
              {
                sub_603E552C((sead_ListNode *)dword_60C995D0, v14);
                v16 = FIELD_U32(a1, 496);
                if ( v16 )
                  FIELD_U8(v16, 24) = 0;
                result = dword_60CBFA90;
                FIELD_U8(dword_60CBFA90, 340) = 1;
              }
            }
          }
          else
          {
            FIELD_U32(a1, 52) = 8;
            result = a1 + 64;
            v17 = FIELD_U32(a1, 68);
            if ( v17 != a1 + 64 )
            {
              v18 = a1 + 60;
              result = v17 - 4;
              do
              {
                v19 = Player_getActorSlotChecked(PlayerMgr_instance, *(_DWORD *)result);
                if ( v19 )
                  FIELD_U32(v19, 1232) |= 8u;
                v17 = FIELD_U32(v17, 4);
                result = v17 - 4;
              }
              while ( v17 - 4 != v18 );
            }
          }
        }
      }
    }
  }
  return result;
}
