/* sub_608EB21C
 * address: 0x608EB21C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EB21C(int a1)
{
  int result; // r0
  int v3; // r6
  unsigned int v4; // r5
  unsigned int v5; // r0
  unsigned int v6; // r5
  unsigned int v7; // r0

  result = FIELD_U8(a1, 347);
  if ( result )
  {
    v3 = dword_60CCF464 + 236;
    sead__CriticalSection__lock(dword_60CCF464 + 236);
    FIELD_U8(a1, 345) = 1;
    dword_60CC735C(FIELD_U32(a1, 268), 1, a1 + 304);
    dword_60CC79EC(FIELD_U32(a1, 268), FIELD_U32(a1, 288), 0, 0);
    dword_60CC7360(FIELD_U32(a1, 268));
    v4 = FIELD_U32(a1, 260);
    v5 = dword_60CC77D4(FIELD_U32(a1, 236));
    if ( v4 > v5 )
      v5 = v4;
    FIELD_U32(a1, 260) = v5;
    v6 = FIELD_U32(a1, 264);
    v7 = dword_60CC77E0(FIELD_U32(a1, 236));
    if ( v6 > v7 )
      v7 = v6;
    FIELD_U32(a1, 264) = v7;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 132))(a1);
    return sead__CriticalSection__unlock(v3);
  }
  return result;
}
