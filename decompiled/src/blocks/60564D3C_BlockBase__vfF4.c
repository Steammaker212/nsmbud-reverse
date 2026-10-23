/* BlockBase__vfF4
 * address: 0x60564D3C   size: 28   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BlockCoinBase : 0x605774C8
// 
// Overridden by: None
int __fastcall BlockBase__vfF4(int a1)
{
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    return sub_60564BFC(a1);
  return a1;
}
