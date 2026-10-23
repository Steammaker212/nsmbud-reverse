/* fire_snake_body_model_ref_2
 * address: 0x602AF064   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fire_snake_body_model_ref_2(int **a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, _DWORD *); // r2
  int v4; // r0
  _DWORD v6[14]; // [sp+0h] [bp-38h] BYREF

  v2 = **a1;
  v3 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 84);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "fire_snake_body_model";
  v4 = v3(v2, v6);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**a1 + 108))(**a1, v4, v6);
  return sub_60236DF4(666, v6, 0);
}
