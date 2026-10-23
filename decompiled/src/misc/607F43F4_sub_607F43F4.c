/* sub_607F43F4
 * address: 0x607F43F4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F43F4(int a1, int a2)
{
  *(_DWORD *)a1 = &off_60C275F0;
  FIELD_U32(a1, 4) = &off_60C27634;
  FIELD_U32(a1, 8) = &off_60C27644;
  FIELD_U32(a1, 12) = &off_60C27668;
  FIELD_U32(a1, 16) = a1;
  FIELD_U32(a1, 20) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 24), (StateExecuter *)(a1 + 8), (StateBase *)&dword_60CC6140);
  FIELD_U32(a1, 4) = &off_60C27624;
  FIELD_U32(a1, 40) = a2;
  FIELD_U32(a1, 44) = 0;
  FIELD_U8(a1, 48) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 56) = 0;
  return a1;
}
