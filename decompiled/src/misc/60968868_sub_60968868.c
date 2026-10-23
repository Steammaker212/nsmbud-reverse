/* sub_60968868
 * address: 0x60968868   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60968868(int a1, unsigned int a2)
{
  int v4; // r4
  unsigned int v5; // r0
  int v6; // r6

  v4 = a1 + 32;
  sead__CriticalSection__lock(a1 + 32);
  v5 = FIELD_U32(a1, 24);
  v6 = FIELD_U32(a1, 28);
  if ( v5 > a2 )
    v6 += 16 * a2;
  if ( *(_DWORD *)v6 )
  {
    operator_delete_8DE3FC(*(void **)v6);
    *(_DWORD *)v6 = 0;
    FIELD_U32(v6, 4) = 0;
    FIELD_U32(v6, 8) = 0;
  }
  return sead__CriticalSection__unlock(v4);
}
