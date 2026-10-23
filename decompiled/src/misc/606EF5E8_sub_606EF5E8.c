/* sub_606EF5E8
 * address: 0x606EF5E8   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EF5E8(int a1)
{
  int v2; // r5
  float *ActorSlotChecked; // r0
  float v4; // s0
  int v5; // r1
  char *v6; // r2
  _DWORD *v7; // r0
  float v8; // s0
  float v9; // s2
  float v10; // s4
  float v12[10]; // [sp+8h] [bp-28h] BYREF

  if ( (unsigned __int16)sub_607160F4(
                           TileMgr_instance,
                           (int)(float)(FIELD_F32(a1, 108) + 8.0),
                           (unsigned __int16)(int)(float)-(float)(FIELD_F32(a1, 112) + -8.0),
                           FIELD_U8(a1, 86),
                           1) != 0x10 )
  {
    StageActor__delete((StateActor *)a1, 1);
  }
  else
  {
    v2 = 0;
    while ( 1 )
    {
      if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v2)) != 0 )
      {
        ActorSlotChecked = (float *)Player_getActorSlotChecked(PlayerMgr_instance, v2);
        if ( ActorSlotChecked )
        {
          v4 = (float)(ActorSlotChecked[28] + ActorSlotChecked[144])
             - (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 576));
          v12[0] = (float)(ActorSlotChecked[27] + ActorSlotChecked[143])
                 - (float)(FIELD_F32(a1, 108) + FIELD_F32(a1, 572));
          v12[1] = v4;
          v5 = FIELD_U32(a1, 688);
          v6 = *(char **)(a1 + 684);
          v7 = (_DWORD *)(a1 + (v5 >> 1));
          if ( (v5 & 1) != 0 )
            v6 = *(char **)&v6[*v7];
          if ( ((int (__fastcall *)(_DWORD *, float *))v6)(v7, v12) != 1 )
            break;
        }
      }
      if ( ++v2 >= 4 )
      {
        if ( FIELD_U8(a1, 660) )
        {
          if ( !FIELD_U8(a1, 680)
            || (v8 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576),
                v9 = (float)FIELD_U32(a1, 664) * 16.0,
                v10 = FIELD_F32(dword_60CC6484, 124),
                v8 < (float)(v10 - v9))
            && v8 > (float)(v9 + (float)(v10 - FIELD_F32(dword_60CC6484, 108))) )
          {
            sub_606EF7A8(a1);
          }
        }
        break;
      }
    }
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
