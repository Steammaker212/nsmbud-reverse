/* sub_60896278
 * address: 0x60896278   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60896278(void (__fastcall *a1)(int, int, int), int a2)
{
  int result; // r0
  int v5; // r6
  int v6; // r7

  result = dword_60CC8024;
  if ( dword_60CC8024 >= 1 )
  {
    v5 = 0;
    v6 = 40;
    do
    {
      a1(dword_60CC8028 + v6, dword_60CC8028 + v6 + 8, a2);
      result = dword_60CC8024;
      ++v5;
      v6 += 168;
    }
    while ( v5 < dword_60CC8024 );
  }
  return result;
}
