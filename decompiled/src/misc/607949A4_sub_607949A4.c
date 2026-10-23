/* sub_607949A4
 * address: 0x607949A4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607949A4(int a1, int a2)
{
  float v4; // s0

  v4 = (*(float (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 76))(FIELD_U32(a1, 4), a2);
  return (*(int (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(a1 + 4) + 88))(
           FIELD_U32(a1, 4),
           a2,
           v4,
           0.0,
           0.0);
}
