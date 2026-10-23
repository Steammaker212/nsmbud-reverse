/* sub_603FF1CC
 * address: 0x603FF1CC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FF1CC(int a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60C99E2C;
  if ( !dword_60C99E2C )
  {
    v2 = operator_new_8DE2C8(0xC8548u, a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60BF97F4;
    dword_60C99E28 = (int)v3;
    *(_DWORD *)v2 = off_60BF9804;
    sub_604CB794(v2 + 20);
    sub_6049FAC8(v2 + 615772);
    FIELD_U8(v2, 820548) = 0;
    dword_60C99E2C = v2;
  }
  return v2;
}
