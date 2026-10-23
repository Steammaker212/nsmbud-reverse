/* sub_608E6964
 * address: 0x608E6964   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E6964(_BYTE *a1, int a2, int a3, int a4)
{
  bool v8; // zf

  if ( !a4 )
    return 0;
  v8 = a3 == 0;
  if ( a3 )
    v8 = a1[76] == 0;
  if ( !v8 && (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 32))(a1, a3) == 1 )
    return (*(int (__fastcall **)(_BYTE *, int, int, int))(*(_DWORD *)a1 + 68))(a1, a2, a3, a4);
  else
    return 0;
}
