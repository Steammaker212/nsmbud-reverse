/* jcm_wait_ref_1165A8
 * address: 0x601165A8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall jcm_wait_ref_1165A8(int a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // t1
  int v4; // r1
  int *v5; // r2
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  _DWORD v12[4]; // [sp+0h] [bp-10h] BYREF

  BowserJrBase__vf444(a1);
  v3 = *(_DWORD **)(a1 + 7100);
  v2 = (_DWORD *)(a1 + 7100);
  v4 = *(v2 - 1);
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "jcm_wait";
  sub_60421938(v3, v4, (int)v12);
  v5 = *(int **)(*v2 + 12);
  v6 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v6 )
    v5 += v6;
  v7 = *v5;
  FIELD_U32(v7, 20) = v2[38];
  FIELD_U32(v7, 28) |= 2u;
  v8 = *(_DWORD *)(*v2 + 12);
  v9 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v9 )
    v8 += 4 * v9;
  *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
  v10 = *(_DWORD *)(*v2 + 12);
  v11 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v11 )
    v10 += 4 * v11;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 1);
}
