/* sub_600D73E4
 * address: 0x600D73E4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600D73E4(int a1)
{
  _DWORD *v2; // r7
  _DWORD *v3; // r0
  int v4; // r6
  int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r5
  int ResArchiveById; // r0
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  float result; // s0

  v2 = (_DWORD *)(a1 + 7108);
  if ( **(_BYTE **)(FIELD_U32(a1, 7108) + 12) )
  {
    v4 = a1 + 7096;
    v3 = *(_DWORD **)(a1 + 7096);
    v5 = (int *)v3[3];
    v6 = v3[2];
    v7 = v3[17];
    if ( v6 > v7 )
      v5 += v7;
    v8 = *v5;
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    SkeletalAnim_play(v8, ResArchiveById, *v2 + 8);
    v10 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v11 )
      v10 += 4 * v11;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 0);
    v12 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v13 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v13 )
      v12 += 4 * v13;
    *(_DWORD *)(*(_DWORD *)v12 + 24) = 1065353216;
  }
  result = FIELD_F32(a1, 120) * 0.2;
  FIELD_F32(a1, 120) = result;
  return result;
}
