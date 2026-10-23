/* LargeGoomba_vf187
 * address: 0x60341F18   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf187(_DWORD *a1)
{
  unsigned int v2; // r0
  int v3; // r0
  _DWORD v5[5]; // [sp+4h] [bp-14h] BYREF

  v2 = a1[1597];
  if ( v2 >= 4 )
    v2 = 0;
  v3 = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32);
  v5[0] = a1[1580];
  v5[1] = a1[1588];
  v5[2] = a1[1589];
  (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 1000))(v3, v5);
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 736))(a1);
}
