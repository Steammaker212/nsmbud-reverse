/* sub_609A7ED4
 * address: 0x609A7ED4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A7ED4(int a1)
{
  int v2; // r7
  int v3; // r5
  _DWORD *v4; // r6

  v2 = FIELD_U32(a1, 16);
  v3 = FIELD_U32(a1, 88);
  v4 = (_DWORD *)(a1 + 4);
  if ( v2 )
  {
    FIELD_U32(a1, 16) = 0;
    sead__ListNode__erase((_DWORD *)(a1 + 4));
    --FIELD_U32(v2, 8);
  }
  FIELD_U32(a1, 16) = v3;
  sub_608DE510(v3, v4);
  ++FIELD_U32(v3, 8);
  FIELD_U8(a1, 128) = 0;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1);
}
