/* sub_6083E31C
 * address: 0x6083E31C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083E31C(_DWORD *a1, void *a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  int v9; // r5
  int v10; // r0
  _BYTE v12[16]; // [sp+4h] [bp-34h] BYREF
  _DWORD v13[9]; // [sp+14h] [bp-24h] BYREF

  nn__mii__detail__BufferAllocator__ctor((nn__mii__detail__BufferAllocator *)v13, a2, a3);
  sub_6084780C(v12, a5, a6, a7);
  nn__mii__detail__BufferAllocator__AlignUp((nn__mii__detail__BufferAllocator *)v13, 8u);
  v9 = v13[0];
  nn__mii__detail__BufferAllocator__Advance((nn__mii__detail__BufferAllocator *)v13, 0x570u);
  v10 = sub_60844374(v9);
  *a1 = v9;
  sub_608445C8(v10, a4, v12);
  nullsub_83(v12);
  nn__mii__detail__BufferAllocator__dtor((nn__mii__detail__BufferAllocator *)v13);
  return 0;
}
