/* sub_6099576C
 * address: 0x6099576C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099576C(_WORD *a1)
{
  if ( (a1[15] & 0x40) != 0 )
  {
    *((_DWORD *)a1 + 11) = *((_DWORD *)a1 + 17);
    *((_BYTE *)a1 + 76) = 0;
  }
  return sub_60991358(a1);
}
