/* sub_607DBF84
 * address: 0x607DBF84   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DBF84(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v8; // r0
  nn__hid__VibrationTarget *v9; // r5
  unsigned int v10; // r7
  unsigned int v11; // r1
  int v12; // r6
  int v13; // r8
  int v14; // r4
  unsigned int v16; // r1
  int v17; // r6
  int v18; // r5
  int v19; // r8
  int v20; // r4

  v8 = a3 + 2 * a2;
  if ( v8 >= 0x12 )
    v8 = 0;
  v9 = (nn__hid__VibrationTarget *)(a1 + 52 * v8 + 14088);
  if ( a5 )
    nn__hid__VibrationTarget__SetVibrationDeviceHandle(v9);
  else
    nn__hid__VibrationTarget__UnsetVibrationDeviceHandle(v9);
  v10 = 2 * a2;
  if ( (unsigned int)(a4 - 3) >= 2 )
  {
    v16 = 0;
    v17 = 0;
    v18 = a1 + 15024;
    v19 = a1 + 15888;
    if ( v10 < 0x12 )
      v16 = v10;
    v20 = a1 + 14088;
    nn__hid__VibrationNodeConnection__Connect(
      (nn__hid__VibrationNodeConnection *)(v19 + 36 * v16),
      (nn__hid__VibrationNode *)(v18 + 48 * v16),
      (nn__hid__VibrationNode *)(v20 + 52 * v16));
    if ( (v10 | 1) < 0x12 )
      v17 = v10 | 1;
    return nn__hid__VibrationNodeConnection__Connect(
             (nn__hid__VibrationNodeConnection *)(v19 + 36 * v17),
             (nn__hid__VibrationNode *)(v18 + 48 * v17),
             (nn__hid__VibrationNode *)(v20 + 52 * v17));
  }
  else
  {
    v11 = 0;
    v12 = 0;
    if ( v10 < 0x12 )
      v11 = v10;
    v13 = a1 + 15888;
    v14 = a1 + 15024;
    nn__hid__VibrationNodeConnection__Connect(
      (nn__hid__VibrationNodeConnection *)(v13 + 36 * v11),
      (nn__hid__VibrationNode *)(v14 + 48 * v11),
      v9);
    if ( (v10 | 1) < 0x12 )
      v12 = v10 | 1;
    return nn__hid__VibrationNodeConnection__Connect(
             (nn__hid__VibrationNodeConnection *)(v13 + 36 * v12),
             (nn__hid__VibrationNode *)(v14 + 48 * v12),
             v9);
  }
}
