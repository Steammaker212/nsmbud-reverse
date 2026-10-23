/* sub_608075F8
 * address: 0x608075F8   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608075F8(int a1)
{
  *(_DWORD *)a1 = &off_60C28170;
  FIELD_U8(a1, 4) = 0;
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 96));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 132));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 168));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 204));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 240));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 276));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 312));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 348));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 384));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 420));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 456));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 492));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 528));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 564));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 600));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 636));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 672));
  nn__hid__VibrationNodeConnection__ctor((nn__hid__VibrationNodeConnection *)(a1 + 708));
  sub_6080E5F4(a1 + 744);
  sub_6080E680(a1 + 800);
  FIELD_U32(a1, 840) = 0;
  FIELD_U32(a1, 844) = 0;
  FIELD_U32(a1, 852) = 0;
  FIELD_U32(a1, 856) = 0;
  return (_DWORD *)a1;
}
