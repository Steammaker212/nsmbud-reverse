/* SE_EMY_TOUCH_BH_HIBANA_ref
 * address: 0x60259FB8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_TOUCH_BH_HIBANA_ref(int result, int a2, int a3)
{
  int v3; // r3

  v3 = FIELD_U32(result, 4);
  if ( v3 == 2 )
    return (*(int (__fastcall **)(int, const char *, int, _DWORD, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 40))(
             Global_BasicSoundActor2,
             "SE_EMY_TOUCH_BH_HIBANA",
             a3,
             0,
             0);
  if ( v3 == 1 )
    return sub_6015BD44(result, a2, a3);
  return result;
}
