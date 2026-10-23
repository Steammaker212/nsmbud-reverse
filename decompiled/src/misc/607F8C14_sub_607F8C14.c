/* sub_607F8C14
 * address: 0x607F8C14   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_607F8C14()
{
  nn__hid *v0; // r0
  int result; // r0

  FIELD_U8(dword_60C9CFB8, 83) = 0;
  v0 = (nn__hid *)dword_60CC6BE4;
  FIELD_U8(dword_60CC6BE4, 221) = 0;
  *((_BYTE *)v0 + 223) = 0;
  nn__hid__StartLrAssignmentMode(v0);
  sub_604574C8(dword_60C9CF18, 0, 1);
  result = SoundSystem_instance;
  if ( SoundSystem_instance )
  {
    sub_60808984(SoundSystem_instance, 0, 1);
    sub_60808984(SoundSystem_instance, 1, 0);
    sub_60808984(SoundSystem_instance, 2, 0);
    return sub_60808984(SoundSystem_instance, 3, 0);
  }
  return result;
}
