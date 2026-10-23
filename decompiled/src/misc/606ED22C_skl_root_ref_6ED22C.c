/* skl_root_ref_6ED22C
 * address: 0x606ED22C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall skl_root_ref_6ED22C(int **a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, _DWORD *); // r2
  char v4; // r0
  _DWORD *result; // r0
  _DWORD v6[11]; // [sp+0h] [bp-38h] BYREF
  _DWORD *v7; // [sp+2Ch] [bp-Ch]

  (*(void (__fastcall **)(int, int **))(*(_DWORD *)**a1 + 60))(**a1, a1 + 2);
  (*(void (__fastcall **)(int, int **))(*(_DWORD *)**a1 + 68))(**a1, a1 + 14);
  ModelWrapper_updateAnims((ModelWrapper *)*a1);
  ModelWrapper_updateModel((ModelWrapper *)*a1);
  v2 = **a1;
  v3 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 84);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "skl_root";
  v4 = v3(v2, v6);
  (*(void (__fastcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)**a1 + 108))(**a1, v4, v6);
  a1[17] = (int *)v6[3];
  a1[18] = (int *)v6[7];
  result = v7;
  a1[19] = v7;
  return result;
}
