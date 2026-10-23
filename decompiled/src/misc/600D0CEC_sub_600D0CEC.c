/* sub_600D0CEC
 * address: 0x600D0CEC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D0CEC(int a1, float *a2)
{
  float v4; // s16
  float v5; // s16

  v4 = *a2;
  FIELD_F32(a1, 120) = v4 / (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1);
  v5 = a2[1];
  FIELD_F32(a1, 124) = v5 / (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 772))(a1);
  FIELD_U8(a1, 6980) = 1;
  return 6980;
}
