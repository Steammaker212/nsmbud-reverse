/* sub_6072FFD0
 * address: 0x6072FFD0   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072FFD0(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  float v5; // s0
  int v6; // r5
  int v7; // r0
  float v8; // s0
  int v9; // r5
  int v10; // r0
  float v11; // s0
  int v12; // r5
  int v13; // r0
  float v14; // s0
  int v15; // r5
  int v16; // r0
  Vec2 v17[4]; // [sp+0h] [bp-20h] BYREF

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60CBDB20 + 8))();
  if ( v3 == result )
  {
    result = FIELD_U8(a1, 6328);
    if ( FIELD_U8(a1, 6328) )
    {
      if ( (FIELD_U8(a1, 2872) & 1) != 0 && (FIELD_U8(AreaRumbleMgr_instance, 56) & 2) != 0 )
      {
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBDBA0);
      }
      else
      {
        StageActor__distanceToPlayer((StateActor *)a1, v17);
        v5 = v17[0].y + -16.0;
        v17[0].y = v17[0].y + -16.0;
        v6 = FIELD_U32(PlayerMgr_instance, 32);
        if ( v6 )
        {
          if ( sqrtf((float)(v17[0].x * v17[0].x) + (float)(v5 * v5)) <= 48.0 )
          {
            v7 = FIELD_U32(v6, 1208);
            if ( (v7 & 0x60000000) == 0x60000000 || (v7 & 0x8000000) != 0 )
              return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBDB80);
          }
        }
        StageActor__distanceToPlayer((StateActor *)a1, v17);
        v8 = v17[0].y + -16.0;
        v17[0].y = v17[0].y + -16.0;
        v9 = FIELD_U32(PlayerMgr_instance, 36);
        if ( v9 )
        {
          if ( sqrtf((float)(v17[0].x * v17[0].x) + (float)(v8 * v8)) <= 48.0 )
          {
            v10 = FIELD_U32(v9, 1208);
            if ( (v10 & 0x60000000) == 0x60000000 || (v10 & 0x8000000) != 0 )
              return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBDB80);
          }
        }
        StageActor__distanceToPlayer((StateActor *)a1, v17);
        v11 = v17[0].y + -16.0;
        v17[0].y = v17[0].y + -16.0;
        v12 = FIELD_U32(PlayerMgr_instance, 40);
        if ( v12 )
        {
          if ( sqrtf((float)(v17[0].x * v17[0].x) + (float)(v11 * v11)) <= 48.0 )
          {
            v13 = FIELD_U32(v12, 1208);
            if ( (v13 & 0x60000000) == 0x60000000 || (v13 & 0x8000000) != 0 )
              return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBDB80);
          }
        }
        StageActor__distanceToPlayer((StateActor *)a1, v17);
        v14 = v17[0].y + -16.0;
        result = PlayerMgr_instance;
        v17[0].y = v17[0].y + -16.0;
        v15 = FIELD_U32(PlayerMgr_instance, 44);
        if ( v15 )
        {
          if ( sqrtf((float)(v17[0].x * v17[0].x) + (float)(v14 * v14)) <= 48.0 )
          {
            v16 = FIELD_U32(v15, 1208);
            if ( (v16 & 0x60000000) == 0x60000000 )
              return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBDB80);
            result = v16 & 0x8000000;
            if ( result )
              return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBDB80);
          }
        }
      }
    }
  }
  return result;
}
