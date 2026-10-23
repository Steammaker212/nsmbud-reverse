/* SE_PLY_HIT_BROS_FLR_BOUND_ref
 * address: 0x605A72A8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_HIT_BROS_FLR_BOUND_ref(int a1, int a2, float *a3)
{
  float v3; // r1
  _DWORD v5[4]; // [sp+8h] [bp-10h] BYREF

  v3 = *a3;
  *(float *)&v5[1] = a3[1];
  v5[0] = AreaTask_getWrappedXPos(AreaTask_intance, v3);
  return (*(int (__fastcall **)(int, const char *, _DWORD *, int, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 40))(
           Global_BasicSoundActor2,
           "SE_PLY_HIT_BROS_FLR_BOUND",
           v5,
           1,
           0);
}
