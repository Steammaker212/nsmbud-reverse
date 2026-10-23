/* sub_60173348
 * address: 0x60173348   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60173348(int a1)
{
  int result; // r0
  int v3; // s2
  double v4; // d0
  int v5; // s2

  result = FIELD_U32(a1, 60);
  if ( result == 2 )
  {
    FIELD_F64(a1, 100) = ((double (__fastcall *)(int, int))*(_DWORD *)(*(_DWORD *)a1 + 72))(a1, a1 + 100);
    FIELD_U32(a1, 108) = v3;
    v4 = ((double (__fastcall *)(int, int))*(_DWORD *)(*(_DWORD *)a1 + 72))(a1, a1 + 76);
    FIELD_F64(a1, 76) = v4;
    FIELD_U32(a1, 84) = v5;
    return a1 + 76;
  }
  return result;
}
