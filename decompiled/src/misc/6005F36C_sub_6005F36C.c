/* sub_6005F36C
 * address: 0x6005F36C   size: 784   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005F36C(int a1)
{
  _DWORD *v2; // r0
  int *v3; // r6
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int result; // r0
  _DWORD *v8; // r5
  unsigned int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r0
  unsigned int v15; // r3
  int v16; // r1
  int v17; // r1
  unsigned int v18; // r2
  unsigned int v19; // r0
  int *v20; // r1
  unsigned int v21; // r0
  int *v22; // r1
  unsigned int v23; // r0
  int v24; // r1
  unsigned int v25; // r0

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1116))(a1);
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
    FIELD_U32(a1, 124) = 0;
  v3 = (int *)(a1 + 7204);
  v2 = *(_DWORD **)(a1 + 7204);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
  {
    sub_6005251C(a1);
    sub_608134CC(a1 + 6332, "SE_EMY_BUNBUN_W6_TRANSFORM", FIELD_S16(a1, 6640), 0);
  }
  v8 = (_DWORD *)(a1 + 7844);
  result = FIELD_U32(a1, 7844);
  switch ( result )
  {
    case 0:
      result = *v3;
      v9 = *(_DWORD *)(*v3 + 68);
      v10 = *(_DWORD *)(*v3 + 12);
      if ( *(_DWORD *)(*v3 + 8) > v9 )
        v10 += 4 * v9;
      if ( *(float *)(*(_DWORD *)v10 + 20) >= 75.0 )
      {
        v11 = dword_60C80F40;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = v11;
        FIELD_U32(a1, 128) = 0;
        FIELD_U32(a1, 100) = dword_60C80F2C;
        v12 = FIELD_U32(result, 12);
        v13 = FIELD_U32(result, 8);
        v14 = FIELD_U32(result, 68);
        if ( v13 > v14 )
          v12 += 4 * v14;
        *(_DWORD *)(*(_DWORD *)v12 + 24) = 1065353216;
        *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7836) + 12) + 24) = 1065353216;
        *v8 = 1;
        result = (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 1192))(a1, 75.0);
      }
      break;
    case 1:
      result = *v3;
      v15 = *(_DWORD *)(*v3 + 68);
      v16 = *(_DWORD *)(*v3 + 12);
      if ( *(_DWORD *)(*v3 + 8) > v15 )
        v16 += 4 * v15;
      if ( *(float *)(*(_DWORD *)v16 + 20) >= 92.0 )
      {
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        FIELD_U32(a1, 128) = 0;
        FIELD_U32(a1, 100) = 0;
        v17 = FIELD_U32(result, 12);
        v18 = FIELD_U32(result, 8);
        v19 = FIELD_U32(result, 68);
        if ( v18 > v19 )
          v17 += 4 * v19;
        *(_DWORD *)(*(_DWORD *)v17 + 24) = 1065353216;
        *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7836) + 12) + 24) = 1065353216;
        *v8 = 2;
        result = 2;
      }
      break;
    case 2:
      v20 = *(int **)(*v3 + 12);
      v21 = *(_DWORD *)(*v3 + 68);
      if ( *(_DWORD *)(*v3 + 8) > v21 )
        v20 += v21;
      result = *v20;
      if ( *(float *)(*v20 + 20) >= 97.0 )
      {
        sub_608134CC(a1 + 6332, "SE_VOC_BUN_CHANGE_WING", FIELD_S16(a1, 6640), 0);
        *v8 = 3;
        result = 3;
      }
      break;
    case 3:
      FIELD_U32(a1, 156) += dword_60C80F30;
      v22 = *(int **)(*v3 + 12);
      v23 = *(_DWORD *)(*v3 + 68);
      if ( *(_DWORD *)(*v3 + 8) > v23 )
        v22 += v23;
      result = *v22;
      if ( *(float *)(*v22 + 20) >= 111.0 )
      {
        result = 4;
        *v8 = 4;
      }
      break;
    case 4:
      v24 = *(_DWORD *)(*v3 + 12);
      v25 = *(_DWORD *)(*v3 + 68);
      if ( *(_DWORD *)(*v3 + 8) > v25 )
        v24 += 4 * v25;
      result = *(unsigned __int8 *)(*(_DWORD *)v24 + 28);
      if ( (result & 0x10) != 0 )
        result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80D6C);
      break;
    default:
      return result;
  }
  return result;
}
