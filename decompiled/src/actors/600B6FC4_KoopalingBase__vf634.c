/* KoopalingBase__vf634
 * address: 0x600B6FC4   size: 456   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf634(int a1)
{
  int v2; // r5
  _DWORD *v3; // r0
  int *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  float v7; // s0
  int result; // r0
  int v9; // r1
  int *v10; // r7
  int *v11; // r1
  unsigned int v12; // r0
  int v13; // r8
  int *v14; // r1
  unsigned int v15; // r0
  int v16; // r5
  int v17; // r1
  unsigned int v18; // r0

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  v3 = *(_DWORD **)(a1 + 7100);
  v4 = (int *)v3[3];
  v5 = v3[2];
  v6 = v3[17];
  if ( v5 > v6 )
    v4 += v6;
  Animation_update(*v4);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v7 = CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 1196))(a1, v7) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1308))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1336))(a1);
  result = FIELD_U32(a1, 7092);
  if ( result == 2 )
  {
    v17 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v18 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v18 )
      v17 += 4 * v18;
    result = *(unsigned __int8 *)(*(_DWORD *)v17 + 28);
    if ( (result & 0x20) != 0 )
    {
      if ( (FIELD_U8(a1, 2872) & 1) != 0 )
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1240))(a1);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1060))(a1);
    }
  }
  else if ( result == 1 )
  {
    result = 7176;
    v10 = (int *)(a1 + 7176);
    v9 = FIELD_U32(a1, 7176);
    if ( (v9 & 1) == 0 )
    {
      v11 = *(int **)(*(_DWORD *)v2 + 12);
      v12 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v12 )
        v11 += v12;
      v13 = *v11;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1188))(a1);
      result = sub_60418548(v13 + 4);
      v9 = *v10;
      if ( result == 1 )
      {
        v9 |= 1u;
        *v10 = v9;
      }
    }
    if ( (v9 & 2) != 0 )
    {
      v14 = *(int **)(*(_DWORD *)v2 + 12);
      v15 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v15 )
        v14 += v15;
      v16 = *v14;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1192))(a1);
      result = sub_60418548(v16 + 4);
      v9 = *v10;
      if ( result == 1 )
      {
        v9 &= ~2u;
        *v10 = v9;
      }
    }
    if ( v9 == 1 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1140))(a1);
      FIELD_U32(a1, 156) = 0;
      result = 2;
      FIELD_U32(a1, 7092) = 2;
    }
  }
  return result;
}
