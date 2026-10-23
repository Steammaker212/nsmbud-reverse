/* sub_607FCA88
 * address: 0x607FCA88   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FCA88(int a1)
{
  int v1; // r0

  v1 = FIELD_U32(a1, 184);
  if ( v1 )
    return *(_DWORD *)sub_60804418(v1);
  else
    return 0;
}
