/* sub_60254000
 * address: 0x60254000   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60254000(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int v9; // r4
  _BYTE *v10; // r8
  unsigned __int16 *v11; // r1
  unsigned int U32; // r0
  int v13; // r1
  int v14; // r1
  int v15; // r0
  int v16; // r2
  unsigned __int16 v17; // r3

  result = 0;
  if ( a3 >= 4 )
  {
    v9 = a5;
    result = 0;
    if ( (unsigned __int8)a5 >= 4u )
      v9 = 0;
    v10 = (_BYTE *)(a1 + v9 + 516);
    if ( *v10 )
    {
      if ( *(_BYTE *)(a1 + v9 + 516) != 1 )
        return result;
      v11 = (unsigned __int16 *)(a1 + 2 * v9 + 520);
    }
    else
    {
      U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      v13 = a1 + 2 * v9;
      FIELD_U16(v13, 520) = (U32 * (unsigned __int64)(unsigned int)a3) >> 32;
      v11 = (unsigned __int16 *)(v13 + 520);
      *v10 = 1;
    }
    v14 = *v11;
    v15 = a1 + 416;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      if ( *(unsigned __int8 *)(v15 + v16) == (unsigned __int8)a5 )
      {
        if ( v17 == v14 && a2 == *(_DWORD *)(v15 + 4 * v16 - 400) )
        {
          *v10 = 2;
          return 1;
        }
        ++v17;
      }
      if ( (unsigned int)++v16 >= 0x64 )
        return 0;
    }
  }
  return result;
}
