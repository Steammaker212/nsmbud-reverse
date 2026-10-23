/* sub_609886FC
 * address: 0x609886FC   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_609886FC(int a1, int a2, int a3, unsigned int *a4, unsigned int *a5, unsigned int a6)
{
  unsigned int result; // r0
  _DWORD *v10; // r9
  bool v11; // zf
  int v12; // r4
  void *v13; // r6
  _WORD *v14; // r1
  _WORD *v15; // r0
  int (**v16)(); // [sp+0h] [bp-40h] BYREF
  void *v17; // [sp+4h] [bp-3Ch]
  int v18; // [sp+8h] [bp-38h]
  _BYTE v19[4]; // [sp+Ch] [bp-34h] BYREF
  _DWORD v20[2]; // [sp+10h] [bp-30h] BYREF
  _DWORD v21[10]; // [sp+18h] [bp-28h] BYREF

  result = (unsigned __int16)(FIELD_U16(a2, 4) - 7);
  if ( result <= 1 )
  {
    sub_60987708(v20);
    v10 = v21;
    sub_60987708(v21);
    sub_6099826C(v19, a2);
    v11 = sub_609982F0(a3, *a4, v19[0]) == 0;
    result = *a4;
    if ( !v11 )
      v10 = v20;
    v12 = v10[1];
    if ( v12 + result < a6 )
    {
      v17 = (void *)(a3 + 2 * result);
      v16 = &off_60BFCA1C;
      v18 = a6 - result;
      if ( (int)(a6 - result) <= 0 )
      {
        v13 = 0;
        v17 = 0;
        v18 = 0;
      }
      else
      {
        sub_608FDDB4((int)&v16);
        v12 = v10[1];
        v13 = v17;
      }
      v14 = (_WORD *)*v10;
      if ( v13 != (void *)*v10 )
      {
        if ( v12 < 0 )
        {
          v15 = v14 + 1;
          v12 = 0;
          while ( *(v15 - 1) )
          {
            if ( v12 >= 0x80000 )
            {
              v12 = 0;
              break;
            }
            if ( !*v15 )
            {
              v12 |= 1u;
              break;
            }
            v15 += 2;
            v12 += 2;
          }
        }
        if ( v12 >= v18 )
          v12 = v18 - 1;
        qmemcpy(v13, v14, 2 * v12);
        *((_WORD *)v13 + v12) = 0;
        v12 = v10[1];
      }
      *a4 += v12;
      result = *a5 + v12;
      *a5 = result;
    }
  }
  return result;
}
