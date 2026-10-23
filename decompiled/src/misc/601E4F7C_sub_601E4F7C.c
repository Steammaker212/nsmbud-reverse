/* sub_601E4F7C
 * address: 0x601E4F7C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E4F7C(int a1, int a2)
{
  const char *v2; // r1

  v2 = sub_601E3508(a1, a2);
  if ( v2 )
    return sub_60808E60(SoundSystem_instance, v2) ^ 1;
  else
    return 0;
}
