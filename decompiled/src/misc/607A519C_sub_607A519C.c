/* sub_607A519C
 * address: 0x607A519C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607A519C(_BYTE *a1)
{
  int v2; // r4

  v2 = 0;
  if ( sub_60769BBC((int)a1)
    && ((*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1068))(a1) != 1 || sub_6079D894((int)a1)) )
  {
    return (a1[1218] & 8) == 0;
  }
  return v2;
}
