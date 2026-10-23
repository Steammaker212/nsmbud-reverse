/* SE_SYS_GAME_START_ref
 * address: 0x6040BA7C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int SE_SYS_GAME_START_ref()
{
  int result; // r0

  if ( FIELD_U8(dword_60C9CFB8, 84) )
    sub_60807FC0(SoundSystem_instance, "SE_SYS_GAME_START", 0, 1048577);
  else
    sub_60807EF0(SoundSystem_instance, "SE_SYS_GAME_START_SECRET", 0, 1);
  result = FIELD_U32(dword_60C99DD4, 260);
  if ( result )
    FIELD_U8(result, 4042) = 1;
  return result;
}
