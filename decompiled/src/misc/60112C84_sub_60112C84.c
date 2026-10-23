/* sub_60112C84
 * address: 0x60112C84   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60112C84(int *a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  _DWORD *v4; // r0
  unsigned int v5; // r3
  int v6; // r1
  int v7; // r1
  int (__fastcall ***v8)(_DWORD, int *); // r5
  char v9; // r12
  int v10; // r0
  StateBase *CurrentState; // r0
  int v12; // r5
  StateBase *v13; // r0
  int v14; // r5
  int v15; // r1
  _DWORD *v16; // r0
  int *v17; // r5
  int *v18; // r1
  unsigned int v19; // r0
  int v20; // r0
  int v21; // r1
  unsigned int v22; // r0
  int v23; // r1
  unsigned int v24; // r0
  int result; // r0
  int (**v26)(); // [sp+0h] [bp-20h] BYREF
  const char *v27; // [sp+4h] [bp-1Ch]

  v3 = a1 + 1912;
  v2 = a1[1912];
  if ( v2 == 2 )
  {
    if ( !*((_WORD *)a1 + 3139) )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1[1811] + 6084));
      v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v12 == (*(int (**)(void))(dword_60C86C48 + 8))() )
      {
        (*(void (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C869E4);
      }
      else
      {
        v13 = StateMgr__getCurrentState((StateMgr *)(a1[1811] + 6084));
        v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
        if ( v14 == (*(int (**)(void))(dword_60C86D94 + 8))() )
        {
          v15 = a1[1774];
          v17 = a1 + 1775;
          v16 = (_DWORD *)a1[1775];
          v26 = &sead__SafeStringBase__vtable;
          v27 = "jc_wait";
          sub_60421938(v16, v15, (int)&v26);
          v18 = *(int **)(a1[1775] + 12);
          v19 = *(_DWORD *)(a1[1775] + 68);
          if ( *(_DWORD *)(a1[1775] + 8) > v19 )
            v18 += v19;
          v20 = *v18;
          FIELD_U32(v20, 20) = 0;
          FIELD_U32(v20, 28) |= 2u;
          v21 = *(_DWORD *)(*v17 + 12);
          v22 = *(_DWORD *)(*v17 + 68);
          if ( *(_DWORD *)(*v17 + 8) > v22 )
            v21 += 4 * v22;
          *(_DWORD *)(*(_DWORD *)v21 + 24) = 1065353216;
          v23 = *(_DWORD *)(*v17 + 12);
          v24 = *(_DWORD *)(*v17 + 68);
          if ( *(_DWORD *)(*v17 + 8) > v24 )
            v23 += 4 * v24;
          AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v23 + 4), 1);
          (*(void (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C86B04);
        }
        else
        {
          (*(void (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C869C4);
        }
      }
    }
  }
  else if ( v2 == 1 )
  {
    v4 = (_DWORD *)a1[1775];
    v5 = v4[17];
    v6 = v4[3];
    if ( v4[2] > v5 )
      v6 += 4 * v5;
    if ( (*(_BYTE *)(*(_DWORD *)v6 + 28) & 0x20) != 0 )
    {
      *((_WORD *)a1 + 3139) = 15;
      v7 = a1[1774];
      v26 = &sead__SafeStringBase__vtable;
      v27 = "jcm_wait";
      sub_60421938(v4, v7, (int)&v26);
      v8 = (int (__fastcall ***)(_DWORD, int *))a1[1811];
      if ( ((unsigned int)&dword_60C86B30 & ~(1611738412 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
      {
        dword_60C86B2C = (int)&off_60BC2CD4;
        _cxa_guard_release(&dword_60C86B30);
      }
      if ( v8 )
      {
        v10 = (**v8)(v8, &dword_60C86B2C);
        if ( v10 )
          v10 = (int)v8;
      }
      else
      {
        v10 = 0;
      }
      sub_60120120(v10);
      *v3 = 2;
    }
  }
  (*(void (__fastcall **)(int *))(*a1 + 1068))(a1);
  result = a1[1575];
  if ( result <= 0 )
    return sub_600CE584(a1);
  return result;
}
