/* sub_6042A5F0
 * address: 0x6042A5F0   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042A5F0(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r0

  v2 = a1 + 284;
  *a1 = off_60BFA528;
  sub_60908A98(a1 + 284, 0);
  v3 = a1[181];
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  sead__CriticalSection__dtor(a1 + 357);
  sub_60908980(v2);
  sead__CriticalSection__dtor(a1 + 270);
  sead__CriticalSection__dtor(a1 + 257);
  sead__CriticalSection__dtor(a1 + 243);
  sead__CriticalSection__dtor(a1 + 229);
  sead__CriticalSection__dtor(a1 + 215);
  sead__CriticalSection__dtor(a1 + 201);
  sead__CriticalSection__dtor(a1 + 187);
  nullsub_1365(a1 + 6);
  sub_609175E4(a1 + 114);
  sub_60917AE4(a1 + 94);
  sub_609175E4(a1 + 28);
  sub_60917AE4(a1 + 8);
  return a1;
}
