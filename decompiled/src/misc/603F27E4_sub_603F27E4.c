/* sub_603F27E4
 * address: 0x603F27E4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F27E4(_DWORD *a1)
{
  int result; // r0

  if ( a1[647] )
    sub_604DEC98();
  if ( a1[648] )
    sub_604B3F4C();
  if ( a1[649] )
    nullsub_1328();
  if ( dword_60CA1910 )
    SE_SYS_CE_ref();
  result = dword_60C9A1E8;
  if ( dword_60C9A1E8 )
    return sub_604081DC();
  return result;
}
