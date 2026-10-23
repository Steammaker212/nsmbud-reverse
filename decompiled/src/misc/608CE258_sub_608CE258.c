/* sub_608CE258
 * address: 0x608CE258   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CE258(int a1, unsigned int a2)
{
  int v3; // r4
  int v5; // r0
  _DWORD v7[10]; // [sp+0h] [bp-28h] BYREF

  v3 = 0;
  v7[0] = 0;
  v7[1] = 1;
  v7[2] = 2;
  v7[3] = 3;
  v7[4] = 4;
  v7[5] = 5;
  v5 = ((int (__fastcall *)(unsigned int))loc_608D9E50)(a2);
  if ( a2 <= 3 && !FIELD_U8(a1, 12) )
  {
    v3 = 1;
    FIELD_U32(a1, 84) = a2;
    if ( v5 >= 1 )
      qmemcpy((void *)(a1 + 88), v7, 4 * v5);
  }
  return v3;
}
