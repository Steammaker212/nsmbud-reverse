/* sub_608F0CF0
 * address: 0x608F0CF0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F0CF0(int a1, _DWORD *a2)
{
  int v4; // r4
  int v5; // r5
  int v6; // r0
  bool v7; // zf
  int v8; // r0

  v4 = a1 + 4;
  sead__CriticalSection__lock(a1 + 4);
  v5 = 0;
  v6 = a2[12] & 6;
  v7 = v6 == 6;
  if ( v6 == 6 )
    v7 = a2[24] == 4;
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = a2[5];
      if ( !v8 )
        break;
      if ( !sub_608F0CF0(a1, FIELD_U32(v8, 16)) )
        goto LABEL_9;
    }
    v5 = 1;
  }
LABEL_9:
  sead__CriticalSection__unlock(v4);
  return v5;
}
