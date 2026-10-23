/* Icon_CIRCLE_GREEN_ref
 * address: 0x609262A4   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Icon_CIRCLE_GREEN_ref(_DWORD *a1)
{
  _DWORD v3[6]; // [sp+0h] [bp-18h] BYREF

  sub_60923B90(a1);
  a1[7] = off_60C5DABC;
  sub_609472C0(a1 + 8);
  *a1 = off_60C5DA1C;
  a1[7] = off_60C5DA48;
  a1[8] = off_60C5DA58;
  a1[17] = &off_60C5DA84;
  default_ref_9419C8(a1 + 18);
  a1[18] = &off_60C5D898;
  a1[22] = a1 + 24;
  a1[21] = &BufferedSafeStringBase_char_vtable_probably;
  a1[23] = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(a1 + 21));
  *(_BYTE *)a1[22] = 0;
  a1[21] = &off_60BD4C20;
  sub_609472C0(a1 + 32);
  a1[32] = &off_60C5DACC;
  a1[41] = 0;
  sub_60947BCC(a1 + 42);
  a1[42] = &off_60C5DAF8;
  a1[49] = 0;
  a1[50] = 0;
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "Icon=CIRCLE_GREEN";
  sub_60969510(a1 + 17, v3);
  return a1;
}
