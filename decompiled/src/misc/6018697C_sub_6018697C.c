/* sub_6018697C
 * address: 0x6018697C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6018697C(int a1, int a2)
{
  int v3; // r5

  v3 = 0;
  sub_601687DC(a1, a2, 0);
  if ( sub_601860F8(a1) == 1 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 136))(a1);
    v3 = 1;
    sub_601E4C88(dword_60C8B13C, 145, a1 + 80, 1);
    FIELD_U8(a1, 216) |= 2u;
    FIELD_U32(a1, 312) = 5;
    sub_60186FC0(dword_60CC6D78 + 984, FIELD_U32(a1, 240), FIELD_U32(a1, 352), a1 + 300);
    FIELD_U8(a1, 19) = 1;
  }
  return v3;
}
