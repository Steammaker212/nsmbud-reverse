/* s_bagllmap_ref
 * address: 0x60421114   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall s_bagllmap_ref(int a1, int *a2)
{
  int v4; // r3
  _DWORD v6[72]; // [sp+0h] [bp-120h] BYREF

  (*(void (__fastcall **)(int *))(*a2 + 12))(a2);
  sead_SomeString_sprtintf(v6, "%s.bagllmap", a2[1], v4);
  return (*(int (__fastcall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(a1 + 20) + 24))(FIELD_U32(a1, 20), v6, 0);
}
