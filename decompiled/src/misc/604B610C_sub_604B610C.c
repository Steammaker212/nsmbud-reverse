/* sub_604B610C
 * address: 0x604B610C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B610C(int a1)
{
  sub_604B78EC();
  *(_DWORD *)a1 = off_60BFE01C;
  FIELD_U32(a1, 3728) = &off_60BFE06C;
  FIELD_U32(a1, 3732) = &off_60BFE07C;
  FIELD_U32(a1, 3736) = &off_60BFE0A0;
  FIELD_U32(a1, 3740) = a1;
  FIELD_U32(a1, 3744) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 3748), (StateExecuter *)(a1 + 3732), (StateBase *)&dword_60CA1D38);
  FIELD_U32(a1, 3728) = &off_60BFE05C;
  FIELD_U32(a1, 3764) = 0;
  FIELD_U8(a1, 3768) = 0;
  FIELD_U16(a1, 3776) = 0;
  FIELD_U8(a1, 3778) = 0;
  FIELD_U32(a1, 3772) = 0;
  FIELD_U32(a1, 3780) = 5;
  FIELD_U32(a1, 3784) = 0;
  FIELD_U8(a1, 3788) = 0;
  FIELD_U8(a1, 3789) = 0;
  FIELD_U32(a1, 3792) = 0;
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  FIELD_U32(a1, 5816) = 0;
  FIELD_U32(a1, 5820) = 0;
  FIELD_U32(a1, 3764) = 0;
  return a1;
}
