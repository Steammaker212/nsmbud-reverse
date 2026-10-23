/* sub_6042EBB8
 * address: 0x6042EBB8   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_6042EBB8(sead_IDisposer *a1)
{
  char *v2; // r7
  int v3; // r2
  int *i; // r1
  int vtable; // r6
  char *v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r0

  sead_IDisposer_ctor(a1);
  v2 = (char *)&a1[3].field_C;
  v3 = 52;
  FIELD_U32(a1, 0x0) = (int)off_60BFA5D0;
  a1[1].vtable = 0;
  a1[1].containingHeap = 0;
  a1[1].field_C = 0;
  a1[2].vtable = 0;
  a1[2].field_8 = 0;
  a1[2].field_C = 0;
  a1[3].containingHeap = 0;
  a1[3].field_8 = 0;
  a1[3].field_C = (int)&a1[3].field_C;
  a1[4].vtable = (int)&a1[3].field_C;
  a1[4].containingHeap = 0;
  a1[4].field_8 = (int)&a1[5].containingHeap;
  a1[4].field_C = 0;
  a1[5].vtable = 0;
  for ( i = &a1[11].field_8; ; i += 50 )
  {
    *(i - 25) = (int)i;
    if ( !v3 )
      break;
    v3 -= 2;
    *i = (int)(i + 25);
  }
  a1[336].field_8 = 0;
  a1[4].field_C = (int)&a1[5].containingHeap;
  a1[5].vtable = 54;
  nn__mii__Database__ctor((nn__mii__Database *)&a1[343]);
  vtable = a1[4].vtable;
  if ( (char *)vtable != v2 )
  {
    do
    {
      v6 = *(char **)(vtable + 4);
      sead__ListNode__erase(vtable);
      --a1[4].containingHeap;
      *(_DWORD *)(vtable - 92) = a1[4].field_8;
      v7 = vtable - 92;
      vtable = (int)v6;
      a1[4].field_8 = v7;
    }
    while ( v6 != v2 );
  }
  a1[3].containingHeap = 0;
  a1[3].field_8 = 0;
  v8 = sub_608DE334(0x23F0u, 0, 4);
  if ( v8 )
  {
    a1[1].vtable = 100;
    a1[1].containingHeap = v8;
  }
  a1[1].field_8 = 0;
  v9 = sub_608DE334(0x228u, 0, 4);
  if ( v9 )
  {
    a1[2].field_8 = 6;
    a1[2].field_C = v9;
  }
  a1[3].vtable = 6;
  nn__mii__Database__Initialize((nn__mii__Database *)&a1[343]);
  return a1;
}
