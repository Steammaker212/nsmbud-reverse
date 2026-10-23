/* nn_atk_detail_driver_SoundThread_ref
 * address: 0x608C3E20   size: 112   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn_atk_detail_driver_SoundThread_ref(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0
  _DWORD v11[16]; // [sp+0h] [bp-40h] BYREF

  FIELD_U32(a1, 556) = a6;
  sub_608D0780(v11);
  v11[0] = "nn__atk__detail__driver__SoundThread";
  v11[1] = a3;
  v11[2] = a4;
  v11[3] = a5;
  v11[4] = a6;
  v11[5] = a2;
  v11[6] = 0;
  v11[7] = a1;
  result = sub_608D07BC(a1 + 8, v11);
  FIELD_U8(a1, 560) = result;
  return result;
}
