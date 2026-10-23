/* BoomBoomBase__vf410
 * address: 0x60052BD0   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BoomBoomBase__vf410(int a1)
{
  int **v2; // r5
  _DWORD *v3; // r1
  unsigned int v4; // r0
  _DWORD *v5; // r1
  unsigned int v6; // r0
  _DWORD *v7; // r1
  unsigned int v8; // r0
  _DWORD *v9; // r1
  unsigned int v10; // r0
  int v11; // r0
  int (__fastcall *v12)(int, _DWORD *); // r2
  int v13; // r0
  _DWORD *v14; // r1
  unsigned int v15; // r0
  _DWORD *v16; // r1
  unsigned int v17; // r0
  _DWORD *v18; // r1
  unsigned int v19; // r0
  int v20; // r1
  unsigned int v21; // r0
  int result; // r0
  Vec3 v23; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v24[16]; // [sp+10h] [bp-40h] BYREF

  v2 = (int **)(a1 + 7204);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7204));
  v3 = (_DWORD *)(*v2)[3];
  v4 = (*v2)[17];
  if ( (*v2)[2] > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1172))(a1);
  v5 = (_DWORD *)(*v2)[3];
  v6 = (*v2)[17];
  if ( (*v2)[2] > v6 )
    v5 += v6;
  if ( sub_60418548(*v5 + 4) )
    goto LABEL_14;
  v7 = (_DWORD *)(*v2)[3];
  v8 = (*v2)[17];
  if ( (*v2)[2] > v8 )
    v7 += v8;
  if ( sub_60418548(*v7 + 4) )
    goto LABEL_14;
  v9 = (_DWORD *)(*v2)[3];
  v10 = (*v2)[17];
  if ( (*v2)[2] > v10 )
    v9 += v10;
  if ( sub_60418548(*v9 + 4) )
  {
LABEL_14:
    v11 = **v2;
    v12 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v11 + 84);
    v24[0] = &sead__SafeStringBase__vtable;
    v24[1] = "face_1";
    v13 = v12(v11, v24);
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v13, v24);
    LODWORD(v23.x) = v24[3];
    LODWORD(v23.y) = v24[7];
    LODWORD(v23.z) = v24[11];
    sub_602375C4((EffectData *)(a1 + 7460), 395, &v23, 0, 0);
  }
  v14 = (_DWORD *)(*v2)[3];
  v15 = (*v2)[17];
  if ( (*v2)[2] > v15 )
    v14 += v15;
  if ( sub_60418548(*v14 + 4) )
    goto LABEL_24;
  v16 = (_DWORD *)(*v2)[3];
  v17 = (*v2)[17];
  if ( (*v2)[2] > v17 )
    v16 += v17;
  if ( sub_60418548(*v16 + 4) )
    goto LABEL_24;
  v18 = (_DWORD *)(*v2)[3];
  v19 = (*v2)[17];
  if ( (*v2)[2] > v19 )
    v18 += v19;
  if ( sub_60418548(*v18 + 4) )
  {
LABEL_24:
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1120))(a1, 0.0);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1160))(a1);
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v20 = (*v2)[3];
  v21 = (*v2)[17];
  if ( (*v2)[2] > v21 )
    v20 += 4 * v21;
  result = *(unsigned __int8 *)(*(_DWORD *)v20 + 28);
  if ( (result & 0x10) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80630);
  return result;
}
