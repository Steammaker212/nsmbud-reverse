/* sub_609922CC
 * address: 0x609922CC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609922CC(_BYTE *a1)
{
  int v2; // r4

  v2 = 0;
  switch ( a1[28] )
  {
    case 0:
    case 2:
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 84))(a1);
      (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 116))(a1, 1);
      return 0;
    case 1:
    case 6:
      return v2;
    case 3:
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 92))(a1);
      (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 116))(a1, 4);
      return 1;
    default:
      return 1;
  }
}
