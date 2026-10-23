/* KoopalingBase__vf654
 * address: 0x600B7674   size: 272   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6009F2B8 : Iggy
int __fastcall KoopalingBase__vf654(int a1)
{
  _DWORD *v2; // r6
  int v3; // r7
  _DWORD *v4; // r8
  int ResArchiveById; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r8
  int v11; // r0

  v2 = (_DWORD *)(a1 + 7120);
  if ( **(_BYTE **)(FIELD_U32(a1, 7120) + 12) )
  {
    v3 = a1 + 7096;
    v4 = *(_DWORD **)(a1 + 7096);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    sub_60421938(v4, ResArchiveById, *v2 + 8);
    v6 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
    v7 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v7 )
      v6 += 4 * v7;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 0);
    v8 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v9 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v9 )
      v8 += 4 * v9;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
    v10 = **(_DWORD **)(*(_DWORD *)v3 + 20);
    v11 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    TexAnim_play(v10, v11, *v2 + 8);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 4), 0);
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1316))(a1);
}
