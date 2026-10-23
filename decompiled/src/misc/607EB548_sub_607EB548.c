/* sub_607EB548
 * address: 0x607EB548   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607EB548(int a1, _DWORD *a2)
{
  float v3; // r1
  int v4; // r2
  int v5; // r2
  int v6; // r0
  float v7; // [sp+0h] [bp-18h] BYREF
  int v8; // [sp+4h] [bp-14h]
  int v9; // [sp+8h] [bp-10h]

  if ( *a2 )
  {
    if ( *a2 == 2 )
    {
      FIELD_U8(a1, 64541) = 0;
      sub_605610BC(a1 + 568, 786432);
      sub_608EC968(a1, 62, 10, 62);
    }
  }
  else
  {
    FIELD_U8(a1, 64541) = 1;
    v3 = FIELD_F32(PlayerMgr_instance, 192);
    v4 = FIELD_U32(PlayerMgr_instance, 196);
    v9 = FIELD_U32(PlayerMgr_instance, 200);
    v7 = v3;
    v8 = v4;
    sub_60833074(&v7);
    v5 = v8;
    v6 = dword_60CC62E4 + 116;
    FIELD_F32(dword_60CC62E4, 116) = v7;
    FIELD_U32(v6, 4) = v5;
    FIELD_U32(v6, 8) = 0;
    sub_605612A0();
  }
}
