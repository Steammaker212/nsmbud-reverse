/* sub_6029D94C
 * address: 0x6029D94C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029D94C(int result)
{
  int v1; // r1
  int v2; // r1
  __int16 v3; // r1

  v1 = FIELD_U32(result, 6300);
  FIELD_U32(result, 6764) = *(_DWORD *)(**(_DWORD **)(v1 + 36) + 20);
  v2 = **(_DWORD **)(v1 + 36);
  FIELD_U32(v2, 20) = 0x40000000;
  FIELD_U32(v2, 28) |= 2u;
  v3 = 25;
  if ( FIELD_F32(result, 124) > 0.0 )
    v3 = 30;
  FIELD_U16(result, 6276) = v3;
  return result;
}
