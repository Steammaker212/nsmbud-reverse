/* PlayerStates_loadModelResources_helper_4210B8
 * address: 0x604210B8   size: 88   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerStates_loadModelResources_helper_4210B8(int a1, int *a2)
{
  int v4; // r3
  _DWORD v6[72]; // [sp+0h] [bp-120h] BYREF

  (*(void (__fastcall **)(int *))(*a2 + 12))(a2);
  sead_SomeString_sprtintf(v6, "%s.bagldof", a2[1], v4);
  return (*(int (__fastcall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(a1 + 20) + 24))(FIELD_U32(a1, 20), v6, 0);
}
