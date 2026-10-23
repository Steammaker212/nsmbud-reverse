/* BoomerangBro_vf180
 * address: 0x60262618   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BoomerangBro_vf180(int result)
{
  int v1; // r1

  v1 = FIELD_U8(result, 6604);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    FIELD_F32(result, 120) = flt_60AF1F80[v1];
  }
  else
  {
    FIELD_F32(result, 120) = flt_60AF1F80[v1];
    FIELD_U32(result, 124) = 0;
    FIELD_U32(result, 128) = 0;
  }
  return result;
}
