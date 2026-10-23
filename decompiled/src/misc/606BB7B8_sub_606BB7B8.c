/* sub_606BB7B8
 * address: 0x606BB7B8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BB7B8(int a1)
{
  *(_DWORD *)a1 = &off_60C1B588;
  FIELD_U32(a1, 4) = &off_60C1B598;
  FIELD_U32(a1, 8) = &off_60C1B5BC;
  FIELD_U32(a1, 12) = a1;
  FIELD_U32(a1, 16) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 20), (StateExecuter *)(a1 + 4), &NullState);
  *(_DWORD *)a1 = &off_60C1B578;
  FIELD_U16(a1, 92) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 64) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 52) = 0;
  return a1;
}
