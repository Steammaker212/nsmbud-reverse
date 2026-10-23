/* sub_6074C538
 * address: 0x6074C538   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074C538(int a1, int a2, int *a3, int a4)
{
  int v7; // r0
  int v8; // r1
  bool v9; // cc
  int result; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r5
  _WORD *v14; // r0
  int v15; // r7
  int v16; // r2
  int v17; // r0

  v7 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 136))(a1);
  v8 = StaffCreditTable_init(v7);
  v9 = a4 <= 0;
  result = 0;
  if ( a4 >= 0 )
    v9 = FIELD_U32(v8, 8) <= a4;
  if ( v9 )
    return result;
  if ( IMAGE32(0) == 15 )
  {
    v11 = 6;
  }
  else
  {
    if ( IMAGE32(0) == 14 )
    {
      v11 = IMAGE32(6) + 8;
      result = 0;
      if ( IMAGE32(4) == 1 )
        return result;
      if ( !a3 || IMAGE32(4) )
        goto LABEL_16;
      v12 = 1;
      goto LABEL_15;
    }
    v11 = 0;
  }
  if ( a3 )
  {
    v12 = 0;
LABEL_15:
    *a3 = v12;
  }
LABEL_16:
  result = 1;
  if ( a2 )
  {
    **(_WORD **)(a2 + 4) = 0;
    v13 = FIELD_U32(a2, 4);
    if ( v13 != v11 )
    {
      v14 = (_WORD *)(v11 + 2);
      v15 = 0;
      v16 = 1;
      while ( *(v14 - 1) )
      {
        if ( v16 - 1 >= 0x80000 )
        {
          v15 = 0;
          break;
        }
        if ( !*v14 )
        {
          v15 = v16;
          break;
        }
        v14 += 2;
        v16 += 2;
        v15 += 2;
      }
      v17 = FIELD_U32(a2, 8);
      if ( v15 >= v17 )
        v15 = v17 - 1;
      qmemcpy(*(void **)(a2 + 4), (const void *)v11, 2 * v15);
      *(_WORD *)(v13 + 2 * v15) = 0;
      return 1;
    }
  }
  return result;
}
