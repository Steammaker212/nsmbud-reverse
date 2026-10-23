/* sub_6080A1A0
 * address: 0x6080A1A0   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A1A0(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

  v4 = FIELD_U32(a1, 64);
  if ( v4 )
  {
    sub_608AF208(v4, a2);
    FIELD_U8(a1, 44) = 0;
    SE_DUMMY_ref(dword_60CC6B0C);
  }
  v5 = FIELD_U32(a1, 68);
  if ( v5 )
  {
    sub_608AF208(v5, a2);
    FIELD_U8(a1, 46) = 0;
  }
  FIELD_U8(a1, 146) = 0;
  FIELD_U8(a1, 47) = 0;
  v6 = FIELD_U32(a1, 76);
  if ( v6 )
  {
    sub_608AF208(v6, a2);
    FIELD_U8(a1, 45) = 0;
  }
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 152) = 0;
  SE_DUMMY_ref(dword_60CC6B0C);
  FIELD_U8(a1, 146) = 0;
  v7 = FIELD_U32(a1, 72);
  if ( v7 )
  {
    sub_608AF208(v7, 0);
    FIELD_U8(a1, 144) = 0;
  }
  FIELD_U8(a1, 146) = 0;
  FIELD_U8(a1, 47) = 0;
  v8 = FIELD_U32(a1, 76);
  if ( v8 )
  {
    sub_608AF208(v8, a2);
    FIELD_U8(a1, 45) = 0;
  }
  FIELD_U32(a1, 44) = 0;
  return SE_DUMMY_ref(dword_60CC6B0C);
}
