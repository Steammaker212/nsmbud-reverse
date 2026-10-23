/* sub_600D3F2C
 * address: 0x600D3F2C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D3F2C(int a1)
{
  FIELD_U32(dword_60C99D88, 32) = 0;
  sub_6077A260(dword_60CBFA90);
  FIELD_U8(a1, 6135) = 0;
  FIELD_U32(PlayerMgr_instance, 140) = -1;
  FIELD_U8(a1, 6101) = 1;
  FIELD_U32(a1, 6124) = 1;
  FIELD_U32(a1, 6208) = 1;
  FIELD_U32(a1, 6212) = 1;
  FIELD_U32(a1, 6216) = 1;
  FIELD_U32(a1, 6220) = 1;
  FIELD_U8(dword_60C9CF0C, 1393) = 1;
  if ( FIELD_U8(a1, 6122) == 2 )
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C84304);
  FIELD_U8(a1, 6350) = 0;
  return 6350;
}
