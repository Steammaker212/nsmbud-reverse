/* sub_606BC70C
 * address: 0x606BC70C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BC70C(int a1)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  FIELD_U8(a1, 298) |= 2u;
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6168));
  FIELD_U8(a1, 6388) = 1;
  return sub_60160948((_DWORD *)(a1 + 6168));
}
