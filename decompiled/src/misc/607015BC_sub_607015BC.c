/* sub_607015BC
 * address: 0x607015BC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607015BC(int a1)
{
  if ( !((int (*)(void))loc_606F5CB4)() && !sub_601536B0((int)ColliderMgr_instance, a1 + 6888) )
  {
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6888));
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
  }
  return ef_waterpillar_ref(a1);
}
