/* sub_602D39A4
 * address: 0x602D39A4   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D39A4(int a1)
{
  int v2; // r5
  float v3; // s0
  int result; // r0
  int v5; // r1
  _DWORD *v6; // r6
  int v7; // r2
  bool v8; // zf
  int v9; // r1
  int v10; // r0
  int v11; // r2
  _BYTE *v12; // r7
  int v13; // r4
  char v14; // r12
  _BYTE *v15; // r4
  int v16; // t1
  _DWORD *v17; // r1
  unsigned int v18; // r0
  int v19; // r2
  int v20; // r2
  int v21; // r1
  int v22; // r2
  float v23; // r1
  Vec3 v24; // [sp+4h] [bp-24h] BYREF

  v2 = a1 + 6856;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6856));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  result = 0;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    result = 1;
  }
  v6 = (_DWORD *)(a1 + 6860);
  v5 = FIELD_U32(a1, 6860);
  if ( v5 == 2 )
  {
    v19 = FIELD_U32(a1, 160);
    if ( FIELD_U32(a1, 80) )
    {
      v20 = v19 + 0x2000000;
      v21 = -536870912;
      if ( v20 < -536870912 )
        v21 = v20;
    }
    else
    {
      v22 = v19 - 0x2000000;
      v21 = 0x20000000;
      if ( v22 > 0x20000000 )
        v21 = v22;
    }
    FIELD_U32(a1, 160) = v21;
    if ( result )
    {
      v23 = FIELD_F32(a1, 112);
      v24.x = FIELD_F32(a1, 6708);
      v24.y = v23;
      v24.z = 4500.0;
      EffectData_create(647, &v24, 0, 0);
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91B60);
    }
  }
  else
  {
    if ( v5 != 1 )
      return result;
    v7 = FIELD_U32(a1, 80);
    v8 = v7 == 0;
    v9 = (int)(float)((float)dword_60AFE3EC[v7] * 0.125) + FIELD_U32(a1, 160);
    FIELD_U32(a1, 160) = v9;
    v10 = dword_60AF2028[v7];
    v11 = v10;
    if ( !v8 )
      v11 = -v10;
    if ( v9 < 0 )
      v9 = -v9;
    if ( v9 >= v11 )
      FIELD_U32(a1, 160) = v10;
    v12 = (_BYTE *)(a1 + 6673);
    if ( !FIELD_U8(a1, 6673) )
      goto LABEL_22;
    v13 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6852));
    if ( ((unsigned int)&dword_60C88030 & ~(1613576880 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C88030) )
    {
      dword_60C8802C = (int)&off_60BD20C4;
      _cxa_guard_release(&dword_60C88030);
    }
    if ( !v13 )
      goto LABEL_22;
    if ( (**(int (__fastcall ***)(int, int *))v13)(v13, &dword_60C8802C) != 1 )
      goto LABEL_22;
    v16 = FIELD_U8(v13, 6480);
    v15 = (_BYTE *)(v13 + 6480);
    if ( v16 )
      goto LABEL_22;
    v17 = *(_DWORD **)(*(_DWORD *)v2 + 12);
    v18 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v18 )
      v17 += v18;
    result = sub_60418548(*v17 + 4);
    if ( result == 1 )
    {
      *v15 = 1;
LABEL_22:
      *v12 = 0;
      *v6 = 2;
      return 2;
    }
  }
  return result;
}
