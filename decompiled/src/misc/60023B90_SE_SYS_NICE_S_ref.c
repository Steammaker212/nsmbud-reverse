/* SE_SYS_NICE_S_ref
 * address: 0x60023B90   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __cdecl SE_SYS_NICE_S_ref()
{
  int result; // r0
  bool v1; // zf
  int v2; // r0
  int v3; // r2
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  if ( !dword_60C99DD4 )
    goto LABEL_5;
  result = FIELD_U32(dword_60C99DD4, 764);
  v1 = result == 2;
  if ( result != 2 )
    v1 = result == 4;
  if ( !v1 )
  {
LABEL_5:
    if ( dword_60CC6484 )
    {
      result = sub_60808E60(SoundSystem_instance, "SE_SYS_NICE_S");
      if ( result )
        return result;
      v2 = FIELD_U32(dword_60CC6484, 128);
      v4[0] = FIELD_U32(dword_60CC6484, 116);
      v4[1] = v2;
      (*(void (__fastcall **)(int, const char *, _DWORD *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_NICE_S",
        v4,
        0);
    }
    if ( dword_60C8D904 )
      sub_60233444(dword_60C8D904, 0);
    v3 = dword_60C99DD4 + 272;
    if ( !dword_60C99DD4 )
      v3 = dword_60C99DEC + 16;
    return sub_603FFCE4(v3 + 580);
  }
  return result;
}
