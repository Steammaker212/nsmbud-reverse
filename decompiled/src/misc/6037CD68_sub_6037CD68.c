/* sub_6037CD68
 * address: 0x6037CD68   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037CD68(int a1, ActorBuildInfo *a2)
{
  sub_60296B54(a1, a2);
  *(_DWORD *)a1 = off_60BF2060;
  memset((void *)(a1 + 7508), 0, 37);
  FIELD_U8(a1, 7556) = 0;
  FIELD_U32(a1, 7548) = 0;
  FIELD_U32(a1, 7552) = 0;
  return a1;
}
