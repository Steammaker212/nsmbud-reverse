/* sub_600364B0
 * address: 0x600364B0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600364B0(int a1)
{
  (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 7624) + 192))(FIELD_U32(a1, 7624), &unk_60C80354);
  sub_60038B10(a1);
  return PlayerLookTargetList_add(PlayerLookTargetList_instance, a1 + 6644);
}
