/* SE_EMY_CMN_TOUCH_DISAPPEAR_ref
 * address: 0x6013818C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_EMY_CMN_TOUCH_DISAPPEAR_ref(int a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r5

  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60C87964 & ~(1611891116 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C87964) )
  {
    dword_60C87960 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60C87964);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C87960) == 1 )
  {
    if ( FIELD_U8(v4, 6148) )
      (*(void (__fastcall **)(int, const char *, int, int, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 40))(
        Global_BasicSoundActor1,
        "SE_EMY_CMN_TOUCH_DISAPPEAR",
        a3,
        1,
        0);
  }
}
