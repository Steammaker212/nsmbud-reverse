/* sub_608704CC
 * address: 0x608704CC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608704CC(int result, int a2, unsigned __int16 *a3, int a4, float a5)
{
  int v5; // r10
  int v10; // r4
  int v11; // r7
  unsigned __int16 *v12; // r6
  bool v13; // zf

  v5 = result;
  v10 = FIELD_U16(result, 52);
  if ( FIELD_U16(result, 52) )
  {
    v11 = 0;
    v12 = (unsigned __int16 *)(FIELD_U32(result, 16) + 8);
    do
    {
      result = *a3;
      v13 = result == 0xFFFF;
      if ( result != 0xFFFF )
      {
        result = *v12;
        v13 = result == 0xFFFF;
      }
      if ( !v13 )
      {
        result = ((int (__fastcall *)(int, int, float))loc_6086E97C)(
                   FIELD_U32(v5, 24) + 48 * result,
                   a4 + 12 * v11,
                   a5);
        *(_DWORD *)(a2 + 4 * v11++) = result;
      }
      --v10;
      ++a3;
      v12 += 8;
    }
    while ( v10 );
  }
  return result;
}
