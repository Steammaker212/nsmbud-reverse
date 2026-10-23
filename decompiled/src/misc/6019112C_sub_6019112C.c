/* sub_6019112C
 * address: 0x6019112C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019112C(int a1)
{
  if ( FIELD_U32(a1, 1296) )
    return *(_DWORD *)(*((_DWORD *)&unk_60BD5514 + 2 * FIELD_U32(a1, 1296) + 1) + 8 * FIELD_U32(a1, 1376));
  else
    return 0;
}
