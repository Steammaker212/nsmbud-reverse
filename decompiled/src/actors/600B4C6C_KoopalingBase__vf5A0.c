/* KoopalingBase__vf5A0
 * address: 0x600B4C6C   size: 196   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf5A0(int a1)
{
  int *v2; // r6
  int result; // r0
  _DWORD *v4; // r4
  _DWORD *v5; // t1
  int *v6; // r1
  unsigned int v7; // r0
  int v8; // r5
  int ResArchiveById; // r0
  int v10; // r1
  unsigned int v11; // r0
  int *v12; // r1
  unsigned int v13; // r0

  v2 = (int *)(a1 + 7112);
  result = **(unsigned __int8 **)(FIELD_U32(a1, 7112) + 4);
  if ( result )
  {
    v5 = *(_DWORD **)(a1 + 7096);
    v4 = (_DWORD *)(a1 + 7096);
    v6 = (int *)v5[3];
    v7 = v5[17];
    if ( v5[2] > v7 )
      v6 += v7;
    v8 = *v6;
    ResArchiveById = Profile__getResArchiveById((Profile *)*(v4 - 1771), 0);
    SkeletalAnim_play(v8, ResArchiveById, *v2);
    v10 = *(_DWORD *)(*v4 + 12);
    v11 = *(_DWORD *)(*v4 + 68);
    if ( *(_DWORD *)(*v4 + 8) > v11 )
      v10 += 4 * v11;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 0);
    v12 = *(int **)(*v4 + 12);
    v13 = *(_DWORD *)(*v4 + 68);
    if ( *(_DWORD *)(*v4 + 8) > v13 )
      v12 += v13;
    result = *v12;
    *(_DWORD *)(*v12 + 24) = v4[166];
  }
  return result;
}
