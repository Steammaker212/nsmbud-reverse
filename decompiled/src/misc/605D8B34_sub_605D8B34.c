/* sub_605D8B34
 * address: 0x605D8B34   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D8B34(_BYTE *a1, int a2, int a3)
{
  int v6; // r6
  int v7; // r1

  v6 = 0;
  if ( a2 && !sub_605DBD64(a1) && (a1[6262] & 2) == 0 )
  {
    if ( a3 == 4 )
      v7 = 2;
    else
      v7 = 0;
    (*(void (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)a1 + 380))(a1, v7, a2);
    return 1;
  }
  return v6;
}
