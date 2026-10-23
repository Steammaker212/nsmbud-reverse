/* face_1_ref_E8574
 * address: 0x600E8574   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

double __fastcall face_1_ref_E8574(int a1)
{
  _DWORD **v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  _DWORD v7[11]; // [sp+0h] [bp-38h] BYREF

  v2 = *(int **)(a1 + 7096);
  v1 = (_DWORD **)(a1 + 7096);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v2 + 84);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "face_1";
  v5 = v4(v3, v7);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v1 + 108))(**v1, v5, v7);
  return COERCE_DOUBLE(__PAIR64__(v7[7], v7[3]));
}
