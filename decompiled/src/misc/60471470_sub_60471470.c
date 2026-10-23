/* sub_60471470
 * address: 0x60471470   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60471470(int a1)
{
  int v2; // r0

  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 6112) = v2 & 0xF;
  FIELD_U8(a1, 84) = (unsigned __int8)v2 >> 4;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  if ( (v2 & 0xF) == 4 )
  {
    FIELD_U32(a1, 144) = 1056964608;
    FIELD_U32(a1, 148) = 1056964608;
    FIELD_U32(a1, 152) = 1056964608;
  }
  ((void (__fastcall *)(int))loc_604714E4)(a1);
  sub_60471698(a1);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C9D8E0);
  return 1;
}
