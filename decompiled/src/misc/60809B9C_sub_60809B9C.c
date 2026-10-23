/* sub_60809B9C
 * address: 0x60809B9C   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60809B9C(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v10; // r0
  int v11; // r0

  if ( !a3 )
  {
    FIELD_U32(a1, 148) = 0;
    FIELD_U32(a1, 152) = 0;
    SE_DUMMY_ref(dword_60CC6B0C);
    FIELD_U8(a1, 146) = 0;
    v10 = FIELD_U32(a1, 72);
    if ( v10 )
    {
      sub_608AF208(v10, 0);
      FIELD_U8(a1, 144) = 0;
    }
    FIELD_U8(a1, 146) = 0;
    FIELD_U8(a1, 47) = 0;
    v11 = FIELD_U32(a1, 76);
    if ( v11 )
    {
      sub_608AF208(v11, a2);
      FIELD_U8(a1, 45) = 0;
      return 1;
    }
    return 0;
  }
  FIELD_U8(a1, 146) = 0;
  v5 = FIELD_U32(a1, 72);
  if ( v5 )
  {
    sub_608AF208(v5, 0);
    FIELD_U8(a1, 144) = 0;
  }
  FIELD_U8(a1, 146) = 0;
  FIELD_U8(a1, 47) = 0;
  v6 = FIELD_U32(a1, 76);
  if ( !v6 )
    return 0;
  sub_608AF328(v6, 1, a2);
  v7 = FIELD_U32(a1, 76);
  if ( v7 )
  {
    sub_608AF1C4(v7, 0);
    v8 = FIELD_U32(a1, 76);
    if ( v8 )
      sub_608AF2F4(v8, 0);
  }
  FIELD_U8(a1, 45) = 0;
  return 1;
}
