/* fire_snake_body_model_ref
 * address: 0x602AEFE0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fire_snake_body_model_ref(int **a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, __int64 *); // r2
  int v4; // r0
  __int64 v6[8]; // [sp+0h] [bp-40h] BYREF

  v2 = **a1;
  v3 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v2 + 84);
  LODWORD(v6[0]) = &sead__SafeStringBase__vtable;
  HIDWORD(v6[0]) = "fire_snake_body_model";
  v4 = v3(v2, v6);
  (*(void (__fastcall **)(int, int, __int64 *))(*(_DWORD *)**a1 + 108))(**a1, v4, v6);
  return sub_602372C0((int)(a1 + 85), 664, v6, 0);
}
