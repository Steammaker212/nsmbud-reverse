/* sub_607C877C
 * address: 0x607C877C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C877C(int a1, int a2, int a3, float a4)
{
  float v7; // s0

  v7 = (*(float (__fastcall **)(_DWORD, int, float))(**(_DWORD **)(a1 + 11360) + 76))(FIELD_U32(a1, 11360), a2, a4)
     * a4;
  return sub_607C40E8(a1, a2, a3, v7);
}
