/* sub_603BFEDC
 * address: 0x603BFEDC   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BFEDC(int a1, int a2, int a3)
{
  int result; // r0

  result = Actor__getProfileId(*(Actor **)(a2 + 64));
  if ( result == 816 )
    return (*(int (__fastcall **)(int, const char *, int, int, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 40))(
             Global_BasicSoundActor1,
             "SE_EMY_CMN_TOUCH_HARD",
             a3,
             1,
             0);
  if ( result == 818 )
    return (*(int (__fastcall **)(int, const char *, int, _DWORD, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 40))(
             Global_BasicSoundActor1,
             "SE_EMY_BH_BOMB",
             a3,
             0,
             0);
  return result;
}
