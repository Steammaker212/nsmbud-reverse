/* sub_603DD59C
 * address: 0x603DD59C   size: 1008   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603DD59C(int a1)
{
  unsigned int *v2; // r7
  int v3; // r5
  char v4; // r12
  StateBase *CurrentState; // r0
  int v7; // r6
  unsigned int v8; // r0
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r1
  StateBase *v12; // r0
  int v13; // r6
  int v14; // r6
  char v15; // r12

  v2 = (unsigned int *)(a1 + 6340);
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6340));
  if ( ((unsigned int)&dword_60C90E54 & ~(1614665184 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C90E54) )
  {
    dword_60C90E50 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C90E54);
  }
  if ( !v3 || !(**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C90E50) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C993DC);
  if ( FIELD_U8(a1, 6661) )
  {
    if ( FIELD_U32(a1, 6360) == 3 )
    {
      if ( FIELD_S32(a1, 6664) <= 0 )
      {
        sub_603DF65C(a1, FIELD_U32(a1, 6364));
        FIELD_U8(a1, 6661) = 0;
      }
      EffectWrapper_update((EffectWrapper *)(a1 + 6472), 344, (Vec3 *)(a1 + 6576), 0, 0);
    }
    else
    {
      FIELD_U32(a1, 6328) = 0;
      FIELD_U32(a1, 6316) += 40;
      FIELD_U32(a1, 6312) += 40;
      sub_603DF65C(a1, 3);
    }
  }
  if ( !FIELD_U32(a1, 6336) && FIELD_F32(v3, 112) >= (float)((float)(FIELD_F32(a1, 112) + 48.0) + 40.0) )
  {
    sub_603DF65C(a1, 1);
    FIELD_U32(a1, 6336) = 1;
  }
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    v8 = FIELD_U32(a1, 6300) + 50331648;
    FIELD_U32(a1, 6300) = v8;
    FIELD_F32(a1, 112) = (float)(FIELD_F32(a1, 6308) + -3.0)
                         + (float)(*(float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0))
                                 + (float)((float)((float)(v8 & 0xFFFFFF)
                                                 * *(float *)((char *)&sinLutTable[1] + ((v8 >> 20) & 0xFF0)))
                                         * 0.000000059605));
    v9 = FIELD_U32(a1, 6304) + 0x2000000;
    FIELD_U32(a1, 6304) = v9;
    FIELD_U32(a1, 160) = (int)(float)((float)((float)(*(float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0))
                                                       + (float)((float)((float)(v9 & 0xFFFFFF)
                                                                       * *(float *)((char *)&sinLutTable[1]
                                                                                  + ((v9 >> 20) & 0xFF0)))
                                                               * 0.000000059605))
                                               * 268440000.0)
                                       + 1073700000.0);
  }
  v10 = sub_602B4874(v3);
  v11 = FIELD_U32(a1, 6312);
  if ( !v10 )
  {
    if ( !v11 )
      goto LABEL_22;
    FIELD_U32(a1, 6312) = --v11;
  }
  if ( v11 <= 0 )
  {
LABEL_22:
    v12 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
    v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
    if ( v13 == (*(int (**)(void))(dword_60C90DB0 + 8))() )
    {
      v14 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v2);
      if ( ((unsigned int)&dword_60C90E54 & ~(1614665972 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C90E54) )
      {
        dword_60C90E50 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C90E54);
      }
      if ( v14 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v14)(v14, &dword_60C90E50) == 1 )
          FIELD_U8(v14, 6300) = 1;
      }
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9939C);
    }
  }
  return sub_603DF4C4(a1, v3);
}
