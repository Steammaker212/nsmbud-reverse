/* registerProfile_Iggy_room_0A4824
 * address: 0x600A4824   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_Iggy_room_0A4824()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABC8D4;
  Profile__ctor(&stru_60C82A4C, Actor_Iggy_room_build, 0x112u, &v1, 0, 0);
  *result = &off_60BC84D4;
  return result;
}
