/* sub_60454CDC
 * address: 0x60454CDC   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60454CDC(int a1, float *a2)
{
  int result; // r0
  float v4; // s2
  _DWORD v5[16]; // [sp+0h] [bp-40h] BYREF

  void_nn__hid__GetTouchScreenState(v5);
  if ( v5[2] < 1 )
    return 0;
  result = 1;
  if ( a2 )
  {
    v4 = (float)((float)v5[9] / 720.0) * 720.0;
    *a2 = (float)((float)v5[8] / 1280.0) * 1280.0;
    a2[1] = v4;
  }
  return result;
}
