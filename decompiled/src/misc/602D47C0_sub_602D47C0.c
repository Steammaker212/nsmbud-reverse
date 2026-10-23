/* sub_602D47C0
 * address: 0x602D47C0   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_602D47C0(int a1)
{
  int v2; // r5
  float v3; // s0
  _DWORD *v4; // r1
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r1
  _DWORD *v8; // r1
  unsigned int v9; // r0
  float v10; // r0
  int v11; // r1
  unsigned int result; // r0
  int v13; // r1
  unsigned int v14; // r2
  Vec3 v15; // [sp+4h] [bp-1Ch] BYREF

  v2 = a1 + 6856;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6856));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v4 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += v5;
  if ( sub_60418548(*v4 + 4) )
  {
    v6 = 6688;
    v7 = 6684;
    goto LABEL_11;
  }
  v8 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v9 )
    v8 += v9;
  if ( sub_60418548(*v8 + 4) )
  {
    v6 = 6700;
    v7 = 6696;
LABEL_11:
    v10 = *(float *)(a1 + v6);
    v15.x = *(float *)(a1 + v7);
    v15.y = v10;
    v15.z = 4500.0;
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    {
      EffectData_setEffectId((EffectData *)(a1 + 6988), 646);
      sub_60237208(a1 + 6972, &v15, 0, 0);
    }
  }
  v11 = FIELD_U32(a1, 80);
  result = FIELD_U32(a1, 160) + dword_60AFE3EC[v11];
  FIELD_U32(a1, 160) = result;
  if ( (result & 0x80000000) != 0 && result != 0x80000000 )
    result = -result;
  v13 = Enemy_CommonRotations[v11];
  v14 = v13;
  if ( v13 < 0 )
  {
    v14 = v13;
    if ( v13 != 0x80000000 )
      v14 = -v13;
  }
  if ( result >= v14 )
  {
    FIELD_U32(a1, 160) = v13;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91BC0);
  }
  return result;
}
