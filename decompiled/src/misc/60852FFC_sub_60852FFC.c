/* sub_60852FFC
 * address: 0x60852FFC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60852FFC(_DWORD *a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r2
  int v5; // r0
  int v6; // r0

  result = sub_608535DC();
  v3 = a1[13];
  if ( v3 )
  {
    v4 = a1[12];
    v5 = a1[13];
    if ( !v4 || ((*(void (__fastcall **)(_DWORD, bool))(*(_DWORD *)v4 + 16))(a1[12], v4 == v3), (v5 = a1[13]) != 0) )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v5 + 16))(v5, v5 == v3);
    v6 = a1[14];
    if ( v6 )
      (*(void (__fastcall **)(int, bool))(*(_DWORD *)v6 + 16))(v6, v6 == v3);
    return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1[13] + 108))(a1[13]);
  }
  return result;
}
