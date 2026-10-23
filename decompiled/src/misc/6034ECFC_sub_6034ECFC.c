/* sub_6034ECFC
 * address: 0x6034ECFC   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034ECFC(int a1)
{
  float v2; // s0
  int result; // r0
  int v4; // r1
  _DWORD *v5; // r5
  _DWORD *v6; // r0
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r0
  int v10; // t1
  _DWORD *v11; // r0
  int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r0

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  result = FIELD_U32(a1, 2872);
  if ( (result & 0x10400) == 0x400 )
    FIELD_F32(a1, 124) = -FIELD_F32(a1, 124);
  if ( (result & 0x440000) != 0 && (result & 0x10000000) == 0 || (result & 0x880000) != 0 && (result & 0x20000000) == 0 )
    FIELD_U32(a1, 120) = 0;
  v5 = (_DWORD *)(a1 + 6956);
  v4 = FIELD_U32(a1, 6956);
  if ( v4 == 3 )
  {
    if ( (result & 1) != 0 )
      FIELD_U32(a1, 124) = 0;
    v10 = FIELD_U32(a1, 6960);
    result = v10 - 1;
    FIELD_U32(a1, 6960) = v10 - 1;
    if ( v10 == 1 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 640))(a1);
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C945D8);
    }
  }
  else if ( v4 == 2 )
  {
    if ( (result & 1) != 0 )
    {
      v11 = *(_DWORD **)(a1 + 6304);
      v12 = v11[3];
      v13 = v11[2];
      v14 = v11[17];
      if ( v13 > v14 )
        v12 += 4 * v14;
      *(_DWORD *)(*(_DWORD *)v12 + 24) = 1058642330;
      FIELD_U32(a1, 6960) = 10;
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 124) = 0;
      FIELD_U32(a1, 128) = 0;
      *v5 = 3;
      return 3;
    }
  }
  else if ( v4 == 1 && FIELD_F32(a1, 124) < 0.0 )
  {
    result &= 1u;
    if ( result )
    {
      sub_6015907C((ActiveCollider *)(a1 + 188), 32775);
      v6 = *(_DWORD **)(a1 + 6304);
      v7 = v6[3];
      v8 = v6[2];
      v9 = v6[17];
      if ( v8 > v9 )
        v7 += 4 * v9;
      *(_DWORD *)(*(_DWORD *)v7 + 24) = 1061997773;
      FIELD_F32(a1, 124) = FIELD_F32(a1, 124) * -0.5;
      *v5 = 2;
      return 2;
    }
  }
  return result;
}
