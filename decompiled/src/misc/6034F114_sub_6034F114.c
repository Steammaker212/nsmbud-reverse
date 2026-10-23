/* sub_6034F114
 * address: 0x6034F114   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034F114(int result)
{
  FIELD_U32(result, 120) = dword_60AF20C0[FIELD_U32(result, 80)];
  if ( (FIELD_U8(result, 2872) & 1) != 0 )
    FIELD_U32(result, 124) = 0;
  return result;
}
