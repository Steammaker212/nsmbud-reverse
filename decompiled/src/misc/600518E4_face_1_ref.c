/* face_1_ref
 * address: 0x600518E4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall face_1_ref(int a1, _DWORD *a2)
{
  _DWORD **v3; // r5
  int *v4; // t1
  int v5; // r0
  int (__fastcall *v6)(int, _DWORD *); // r2
  int v7; // r0
  int result; // r0
  _DWORD v9[11]; // [sp+0h] [bp-40h] BYREF
  int v10; // [sp+2Ch] [bp-14h]

  v4 = *(int **)(a1 + 7204);
  v3 = (_DWORD **)(a1 + 7204);
  v5 = *v4;
  v6 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v4 + 84);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "face_1";
  v7 = v6(v5, v9);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v3 + 108))(**v3, v7, v9);
  *a2 = v9[3];
  a2[1] = v9[7];
  result = v10;
  a2[2] = v10;
  return result;
}
