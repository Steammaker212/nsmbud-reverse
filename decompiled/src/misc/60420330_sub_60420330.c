/* sub_60420330
 * address: 0x60420330   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60420330(int a1)
{
  *(_DWORD *)a1 = 0;
  FIELD_U16(a1, 4) = 0;
  FIELD_U32(a1, 8) = -1;
  FIELD_U32(a1, 12) = -1;
  FIELD_U32(a1, 16) = 0;
  memset((void *)(a1 + 20), 255, 0x48u);
  FIELD_U32(a1, 92) = 0;
  return a1;
}
