/* sub_60815F1C
 * address: 0x60815F1C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60815F1C(int a1)
{
  unsigned int v1; // r1
  int result; // r0

  v1 = FIELD_U8(a1, 44);
  result = 1;
  if ( v1 >= 2 )
    return sub_6080A45C(SoundSystem_instance) ^ 1;
  return result;
}
