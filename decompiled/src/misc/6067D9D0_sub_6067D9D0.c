/* sub_6067D9D0
 * address: 0x6067D9D0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067D9D0(int a1)
{
  int result; // r0

  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 328));
  result = FIELD_U8(a1, 334);
  if ( FIELD_U8(a1, 334) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
  return result;
}
