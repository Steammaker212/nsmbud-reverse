/* sub_601C2CF8
 * address: 0x601C2CF8   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C2CF8(_DWORD *a1)
{
  int result; // r0
  float *v3; // r5
  int v4; // r7
  int v5; // r0

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
  if ( !result )
  {
    if ( sub_601860F8((int)a1) == 1 )
    {
      sub_601C6044(a1, a1 + 271);
      sub_60169018(a1);
      sub_601B69E0((int)a1);
      sub_601C503C(a1);
      (*(void (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
    }
    result = (*(int (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
    if ( result == 1 )
    {
      result = a1[282];
      if ( result >= 1 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a1 + 76))(a1);
        v3 = (float *)a1[278];
        sub_601BA0F8((int)a1, 7, 0.0, 0.0);
        v4 = *(__int16 *)v3;
        v5 = sub_601C5EEC(a1);
        ((void (__fastcall *)(_DWORD *, _DWORD *, int, _DWORD, float, float, float, _DWORD, _DWORD *))loc_60185F9C)(
          a1,
          a1 + 237,
          v4 * v5,
          *((__int16 *)v3 + 4),
          v3[1],
          v3[3] * 2.3,
          2.3 * v3[4],
          *((__int16 *)v3 + 5),
          a1 + 279);
        result = a1[282] - 1;
        a1[282] = result;
      }
    }
  }
  return result;
}
