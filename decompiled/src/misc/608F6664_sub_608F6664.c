/* sub_608F6664
 * address: 0x608F6664   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F6664(int a1)
{
  _DWORD *v2; // r5
  unsigned int v3; // r0
  unsigned int v4; // r6
  int v5; // r1
  bool v6; // cc
  int v7; // r5
  int v8; // r5

  v2 = (_DWORD *)(a1 + 144);
  sub_608DEA40((char *)(a1 + 144), FIELD_U32(a1, 156), (int (__fastcall *)(char *, char *))sub_608F7CE0);
  v3 = 0;
  v4 = 0;
  if ( FIELD_S32(a1, 136) >= 1 )
  {
    v5 = FIELD_U32(a1, 128);
    v4 = 0;
    if ( v5 )
      v4 = v5 - FIELD_U32(a1, 140);
  }
  if ( FIELD_S32(a1, 152) >= 1 && *v2 )
    v3 = *v2 - FIELD_U32(a1, 156);
  v6 = v4 != 0;
  if ( v4 )
    v6 = v4 > v3;
  if ( !v6 )
    return FIELD_U32(a1, 32);
  v7 = FIELD_U32(a1, 28);
  sead__ListNode__erase((_DWORD *)(FIELD_U32(a1, 140) + v4));
  v8 = v4 - v7;
  --FIELD_U32(a1, 136);
  if ( !(*(int (__fastcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 36) + 36))(
          FIELD_U32(a1, 36),
          FIELD_U32(a1, 28),
          v8) )
    return FIELD_U32(a1, 32);
  FIELD_U32(a1, 32) = v8;
  return v8;
}
