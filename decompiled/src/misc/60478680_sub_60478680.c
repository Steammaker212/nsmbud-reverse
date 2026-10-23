/* sub_60478680
 * address: 0x60478680   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60478680(int a1, int a2)
{
  char v3; // r5
  int result; // r0

  v3 = a2;
  result = dword_60CC6D78;
  if ( dword_60CC6D78 )
  {
    if ( (unsigned __int8)a2 == 15 )
      return sub_60807FC0(SoundSystem_instance, a1, 0, 1048577);
    result = FIELD_U8(dword_60CC6D78, 20);
    if ( FIELD_U8(dword_60CC6D78, 20) )
    {
      if ( !a2 )
        return result;
      return sub_60807EF0(SoundSystem_instance, a1, 0, 1);
    }
    if ( (a2 & 4) != 0 )
      result = sub_60807EF0(SoundSystem_instance, a1, 0, 1);
    if ( (v3 & 8) != 0 )
      return sub_60807EF0(SoundSystem_instance, a1, 0, 1);
  }
  return result;
}
