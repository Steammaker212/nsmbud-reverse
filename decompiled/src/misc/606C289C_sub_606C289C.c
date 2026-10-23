/* sub_606C289C
 * address: 0x606C289C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C289C(int a1)
{
  SE_SYS_COMPLETE_MESSAGE_YELLOW_ref(PlayerMgr_instance, FIELD_U32(PlayerMgr_instance, 208) == 0);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBAA28);
}
