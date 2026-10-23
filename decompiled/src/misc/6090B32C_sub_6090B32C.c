/* sub_6090B32C
 * address: 0x6090B32C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090B32C(int a1)
{
  int (__fastcall *v1)(_DWORD); // r1

  v1 = *(int (__fastcall **)(_DWORD))(a1 + 16);
  if ( v1 )
    return v1(0);
  else
    return sub_609122C8(FIELD_U32(a1, 20));
}
