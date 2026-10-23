/* sub_603E6D10
 * address: 0x603E6D10   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E6D10(int a1)
{
  unsigned int v1; // r0

  FIELD_U32(a1, 48) = 10;
  v1 = FIELD_U32(a1, 32);
  if ( v1 >= 4 )
    v1 = 0;
  return sub_6079E8F8(*(_DWORD *)(PlayerMgr_instance + 4 * v1 + 32));
}
