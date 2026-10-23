/* SE_EMY_PENGUIN_DAMAGE_ref
 * address: 0x60367600   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_PENGUIN_DAMAGE_ref(int a1, int a2, int a3)
{
  if ( FIELD_U8(a1, 4) )
    return (*(int (__fastcall **)(int, const char *, int, int, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 40))(
             Global_BasicSoundActor1,
             "SE_EMY_PENGUIN_DAMAGE",
             a3,
             1,
             0);
  else
    return sub_6015BD44(a1, a2, a3);
}
