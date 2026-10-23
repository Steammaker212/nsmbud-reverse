/* sub_608DA55C
 * address: 0x608DA55C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608DA55C(_DWORD *a1)
{
  void *v2; // r0
  int v3; // r0
  int v4; // r0
  void *v5; // r0

  *a1 = off_60C5BB08;
  sub_608A937C(a1[3]);
  v2 = (void *)a1[4];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    a1[4] = 0;
  }
  v3 = a1[5];
  if ( v3 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
    a1[5] = 0;
  }
  v4 = a1[3];
  if ( v4 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    a1[3] = 0;
  }
  v5 = (void *)nullsub_2213(a1);
  operator_delete(v5);
}
