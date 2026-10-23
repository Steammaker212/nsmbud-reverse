/* sub_600A7F7C
 * address: 0x600A7F7C   size: 1012   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600A7F7C(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r1
  unsigned int v4; // r2
  int *v5; // r0
  int v6; // r0
  int v7; // r0
  char v8; // r12
  Actor **v9; // r10
  Actor **i; // r9
  StateBase *CurrentState; // r0
  StateBase *v12; // r0
  StateBase *v13; // r0
  StateBase *v14; // r0
  StateBase *v15; // r0
  StateBase *v16; // r0
  Actor *v17; // r8
  int v18; // r0
  bool v19; // zf
  StateMgr *p_heap; // [sp+4h] [bp-64h]
  int v21; // [sp+8h] [bp-60h]
  int v22; // [sp+8h] [bp-60h]
  int v23; // [sp+8h] [bp-60h]
  int v24; // [sp+8h] [bp-60h]
  int v25; // [sp+8h] [bp-60h]
  int v26; // [sp+8h] [bp-60h]

  KoopalingBase__vf370();
  (*(void (__fastcall **)(_DWORD *))(*a1 + 696))(a1);
  v3 = a1 + 1774;
  v2 = a1[1774];
  v4 = FIELD_U32(v2, 24);
  v5 = *(int **)(v2 + 28);
  if ( v4 > 1 )
    ++v5;
  v6 = *v5;
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  v7 = *(_DWORD *)(*v3 + 28);
  if ( *(_DWORD *)(*v3 + 24) > 1u )
    v7 += 4;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 0;
  sub_600A83C0(a1);
  a1[2063] = 1065353216;
  v9 = *(Actor ***)(ActorMgr__instance + 27180);
  for ( i = *(Actor ***)(ActorMgr__instance + 27172); v9 != i; ++i )
  {
    v17 = *i;
    if ( ((unsigned int)&dword_60C7B364 & ~(1611301644 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v17 )
    {
      v18 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v17, 0x0))(v17, &StageActor_RTTI);
      v19 = v18 == 1;
      if ( v18 == 1 )
        v19 = FIELD_U8(v17, 0x13) == 0;
      if ( v19 && BYTE1(v17[6].field_34) == 3 && (v17[7].id & 0x30) != 0 && Actor__getProfileId(v17) != 711 )
      {
        if ( ((unsigned int)dword_60C7B430 & ~(1611301184 << v8) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
        {
          Enemy_RTTI = (int)&off_60BC00C8;
          _cxa_guard_release(dword_60C7B430);
        }
        if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v17, 0x0))(v17, &Enemy_RTTI) != 1 )
          goto LABEL_22;
        p_heap = (StateMgr *)&v17[76].heap;
        CurrentState = StateMgr__getCurrentState((StateMgr *)&v17[76].heap);
        v21 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v21 != (*((int (__fastcall **)(StateVirtual *))stru_60C90710._._.vtable + 2))(&stru_60C90710) )
        {
          v12 = StateMgr__getCurrentState(p_heap);
          v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
          if ( v22 != (*(int (__fastcall **)(int *))(dword_60C82E6C + 8))(&dword_60C82E6C) )
          {
            v13 = StateMgr__getCurrentState(p_heap);
            v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
            if ( v23 != (*((int (__fastcall **)(StateVirtual *))stru_60C9077C._._.vtable + 2))(&stru_60C9077C) )
            {
              v14 = StateMgr__getCurrentState(p_heap);
              v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
              if ( v24 != (*((int (__fastcall **)(StateVirtual *))stru_60C907A0._._.vtable + 2))(&stru_60C907A0) )
              {
                v15 = StateMgr__getCurrentState(p_heap);
                v25 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
                if ( v25 != (*((int (__fastcall **)(StateVirtual *))stru_60C90758._._.vtable + 2))(&stru_60C90758) )
                {
                  v16 = StateMgr__getCurrentState(p_heap);
                  v26 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
                  if ( v26 != (*(int (__fastcall **)(_DWORD *))(dword_60C90734 + 8))(&dword_60C90734)
                    && !sub_602A588C((int)v17)
                    && !LOBYTE(v17[76].parent) )
                  {
LABEL_22:
                    (*(void (__fastcall **)(Actor *))(FIELD_U32(v17, 0x0) + 104))(v17);
                    FIELD_U8(v17, 0x13) = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
