/* sub_605B774C
 * address: 0x605B774C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B774C(_DWORD *a1, int a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int result; // r0

  a1[40] = a2;
  a1[169] = a3;
  a1[170] = a4;
  block_challenge_ref_5B77BC(a1);
  if ( sub_607F6904(dword_60CC62E4) || (result = FIELD_U32(dword_60C99DD4, 764), result == 3) )
  {
    do
      result = block_challenge_ref_5B77BC(a1);
    while ( result != 1 );
  }
  return result;
}
