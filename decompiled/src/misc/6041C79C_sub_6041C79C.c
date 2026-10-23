/* sub_6041C79C
 * address: 0x6041C79C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6041C79C(_DWORD *result)
{
  _DWORD *v1; // r10
  int v2; // r5
  int v3; // r7
  int v4; // r4
  void *v5; // r0
  int v6; // r0
  void *v7; // r6
  int v8; // r5
  int v9; // r4

  v1 = result;
  v2 = result[514];
  if ( v2 )
  {
    if ( (int)result[350] < 1 )
      goto LABEL_10;
    v3 = 0;
    v4 = 0;
    do
    {
      if ( v1[513] > (unsigned int)v4 )
        v2 += v3;
      sub_6083E3A0(v2, FIELD_U32(dword_60CCFC8C, 24));
      sub_60913ABC(v2 + 296);
      sub_60913AD4(v2 + 296);
      v5 = *(void **)(v2 + 4);
      if ( v5 )
        operator_delete(v5);
      FIELD_U32(v2, 4) = 0;
      ++v4;
      v3 += 312;
      result = (_DWORD *)v1[350];
      v2 = v1[514];
    }
    while ( v4 < (int)result );
    if ( v2 )
    {
LABEL_10:
      v6 = *(_DWORD *)(v2 - 4);
      v7 = (void *)(v2 - 8);
      if ( v6 )
      {
        v8 = v2 + 312 * v6 - 312;
        v9 = -312 * v6;
        do
        {
          nullsub_68(v8 + 8);
          nullsub_79(v8);
          v9 += 312;
          v8 -= 312;
        }
        while ( v9 );
      }
      operator_delete_8DE3FC(v7);
      v1[513] = 0;
      v1[514] = 0;
      return 0;
    }
  }
  return result;
}
