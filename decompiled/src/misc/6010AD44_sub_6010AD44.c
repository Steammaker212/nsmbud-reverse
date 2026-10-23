/* sub_6010AD44
 * address: 0x6010AD44   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010AD44(int a1)
{
  int result; // r0

  KoopalingBase__vf36C((int *)a1);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 728))(a1) == 1 )
  {
    sub_6010A7A4();
    sub_6010AB70();
    FIELD_U8(a1, 8168) = 1;
  }
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1);
  if ( !result )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
    if ( !result )
    {
      FIELD_U32(a1, 7760) = 1067030938;
      return 7760;
    }
  }
  return result;
}
