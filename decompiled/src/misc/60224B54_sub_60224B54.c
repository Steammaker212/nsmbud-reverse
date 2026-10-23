/* sub_60224B54
 * address: 0x60224B54   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60224B54(_DWORD *a1, int a2, int *a3, int a4)
{
  int *v8; // r10
  signed int v9; // r5
  bool v10; // cc
  int v11; // r5
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int (**v16)(); // [sp+8h] [bp-38h] BYREF
  int *v17; // [sp+Ch] [bp-34h]
  int v18; // [sp+10h] [bp-30h]
  int v19; // [sp+14h] [bp-2Ch] BYREF

  v17 = &v19;
  v16 = &BufferedSafeStringBase_char_vtable_probably;
  v18 = 10;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v16);
  v16 = &off_60BD4FF8;
  v8 = v17;
  if ( v17 != a3 )
  {
    v9 = 0;
    while ( *((_BYTE *)a3 + v9) )
    {
      if ( !*((_BYTE *)a3 + v9 + 1) )
      {
        ++v9;
        break;
      }
      if ( !*((_BYTE *)a3 + v9 + 2) )
      {
        v9 += 2;
        break;
      }
      v10 = v9 + 2 < 0x80000;
      v9 += 3;
      if ( !v10 )
      {
        v9 = 0;
        break;
      }
    }
    if ( v9 >= v18 )
      v9 = v18 - 1;
    qmemcpy(v17, a3, v9);
    *((_BYTE *)v8 + v9) = 0;
  }
  v11 = 0;
  v12 = 0;
  v16 = &off_60BD4F50;
  if ( a1[2] == a2 )
    v12 = a1[443] + 5;
  v13 = sub_6022F5D4(a1, a2, &v16, v12, a4);
  if ( v13 )
  {
    v14 = a1[7];
    if ( v14 < a1[8] )
    {
      *(_DWORD *)(a1[9] + 4 * v14) = v13;
      ++a1[7];
    }
    v11 = 1;
    ++a1[443];
  }
  return v11;
}
