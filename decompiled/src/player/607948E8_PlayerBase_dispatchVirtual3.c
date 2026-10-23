/* PlayerBase_dispatchVirtual3
 * address: 0x607948E8   size: 108   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerBase_dispatchVirtual3(int a1, int a2, float a3)
{
  float v6; // s18
  float v7; // s0

  v6 = (*(float (__fastcall **)(_DWORD, int, float))(**(_DWORD **)(a1 + 4) + 76))(FIELD_U32(a1, 4), a2, a3);
  v7 = (*(float (__fastcall **)(_DWORD, int, float))(**(_DWORD **)(a1 + 4) + 80))(FIELD_U32(a1, 4), a2, v6);
  return (*(int (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(a1 + 4) + 84))(
           FIELD_U32(a1, 4),
           a2,
           v6,
           v7,
           a3);
}
