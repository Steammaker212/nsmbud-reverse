/* sub_6089085C
 * address: 0x6089085C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089085C(unsigned __int8 *a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v9; // r0
  bool v10; // zf
  int result; // r0

  v9 = *(unsigned __int8 *)(a3[34] + 1874);
  v10 = v9 == 2;
  if ( v9 == 2 )
    v10 = a1[29] == 0;
  if ( v10 && a1[28] )
    ((void (__fastcall *)(_DWORD, int, _DWORD *, _DWORD, _DWORD, int, int, int))loc_6089B2BC)(
      a3[33],
      a2,
      a3,
      *(_DWORD *)(a3[87] + 596),
      *(_DWORD *)(a3[29] + 344),
      a4,
      a5,
      1);
  result = a1[27];
  if ( a1[27] )
    return sub_6089B87C(a3[33], a2, a3, a5, a6);
  return result;
}
