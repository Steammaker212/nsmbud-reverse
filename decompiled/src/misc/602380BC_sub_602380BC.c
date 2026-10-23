/* sub_602380BC
 * address: 0x602380BC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_602380BC(_DWORD *a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r7

  EmitterSet_has_been_already_deleted_ref_88FFA4(a1[4], 0);
  EmitterSet_has_been_already_deleted_ref_88FFA4(a1[4], 1);
  EmitterSet_has_been_already_deleted_ref_88FFA4(a1[4], 2);
  EmitterSet_has_been_already_deleted_ref_88FFA4(a1[4], 3);
  EmitterSet_has_been_already_deleted_ref_88FFA4(a1[4], 4);
  EmitterSet_has_been_already_deleted_ref_88FFA4(a1[4], 5);
  EmitterSet_has_been_already_deleted_ref_88FFA4(a1[4], 6);
  EmitterSet_has_been_already_deleted_ref_88FFA4(a1[4], 7);
  result = (_DWORD *)a1[57];
  if ( result != a1 + 56 )
  {
    do
    {
      v3 = (_DWORD *)result[1];
      if ( result[3] )
      {
        result[3] = 0;
        sead__ListNode__erase(result);
        --a1[58];
      }
      result = v3;
    }
    while ( v3 != a1 + 56 );
  }
  return result;
}
