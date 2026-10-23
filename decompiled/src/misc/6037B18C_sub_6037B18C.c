/* sub_6037B18C
 * address: 0x6037B18C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037B18C(int result)
{
  float v1; // s2
  float v2; // s2

  v1 = FIELD_F32(result, 108);
  if ( (float)(v1 + 128.0) <= FIELD_F32(dword_60CC6484, 24)
    || (float)(v1 + -128.0) >= FIELD_F32(dword_60CC6484, 32)
    || (v2 = FIELD_F32(result, 112), (float)(v2 + -160.0) >= FIELD_F32(dword_60CC6484, 36))
    || (float)(v2 + 128.0) <= FIELD_F32(dword_60CC6484, 28) )
  {
    FIELD_U8(result, 19) = 1;
  }
  return result;
}
