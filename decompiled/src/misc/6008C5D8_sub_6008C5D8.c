/* sub_6008C5D8
 * address: 0x6008C5D8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008C5D8(int result)
{
  float v1; // s0

  if ( FIELD_U16(result, 6276) )
  {
    result += 144;
    *(_DWORD *)result = 1068708659;
    FIELD_U32(result, 4) = 1061997773;
    FIELD_U32(result, 8) = 1065353216;
  }
  else
  {
    FIELD_F32(result, 144) = FIELD_F32(result, 144) + FIELD_F32(result, 7628);
    v1 = FIELD_F32(result, 148) + FIELD_F32(result, 7632);
    FIELD_F32(result, 148) = v1;
    FIELD_F32(result, 152) = FIELD_F32(result, 152) + FIELD_F32(result, 7636);
    if ( v1 >= 1.2 )
      return (*(int (**)(void))(*(_DWORD *)result + 192))();
  }
  return result;
}
