/* sub_607CEF84
 * address: 0x607CEF84   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CEF84(unsigned __int8 *a1, float *a2)
{
  _DWORD *v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r0
  int result; // r0

  v4 = (_DWORD *)(*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 172))(a1);
  v5 = v4[6];
  v6 = v4[7];
  v7 = v4[8];
  *(_DWORD *)a2 = v5;
  *((_DWORD *)a2 + 1) = v6;
  *((_DWORD *)a2 + 2) = v7;
  result = a1[1214];
  if ( (result & 0x20) != 0 )
  {
    *a2 = *a2 + 2.0;
    a2[1] = a2[1] + -2.0;
  }
  return result;
}
