/* sub_6090B310
 * address: 0x6090B310   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090B310(int a1)
{
  int (__fastcall *v1)(int); // r1

  v1 = *(int (__fastcall **)(int))(a1 + 16);
  if ( v1 )
    return v1(1);
  else
    return sub_609122C0(FIELD_U32(a1, 20));
}
