/* nn_atk_SoundArchive_ctor
 * address: 0x608A9954   size: 36   group: sdklib
 * sym: # nn_atk_SoundArchive_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn_atk_SoundArchive_ctor(int result)
{
  *(_DWORD *)result = &nn_atk_SoundArchive_vtable;
  FIELD_U32(result, 4) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U16(result, 12) = 47;
  return result;
}
