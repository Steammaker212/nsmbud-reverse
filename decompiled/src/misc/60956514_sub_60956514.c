/* sub_60956514
 * address: 0x60956514   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60956514(_BYTE *a1)
{
  int v2; // r4

  v2 = 0;
  if ( (*((_WORD *)a1 + 40) & 3) == 3 && !(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 68))(a1) )
    return (a1[80] & 0x10) == 0;
  return v2;
}
