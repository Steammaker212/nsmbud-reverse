/* sub_6074FB10
 * address: 0x6074FB10   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074FB10(int a1)
{
  int v2; // r1
  int v3; // r0
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  if ( !FIELD_U8(a1, 4288) )
  {
    sub_60479910(a1 + 728, dword_60C7B3E4);
    v2 = FIELD_U32(a1, 736);
    v3 = **(_DWORD **)(a1 + 648);
    v5[0] = &sead__SafeStringBase__vtable;
    v5[1] = "dummy";
    sub_604364F8(v3, v5, v2 + 296);
  }
  sub_607949E8(FIELD_U32(a1, 644));
  if ( FIELD_U32(a1, 700) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 648));
  return 1;
}
