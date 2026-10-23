/* sub_60805474
 * address: 0x60805474   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60805474(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  void *v4; // r5
  int v5; // r7
  int v6; // r6
  void *v7; // r0
  int v8; // r0

  *a1 = off_60C27F18;
  v2 = a1[14];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 12);
    v4 = (void *)(v2 - 16);
    if ( v3 )
    {
      v5 = v2 - 176;
      v6 = 176 * v3;
      do
      {
        nullsub_2211(v5 + v6);
        v6 -= 176;
      }
      while ( v6 );
    }
    operator_delete_8DE3FC(v4);
    a1[14] = 0;
  }
  if ( a1[15] )
  {
    v7 = (void *)nullsub_2212();
    operator_delete(v7);
    a1[15] = 0;
  }
  v8 = a1[16];
  if ( v8 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
    a1[16] = 0;
  }
  return sub_608DA4D4(a1);
}
