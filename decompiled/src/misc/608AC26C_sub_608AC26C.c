/* sub_608AC26C
 * address: 0x608AC26C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC26C(int a1)
{
  *(_DWORD *)a1 = off_60C5AEEC;
  nn__os__InitializeMutex(a1 + 4, 1, 0);
  sub_608C5BD0(a1 + 24);
  FIELD_U8(a1, 40) = 0;
  return a1;
}
