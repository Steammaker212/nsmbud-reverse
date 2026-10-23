/* sub_6094CF0C
 * address: 0x6094CF0C   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094CF0C(_DWORD *a1, _DWORD *a2, unsigned int a3, int a4, char a5)
{
  int result; // r0
  int v10; // r1
  int v11; // r7
  _WORD *v12; // r0
  int v13; // r3
  unsigned int v14; // r2
  int v15; // r0
  unsigned int v16; // r1
  _WORD *v17; // r0
  int v18; // r3
  int v19; // r0
  unsigned int v20; // r1
  _WORD *v21; // r0
  int v22; // r0
  int v23; // r2
  int v24; // r2
  int v25; // [sp+4h] [bp-24h] BYREF
  int v26; // [sp+8h] [bp-20h]
  int v27; // [sp+Ch] [bp-1Ch]

  if ( *a2 )
    result = dword_60CC73E8(*a2);
  else
    result = 0;
  v10 = a2[1];
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      if ( a3 )
      {
        v19 = result + v10;
        v20 = 0;
        v21 = (_WORD *)(v19 + 4);
        v13 = 0;
        do
        {
          *(v21 - 2) = a3;
          *(v21 - 1) = v20;
          *v21 = v20;
          v20 += 1 << a5;
          v13 += 4;
          v21[1] = v20 % a3;
          v21 += 4;
        }
        while ( v20 < a3 );
        v10 = a2[1];
      }
      else
      {
        v13 = 0;
      }
      v22 = *a2;
      v23 = a2[2];
      v11 = 1;
    }
    else
    {
      if ( a4 != 2 )
        return result;
      v11 = 0;
      if ( a3 )
      {
        v12 = (_WORD *)(result + v10);
        v13 = 0;
        v14 = 0;
        do
        {
          *v12++ = v14;
          ++v13;
          v14 += 1 << a5;
        }
        while ( v14 < a3 );
        v10 = a2[1];
      }
      else
      {
        v13 = 0;
      }
      v22 = *a2;
      v23 = a2[2];
    }
    v25 = v22;
    v26 = v10;
    v27 = v23;
    result = sub_60919D48(a1, &v25, 1, v13);
  }
  else
  {
    if ( a3 )
    {
      v15 = result + v10;
      v16 = 0;
      v17 = (_WORD *)(v15 + 2);
      v18 = 0;
      do
      {
        *(v17 - 1) = a3;
        *v17 = v16;
        v16 += 1 << a5;
        v18 += 3;
        v17[1] = v16 % a3;
        v17 += 3;
      }
      while ( v16 < a3 );
      v10 = a2[1];
    }
    else
    {
      v18 = 0;
    }
    v24 = a2[2];
    v25 = *a2;
    v26 = v10;
    v27 = v24;
    result = sub_60919D48(a1, &v25, 1, v18);
    v11 = 4;
  }
  a1[2] = v11;
  return result;
}
