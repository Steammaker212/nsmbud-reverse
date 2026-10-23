/* sub_60791F08
 * address: 0x60791F08   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60791F08(_DWORD *a1, int a2)
{
  bool v2; // zf

  v2 = a2 == 6;
  if ( a2 == 6 )
    v2 = a1[118] == 3;
  if ( v2 )
    return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 84))(a1, 13);
  else
    return sub_60792B58();
}
