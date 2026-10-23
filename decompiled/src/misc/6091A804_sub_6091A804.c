/* sub_6091A804
 * address: 0x6091A804   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091A804(int a1, int a2, int a3, unsigned int a4, float a5, int a6, int a7, int a8)
{
  unsigned int v10; // r7
  int result; // r0
  unsigned int v12; // r8
  int i; // r11
  int v14; // r0
  unsigned int *v15; // r7
  unsigned int v16; // r1
  int v17; // r0
  unsigned int *v18; // r7
  unsigned int v19; // r1
  bool v20; // zf
  int v21; // r3

  v10 = a4 & 0xFFFFFFFE;
  v20 = *(_DWORD *)(a1 + 4 * a3 + 28) == 0;
  result = FIELD_U32(a1, 60);
  if ( !v20 )
    v10 = a4;
  v12 = v10 & 0xFFFFFFF9;
  if ( result )
    v12 = v10;
  if ( v12 )
  {
    for ( i = 0; i != 8; ++i )
    {
      v14 = *(_DWORD *)(a1 + 4 * i + 28);
      if ( v14 )
      {
        v15 = (unsigned int *)(v14 + 272);
        do
          v16 = __ldrex(v15);
        while ( __strex(0x80000000, v15) );
        if ( v16 )
        {
          if ( v16 == 0x80000000 )
          {
            while ( *v15 == 0x80000000 )
              sub_609085CC();
          }
          else
          {
            sub_6091AD4C(v14);
          }
        }
        *v15 = 0;
      }
    }
    v17 = FIELD_U32(a1, 60);
    if ( v17 )
    {
      v18 = (unsigned int *)(v17 + 272);
      do
        v19 = __ldrex(v18);
      while ( __strex(0x80000000, v18) );
      if ( v19 )
      {
        if ( v19 == 0x80000000 )
        {
          while ( *v18 == 0x80000000 )
            sub_609085CC();
        }
        else
        {
          sub_6091ADA0(v17);
        }
      }
      *v18 = 0;
    }
    result = sub_6090E560(a8, a2, (float *)a1);
    if ( (v12 & 1) != 0 )
      result = dword_60CC7894(FIELD_U32(a2, 192), a3, a6, 15);
    v20 = (v12 & 6) == 0;
    if ( (v12 & 6) != 0 )
    {
      result = FIELD_U32(a1, 60);
      v20 = result == 0;
    }
    if ( !v20 )
    {
      v21 = v12 & 4;
      if ( (v12 & 4) != 0 )
        v21 = 255;
      return dword_60CC78A0(FIELD_U32(a2, 192), (v12 >> 1) & 1, a7, v21, a5);
    }
  }
  return result;
}
