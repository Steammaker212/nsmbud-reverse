/* sub_60399750
 * address: 0x60399750   size: 1340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60399750(int a1)
{
  int v2; // r7
  StateBase *CurrentState; // r0
  int v4; // r5
  __int16 *v5; // r5
  int v6; // r0
  __int16 v7; // r0
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r0
  StateBase *v12; // r0
  int v13; // r6
  StateBase *v14; // r0
  int v15; // r6
  StateBase *v16; // r0
  int v17; // r6
  StateBase *v18; // r0
  int v19; // r6
  StateBase *v20; // r0
  int v21; // r6
  StateBase *v22; // r0
  int v23; // r5
  int v24; // r1
  int *v25; // r4
  int v26; // t1
  int v28; // r0
  _WORD *v29; // r6
  __int16 v30; // r0
  int v31; // r0
  int v32; // r1
  int v33; // r0
  _WORD *v34; // r0
  int v35; // r1
  __int16 v36; // r1
  int v37; // r1

  v2 = 0;
  if ( FIELD_U32(dword_60C96478, 100) == 2 )
  {
    if ( FIELD_U8(a1, 6398) )
    {
      sub_6039A338(a1);
      StateMgr__changeState((StateMgr *)(a1 + 6496), (StateBase *)&dword_60C96570);
    }
    else
    {
      v2 = 0;
      if ( FIELD_S16(a1, 6350) >= 1 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v4 != (*(int (**)(void))(dword_60C97300 + 8))() )
        {
          v5 = (__int16 *)(a1 + 6334);
          if ( sub_6039A3F8(a1) == 1 )
          {
            v6 = *v5;
            if ( v6 >= 1 )
            {
              v7 = v6 - 1;
              v2 = 1;
              *v5 = v7;
              if ( !v7 )
              {
                ((void (__fastcall *)(int))loc_6039D3BC)(a1);
                v2 = 0;
                FIELD_U32(a1, 6436) = 0;
                FIELD_U32(a1, 6432) = 0;
                FIELD_U8(a1, 6440) = 0;
                (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C97300);
                --FIELD_U16(a1, 6350);
              }
            }
          }
          else
          {
            *v5 = 90;
          }
        }
      }
      if ( sub_6039A580(a1) == 1 )
      {
        v8 = FIELD_U32(PlayerMgr_instance, 32);
        if ( v8 && FIELD_F32(v8, 108) < FIELD_F32(a1, 108)
          || (v9 = FIELD_U32(PlayerMgr_instance, 36)) != 0 && FIELD_F32(v9, 108) < FIELD_F32(a1, 108)
          || (v10 = FIELD_U32(PlayerMgr_instance, 40)) != 0 && FIELD_F32(v10, 108) < FIELD_F32(a1, 108)
          || (v11 = FIELD_U32(PlayerMgr_instance, 44)) != 0 && FIELD_F32(v11, 108) < FIELD_F32(a1, 108) )
        {
          FIELD_U32(a1, 6512) = 1;
        }
        else
        {
          FIELD_U32(a1, 6512) = 0;
          FIELD_U8(a1, 6520) = 1;
        }
        FIELD_U16(a1, 6342) = 60 * (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 30) + 240;
      }
    }
  }
  v12 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
  if ( v13 == (*(int (**)(void))(dword_60C972A0 + 8))()
    || (v14 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14),
        v15 == (*(int (**)(void))(dword_60C972C0 + 8))())
    || (v16 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16),
        v17 == (*(int (**)(void))(dword_60C972E0 + 8))()) )
  {
    FIELD_U16(a1, 6348) = 0;
    FIELD_U16(a1, 6336) = 0;
  }
  else
  {
    v29 = (_WORD *)(a1 + 6336);
    v28 = FIELD_S16(a1, 6336);
    if ( v28 >= 1 )
    {
      v30 = v28 - 1;
      *v29 = v30;
      if ( !v30 )
      {
        v31 = sub_6078A50C(PlayerMgr_instance);
        v32 = 3;
        if ( v31 > 1 )
          v32 = 6;
        v33 = FIELD_S16(a1, 6348) + 1;
        if ( v33 > v32 )
          LOWORD(v33) = v32;
        FIELD_U16(a1, 6348) = v33;
        if ( (__int16)v33 < v32 )
          *v29 = 120;
      }
    }
  }
  v18 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
  if ( v19 == (*(int (**)(void))(dword_60C972A0 + 8))()
    || (v20 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v21 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v20, 0x0) + 2))(v20),
        v21 == (*(int (**)(void))(dword_60C972C0 + 8))())
    || (v22 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v22, 0x0) + 2))(v22),
        v23 == (*(int (**)(void))(dword_60C972E0 + 8))()) )
  {
    FIELD_U32(a1, 6352) = 0;
    FIELD_U16(a1, 6356) = 0;
  }
  else
  {
    v34 = (_WORD *)(a1 + 6356);
    v35 = FIELD_S16(a1, 6356);
    if ( v35 >= 1 )
    {
      v36 = v35 - 1;
      *v34 = v36;
      if ( !v36 )
      {
        v37 = FIELD_S16(a1, 6352) + 1;
        if ( v37 >= 6 )
          v37 = 6;
        FIELD_U16(a1, 6352) = v37;
        if ( v37 << 16 < 393216 )
          *v34 = 120;
      }
    }
  }
  if ( FIELD_U16(a1, 6338) )
    --FIELD_U16(a1, 6338);
  if ( FIELD_U16(a1, 6340) )
    --FIELD_U16(a1, 6340);
  if ( FIELD_U16(a1, 6342) )
    --FIELD_U16(a1, 6342);
  if ( FIELD_U16(a1, 6344) )
    --FIELD_U16(a1, 6344);
  if ( FIELD_U16(a1, 6346) )
    --FIELD_U16(a1, 6346);
  v24 = FIELD_U16(a1, 6354);
  if ( FIELD_U16(a1, 6354) )
    FIELD_U16(a1, 6354) = --v24;
  ((void (__fastcall *)(int, int))loc_6039A7B4)(a1, v24);
  sub_60378D2C(a1 + 6444);
  if ( v2 )
    v2 = 0x40000;
  FIELD_U32(a1, 6148) |= 2u;
  v26 = FIELD_U32(a1, 6320);
  v25 = (int *)(a1 + 6320);
  v25[1] = v26;
  *v25 = v2;
  v25[18] = 0;
  return 0;
}
