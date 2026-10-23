/* sub_6045BE8C
 * address: 0x6045BE8C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045BE8C(int a1, int a2)
{
  int result; // r0
  int v4; // r5

  FIELD_U32(a1, 24) = a2;
  result = SoundSystem_instance;
  if ( SoundSystem_instance )
  {
    v4 = 0;
    sub_60808984(SoundSystem_instance, 0, 0);
    sub_60808984(SoundSystem_instance, 1, 0);
    sub_60808984(SoundSystem_instance, 2, 0);
    result = sub_60808984(SoundSystem_instance, 3, 0);
    if ( a2 >= 1 )
    {
      do
        result = sub_60808984(SoundSystem_instance, v4++, 1);
      while ( a2 != v4 );
    }
  }
  return result;
}
