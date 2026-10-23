/* FlyingBlock__vf188
 * address: 0x60568B44   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BlockBase : 0x605632B0
// 
// Overridden by: None
int __fastcall FlyingBlock__vf188(int result)
{
  bool v1; // zf

  v1 = FIELD_U8(dword_60CC6D8C, 17) == 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v1 = FIELD_U32(result, 7304) == 0;
  if ( !v1 && FIELD_U32(result, 7300) == 3 )
  {
    if ( FIELD_U8(result, 539) )
      return EventMgr_set(EventMgr__instance, (unsigned __int8)(FIELD_U8(result, 539) - 1), 0, 1, 0, 0, 0, 0);
  }
  return result;
}
