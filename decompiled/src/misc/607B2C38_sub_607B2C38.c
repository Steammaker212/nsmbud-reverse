/* sub_607B2C38
 * address: 0x607B2C38   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B2C38(int a1)
{
  int v2; // r4
  float *v3; // r0
  float *v4; // r6
  bool v5; // zf
  int v6; // r0
  float v7; // s16
  float v8; // s18

  v2 = 0;
  if ( (FIELD_U8(a1, 6905) & 0x10) != 0 )
  {
    v3 = (float *)sub_6079D894(a1);
    v4 = v3;
    v5 = v3 == 0;
    if ( v3 )
      v5 = ((_BYTE)v3[306] & 0x80) == 0;
    if ( !v5 && !(*(int (__fastcall **)(float *))(*(_DWORD *)v3 + 1064))(v3) )
    {
      v7 = FIELD_F32(a1, 112);
      v8 = FIELD_F32(a1, 6872);
      sub_6079EA38((_DWORD *)a1);
      v4[28] = (float)(v7 + v8) - v4[1718];
      *((_DWORD *)v4 + 1726) |= 0x1000u;
      v6 = (int)v4;
      goto LABEL_11;
    }
    if ( (FIELD_U8(a1, 1224) & 0x80) != 0
      && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1)
      && FIELD_F32(a1, 124) >= 0.0 )
    {
      v6 = a1;
LABEL_11:
      Player_changeState(v6, (StateBase *)&dword_60CC512C, 0);
      return 1;
    }
  }
  return v2;
}
