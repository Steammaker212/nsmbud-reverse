/* sub_609AB694
 * address: 0x609AB694   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609AB694(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r7
  int v4; // r1
  void *v5; // r8
  int v6; // r6
  int v7; // r5
  int result; // r0
  _DWORD *v9; // r4
  int v10; // t1

  v3 = a1 + 1076;
  v2 = a1[1076];
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 - 4);
    v5 = (void *)(v2 - 8);
    if ( v4 )
    {
      v6 = v2 + 344 * v4 - 344;
      v7 = -344 * v4;
      do
      {
        sub_609175E4(v6 + 80);
        sub_60917AE4(v6);
        v7 += 344;
        v6 -= 344;
      }
      while ( v7 );
    }
    operator_delete_8DE3FC(v5);
    *v3 = 0;
    a1[1075] = 0;
  }
  sub_60913ABC((int)(a1 + 1072));
  v10 = a1[1259];
  v9 = a1 + 1259;
  result = v10;
  if ( v10 )
  {
    nullsub_124();
    if ( *v9 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v9 + 4))(*v9);
    *v9 = 0;
    return 0;
  }
  return result;
}
