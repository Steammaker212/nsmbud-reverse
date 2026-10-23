/* ParaGoomba__vf278
 * address: 0x60363794   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033CDAC
// 
// Overridden by: None
int __fastcall ParaGoomba__vf278(int a1)
{
  int result; // r0

  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6304));
  result = FIELD_U8(a1, 6843);
  if ( FIELD_U8(a1, 6843) )
    return DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6824));
  return result;
}
