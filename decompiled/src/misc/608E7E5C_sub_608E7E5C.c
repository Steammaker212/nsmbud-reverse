/* sub_608E7E5C
 * address: 0x608E7E5C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E7E5C(int a1, int a2, int a3)
{
  _BYTE *v6; // r7
  bool v7; // zf

  v6 = *(_BYTE **)(a1 + 4);
  v7 = v6 == 0;
  if ( v6 )
    v7 = v6[76] == 0;
  if ( v7 || (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v6 + 32))(v6, a1) != 1 )
    return 0;
  else
    return (*(int (__fastcall **)(_BYTE *, int, int, int))(*(_DWORD *)v6 + 72))(v6, a1, a2, a3);
}
