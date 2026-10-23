/* sub_608C0D9C
 * address: 0x608C0D9C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C0D9C(int result, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // r4
  int v5; // lr
  _DWORD *v6; // r2
  bool v7; // cc

  if ( a2 )
  {
    v4 = FIELD_U32(result, 1000);
    if ( v4 >= 1 )
    {
      v5 = 1;
      v6 = (_DWORD *)(result + 24 * a3 + 54324);
      do
      {
        if ( (a2 & 1) != 0 )
        {
          *(v6 - 3) = *a4;
          *(v6 - 2) = a4[1];
          *(v6 - 1) = a4[2];
          *v6 = a4[3];
          v6[1] = a4[4];
          v6[2] = a4[5];
          v4 = FIELD_U32(result, 1000);
        }
        if ( !(a2 >> 1) )
          break;
        v7 = v5 < v4;
        v6 += 28;
        a2 >>= 1;
        ++v5;
      }
      while ( v7 );
    }
  }
  return result;
}
