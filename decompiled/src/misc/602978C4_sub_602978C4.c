/* sub_602978C4
 * address: 0x602978C4   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602978C4(int a1)
{
  _DWORD **v2; // r10
  StateBase *CurrentState; // r0
  int v4; // r6
  int *v5; // r1
  unsigned int v6; // r0
  StateBase *v7; // r0
  int v8; // r5
  int v9; // r6
  unsigned int *v10; // r5
  _DWORD v12[3]; // [sp+0h] [bp-90h] BYREF
  float32x2_t v13[6]; // [sp+Ch] [bp-84h] BYREF
  _BYTE v14[84]; // [sp+3Ch] [bp-54h] BYREF

  ((void (__fastcall *)(int, _BYTE *))loc_60297A6C)(a1, v14);
  v2 = (_DWORD **)(a1 + 6300);
  (*(void (__fastcall **)(_DWORD, _BYTE *))(***(_DWORD ***)(a1 + 6300) + 60))(**(_DWORD **)(a1 + 6300), v14);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v2 + 68))(**v2, a1 + 7472);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    v5 = (int *)(*v2)[3];
    v6 = (*v2)[17];
    if ( (*v2)[2] > v6 )
      v5 += v6;
    Animation_update(*v5);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v2 + 52))(**v2);
  }
  v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 == (*(int (**)(void))(dword_60C8FDC4 + 8))() )
  {
    v9 = 0;
    v10 = (unsigned int *)(a1 + 6676);
    do
    {
      v12[0] = 1065353216;
      v12[1] = 1065353216;
      v12[2] = 1065353216;
      (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(*(_DWORD *)**v2 + 100))(**v2, v9, v13, v12);
      Mtx34_rotateX(v13, v10);
      (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(*(_DWORD *)**v2 + 96))(**v2, v9++, v13, v12);
      ++v10;
    }
    while ( v9 != 9 );
  }
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v2 + 56))(**v2);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 752))(a1);
}
