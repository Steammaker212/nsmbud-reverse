/* morton_hummer_ref_F3210
 * address: 0x600F3210   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall morton_hummer_ref_F3210(int a1)
{
  int **v2; // r7
  float v3; // s0
  int v4; // r0
  int v5; // r0
  int (__fastcall *v6)(int, _DWORD *); // r2
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int result; // r0
  _DWORD v11[18]; // [sp+0h] [bp-48h] BYREF

  v2 = (int **)(a1 + 7096);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 1108))(a1, v3);
  sub_600B33DC((int *)a1, v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  v5 = **v2;
  v6 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 84);
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "morton_hummer";
  v7 = v6(v5, v11);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v7, v11);
  sub_602372C0(a1 + 8548, 331, v11, 0);
  v8 = (*v2)[3];
  v9 = (*v2)[17];
  if ( (*v2)[2] > v9 )
    v8 += 4 * v9;
  if ( (*(_BYTE *)(*(_DWORD *)v8 + 28) & 0x20) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C83290);
  result = **(unsigned __int8 **)(FIELD_U32(a1, 7112) + 4);
  if ( !**(_BYTE **)(FIELD_U32(a1, 7112) + 4) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C83290);
  return result;
}
