/* jcm_damage_s_ref
 * address: 0x6011386C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall jcm_damage_s_ref(_DWORD *a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // t1
  int *v4; // r1
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r1
  int *v8; // r1
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  _DWORD v15[6]; // [sp+0h] [bp-18h] BYREF

  BowserJrBase__vf450(a1);
  v3 = (_DWORD *)a1[1775];
  v2 = a1 + 1775;
  v4 = (int *)v3[3];
  v5 = v3[17];
  if ( v3[2] > v5 )
    v4 += v5;
  v6 = *v4;
  v7 = *(v2 - 1);
  v15[0] = &sead__SafeStringBase__vtable;
  v15[1] = "jcm_damage_s";
  SkeletalAnim_play(v6, v7, (int)v15);
  v8 = *(int **)(*v2 + 12);
  v9 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v9 )
    v8 += v9;
  v10 = *v8;
  FIELD_U32(v10, 20) = 0;
  FIELD_U32(v10, 28) |= 2u;
  v11 = *(_DWORD *)(*v2 + 12);
  v12 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v12 )
    v11 += 4 * v12;
  *(_DWORD *)(*(_DWORD *)v11 + 24) = 1065353216;
  v13 = *(_DWORD *)(*v2 + 12);
  v14 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v14 )
    v13 += 4 * v14;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v13 + 4), 1);
  v2[137] = 1;
  *((_BYTE *)v2 + 564) = 0;
}
