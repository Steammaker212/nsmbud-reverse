/* sub_60514994
 * address: 0x60514994   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60514994(int a1)
{
  int v2; // r0
  int v3; // r1

  sub_60502548(a1 + 3596);
  FIELD_U16(a1, 4648) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3636));
  v2 = FIELD_U32(a1, 4624);
  if ( v2 == FIELD_U32(a1, 12892) )
  {
    FIELD_U8(a1, 14972) = 1;
    goto LABEL_15;
  }
  if ( v2 == FIELD_U32(a1, 12896) )
  {
    v3 = 1;
LABEL_14:
    FIELD_U32(a1, 14980) = v3;
    goto LABEL_15;
  }
  if ( v2 == FIELD_U32(a1, 12900) || v2 == FIELD_U32(a1, 12912) )
  {
    v3 = 2;
    goto LABEL_14;
  }
  if ( v2 == FIELD_U32(a1, 12904) || v2 == FIELD_U32(a1, 12916) )
  {
    v3 = 3;
    goto LABEL_14;
  }
  if ( v2 == FIELD_U32(a1, 12908) || v2 == FIELD_U32(a1, 12920) )
  {
    v3 = 4;
    goto LABEL_14;
  }
LABEL_15:
  FIELD_U32(a1, 14968) = 3;
  FIELD_U8(a1, 14973) = 0;
  return 14973;
}
