/* sub_60852F74
 * address: 0x60852F74   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60852F74(_DWORD *a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r0

  result = sub_608535C4(a1);
  v3 = a1[12];
  if ( v3 )
  {
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v3 + 16))(a1[12], 1);
    v4 = a1[13];
    if ( v4 )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v4 + 16))(v4, v4 == v3);
    v5 = a1[14];
    if ( v5 )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v5 + 16))(v5, v5 == v3);
    return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1[12] + 108))(a1[12]);
  }
  return result;
}
