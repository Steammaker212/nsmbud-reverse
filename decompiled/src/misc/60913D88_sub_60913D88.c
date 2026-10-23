/* sub_60913D88
 * address: 0x60913D88   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913D88(int a1, int a2, int CurrentHeap_const, int a4, int a5)
{
  int result; // r0

  if ( !CurrentHeap_const )
    CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  result = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U8(a1, 20) &= ~1u;
  FIELD_U16(a1, 22) = 0;
  if ( a2 )
  {
    result = sub_60915628(dword_60CCFC84, a1, CurrentHeap_const, a2, a4, a5);
    if ( result == 1 )
      FIELD_U16(a1, 22) = a5;
  }
  FIELD_U16(a1, 22) = a5;
  return result;
}
