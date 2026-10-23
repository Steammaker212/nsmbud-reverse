/* sub_602B10D4
 * address: 0x602B10D4   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B10D4(int a1)
{
  int v2; // r0
  int v3; // r0
  _DWORD **v4; // r7
  int v5; // r0
  int v6; // r0
  _DWORD **v7; // r6
  int v8; // r0
  float v9; // s0
  float v10; // s0
  _BYTE *v11; // r5
  int v12; // s2
  float v13; // s0
  _BYTE v15[4]; // [sp+4h] [bp-24h] BYREF
  int speed; // [sp+8h] [bp-20h] BYREF
  int target; // [sp+Ch] [bp-1Ch] BYREF

  v2 = ((int (*)(void))sub_602B13EC)();
  if ( !FIELD_U8(a1, 6884) )
  {
LABEL_9:
    if ( v2 == 1 )
    {
      j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
      sub_604218E0(*(_DWORD **)(a1 + 6300));
      v7 = (_DWORD **)(a1 + 6304);
      v6 = FIELD_U32(a1, 6304);
      if ( v6 )
      {
        j_ModelWrapper_updateAnims(v6);
        sub_604218E0(*v7);
        if ( *v7 )
        {
          v8 = *(_DWORD *)(*v7)[7];
          FIELD_U32(v8, 20) = *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 20);
          FIELD_U32(v8, 28) |= 2u;
        }
      }
    }
    StateMgr__execute((StateMgr *)(a1 + 6084));
    v9 = CollisionActor__handleSpeed((CollisionActor *)a1);
    if ( sub_602B13EC(a1, v9) != 1 || SE_EMY_FISHBONE_BREAK_ref_2(a1) != 1 )
    {
      if ( FIELD_U8(a1, 6840) )
      {
        FIELD_U8(a1, 6840) = 0;
        FIELD_U32(a1, 6836) = 0;
      }
      FIELD_U32(a1, 6868) = 0;
      FIELD_F64(a1, 6848) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6844))(a1 + 6844);
      FIELD_U32(a1, 6856) = v12;
      sub_602A33AC((_BYTE *)a1);
      goto LABEL_28;
    }
    FIELD_U8(a1, 6833) = 0;
    ((void (__fastcall *)(_BYTE *, int, int, _DWORD))checkLiquidCollisions)(
      v15,
      a1 + 6820,
      a1 + 108,
      FIELD_U8(a1, 86));
    v10 = FIELD_F32(a1, 6820) + -16.0;
    if ( FIELD_F32(a1, 112) >= v10 )
    {
      FIELD_U8(a1, 6833) = 1;
      FIELD_F32(a1, 112) = v10;
    }
    v11 = (_BYTE *)(a1 + 6840);
    if ( FIELD_U8(dword_60C9CF0C, 1361) )
    {
      if ( !FIELD_U8(a1, 6840) )
      {
        *v11 = 1;
        FIELD_U32(a1, 6836) = 0;
      }
    }
    else if ( !FIELD_U8(a1, 6840) )
    {
LABEL_27:
      ActorScaler_execute((ActorScaler *)(a1 + 6844));
      sub_602A33AC((_BYTE *)a1);
      v13 = fishbone_all_ref(a1);
      jnt_head_ref(a1, v13);
LABEL_28:
      StageActor__cullCheck((StageActor *)a1, 0);
      return 1;
    }
    target = 429496729;
    speed = 11930464;
    if ( moveValueTo((int *)(a1 + 6836), &target, &speed) && *v11 )
    {
      *v11 = 0;
      FIELD_U32(a1, 6836) = 0;
    }
    goto LABEL_27;
  }
  if ( !FIELD_U32(a1, 6868) || v2 != 1 )
  {
    FIELD_U8(a1, 6884) = 0;
    goto LABEL_9;
  }
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  sub_604218E0(*(_DWORD **)(a1 + 6300));
  v4 = (_DWORD **)(a1 + 6304);
  v3 = FIELD_U32(a1, 6304);
  if ( v3 )
  {
    j_ModelWrapper_updateAnims(v3);
    sub_604218E0(*v4);
    if ( *v4 )
    {
      v5 = *(_DWORD *)(*v4)[7];
      FIELD_U32(v5, 20) = *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 20);
      FIELD_U32(v5, 28) |= 2u;
    }
  }
  ActorScaler_execute((ActorScaler *)(a1 + 6844));
  sub_602B0A24(a1);
  return 1;
}
