/* SE_SYS_CMN_TOUCH_ref
 * address: 0x60278648   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CMN_TOUCH_ref(int a1, int a2, int a3)
{
  (*(void (__fastcall **)(int, const char *, int, int, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 40))(
    Global_BasicSoundActor1,
    "SE_SYS_CMN_TOUCH",
    a3,
    1,
    0);
  sub_60278058(FIELD_U32(a2, 64));
  return 1;
}
