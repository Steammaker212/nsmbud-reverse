/* sub_6003AAA4
 * address: 0x6003AAA4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6003AAA4(int a1)
{
  int *v2; // r1
  int result; // r0

  ((void (*)(void))loc_60040A94)();
  if ( FIELD_U8(a1, 11676) )
    v2 = &dword_60C80148;
  else
    v2 = &dword_60C800E4;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v2);
  result = FIELD_U32(a1, 11480) + 1;
  FIELD_U32(a1, 11480) = result;
  return result;
}
