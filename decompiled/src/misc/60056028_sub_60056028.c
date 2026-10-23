/* sub_60056028
 * address: 0x60056028   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60056028(int **a1)
{
  int **v2; // r6
  _DWORD *v3; // r1
  unsigned int v4; // r0
  int v5; // r1
  unsigned int v6; // r0
  float v7; // s0
  int v8; // r0
  int (__fastcall *v9)(int, Vec3 *); // r2
  int v10; // r0
  _DWORD *v11; // r1
  unsigned int v12; // r0
  _DWORD *v13; // r1
  unsigned int v14; // r0
  _DWORD *v15; // r1
  unsigned int v16; // r0
  int v17; // r1
  unsigned int v18; // r0
  int result; // r0
  Vec3 v20; // [sp+4h] [bp-4Ch] BYREF
  float v21; // [sp+10h] [bp-40h]
  float v22; // [sp+20h] [bp-30h]
  float v23; // [sp+30h] [bp-20h]
  Vec3 v24; // [sp+34h] [bp-1Ch] BYREF

  v2 = a1 + 1801;
  j_ModelWrapper_updateAnims(a1[1801]);
  v3 = (_DWORD *)(*v2)[3];
  v4 = (*v2)[17];
  if ( (*v2)[2] > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
    ((void (__fastcall *)(int **))(*a1)[293])(a1);
  v5 = (*v2)[3];
  v6 = (*v2)[17];
  if ( (*v2)[2] > v6 )
    v5 += 4 * v6;
  v7 = *(float *)(*(_DWORD *)v5 + 20);
  if ( v7 >= 40.0 && v7 <= 80.0 || v7 >= 86.0 && v7 <= 126.0 )
    ((void (__fastcall *)(int **))(*a1)[288])(a1);
  if ( sub_60235E50((int)(a1 + 2159)) == 1 )
  {
    v8 = **v2;
    v9 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v8 + 84);
    LODWORD(v20.x) = &sead__SafeStringBase__vtable;
    LODWORD(v20.y) = "spine";
    v10 = v9(v8, &v20);
    (*(void (__fastcall **)(int, int, Vec3 *))(*(_DWORD *)**v2 + 108))(**v2, v10, &v20);
    v24.x = v21;
    v24.y = v22;
    v24.z = v23;
    EffectData_update((EffectData *)(a1 + 2159), &v24, 0, 0);
  }
  v11 = (_DWORD *)(*v2)[3];
  v12 = (*v2)[17];
  if ( (*v2)[2] > v12 )
    v11 += v12;
  if ( sub_60418548(*v11 + 4) )
    goto LABEL_20;
  v13 = (_DWORD *)(*v2)[3];
  v14 = (*v2)[17];
  if ( (*v2)[2] > v14 )
    v13 += v14;
  if ( sub_60418548(*v13 + 4) )
  {
LABEL_20:
    ((void (__fastcall *)(int **, float))(*a1)[280])(a1, 0.0);
    ((void (__fastcall *)(int **))(*a1)[331])(a1);
  }
  v15 = (_DWORD *)(*v2)[3];
  v16 = (*v2)[17];
  if ( (*v2)[2] > v16 )
    v15 += v16;
  if ( sub_60418548(*v15 + 4) )
  {
    face_1_ref((int)a1, &v20);
    sub_602375C4((EffectData *)(a1 + 1865), 1205, &v20, 0, 0);
  }
  v17 = (*v2)[3];
  v18 = (*v2)[17];
  if ( (*v2)[2] > v18 )
    v17 += 4 * v18;
  result = *(unsigned __int8 *)(*(_DWORD *)v17 + 28);
  if ( (result & 0x10) != 0 )
    return ((int (__fastcall *)(int **, int *))(*a1)[48])(a1, &dword_60C80630);
  return result;
}
