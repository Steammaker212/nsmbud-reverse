/* sub_602452CC
 * address: 0x602452CC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602452CC(int a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  unsigned int v4; // r0

  v2 = (_DWORD *)(a1 + 6320);
  if ( FIELD_U32(a1, 6320) == 1 )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6308));
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6300));
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6304));
  LightMask__draw((RevealMaskRelated *)(a1 + 6436));
  if ( FIELD_U8(a1, 6423) && !*v2 )
  {
    v3 = 0;
    v4 = FIELD_U8(a1, 6314);
    if ( v4 < 4 )
      v3 = (char)v4;
    if ( *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32) )
      sub_607982E0();
  }
  return 1;
}
