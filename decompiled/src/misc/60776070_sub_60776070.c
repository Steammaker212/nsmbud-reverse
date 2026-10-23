/* sub_60776070
 * address: 0x60776070   size: 1352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60776070(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r5
  _DWORD *v8; // r0
  int ActorSlotChecked; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r6
  _DWORD *v15; // r0
  int v16; // r5
  int v17; // r6
  _DWORD *v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  unsigned __int8 v24; // r0
  unsigned __int8 v25; // r1
  int v26; // r0
  int result; // r0
  int v28; // r1
  int v29; // r1
  int v30; // r1

  switch ( FIELD_U32(a1, 52) )
  {
    case 0:
      if ( FIELD_U8(a1, 273) )
        FIELD_U32(a1, 280) = 1;
      if ( !sub_605E95C4(dword_60CB1BE4) )
        goto LABEL_11;
      v2 = 1;
      v3 = 30;
      goto LABEL_50;
    case 1:
      if ( !FIELD_U32(a1, 56) )
      {
        v4 = FIELD_U32(a1, 60);
        FIELD_U32(a1, 52) = 2;
        FIELD_U32(a1, 56) = 45;
        FIELD_U32(a1, 60) = v4 | 0x200;
      }
      goto LABEL_64;
    case 2:
      if ( FIELD_U32(a1, 56) )
        goto LABEL_64;
      sub_605E964C((_DWORD *)dword_60CB1BE4);
      v2 = 3;
      v3 = 15;
      goto LABEL_50;
    case 3:
      if ( FIELD_U32(a1, 56) )
        goto LABEL_64;
LABEL_11:
      v5 = 4;
      goto LABEL_63;
    case 4:
      v6 = FIELD_U32(a1, 68);
      v7 = a1 + 60;
      if ( v6 != a1 + 64 )
      {
        v8 = (_DWORD *)(v6 - 4);
        do
        {
          ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, *v8);
          if ( ActorSlotChecked )
            FIELD_U32(ActorSlotChecked, 1232) |= 0x800u;
          v6 = FIELD_U32(v6, 4);
          v8 = (_DWORD *)(v6 - 4);
        }
        while ( v6 - 4 != v7 );
      }
      v10 = sub_607891F8(PlayerMgr_instance, 0);
      if ( v10 )
        FIELD_U32(v10, 1232) |= 0x1000u;
      v11 = sub_607891F8(PlayerMgr_instance, 1);
      if ( v11 )
        FIELD_U32(v11, 1232) |= 0x1000u;
      v12 = sub_607891F8(PlayerMgr_instance, 2);
      if ( v12 )
        FIELD_U32(v12, 1232) |= 0x1000u;
      v13 = sub_607891F8(PlayerMgr_instance, 3);
      if ( v13 )
        FIELD_U32(v13, 1232) |= 0x1000u;
      v14 = FIELD_U32(a1, 68);
      v15 = (_DWORD *)(v14 - 4);
      if ( v14 - 4 == v7 )
        goto LABEL_62;
      break;
    case 5:
      if ( FIELD_U32(a1, 56) )
        goto LABEL_64;
      v16 = FIELD_U32(a1, 68);
      if ( v16 != a1 + 64 )
      {
        v17 = a1 + 60;
        v18 = (_DWORD *)(v16 - 4);
        do
        {
          v19 = Player_getActorSlotChecked(PlayerMgr_instance, *v18);
          if ( v19 )
            FIELD_U32(v19, 1232) |= 0x2000u;
          v16 = FIELD_U32(v16, 4);
          v18 = (_DWORD *)(v16 - 4);
        }
        while ( v16 - 4 != v17 );
      }
      v20 = sub_607891F8(PlayerMgr_instance, 0);
      if ( v20 )
        FIELD_U32(v20, 1232) |= 0x2000u;
      v21 = sub_607891F8(PlayerMgr_instance, 1);
      if ( v21 )
        FIELD_U32(v21, 1232) |= 0x2000u;
      v22 = sub_607891F8(PlayerMgr_instance, 2);
      if ( v22 )
        FIELD_U32(v22, 1232) |= 0x2000u;
      v23 = sub_607891F8(PlayerMgr_instance, 3);
      if ( v23 )
        FIELD_U32(v23, 1232) |= 0x2000u;
      v5 = 6;
      goto LABEL_63;
    case 6:
      if ( !sub_605E9820((_DWORD *)dword_60CB1BE4) || sub_60779B0C() != 1 )
        goto LABEL_64;
      sub_605E9850((_DWORD *)dword_60CB1BE4);
      v5 = 7;
      goto LABEL_63;
    case 7:
      if ( !sub_605E98D4((_DWORD *)dword_60CB1BE4) || sub_60779C2C() != 1 )
        goto LABEL_64;
      v2 = 8;
      v3 = 28;
LABEL_50:
      FIELD_U32(a1, 52) = v2;
      FIELD_U32(a1, 56) = v3;
      goto LABEL_64;
    case 8:
      if ( FIELD_U32(a1, 56) || FIELD_U32(a1, 280) )
        goto LABEL_64;
      if ( (FIELD_U8(dword_60CC6D78, 44) & 1) == 0 )
        goto LABEL_85;
      v24 = FIELD_U8(LevelInfo_instance, 16);
      v25 = FIELD_U8(LevelInfo_instance, 17);
      if ( FIELD_U8(a1, 216) )
      {
        if ( sub_6019AE80(v24, v25) )
          goto LABEL_85;
      }
      else if ( sub_6019AE00(v24, v25) )
      {
        goto LABEL_85;
      }
      sub_603F472C(AreaTask_intance);
LABEL_85:
      v5 = 9;
      goto LABEL_63;
    case 9:
      FIELD_U32(dword_60CC62E4, 108) = 262146;
      if ( FIELD_U8(a1, 216) )
        sub_603F496C(AreaTask_intance);
      else
        sub_603F48B0(AreaTask_intance);
      StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CBFA94);
      FIELD_U32(a1, 52) = 0;
      FIELD_U32(a1, 56) = 0;
      goto LABEL_64;
    default:
      goto LABEL_64;
  }
  while ( !sub_607891A0(PlayerMgr_instance, *v15) )
  {
    v14 = FIELD_U32(v14, 4);
    v15 = (_DWORD *)(v14 - 4);
    if ( v14 - 4 == v7 )
      goto LABEL_62;
  }
  FIELD_U32(a1, 56) = 14;
LABEL_62:
  v5 = 5;
LABEL_63:
  FIELD_U32(a1, 52) = v5;
LABEL_64:
  sub_6077931C(a1);
  v26 = FIELD_U32(a1, 288);
  if ( v26 )
  {
    result = v26 - 1;
    FIELD_U32(a1, 288) = result;
  }
  else
  {
    result = 0;
  }
  v28 = FIELD_U32(a1, 284);
  if ( v28 )
    FIELD_U32(a1, 284) = v28 - 1;
  v29 = FIELD_U32(a1, 280);
  switch ( v29 )
  {
    case 3:
      if ( result <= 29 )
      {
        FIELD_U32(a1, 284) = 0;
        if ( !result )
          FIELD_U32(a1, 280) = 0;
      }
      break;
    case 2:
      if ( !result )
      {
        --FIELD_U32(a1, 292);
        SE_OBJ_GOAL_FIREWORKS_ref(a1);
        FIELD_U32(a1, 288) = 28;
        result = FIELD_U32(a1, 292);
        if ( !result )
        {
          FIELD_U32(a1, 280) = 3;
          result = 60;
          FIELD_U32(a1, 288) = 60;
        }
      }
      break;
    case 1:
      result = FIELD_U32(a1, 220);
      if ( result >= 360 )
      {
        v30 = FIELD_U32(a1, 276);
        FIELD_U32(a1, 288) = 10;
        FIELD_U32(a1, 292) = v30;
        FIELD_U32(a1, 280) = 2;
        return sub_603FFDF4(dword_60C99DD4 + 852, v30);
      }
      break;
  }
  return result;
}
