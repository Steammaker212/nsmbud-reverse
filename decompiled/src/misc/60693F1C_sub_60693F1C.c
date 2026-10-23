/* sub_60693F1C
 * address: 0x60693F1C   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60693F1C(int a1, int a2, int a3)
{
  int v4; // r6
  int v5; // r7
  int v6; // r0
  _DWORD v8[10]; // [sp+0h] [bp-28h] BYREF

  FIELD_F32(a1, 1232) = (float)(unsigned int)(16 * a3 + 40);
  block_zen_rail_shiro_ref(a1);
  if ( FIELD_U32(a1, 132) )
  {
    v4 = a1 + 196;
    v5 = 0;
    do
    {
      v6 = **(_DWORD **)(v4 + 4 * v5 - 136);
      v8[0] = &sead__SafeStringBase__vtable;
      v8[1] = "gear";
      *(_DWORD *)(v4 + (v5++ << 6)) = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v6 + 84))(v6, v8);
    }
    while ( v5 != FIELD_U32(a1, 132) );
  }
  FIELD_U32(a1, 1244) = 0;
  FIELD_U8(a1, 1248) = 0;
  return 0;
}
