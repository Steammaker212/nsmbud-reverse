/* sub_608E5CA8
 * address: 0x608E5CA8   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E5CA8(int a1)
{
  int v1; // r0

  v1 = FIELD_U32(a1, 80);
  if ( v1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 32))(v1);
  else
    return 0;
}
