/* sub_60957F40
 * address: 0x60957F40   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60957F40(int a1, int a2, unsigned int a3)
{
  unsigned int v6; // r1
  int result; // r0
  unsigned int v8; // r1
  _DWORD *v9; // r7
  unsigned int *v10; // r5
  unsigned int *v11; // r6
  unsigned int v12; // t1
  _DWORD *v13; // r1
  _DWORD *v14; // r1
  _DWORD *v15; // r0
  _DWORD *v16; // r0

  v6 = FIELD_U8(a1, 866) % (unsigned int)FIELD_U8(a1, 867);
  result = 0;
  if ( !v6 )
  {
    if ( FIELD_U8(a1, 252) == 1 )
    {
      v8 = FIELD_U32(a1, 248);
      if ( (v8 & 0x40) != 0 )
      {
        FIELD_U32(a1, 248) = v8 & 0xFFFFFFBF;
        v10 = (unsigned int *)(a1 + 24);
        v9 = (_DWORD *)(a1 + 28);
        v14 = *(_DWORD **)(a1 + 28);
        if ( FIELD_U32(a1, 24) > a3 )
          v14 += a3;
        sub_60976B50(*v14);
        v8 = FIELD_U32(a1, 248);
      }
      else
      {
        v9 = (_DWORD *)(a1 + 28);
        v10 = (unsigned int *)(a1 + 24);
      }
      v15 = (_DWORD *)*v9;
      if ( *v10 > a3 )
        v15 += a3;
      sub_60976854(*v15, a2, (v8 >> 8) & 1);
      FIELD_U8(a2, 249) = 4;
    }
    else
    {
      v12 = FIELD_U32(a1, 24);
      v11 = (unsigned int *)(a1 + 24);
      v9 = v11 + 1;
      v13 = (_DWORD *)v11[1];
      if ( v12 > a3 )
        v13 += a3;
      sub_609765CC(*v13, a2);
      v10 = v11;
    }
    v16 = (_DWORD *)*v9;
    if ( *v10 > a3 )
      v16 += a3;
    sub_60974FA4(*v16);
    return 1;
  }
  return result;
}
