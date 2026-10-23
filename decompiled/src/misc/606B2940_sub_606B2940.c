/* sub_606B2940
 * address: 0x606B2940   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B2940(int a1)
{
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 168) = 0;
  FIELD_U32(a1, 172) = 0;
  FIELD_U8(a1, 38) = 0;
  FIELD_U16(a1, 36) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U16(a1, 64) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 176) = &off_60C1ADF0;
  FIELD_U32(a1, 180) = &off_60C1AE00;
  FIELD_U32(a1, 184) = &off_60C1AE24;
  FIELD_U32(a1, 188) = a1;
  FIELD_U32(a1, 192) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 196), (StateExecuter *)(a1 + 180), &NullState);
  FIELD_U32(a1, 176) = &off_60C1ADE0;
  return a1;
}
