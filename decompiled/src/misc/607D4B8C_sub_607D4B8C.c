/* sub_607D4B8C
 * address: 0x607D4B8C   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D4B8C(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v8; // r5
  const void **v9; // r5
  _BYTE *v10; // t1
  int result; // r0
  void *v12; // r9
  const void *v13; // r8
  _BYTE *v14; // r0
  signed int v15; // r7
  bool v16; // cc
  signed int v17; // r0

  v8 = &dword_60CBFBC4[13 * a5];
  v10 = (_BYTE *)v8[5];
  v9 = (const void **)(v8 + 5);
  result = 0;
  if ( *v10 )
  {
    v12 = *(void **)(a4 + 4);
    (*((void (__fastcall **)(const void **))*(v9 - 1) + 3))(v9 - 1);
    v13 = *v9;
    if ( v12 != *v9 )
    {
      (*((void (__fastcall **)(const void **))*(v9 - 1) + 3))(v9 - 1);
      v14 = *v9;
      v15 = 0;
      while ( v14[v15] )
      {
        if ( !v14[v15 + 1] )
        {
          ++v15;
          break;
        }
        if ( !v14[v15 + 2] )
        {
          v15 += 2;
          break;
        }
        v16 = v15 + 2 < 0x80000;
        v15 += 3;
        if ( !v16 )
        {
          v15 = 0;
          break;
        }
      }
      v17 = FIELD_U32(a4, 8);
      if ( v15 >= v17 )
        v15 = v17 - 1;
      qmemcpy(v12, v13, v15);
      *((_BYTE *)v12 + v15) = 0;
    }
    if ( !a6 )
      FIELD_U32(a1, 196) |= 0x80000u;
    FIELD_U32(a1, 200) |= 0x80000u;
    return 1;
  }
  return result;
}
