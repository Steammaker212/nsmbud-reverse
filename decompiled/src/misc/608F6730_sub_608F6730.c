/* sub_608F6730
 * address: 0x608F6730   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F6730(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r1
  int v4; // r2
  int v5; // r2
  int v6; // r5
  int v7; // r6
  int v8; // r7
  int v9; // r0

  sub_608DEA40((char *)(a1 + 144), FIELD_U32(a1, 156), (int (__fastcall *)(char *, char *))sub_608F7CE0);
  v2 = 0;
  v3 = 0;
  if ( FIELD_S32(a1, 136) >= 1 )
  {
    v4 = FIELD_U32(a1, 132);
    v3 = 0;
    if ( v4 )
      v3 = v4 - FIELD_U32(a1, 140);
  }
  if ( FIELD_S32(a1, 152) >= 1 )
  {
    v5 = FIELD_U32(a1, 148);
    if ( v5 )
      v2 = v5 - FIELD_U32(a1, 156);
  }
  v6 = FIELD_U32(a1, 32);
  if ( !v3 || (v2 == 0) != v3 >= v2 )
    return v6;
  v7 = FIELD_U32(v3, 12);
  v8 = FIELD_U16(v3, 10);
  sead__ListNode__erase((_DWORD *)(FIELD_U32(a1, 140) + v3));
  --FIELD_U32(a1, 136);
  v6 = v6 - 16 - v8 - v7;
  v9 = (*(int (__fastcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 36) + 32))(
         FIELD_U32(a1, 36),
         FIELD_U32(a1, 28),
         v6);
  if ( v9 )
  {
    FIELD_U32(a1, 32) = v6;
    __dmb(0xBu);
    FIELD_U32(a1, 28) = v9;
    return v6;
  }
  return FIELD_U32(a1, 32);
}
