/* sub_6031DB1C
 * address: 0x6031DB1C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031DB1C(int a1, int a2, int a3)
{
  int v5; // r0

  if ( !FIELD_U8(a1, 6220) )
  {
    sub_6031AC74(a1, 0);
    FIELD_U32(a1, 500) = 1098907648;
    FIELD_U32(a1, 504) = 1098907648;
    v5 = FIELD_U32(a3, 64);
    FIELD_U8(a1, 6288) = FIELD_F32(v5, 120) < 0.0;
    FIELD_U8(a1, 6227) = FIELD_U8(v5, 84);
    (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &Enemy_StateId_Frozen);
  }
  return 1;
}
