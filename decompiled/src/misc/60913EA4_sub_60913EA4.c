/* sub_60913EA4
 * address: 0x60913EA4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913EA4(int result, int a2, void *a3, int a4, int a5, int a6)
{
  int v8; // r4
  int v9; // r7
  int v10; // r6
  int v11[9]; // [sp+Ch] [bp-24h] BYREF

  v8 = result;
  if ( a2 )
  {
    FIELD_U32(result, 4) = *(_DWORD *)(FIELD_U32(a5, 8) + 4);
    FIELD_U32(result, 8) = a2;
    v9 = operator_new_8DE25C(0x108u, a3, 8);
    sub_609149E4();
    FIELD_U32(v8, 12) = v9;
    v10 = FIELD_U32(v8, 4);
    v11[0] = sub_60914960(a4);
    sub_609149F0(v9, v10, a2, v11, *(_DWORD *)(FIELD_U32(a5, 8) + 12), a6);
    result = FIELD_U8(v8, 20) | 2;
    FIELD_U8(v8, 20) = result;
  }
  return result;
}
