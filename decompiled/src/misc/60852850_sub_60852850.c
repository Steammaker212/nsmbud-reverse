/* sub_60852850
 * address: 0x60852850   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60852850(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v9; // r0
  int v10; // r7
  int v11; // r5
  int v12; // r0

  v9 = sub_60851D10(a2);
  a1[12] = a4;
  a1[13] = v9;
  if ( v9 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = sub_60851D24(a2);
      *(_DWORD *)(a1[12] + 4 * v11) = sub_60855AD8(a3, v12 + v10);
      (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 44))(a1, *(_DWORD *)(a1[12] + 4 * v11++));
      v10 += 36;
    }
    while ( v11 < a1[13] );
  }
  return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 16))(a1, a5);
}
