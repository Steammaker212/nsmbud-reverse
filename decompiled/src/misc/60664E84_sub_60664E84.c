/* sub_60664E84
 * address: 0x60664E84   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60664E84(_BYTE *a1)
{
  int result; // r0

  if ( a1[7312] && (!sub_603F056C(dword_60C99D6C, 0) || sub_603F0658(dword_60C99D6C, 0) == 9) )
    sub_603EFEAC(dword_60C99D6C, 0, 9);
  if ( a1[7313] && (!sub_603F056C(dword_60C99D6C, 1) || sub_603F0658(dword_60C99D6C, 1) == 9) )
    sub_603EFEAC(dword_60C99D6C, 1u, 9);
  if ( a1[7314] && (!sub_603F056C(dword_60C99D6C, 2) || sub_603F0658(dword_60C99D6C, 2) == 9) )
    sub_603EFEAC(dword_60C99D6C, 2u, 9);
  result = (unsigned __int8)a1[7315];
  if ( a1[7315] )
  {
    if ( !sub_603F056C(dword_60C99D6C, 3) )
      return sub_603EFEAC(dword_60C99D6C, 3u, 9);
    result = sub_603F0658(dword_60C99D6C, 3);
    if ( result == 9 )
      return sub_603EFEAC(dword_60C99D6C, 3u, 9);
  }
  return result;
}
