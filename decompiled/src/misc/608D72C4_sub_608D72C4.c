/* sub_608D72C4
 * address: 0x608D72C4   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D72C4(int a1)
{
  int *v2; // r4
  int *v3; // r7
  int *v4; // r5
  int *v5; // r1
  int v6; // r2

  nn__os__WaitEvent(a1 + 1932);
  nn__os__WaitEvent(a1 + 1984);
  v2 = *(int **)(a1 + 2028);
  v3 = (int *)(a1 + 2024);
  if ( v2 != (int *)(a1 + 2024) )
  {
    do
    {
      v4 = (int *)v2[1];
      nn__os__WaitEvent(v2 - 29);
      if ( v2 != v3 )
      {
        v5 = (int *)v2[1];
        v6 = *v5;
        *(_DWORD *)(*v2 + 4) = v5;
        *v5 = *v2;
        FIELD_U32(v6, 4) = v2;
        *v2 = v6;
      }
      (*(void (__fastcall **)(int *))*(v2 - 32))(v2 - 32);
      sub_608C66F8((_DWORD *)(a1 + 2032), v2 - 32);
      v2 = v4;
    }
    while ( v4 != v3 );
  }
  FIELD_U32(a1, 720) = 0;
  FIELD_U32(a1, 724) = -1;
  FIELD_U32(a1, 728) = 0;
  FIELD_U16(a1, 744) = 0;
  FIELD_U32(a1, 736) = 0;
  FIELD_U32(a1, 740) = 0;
  sub_608D4758(a1 + 768);
  FIELD_U32(a1, 6396) = 2;
  FIELD_U32(a1, 36) = -1;
  FIELD_U32(a1, 9988) = 0;
  FIELD_U32(a1, 9984) = 0;
  return 9984;
}
