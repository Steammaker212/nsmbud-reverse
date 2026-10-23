/* sub_601C42A8
 * address: 0x601C42A8   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C42A8(_DWORD *a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r0

  v2 = 0;
  switch ( a1[75] )
  {
    case 0:
      v3 = 1;
      goto LABEL_13;
    case 1:
      (*(void (__fastcall **)(_DWORD *, _DWORD, _DWORD *))(*a1 + 116))(a1, a1[76], a1 + 79);
      v3 = 2;
      goto LABEL_13;
    case 2:
      if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 120))(a1) != 1 )
        return v2;
      (*(void (__fastcall **)(_DWORD *, int, _DWORD *))(*a1 + 116))(a1, 3, a1 + 79);
      v3 = 4;
      goto LABEL_13;
    case 4:
      if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 120))(a1) != 1 )
        return v2;
      (*(void (__fastcall **)(_DWORD *, int))(*a1 + 112))(a1, 1);
      a1[78] = 30;
      v3 = 7;
      goto LABEL_13;
    case 7:
      v4 = a1[78];
      if ( v4 < 1 )
      {
        (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 112))(a1, 0);
        v3 = 8;
LABEL_13:
        a1[75] = v3;
        return 0;
      }
      else
      {
        a1[78] = v4 - 1;
        return 0;
      }
    case 8:
      return 1;
    default:
      return v2;
  }
}
