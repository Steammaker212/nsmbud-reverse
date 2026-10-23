/* sub_6039EEA4
 * address: 0x6039EEA4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039EEA4(int result, int a2, int a3)
{
  int v3; // r3

  v3 = FIELD_U32(result, 4);
  switch ( v3 )
  {
    case 1:
      return sub_6015BD44(result, a2, a3);
    case 3:
      return (*(int (__fastcall **)(int, const char *, int, int, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 40))(
               Global_BasicSoundActor1,
               "SE_EMY_CMN_TOUCH_DISAPPEAR",
               a3,
               1,
               0);
    case 2:
      return (*(int (__fastcall **)(int, const char *, int, int, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 40))(
               Global_BasicSoundActor1,
               "SE_EMY_CMN_TOUCH_POCON",
               a3,
               1,
               0);
  }
  return result;
}
