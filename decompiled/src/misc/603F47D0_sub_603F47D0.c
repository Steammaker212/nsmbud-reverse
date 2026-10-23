/* sub_603F47D0
 * address: 0x603F47D0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F47D0(int a1, int a2)
{
  int result; // r0
  int v5; // r0

  result = FIELD_U32(a1, 1832);
  if ( result != 1 )
  {
    v5 = operator_new_8DE25C(8u, *(void **)(a1 + 1840), 4);
    FIELD_U32(a1, 1844) = sub_607F49C0(v5, a2, FIELD_U32(a1, 1840));
    FIELD_U32(a1, 1832) = 1;
    sub_604574C8(dword_60C9CF18, 1, 1);
    result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 1844) + 16))(FIELD_U32(a1, 1844));
    if ( result == 1 )
      return sub_60454DC4(dword_60C9CF0C);
  }
  return result;
}
