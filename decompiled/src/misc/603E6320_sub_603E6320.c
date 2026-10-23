/* sub_603E6320
 * address: 0x603E6320   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E6320(int a1)
{
  sub_603E4258((sead_IDisposer *)a1);
  *(_DWORD *)a1 = &off_60BF8EBC;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 56) = &off_60BF8F10;
  FIELD_U32(a1, 60) = &off_60BF8F20;
  FIELD_U32(a1, 64) = &off_60BF8F44;
  FIELD_U32(a1, 68) = a1;
  FIELD_U32(a1, 72) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 76), (StateExecuter *)(a1 + 60), (StateBase *)&dword_60C99600);
  FIELD_U32(a1, 56) = &off_60BF8F00;
  return a1;
}
