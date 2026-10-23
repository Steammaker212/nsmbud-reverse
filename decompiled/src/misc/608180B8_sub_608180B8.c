/* sub_608180B8
 * address: 0x608180B8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608180B8(int a1)
{
  unsigned int v2; // r0
  int result; // r0

  v2 = FIELD_U8(a1, 44);
  if ( v2 <= 3 )
  {
    sub_6080A3EC(SoundSystem_instance, 0, 0);
    FIELD_U8(SoundSystem_instance, 146) = 1;
    LOBYTE(v2) = FIELD_U8(a1, 44);
    if ( (v2 & 1) != 0 )
    {
      SE_SYS_HURRY_UP_ref_8164F8(a1, FIELD_U32(a1, 48));
      LOBYTE(v2) = FIELD_U8(a1, 44);
    }
  }
  result = v2 & 0xFD;
  FIELD_U8(a1, 44) = result;
  return result;
}
