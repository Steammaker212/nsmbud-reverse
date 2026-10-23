/* sub_607F07BC
 * address: 0x607F07BC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F07BC(int a1, int a2)
{
  int v4; // r0
  int result; // r0
  float v6; // s0
  __int16 v7; // [sp+8h] [bp-78h] BYREF

  v4 = sub_6090B350(&v7);
  v7 = 0;
  result = sub_6090B4B0(v4, FIELD_U32(a2, 40));
  v6 = FIELD_F32(a1, 488);
  if ( v6 > 0.0 )
  {
    if ( v6 >= 1.0 )
      return (*(int (__fastcall **)(_DWORD, _DWORD, int, int *, float, _DWORD))(**(_DWORD **)(a2 + 12) + 20))(
               FIELD_U32(a2, 12),
               FIELD_U32(a2, 40),
               1,
               &dword_60B45CCC,
               1.0,
               0);
    else
      return sub_60560F68(a1 + 568, (_DWORD *)a2);
  }
  return result;
}
