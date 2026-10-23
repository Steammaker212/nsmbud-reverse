/* sub_6066AB48
 * address: 0x6066AB48   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066AB48(int a1)
{
  _BYTE *v2; // r0
  char v3; // r1
  int v4; // t1
  char v5; // r1
  int v6; // r0
  float v7; // s0

  v4 = FIELD_U8(a1, 7201);
  v2 = (_BYTE *)(a1 + 7201);
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    *v2 = v5;
    if ( !v5 )
      goto LABEL_7;
LABEL_6:
    v6 = FIELD_U32(dword_60C99DD4, 1052);
    FIELD_F32(a1, 7192) = (float)(*(float *)((char *)sinLutTable + ((v6 << 8) & 0xF00))
                                  + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v6 << 8) & 0xF00)) * 0.0)
                                          * 0.000000059605))
                          * 0.5;
    v7 = (float)(*(float *)((char *)sinLutTable + ((v6 << 9) & 0xE00))
               + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v6 << 9) & 0xE00)) * 0.0) * 0.000000059605))
       * 0.5;
    goto LABEL_8;
  }
  if ( FIELD_U8(a1, 7200) )
  {
    *v2 = 32;
    goto LABEL_6;
  }
LABEL_7:
  v7 = 0.0;
  FIELD_U32(a1, 7192) = 0;
LABEL_8:
  FIELD_F32(a1, 7196) = v7;
  sub_6066A9C4(a1);
  if ( !sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) )
    sub_606D27A4(a1);
  FIELD_U8(a1, 7200) = 0;
  return 7200;
}
