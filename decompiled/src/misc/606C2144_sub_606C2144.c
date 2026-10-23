/* sub_606C2144
 * address: 0x606C2144   size: 924   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C2144(int a1)
{
  _BYTE *v2; // r0
  int v3; // t1
  float *v4; // r0
  _DWORD *v5; // r6
  int v6; // r2
  int v7; // r0
  float *v8; // r0
  unsigned int v9; // r2
  int v10; // r7
  int v11; // r2
  float *v12; // r7
  StateBase *CurrentState; // r0
  int v14; // r7
  int v15; // r0
  int v16; // r7
  int v17; // r9
  int v18; // r10
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  unsigned int v23; // r3
  __int64 v24; // r0
  signed int v25; // r0
  char v26; // r1
  int v27; // r2
  __int64 v28; // r0
  StateBase *v29; // r0
  int v30; // r6
  StateBase *v31; // r0
  int v32; // r5
  _DWORD v34[16]; // [sp+10h] [bp-40h] BYREF

  v3 = FIELD_U8(a1, 6247);
  v2 = (_BYTE *)(a1 + 6247);
  if ( v3 )
  {
    *v2 = 0;
  }
  else
  {
    StateMgr__execute((StateMgr *)(a1 + 6084));
    v4 = (float *)(a1 + 6168);
    if ( FIELD_U8(a1, 6216) )
    {
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 6220, *v4, 0.03125, 12.0, 0.03125);
      v5 = (_DWORD *)(a1 + 6224);
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(
        a1 + 6224,
        FIELD_F32(a1, 6172),
        0.03125,
        12.0,
        0.03125);
      v6 = FIELD_U32(a1, 6224);
      v7 = FIELD_U32(a1, 6220);
    }
    else
    {
      v7 = *(_DWORD *)v4;
      FIELD_U32(a1, 6220) = v7;
      v6 = FIELD_U32(a1, 6172);
      v5 = (_DWORD *)(a1 + 6224);
      FIELD_U32(a1, 6224) = v6;
    }
    FIELD_U32(a1, 108) = v7;
    FIELD_U32(a1, 112) = v6;
    v8 = (float *)(a1 + 112);
    if ( FIELD_U8(a1, 6228) )
    {
      v9 = FIELD_U32(a1, 6236) + FIELD_U32(a1, 6232);
      v10 = (v9 >> 20) & 0xFF0;
      FIELD_U32(a1, 6232) = v9;
      v11 = v9 & 0xFFFFFF;
      v12 = (float *)((char *)sinLutTable + v10);
      if ( FIELD_U8(a1, 6244) )
        v8 = (float *)(a1 + 108);
      *v8 = *v8
          + (float)(FIELD_F32(a1, 6240)
                  * (float)(*v12 + (float)((float)((float)(unsigned int)v11 * v12[1]) * 0.000000059605)));
    }
    if ( FIELD_U8(a1, 6245) )
    {
      FIELD_U8(a1, 6246) = 0;
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v14 == (*(int (**)(void))(dword_60CBA9A4 + 8))() )
      {
        StageActor__cullCheck((StageActor *)a1, 2);
        if ( v15 == 1 )
        {
          v16 = FIELD_U32(a1, 108);
          v17 = FIELD_U32(a1, 112);
          v18 = FIELD_U32(a1, 116);
          FIELD_U32(a1, 108) = FIELD_U32(a1, 6100);
          FIELD_U32(a1, 112) = FIELD_U32(a1, 6104);
          FIELD_U32(a1, 116) = FIELD_U32(a1, 6108);
          StageActor__cullCheck((StageActor *)a1, 2);
          if ( v19 == 1 )
          {
            v20 = FIELD_U32(a1, 108);
            v21 = FIELD_U32(a1, 112);
            v22 = FIELD_U32(a1, 116);
            FIELD_U32(a1, 584) = v20;
            FIELD_U32(a1, 588) = v21;
            FIELD_U32(a1, 592) = v22;
            FIELD_U32(a1, 608) = v20;
            FIELD_U32(a1, 612) = v21;
            FIELD_U32(a1, 616) = v22;
            FIELD_U32(a1, 6220) = v20;
            *v5 = v21;
            v23 = FIELD_U32(a1, 24);
            if ( (v23 & 0xF00000) != 0 )
              FIELD_U32(a1, 6232) = dword_60CBA9C8 * (HIBYTE(v23) & 0xF);
            v34[0] = v20;
            v34[1] = v21;
            sub_607D8938(
              a1 + 6112,
              v34,
              (FIELD_U32(a1, 20) >> 20) & 0xF,
              (FIELD_U32(a1, 20) >> 19) & 1,
              HIWORD(FIELD_U32(a1, 20)) & 3,
              HIBYTE(FIELD_U32(a1, 20)),
              BYTE1(FIELD_U32(a1, 20)));
            FIELD_U8(a1, 6246) = 1;
            v24 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
            v25 = sub_6072A66C(EventMgr__instance, SHIDWORD(v24), v24);
            v26 = 32 - v25;
            v27 = v25 - 32;
            LODWORD(v28) = 1 << v25;
            HIDWORD(v28) = 1u >> v26;
            if ( v27 >= 0 )
            {
              HIDWORD(v28) = 1 << v27;
              LODWORD(v28) = 0;
            }
            FIELD_U64(EventMgr__instance, 16) &= ~v28;
            StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBA984);
          }
          else
          {
            FIELD_U32(a1, 108) = v16;
            FIELD_U32(a1, 112) = v17;
            FIELD_U32(a1, 116) = v18;
          }
        }
      }
    }
    v29 = StateMgr__getCurrentState((StateMgr *)(a1 + 6132));
    v30 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v29, 0x0) + 2))(v29);
    if ( v30 == (*(int (**)(void))(dword_60CC56B4 + 8))()
      || (v31 = StateMgr__getCurrentState((StateMgr *)(a1 + 6132)),
          v32 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v31, 0x0) + 2))(v31),
          v32 == (*(int (**)(void))(dword_60CC5734 + 8))()) )
    {
      StageActor__cullCheck((StageActor *)a1, 0);
    }
  }
  return 1;
}
