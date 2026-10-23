/* sub_607BB6F0
 * address: 0x607BB6F0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BB6F0(int a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)(a1 + 11400);
  if ( FIELD_S32(a1, 11400) > 9 )
    goto LABEL_5;
  if ( !sub_607B6D60(a1) )
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11360) + 160))(FIELD_U32(a1, 11360));
  if ( *v2 )
  {
LABEL_5:
    *v2 = 0;
    FIELD_U32(a1, 1220) &= ~0x20u;
    sub_6078A8C0(PlayerMgr_instance);
  }
  FIELD_U32(a1, 14868) = 0;
  return 14868;
}
