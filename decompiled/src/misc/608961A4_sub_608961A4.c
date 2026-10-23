/* sub_608961A4
 * address: 0x608961A4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608961A4(int a1, int a2)
{
  int v3; // r6
  int v4; // r7

  if ( dword_60CC8024 >= 1 )
  {
    v3 = 0;
    v4 = 48;
    do
    {
      sub_6083B4C8(dword_60CC8028 + v4);
      ++v3;
      v4 += 168;
    }
    while ( v3 < dword_60CC8024 );
  }
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a2 + 12))(a2, dword_60CC8028);
  dword_60CC8028 = 0;
  dword_60CC8024 = 0;
  return &dword_60CC8024;
}
