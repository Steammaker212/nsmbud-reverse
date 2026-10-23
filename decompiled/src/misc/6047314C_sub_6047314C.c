/* sub_6047314C
 * address: 0x6047314C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047314C(int a1, _DWORD *a2)
{
  void *v4; // r5
  const void *v5; // r8
  int v6; // r1
  int v7; // r0
  int v8; // r7
  _WORD *i; // r0
  int v10; // r0

  v4 = *(void **)(a1 + 4);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v5 = (const void *)a2[1];
  if ( v4 != v5 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v6 = 1;
    v7 = a2[1];
    v8 = 0;
    for ( i = (_WORD *)(v7 + 2); *(i - 1); i += 2 )
    {
      if ( v6 - 1 >= 0x80000 )
      {
        v8 = 0;
        break;
      }
      if ( !*i )
      {
        v8 = v6;
        break;
      }
      v6 += 2;
      v8 += 2;
    }
    v10 = FIELD_U32(a1, 8);
    if ( v8 >= v10 )
      v8 = v10 - 1;
    qmemcpy(v4, v5, 2 * v8);
    *((_WORD *)v4 + v8) = 0;
  }
  return a1;
}
