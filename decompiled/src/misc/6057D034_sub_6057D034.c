/* sub_6057D034
 * address: 0x6057D034   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057D034(int a1)
{
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 7348));
  if ( !FIELD_U8(a1, 7548) )
  {
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 7484));
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 7488));
  }
  return 1;
}
