/* sub_608D3F88
 * address: 0x608D3F88   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D3F88(int a1)
{
  *(_DWORD *)a1 = &off_60C5AED8;
  FIELD_U32(a1, 4) = a1 + 4;
  FIELD_U32(a1, 8) = a1 + 4;
  sub_608B2BE4((_DWORD *)(a1 + 12));
  *(_DWORD *)a1 = off_60C5B7E4;
  FIELD_U32(a1, 12) = off_60C5B804;
  FIELD_U16(a1, 608) = 256;
  return a1;
}
