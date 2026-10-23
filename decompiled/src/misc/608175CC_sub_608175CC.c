/* sub_608175CC
 * address: 0x608175CC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608175CC(int a1)
{
  bool v1; // zf
  int result; // r0
  int *v3; // r1

  result = FIELD_U32(a1, 20);
  if ( result == 17 )
  {
    result = SoundSystem_instance;
    v3 = (int *)(SoundSystem_instance + 76);
    v1 = SoundSystem_instance == -76;
    FIELD_U32(SoundSystem_instance, 180) = SoundSystem_instance + 76;
    if ( v3 )
    {
      FIELD_U32(result, 164) = 35;
      result = *v3;
      v1 = *v3 == 0;
    }
    if ( !v1 )
      return sub_608B032C(result, 1, 0.2);
  }
  return result;
}
