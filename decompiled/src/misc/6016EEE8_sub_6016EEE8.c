/* sub_6016EEE8
 * address: 0x6016EEE8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016EEE8(int result, _DWORD *a2, int a3)
{
  float v3; // r3

  FIELD_U32(result, 664) = *a2;
  FIELD_U32(result, 668) = a2[1];
  v3 = flt_60AF7994[a3];
  FIELD_U32(result, 672) = a2[2];
  FIELD_U32(result, 880) = 0;
  FIELD_U32(result, 768) = a3;
  FIELD_U32(result, 752) = 0;
  FIELD_U32(result, 748) = 0;
  FIELD_U8(result, 1369) = 0;
  FIELD_U32(result, 776) = 0;
  FIELD_F32(result, 644) = v3;
  FIELD_U32(result, 640) = dword_60AF795C[a3];
  FIELD_U32(result, 648) = dword_60AF79CC[a3];
  FIELD_U8(result, 1371) = a3 != 0;
  FIELD_U32(result, 848) = 0;
  if ( a3 )
    FIELD_U32(result, 776) = 5;
  return result;
}
