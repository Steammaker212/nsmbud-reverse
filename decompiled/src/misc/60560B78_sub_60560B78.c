/* sub_60560B78
 * address: 0x60560B78   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60560B78(int a1)
{
  *(_DWORD *)a1 = off_60C010A4;
  FIELD_U32(a1, 4) = &off_60C010E8;
  FIELD_U32(a1, 8) = &off_60C010F8;
  FIELD_U32(a1, 12) = &off_60C0111C;
  FIELD_U32(a1, 16) = a1;
  FIELD_U32(a1, 20) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 24), (StateExecuter *)(a1 + 8), (StateBase *)&dword_60CAE180);
  FIELD_U32(a1, 4) = &off_60C010D8;
  FIELD_U32(a1, 40) = 9;
  FIELD_U32(a1, 56) = 0;
  FIELD_U8(a1, 54) = 0;
  FIELD_U16(a1, 52) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 60) = off_60C010B4;
  FIELD_U32(a1, 64) = 0;
  FIELD_U32(a1, 68) = 9;
  FIELD_U32(a1, 72) = 8;
  sub_6056143C(a1 + 76);
  FIELD_U32(a1, 32008) = 0;
  FIELD_U8(a1, 32012) = 0;
  FIELD_U8(a1, 32013) = 1;
  FIELD_U32(a1, 32016) = off_60C010B4;
  FIELD_U32(a1, 32020) = 0;
  FIELD_U32(a1, 32024) = 9;
  FIELD_U32(a1, 32028) = 8;
  sub_6056143C(a1 + 32032);
  FIELD_U32(a1, 63964) = 0;
  FIELD_U16(a1, 63968) = 256;
  return a1;
}
