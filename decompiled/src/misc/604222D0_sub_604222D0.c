/* sub_604222D0
 * address: 0x604222D0   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604222D0(int a1)
{
  int v2; // r5

  *(_DWORD *)a1 = off_60BF9F70;
  v2 = a1 + 368;
  nullsub_1355(a1 + 704);
  sead__CriticalSection__dtor((_DWORD *)(a1 + 648));
  nullsub_111(a1 + 540);
  nullsub_113(v2);
  FIELD_U32(a1, 264) = off_60BFA048;
  sead__MethodTreeNode__detachAll(a1 + 264);
  sead__IDisposer__dtor((_DWORD *)(a1 + 264));
  FIELD_U32(a1, 184) = off_60BFA048;
  sead__MethodTreeNode__detachAll(a1 + 184);
  sead__IDisposer__dtor((_DWORD *)(a1 + 184));
  sub_60954610(a1 + 116);
  if ( FIELD_U8(a1, 112) )
    dword_60C9BB38 = 0;
  return sead__TaskBase__dtor(a1);
}
