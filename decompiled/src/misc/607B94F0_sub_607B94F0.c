/* sub_607B94F0
 * address: 0x607B94F0   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B94F0(int a1)
{
  _DWORD *v2; // r6
  int v3; // r0
  int v4; // r1
  int v5; // r0

  v2 = (_DWORD *)(a1 + 688);
  sub_607865BC(a1 + 688, 4);
  if ( FIELD_U32(a1, 1320) == 4 )
    sub_6078667C(v2, 4);
  FIELD_U32(a1, 1220) &= ~0x2000000u;
  if ( ((int (__fastcall *)(int))loc_607604BC)(a1) != 1 )
    return 0;
  v3 = sub_607869D0((int)v2);
  v4 = FIELD_U32(a1, 1220);
  if ( !v3 )
  {
    v4 |= 0x2000000u;
    FIELD_U32(a1, 1220) = v4;
  }
  if ( (v4 & 0x2000000) != 0 && (FIELD_U32(a1, 12088) || FIELD_U32(a1, 12092)) )
    return 0;
  if ( FIELD_U32(a1, 12084) )
    return 0;
  v5 = FIELD_U32(a1, 6900);
  if ( (v5 & 0x40000) != 0 || (FIELD_U8(a1, 1225) & 4) == 0 )
    return 0;
  FIELD_U32(a1, 1220) = v4 & 0xFF7FFFFF;
  if ( (v5 & 1) != 0 && !sub_600005D4((StageActor *)a1, 0) )
  {
    FIELD_U32(a1, 1220) |= 0x800000u;
    ((void (__fastcall *)(int, float))loc_6079F3F0)(a1, 0.0);
    sub_6079E3A8(a1);
  }
  FIELD_U32(a1, 1220) |= 0x400000u;
  return 1;
}
