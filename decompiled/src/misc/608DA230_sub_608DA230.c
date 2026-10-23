/* sub_608DA230
 * address: 0x608DA230   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DA230(int a1)
{
  ((void (__fastcall *)(int))loc_6099C15C)(a1 + 16);
  *(_DWORD *)a1 = off_60C5BAE8;
  FIELD_U16(a1, 152) = -1;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  return a1;
}
