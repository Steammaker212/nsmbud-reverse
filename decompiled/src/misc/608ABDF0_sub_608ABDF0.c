/* sub_608ABDF0
 * address: 0x608ABDF0   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ABDF0(int a1, int a2, int a3, int a4)
{
  int v7; // r6
  unsigned int *v8; // r0
  unsigned int v9; // r2
  unsigned int *v10; // r0
  void *v11; // r5
  int v12; // r0

  v7 = 0;
  if ( (int)(((a3 + 4 * sub_608A99FC(a2) + 7) & 0xFFFFFFFC) - (a3 + a4)) <= 0 )
  {
    FIELD_U32(a1, 536) = a3;
    **(_DWORD **)(a1 + 536) = sub_608A99FC(a2);
    v8 = *(unsigned int **)(a1 + 536);
    if ( *v8 )
    {
      v9 = 0;
      do
      {
        v10 = &v8[v9++];
        v10[1] = 0;
        v8 = *(unsigned int **)(a1 + 536);
      }
      while ( v9 < *v8 );
    }
    sub_608B2C20(a1 + 12, a2);
    v11 = sub_608C3B10();
    v7 = 1;
    v12 = sub_608C2698(v11, 20, 1);
    FIELD_U32(v12, 4) = 67;
    FIELD_U32(v12, 16) = a1;
    sub_608C2C1C(v11);
  }
  return v7;
}
