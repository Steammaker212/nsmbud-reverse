/* sub_60301B94
 * address: 0x60301B94   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60301B94(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int result; // r0

  *a2 = FIELD_U32(dword_60CC6484, 112);
  *a3 = FIELD_U32(dword_60CC6484, 120);
  *a4 = FIELD_U32(dword_60CC6484, 124);
  result = FIELD_U32(dword_60CC6484, 132);
  *a5 = result;
  return result;
}
