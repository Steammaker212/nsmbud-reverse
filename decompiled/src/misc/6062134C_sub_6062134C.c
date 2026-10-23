/* sub_6062134C
 * address: 0x6062134C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062134C(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( FIELD_U32(a1, 6304) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 672))(a1);
  return 1;
}
