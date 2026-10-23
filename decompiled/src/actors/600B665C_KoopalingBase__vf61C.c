/* KoopalingBase__vf61C
 * address: 0x600B665C   size: 592   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6009FE98 : Iggy
int __fastcall KoopalingBase__vf61C(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  _DWORD *v5; // r6
  int v6; // r5
  int v7; // r5
  float v8; // s0
  int *v9; // r7
  int v10; // r0
  int v11; // r5
  float v12; // s0
  int result; // r0
  int v14; // r2

  v2 = a1 + 1774;
  j_ModelWrapper_updateAnims(a1[1774]);
  j_ModelWrapper_updateAnims(v2[1]);
  v3 = *(_DWORD *)(*v2 + 12);
  v4 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v4 )
    v3 += 4 * v4;
  if ( (*(_BYTE *)(*(_DWORD *)v3 + 28) & 0x20) != 0 && a1[1794] != 2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a1 + 1144))(a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 1256))(a1);
    a1[39] = 0;
    a1[1794] = 2;
  }
  v5 = a1 + 1524;
  v6 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1[1524] + 8))(a1[1524]);
  if ( v6 != (*(int (**)(void))(dword_60C83320 + 8))()
    && (v7 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v5 + 8))(*v5), v7 != (*(int (**)(void))(dword_60C83368 + 8))())
    || (v8 = *((float *)a1 + 31), v8 >= 0.0)
    || a1[1794] == 2 )
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
    v8 = CollisionActor__handleSpeed((CollisionActor *)a1);
  }
  v9 = a1 + 1794;
  if ( a1[1794] == 2 )
  {
    v10 = a1[1936] + 0x2000000;
    if ( v10 >= 402653184 )
      v10 = 402653184;
    a1[1936] = v10;
    a1[40] += v10;
    (*(void (__fastcall **)(_DWORD *, float))(*a1 + 1304))(a1, v8);
  }
  else
  {
    v11 = (*(int (__fastcall **)(_DWORD, float))(*(_DWORD *)*v5 + 8))(*v5, v8);
    if ( v11 == (*(int (**)(void))(dword_60C83320 + 8))() )
      (*(void (__fastcall **)(_DWORD *, float))(*a1 + 1252))(a1, v12);
  }
  result = *v9;
  if ( *v9 == 2 )
  {
    a1[41] = 0;
    result = *((unsigned __int8 *)a1 + 2872);
    if ( (result & 1) != 0 && *((float *)a1 + 31) < 0.0 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a1 + 1292))(a1);
      (*(void (__fastcall **)(_DWORD *))(*a1 + 1244))(a1);
      v14 = a1[1928];
      a1[1928] = v14 - 1;
      if ( v14 < 2 )
      {
        a1[31] = 0;
        return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C833F8);
      }
      else
      {
        result = dword_60AF2304[v14 - 1];
        a1[31] = result;
      }
    }
  }
  return result;
}
