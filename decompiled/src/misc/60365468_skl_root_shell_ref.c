/* skl_root_shell_ref
 * address: 0x60365468   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_shell_ref(int a1)
{
  __n128 v2; // q0
  int result; // r0
  int v4; // r5
  int (__fastcall *v5)(int, _DWORD *, float, float, float, float); // r2
  int v6; // r0
  _DWORD v7[16]; // [sp+0h] [bp-40h] BYREF

  v2 = KoopaTroopa_vf211(a1);
  result = FIELD_U32(a1, 6352);
  if ( result == 2 )
  {
    v4 = **(_DWORD **)(a1 + 6820);
    v5 = *(int (__fastcall **)(int, _DWORD *, float, float, float, float))(*(_DWORD *)v4 + 84);
    v7[0] = &sead__SafeStringBase__vtable;
    v7[1] = "skl_root_shell";
    v6 = v5(v4, v7, v2.n128_f32[0], v2.n128_f32[1], v2.n128_f32[2], v2.n128_f32[3]);
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v4 + 108))(v4, v6, v7);
    (*(void (__fastcall **)(_DWORD, _DWORD *))(***(_DWORD ***)(a1 + 7504) + 60))(**(_DWORD **)(a1 + 7504), v7);
    return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 7504));
  }
  return result;
}
