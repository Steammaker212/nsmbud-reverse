/* nn_atk_MemorySoundArchive_ctor
 * address: 0x608A8348   size: 52   group: sdklib
 * sym: # nn_atk_MemorySoundArchive_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall nn_atk_MemorySoundArchive_ctor(_DWORD *a1)
{
  nn_atk_SoundArchive_ctor((int)a1);
  *a1 = off_60C5ACFC;
  a1[164] = 0;
  sub_608B2118(a1 + 165);
  return a1;
}
