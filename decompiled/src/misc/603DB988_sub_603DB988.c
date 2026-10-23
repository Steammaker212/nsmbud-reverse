/* sub_603DB988
 * address: 0x603DB988   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603DB988(int a1)
{
  float *v2; // r6
  float v3; // s0
  float v4; // s0
  ActiveColliderMgr *v5; // r5
  char v6; // r12
  float v7; // s0
  float v8; // s0
  int v9; // r0
  float v10; // s2
  float v11; // r0
  int (__fastcall ***v13)(_DWORD, int *); // r5
  char v14; // r12
  int v15; // r0
  _DWORD v16[8]; // [sp+0h] [bp-20h] BYREF

  v2 = (float *)(a1 + 6808);
  v3 = FIELD_F32(a1, 6808);
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
  {
    v4 = v3 + -4.0;
    *v2 = v4;
    if ( v4 <= 32.0 )
    {
      v5 = (ActiveColliderMgr *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6820));
      if ( v5 )
      {
        if ( ((unsigned int)&dword_60C9911C & ~(1614658068 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C9911C) )
        {
          dword_60C99118 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C9911C);
        }
        if ( (*(int (__fastcall **)(ActiveColliderMgr *, int *))FIELD_U32(v5, 0x0).vtable)(v5, &dword_60C99118) == 1 )
          sub_603D923C(v5);
      }
    }
  }
  else
  {
    *v2 = v3 + -2.0;
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  v7 = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  FIELD_F32(a1, 116) = v7;
  v8 = CollisionMgr_process((_BYTE *)(a1 + 648), v7);
  sub_603DC968(a1, v8);
  v9 = FIELD_U32(a1, 6816);
  v10 = (float)v9 * 16.0;
  if ( *v2 > v10 )
  {
    v11 = *v2;
LABEL_14:
    FIELD_F32(a1, 6772) = v11;
    return sub_60165340(a1 + 6112, (_DWORD *)(a1 + 6768), (_DWORD *)(a1 + 6776));
  }
  *v2 = v10;
  if ( v9 >= 1 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9925C);
    v11 = *v2;
    goto LABEL_14;
  }
  if ( !FIELD_U8(a1, 6812) )
  {
    v13 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                 ActorMgr__instance + 27168,
                                                 FIELD_U32(a1, 6820));
    if ( v13 )
    {
      if ( ((unsigned int)&dword_60C9911C & ~(1614658452 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C9911C) )
      {
        dword_60C99118 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C9911C);
      }
      v15 = (**v13)(v13, &dword_60C99118);
      if ( v15 )
        v15 = (int)v13;
      sub_603D9698(v15);
      FIELD_U8(a1, 6812) = 1;
    }
  }
  v16[2] = FIELD_U32(a1, 6792);
  v16[1] = FIELD_U32(a1, 6788);
  v16[0] = FIELD_U32(a1, 6784);
  ((void (__fastcall *)(int, _DWORD *, _DWORD))ChainFragmentHeap_ref)(dword_60C99CDC, v16, 0);
  return StageActor__delete((StateActor *)a1, 1);
}
