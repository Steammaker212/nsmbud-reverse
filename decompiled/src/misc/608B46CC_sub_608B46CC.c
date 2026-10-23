/* sub_608B46CC
 * address: 0x608B46CC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B46CC(int result)
{
  int v1; // r2

  if ( FIELD_S32(result, 4) >= 1 )
  {
    v1 = 0;
    do
      *(_BYTE *)(*(_DWORD *)result + v1++) = 0;
    while ( v1 < FIELD_U32(result, 4) );
  }
  FIELD_U8(result, 8) = 0;
  FIELD_U32(result, 12) = 1065353216;
  return result;
}
