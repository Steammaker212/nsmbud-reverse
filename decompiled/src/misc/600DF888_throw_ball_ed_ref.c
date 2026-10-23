/* throw_ball_ed_ref
 * address: 0x600DF888   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall throw_ball_ed_ref(int a1)
{
  _DWORD *v2; // r7
  _DWORD *v3; // r5
  int v4; // r6
  int ResArchiveById; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int (__fastcall ***v10)(_DWORD, int *); // r4
  char v11; // r12
  _DWORD v12[8]; // [sp+0h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 7112);
  if ( **(_BYTE **)(FIELD_U32(a1, 7112) + 20) )
  {
    v4 = a1 + 7096;
    v3 = *(_DWORD **)(a1 + 7096);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    sub_60421938(v3, ResArchiveById, *v2 + 16);
    v6 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
    v7 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v7 )
      v6 += 4 * v7;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 0);
    v8 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v9 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v9 )
      v8 += 4 * v9;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = FIELD_U32(a1, 7760);
  }
  FIELD_U32(a1, 7092) = 1;
  v10 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8120));
  if ( ((unsigned int)&dword_60C84B4C & ~(1611528576 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B4C) )
  {
    dword_60C84B48 = (int)&off_60BCCA60;
    _cxa_guard_release(&dword_60C84B4C);
  }
  if ( v10 )
  {
    if ( (**v10)(v10, &dword_60C84B48) == 1 )
    {
      v12[0] = &sead__SafeStringBase__vtable;
      v12[1] = "throw_ball_ed";
      sub_600E36A4(v10, v12, 0, 3.0);
    }
  }
}
