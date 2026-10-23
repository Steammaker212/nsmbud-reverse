/* sub_608E798C
 * address: 0x608E798C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608E798C(int a1, int a2, _DWORD *a3)
{
  void *v5; // r4
  const void *v6; // r6
  int v7; // r0
  signed int v8; // r7
  bool v9; // cc
  signed int v10; // r0

  v5 = *(void **)(a2 + 4);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v6 = (const void *)a3[1];
  if ( v5 != v6 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v7 = a3[1];
    v8 = 0;
    while ( *(_BYTE *)(v7 + v8) )
    {
      if ( !*(_BYTE *)(v7 + v8 + 1) )
      {
        ++v8;
        break;
      }
      if ( !*(_BYTE *)(v7 + v8 + 2) )
      {
        v8 += 2;
        break;
      }
      v9 = v8 + 2 < 0x80000;
      v8 += 3;
      if ( !v9 )
      {
        v8 = 0;
        break;
      }
    }
    v10 = FIELD_U32(a2, 8);
    if ( v8 >= v10 )
      v8 = v10 - 1;
    qmemcpy(v5, v6, v8);
    *((_BYTE *)v5 + v8) = 0;
  }
}
