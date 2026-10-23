/* morton_hummer_ref_F3490
 * address: 0x600F3490   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall morton_hummer_ref_F3490(int a1)
{
  int **v2; // r7
  float v3; // s0
  int v4; // r0
  _BOOL4 v5; // r5
  int v6; // r0
  int (__fastcall *v7)(int, int (***)()); // r2
  int v8; // r0
  int v9; // r0
  int (__fastcall *v10)(int, int (***)()); // r2
  int v11; // r0
  int result; // r0
  int (**v13)(); // [sp+0h] [bp-48h] BYREF
  const char *v14; // [sp+4h] [bp-44h]

  v2 = (int **)(a1 + 7096);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 1108))(a1, v3);
  v5 = sub_600B33DC((int *)a1, v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  if ( FIELD_U32(a1, 7180) == 5 )
  {
    v6 = **v2;
    v7 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v6 + 84);
    v13 = &sead__SafeStringBase__vtable;
    v14 = "morton_hummer";
    v8 = v7(v6, &v13);
    (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v2 + 108))(**v2, v8, &v13);
    sub_602372C0(a1 + 8444, 330, &v13, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1312))(a1);
  }
  v9 = **v2;
  v10 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v9 + 84);
  v13 = &sead__SafeStringBase__vtable;
  v14 = "morton_hummer";
  v11 = v10(v9, &v13);
  (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v2 + 108))(**v2, v11, &v13);
  sub_602372C0(a1 + 8548, 331, &v13, 0);
  result = FIELD_U32(a1, 7128);
  FIELD_U32(a1, 7128) = result - 1;
  if ( v5 && result <= 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C832B4);
  return result;
}
