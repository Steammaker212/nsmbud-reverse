/* sub_6080A45C
 * address: 0x6080A45C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A45C(int a1)
{
  int v1; // r0

  v1 = FIELD_U32(a1, 76);
  if ( v1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 20))(v1) ^ 1;
  else
    return 0;
}
