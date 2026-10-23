/* sub_608FDC20
 * address: 0x608FDC20   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FDC20(int a1, _DWORD *a2)
{
  void *v4; // r5
  const void *v5; // r6
  int v6; // r0
  int v7; // r7
  int v8; // r1
  _WORD *i; // r0
  int v10; // r0

  v4 = *(void **)(a1 + 4);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v5 = (const void *)a2[1];
  if ( v4 != v5 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v6 = a2[1];
    v7 = 0;
    v8 = 1;
    for ( i = (_WORD *)(v6 + 2); *(i - 1); i += 2 )
    {
      if ( v8 - 1 >= 0x80000 )
      {
        v7 = 0;
        break;
      }
      if ( !*i )
      {
        v7 = v8;
        break;
      }
      v8 += 2;
      v7 += 2;
    }
    v10 = FIELD_U32(a1, 8);
    if ( v7 >= v10 )
      v7 = v10 - 1;
    qmemcpy(v4, v5, 2 * v7);
    *((_WORD *)v4 + v7) = 0;
  }
  return a1;
}
