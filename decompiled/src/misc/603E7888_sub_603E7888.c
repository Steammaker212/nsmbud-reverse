/* sub_603E7888
 * address: 0x603E7888   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E7888(int a1)
{
  unsigned int v2; // r0

  sub_6077A44C(dword_60CBFA90);
  StateMgr__changeState((StateMgr *)(a1 + 172), (StateBase *)&dword_60C996F4);
  v2 = FIELD_U32(a1, 32);
  if ( v2 >= 4 )
    v2 = 0;
  return sub_60786CF8(*(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32) + 688, 1);
}
