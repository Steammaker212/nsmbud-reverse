/* sub_6052BBBC
 * address: 0x6052BBBC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052BBBC(int a1)
{
  int result; // r0
  int i; // r5

  result = FIELD_U8(a1, 56);
  if ( result )
  {
    for ( i = 0; i != 2880; i += 48 )
    {
      if ( *(_BYTE *)(a1 + i + 60) )
        DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + i + 64));
    }
    if ( FIELD_U8(a1, 2940) )
      DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 2944));
    if ( FIELD_U8(a1, 2988) )
      DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 2992));
    result = FIELD_U8(a1, 3036);
    if ( FIELD_U8(a1, 3036) )
      return DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 3040));
  }
  return result;
}
