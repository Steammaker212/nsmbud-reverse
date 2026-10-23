/* sub_6097F690
 * address: 0x6097F690   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097F690(int a1, int a2)
{
  void *v4; // r9
  const char **v5; // r0
  char *v6; // r0
  int i; // r2
  int v8; // r0
  int result; // r0

  v4 = (void *)sub_609908C0();
  FIELD_U8(a1, 64) |= 1u;
  FIELD_U32(a1, 184) = sub_6097DC6C(v4, a1, a2, (_BYTE *)(a1 + 180));
  v5 = sub_6085982C(a1, "DynamicCaptureOn");
  if ( v5 )
  {
    v6 = (char *)&v5[1][(_DWORD)v5];
    if ( v6 == "R10G10B10A2" )
    {
LABEL_8:
      FIELD_U8(a1, 180) |= 4u;
    }
    else
    {
      for ( i = 0; i <= 0x80000; ++i )
      {
        if ( v6[i] != aR10g10b10a2[i] )
          break;
        if ( !v6[i] )
          goto LABEL_8;
      }
    }
  }
  CaptureOutputAlpha_ref(a1, (_BYTE *)(a1 + 180));
  FIELD_U8(a1, 180) |= 0x10u;
  v8 = sub_6098F0E0(v4, a1, a2);
  FIELD_U32(a1, 188) = v8;
  if ( v8 )
    sub_609A70BC(v8, 1);
  FIELD_U32(a1, 248) = a1 + 288;
  FIELD_U32(a1, 80) = 1065353216;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 96) = 0;
  FIELD_U32(a1, 100) = 1065353216;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 120) = 1065353216;
  FIELD_U32(a1, 124) = 0;
  result = FIELD_U8(a1, 64) | 0x40;
  FIELD_U8(a1, 64) = result;
  return result;
}
