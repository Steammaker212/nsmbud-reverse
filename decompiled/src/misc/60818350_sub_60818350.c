/* sub_60818350
 * address: 0x60818350   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60818350(sead__TaskBase *a1)
{
  int result; // r0

  sead__TaskBase__prepare(a1);
  if ( dword_60CC6BF4 )
    sub_60819DCC(dword_60CC6BF4, a1);
  (*(void (__fastcall **)(sead__TaskBase *))(*(_DWORD *)a1 + 96))(a1);
  result = dword_60CC6BF4;
  if ( dword_60CC6BF4 )
    return sub_60819E3C(dword_60CC6BF4, a1);
  return result;
}
