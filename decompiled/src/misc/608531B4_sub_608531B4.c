/* sub_608531B4
 * address: 0x608531B4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608531B4(int result)
{
  _DWORD *v1; // r4
  int v2; // r5
  int v3; // r2
  int v4; // r0
  int v5; // r0

  v1 = (_DWORD *)result;
  v2 = FIELD_U32(result, 52);
  if ( v2 )
  {
    v3 = FIELD_U32(result, 48);
    v4 = FIELD_U32(result, 52);
    if ( !v3 || ((*(void (__fastcall **)(_DWORD, bool))(*(_DWORD *)v3 + 16))(v1[12], v3 == v2), (v4 = v1[13]) != 0) )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v4 + 16))(v4, v4 == v2);
    v5 = v1[14];
    if ( v5 )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v5 + 16))(v5, v5 == v2);
    return (*(int (__fastcall **)(_DWORD, _DWORD, float))(*(_DWORD *)v1[13] + 84))(v1[13], 0, 1.0);
  }
  return result;
}
