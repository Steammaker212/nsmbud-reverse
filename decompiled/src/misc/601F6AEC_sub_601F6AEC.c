/* sub_601F6AEC
 * address: 0x601F6AEC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601F6AEC(int a1)
{
  float v2; // s0
  float v3; // s2
  float result; // s0

  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 328))(a1, FIELD_U32(a1, 624));
  v2 = FIELD_F32(a1, 576);
  v3 = FIELD_F32(a1, 632);
  if ( FIELD_U8(a1, 621) )
  {
    result = v2 - v3;
    FIELD_U32(a1, 192) = -1073741824;
    FIELD_U32(a1, 180) = -1073741824;
  }
  else
  {
    result = v2 + 350.0;
    FIELD_F32(a1, 80) = FIELD_F32(a1, 568) - v3;
  }
  FIELD_F32(a1, 88) = result;
  return result;
}
