/* sub_608D556C
 * address: 0x608D556C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int8 *__fastcall sub_608D556C(unsigned __int16 *a1, unsigned int a2)
{
  int v3; // r3
  unsigned __int8 *result; // r0
  int v5; // lr
  unsigned __int8 *v6; // r12
  int v7; // r0
  unsigned int v8; // r2
  unsigned int v9; // r3
  int v10; // r0

  v3 = *a1;
  result = 0;
  if ( (unsigned __int16)(v3 - 24576) <= 2u )
  {
    v5 = *((_DWORD *)a1 + 1);
    v6 = (unsigned __int8 *)a1 + v5;
    if ( v3 != 24578 )
    {
      if ( v3 == 24577 )
      {
        v9 = *(_DWORD *)v6;
        if ( !*(_DWORD *)v6 )
          return result;
        v10 = 0;
        while ( v6[v10 + 4] < a2 )
        {
          if ( ++v10 >= v9 )
            return 0;
        }
        v7 = *(_DWORD *)((char *)&a1[4 * v10 + 2] + v5 + ((v9 + 7) & 0xFFFFFFFC));
      }
      else
      {
        if ( v3 != 24576 )
          return result;
        v7 = *((_DWORD *)v6 + 1);
      }
      return &v6[v7];
    }
    v8 = *v6;
    if ( v8 <= a2 && v6[1] >= a2 )
    {
      v7 = *(_DWORD *)&v6[8 * (a2 - v8) + 8];
      return &v6[v7];
    }
  }
  return result;
}
