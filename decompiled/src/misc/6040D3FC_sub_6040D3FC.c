/* sub_6040D3FC
 * address: 0x6040D3FC   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6040D3FC(int a1, unsigned int a2, int a3)
{
  void *v4; // r9
  int *v5; // r7
  int *v6; // r5
  const void *v7; // r8
  signed int v8; // r7
  int v9; // r0
  bool v10; // cc
  signed int v11; // r0

  if ( a2 > 8 )
  {
    sub_608FDDF4(a1, "%02u", a3);
  }
  else
  {
    v4 = *(void **)(a1 + 4);
    v5 = (int *)((char *)&unk_60C9A2E0 + 8 * a3);
    (*(void (__fastcall **)(int *))(*v5 + 12))(v5);
    v6 = v5 + 1;
    v7 = (const void *)v5[1];
    if ( v4 != v7 )
    {
      (*(void (__fastcall **)(int *))(*v5 + 12))(v5);
      v8 = 0;
      v9 = *v6;
      while ( *(_BYTE *)(v9 + v8) )
      {
        if ( !*(_BYTE *)(v9 + v8 + 1) )
        {
          ++v8;
          break;
        }
        if ( !*(_BYTE *)(v9 + v8 + 2) )
        {
          v8 += 2;
          break;
        }
        v10 = v8 + 2 < 0x80000;
        v8 += 3;
        if ( !v10 )
        {
          v8 = 0;
          break;
        }
      }
      v11 = FIELD_U32(a1, 8);
      if ( v8 >= v11 )
        v8 = v11 - 1;
      qmemcpy(v4, v7, v8);
      *((_BYTE *)v4 + v8) = 0;
    }
  }
}
