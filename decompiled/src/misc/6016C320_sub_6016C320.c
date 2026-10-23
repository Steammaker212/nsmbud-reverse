/* sub_6016C320
 * address: 0x6016C320   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016C320(int a1)
{
  int v2; // r0
  float v3; // s4
  float v4; // s2
  float v5; // s0
  float v6; // s18
  int *v7; // r1
  float v8; // s0
  float v9; // s16
  float v10; // s0
  float v11; // s10
  float v12; // s1
  float v13; // s0
  float v14; // s2
  float v15; // s6
  float v16; // s0
  float v17; // s2
  float v18; // s10
  float v19; // s8
  float v20; // s8
  float v21; // s10
  float v22; // s12

  switch ( FIELD_U32(a1, 768) )
  {
    case 0:
      sub_6016C7D4(a1);
      goto LABEL_25;
    case 1:
      ((void (__fastcall *)(int))loc_6016C978)(a1);
      goto LABEL_25;
    case 2:
    case 0xA:
      sub_6016CC0C(a1);
      goto LABEL_25;
    case 3:
      sub_6016CDA0(a1);
      goto LABEL_25;
    case 4:
      sub_6016CF90(a1);
      goto LABEL_25;
    case 5:
      v2 = FIELD_U32(a1, 776);
      if ( v2 )
      {
        if ( v2 != 1 )
          goto LABEL_25;
        v3 = FIELD_F32(a1, 664);
        v4 = FIELD_F32(a1, 668);
        v5 = FIELD_F32(a1, 672);
      }
      else
      {
        v3 = FIELD_F32(a1, 664);
        v4 = FIELD_F32(a1, 668);
        v5 = FIELD_F32(a1, 672);
        v18 = v5 + FIELD_F32(a1, 1048);
        v19 = v4 + FIELD_F32(a1, 1044);
        FIELD_F32(a1, 784) = v3 + FIELD_F32(a1, 1040);
        FIELD_F32(a1, 788) = v19;
        FIELD_F32(a1, 792) = v18;
        FIELD_U32(a1, 776) = 1;
      }
      v20 = FIELD_F32(a1, 756);
      FIELD_F32(a1, 652) = FIELD_F32(a1, 652) + v20;
      v21 = FIELD_F32(a1, 760);
      FIELD_F32(a1, 656) = FIELD_F32(a1, 656) + v21;
      v22 = FIELD_F32(a1, 764);
      FIELD_F32(a1, 660) = FIELD_F32(a1, 660) + v22;
      FIELD_F32(a1, 664) = v3 + v20;
      FIELD_F32(a1, 668) = v4 + v21;
      FIELD_F32(a1, 672) = v5 + v22;
      FIELD_U32(a1, 756) = dword_60C88B08;
      FIELD_U32(a1, 760) = dword_60C88B0C;
      FIELD_U32(a1, 764) = dword_60C88B10;
LABEL_25:
      sub_6016DE7C(a1);
      if ( !FIELD_U8(a1, 1370) )
      {
        sub_6016E18C(a1);
        FIELD_U8(a1, 1370) = 1;
      }
      return sub_6016E18C(a1);
    case 6:
      sub_6016D3EC(a1);
      goto LABEL_25;
    case 7:
      sub_6016D574(a1);
      goto LABEL_25;
    case 8:
      sub_6016D6F0(a1);
      goto LABEL_25;
    case 9:
      if ( !FIELD_U32(a1, 776) )
        FIELD_U32(a1, 776) = 1;
      v6 = FIELD_F32(a1, 848);
      if ( FIELD_U8(a1, 1374) )
        v6 = v6 + FIELD_F32(a1, 864);
      v7 = dword_6016C5F4;
      if ( FIELD_U32(a1, 1360) == 8 )
        v7 = &dword_6016C5F4[1];
      v8 = FIELD_F32(a1, 696) + *(float *)v7;
      FIELD_F32(a1, 692) = v8;
      v9 = cosf(v8);
      v10 = sinf(FIELD_F32(a1, 692));
      v11 = FIELD_F32(a1, 672);
      v12 = FIELD_F32(a1, 1048);
      v13 = (float)(v6 + 2540.0) * v10;
      v14 = (float)(v6 + 2540.0) * v9;
      v15 = v13 + (float)(FIELD_F32(a1, 668) + FIELD_F32(a1, 1044));
      FIELD_F32(a1, 652) = (float)(FIELD_F32(a1, 664) + FIELD_F32(a1, 1040)) + 0.0;
      FIELD_F32(a1, 656) = v15;
      FIELD_F32(a1, 660) = v14 + (float)(v11 + v12);
      v16 = v13 + FIELD_F32(a1, 832);
      v17 = v14 + FIELD_F32(a1, 836);
      FIELD_F32(a1, 816) = FIELD_F32(a1, 828) + 0.0;
      FIELD_F32(a1, 820) = v16;
      FIELD_F32(a1, 824) = v17;
      goto LABEL_25;
    case 0xB:
      sub_6016D938(a1);
      goto LABEL_25;
    case 0xC:
      sub_6016DB58(a1);
      goto LABEL_25;
    case 0xD:
      sub_6016DCF4(a1);
      goto LABEL_25;
    default:
      goto LABEL_25;
  }
}
