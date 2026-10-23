/* sub_606C9510
 * address: 0x606C9510   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C9510(unsigned int *a1)
{
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1[9] + 6112));
  (*(void (__fastcall **)(unsigned int, int *))(*(_DWORD *)a1[9] + 192))(a1[9], &dword_60CBACC0);
  sub_6000C0F4(a1);
  return 1;
}
