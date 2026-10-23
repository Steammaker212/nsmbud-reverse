/* sub_600A9198
 * address: 0x600A9198   size: 1128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A9198(int a1, int a2, int a3)
{
  char v3; // r12
  StageActor *v6; // r5
  int v7; // r6
  int v8; // r7
  char v9; // r12
  int v10; // r9
  StateBase *CurrentState; // r0
  int v12; // r11
  StateBase *v13; // r0
  int v14; // r10
  StateBase *v15; // r0
  int v16; // r6
  unsigned int v17; // r6
  unsigned int v18; // r0
  void (__fastcall *v19)(int, int); // r6
  int v20; // r0
  int v21; // r7

  v6 = *(StageActor **)(a3 + 64);
  if ( ((unsigned int)dword_60C7B430 & ~(1611305404 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  v7 = 0;
  if ( v6 )
  {
    v8 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v6, 0x0).vtable)(v6, &Enemy_RTTI);
    if ( v8 )
      v8 = (int)v6;
    if ( !FIELD_U32(v6, 0x0).isDeleted && Actor__getProfileId(&FIELD_U32(v6, 0x0)) != 368 )
    {
      sub_600009FC((StageActor *)a1);
      if ( !FIELD_U8(a1, 6220) && Actor__getProfileId(&FIELD_U32(v6, 0x0)) == 392 )
      {
        if ( ((unsigned int)&dword_60C7B39C & ~(1611305620 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
        {
          dword_60C7B398 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C7B39C);
        }
        v10 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v6, 0x0).vtable)(v6, &dword_60C7B398);
        if ( v10 )
          v10 = (int)v6;
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v10 + 6084));
        v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v12 != (*(int (**)(void))(stru_60C92684 + 8))() )
        {
          v13 = StateMgr__getCurrentState((StateMgr *)(v10 + 6084));
          v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
          if ( v14 != (*(int (**)(void))(stru_60C92664 + 8))() )
          {
            sub_602EE7B8(v10, FIELD_U32(v10, 80), -1);
            return v7;
          }
        }
        sub_602EE940(v10);
        sub_602EE7B8(v10, FIELD_U32(v10, 80), FIELD_S8(v10, 84));
        FIELD_U8(a3, 110) |= 2u;
      }
      if ( v8 && (FIELD_U8(a3, 153) & 2) == 0 )
      {
        if ( ((unsigned int)&dword_60C803F8 & ~(1611305900 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F8) )
        {
          CarryableEnemy_RTTI = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C803F8);
        }
        if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &CarryableEnemy_RTTI) == 1 )
        {
          v15 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
          v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
          if ( v16 != (*((int (**)(void))stru_60C8EA70._.vtable + 2))()
            || !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1)
            && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1) )
          {
            v17 = FIELD_S8(v8, 84);
            if ( v17 <= 3 )
            {
              sub_60000A18(v6);
              v18 = sub_602856EC(a1 + 6292, FIELD_U32(v6, 0x234));
              sub_60022540(dword_60C7F52C, (int)&FIELD_U32(v6, 0x6C), v18, v17, 1);
            }
            SE_EMY_DOWN_ref_2A58B4(v8, v8);
            FIELD_U8(a3, 110) |= 2u;
          }
        }
      }
      v19 = *(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 732);
      v20 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 760))(a1);
      v19(a1, v20);
      FIELD_U32(a1, 6308) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 788))(a1);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 768))(a1);
      v21 = FIELD_U32(a1, 6300);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 916))(a1);
      if ( v21 <= 0 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 912))(a1);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 952))(a1);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 980))(a1);
        FIELD_U32(a1, 6300) = 0;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 800))(a1);
        (*(void (__fastcall **)(int, StageActor *))(*(_DWORD *)a1 + 860))(a1, v6);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 880))(a1);
      }
      else
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 932))(a1);
        (*(void (__fastcall **)(int, StageActor *))(*(_DWORD *)a1 + 856))(a1, v6);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 876))(a1);
      }
      return 1;
    }
  }
  return v7;
}
