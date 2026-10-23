/* sub_6085309C
 * address: 0x6085309C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085309C(int result)
{
  int v1; // r4
  int v2; // r5
  int v3; // r0
  int v4; // r0

  v1 = result;
  v2 = FIELD_U32(result, 48);
  if ( v2 )
  {
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v2 + 16))(FIELD_U32(result, 48), 1);
    v3 = FIELD_U32(v1, 52);
    if ( v3 )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v3 + 16))(v3, v3 == v2);
    v4 = FIELD_U32(v1, 56);
    if ( v4 )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v4 + 16))(v4, v4 == v2);
    return (*(int (__fastcall **)(_DWORD, _DWORD, float))(**(_DWORD **)(v1 + 48) + 92))(FIELD_U32(v1, 48), 0, 1.0);
  }
  return result;
}
