/* sub_608E7DD8
 * address: 0x608E7DD8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E7DD8(int a1, int a2, int a3, int a4)
{
  _BYTE *v8; // r6
  bool v9; // zf

  v8 = *(_BYTE **)(a1 + 4);
  if ( !v8 )
    return 0;
  v9 = a3 == 0;
  if ( a3 )
    v9 = v8[76] == 0;
  if ( !v9 && (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v8 + 32))(v8, a1) == 1 )
    return (*(int (__fastcall **)(_BYTE *, int, int, int, int))(*(_DWORD *)v8 + 68))(v8, a2, a1, a3, a4);
  else
    return 0;
}
