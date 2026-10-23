/* sub_60787AF4
 * address: 0x60787AF4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60787AF4(int a1, int a2, int a3)
{
  int result; // r0

  FIELD_U16(a1, 206) = -1;
  if ( sub_608FBB8C(FIELD_U16(a1, 66)) == 1 && !sub_608FBB8C(FIELD_U16(a1, 204)) )
    FIELD_U16(a1, 206) = 0;
  FIELD_U16(a1, 204) = 0;
  sub_6077777C(dword_60CBFA90);
  sub_6077AFBC(dword_60CBFBC0);
  result = ((int (__fastcall *)(int, int, int))loc_60787B8C)(a1, a2, a3);
  FIELD_U32(a1, 152) = 0;
  FIELD_U8(a1, 156) = 0;
  FIELD_U8(a1, 157) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U8(a1, 177) = 0;
  FIELD_U32(a1, 180) = 0;
  return result;
}
