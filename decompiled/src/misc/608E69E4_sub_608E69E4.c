/* sub_608E69E4
 * address: 0x608E69E4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E69E4(_BYTE *a1, int a2)
{
  bool v4; // zf

  v4 = a2 == 0;
  if ( a2 )
    v4 = a1[76] == 0;
  if ( v4 || (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 32))(a1, a2) != 1 )
    return 0;
  else
    return (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 56))(a1, a2);
}
