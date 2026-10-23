/* sub_60915F04
 * address: 0x60915F04   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60915F04(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0
  _DWORD v4[5]; // [sp+4h] [bp-14h] BYREF

  *a1 = off_60C5D574;
  v2 = (void *)a1[48];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    a1[47] = 0;
    a1[48] = 0;
  }
  sub_608DEB70(a1 + 50);
  v3 = (void *)a1[54];
  if ( v3 )
  {
    operator_delete_8DE3FC(v3);
    a1[53] = 0;
    a1[54] = 0;
  }
  v4[0] = a1[61];
  v4[1] = a1[62];
  v4[2] = a1[63];
  sub_60913ABC((int)v4);
  sub_60918DB8(a1 + 60);
  sead__CriticalSection__dtor(a1 + 38);
  sead__CriticalSection__dtor(a1 + 29);
  sead__CriticalSection__dtor(a1 + 20);
  sead__CriticalSection__dtor(a1 + 11);
  nullsub_115();
}
