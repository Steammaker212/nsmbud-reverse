/* BoomBoomBase__vf440
 * address: 0x600531E0   size: 832   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BoomBoomBase__vf440(_DWORD *a1)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r5
  _DWORD *v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r2
  _DWORD *v7; // r3
  _DWORD *v8; // r1
  unsigned int v9; // r0
  _DWORD *v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r2
  _DWORD *v13; // r3
  float v14; // s0
  int v15; // r3
  unsigned int v16; // r2
  float v17; // s0
  int v18; // r0
  int v19; // r1
  unsigned int v20; // r0
  int result; // r0
  int v22; // r1
  int target; // [sp+4h] [bp-14h] BYREF

  (*(void (__fastcall **)(_DWORD *))(*a1 + 1116))(a1);
  v3 = a1 + 1801;
  v2 = (_DWORD *)a1[1801];
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  v7 = v4;
  if ( v5 > v6 )
    v7 = &v4[v6];
  if ( *(float *)(*v7 + 20) < 38.0 )
  {
    (*(void (__fastcall **)(_DWORD *, float))(*a1 + 1128))(a1, 38.0);
    v4 = *(_DWORD **)(*v3 + 12);
    v5 = *(_DWORD *)(*v3 + 8);
    v6 = *(_DWORD *)(*v3 + 68);
  }
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
  {
    (*(void (__fastcall **)(_DWORD *))(*a1 + 1180))(a1);
  }
  else
  {
    v8 = *(_DWORD **)(*v3 + 12);
    v9 = *(_DWORD *)(*v3 + 68);
    if ( *(_DWORD *)(*v3 + 8) > v9 )
      v8 += v9;
    if ( sub_60418548(*v8 + 4) )
      (*(void (__fastcall **)(_DWORD *))(*a1 + 1184))(a1);
  }
  v10 = *(_DWORD **)(*v3 + 12);
  v11 = *(_DWORD *)(*v3 + 8);
  v12 = *(_DWORD *)(*v3 + 68);
  v13 = v10;
  if ( v11 > v12 )
    v13 = &v10[v12];
  if ( *(float *)(*v13 + 20) == *((float *)a1 + 1793) )
  {
    a1[31] = a1[1799];
    a1[25] = a1[1798];
    a1[34] = -1065353216;
    a1[20] = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)a1 + 9);
    v14 = *((float *)a1 + 1796);
    if ( v14 != 0.0 )
    {
      v15 = *(_DWORD *)(*v3 + 12);
      v16 = *(_DWORD *)(*v3 + 68);
      v17 = *((float *)a1 + 1795) / v14;
      if ( *(_DWORD *)(*v3 + 8) > v16 )
        v15 += 4 * v16;
      *(float *)(*(_DWORD *)v15 + 24) = v17;
      v14 = *((float *)a1 + 1796);
    }
    a1[1810] = a1[1774] / (int)v14;
    v10 = *(_DWORD **)(*v3 + 12);
    v11 = *(_DWORD *)(*v3 + 8);
    v12 = *(_DWORD *)(*v3 + 68);
  }
  if ( v11 > v12 )
    v10 += v12;
  if ( sub_60418548(*v10 + 4) )
  {
    a1[76] = 0;
    a1[77] = 1099327078;
    a1[78] = 1099327078;
    a1[79] = 1099327078;
    a1[80] = 0;
    *((_BYTE *)a1 + 7524) = 0;
    a1[1711] = 1103101952;
    a1[1712] = 1103101952;
    a1[1709] = 0;
    a1[1710] = 1103101952;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 1212))(a1);
  }
  v18 = a1[1774];
  if ( a1[20] )
    v18 = -v18;
  target = v18;
  moveValueTo(a1 + 40, &target, a1 + 1810);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)a1 + 648);
  if ( (a1[718] & 1) != 0 )
  {
    if ( *((float *)a1 + 31) < *((float *)a1 + 25) )
    {
      (*(void (__fastcall **)(_DWORD *, float))(*a1 + 1120))(a1, 0.0);
      (*(void (__fastcall **)(_DWORD *))(*a1 + 1160))(a1);
    }
    a1[31] = 0;
  }
  v19 = *(_DWORD *)(*v3 + 12);
  v20 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v20 )
    v19 += 4 * v20;
  result = *(unsigned __int8 *)(*(_DWORD *)v19 + 28);
  if ( (result & 0x10) != 0 )
  {
    v22 = a1[1774];
    if ( a1[20] )
      v22 = -v22;
    a1[40] = v22;
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C80654);
  }
  return result;
}
