/* jcm_wait_ref_117D40
 * address: 0x60117D40   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcm_wait_ref_117D40(_BYTE *a1)
{
  _BYTE *v2; // r6
  int v3; // r1
  int v4; // r0
  unsigned int v5; // r5
  int v6; // r0
  int v7; // r1
  int *v8; // r0
  int v9; // r0
  int v10; // r0
  int *v11; // r0
  int v12; // r0
  int v13; // r0
  unsigned int v14; // r1
  _DWORD *v15; // r0
  int v16; // r0
  int v17; // r0
  StateBase *CurrentState; // r0
  int v19; // r5
  int v20; // r0
  int (**v22)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v23; // [sp+8h] [bp-28h]

  sub_6040EB10(a1 + 9420);
  v2 = a1 + 6304;
  v3 = *((_DWORD *)a1 + 1575);
  v4 = **(_DWORD **)(*((_DWORD *)a1 + 1576) + 12);
  v22 = &sead__SafeStringBase__vtable;
  v23 = "jcm_wait";
  SkeletalAnim_play(v4, v3, (int)&v22);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*((_DWORD *)a1 + 1576) + 12) + 4), 1);
  v5 = 0;
  v6 = **(_DWORD **)(*((_DWORD *)a1 + 1576) + 12);
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(*((_DWORD *)a1 + 1576) + 12) + 24) = 1065353216;
  v7 = *((_DWORD *)a1 + 1575);
  v8 = *(int **)(*((_DWORD *)a1 + 1576) + 12);
  if ( *(_DWORD *)(*((_DWORD *)a1 + 1576) + 8) > 1u )
    ++v8;
  v9 = *v8;
  v22 = &sead__SafeStringBase__vtable;
  v23 = "jcm_wait";
  SkeletalAnim_play(v9, v7, (int)&v22);
  v10 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > 1u )
    v10 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 1);
  v11 = *(int **)(*(_DWORD *)v2 + 12);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > 1u )
    ++v11;
  v12 = *v11;
  FIELD_U32(v12, 20) = 0;
  FIELD_U32(v12, 28) |= 2u;
  v13 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > 1u )
    v13 += 4;
  *(_DWORD *)(*(_DWORD *)v13 + 24) = 1065353216;
  a1[9331] = 0;
  do
  {
    v16 = *(_DWORD *)v2;
    if ( v5 <= 9 && ((1 << v5) & 0x3EC) != 0 )
    {
      v15 = *(_DWORD **)(v16 + 12);
    }
    else
    {
      v14 = FIELD_U32(v16, 8);
      v15 = *(_DWORD **)(v16 + 12);
      if ( v14 > 1 )
        ++v15;
    }
    sub_60448AF4(*v15, v5++);
  }
  while ( v5 != 10 );
  (*(void (__fastcall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 780))(a1, 0);
  if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 628))(a1) )
  {
    v17 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 628))(a1);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v17 + 6084));
    v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v19 != (*(int (**)(void))(dword_60C86C24 + 8))() )
    {
      v20 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 628))(a1);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v20 + 192))(v20, &dword_60C84148);
    }
  }
  a1[9318] = 1;
  a1[9242] = 0;
  return 9242;
}
