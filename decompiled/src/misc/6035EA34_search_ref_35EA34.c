/* search_ref_35EA34
 * address: 0x6035EA34   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall search_ref_35EA34(int a1)
{
  int v2; // r5
  int result; // r0
  float v4; // s16
  int v5; // r0
  unsigned int v6; // r0
  float v7; // s0
  _DWORD v8[8]; // [sp+0h] [bp-20h] BYREF

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60C9578C + 8))();
  if ( v2 != result )
  {
    v4 = 0.0;
    v5 = FIELD_U32(a1, 6304);
    v8[0] = &sead__SafeStringBase__vtable;
    v8[1] = "search";
    sub_6040F4B8(v5, v8, 1);
    FIELD_U32(a1, 116) = 1158250496;
    v6 = FIELD_U8(a1, 6921);
    FIELD_U32(a1, 80) = v6;
    if ( v6 < 2 )
    {
      FIELD_U32(a1, 104) = 1031798784;
      FIELD_U32(a1, 100) = 0;
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 124) = 0;
      FIELD_U32(a1, 128) = 0;
      v7 = flt_60AF1F88[v6];
LABEL_11:
      FIELD_U32(a1, 140) = 0;
      FIELD_F32(a1, 132) = v7;
      FIELD_F32(a1, 136) = v4;
      sub_6035FB00(a1);
      sub_6035F908(a1);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 640))(a1);
    }
    if ( v6 == 2 )
    {
      v7 = 0.0;
      v4 = -3.0;
    }
    else
    {
      if ( v6 != 3 )
      {
        v7 = -3.0;
        FIELD_U32(a1, 104) = 1031798784;
        FIELD_U32(a1, 100) = 0;
        goto LABEL_10;
      }
      v7 = 0.0;
      v4 = 3.0;
    }
    FIELD_U32(a1, 104) = 0;
    FIELD_U32(a1, 100) = 1031798784;
LABEL_10:
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
    goto LABEL_11;
  }
  return result;
}
