/* nn_atk_FsSoundArchive_ctor
 * address: 0x6099BB78   size: 88   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn_atk_FsSoundArchive_ctor(int a1)
{
  nn_atk_SoundArchive_ctor(a1);
  *(_DWORD *)a1 = off_60C60BA0;
  sub_608B2118(a1 + 656);
  sub_608CF768(a1 + 720);
  FIELD_U8(a1, 784) = 0;
  FIELD_U8(a1, 785) = 0;
  FIELD_U32(a1, 788) = 0;
  nn__os__InitializeMutex(a1 + 1432, 1, 0);
  return a1;
}
