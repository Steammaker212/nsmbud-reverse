/* SE_SYS_CHANGE_COLOR_O_ref
 * address: 0x604A662C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CHANGE_COLOR_O_ref(int a1)
{
  int result; // r0
  int v3; // r5
  const char *v4; // r1

  v3 = a1 + 20496;
  result = FIELD_U32(a1, 20496);
  if ( FIELD_S32(v3, 52) < 1 )
  {
    if ( FIELD_U8(v3, 56) )
    {
      if ( result != 2 )
        return result;
      *(_DWORD *)v3 = 3;
      v4 = "SE_SYS_CHANGE_COLOR_ON";
    }
    else
    {
      if ( result != 3 )
        return result;
      *(_DWORD *)v3 = 2;
      v4 = "SE_SYS_CHANGE_COLOR_OFF";
    }
  }
  else if ( FIELD_U8(v3, 56) )
  {
    if ( result != 3 )
      return result;
    *(_DWORD *)v3 = 2;
    v4 = "SE_SYS_CHANGE_COLOR_OFF";
  }
  else
  {
    if ( result != 2 )
      return result;
    *(_DWORD *)v3 = 3;
    v4 = "SE_SYS_CHANGE_COLOR_ON";
  }
  sub_60807FC0(SoundSystem_instance, v4, 0, 1048577);
  return PaCharacterSelector_Zanki_00_ref_2(a1, FIELD_U32(a1, 20492), *(_DWORD *)v3);
}
