/* SE_OBJ_CMN_TOUCH_THUNDER_ref
 * address: 0x6003454C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_TOUCH_THUNDER_ref(int a1, int a2, int a3)
{
  return (*(int (__fastcall **)(int, const char *, int, int, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 40))(
           Global_BasicSoundActor1,
           "SE_OBJ_CMN_TOUCH_THUNDER",
           a3,
           1,
           0);
}
