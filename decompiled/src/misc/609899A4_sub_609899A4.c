/* sub_609899A4
 * address: 0x609899A4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609899A4(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v9; // r6
  int v10; // r5
  void (__fastcall *v11)(_DWORD *, int); // r7
  int v12; // r0
  int v13; // r0
  int v14; // r0

  v9 = sub_60851D10(a2);
  if ( v9 )
  {
    v10 = 0;
    do
    {
      v11 = *(void (__fastcall **)(_DWORD *, int))(*a1 + 44);
      v12 = sub_60851D24(a2);
      v13 = sub_60855AD8(a4, v12 + v10);
      v11(a1, v13);
      v10 += 36;
      --v9;
    }
    while ( v9 );
  }
  v14 = sub_60851CF8(a2);
  a1[13] = a3;
  a1[14] = v14;
  return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 16))(a1, a5);
}
