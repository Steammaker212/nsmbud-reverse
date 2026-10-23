/* sub_60140558
 * address: 0x60140558   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60140558(int result)
{
  if ( FIELD_F32(result, 112) < (float)((float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108))
                                        + -32.0) )
    FIELD_U8(result, 19) = 1;
  return result;
}
