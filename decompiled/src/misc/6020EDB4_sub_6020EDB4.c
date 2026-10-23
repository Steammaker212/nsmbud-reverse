/* sub_6020EDB4
 * address: 0x6020EDB4   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020EDB4(int a1)
{
  int v2; // r5
  StateBase *v3; // r1
  StateMgr *v4; // r0
  StateBase *v5; // r1
  int v6; // r5
  unsigned int v7; // r0
  int v8; // r6
  unsigned int v9; // r7
  int v10; // r0
  int v11; // r6
  int v12; // r0
  float v13; // s2
  _DWORD v15[2]; // [sp+4h] [bp-24h] BYREF
  int v16; // [sp+Ch] [bp-1Ch]

  if ( FIELD_U8(dword_60C8996C, 1384) )
  {
    v2 = 0;
    switch ( sub_6019112C(dword_60C8996C) )
    {
      case 16:
        v3 = (StateBase *)&unk_60C8CE80;
        goto LABEL_6;
      case 17:
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 128))(a1, 3);
        v3 = (StateBase *)&unk_60C8CEA4;
        v4 = (StateMgr *)(a1 + 284);
        goto LABEL_7;
      case 18:
        v3 = (StateBase *)&unk_60C8CEC8;
LABEL_6:
        v4 = (StateMgr *)(a1 + 284);
LABEL_7:
        StateMgr__changeState(v4, v3);
        return 1;
      case 22:
        v5 = (StateBase *)&unk_60C8CEC8;
        goto LABEL_20;
      case 23:
        v2 = 0;
        FIELD_U8(a1, 468) = FIELD_U32(a1, 420) == 16;
        v5 = (StateBase *)&unk_60C8CDF0;
        goto LABEL_20;
      case 24:
        v6 = 0;
        FIELD_U8(a1, 216) &= ~2u;
        v7 = FIELD_U32(a1, 352);
        if ( v7 <= 2 )
          v6 = *((_DWORD *)*(&off_60BD8EE8 + v7) + 2 * FIELD_U8(dword_60CC6D78, 2082));
        v15[0] = 4;
        v15[1] = 1;
        v16 = -1;
        v8 = sub_601A443C(dword_60C89E18, 4, 1);
        if ( FIELD_S32(v8, 32) < 1 )
          goto LABEL_28;
        v9 = 0;
        break;
      case 25:
        v5 = (StateBase *)&dword_60C8CE38;
        goto LABEL_20;
      case 27:
        v5 = (StateBase *)&unk_60C8CEEC;
        goto LABEL_20;
      case 28:
        v5 = (StateBase *)&unk_60C8CF10;
LABEL_20:
        StateMgr__changeState((StateMgr *)(a1 + 284), v5);
        return v2;
      case 29:
        v2 = 0;
        FIELD_U8(a1, 468) = 0;
        StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C8CE14);
        FIELD_U8(a1, 469) = 1;
        return v2;
      case 30:
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        v10 = sub_60008598(ActorMgr__instance, 903, FIELD_U32(ActorMgr__instance, 27172));
        v11 = FIELD_U32(ActorMgr__instance, 27180);
        if ( v10 == v11 )
          return v2;
        do
        {
          if ( *(_DWORD *)v10 )
            *(_BYTE *)(*(_DWORD *)v10 + 300) = 0;
          v10 = sub_60008598(ActorMgr__instance, 903, v10 + 4);
        }
        while ( v10 != v11 );
        return 0;
      default:
        return v2;
    }
    while ( !sub_60183038(v8, v9, v6) )
    {
      if ( (signed int)++v9 >= FIELD_U32(v8, 32) )
        goto LABEL_28;
    }
    v16 = v9;
LABEL_28:
    v12 = sub_601DFFE4((int)v15);
    FIELD_U32(a1, 80) = FIELD_U32(v12, 72);
    v13 = FIELD_F32(v12, 76);
    FIELD_F32(a1, 84) = v13;
    FIELD_U32(a1, 88) = FIELD_U32(v12, 80);
    FIELD_F32(a1, 84) = v13 + 30.0;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  return 0;
}
