/* sub_604288D0
 * address: 0x604288D0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604288D0(int a1)
{
  *(_DWORD *)a1 = off_60BFA458;
  sub_6043D148(a1 + 16);
  sub_60437A1C(a1 + 456);
  FIELD_U32(a1, 576) = 0;
  FIELD_U16(a1, 580) = 0;
  FIELD_U8(a1, 582) = 0;
  FIELD_U16(a1, 604) = 0;
  FIELD_U32(a1, 584) = 0;
  FIELD_U32(a1, 588) = 0;
  FIELD_U32(a1, 592) = 0;
  FIELD_U32(a1, 596) = 0;
  FIELD_U32(a1, 600) = 0;
  memset((void *)(a1 + 608), 0, 52);
  sub_60921340(a1 + 664);
  FIELD_U32(a1, 764) = 0;
  FIELD_U32(a1, 768) = 0;
  return a1;
}
