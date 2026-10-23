/* sub_600CE6A4
 * address: 0x600CE6A4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CE6A4(int a1)
{
  float v2; // s2
  float v4[14]; // [sp+0h] [bp-38h] BYREF

  (*(void (__fastcall **)(_DWORD, int, float *))(***(_DWORD ***)(a1 + 7100) + 108))(**(_DWORD **)(a1 + 7100), 11, v4);
  v2 = v4[7] - FIELD_F32(a1, 112);
  FIELD_F32(a1, 304) = v4[3] - FIELD_F32(a1, 108);
  FIELD_F32(a1, 308) = v2;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1048))(a1);
}
