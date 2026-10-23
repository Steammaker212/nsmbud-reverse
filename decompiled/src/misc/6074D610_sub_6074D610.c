/* sub_6074D610
 * address: 0x6074D610   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074D610(int a1)
{
  int v1; // r4
  int result; // r0

  FIELD_U8(a1, 535) = 0;
  FIELD_U32(a1, 652) = 6300;
  v1 = sub_60232E78(dword_60C8D904);
  sub_6041838C((ModelAnimation *)v1);
  AnimationCtrl_setRepeat((ModelAnimation *)v1, 0);
  FIELD_U32(v1, 16) = 0;
  result = FIELD_U32(v1, 24) | 2;
  FIELD_U32(v1, 24) = result;
  FIELD_U32(v1, 20) = 0;
  return result;
}
