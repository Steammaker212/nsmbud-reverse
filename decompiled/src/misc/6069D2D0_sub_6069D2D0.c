/* sub_6069D2D0
 * address: 0x6069D2D0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069D2D0(_DWORD *a1, int a2, int a3, int a4)
{
  int result; // r0

  a1[6] = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  a1[7] = a2;
  a1[8] = a3;
  a1[9] = a4;
  if ( sub_607F6904(dword_60CC62E4) || (result = FIELD_U32(dword_60C99DD4, 764), result == 3) )
  {
    do
      result = sub_6069D354(a1);
    while ( result != 1 );
  }
  return result;
}
