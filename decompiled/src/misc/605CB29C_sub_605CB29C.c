/* sub_605CB29C
 * address: 0x605CB29C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CB29C(int result)
{
  int v1; // r1

  v1 = 0;
  if ( (FIELD_U8(result, 2872) & 1) != 0 )
    v1 = (int)(float)(FIELD_F32(result, 120) * (float)(2147500000.0 / (float)(*(float *)&dword_60CB0E90 * 3.1416)));
  FIELD_U32(result, 160) -= v1;
  return result;
}
