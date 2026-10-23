/* sub_608DF3CC
 * address: 0x608DF3CC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DF3CC(int a1, int a2, int a3)
{
  sub_60908C2C();
  *(_DWORD *)a1 = off_60C5BDCC;
  FIELD_U32(a1, 348) = a3;
  FIELD_U8(a1, 353) = 5;
  FIELD_U32(a1, 360) = 0;
  FIELD_U32(a1, 364) = 0;
  FIELD_U32(a1, 308) = 15;
  FIELD_U8(a1, 352) = 16;
  sub_6090905C(a1, 0, 0, &dword_60B3B944);
  return a1;
}
