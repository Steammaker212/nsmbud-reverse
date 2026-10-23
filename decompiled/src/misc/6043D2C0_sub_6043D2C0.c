/* sub_6043D2C0
 * address: 0x6043D2C0   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043D2C0(int a1)
{
  void *v2; // r5
  void *v3; // r0
  void *v4; // r0
  int result; // r0

  v2 = (void *)(a1 + 4);
  if ( FIELD_U32(a1, 124) )
  {
    sub_60873388(a1 + 4, FIELD_U32(dword_60CCFC8C, 24));
    sub_60913CF0(a1 + 116);
  }
  v3 = *(void **)(a1 + 76);
  if ( v3 )
    operator_delete(v3);
  v4 = *(void **)(a1 + 100);
  if ( v4 )
    operator_delete(v4);
  FIELD_U16(a1, 68) = 0;
  FIELD_U32(a1, 64) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 76) = 0;
  result = memset(v2, 0, 41);
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 96) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 144) = 0;
  return result;
}
